/* main functions 003ee840..00414db0 (25 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003ee840 size=928 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3ee840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee840ULL || rel >= 0x3eebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eebe0 size=880 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3eebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eebe0ULL || rel >= 0x3eef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef50 size=928 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3eef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef50ULL || rel >= 0x3ef2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef2f0 size=624 callers=2 calls=3
   calls: sub_3045e0, sub_3ef560, sub_3ef7a0
*/
void sub_3ef2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef2f0ULL || rel >= 0x3ef560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef560 size=576 callers=2 calls=3
   calls: sub_3ef560, sub_3ef7a0, sub_3ef9d0
*/
void sub_3ef560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef560ULL || rel >= 0x3ef7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef7a0 size=560 callers=4 calls=4
   calls: sub_3045e0, sub_3ef7a0, sub_3efb60, sub_3efe20
*/
void sub_3ef7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef7a0ULL || rel >= 0x3ef9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef9d0 size=400 callers=1 calls=0
*/
void sub_3ef9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef9d0ULL || rel >= 0x3efb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efb60 size=704 callers=1 calls=0
*/
void sub_3efb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efb60ULL || rel >= 0x3efe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe20 size=624 callers=1 calls=2
   calls: sub_3f0090, sub_3f0250
*/
void sub_3efe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe20ULL || rel >= 0x3f0090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0090 size=448 callers=1 calls=1
   calls: sub_3f0250
*/
void sub_3f0090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0090ULL || rel >= 0x3f0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0250 size=272 callers=4 calls=0
*/
void sub_3f0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0250ULL || rel >= 0x3f0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0360 size=704 callers=1 calls=3
   calls: sub_3047c0, sub_3ef2f0, sub_3f0620
*/
void sub_3f0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0360ULL || rel >= 0x3f0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0620 size=912 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3f0620
*/
void sub_3f0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0620ULL || rel >= 0x3f09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f09b0 size=64 callers=0 calls=1
   calls: sub_3f09f0
*/
void sub_3f09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f09b0ULL || rel >= 0x3f09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f09f0 size=272 callers=5 calls=1
   calls: sub_3f09f0
*/
void sub_3f09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f09f0ULL || rel >= 0x3f0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0b00 size=1376 callers=1 calls=0
*/
void sub_3f0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0b00ULL || rel >= 0x3f1060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1060 size=112 callers=1 calls=0
*/
void sub_3f1060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1060ULL || rel >= 0x3f10d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f10d0 size=128 callers=1 calls=2
   calls: sub_3047c0, sub_3f1150
*/
void sub_3f10d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f10d0ULL || rel >= 0x3f1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1150 size=176 callers=1 calls=1
   calls: sub_304740
*/
void sub_3f1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1150ULL || rel >= 0x3f1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1200 size=1072 callers=5 calls=4
   calls: sub_3046a0, sub_304740, sub_3f0b00, sub_3f1630
*/
void sub_3f1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1200ULL || rel >= 0x3f1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1630 size=336 callers=2 calls=2
   calls: sub_3f22e0, sub_3f2960
*/
void sub_3f1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1630ULL || rel >= 0x3f1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1780 size=240 callers=1 calls=2
   calls: sub_3f1870, sub_3f2600
*/
void sub_3f1780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1780ULL || rel >= 0x3f1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1870 size=432 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3f1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1870ULL || rel >= 0x3f1a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1a20 size=1136 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3f1a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1a20ULL || rel >= 0x3f1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1e90 size=1104 callers=2 calls=3
   calls: sub_3f1200, sub_3f1a20, sub_3f1e90
*/
void sub_3f1e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1e90ULL || rel >= 0x3f22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f22e0 size=800 callers=2 calls=0
*/
void sub_3f22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f22e0ULL || rel >= 0x3f2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2600 size=864 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3f2600
*/
void sub_3f2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2600ULL || rel >= 0x3f2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2960 size=416 callers=2 calls=2
   calls: sub_3f2960, sub_3f2b00
*/
void sub_3f2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2960ULL || rel >= 0x3f2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2b00 size=464 callers=1 calls=1
   calls: sub_3f22e0
*/
void sub_3f2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2b00ULL || rel >= 0x3f2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2cd0 size=576 callers=1 calls=1
   calls: sub_3e7cb0
*/
void sub_3f2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2cd0ULL || rel >= 0x3f2f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2f10 size=64 callers=0 calls=0
*/
void sub_3f2f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2f10ULL || rel >= 0x3f2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2f50 size=720 callers=1 calls=5
   calls: sub_304740, sub_3047c0, sub_35a9a0, sub_368b20, sub_3e7c30
*/
void sub_3f2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2f50ULL || rel >= 0x3f3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3220 size=48 callers=0 calls=1
   calls: sub_3f2f50
*/
void sub_3f3220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3220ULL || rel >= 0x3f3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3250 size=336 callers=1 calls=3
   calls: sub_3047c0, sub_397bc0, sub_3e59b0
*/
void sub_3f3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3250ULL || rel >= 0x3f33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f33a0 size=208 callers=1 calls=1
   calls: sub_3e7d80
*/
void sub_3f33a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f33a0ULL || rel >= 0x3f3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3470 size=1232 callers=2 calls=1
   calls: sub_3eace0
*/
void sub_3f3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3470ULL || rel >= 0x3f3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3940 size=480 callers=1 calls=3
   calls: sub_3047c0, sub_397bc0, sub_398880
*/
void sub_3f3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3940ULL || rel >= 0x3f3b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3b20 size=1552 callers=1 calls=7
   calls: sub_3047c0, sub_3961e0, sub_397bc0, sub_398c10, sub_398d80, sub_39eff0, sub_3f3470
*/
void sub_3f3b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3b20ULL || rel >= 0x3f4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4130 size=416 callers=1 calls=5
   calls: sub_3047c0, sub_3961e0, sub_397bc0, sub_398c10, sub_39eff0
*/
void sub_3f4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4130ULL || rel >= 0x3f42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f42d0 size=496 callers=1 calls=5
   calls: sub_3047c0, sub_3961e0, sub_397bc0, sub_398c10, sub_39eff0
*/
void sub_3f42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f42d0ULL || rel >= 0x3f44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f44c0 size=208 callers=3 calls=2
   calls: sub_398880, sub_3f4590
*/
void sub_3f44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f44c0ULL || rel >= 0x3f4590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4590 size=752 callers=1 calls=2
   calls: sub_3047c0, sub_397bc0
*/
void sub_3f4590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4590ULL || rel >= 0x3f4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4880 size=128 callers=3 calls=0
*/
void sub_3f4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4880ULL || rel >= 0x3f4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4900 size=16 callers=2 calls=0
*/
void sub_3f4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4900ULL || rel >= 0x3f4910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4910 size=320 callers=0 calls=2
   calls: sub_3f4f10, sub_3f5030
*/
void sub_3f4910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4910ULL || rel >= 0x3f4a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4a50 size=544 callers=1 calls=5
   calls: sub_3045e0, sub_358ea0, sub_368b20, sub_3e7c30, sub_3e7c70
*/
void sub_3f4a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4a50ULL || rel >= 0x3f4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4c70 size=16 callers=1 calls=0
*/
void sub_3f4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4c70ULL || rel >= 0x3f4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4c80 size=128 callers=1 calls=0
*/
void sub_3f4c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4c80ULL || rel >= 0x3f4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4d00 size=48 callers=1 calls=0
*/
void sub_3f4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4d00ULL || rel >= 0x3f4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4d30 size=64 callers=0 calls=0
*/
void sub_3f4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4d30ULL || rel >= 0x3f4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4d70 size=368 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3f4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4d70ULL || rel >= 0x3f4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4ee0 size=48 callers=0 calls=1
   calls: sub_3f4d70
*/
void sub_3f4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4ee0ULL || rel >= 0x3f4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4f10 size=288 callers=1 calls=3
   calls: sub_3e7c30, sub_3e7c70, sub_3f5030
*/
void sub_3f4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4f10ULL || rel >= 0x3f5030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5030 size=320 callers=2 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3e7c30, sub_3e7c70
*/
void sub_3f5030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5030ULL || rel >= 0x3f5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5170 size=80 callers=0 calls=0
*/
void sub_3f5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5170ULL || rel >= 0x3f51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f51c0 size=80 callers=0 calls=1
   calls: sub_3f5210
*/
void sub_3f51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f51c0ULL || rel >= 0x3f5210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5210 size=816 callers=1 calls=0
*/
void sub_3f5210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5210ULL || rel >= 0x3f5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5540 size=16 callers=0 calls=0
*/
void sub_3f5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5540ULL || rel >= 0x3f5550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5550 size=16 callers=0 calls=0
*/
void sub_3f5550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5550ULL || rel >= 0x3f5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5560 size=400 callers=0 calls=2
   calls: sub_3f6730, sub_3f7b80
*/
void sub_3f5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5560ULL || rel >= 0x3f56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f56f0 size=112 callers=0 calls=1
   calls: sub_3f6900
*/
void sub_3f56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f56f0ULL || rel >= 0x3f5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5760 size=64 callers=0 calls=1
   calls: sub_3f6a10
*/
void sub_3f5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5760ULL || rel >= 0x3f57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f57a0 size=32 callers=0 calls=0
*/
void sub_3f57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f57a0ULL || rel >= 0x3f57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f57c0 size=736 callers=0 calls=5
   calls: sub_3f5c80, sub_3f6730, sub_3f6900, sub_3f6a10, sub_3f7b80
*/
void sub_3f57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f57c0ULL || rel >= 0x3f5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5aa0 size=16 callers=0 calls=0
*/
void sub_3f5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5aa0ULL || rel >= 0x3f5ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5ab0 size=464 callers=2 calls=2
   calls: sub_3f6ac0, sub_3f7c90
*/
void sub_3f5ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5ab0ULL || rel >= 0x3f5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5c80 size=2736 callers=1 calls=5
   calls: sub_3f5ab0, sub_3f6ac0, sub_3f7ba0, sub_3f7c90, sub_3f7d80
*/
void sub_3f5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5c80ULL || rel >= 0x3f6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6730 size=464 callers=6 calls=0
*/
void sub_3f6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6730ULL || rel >= 0x3f6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6900 size=272 callers=6 calls=0
*/
void sub_3f6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6900ULL || rel >= 0x3f6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6a10 size=176 callers=6 calls=0
*/
void sub_3f6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6a10ULL || rel >= 0x3f6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6ac0 size=912 callers=2 calls=2
   calls: sub_3f6e50, sub_3f73d0
*/
void sub_3f6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6ac0ULL || rel >= 0x3f6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6e50 size=1408 callers=1 calls=0
*/
void sub_3f6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6e50ULL || rel >= 0x3f73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f73d0 size=496 callers=2 calls=0
*/
void sub_3f73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f73d0ULL || rel >= 0x3f75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f75c0 size=144 callers=0 calls=0
*/
void sub_3f75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f75c0ULL || rel >= 0x3f7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7650 size=16 callers=0 calls=0
*/
void sub_3f7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7650ULL || rel >= 0x3f7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7660 size=16 callers=0 calls=0
*/
void sub_3f7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7660ULL || rel >= 0x3f7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7670 size=192 callers=0 calls=0
*/
void sub_3f7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7670ULL || rel >= 0x3f7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7730 size=32 callers=0 calls=0
*/
void sub_3f7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7730ULL || rel >= 0x3f7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7750 size=80 callers=0 calls=0
*/
void sub_3f7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7750ULL || rel >= 0x3f77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f77a0 size=288 callers=0 calls=0
*/
void sub_3f77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f77a0ULL || rel >= 0x3f78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f78c0 size=704 callers=0 calls=0
*/
void sub_3f78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f78c0ULL || rel >= 0x3f7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7b80 size=32 callers=2 calls=0
*/
void sub_3f7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7b80ULL || rel >= 0x3f7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7ba0 size=240 callers=2 calls=0
*/
void sub_3f7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7ba0ULL || rel >= 0x3f7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7c90 size=240 callers=3 calls=0
*/
void sub_3f7c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7c90ULL || rel >= 0x3f7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7d80 size=192 callers=1 calls=0
*/
void sub_3f7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7d80ULL || rel >= 0x3f7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7e40 size=256 callers=0 calls=4
   calls: sub_3044e0, sub_3045e0, sub_305450, sub_305660
*/
void sub_3f7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7e40ULL || rel >= 0x3f7f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7f40 size=16 callers=0 calls=0
*/
void sub_3f7f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7f40ULL || rel >= 0x3f7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7f50 size=96 callers=0 calls=0
*/
void sub_3f7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7f50ULL || rel >= 0x3f7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7fb0 size=16 callers=2 calls=0
*/
void sub_3f7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7fb0ULL || rel >= 0x3f7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7fc0 size=16 callers=2 calls=0
*/
void sub_3f7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7fc0ULL || rel >= 0x3f7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7fd0 size=16 callers=1 calls=0
*/
void sub_3f7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7fd0ULL || rel >= 0x3f7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7fe0 size=544 callers=0 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3ffef0, sub_401220
*/
void sub_3f7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7fe0ULL || rel >= 0x3f8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8200 size=128 callers=0 calls=0
*/
void sub_3f8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8200ULL || rel >= 0x3f8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8280 size=16 callers=0 calls=0
*/
void sub_3f8280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8280ULL || rel >= 0x3f8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8290 size=288 callers=0 calls=0
*/
void sub_3f8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8290ULL || rel >= 0x3f83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f83b0 size=16 callers=6 calls=0
*/
void sub_3f83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f83b0ULL || rel >= 0x3f83c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f83c0 size=448 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3f83c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f83c0ULL || rel >= 0x3f8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8580 size=288 callers=1 calls=0
*/
void sub_3f8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8580ULL || rel >= 0x3f86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f86a0 size=240 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3f86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f86a0ULL || rel >= 0x3f8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8790 size=80 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3f8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8790ULL || rel >= 0x3f87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f87e0 size=144 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3f87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f87e0ULL || rel >= 0x3f8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8870 size=240 callers=1 calls=0
*/
void sub_3f8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8870ULL || rel >= 0x3f8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8960 size=272 callers=0 calls=3
   calls: sub_3044e0, sub_3047c0, sub_305660
*/
void sub_3f8960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8960ULL || rel >= 0x3f8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8a70 size=256 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3f8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8a70ULL || rel >= 0x3f8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8b70 size=48 callers=0 calls=1
   calls: sub_3f8a70
*/
void sub_3f8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8b70ULL || rel >= 0x3f8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8ba0 size=112 callers=4 calls=1
   calls: sub_3faeb0
*/
void sub_3f8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8ba0ULL || rel >= 0x3f8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8c10 size=464 callers=0 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3fa310, sub_3fb220
*/
void sub_3f8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8c10ULL || rel >= 0x3f8de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8de0 size=464 callers=0 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3fa310, sub_3fb270
*/
void sub_3f8de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8de0ULL || rel >= 0x3f8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8fb0 size=528 callers=0 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3fa380, sub_3fb220
*/
void sub_3f8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8fb0ULL || rel >= 0x3f91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f91c0 size=528 callers=0 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3fa380, sub_3fb270
*/
void sub_3f91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f91c0ULL || rel >= 0x3f93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f93d0 size=1520 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3fa680
*/
void sub_3f93d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f93d0ULL || rel >= 0x3f99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f99c0 size=656 callers=0 calls=2
   calls: sub_3047c0, sub_3fa680
*/
void sub_3f99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f99c0ULL || rel >= 0x3f9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9c50 size=352 callers=0 calls=1
   calls: sub_3fa680
*/
void sub_3f9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9c50ULL || rel >= 0x3f9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9db0 size=368 callers=0 calls=0
*/
void sub_3f9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9db0ULL || rel >= 0x3f9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9f20 size=480 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3fb270
*/
void sub_3f9f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9f20ULL || rel >= 0x3fa100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa100 size=16 callers=0 calls=0
*/
void sub_3fa100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa100ULL || rel >= 0x3fa110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa110 size=112 callers=2 calls=2
   calls: sub_3fe0b0, sub_3ff940
*/
void sub_3fa110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa110ULL || rel >= 0x3fa180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa180 size=64 callers=2 calls=1
   calls: sub_3fe230
*/
void sub_3fa180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa180ULL || rel >= 0x3fa1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa1c0 size=16 callers=0 calls=0
*/
void sub_3fa1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa1c0ULL || rel >= 0x3fa1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa1d0 size=224 callers=1 calls=1
   calls: sub_3fe260
*/
void sub_3fa1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa1d0ULL || rel >= 0x3fa2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa2b0 size=96 callers=0 calls=2
   calls: sub_3fe4d0, sub_3ffbe0
*/
void sub_3fa2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa2b0ULL || rel >= 0x3fa310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa310 size=112 callers=2 calls=0
*/
void sub_3fa310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa310ULL || rel >= 0x3fa380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa380 size=112 callers=2 calls=0
*/
void sub_3fa380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa380ULL || rel >= 0x3fa3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa3f0 size=176 callers=0 calls=0
*/
void sub_3fa3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa3f0ULL || rel >= 0x3fa4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa4a0 size=432 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3fa4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa4a0ULL || rel >= 0x3fa650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa650 size=48 callers=0 calls=0
*/
void sub_3fa650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa650ULL || rel >= 0x3fa680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa680 size=128 callers=3 calls=0
*/
void sub_3fa680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa680ULL || rel >= 0x3fa700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa700 size=624 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3fa700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa700ULL || rel >= 0x3fa970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa970 size=720 callers=2 calls=3
   calls: sub_3047c0, sub_3fa700, sub_3fac40
*/
void sub_3fa970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa970ULL || rel >= 0x3fac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fac40 size=624 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3fac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fac40ULL || rel >= 0x3faeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003faeb0 size=80 callers=1 calls=1
   calls: sub_3faf00
*/
void sub_3faeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3faeb0ULL || rel >= 0x3faf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003faf00 size=496 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3faf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3faf00ULL || rel >= 0x3fb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb0f0 size=128 callers=0 calls=0
*/
void sub_3fb0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb0f0ULL || rel >= 0x3fb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb170 size=160 callers=0 calls=2
   calls: sub_3047c0, sub_3f8790
*/
void sub_3fb170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb170ULL || rel >= 0x3fb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb210 size=16 callers=0 calls=0
*/
void sub_3fb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb210ULL || rel >= 0x3fb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb220 size=80 callers=2 calls=1
   calls: sub_3f86a0
*/
void sub_3fb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb220ULL || rel >= 0x3fb270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb270 size=80 callers=3 calls=1
   calls: sub_3f87e0
*/
void sub_3fb270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb270ULL || rel >= 0x3fb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb2c0 size=144 callers=2 calls=2
   calls: sub_3f8790, sub_3f8870
*/
void sub_3fb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb2c0ULL || rel >= 0x3fb350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb350 size=144 callers=2 calls=1
   calls: sub_3ff8c0
*/
void sub_3fb350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb350ULL || rel >= 0x3fb3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb3e0 size=80 callers=4 calls=1
   calls: sub_3ffcb0
*/
void sub_3fb3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb3e0ULL || rel >= 0x3fb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb430 size=80 callers=0 calls=1
   calls: sub_3ffcb0
*/
void sub_3fb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb430ULL || rel >= 0x3fb480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb480 size=16 callers=0 calls=0
*/
void sub_3fb480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb480ULL || rel >= 0x3fb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb490 size=16 callers=0 calls=0
*/
void sub_3fb490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb490ULL || rel >= 0x3fb4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb4a0 size=160 callers=2 calls=0
*/
void sub_3fb4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb4a0ULL || rel >= 0x3fb540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb540 size=48 callers=0 calls=0
*/
void sub_3fb540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb540ULL || rel >= 0x3fb570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb570 size=48 callers=0 calls=0
*/
void sub_3fb570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb570ULL || rel >= 0x3fb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb5a0 size=176 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3fb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb5a0ULL || rel >= 0x3fb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb650 size=176 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3fb650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb650ULL || rel >= 0x3fb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb700 size=16 callers=0 calls=0
*/
void sub_3fb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb700ULL || rel >= 0x3fb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb710 size=16 callers=0 calls=0
*/
void sub_3fb710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb710ULL || rel >= 0x3fb720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb720 size=32 callers=0 calls=0
*/
void sub_3fb720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb720ULL || rel >= 0x3fb740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb740 size=32 callers=0 calls=0
*/
void sub_3fb740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb740ULL || rel >= 0x3fb760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb760 size=176 callers=0 calls=0
*/
void sub_3fb760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb760ULL || rel >= 0x3fb810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb810 size=176 callers=0 calls=0
*/
void sub_3fb810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb810ULL || rel >= 0x3fb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb8c0 size=48 callers=0 calls=0
*/
void sub_3fb8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb8c0ULL || rel >= 0x3fb8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb8f0 size=656 callers=0 calls=4
   calls: sub_3ff910, sub_3ffc50, sub_3ffcb0, sub_3ffe40
*/
void sub_3fb8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb8f0ULL || rel >= 0x3fbb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbb80 size=48 callers=0 calls=0
*/
void sub_3fbb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbb80ULL || rel >= 0x3fbbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbbb0 size=48 callers=0 calls=0
*/
void sub_3fbbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbbb0ULL || rel >= 0x3fbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbbe0 size=48 callers=0 calls=0
*/
void sub_3fbbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbbe0ULL || rel >= 0x3fbc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbc10 size=160 callers=6 calls=0
*/
void sub_3fbc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbc10ULL || rel >= 0x3fbcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbcb0 size=16 callers=0 calls=0
*/
void sub_3fbcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbcb0ULL || rel >= 0x3fbcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbcc0 size=16 callers=0 calls=0
*/
void sub_3fbcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbcc0ULL || rel >= 0x3fbcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbcd0 size=16 callers=0 calls=0
*/
void sub_3fbcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbcd0ULL || rel >= 0x3fbce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbce0 size=16 callers=0 calls=0
*/
void sub_3fbce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbce0ULL || rel >= 0x3fbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbcf0 size=96 callers=0 calls=0
*/
void sub_3fbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbcf0ULL || rel >= 0x3fbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbd50 size=288 callers=5 calls=2
   calls: sub_3047c0, sub_3ff1f0
*/
void sub_3fbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbd50ULL || rel >= 0x3fbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbe70 size=224 callers=2 calls=2
   calls: sub_3ffc50, sub_3ffcb0
*/
void sub_3fbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbe70ULL || rel >= 0x3fbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbf50 size=192 callers=0 calls=3
   calls: sub_3ffc50, sub_3ffcb0, sub_3ffea0
*/
void sub_3fbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbf50ULL || rel >= 0x3fc010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc010 size=144 callers=2 calls=1
   calls: sub_3ff8c0
*/
void sub_3fc010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc010ULL || rel >= 0x3fc0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc0a0 size=80 callers=4 calls=1
   calls: sub_3ffd50
*/
void sub_3fc0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc0a0ULL || rel >= 0x3fc0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc0f0 size=80 callers=0 calls=1
   calls: sub_3ffd50
*/
void sub_3fc0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc0f0ULL || rel >= 0x3fc140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc140 size=16 callers=0 calls=0
*/
void sub_3fc140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc140ULL || rel >= 0x3fc150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc150 size=16 callers=0 calls=0
*/
void sub_3fc150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc150ULL || rel >= 0x3fc160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc160 size=288 callers=2 calls=1
   calls: sub_3fc280
*/
void sub_3fc160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc160ULL || rel >= 0x3fc280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc280 size=336 callers=2 calls=0
*/
void sub_3fc280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc280ULL || rel >= 0x3fc3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc3d0 size=176 callers=0 calls=1
   calls: sub_3fc480
*/
void sub_3fc3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc3d0ULL || rel >= 0x3fc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc480 size=368 callers=6 calls=2
   calls: sub_3047c0, sub_3fe600
*/
void sub_3fc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc480ULL || rel >= 0x3fc5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc5f0 size=176 callers=0 calls=1
   calls: sub_3fc480
*/
void sub_3fc5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc5f0ULL || rel >= 0x3fc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc6a0 size=48 callers=0 calls=0
*/
void sub_3fc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc6a0ULL || rel >= 0x3fc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc6d0 size=48 callers=0 calls=0
*/
void sub_3fc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc6d0ULL || rel >= 0x3fc700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc700 size=48 callers=0 calls=0
*/
void sub_3fc700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc700ULL || rel >= 0x3fc730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc730 size=48 callers=0 calls=0
*/
void sub_3fc730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc730ULL || rel >= 0x3fc760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc760 size=976 callers=0 calls=3
   calls: sub_3047c0, sub_3fcb30, sub_3fe600
*/
void sub_3fc760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc760ULL || rel >= 0x3fcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcb30 size=288 callers=12 calls=0
*/
void sub_3fcb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcb30ULL || rel >= 0x3fcc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcc50 size=16 callers=0 calls=0
*/
void sub_3fcc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcc50ULL || rel >= 0x3fcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcc60 size=224 callers=0 calls=3
   calls: sub_3fc280, sub_3fcb30, sub_3ffea0
*/
void sub_3fcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcc60ULL || rel >= 0x3fcd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcd40 size=96 callers=2 calls=1
   calls: sub_3fcb30
*/
void sub_3fcd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcd40ULL || rel >= 0x3fcda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcda0 size=16 callers=0 calls=0
*/
void sub_3fcda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcda0ULL || rel >= 0x3fcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcdb0 size=176 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3fcdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcdb0ULL || rel >= 0x3fce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fce60 size=176 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3fce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fce60ULL || rel >= 0x3fcf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcf10 size=16 callers=0 calls=0
*/
void sub_3fcf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcf10ULL || rel >= 0x3fcf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcf20 size=16 callers=0 calls=0
*/
void sub_3fcf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcf20ULL || rel >= 0x3fcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcf30 size=176 callers=0 calls=2
   calls: sub_3fcb30, sub_3ffd90
*/
void sub_3fcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcf30ULL || rel >= 0x3fcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcfe0 size=16 callers=0 calls=0
*/
void sub_3fcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcfe0ULL || rel >= 0x3fcff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcff0 size=80 callers=0 calls=1
   calls: sub_3fc480
*/
void sub_3fcff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcff0ULL || rel >= 0x3fd040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd040 size=80 callers=0 calls=1
   calls: sub_3fc480
*/
void sub_3fd040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd040ULL || rel >= 0x3fd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd090 size=128 callers=0 calls=0
*/
void sub_3fd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd090ULL || rel >= 0x3fd110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd110 size=128 callers=0 calls=0
*/
void sub_3fd110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd110ULL || rel >= 0x3fd190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd190 size=272 callers=0 calls=1
   calls: sub_3fd2a0
*/
void sub_3fd190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd190ULL || rel >= 0x3fd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd2a0 size=224 callers=2 calls=2
   calls: sub_3fc480, sub_3fcb30
*/
void sub_3fd2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd2a0ULL || rel >= 0x3fd380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd380 size=272 callers=0 calls=1
   calls: sub_3fd2a0
*/
void sub_3fd380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd380ULL || rel >= 0x3fd490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd490 size=352 callers=4 calls=2
   calls: sub_3fc480, sub_3fcb30
*/
void sub_3fd490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd490ULL || rel >= 0x3fd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd5f0 size=416 callers=0 calls=3
   calls: sub_3fd490, sub_3ff910, sub_3ffe40
*/
void sub_3fd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd5f0ULL || rel >= 0x3fd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd790 size=16 callers=0 calls=0
*/
void sub_3fd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd790ULL || rel >= 0x3fd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd7a0 size=224 callers=0 calls=3
   calls: sub_3047c0, sub_3fcb30, sub_3fe600
*/
void sub_3fd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd7a0ULL || rel >= 0x3fd880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd880 size=16 callers=0 calls=0
*/
void sub_3fd880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd880ULL || rel >= 0x3fd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd890 size=16 callers=0 calls=0
*/
void sub_3fd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd890ULL || rel >= 0x3fd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd8a0 size=32 callers=0 calls=0
*/
void sub_3fd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd8a0ULL || rel >= 0x3fd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd8c0 size=112 callers=0 calls=1
   calls: sub_3fcb30
*/
void sub_3fd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd8c0ULL || rel >= 0x3fd930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd930 size=48 callers=0 calls=0
*/
void sub_3fd930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd930ULL || rel >= 0x3fd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd960 size=400 callers=2 calls=2
   calls: sub_3047c0, sub_3fe600
*/
void sub_3fd960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd960ULL || rel >= 0x3fdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdaf0 size=336 callers=0 calls=0
*/
void sub_3fdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdaf0ULL || rel >= 0x3fdc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdc40 size=336 callers=0 calls=0
*/
void sub_3fdc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdc40ULL || rel >= 0x3fdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdd90 size=48 callers=0 calls=0
*/
void sub_3fdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdd90ULL || rel >= 0x3fddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fddc0 size=48 callers=0 calls=0
*/
void sub_3fddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fddc0ULL || rel >= 0x3fddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fddf0 size=128 callers=0 calls=0
*/
void sub_3fddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fddf0ULL || rel >= 0x3fde70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fde70 size=16 callers=0 calls=0
*/
void sub_3fde70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fde70ULL || rel >= 0x3fde80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fde80 size=272 callers=8 calls=2
   calls: sub_3047c0, sub_3fe600
*/
void sub_3fde80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fde80ULL || rel >= 0x3fdf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdf90 size=96 callers=0 calls=2
   calls: sub_3fcb30, sub_3ffea0
*/
void sub_3fdf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdf90ULL || rel >= 0x3fdff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdff0 size=32 callers=0 calls=0
*/
void sub_3fdff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdff0ULL || rel >= 0x3fe010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe010 size=16 callers=0 calls=0
*/
void sub_3fe010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe010ULL || rel >= 0x3fe020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe020 size=16 callers=0 calls=0
*/
void sub_3fe020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe020ULL || rel >= 0x3fe030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe030 size=16 callers=0 calls=0
*/
void sub_3fe030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe030ULL || rel >= 0x3fe040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe040 size=16 callers=0 calls=0
*/
void sub_3fe040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe040ULL || rel >= 0x3fe050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe050 size=16 callers=0 calls=0
*/
void sub_3fe050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe050ULL || rel >= 0x3fe060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe060 size=16 callers=0 calls=0
*/
void sub_3fe060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe060ULL || rel >= 0x3fe070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe070 size=16 callers=0 calls=0
*/
void sub_3fe070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe070ULL || rel >= 0x3fe080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe080 size=16 callers=0 calls=0
*/
void sub_3fe080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe080ULL || rel >= 0x3fe090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe090 size=16 callers=0 calls=0
*/
void sub_3fe090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe090ULL || rel >= 0x3fe0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe0a0 size=16 callers=0 calls=0
*/
void sub_3fe0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe0a0ULL || rel >= 0x3fe0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe0b0 size=384 callers=1 calls=0
*/
void sub_3fe0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe0b0ULL || rel >= 0x3fe230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe230 size=32 callers=1 calls=0
*/
void sub_3fe230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe230ULL || rel >= 0x3fe250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe250 size=16 callers=0 calls=0
*/
void sub_3fe250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe250ULL || rel >= 0x3fe260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe260 size=224 callers=1 calls=2
   calls: sub_3045e0, sub_3fe340
*/
void sub_3fe260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe260ULL || rel >= 0x3fe340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe340 size=400 callers=1 calls=3
   calls: sub_3045d0, sub_304840, sub_305450
*/
void sub_3fe340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe340ULL || rel >= 0x3fe4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe4d0 size=304 callers=1 calls=5
   calls: sub_3047c0, sub_3048a0, sub_305660, sub_3ff370, sub_3ffd90
*/
void sub_3fe4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe4d0ULL || rel >= 0x3fe600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe600 size=208 callers=13 calls=3
   calls: sub_3047c0, sub_3ff370, sub_3ffd90
*/
void sub_3fe600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe600ULL || rel >= 0x3fe6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe6d0 size=784 callers=2 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3ff210, sub_3ff370, sub_3ffd90
*/
void sub_3fe6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe6d0ULL || rel >= 0x3fe9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe9e0 size=304 callers=3 calls=0
*/
void sub_3fe9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe9e0ULL || rel >= 0x3feb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003feb10 size=560 callers=2 calls=0
*/
void sub_3feb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3feb10ULL || rel >= 0x3fed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fed40 size=1088 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3fed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fed40ULL || rel >= 0x3ff180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff180 size=112 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3ff180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff180ULL || rel >= 0x3ff1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff1f0 size=32 callers=1 calls=0
*/
void sub_3ff1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff1f0ULL || rel >= 0x3ff210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff210 size=352 callers=1 calls=0
*/
void sub_3ff210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff210ULL || rel >= 0x3ff370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff370 size=544 callers=4 calls=1
   calls: sub_3ff590
*/
void sub_3ff370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff370ULL || rel >= 0x3ff590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff590 size=368 callers=2 calls=1
   calls: sub_3ff700
*/
void sub_3ff590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff590ULL || rel >= 0x3ff700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff700 size=448 callers=1 calls=0
*/
void sub_3ff700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff700ULL || rel >= 0x3ff8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff8c0 size=32 callers=2 calls=0
*/
void sub_3ff8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff8c0ULL || rel >= 0x3ff8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff8e0 size=32 callers=0 calls=0
*/
void sub_3ff8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff8e0ULL || rel >= 0x3ff900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff900 size=16 callers=0 calls=0
*/
void sub_3ff900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff900ULL || rel >= 0x3ff910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff910 size=48 callers=6 calls=0
*/
void sub_3ff910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff910ULL || rel >= 0x3ff940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff940 size=128 callers=1 calls=0
*/
void sub_3ff940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff940ULL || rel >= 0x3ff9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff9c0 size=80 callers=0 calls=0
*/
void sub_3ff9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff9c0ULL || rel >= 0x3ffa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffa10 size=16 callers=0 calls=0
*/
void sub_3ffa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffa10ULL || rel >= 0x3ffa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffa20 size=208 callers=0 calls=1
   calls: sub_673320
   ref: AK::IOThread
*/
void AK_IOThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffa20ULL || rel >= 0x3ffaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffaf0 size=240 callers=0 calls=0
*/
void sub_3ffaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffaf0ULL || rel >= 0x3ffbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffbe0 size=112 callers=2 calls=1
   calls: sub_6733a0
*/
void sub_3ffbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffbe0ULL || rel >= 0x3ffc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffc50 size=96 callers=5 calls=0
*/
void sub_3ffc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffc50ULL || rel >= 0x3ffcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffcb0 size=64 callers=5 calls=0
*/
void sub_3ffcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffcb0ULL || rel >= 0x3ffcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffcf0 size=96 callers=0 calls=0
*/
void sub_3ffcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffcf0ULL || rel >= 0x3ffd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffd50 size=64 callers=2 calls=0
*/
void sub_3ffd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffd50ULL || rel >= 0x3ffd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffd90 size=32 callers=4 calls=0
*/
void sub_3ffd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffd90ULL || rel >= 0x3ffdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffdb0 size=16 callers=0 calls=0
*/
void sub_3ffdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffdb0ULL || rel >= 0x3ffdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffdc0 size=64 callers=2 calls=0
*/
void sub_3ffdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffdc0ULL || rel >= 0x3ffe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffe00 size=64 callers=11 calls=0
*/
void sub_3ffe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffe00ULL || rel >= 0x3ffe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffe40 size=96 callers=4 calls=0
*/
void sub_3ffe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffe40ULL || rel >= 0x3ffea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffea0 size=80 callers=3 calls=0
*/
void sub_3ffea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffea0ULL || rel >= 0x3ffef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffef0 size=48 callers=1 calls=1
   calls: sub_3fa110
*/
void sub_3ffef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffef0ULL || rel >= 0x3fff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fff20 size=16 callers=0 calls=0
*/
void sub_3fff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fff20ULL || rel >= 0x3fff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fff30 size=48 callers=0 calls=1
   calls: sub_3fa180
*/
void sub_3fff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fff30ULL || rel >= 0x3fff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fff60 size=16 callers=0 calls=0
*/
void sub_3fff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fff60ULL || rel >= 0x3fff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fff70 size=240 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3f8ba0, sub_3fb350, sub_3fb4a0
*/
void sub_3fff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fff70ULL || rel >= 0x400060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400060 size=288 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3f8ba0, sub_3fc010, sub_3fc160
*/
void sub_400060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400060ULL || rel >= 0x400180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400180 size=64 callers=0 calls=2
   calls: sub_3fa970, sub_4001c0
*/
void sub_400180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400180ULL || rel >= 0x4001c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004001c0 size=384 callers=1 calls=2
   calls: sub_3fb2c0, sub_3fe9e0
*/
void sub_4001c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4001c0ULL || rel >= 0x400340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400340 size=464 callers=1 calls=5
   calls: sub_3047c0, sub_3fe600, sub_3fe6d0, sub_3feb10, sub_3fed40
*/
void sub_400340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400340ULL || rel >= 0x400510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400510 size=16 callers=0 calls=0
*/
void sub_400510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400510ULL || rel >= 0x400520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400520 size=16 callers=0 calls=0
*/
void sub_400520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400520ULL || rel >= 0x400530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400530 size=48 callers=0 calls=1
   calls: sub_3fb3e0
*/
void sub_400530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400530ULL || rel >= 0x400560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400560 size=48 callers=0 calls=1
   calls: sub_3fb3e0
*/
void sub_400560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400560ULL || rel >= 0x400590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400590 size=128 callers=0 calls=3
   calls: sub_3fbc10, sub_3ff910, sub_3ffe40
*/
void sub_400590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400590ULL || rel >= 0x400610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400610 size=16 callers=0 calls=0
*/
void sub_400610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400610ULL || rel >= 0x400620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400620 size=112 callers=0 calls=3
   calls: sub_3fbc10, sub_3ff910, sub_3ffe40
*/
void sub_400620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400620ULL || rel >= 0x400690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400690 size=16 callers=0 calls=0
*/
void sub_400690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400690ULL || rel >= 0x4006a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004006a0 size=80 callers=0 calls=0
*/
void sub_4006a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4006a0ULL || rel >= 0x4006f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004006f0 size=480 callers=0 calls=0
*/
void sub_4006f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4006f0ULL || rel >= 0x4008d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004008d0 size=144 callers=0 calls=2
   calls: sub_3fbd50, sub_3fbe70
*/
void sub_4008d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4008d0ULL || rel >= 0x400960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400960 size=16 callers=0 calls=0
*/
void sub_400960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400960ULL || rel >= 0x400970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400970 size=16 callers=0 calls=0
*/
void sub_400970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400970ULL || rel >= 0x400980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400980 size=48 callers=0 calls=1
   calls: sub_3fc0a0
*/
void sub_400980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400980ULL || rel >= 0x4009b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004009b0 size=48 callers=0 calls=1
   calls: sub_3fc0a0
*/
void sub_4009b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4009b0ULL || rel >= 0x4009e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004009e0 size=80 callers=0 calls=0
*/
void sub_4009e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4009e0ULL || rel >= 0x400a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400a30 size=464 callers=0 calls=2
   calls: sub_3fcb30, sub_400340
*/
void sub_400a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400a30ULL || rel >= 0x400c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400c00 size=192 callers=0 calls=2
   calls: sub_3fcd40, sub_3fde80
*/
void sub_400c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400c00ULL || rel >= 0x400cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400cc0 size=64 callers=0 calls=0
*/
void sub_400cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400cc0ULL || rel >= 0x400d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400d00 size=128 callers=0 calls=0
*/
void sub_400d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400d00ULL || rel >= 0x400d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400d80 size=144 callers=0 calls=0
*/
void sub_400d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400d80ULL || rel >= 0x400e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400e10 size=592 callers=0 calls=2
   calls: sub_3047c0, sub_3fe600
*/
void sub_400e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400e10ULL || rel >= 0x401060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401060 size=176 callers=0 calls=1
   calls: sub_3fd960
*/
void sub_401060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401060ULL || rel >= 0x401110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401110 size=192 callers=0 calls=0
*/
void sub_401110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401110ULL || rel >= 0x4011d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004011d0 size=80 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_4011d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4011d0ULL || rel >= 0x401220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401220 size=64 callers=1 calls=1
   calls: sub_3fa110
*/
void sub_401220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401220ULL || rel >= 0x401260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401260 size=32 callers=0 calls=0
*/
void sub_401260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401260ULL || rel >= 0x401280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401280 size=64 callers=0 calls=1
   calls: sub_3fa180
*/
void sub_401280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401280ULL || rel >= 0x4012c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004012c0 size=224 callers=0 calls=2
   calls: sub_3045e0, sub_3fa1d0
*/
void sub_4012c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4012c0ULL || rel >= 0x4013a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004013a0 size=96 callers=0 calls=2
   calls: sub_3047c0, sub_3ffbe0
*/
void sub_4013a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4013a0ULL || rel >= 0x401400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401400 size=240 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3f8ba0, sub_3fb350, sub_3fb4a0
*/
void sub_401400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401400ULL || rel >= 0x4014f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004014f0 size=288 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3f8ba0, sub_3fc010, sub_3fc160
*/
void sub_4014f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4014f0ULL || rel >= 0x401610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401610 size=64 callers=0 calls=2
   calls: sub_3fa970, sub_401650
*/
void sub_401610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401610ULL || rel >= 0x401650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401650 size=304 callers=1 calls=3
   calls: sub_3fb2c0, sub_4036e0, sub_403820
*/
void sub_401650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401650ULL || rel >= 0x401780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401780 size=480 callers=1 calls=3
   calls: sub_3047c0, sub_3fe600, sub_3ff180
*/
void sub_401780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401780ULL || rel >= 0x401960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401960 size=704 callers=1 calls=5
   calls: sub_3047c0, sub_3fe600, sub_3fe6d0, sub_3feb10, sub_3fed40
*/
void sub_401960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401960ULL || rel >= 0x401c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401c20 size=48 callers=0 calls=0
*/
void sub_401c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401c20ULL || rel >= 0x401c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401c50 size=48 callers=0 calls=0
*/
void sub_401c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401c50ULL || rel >= 0x401c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401c80 size=80 callers=0 calls=1
   calls: sub_3fb3e0
*/
void sub_401c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401c80ULL || rel >= 0x401cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401cd0 size=80 callers=0 calls=1
   calls: sub_3fb3e0
*/
void sub_401cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401cd0ULL || rel >= 0x401d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401d20 size=160 callers=0 calls=3
   calls: sub_3fbc10, sub_3ff910, sub_4020c0
*/
void sub_401d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401d20ULL || rel >= 0x401dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401dc0 size=16 callers=0 calls=0
*/
void sub_401dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401dc0ULL || rel >= 0x401dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401dd0 size=80 callers=0 calls=0
*/
void sub_401dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401dd0ULL || rel >= 0x401e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401e20 size=80 callers=0 calls=0
*/
void sub_401e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401e20ULL || rel >= 0x401e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401e70 size=160 callers=0 calls=3
   calls: sub_3fbc10, sub_3ff910, sub_4020c0
*/
void sub_401e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401e70ULL || rel >= 0x401f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401f10 size=16 callers=0 calls=0
*/
void sub_401f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401f10ULL || rel >= 0x401f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401f20 size=416 callers=0 calls=3
   calls: sub_3fbc10, sub_3ffdc0, sub_401780
*/
void sub_401f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401f20ULL || rel >= 0x4020c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004020c0 size=432 callers=2 calls=3
   calls: sub_3fbd50, sub_3ffe00, sub_4035f0
*/
void sub_4020c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4020c0ULL || rel >= 0x402270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402270 size=48 callers=0 calls=0
*/
void sub_402270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402270ULL || rel >= 0x4022a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004022a0 size=48 callers=0 calls=0
*/
void sub_4022a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4022a0ULL || rel >= 0x4022d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004022d0 size=80 callers=0 calls=1
   calls: sub_3fc0a0
*/
void sub_4022d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4022d0ULL || rel >= 0x402320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402320 size=80 callers=0 calls=1
   calls: sub_3fc0a0
*/
void sub_402320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402320ULL || rel >= 0x402370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402370 size=480 callers=0 calls=3
   calls: sub_3fcb30, sub_3ffdc0, sub_401960
*/
void sub_402370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402370ULL || rel >= 0x402550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402550 size=64 callers=0 calls=0
*/
void sub_402550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402550ULL || rel >= 0x402590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402590 size=32 callers=0 calls=0
*/
void sub_402590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402590ULL || rel >= 0x4025b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004025b0 size=512 callers=1 calls=3
   calls: sub_3fde80, sub_3ffe00, sub_4035f0
*/
void sub_4025b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4025b0ULL || rel >= 0x4027b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004027b0 size=272 callers=0 calls=1
   calls: sub_4025b0
*/
void sub_4027b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4027b0ULL || rel >= 0x4028c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004028c0 size=800 callers=0 calls=5
   calls: sub_3047c0, sub_3fde80, sub_3fe600, sub_3ffe00, sub_4035f0
*/
void sub_4028c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4028c0ULL || rel >= 0x402be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402be0 size=640 callers=0 calls=4
   calls: sub_3fd960, sub_3fde80, sub_3ffe00, sub_4035f0
*/
void sub_402be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402be0ULL || rel >= 0x402e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402e60 size=192 callers=0 calls=0
*/
void sub_402e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402e60ULL || rel >= 0x402f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402f20 size=80 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_402f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402f20ULL || rel >= 0x402f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402f70 size=64 callers=0 calls=0
*/
void sub_402f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402f70ULL || rel >= 0x402fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402fb0 size=640 callers=0 calls=3
   calls: sub_3fbd50, sub_3fbe70, sub_3ffe00
*/
void sub_402fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402fb0ULL || rel >= 0x403230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403230 size=64 callers=0 calls=0
*/
void sub_403230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403230ULL || rel >= 0x403270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403270 size=640 callers=0 calls=3
   calls: sub_3fcd40, sub_3fde80, sub_3ffe00
*/
void sub_403270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403270ULL || rel >= 0x4034f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004034f0 size=48 callers=0 calls=0
*/
void sub_4034f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4034f0ULL || rel >= 0x403520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403520 size=16 callers=0 calls=0
*/
void sub_403520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403520ULL || rel >= 0x403530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403530 size=48 callers=0 calls=0
*/
void sub_403530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403530ULL || rel >= 0x403560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403560 size=16 callers=0 calls=0
*/
void sub_403560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403560ULL || rel >= 0x403570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403570 size=48 callers=0 calls=0
*/
void sub_403570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403570ULL || rel >= 0x4035a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004035a0 size=16 callers=0 calls=0
*/
void sub_4035a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4035a0ULL || rel >= 0x4035b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004035b0 size=48 callers=0 calls=0
*/
void sub_4035b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4035b0ULL || rel >= 0x4035e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004035e0 size=16 callers=0 calls=0
*/
void sub_4035e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4035e0ULL || rel >= 0x4035f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004035f0 size=240 callers=4 calls=1
   calls: sub_3fe9e0
*/
void sub_4035f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4035f0ULL || rel >= 0x4036e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004036e0 size=32 callers=1 calls=0
*/
void sub_4036e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4036e0ULL || rel >= 0x403700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403700 size=288 callers=0 calls=1
   calls: sub_3fe9e0
*/
void sub_403700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403700ULL || rel >= 0x403820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403820 size=112 callers=1 calls=0
*/
void sub_403820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403820ULL || rel >= 0x403890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403890 size=80 callers=0 calls=2
   calls: sub_3045e0, sub_4039e0
*/
void sub_403890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403890ULL || rel >= 0x4038e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004038e0 size=80 callers=0 calls=2
   calls: sub_3045e0, sub_404dc0
*/
void sub_4038e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4038e0ULL || rel >= 0x403930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403930 size=48 callers=0 calls=0
*/
void sub_403930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403930ULL || rel >= 0x403960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403960 size=48 callers=0 calls=0
*/
void sub_403960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403960ULL || rel >= 0x403990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403990 size=80 callers=0 calls=0
*/
void sub_403990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403990ULL || rel >= 0x4039e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004039e0 size=64 callers=1 calls=1
   calls: sub_3cbc30
*/
void sub_4039e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4039e0ULL || rel >= 0x403a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403a20 size=80 callers=0 calls=1
   calls: sub_4048d0
*/
void sub_403a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403a20ULL || rel >= 0x403a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403a70 size=80 callers=0 calls=2
   calls: sub_3cbca0, sub_4048d0
*/
void sub_403a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403a70ULL || rel >= 0x403ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403ac0 size=192 callers=0 calls=1
   calls: sub_408100
*/
void sub_403ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403ac0ULL || rel >= 0x403b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403b80 size=64 callers=0 calls=1
   calls: sub_304740
*/
void sub_403b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403b80ULL || rel >= 0x403bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403bc0 size=784 callers=0 calls=4
   calls: sub_35fa60, sub_3cc0e0, sub_403ed0, sub_406230
*/
void sub_403bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403bc0ULL || rel >= 0x403ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403ed0 size=288 callers=1 calls=3
   calls: sub_3045e0, sub_4046b0, sub_4062c0
*/
void sub_403ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403ed0ULL || rel >= 0x403ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403ff0 size=16 callers=0 calls=0
*/
void sub_403ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403ff0ULL || rel >= 0x404000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404000 size=32 callers=0 calls=0
*/
void sub_404000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404000ULL || rel >= 0x404020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404020 size=96 callers=0 calls=2
   calls: sub_3047c0, sub_4064f0
*/
void sub_404020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404020ULL || rel >= 0x404080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404080 size=16 callers=0 calls=0
*/
void sub_404080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404080ULL || rel >= 0x404090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404090 size=32 callers=0 calls=0
*/
void sub_404090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404090ULL || rel >= 0x4040b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004040b0 size=656 callers=0 calls=3
   calls: sub_3cc0e0, sub_406230, sub_4062c0
*/
void sub_4040b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4040b0ULL || rel >= 0x404340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404340 size=352 callers=0 calls=2
   calls: sub_3cc0e0, sub_406230
*/
void sub_404340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404340ULL || rel >= 0x4044a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004044a0 size=144 callers=0 calls=1
   calls: sub_406230
*/
void sub_4044a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4044a0ULL || rel >= 0x404530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404530 size=16 callers=0 calls=0
*/
void sub_404530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404530ULL || rel >= 0x404540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404540 size=16 callers=0 calls=0
*/
void sub_404540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404540ULL || rel >= 0x404550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404550 size=16 callers=0 calls=0
*/
void sub_404550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404550ULL || rel >= 0x404560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404560 size=16 callers=0 calls=0
*/
void sub_404560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404560ULL || rel >= 0x404570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404570 size=16 callers=0 calls=0
*/
void sub_404570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404570ULL || rel >= 0x404580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404580 size=16 callers=0 calls=0
*/
void sub_404580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404580ULL || rel >= 0x404590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404590 size=32 callers=0 calls=0
*/
void sub_404590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404590ULL || rel >= 0x4045b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004045b0 size=16 callers=0 calls=0
*/
void sub_4045b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4045b0ULL || rel >= 0x4045c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004045c0 size=16 callers=0 calls=0
*/
void sub_4045c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4045c0ULL || rel >= 0x4045d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004045d0 size=16 callers=0 calls=0
*/
void sub_4045d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4045d0ULL || rel >= 0x4045e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004045e0 size=208 callers=2 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_4045e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4045e0ULL || rel >= 0x4046b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004046b0 size=544 callers=2 calls=6
   calls: sub_3045e0, sub_3047c0, sub_4045e0, sub_404a20, sub_408370, sub_4083c0
*/
void sub_4046b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4046b0ULL || rel >= 0x4048d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004048d0 size=336 callers=4 calls=2
   calls: sub_3047c0, sub_4045e0
*/
void sub_4048d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4048d0ULL || rel >= 0x404a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404a20 size=928 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_404a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404a20ULL || rel >= 0x404dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404dc0 size=64 callers=1 calls=1
   calls: sub_3cc350
*/
void sub_404dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404dc0ULL || rel >= 0x404e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404e00 size=112 callers=0 calls=2
   calls: sub_304740, sub_4048d0
*/
void sub_404e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404e00ULL || rel >= 0x404e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404e70 size=112 callers=0 calls=3
   calls: sub_304740, sub_3cc3a0, sub_4048d0
*/
void sub_404e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404e70ULL || rel >= 0x404ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404ee0 size=912 callers=0 calls=5
   calls: sub_304740, sub_390d80, sub_3cbff0, sub_405270, sub_408100
*/
void sub_404ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404ee0ULL || rel >= 0x405270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405270 size=640 callers=4 calls=2
   calls: sub_3046a0, sub_3ccb80
*/
void sub_405270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405270ULL || rel >= 0x4054f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004054f0 size=144 callers=0 calls=1
   calls: sub_406230
*/
void sub_4054f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4054f0ULL || rel >= 0x405580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405580 size=64 callers=0 calls=1
   calls: sub_304740
*/
void sub_405580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405580ULL || rel >= 0x4055c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004055c0 size=320 callers=0 calls=6
   calls: sub_3cc6a0, sub_3cc7b0, sub_405700, sub_405890, sub_405b00, sub_406230
*/
void sub_4055c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4055c0ULL || rel >= 0x405700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405700 size=400 callers=2 calls=1
   calls: sub_390d80
*/
void sub_405700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405700ULL || rel >= 0x405890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405890 size=624 callers=2 calls=4
   calls: sub_3cc970, sub_3ccc50, sub_405b00, sub_406230
*/
void sub_405890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405890ULL || rel >= 0x405b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405b00 size=448 callers=2 calls=4
   calls: sub_304740, sub_4046b0, sub_405270, sub_4062c0
*/
void sub_405b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405b00ULL || rel >= 0x405cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405cc0 size=128 callers=0 calls=3
   calls: sub_304740, sub_3047c0, sub_4064f0
*/
void sub_405cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405cc0ULL || rel >= 0x405d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405d40 size=32 callers=0 calls=0
*/
void sub_405d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405d40ULL || rel >= 0x405d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405d60 size=96 callers=0 calls=3
   calls: sub_304740, sub_3cccd0, sub_4064f0
*/
void sub_405d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405d60ULL || rel >= 0x405dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405dc0 size=208 callers=0 calls=3
   calls: sub_3cce10, sub_406230, sub_4062c0
*/
void sub_405dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405dc0ULL || rel >= 0x405e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405e90 size=528 callers=0 calls=4
   calls: sub_3045e0, sub_35fa60, sub_3cd090, sub_3cd170
*/
void sub_405e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405e90ULL || rel >= 0x4060a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004060a0 size=192 callers=0 calls=0
*/
void sub_4060a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4060a0ULL || rel >= 0x406160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406160 size=208 callers=0 calls=3
   calls: sub_304740, sub_3cd0c0, sub_406230
*/
void sub_406160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406160ULL || rel >= 0x406230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406230 size=32 callers=9 calls=0
*/
void sub_406230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406230ULL || rel >= 0x406250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406250 size=112 callers=0 calls=1
   calls: sub_304740
*/
void sub_406250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406250ULL || rel >= 0x4062c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004062c0 size=560 callers=4 calls=4
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3323d0
*/
void sub_4062c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4062c0ULL || rel >= 0x4064f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004064f0 size=112 callers=3 calls=1
   calls: sub_3047c0
*/
void sub_4064f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4064f0ULL || rel >= 0x406560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406560 size=656 callers=2 calls=1
   calls: sub_407830
*/
void sub_406560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406560ULL || rel >= 0x4067f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004067f0 size=592 callers=1 calls=0
*/
void sub_4067f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4067f0ULL || rel >= 0x406a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406a40 size=112 callers=1 calls=0
*/
void sub_406a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406a40ULL || rel >= 0x406ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406ab0 size=1776 callers=1 calls=0
*/
void sub_406ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406ab0ULL || rel >= 0x4071a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004071a0 size=16 callers=1 calls=0
*/
void sub_4071a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4071a0ULL || rel >= 0x4071b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004071b0 size=1664 callers=0 calls=2
   calls: sub_406ab0, sub_407d50
*/
void sub_4071b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4071b0ULL || rel >= 0x407830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407830 size=1312 callers=1 calls=0
*/
void sub_407830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407830ULL || rel >= 0x407d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407d50 size=944 callers=1 calls=0
*/
void sub_407d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407d50ULL || rel >= 0x408100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00408100 size=624 callers=2 calls=6
   calls: sub_3045e0, sub_3046a0, sub_3047c0, sub_406560, sub_4067f0, sub_406a40
*/
void sub_408100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x408100ULL || rel >= 0x408370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00408370 size=80 callers=1 calls=0
*/
void sub_408370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x408370ULL || rel >= 0x4083c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004083c0 size=1536 callers=1 calls=5
   calls: sub_3045e0, sub_4089c0, sub_40a8a0, sub_40d970, sub_40e3e0
*/
void sub_4083c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4083c0ULL || rel >= 0x4089c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004089c0 size=1920 callers=2 calls=1
   calls: sub_409140
*/
void sub_4089c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4089c0ULL || rel >= 0x409140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00409140 size=656 callers=1 calls=0
*/
void sub_409140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x409140ULL || rel >= 0x4093d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004093d0 size=864 callers=1 calls=1
   calls: sub_40b570
*/
void sub_4093d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4093d0ULL || rel >= 0x409730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00409730 size=528 callers=1 calls=0
*/
void sub_409730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x409730ULL || rel >= 0x409940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00409940 size=3936 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_409940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x409940ULL || rel >= 0x40a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a8a0 size=2320 callers=1 calls=2
   calls: sub_3046a0, sub_40b1b0
*/
void sub_40a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a8a0ULL || rel >= 0x40b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b1b0 size=960 callers=2 calls=1
   calls: sub_409940
*/
void sub_40b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b1b0ULL || rel >= 0x40b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b570 size=288 callers=5 calls=0
*/
void sub_40b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b570ULL || rel >= 0x40b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b690 size=272 callers=0 calls=0
*/
void sub_40b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b690ULL || rel >= 0x40b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b7a0 size=400 callers=0 calls=0
*/
void sub_40b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b7a0ULL || rel >= 0x40b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b930 size=304 callers=0 calls=0
*/
void sub_40b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b930ULL || rel >= 0x40ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ba60 size=224 callers=0 calls=0
*/
void sub_40ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ba60ULL || rel >= 0x40bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb40 size=304 callers=0 calls=0
*/
void sub_40bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb40ULL || rel >= 0x40bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bc70 size=304 callers=0 calls=0
*/
void sub_40bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bc70ULL || rel >= 0x40bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bda0 size=432 callers=0 calls=0
*/
void sub_40bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bda0ULL || rel >= 0x40bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bf50 size=352 callers=0 calls=0
*/
void sub_40bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bf50ULL || rel >= 0x40c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c0b0 size=272 callers=0 calls=0
*/
void sub_40c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c0b0ULL || rel >= 0x40c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c1c0 size=416 callers=0 calls=0
*/
void sub_40c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c1c0ULL || rel >= 0x40c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c360 size=304 callers=0 calls=0
*/
void sub_40c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c360ULL || rel >= 0x40c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c490 size=224 callers=0 calls=0
*/
void sub_40c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c490ULL || rel >= 0x40c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c570 size=304 callers=0 calls=0
*/
void sub_40c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c570ULL || rel >= 0x40c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c6a0 size=304 callers=0 calls=0
*/
void sub_40c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c6a0ULL || rel >= 0x40c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c7d0 size=448 callers=0 calls=0
*/
void sub_40c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c7d0ULL || rel >= 0x40c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c990 size=352 callers=0 calls=0
*/
void sub_40c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c990ULL || rel >= 0x40caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040caf0 size=288 callers=0 calls=0
*/
void sub_40caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40caf0ULL || rel >= 0x40cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cc10 size=336 callers=0 calls=0
*/
void sub_40cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cc10ULL || rel >= 0x40cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cd60 size=416 callers=0 calls=0
*/
void sub_40cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cd60ULL || rel >= 0x40cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cf00 size=352 callers=0 calls=0
*/
void sub_40cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cf00ULL || rel >= 0x40d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d060 size=448 callers=0 calls=0
*/
void sub_40d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d060ULL || rel >= 0x40d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d220 size=288 callers=0 calls=0
*/
void sub_40d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d220ULL || rel >= 0x40d340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d340 size=336 callers=0 calls=0
*/
void sub_40d340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d340ULL || rel >= 0x40d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d490 size=416 callers=0 calls=0
*/
void sub_40d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d490ULL || rel >= 0x40d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d630 size=368 callers=0 calls=0
*/
void sub_40d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d630ULL || rel >= 0x40d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d7a0 size=464 callers=0 calls=0
*/
void sub_40d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d7a0ULL || rel >= 0x40d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d970 size=1488 callers=2 calls=0
*/
void sub_40d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d970ULL || rel >= 0x40df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040df40 size=1184 callers=0 calls=4
   calls: sub_4071a0, sub_4093d0, sub_409730, sub_40ebe0
*/
void sub_40df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40df40ULL || rel >= 0x40e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e3e0 size=2048 callers=2 calls=0
*/
void sub_40e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e3e0ULL || rel >= 0x40ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ebe0 size=2416 callers=1 calls=1
   calls: sub_40b570
*/
void sub_40ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ebe0ULL || rel >= 0x40f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f550 size=192 callers=3 calls=1
   calls: SiCore_Array
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_Array.h
*/
void SiCore_Array(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f550ULL || rel >= 0x40f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f610 size=80 callers=2 calls=0
*/
void sub_40f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f610ULL || rel >= 0x40f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f660 size=128 callers=3 calls=0
*/
void sub_40f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f660ULL || rel >= 0x40f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f6e0 size=496 callers=8 calls=0
*/
void sub_40f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f6e0ULL || rel >= 0x40f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f8d0 size=176 callers=12 calls=0
*/
void sub_40f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f8d0ULL || rel >= 0x40f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f980 size=48 callers=5 calls=0
*/
void sub_40f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f980ULL || rel >= 0x40f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f9b0 size=384 callers=1 calls=0
*/
void sub_40f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f9b0ULL || rel >= 0x40fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fb30 size=464 callers=2 calls=0
*/
void sub_40fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fb30ULL || rel >= 0x40fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fd00 size=224 callers=1 calls=0
*/
void sub_40fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fd00ULL || rel >= 0x40fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fde0 size=480 callers=2 calls=1
   calls: MATRIXT44_MatrixMultiply
*/
void sub_40fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fde0ULL || rel >= 0x40ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ffc0 size=176 callers=2 calls=0
*/
void sub_40ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ffc0ULL || rel >= 0x410070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410070 size=128 callers=6 calls=0
*/
void sub_410070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410070ULL || rel >= 0x4100f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004100f0 size=64 callers=4 calls=0
*/
void sub_4100f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4100f0ULL || rel >= 0x410130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410130 size=208 callers=3 calls=0
*/
void sub_410130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410130ULL || rel >= 0x410200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410200 size=160 callers=1 calls=0
*/
void sub_410200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410200ULL || rel >= 0x4102a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004102a0 size=96 callers=2 calls=0
*/
void sub_4102a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4102a0ULL || rel >= 0x410300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410300 size=128 callers=1 calls=0
*/
void sub_410300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410300ULL || rel >= 0x410380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410380 size=128 callers=1 calls=0
*/
void sub_410380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410380ULL || rel >= 0x410400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410400 size=80 callers=3 calls=0
*/
void sub_410400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410400ULL || rel >= 0x410450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410450 size=1296 callers=1 calls=1
   calls: sub_4114f0
*/
void sub_410450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410450ULL || rel >= 0x410960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410960 size=1584 callers=2 calls=0
*/
void sub_410960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410960ULL || rel >= 0x410f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410f90 size=32 callers=120 calls=0
*/
void sub_410f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410f90ULL || rel >= 0x410fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410fb0 size=480 callers=1 calls=3
   calls: MATRIXT44_MatrixMultiply, sub_411340, sub_4114f0
*/
void sub_410fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410fb0ULL || rel >= 0x411190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411190 size=432 callers=3 calls=4
   calls: MATRIXT44_MatrixMultiply, sub_410fb0, sub_411b00, sub_4155f0
*/
void sub_411190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411190ULL || rel >= 0x411340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411340 size=432 callers=1 calls=3
   calls: MATRIXT44_MatrixMultiply, sub_410960, sub_4155f0
*/
void sub_411340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411340ULL || rel >= 0x4114f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004114f0 size=512 callers=3 calls=3
   calls: MATRIXT44_MatrixMultiply, sub_410960, sub_4155f0
*/
void sub_4114f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4114f0ULL || rel >= 0x4116f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004116f0 size=1040 callers=1 calls=2
   calls: sub_410450, sub_4114f0
*/
void sub_4116f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4116f0ULL || rel >= 0x411b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411b00 size=368 callers=37 calls=2
   calls: MATRIXT44_MatrixMultiply, sub_4155f0
*/
void sub_411b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411b00ULL || rel >= 0x411c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c70 size=384 callers=4 calls=0
*/
void sub_411c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c70ULL || rel >= 0x411df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411df0 size=896 callers=4 calls=0
*/
void sub_411df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411df0ULL || rel >= 0x412170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412170 size=112 callers=1 calls=0
*/
void sub_412170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412170ULL || rel >= 0x4121e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004121e0 size=144 callers=2 calls=0
*/
void sub_4121e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4121e0ULL || rel >= 0x412270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412270 size=64 callers=2 calls=0
*/
void sub_412270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412270ULL || rel >= 0x4122b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004122b0 size=336 callers=1 calls=0
*/
void sub_4122b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4122b0ULL || rel >= 0x412400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412400 size=352 callers=1 calls=0
*/
void sub_412400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412400ULL || rel >= 0x412560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412560 size=992 callers=1 calls=0
*/
void sub_412560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412560ULL || rel >= 0x412940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412940 size=912 callers=1 calls=0
*/
void sub_412940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412940ULL || rel >= 0x412cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412cd0 size=80 callers=1 calls=0
*/
void sub_412cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412cd0ULL || rel >= 0x412d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412d20 size=432 callers=0 calls=0
*/
void sub_412d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412d20ULL || rel >= 0x412ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412ed0 size=656 callers=0 calls=0
*/
void sub_412ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412ed0ULL || rel >= 0x413160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413160 size=16 callers=1 calls=0
*/
void sub_413160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413160ULL || rel >= 0x413170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413170 size=448 callers=2 calls=0
*/
void sub_413170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413170ULL || rel >= 0x413330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413330 size=416 callers=5 calls=1
   calls: sub_413170
*/
void sub_413330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413330ULL || rel >= 0x4134d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004134d0 size=608 callers=5 calls=0
*/
void sub_4134d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4134d0ULL || rel >= 0x413730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413730 size=304 callers=5 calls=1
   calls: sub_413170
*/
void sub_413730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413730ULL || rel >= 0x413860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413860 size=688 callers=5 calls=0
*/
void sub_413860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413860ULL || rel >= 0x413b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413b10 size=336 callers=10 calls=0
*/
void sub_413b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413b10ULL || rel >= 0x413c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413c60 size=576 callers=10 calls=0
*/
void sub_413c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413c60ULL || rel >= 0x413ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413ea0 size=832 callers=10 calls=0
*/
void sub_413ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413ea0ULL || rel >= 0x4141e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004141e0 size=1296 callers=10 calls=0
*/
void sub_4141e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4141e0ULL || rel >= 0x4146f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004146f0 size=1024 callers=2 calls=0
*/
void sub_4146f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4146f0ULL || rel >= 0x414af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414af0 size=240 callers=8 calls=0
*/
void sub_414af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414af0ULL || rel >= 0x414be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414be0 size=464 callers=9 calls=0
*/
void sub_414be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414be0ULL || rel >= 0x414db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414db0 size=640 callers=9 calls=0
*/
void sub_414db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414db0ULL || rel >= 0x415030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

