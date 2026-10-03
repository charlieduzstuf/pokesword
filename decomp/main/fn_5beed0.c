/* main functions 005beed0..005dfc40 (37 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 005beed0 size=720 callers=2 calls=5
   calls: sub_5be6b0, sub_5be770, sub_5be7b0, sub_5beed0, sub_5bfd70
*/
void sub_5beed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5beed0ULL || rel >= 0x5bf1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf1a0 size=336 callers=2 calls=2
   calls: sub_5bf1a0, sub_5bf2f0
*/
void sub_5bf1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf1a0ULL || rel >= 0x5bf2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf2f0 size=528 callers=2 calls=1
   calls: sub_5bf2f0
*/
void sub_5bf2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf2f0ULL || rel >= 0x5bf500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf500 size=368 callers=0 calls=2
   calls: sub_5bf810, sub_5bf9a0
*/
void sub_5bf500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf500ULL || rel >= 0x5bf670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf670 size=16 callers=0 calls=0
*/
void sub_5bf670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf670ULL || rel >= 0x5bf680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf680 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5bf680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf680ULL || rel >= 0x5bf6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf6f0 size=16 callers=0 calls=0
*/
void sub_5bf6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf6f0ULL || rel >= 0x5bf700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf700 size=16 callers=0 calls=0
*/
void sub_5bf700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf700ULL || rel >= 0x5bf710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf710 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5bf710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf710ULL || rel >= 0x5bf780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf780 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5bf780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf780ULL || rel >= 0x5bf7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf7f0 size=16 callers=0 calls=0
*/
void sub_5bf7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf7f0ULL || rel >= 0x5bf800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf800 size=16 callers=0 calls=0
*/
void sub_5bf800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf800ULL || rel >= 0x5bf810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf810 size=400 callers=2 calls=0
*/
void sub_5bf810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf810ULL || rel >= 0x5bf9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bf9a0 size=224 callers=2 calls=1
   calls: sub_5bfa80
*/
void sub_5bf9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf9a0ULL || rel >= 0x5bfa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bfa80 size=224 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_5bfa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bfa80ULL || rel >= 0x5bfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bfb60 size=528 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_d260
*/
void sub_5bfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bfb60ULL || rel >= 0x5bfd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bfd70 size=576 callers=1 calls=0
*/
void sub_5bfd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bfd70ULL || rel >= 0x5bffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005bffb0 size=1088 callers=1 calls=4
   calls: sub_5bfa80, sub_5c0560, sub_5c0930, sub_5c0a90
*/
void sub_5bffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bffb0ULL || rel >= 0x5c03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c03f0 size=80 callers=1 calls=1
   calls: sub_5c0ab0
*/
void sub_5c03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c03f0ULL || rel >= 0x5c0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0440 size=32 callers=0 calls=0
*/
void sub_5c0440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0440ULL || rel >= 0x5c0460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0460 size=256 callers=0 calls=0
*/
void sub_5c0460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0460ULL || rel >= 0x5c0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0560 size=272 callers=2 calls=0
*/
void sub_5c0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0560ULL || rel >= 0x5c0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0670 size=704 callers=0 calls=0
*/
void sub_5c0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0670ULL || rel >= 0x5c0930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0930 size=352 callers=1 calls=0
*/
void sub_5c0930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0930ULL || rel >= 0x5c0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0a90 size=16 callers=1 calls=0
*/
void sub_5c0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0a90ULL || rel >= 0x5c0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0aa0 size=16 callers=2 calls=0
*/
void sub_5c0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0aa0ULL || rel >= 0x5c0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0ab0 size=320 callers=1 calls=4
   calls: sub_5bbb30, sub_5c0bf0, sub_5e26a0, sub_5e2930
*/
void sub_5c0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0ab0ULL || rel >= 0x5c0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c0bf0 size=2192 callers=1 calls=7
   calls: sub_5c1480, sub_5cf8e0, sub_5cf8f0, sub_5e2500, sub_5e6970, sub_df90, sub_e840
*/
void sub_5c0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c0bf0ULL || rel >= 0x5c1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1480 size=80 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_5c1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1480ULL || rel >= 0x5c14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c14d0 size=96 callers=0 calls=0
*/
void sub_5c14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c14d0ULL || rel >= 0x5c1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1530 size=112 callers=0 calls=1
   calls: sub_5c1b90
*/
void sub_5c1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1530ULL || rel >= 0x5c15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c15a0 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_5c15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c15a0ULL || rel >= 0x5c15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c15e0 size=160 callers=0 calls=1
   calls: sub_5e2850
*/
void sub_5c15e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c15e0ULL || rel >= 0x5c1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1680 size=96 callers=0 calls=0
*/
void sub_5c1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1680ULL || rel >= 0x5c16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c16e0 size=96 callers=0 calls=0
*/
void sub_5c16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c16e0ULL || rel >= 0x5c1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1740 size=112 callers=0 calls=1
   calls: sub_5c1b90
*/
void sub_5c1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1740ULL || rel >= 0x5c17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c17b0 size=112 callers=0 calls=1
   calls: sub_5c1b90
*/
void sub_5c17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c17b0ULL || rel >= 0x5c1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1820 size=96 callers=0 calls=0
*/
void sub_5c1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1820ULL || rel >= 0x5c1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1880 size=96 callers=0 calls=0
*/
void sub_5c1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1880ULL || rel >= 0x5c18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c18e0 size=96 callers=0 calls=0
*/
void sub_5c18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c18e0ULL || rel >= 0x5c1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1940 size=96 callers=0 calls=0
*/
void sub_5c1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1940ULL || rel >= 0x5c19a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c19a0 size=16 callers=0 calls=0
*/
void sub_5c19a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c19a0ULL || rel >= 0x5c19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c19b0 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_5c19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c19b0ULL || rel >= 0x5c19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c19f0 size=96 callers=0 calls=0
*/
void sub_5c19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c19f0ULL || rel >= 0x5c1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1a50 size=96 callers=0 calls=0
*/
void sub_5c1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1a50ULL || rel >= 0x5c1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1ab0 size=16 callers=0 calls=0
*/
void sub_5c1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1ab0ULL || rel >= 0x5c1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1ac0 size=16 callers=0 calls=0
*/
void sub_5c1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1ac0ULL || rel >= 0x5c1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1ad0 size=96 callers=0 calls=0
*/
void sub_5c1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1ad0ULL || rel >= 0x5c1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1b30 size=96 callers=0 calls=0
*/
void sub_5c1b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1b30ULL || rel >= 0x5c1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1b90 size=304 callers=3 calls=0
*/
void sub_5c1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1b90ULL || rel >= 0x5c1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c1cc0 size=1328 callers=1 calls=5
   calls: sub_5c21f0, sub_5c2400, sub_5c2670, sub_612ef0, sub_65d700
*/
void sub_5c1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c1cc0ULL || rel >= 0x5c21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c21f0 size=432 callers=1 calls=0
*/
void sub_5c21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c21f0ULL || rel >= 0x5c23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c23a0 size=96 callers=1 calls=1
   calls: sub_5c26a0
*/
void sub_5c23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c23a0ULL || rel >= 0x5c2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c2400 size=624 callers=1 calls=1
   calls: sub_5c2670
*/
void sub_5c2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c2400ULL || rel >= 0x5c2670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c2670 size=48 callers=2 calls=0
*/
void sub_5c2670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c2670ULL || rel >= 0x5c26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c26a0 size=3328 callers=1 calls=2
   calls: sub_612f70, sub_65cd70
*/
void sub_5c26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c26a0ULL || rel >= 0x5c33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c33a0 size=2000 callers=2 calls=9
   calls: SnBinaryDeserialization, SnSerializationRegistry_6, sub_5c3b70, sub_5c3c70, sub_5c3e00, sub_5c4b80, sub_5c4d70, sub_5c4f90, sub_612ef0
*/
void sub_5c33a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c33a0ULL || rel >= 0x5c3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c3b70 size=256 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_5c3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c3b70ULL || rel >= 0x5c3c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c3c70 size=400 callers=1 calls=0
*/
void sub_5c3c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c3c70ULL || rel >= 0x5c3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c3e00 size=352 callers=2 calls=0
*/
void sub_5c3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c3e00ULL || rel >= 0x5c3f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c3f60 size=3072 callers=1 calls=8
   calls: sub_5beec0, sub_5c0aa0, sub_5c33a0, sub_5c3b70, sub_612f70, sub_65cd70, sub_65cd90, sub_65d220
*/
void sub_5c3f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c3f60ULL || rel >= 0x5c4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c4b60 size=16 callers=0 calls=0
*/
void sub_5c4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c4b60ULL || rel >= 0x5c4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c4b70 size=16 callers=0 calls=0
*/
void sub_5c4b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c4b70ULL || rel >= 0x5c4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c4b80 size=496 callers=1 calls=0
*/
void sub_5c4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c4b80ULL || rel >= 0x5c4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c4d70 size=544 callers=1 calls=0
*/
void sub_5c4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c4d70ULL || rel >= 0x5c4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c4f90 size=448 callers=2 calls=0
*/
void sub_5c4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c4f90ULL || rel >= 0x5c5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5150 size=80 callers=1 calls=1
   calls: sub_5a0610
*/
void sub_5c5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5150ULL || rel >= 0x5c51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c51a0 size=16 callers=1 calls=0
*/
void sub_5c51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c51a0ULL || rel >= 0x5c51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c51b0 size=496 callers=6 calls=4
   calls: sub_5a0630, sub_5a0790, sub_5a07b0, sub_5a07d0
*/
void sub_5c51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c51b0ULL || rel >= 0x5c53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c53a0 size=160 callers=2 calls=1
   calls: sub_5a0870
*/
void sub_5c53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c53a0ULL || rel >= 0x5c5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5440 size=32 callers=2 calls=0
*/
void sub_5c5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5440ULL || rel >= 0x5c5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5460 size=32 callers=0 calls=0
*/
void sub_5c5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5460ULL || rel >= 0x5c5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5480 size=16 callers=1 calls=0
*/
void sub_5c5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5480ULL || rel >= 0x5c5490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5490 size=16 callers=5 calls=0
*/
void sub_5c5490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5490ULL || rel >= 0x5c54a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c54a0 size=32 callers=0 calls=0
*/
void sub_5c54a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c54a0ULL || rel >= 0x5c54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c54c0 size=256 callers=0 calls=0
*/
void sub_5c54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c54c0ULL || rel >= 0x5c55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c55c0 size=240 callers=0 calls=2
   calls: sub_5c56b0, sub_5c5800
*/
void sub_5c55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c55c0ULL || rel >= 0x5c56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c56b0 size=336 callers=1 calls=0
*/
void sub_5c56b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c56b0ULL || rel >= 0x5c5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5800 size=528 callers=1 calls=0
*/
void sub_5c5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5800ULL || rel >= 0x5c5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5a10 size=336 callers=0 calls=0
*/
void sub_5c5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5a10ULL || rel >= 0x5c5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5b60 size=640 callers=0 calls=0
*/
void sub_5c5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5b60ULL || rel >= 0x5c5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5de0 size=80 callers=1 calls=1
   calls: sub_5a0610
*/
void sub_5c5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5de0ULL || rel >= 0x5c5e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5e30 size=16 callers=1 calls=0
*/
void sub_5c5e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5e30ULL || rel >= 0x5c5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c5e40 size=496 callers=2 calls=4
   calls: sub_5a0630, sub_5a0790, sub_5a07b0, sub_5a07d0
*/
void sub_5c5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c5e40ULL || rel >= 0x5c6030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6030 size=160 callers=2 calls=1
   calls: sub_5a0870
*/
void sub_5c6030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6030ULL || rel >= 0x5c60d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c60d0 size=32 callers=2 calls=0
*/
void sub_5c60d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c60d0ULL || rel >= 0x5c60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c60f0 size=32 callers=0 calls=0
*/
void sub_5c60f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c60f0ULL || rel >= 0x5c6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6110 size=16 callers=0 calls=0
*/
void sub_5c6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6110ULL || rel >= 0x5c6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6120 size=80 callers=0 calls=0
*/
void sub_5c6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6120ULL || rel >= 0x5c6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6170 size=16 callers=0 calls=0
*/
void sub_5c6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6170ULL || rel >= 0x5c6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6180 size=512 callers=0 calls=0
*/
void sub_5c6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6180ULL || rel >= 0x5c6380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6380 size=80 callers=0 calls=0
*/
void sub_5c6380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6380ULL || rel >= 0x5c63d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c63d0 size=128 callers=13 calls=0
*/
void sub_5c63d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c63d0ULL || rel >= 0x5c6450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6450 size=16 callers=13 calls=0
*/
void sub_5c6450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6450ULL || rel >= 0x5c6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6460 size=48 callers=4 calls=0
*/
void sub_5c6460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6460ULL || rel >= 0x5c6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6490 size=176 callers=1 calls=1
   calls: sub_5c6540
*/
void sub_5c6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6490ULL || rel >= 0x5c6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6540 size=752 callers=1 calls=0
*/
void sub_5c6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6540ULL || rel >= 0x5c6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6830 size=32 callers=16 calls=0
*/
void sub_5c6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6830ULL || rel >= 0x5c6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6850 size=16 callers=38 calls=0
*/
void sub_5c6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6850ULL || rel >= 0x5c6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6860 size=16 callers=0 calls=0
*/
void sub_5c6860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6860ULL || rel >= 0x5c6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6870 size=16 callers=3 calls=0
*/
void sub_5c6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6870ULL || rel >= 0x5c6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6880 size=112 callers=1 calls=0
*/
void sub_5c6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6880ULL || rel >= 0x5c68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c68f0 size=64 callers=39 calls=0
*/
void sub_5c68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c68f0ULL || rel >= 0x5c6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6930 size=16 callers=20 calls=0
*/
void sub_5c6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6930ULL || rel >= 0x5c6940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6940 size=80 callers=0 calls=0
*/
void sub_5c6940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6940ULL || rel >= 0x5c6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6990 size=128 callers=5 calls=1
   calls: sub_5cc670
*/
void sub_5c6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6990ULL || rel >= 0x5c6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6a10 size=1056 callers=6 calls=2
   calls: sub_5c7ab0, sub_5cc690
*/
void sub_5c6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6a10ULL || rel >= 0x5c6e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6e30 size=48 callers=0 calls=1
   calls: sub_5c6a10
*/
void sub_5c6e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6e30ULL || rel >= 0x5c6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c6e60 size=3152 callers=5 calls=8
   calls: sub_5ca410, sub_5ca610, sub_5ca810, sub_5caa10, sub_5cac10, sub_5cacf0, sub_5cb020, sub_5cb100
*/
void sub_5c6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c6e60ULL || rel >= 0x5c7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c7ab0 size=1024 callers=7 calls=0
*/
void sub_5c7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c7ab0ULL || rel >= 0x5c7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c7eb0 size=432 callers=4 calls=2
   calls: sub_13ca4c0, sub_5cc6b0
*/
void sub_5c7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c7eb0ULL || rel >= 0x5c8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8060 size=384 callers=1 calls=1
   calls: sub_13ca4c0
*/
void sub_5c8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8060ULL || rel >= 0x5c81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c81e0 size=32 callers=1 calls=0
*/
void sub_5c81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c81e0ULL || rel >= 0x5c8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8200 size=32 callers=3 calls=0
*/
void sub_5c8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8200ULL || rel >= 0x5c8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8220 size=224 callers=4 calls=0
*/
void sub_5c8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8220ULL || rel >= 0x5c8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8300 size=224 callers=2 calls=0
*/
void sub_5c8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8300ULL || rel >= 0x5c83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c83e0 size=16 callers=4 calls=0
*/
void sub_5c83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c83e0ULL || rel >= 0x5c83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c83f0 size=16 callers=2 calls=0
*/
void sub_5c83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c83f0ULL || rel >= 0x5c8400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8400 size=736 callers=2 calls=1
   calls: sub_13ca4c0
*/
void sub_5c8400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8400ULL || rel >= 0x5c86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c86e0 size=736 callers=2 calls=1
   calls: sub_13ca4c0
*/
void sub_5c86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c86e0ULL || rel >= 0x5c89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c89c0 size=560 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_5c89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c89c0ULL || rel >= 0x5c8bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8bf0 size=64 callers=1 calls=1
   calls: sub_5c8c30
*/
void sub_5c8bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8bf0ULL || rel >= 0x5c8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8c30 size=416 callers=4 calls=2
   calls: sub_13ca4c0, sub_5c9430
*/
void sub_5c8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8c30ULL || rel >= 0x5c8dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8dd0 size=336 callers=18 calls=2
   calls: sub_13ca4c0, sub_5c8f20
*/
void sub_5c8dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8dd0ULL || rel >= 0x5c8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c8f20 size=1296 callers=1 calls=1
   calls: sub_5c99e0
*/
void sub_5c8f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8f20ULL || rel >= 0x5c9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c9430 size=1456 callers=1 calls=2
   calls: sub_5c99e0, sub_5c9d70
*/
void sub_5c9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c9430ULL || rel >= 0x5c99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c99e0 size=912 callers=2 calls=0
*/
void sub_5c99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c99e0ULL || rel >= 0x5c9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005c9d70 size=1696 callers=1 calls=0
*/
void sub_5c9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c9d70ULL || rel >= 0x5ca410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ca410 size=512 callers=1 calls=0
*/
void sub_5ca410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ca410ULL || rel >= 0x5ca610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ca610 size=512 callers=1 calls=0
*/
void sub_5ca610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ca610ULL || rel >= 0x5ca810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ca810 size=512 callers=1 calls=0
*/
void sub_5ca810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ca810ULL || rel >= 0x5caa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005caa10 size=512 callers=1 calls=0
*/
void sub_5caa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5caa10ULL || rel >= 0x5cac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cac10 size=224 callers=1 calls=1
   calls: sub_5cba90
*/
void sub_5cac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cac10ULL || rel >= 0x5cacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cacf0 size=336 callers=1 calls=0
*/
void sub_5cacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cacf0ULL || rel >= 0x5cae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cae40 size=480 callers=0 calls=0
*/
void sub_5cae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cae40ULL || rel >= 0x5cb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cb020 size=224 callers=1 calls=1
   calls: sub_5cbf40
*/
void sub_5cb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cb020ULL || rel >= 0x5cb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cb100 size=336 callers=1 calls=0
*/
void sub_5cb100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cb100ULL || rel >= 0x5cb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cb250 size=480 callers=0 calls=0
*/
void sub_5cb250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cb250ULL || rel >= 0x5cb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cb430 size=336 callers=0 calls=0
*/
void sub_5cb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cb430ULL || rel >= 0x5cb580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cb580 size=480 callers=0 calls=0
*/
void sub_5cb580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cb580ULL || rel >= 0x5cb760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cb760 size=336 callers=0 calls=0
*/
void sub_5cb760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cb760ULL || rel >= 0x5cb8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cb8b0 size=480 callers=0 calls=0
*/
void sub_5cb8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cb8b0ULL || rel >= 0x5cba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cba90 size=112 callers=2 calls=2
   calls: sub_5cbe20, sub_5e2350
*/
void sub_5cba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cba90ULL || rel >= 0x5cbb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbb00 size=48 callers=9 calls=1
   calls: sub_5cbe20
*/
void sub_5cbb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbb00ULL || rel >= 0x5cbb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbb30 size=80 callers=0 calls=0
*/
void sub_5cbb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbb30ULL || rel >= 0x5cbb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbb80 size=16 callers=0 calls=0
*/
void sub_5cbb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbb80ULL || rel >= 0x5cbb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbb90 size=80 callers=0 calls=0
*/
void sub_5cbb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbb90ULL || rel >= 0x5cbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbbe0 size=80 callers=0 calls=0
*/
void sub_5cbbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbbe0ULL || rel >= 0x5cbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbc30 size=16 callers=0 calls=0
*/
void sub_5cbc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbc30ULL || rel >= 0x5cbc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbc40 size=16 callers=0 calls=0
*/
void sub_5cbc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbc40ULL || rel >= 0x5cbc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbc50 size=80 callers=0 calls=0
*/
void sub_5cbc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbc50ULL || rel >= 0x5cbca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbca0 size=80 callers=0 calls=0
*/
void sub_5cbca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbca0ULL || rel >= 0x5cbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbcf0 size=304 callers=56 calls=0
*/
void sub_5cbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbcf0ULL || rel >= 0x5cbe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbe20 size=48 callers=4 calls=0
*/
void sub_5cbe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbe20ULL || rel >= 0x5cbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbe50 size=32 callers=14 calls=0
*/
void sub_5cbe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbe50ULL || rel >= 0x5cbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbe70 size=48 callers=3 calls=0
*/
void sub_5cbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbe70ULL || rel >= 0x5cbea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbea0 size=112 callers=1 calls=0
*/
void sub_5cbea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbea0ULL || rel >= 0x5cbf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbf10 size=48 callers=6 calls=0
*/
void sub_5cbf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbf10ULL || rel >= 0x5cbf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cbf40 size=256 callers=2 calls=3
   calls: sub_5cbe20, sub_5e2350, sub_65d700
*/
void sub_5cbf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbf40ULL || rel >= 0x5cc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc040 size=80 callers=5 calls=1
   calls: sub_5cbe20
*/
void sub_5cc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc040ULL || rel >= 0x5cc090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc090 size=192 callers=0 calls=0
*/
void sub_5cc090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc090ULL || rel >= 0x5cc150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc150 size=192 callers=0 calls=0
*/
void sub_5cc150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc150ULL || rel >= 0x5cc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc210 size=16 callers=0 calls=0
*/
void sub_5cc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc210ULL || rel >= 0x5cc220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc220 size=192 callers=0 calls=0
*/
void sub_5cc220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc220ULL || rel >= 0x5cc2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc2e0 size=192 callers=0 calls=0
*/
void sub_5cc2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc2e0ULL || rel >= 0x5cc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc3a0 size=16 callers=0 calls=0
*/
void sub_5cc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc3a0ULL || rel >= 0x5cc3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc3b0 size=16 callers=0 calls=0
*/
void sub_5cc3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc3b0ULL || rel >= 0x5cc3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc3c0 size=192 callers=0 calls=0
*/
void sub_5cc3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc3c0ULL || rel >= 0x5cc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc480 size=192 callers=0 calls=0
*/
void sub_5cc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc480ULL || rel >= 0x5cc540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc540 size=304 callers=30 calls=0
*/
void sub_5cc540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc540ULL || rel >= 0x5cc670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc670 size=32 callers=1 calls=0
*/
void sub_5cc670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc670ULL || rel >= 0x5cc690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc690 size=16 callers=1 calls=0
*/
void sub_5cc690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc690ULL || rel >= 0x5cc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc6a0 size=16 callers=0 calls=0
*/
void sub_5cc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc6a0ULL || rel >= 0x5cc6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc6b0 size=672 callers=1 calls=2
   calls: sub_13ca4c0, sub_5cc950
*/
void sub_5cc6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc6b0ULL || rel >= 0x5cc950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cc950 size=944 callers=3 calls=1
   calls: sub_5cd7b0
*/
void sub_5cc950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cc950ULL || rel >= 0x5ccd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ccd00 size=960 callers=0 calls=2
   calls: sub_13ca4c0, sub_5cc950
*/
void sub_5ccd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ccd00ULL || rel >= 0x5cd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cd0c0 size=992 callers=0 calls=2
   calls: sub_13ca4c0, sub_5cc950
*/
void sub_5cd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cd0c0ULL || rel >= 0x5cd4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cd4a0 size=784 callers=0 calls=1
   calls: sub_5cd7b0
*/
void sub_5cd4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cd4a0ULL || rel >= 0x5cd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cd7b0 size=496 callers=2 calls=0
*/
void sub_5cd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cd7b0ULL || rel >= 0x5cd9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cd9a0 size=320 callers=0 calls=6
   calls: sub_5cdae0, sub_5cdc70, sub_5cded0, sub_5ce4c0, sub_5e2750, sub_5e2830
*/
void sub_5cd9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cd9a0ULL || rel >= 0x5cdae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cdae0 size=400 callers=1 calls=1
   calls: sub_5cf0f0
*/
void sub_5cdae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cdae0ULL || rel >= 0x5cdc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cdc70 size=608 callers=2 calls=2
   calls: sub_11178f0, sub_5cdc70
*/
void sub_5cdc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cdc70ULL || rel >= 0x5cded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cded0 size=1520 callers=1 calls=9
   calls: sub_1115920, sub_1117b10, sub_1117c10, sub_11181c0, sub_5ce740, sub_5ce8f0, sub_5cf3d0, sub_5cf620, sub_65d700
*/
void sub_5cded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cded0ULL || rel >= 0x5ce4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ce4c0 size=640 callers=1 calls=2
   calls: sub_1118410, sub_5cead0
*/
void sub_5ce4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ce4c0ULL || rel >= 0x5ce740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ce740 size=432 callers=1 calls=1
   calls: sub_1117b10
*/
void sub_5ce740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ce740ULL || rel >= 0x5ce8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ce8f0 size=480 callers=1 calls=0
*/
void sub_5ce8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ce8f0ULL || rel >= 0x5cead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cead0 size=432 callers=1 calls=0
*/
void sub_5cead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cead0ULL || rel >= 0x5cec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cec80 size=128 callers=0 calls=1
   calls: sub_1118710
*/
void sub_5cec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cec80ULL || rel >= 0x5ced00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ced00 size=128 callers=0 calls=1
   calls: sub_1118710
*/
void sub_5ced00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ced00ULL || rel >= 0x5ced80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ced80 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5ced80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ced80ULL || rel >= 0x5cedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cedf0 size=128 callers=0 calls=1
   calls: sub_1118710
*/
void sub_5cedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cedf0ULL || rel >= 0x5cee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cee70 size=128 callers=0 calls=1
   calls: sub_1118710
*/
void sub_5cee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cee70ULL || rel >= 0x5ceef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ceef0 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5ceef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ceef0ULL || rel >= 0x5cef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cef60 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5cef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cef60ULL || rel >= 0x5cefd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cefd0 size=144 callers=0 calls=1
   calls: sub_1118710
*/
void sub_5cefd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cefd0ULL || rel >= 0x5cf060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf060 size=144 callers=0 calls=1
   calls: sub_1118710
*/
void sub_5cf060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf060ULL || rel >= 0x5cf0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf0f0 size=736 callers=1 calls=0
*/
void sub_5cf0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf0f0ULL || rel >= 0x5cf3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf3d0 size=592 callers=1 calls=0
*/
void sub_5cf3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf3d0ULL || rel >= 0x5cf620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf620 size=528 callers=1 calls=0
*/
void sub_5cf620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf620ULL || rel >= 0x5cf830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf830 size=16 callers=1 calls=0
*/
void sub_5cf830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf830ULL || rel >= 0x5cf840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf840 size=16 callers=1 calls=0
*/
void sub_5cf840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf840ULL || rel >= 0x5cf850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf850 size=16 callers=0 calls=0
*/
void sub_5cf850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf850ULL || rel >= 0x5cf860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf860 size=16 callers=0 calls=0
*/
void sub_5cf860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf860ULL || rel >= 0x5cf870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf870 size=16 callers=0 calls=0
*/
void sub_5cf870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf870ULL || rel >= 0x5cf880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf880 size=16 callers=0 calls=0
*/
void sub_5cf880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf880ULL || rel >= 0x5cf890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf890 size=16 callers=0 calls=0
*/
void sub_5cf890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf890ULL || rel >= 0x5cf8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf8a0 size=16 callers=0 calls=0
*/
void sub_5cf8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf8a0ULL || rel >= 0x5cf8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf8b0 size=16 callers=0 calls=0
*/
void sub_5cf8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf8b0ULL || rel >= 0x5cf8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf8c0 size=16 callers=73 calls=0
*/
void sub_5cf8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf8c0ULL || rel >= 0x5cf8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf8d0 size=16 callers=198 calls=0
*/
void sub_5cf8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf8d0ULL || rel >= 0x5cf8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf8e0 size=16 callers=957 calls=0
*/
void sub_5cf8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf8e0ULL || rel >= 0x5cf8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf8f0 size=16 callers=999 calls=0
*/
void sub_5cf8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf8f0ULL || rel >= 0x5cf900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf900 size=16 callers=0 calls=0
*/
void sub_5cf900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf900ULL || rel >= 0x5cf910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf910 size=16 callers=3 calls=0
*/
void sub_5cf910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf910ULL || rel >= 0x5cf920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf920 size=32 callers=2 calls=0
*/
void sub_5cf920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf920ULL || rel >= 0x5cf940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf940 size=16 callers=2 calls=0
*/
void sub_5cf940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf940ULL || rel >= 0x5cf950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf950 size=112 callers=0 calls=0
*/
void sub_5cf950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf950ULL || rel >= 0x5cf9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cf9c0 size=64 callers=62 calls=0
*/
void sub_5cf9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cf9c0ULL || rel >= 0x5cfa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfa00 size=96 callers=1 calls=0
*/
void sub_5cfa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfa00ULL || rel >= 0x5cfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfa60 size=112 callers=1 calls=0
*/
void sub_5cfa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfa60ULL || rel >= 0x5cfad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfad0 size=32 callers=928 calls=0
*/
void sub_5cfad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfad0ULL || rel >= 0x5cfaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfaf0 size=144 callers=555 calls=0
*/
void sub_5cfaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfaf0ULL || rel >= 0x5cfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfb80 size=16 callers=0 calls=0
*/
void sub_5cfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfb80ULL || rel >= 0x5cfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfb90 size=320 callers=1 calls=0
*/
void sub_5cfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfb90ULL || rel >= 0x5cfcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfcd0 size=80 callers=0 calls=0
*/
void sub_5cfcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfcd0ULL || rel >= 0x5cfd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfd20 size=80 callers=0 calls=0
*/
void sub_5cfd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfd20ULL || rel >= 0x5cfd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfd70 size=80 callers=0 calls=0
*/
void sub_5cfd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfd70ULL || rel >= 0x5cfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfdc0 size=80 callers=0 calls=0
*/
void sub_5cfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfdc0ULL || rel >= 0x5cfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfe10 size=112 callers=0 calls=1
   calls: sub_5d03d0
*/
void sub_5cfe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfe10ULL || rel >= 0x5cfe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfe80 size=16 callers=0 calls=0
*/
void sub_5cfe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfe80ULL || rel >= 0x5cfe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfe90 size=32 callers=0 calls=0
*/
void sub_5cfe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfe90ULL || rel >= 0x5cfeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfeb0 size=48 callers=0 calls=0
*/
void sub_5cfeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfeb0ULL || rel >= 0x5cfee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfee0 size=16 callers=0 calls=0
*/
void sub_5cfee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfee0ULL || rel >= 0x5cfef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cfef0 size=16 callers=0 calls=0
*/
void sub_5cfef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cfef0ULL || rel >= 0x5cff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cff00 size=32 callers=0 calls=0
*/
void sub_5cff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cff00ULL || rel >= 0x5cff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cff20 size=48 callers=0 calls=0
*/
void sub_5cff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cff20ULL || rel >= 0x5cff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005cff50 size=480 callers=57 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5cfb90, sub_5d0130
*/
void sub_5cff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cff50ULL || rel >= 0x5d0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0130 size=672 callers=2 calls=1
   calls: sub_5d0670
*/
void sub_5d0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0130ULL || rel >= 0x5d03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d03d0 size=672 callers=1 calls=1
   calls: sub_5cf8f0
*/
void sub_5d03d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d03d0ULL || rel >= 0x5d0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0670 size=272 callers=1 calls=0
*/
void sub_5d0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0670ULL || rel >= 0x5d0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0780 size=704 callers=0 calls=0
*/
void sub_5d0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0780ULL || rel >= 0x5d0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0a40 size=208 callers=1 calls=2
   calls: sub_5cf8c0, sub_5cf910
*/
void sub_5d0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0a40ULL || rel >= 0x5d0b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0b10 size=304 callers=17 calls=2
   calls: sub_5cf8c0, sub_5cf910
*/
void sub_5d0b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0b10ULL || rel >= 0x5d0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0c40 size=112 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5d0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0c40ULL || rel >= 0x5d0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0cb0 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5d0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0cb0ULL || rel >= 0x5d0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0d30 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5d0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0d30ULL || rel >= 0x5d0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0db0 size=16 callers=0 calls=0
*/
void sub_5d0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0db0ULL || rel >= 0x5d0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0dc0 size=16 callers=0 calls=0
*/
void sub_5d0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0dc0ULL || rel >= 0x5d0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0dd0 size=16 callers=0 calls=0
*/
void sub_5d0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0dd0ULL || rel >= 0x5d0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0de0 size=112 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_5d0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0de0ULL || rel >= 0x5d0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0e50 size=240 callers=56 calls=1
   calls: sub_5cf8f0
*/
void sub_5d0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0e50ULL || rel >= 0x5d0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0f40 size=80 callers=2 calls=0
*/
void sub_5d0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0f40ULL || rel >= 0x5d0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d0f90 size=160 callers=14 calls=0
*/
void sub_5d0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d0f90ULL || rel >= 0x5d1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1030 size=80 callers=0 calls=1
   calls: sub_5cf920
*/
void sub_5d1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1030ULL || rel >= 0x5d1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1080 size=16 callers=6 calls=0
*/
void sub_5d1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1080ULL || rel >= 0x5d1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1090 size=112 callers=0 calls=1
   calls: sub_5d11f0
*/
void sub_5d1090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1090ULL || rel >= 0x5d1100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1100 size=240 callers=0 calls=0
*/
void sub_5d1100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1100ULL || rel >= 0x5d11f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d11f0 size=176 callers=2 calls=0
*/
void sub_5d11f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d11f0ULL || rel >= 0x5d12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d12a0 size=32 callers=1 calls=0
*/
void sub_5d12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d12a0ULL || rel >= 0x5d12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d12c0 size=16 callers=1 calls=0
*/
void sub_5d12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d12c0ULL || rel >= 0x5d12d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d12d0 size=240 callers=25 calls=4
   calls: sub_5cf8c0, sub_5d14a0, sub_5d42e0, sub_5e2350
*/
void sub_5d12d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d12d0ULL || rel >= 0x5d13c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d13c0 size=224 callers=4 calls=3
   calls: sub_5cf8c0, sub_5d14a0, sub_5e2350
*/
void sub_5d13c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d13c0ULL || rel >= 0x5d14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d14a0 size=176 callers=4 calls=2
   calls: sub_5cf8c0, sub_65d700
*/
void sub_5d14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d14a0ULL || rel >= 0x5d1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1550 size=1056 callers=0 calls=2
   calls: sub_5cf8d0, sub_5d1970
*/
void sub_5d1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1550ULL || rel >= 0x5d1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1970 size=400 callers=3 calls=2
   calls: sub_5d34c0, sub_5d3680
*/
void sub_5d1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1970ULL || rel >= 0x5d1b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1b00 size=16 callers=0 calls=0
*/
void sub_5d1b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1b00ULL || rel >= 0x5d1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1b10 size=16 callers=0 calls=0
*/
void sub_5d1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1b10ULL || rel >= 0x5d1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1b20 size=16 callers=0 calls=0
*/
void sub_5d1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1b20ULL || rel >= 0x5d1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1b30 size=16 callers=0 calls=0
*/
void sub_5d1b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1b30ULL || rel >= 0x5d1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1b40 size=16 callers=0 calls=0
*/
void sub_5d1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1b40ULL || rel >= 0x5d1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1b50 size=16 callers=73 calls=0
*/
void sub_5d1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1b50ULL || rel >= 0x5d1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1b60 size=464 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_5d1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1b60ULL || rel >= 0x5d1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1d30 size=96 callers=6 calls=0
*/
void sub_5d1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1d30ULL || rel >= 0x5d1d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1d90 size=272 callers=2 calls=2
   calls: sub_5d34c0, sub_5d4d50
*/
void sub_5d1d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1d90ULL || rel >= 0x5d1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1ea0 size=96 callers=15 calls=0
*/
void sub_5d1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1ea0ULL || rel >= 0x5d1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d1f00 size=272 callers=0 calls=2
   calls: sub_5d34c0, sub_5d4d50
*/
void sub_5d1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1f00ULL || rel >= 0x5d2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2010 size=96 callers=43 calls=1
   calls: sub_5d1d90
*/
void sub_5d2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2010ULL || rel >= 0x5d2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2070 size=112 callers=74 calls=1
   calls: sub_5d1d90
*/
void sub_5d2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2070ULL || rel >= 0x5d20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d20e0 size=400 callers=2 calls=2
   calls: sub_5d34c0, sub_5d3680
*/
void sub_5d20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d20e0ULL || rel >= 0x5d2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2270 size=1264 callers=4 calls=3
   calls: sub_5cf8f0, sub_5d1970, sub_5d20e0
*/
void sub_5d2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2270ULL || rel >= 0x5d2760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2760 size=160 callers=1 calls=0
*/
void sub_5d2760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2760ULL || rel >= 0x5d2800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2800 size=272 callers=0 calls=1
   calls: sub_5d2a90
*/
void sub_5d2800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2800ULL || rel >= 0x5d2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2910 size=112 callers=1 calls=0
*/
void sub_5d2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2910ULL || rel >= 0x5d2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2980 size=240 callers=0 calls=0
*/
void sub_5d2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2980ULL || rel >= 0x5d2a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2a70 size=16 callers=0 calls=0
*/
void sub_5d2a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2a70ULL || rel >= 0x5d2a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2a80 size=16 callers=0 calls=0
*/
void sub_5d2a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2a80ULL || rel >= 0x5d2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2a90 size=304 callers=2 calls=3
   calls: sub_5cf8f0, sub_5d2bc0, sub_5d2dc0
*/
void sub_5d2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2a90ULL || rel >= 0x5d2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2bc0 size=512 callers=1 calls=0
*/
void sub_5d2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2bc0ULL || rel >= 0x5d2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d2dc0 size=880 callers=1 calls=2
   calls: sub_5d3130, sub_5d32b0
*/
void sub_5d2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d2dc0ULL || rel >= 0x5d3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d3130 size=384 callers=1 calls=0
*/
void sub_5d3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d3130ULL || rel >= 0x5d32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d32b0 size=528 callers=1 calls=0
*/
void sub_5d32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d32b0ULL || rel >= 0x5d34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d34c0 size=448 callers=7 calls=0
*/
void sub_5d34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d34c0ULL || rel >= 0x5d3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d3680 size=448 callers=2 calls=0
*/
void sub_5d3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d3680ULL || rel >= 0x5d3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d3840 size=80 callers=0 calls=1
   calls: sub_5d3f50
*/
void sub_5d3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d3840ULL || rel >= 0x5d3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d3890 size=1728 callers=1 calls=9
   calls: sub_5cf8c0, sub_5d0f90, sub_5d13c0, sub_5d1b50, sub_5d5980, sub_5d5de0, sub_5d63f0, sub_5d6590, sub_65d700
   ref: JobThread1
   ref: JobThread2
   ref: JobThread0
*/
void JobThread2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d3890ULL || rel >= 0x5d3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d3f50 size=384 callers=3 calls=4
   calls: sub_5cf8d0, sub_5d0e50, sub_5d40d0, sub_5d5c60
*/
void sub_5d3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d3f50ULL || rel >= 0x5d40d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d40d0 size=288 callers=3 calls=2
   calls: sub_5d4700, sub_5d4860
*/
void sub_5d40d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d40d0ULL || rel >= 0x5d41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d41f0 size=240 callers=1 calls=2
   calls: JobThread2, sub_5d3f50
*/
void sub_5d41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d41f0ULL || rel >= 0x5d42e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d42e0 size=16 callers=3 calls=0
*/
void sub_5d42e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d42e0ULL || rel >= 0x5d42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d42f0 size=96 callers=1 calls=1
   calls: sub_5d3f50
*/
void sub_5d42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d42f0ULL || rel >= 0x5d4350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4350 size=32 callers=0 calls=0
*/
void sub_5d4350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4350ULL || rel >= 0x5d4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4370 size=448 callers=1 calls=7
   calls: sub_5d1b50, sub_5d40d0, sub_5d4530, sub_5d50e0, sub_5d5fe0, sub_5d6740, sub_5d6a70
*/
void sub_5d4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4370ULL || rel >= 0x5d4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4530 size=464 callers=2 calls=2
   calls: sub_5cf8f0, sub_5d2270
*/
void sub_5d4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4530ULL || rel >= 0x5d4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4700 size=352 callers=2 calls=0
*/
void sub_5d4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4700ULL || rel >= 0x5d4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4860 size=960 callers=1 calls=1
   calls: sub_5d4f50
*/
void sub_5d4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4860ULL || rel >= 0x5d4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4c20 size=304 callers=0 calls=1
   calls: sub_5d34c0
*/
void sub_5d4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4c20ULL || rel >= 0x5d4d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4d50 size=256 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d34c0
*/
void sub_5d4d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4d50ULL || rel >= 0x5d4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4e50 size=144 callers=0 calls=2
   calls: sub_5d67d0, sub_5d6850
*/
void sub_5d4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4e50ULL || rel >= 0x5d4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4ee0 size=112 callers=1 calls=1
   calls: sub_5d69c0
*/
void sub_5d4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4ee0ULL || rel >= 0x5d4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d4f50 size=368 callers=1 calls=0
*/
void sub_5d4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d4f50ULL || rel >= 0x5d50c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d50c0 size=32 callers=0 calls=0
*/
void sub_5d50c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d50c0ULL || rel >= 0x5d50e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d50e0 size=80 callers=1 calls=1
   calls: sub_5d5470
*/
void sub_5d50e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d50e0ULL || rel >= 0x5d5130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5130 size=16 callers=0 calls=0
*/
void sub_5d5130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5130ULL || rel >= 0x5d5140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5140 size=96 callers=0 calls=0
*/
void sub_5d5140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5140ULL || rel >= 0x5d51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d51a0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5d51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d51a0ULL || rel >= 0x5d5210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5210 size=96 callers=0 calls=0
*/
void sub_5d5210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5210ULL || rel >= 0x5d5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5270 size=96 callers=0 calls=0
*/
void sub_5d5270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5270ULL || rel >= 0x5d52d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d52d0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5d52d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d52d0ULL || rel >= 0x5d5340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5340 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5d5340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5340ULL || rel >= 0x5d53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d53b0 size=96 callers=0 calls=0
*/
void sub_5d53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d53b0ULL || rel >= 0x5d5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5410 size=96 callers=0 calls=0
*/
void sub_5d5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5410ULL || rel >= 0x5d5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5470 size=80 callers=1 calls=1
   calls: sub_5d13c0
*/
void sub_5d5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5470ULL || rel >= 0x5d54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d54c0 size=160 callers=4 calls=2
   calls: sub_5d13c0, sub_5d42e0
*/
void sub_5d54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d54c0ULL || rel >= 0x5d5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5560 size=144 callers=1 calls=1
   calls: sub_5d13c0
*/
void sub_5d5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5560ULL || rel >= 0x5d55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d55f0 size=480 callers=1 calls=1
   calls: sub_5d2a90
*/
void sub_5d55f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d55f0ULL || rel >= 0x5d57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d57d0 size=144 callers=0 calls=1
   calls: sub_5d2760
*/
void sub_5d57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d57d0ULL || rel >= 0x5d5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5860 size=16 callers=0 calls=0
*/
void sub_5d5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5860ULL || rel >= 0x5d5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5870 size=16 callers=0 calls=0
*/
void sub_5d5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5870ULL || rel >= 0x5d5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5880 size=96 callers=0 calls=0
*/
void sub_5d5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5880ULL || rel >= 0x5d58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d58e0 size=16 callers=0 calls=0
*/
void sub_5d58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d58e0ULL || rel >= 0x5d58f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d58f0 size=16 callers=0 calls=0
*/
void sub_5d58f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d58f0ULL || rel >= 0x5d5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5900 size=16 callers=0 calls=0
*/
void sub_5d5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5900ULL || rel >= 0x5d5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5910 size=96 callers=0 calls=0
*/
void sub_5d5910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5910ULL || rel >= 0x5d5970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5970 size=16 callers=0 calls=0
*/
void sub_5d5970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5970ULL || rel >= 0x5d5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5980 size=128 callers=1 calls=2
   calls: sub_5d5a00, sub_65d700
*/
void sub_5d5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5980ULL || rel >= 0x5d5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5a00 size=608 callers=1 calls=0
*/
void sub_5d5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5a00ULL || rel >= 0x5d5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5c60 size=176 callers=1 calls=0
*/
void sub_5d5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5c60ULL || rel >= 0x5d5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5d10 size=208 callers=0 calls=0
*/
void sub_5d5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5d10ULL || rel >= 0x5d5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5de0 size=16 callers=4 calls=0
*/
void sub_5d5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5de0ULL || rel >= 0x5d5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5df0 size=496 callers=0 calls=1
   calls: sub_5d60f0
*/
void sub_5d5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5df0ULL || rel >= 0x5d5fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d5fe0 size=272 callers=1 calls=0
*/
void sub_5d5fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d5fe0ULL || rel >= 0x5d60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d60f0 size=768 callers=1 calls=0
*/
void sub_5d60f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d60f0ULL || rel >= 0x5d63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d63f0 size=416 callers=1 calls=4
   calls: sub_5cf940, sub_5d0a40, sub_5d7310, sub_65d700
*/
void sub_5d63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d63f0ULL || rel >= 0x5d6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6590 size=432 callers=4 calls=4
   calls: sub_5cf940, sub_5d0b10, sub_5d7310, sub_65d700
*/
void sub_5d6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6590ULL || rel >= 0x5d6740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6740 size=144 callers=1 calls=1
   calls: sub_5d73e0
*/
void sub_5d6740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6740ULL || rel >= 0x5d67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d67d0 size=128 callers=1 calls=1
   calls: sub_5d73e0
*/
void sub_5d67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d67d0ULL || rel >= 0x5d6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6850 size=368 callers=1 calls=3
   calls: sub_5d0f40, sub_5d7150, sub_5d73e0
*/
void sub_5d6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6850ULL || rel >= 0x5d69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d69c0 size=176 callers=1 calls=0
*/
void sub_5d69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d69c0ULL || rel >= 0x5d6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6a70 size=768 callers=1 calls=6
   calls: sub_5d2910, sub_5d4ee0, sub_5d55f0, sub_5d73c0, sub_5d73d0, sub_5eca40
*/
void sub_5d6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6a70ULL || rel >= 0x5d6d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6d70 size=128 callers=0 calls=2
   calls: sub_5d1080, sub_5d73e0
*/
void sub_5d6d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6d70ULL || rel >= 0x5d6df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6df0 size=144 callers=0 calls=0
*/
void sub_5d6df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6df0ULL || rel >= 0x5d6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6e80 size=144 callers=0 calls=0
*/
void sub_5d6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6e80ULL || rel >= 0x5d6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6f10 size=144 callers=0 calls=0
*/
void sub_5d6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6f10ULL || rel >= 0x5d6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d6fa0 size=144 callers=0 calls=0
*/
void sub_5d6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d6fa0ULL || rel >= 0x5d7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7030 size=144 callers=0 calls=0
*/
void sub_5d7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7030ULL || rel >= 0x5d70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d70c0 size=144 callers=0 calls=0
*/
void sub_5d70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d70c0ULL || rel >= 0x5d7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7150 size=448 callers=2 calls=0
*/
void sub_5d7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7150ULL || rel >= 0x5d7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7310 size=176 callers=2 calls=0
*/
void sub_5d7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7310ULL || rel >= 0x5d73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d73c0 size=16 callers=2 calls=0
*/
void sub_5d73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d73c0ULL || rel >= 0x5d73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d73d0 size=16 callers=1 calls=0
*/
void sub_5d73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d73d0ULL || rel >= 0x5d73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d73e0 size=16 callers=4 calls=0
*/
void sub_5d73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d73e0ULL || rel >= 0x5d73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d73f0 size=48 callers=0 calls=0
*/
void sub_5d73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d73f0ULL || rel >= 0x5d7420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7420 size=48 callers=0 calls=0
*/
void sub_5d7420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7420ULL || rel >= 0x5d7450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7450 size=112 callers=0 calls=1
   calls: sub_5d11f0
*/
void sub_5d7450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7450ULL || rel >= 0x5d74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d74c0 size=48 callers=0 calls=0
*/
void sub_5d74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d74c0ULL || rel >= 0x5d74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d74f0 size=48 callers=0 calls=0
*/
void sub_5d74f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d74f0ULL || rel >= 0x5d7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7520 size=240 callers=0 calls=0
*/
void sub_5d7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7520ULL || rel >= 0x5d7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7610 size=48 callers=0 calls=0
*/
void sub_5d7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7610ULL || rel >= 0x5d7640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7640 size=48 callers=0 calls=0
*/
void sub_5d7640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7640ULL || rel >= 0x5d7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7670 size=80 callers=22 calls=1
   calls: sub_5d54c0
*/
void sub_5d7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7670ULL || rel >= 0x5d76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d76c0 size=112 callers=7 calls=1
   calls: sub_5d12d0
*/
void sub_5d76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d76c0ULL || rel >= 0x5d7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7730 size=32 callers=0 calls=0
*/
void sub_5d7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7730ULL || rel >= 0x5d7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7750 size=144 callers=0 calls=0
*/
void sub_5d7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7750ULL || rel >= 0x5d77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d77e0 size=144 callers=0 calls=0
*/
void sub_5d77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d77e0ULL || rel >= 0x5d7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7870 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5d7870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7870ULL || rel >= 0x5d78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d78e0 size=160 callers=0 calls=0
*/
void sub_5d78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d78e0ULL || rel >= 0x5d7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7980 size=160 callers=0 calls=0
*/
void sub_5d7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7980ULL || rel >= 0x5d7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7a20 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5d7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7a20ULL || rel >= 0x5d7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7a90 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5d7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7a90ULL || rel >= 0x5d7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7b00 size=160 callers=0 calls=0
*/
void sub_5d7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7b00ULL || rel >= 0x5d7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7ba0 size=160 callers=0 calls=0
*/
void sub_5d7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7ba0ULL || rel >= 0x5d7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7c40 size=16 callers=5 calls=0
*/
void sub_5d7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7c40ULL || rel >= 0x5d7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7c50 size=304 callers=1 calls=0
*/
void sub_5d7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7c50ULL || rel >= 0x5d7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7d80 size=160 callers=0 calls=0
*/
void sub_5d7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7d80ULL || rel >= 0x5d7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7e20 size=160 callers=0 calls=0
*/
void sub_5d7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7e20ULL || rel >= 0x5d7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d7ec0 size=512 callers=2 calls=1
   calls: sub_5ecfa0
*/
void sub_5d7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d7ec0ULL || rel >= 0x5d80c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d80c0 size=176 callers=0 calls=0
*/
void sub_5d80c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d80c0ULL || rel >= 0x5d8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8170 size=176 callers=0 calls=0
*/
void sub_5d8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8170ULL || rel >= 0x5d8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8220 size=112 callers=0 calls=0
*/
void sub_5d8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8220ULL || rel >= 0x5d8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8290 size=112 callers=0 calls=0
*/
void sub_5d8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8290ULL || rel >= 0x5d8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8300 size=368 callers=2 calls=1
   calls: sub_5d8610
   ref: GenericWorkerService
*/
void GenericWorkerService(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8300ULL || rel >= 0x5d8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8470 size=80 callers=0 calls=0
*/
void sub_5d8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8470ULL || rel >= 0x5d84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d84c0 size=80 callers=0 calls=0
*/
void sub_5d84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d84c0ULL || rel >= 0x5d8510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8510 size=16 callers=0 calls=0
*/
void sub_5d8510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8510ULL || rel >= 0x5d8520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8520 size=112 callers=0 calls=0
*/
void sub_5d8520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8520ULL || rel >= 0x5d8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8590 size=16 callers=0 calls=0
*/
void sub_5d8590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8590ULL || rel >= 0x5d85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d85a0 size=112 callers=0 calls=0
*/
void sub_5d85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d85a0ULL || rel >= 0x5d8610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8610 size=160 callers=1 calls=2
   calls: sub_5d0b10, sub_65d700
*/
void sub_5d8610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8610ULL || rel >= 0x5d86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d86b0 size=480 callers=0 calls=0
*/
void sub_5d86b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d86b0ULL || rel >= 0x5d8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8890 size=64 callers=0 calls=1
   calls: sub_5d1080
*/
void sub_5d8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8890ULL || rel >= 0x5d88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d88d0 size=192 callers=0 calls=0
*/
void sub_5d88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d88d0ULL || rel >= 0x5d8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8990 size=192 callers=0 calls=0
*/
void sub_5d8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8990ULL || rel >= 0x5d8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8a50 size=16 callers=0 calls=0
*/
void sub_5d8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8a50ULL || rel >= 0x5d8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8a60 size=208 callers=0 calls=0
*/
void sub_5d8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8a60ULL || rel >= 0x5d8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8b30 size=208 callers=0 calls=0
*/
void sub_5d8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8b30ULL || rel >= 0x5d8c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8c00 size=16 callers=0 calls=0
*/
void sub_5d8c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8c00ULL || rel >= 0x5d8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8c10 size=208 callers=0 calls=0
*/
void sub_5d8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8c10ULL || rel >= 0x5d8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8ce0 size=208 callers=0 calls=0
*/
void sub_5d8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8ce0ULL || rel >= 0x5d8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8db0 size=304 callers=0 calls=0
*/
void sub_5d8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8db0ULL || rel >= 0x5d8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d8ee0 size=1088 callers=10 calls=7
   calls: sub_5cf8c0, sub_5cf8f0, sub_5d1b50, sub_5d2070, sub_5d7670, sub_5e2350, sub_65d700
*/
void sub_5d8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d8ee0ULL || rel >= 0x5d9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9320 size=1040 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5da0d0, sub_5da350
*/
void sub_5d9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9320ULL || rel >= 0x5d9730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9730 size=672 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_5d9730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9730ULL || rel >= 0x5d99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d99d0 size=416 callers=189 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d9ec0
*/
void sub_5d99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d99d0ULL || rel >= 0x5d9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9b70 size=80 callers=0 calls=0
*/
void sub_5d9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9b70ULL || rel >= 0x5d9bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9bc0 size=112 callers=0 calls=1
   calls: sub_603810
*/
void sub_5d9bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9bc0ULL || rel >= 0x5d9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9c30 size=80 callers=0 calls=0
*/
void sub_5d9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9c30ULL || rel >= 0x5d9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9c80 size=80 callers=0 calls=0
*/
void sub_5d9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9c80ULL || rel >= 0x5d9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9cd0 size=112 callers=0 calls=1
   calls: sub_603810
*/
void sub_5d9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9cd0ULL || rel >= 0x5d9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9d40 size=112 callers=0 calls=1
   calls: sub_603810
*/
void sub_5d9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9d40ULL || rel >= 0x5d9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9db0 size=80 callers=0 calls=0
*/
void sub_5d9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9db0ULL || rel >= 0x5d9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9e00 size=80 callers=0 calls=0
*/
void sub_5d9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9e00ULL || rel >= 0x5d9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9e50 size=32 callers=0 calls=0
*/
void sub_5d9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9e50ULL || rel >= 0x5d9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9e70 size=16 callers=0 calls=0
*/
void sub_5d9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9e70ULL || rel >= 0x5d9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9e80 size=32 callers=0 calls=0
*/
void sub_5d9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9e80ULL || rel >= 0x5d9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9ea0 size=32 callers=0 calls=0
*/
void sub_5d9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9ea0ULL || rel >= 0x5d9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005d9ec0 size=528 callers=1 calls=0
*/
void sub_5d9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d9ec0ULL || rel >= 0x5da0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005da0d0 size=640 callers=1 calls=0
*/
void sub_5da0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5da0d0ULL || rel >= 0x5da350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005da350 size=1728 callers=3 calls=4
   calls: sub_5da350, sub_5daa10, sub_5dad80, sub_5daf60
*/
void sub_5da350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5da350ULL || rel >= 0x5daa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005daa10 size=512 callers=5 calls=0
*/
void sub_5daa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5daa10ULL || rel >= 0x5dac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dac10 size=368 callers=2 calls=1
   calls: sub_5daa10
*/
void sub_5dac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dac10ULL || rel >= 0x5dad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dad80 size=480 callers=2 calls=1
   calls: sub_5dac10
*/
void sub_5dad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dad80ULL || rel >= 0x5daf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005daf60 size=592 callers=2 calls=3
   calls: sub_5daa10, sub_5dac10, sub_5dad80
*/
void sub_5daf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5daf60ULL || rel >= 0x5db1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db1b0 size=112 callers=66 calls=1
   calls: sub_5db220
*/
void sub_5db1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db1b0ULL || rel >= 0x5db220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db220 size=432 callers=2 calls=0
*/
void sub_5db220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db220ULL || rel >= 0x5db3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db3d0 size=96 callers=11 calls=1
   calls: sub_5db220
*/
void sub_5db3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db3d0ULL || rel >= 0x5db430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db430 size=16 callers=6 calls=0
*/
void sub_5db430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db430ULL || rel >= 0x5db440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db440 size=16 callers=0 calls=0
*/
void sub_5db440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db440ULL || rel >= 0x5db450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db450 size=16 callers=13 calls=0
*/
void sub_5db450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db450ULL || rel >= 0x5db460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db460 size=16 callers=0 calls=0
*/
void sub_5db460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db460ULL || rel >= 0x5db470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db470 size=144 callers=0 calls=0
*/
void sub_5db470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db470ULL || rel >= 0x5db500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db500 size=144 callers=0 calls=0
*/
void sub_5db500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db500ULL || rel >= 0x5db590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db590 size=240 callers=0 calls=0
*/
void sub_5db590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db590ULL || rel >= 0x5db680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db680 size=144 callers=0 calls=0
*/
void sub_5db680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db680ULL || rel >= 0x5db710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db710 size=144 callers=0 calls=0
*/
void sub_5db710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db710ULL || rel >= 0x5db7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db7a0 size=16 callers=0 calls=0
*/
void sub_5db7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db7a0ULL || rel >= 0x5db7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db7b0 size=16 callers=0 calls=0
*/
void sub_5db7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db7b0ULL || rel >= 0x5db7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db7c0 size=144 callers=0 calls=0
*/
void sub_5db7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db7c0ULL || rel >= 0x5db850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db850 size=144 callers=0 calls=0
*/
void sub_5db850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db850ULL || rel >= 0x5db8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db8e0 size=112 callers=8 calls=2
   calls: sub_5db1b0, sub_65ccf0
*/
void sub_5db8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db8e0ULL || rel >= 0x5db950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db950 size=144 callers=0 calls=0
*/
void sub_5db950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db950ULL || rel >= 0x5db9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db9e0 size=16 callers=0 calls=0
*/
void sub_5db9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db9e0ULL || rel >= 0x5db9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005db9f0 size=80 callers=0 calls=1
   calls: sub_65cdb0
*/
void sub_5db9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5db9f0ULL || rel >= 0x5dba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dba40 size=16 callers=0 calls=0
*/
void sub_5dba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dba40ULL || rel >= 0x5dba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dba50 size=16 callers=0 calls=0
*/
void sub_5dba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dba50ULL || rel >= 0x5dba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dba60 size=144 callers=0 calls=0
*/
void sub_5dba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dba60ULL || rel >= 0x5dbaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dbaf0 size=144 callers=0 calls=0
*/
void sub_5dbaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dbaf0ULL || rel >= 0x5dbb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dbb80 size=16 callers=0 calls=0
*/
void sub_5dbb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dbb80ULL || rel >= 0x5dbb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dbb90 size=16 callers=0 calls=0
*/
void sub_5dbb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dbb90ULL || rel >= 0x5dbba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dbba0 size=144 callers=0 calls=0
*/
void sub_5dbba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dbba0ULL || rel >= 0x5dbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dbc30 size=144 callers=0 calls=0
*/
void sub_5dbc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dbc30ULL || rel >= 0x5dbcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dbcc0 size=96 callers=2 calls=1
   calls: sub_5db8e0
*/
void sub_5dbcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dbcc0ULL || rel >= 0x5dbd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dbd20 size=896 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_967240
*/
void sub_5dbd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dbd20ULL || rel >= 0x5dc0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dc0a0 size=400 callers=2 calls=2
   calls: sub_5dbd20, sub_967240
*/
void sub_5dc0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dc0a0ULL || rel >= 0x5dc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dc230 size=928 callers=1 calls=2
   calls: sub_5dbd20, sub_967240
*/
void sub_5dc230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dc230ULL || rel >= 0x5dc5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dc5d0 size=80 callers=3 calls=1
   calls: sub_5dc230
*/
void sub_5dc5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dc5d0ULL || rel >= 0x5dc620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dc620 size=48 callers=0 calls=1
   calls: sub_5db430
*/
void sub_5dc620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dc620ULL || rel >= 0x5dc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dc650 size=2768 callers=0 calls=4
   calls: sub_59b970, sub_619640, sub_65cdb0, sub_967240
*/
void sub_5dc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dc650ULL || rel >= 0x5dd120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd120 size=48 callers=0 calls=1
   calls: sub_5db430
*/
void sub_5dd120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd120ULL || rel >= 0x5dd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd150 size=48 callers=0 calls=1
   calls: sub_5db450
*/
void sub_5dd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd150ULL || rel >= 0x5dd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd180 size=48 callers=0 calls=1
   calls: sub_5db450
*/
void sub_5dd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd180ULL || rel >= 0x5dd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd1b0 size=256 callers=0 calls=0
*/
void sub_5dd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd1b0ULL || rel >= 0x5dd2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd2b0 size=16 callers=0 calls=0
*/
void sub_5dd2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd2b0ULL || rel >= 0x5dd2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd2c0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_5dd2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd2c0ULL || rel >= 0x5dd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd330 size=16 callers=0 calls=0
*/
void sub_5dd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd330ULL || rel >= 0x5dd340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd340 size=16 callers=0 calls=0
*/
void sub_5dd340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd340ULL || rel >= 0x5dd350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd350 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_5dd350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd350ULL || rel >= 0x5dd3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd3c0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_5dd3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd3c0ULL || rel >= 0x5dd430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd430 size=16 callers=0 calls=0
*/
void sub_5dd430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd430ULL || rel >= 0x5dd440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd440 size=16 callers=0 calls=0
*/
void sub_5dd440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd440ULL || rel >= 0x5dd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd450 size=64 callers=1 calls=0
*/
void sub_5dd450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd450ULL || rel >= 0x5dd490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd490 size=64 callers=1 calls=0
*/
void sub_5dd490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd490ULL || rel >= 0x5dd4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd4d0 size=464 callers=4 calls=0
*/
void sub_5dd4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd4d0ULL || rel >= 0x5dd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd6a0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5dd6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd6a0ULL || rel >= 0x5dd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd6f0 size=96 callers=0 calls=0
*/
void sub_5dd6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd6f0ULL || rel >= 0x5dd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd750 size=32 callers=0 calls=0
*/
void sub_5dd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd750ULL || rel >= 0x5dd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd770 size=32 callers=0 calls=0
*/
void sub_5dd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd770ULL || rel >= 0x5dd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dd790 size=2368 callers=199 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2180, sub_5e2500, sub_5e6970, sub_df90
*/
void sub_5dd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dd790ULL || rel >= 0x5de0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de0d0 size=96 callers=0 calls=0
*/
void sub_5de0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de0d0ULL || rel >= 0x5de130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de130 size=96 callers=0 calls=0
*/
void sub_5de130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de130ULL || rel >= 0x5de190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de190 size=112 callers=0 calls=1
   calls: sub_5de540
*/
void sub_5de190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de190ULL || rel >= 0x5de200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de200 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_5de200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de200ULL || rel >= 0x5de240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de240 size=160 callers=0 calls=1
   calls: sub_5e2850
*/
void sub_5de240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de240ULL || rel >= 0x5de2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de2e0 size=96 callers=0 calls=0
*/
void sub_5de2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de2e0ULL || rel >= 0x5de340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de340 size=96 callers=0 calls=0
*/
void sub_5de340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de340ULL || rel >= 0x5de3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de3a0 size=112 callers=0 calls=1
   calls: sub_5de540
*/
void sub_5de3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de3a0ULL || rel >= 0x5de410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de410 size=112 callers=0 calls=1
   calls: sub_5de540
*/
void sub_5de410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de410ULL || rel >= 0x5de480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de480 size=96 callers=0 calls=0
*/
void sub_5de480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de480ULL || rel >= 0x5de4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de4e0 size=96 callers=0 calls=0
*/
void sub_5de4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de4e0ULL || rel >= 0x5de540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de540 size=240 callers=35 calls=0
*/
void sub_5de540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de540ULL || rel >= 0x5de630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de630 size=608 callers=16 calls=0
*/
void sub_5de630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de630ULL || rel >= 0x5de890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005de890 size=2304 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_601700, sub_df90
*/
void sub_5de890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5de890ULL || rel >= 0x5df190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005df190 size=96 callers=1 calls=0
*/
void sub_5df190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5df190ULL || rel >= 0x5df1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005df1f0 size=992 callers=1 calls=13
   calls: sub_5cf8e0, sub_5cf8f0, sub_5cf910, sub_5cf920, sub_5cf9c0, sub_5d12a0, sub_5d41f0, sub_5e0080, sub_5e0160, sub_5e0240, sub_65d6f0, sub_65f110
   ... +1 more
*/
void sub_5df1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5df1f0ULL || rel >= 0x5df5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005df5d0 size=608 callers=3 calls=3
   calls: sub_5cf8f0, sub_5d42f0, sub_65f110
*/
void sub_5df5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5df5d0ULL || rel >= 0x5df830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005df830 size=48 callers=0 calls=1
   calls: sub_5df5d0
*/
void sub_5df830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5df830ULL || rel >= 0x5df860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005df860 size=240 callers=1 calls=2
   calls: sub_5cf9c0, sub_5e0710
*/
void sub_5df860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5df860ULL || rel >= 0x5df950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005df950 size=64 callers=1 calls=2
   calls: sub_5cfa00, sub_5cfa60
*/
void sub_5df950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5df950ULL || rel >= 0x5df990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005df990 size=16 callers=0 calls=0
*/
void sub_5df990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5df990ULL || rel >= 0x5df9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005df9a0 size=144 callers=0 calls=2
   calls: sub_5cf9c0, sub_c6a0
*/
void sub_5df9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5df9a0ULL || rel >= 0x5dfa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfa30 size=240 callers=0 calls=4
   calls: sub_5cf9c0, sub_5e8ef0, sub_5e98e0, sub_c5c0
*/
void sub_5dfa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfa30ULL || rel >= 0x5dfb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfb20 size=288 callers=0 calls=3
   calls: sub_5cf9c0, sub_5e3e80, sub_cbb0
   ref: --NOARCHIVE
   ref: --noarchive
*/
void noarchive(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfb20ULL || rel >= 0x5dfc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfc40 size=160 callers=0 calls=3
   calls: sub_5cf9c0, sub_6812e0, sub_cc90
*/
void sub_5dfc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfc40ULL || rel >= 0x5dfce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

