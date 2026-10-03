/* main functions 007efe60..008017e0 (56 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 007efe60 size=128 callers=1 calls=0
*/
void sub_7efe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7efe60ULL || rel >= 0x7efee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007efee0 size=16 callers=5 calls=0
*/
void sub_7efee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7efee0ULL || rel >= 0x7efef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007efef0 size=32 callers=44 calls=0
*/
void sub_7efef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7efef0ULL || rel >= 0x7eff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eff10 size=32 callers=3 calls=0
*/
void sub_7eff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eff10ULL || rel >= 0x7eff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eff30 size=32 callers=1 calls=0
*/
void sub_7eff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eff30ULL || rel >= 0x7eff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eff50 size=192 callers=0 calls=0
*/
void sub_7eff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eff50ULL || rel >= 0x7f0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0010 size=48 callers=2 calls=0
*/
void sub_7f0010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0010ULL || rel >= 0x7f0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0040 size=64 callers=0 calls=0
*/
void sub_7f0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0040ULL || rel >= 0x7f0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0080 size=48 callers=2 calls=0
*/
void sub_7f0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0080ULL || rel >= 0x7f00b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f00b0 size=64 callers=0 calls=0
*/
void sub_7f00b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f00b0ULL || rel >= 0x7f00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f00f0 size=32 callers=4 calls=0
*/
void sub_7f00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f00f0ULL || rel >= 0x7f0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0110 size=32 callers=3 calls=0
*/
void sub_7f0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0110ULL || rel >= 0x7f0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0130 size=48 callers=25 calls=0
*/
void sub_7f0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0130ULL || rel >= 0x7f0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0160 size=80 callers=7 calls=0
*/
void sub_7f0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0160ULL || rel >= 0x7f01b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f01b0 size=32 callers=2 calls=0
*/
void sub_7f01b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f01b0ULL || rel >= 0x7f01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f01d0 size=48 callers=9 calls=0
*/
void sub_7f01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f01d0ULL || rel >= 0x7f0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0200 size=80 callers=1 calls=0
*/
void sub_7f0200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0200ULL || rel >= 0x7f0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0250 size=64 callers=0 calls=0
*/
void sub_7f0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0250ULL || rel >= 0x7f0290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0290 size=64 callers=1 calls=0
*/
void sub_7f0290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0290ULL || rel >= 0x7f02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f02d0 size=80 callers=2 calls=0
*/
void sub_7f02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f02d0ULL || rel >= 0x7f0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0320 size=80 callers=2 calls=0
*/
void sub_7f0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0320ULL || rel >= 0x7f0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0370 size=112 callers=0 calls=0
*/
void sub_7f0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0370ULL || rel >= 0x7f03e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f03e0 size=288 callers=0 calls=1
   calls: sub_780ca0
*/
void sub_7f03e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f03e0ULL || rel >= 0x7f0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0500 size=64 callers=9 calls=0
*/
void sub_7f0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0500ULL || rel >= 0x7f0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0540 size=96 callers=13 calls=0
*/
void sub_7f0540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0540ULL || rel >= 0x7f05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f05a0 size=48 callers=30 calls=0
*/
void sub_7f05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f05a0ULL || rel >= 0x7f05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f05d0 size=160 callers=27 calls=0
*/
void sub_7f05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f05d0ULL || rel >= 0x7f0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0670 size=224 callers=51 calls=0
*/
void sub_7f0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0670ULL || rel >= 0x7f0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0750 size=208 callers=0 calls=1
   calls: sub_7ffe20
*/
void sub_7f0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0750ULL || rel >= 0x7f0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0820 size=416 callers=1 calls=1
   calls: sub_7ffe20
*/
void sub_7f0820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0820ULL || rel >= 0x7f09c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f09c0 size=16 callers=79 calls=0
*/
void sub_7f09c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f09c0ULL || rel >= 0x7f09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f09d0 size=16 callers=0 calls=0
*/
void sub_7f09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f09d0ULL || rel >= 0x7f09e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f09e0 size=144 callers=5 calls=2
   calls: sub_7eef50, sub_7ffe20
*/
void sub_7f09e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f09e0ULL || rel >= 0x7f0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0a70 size=16 callers=1 calls=0
*/
void sub_7f0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0a70ULL || rel >= 0x7f0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0a80 size=16 callers=0 calls=0
*/
void sub_7f0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0a80ULL || rel >= 0x7f0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0a90 size=16 callers=1 calls=0
*/
void sub_7f0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0a90ULL || rel >= 0x7f0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0aa0 size=48 callers=41 calls=0
*/
void sub_7f0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0aa0ULL || rel >= 0x7f0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0ad0 size=48 callers=3 calls=0
*/
void sub_7f0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0ad0ULL || rel >= 0x7f0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0b00 size=48 callers=0 calls=0
*/
void sub_7f0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0b00ULL || rel >= 0x7f0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0b30 size=64 callers=7 calls=0
*/
void sub_7f0b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0b30ULL || rel >= 0x7f0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0b70 size=16 callers=17 calls=0
*/
void sub_7f0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0b70ULL || rel >= 0x7f0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0b80 size=32 callers=3 calls=0
*/
void sub_7f0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0b80ULL || rel >= 0x7f0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0ba0 size=16 callers=24 calls=0
*/
void sub_7f0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0ba0ULL || rel >= 0x7f0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0bb0 size=80 callers=10 calls=0
*/
void sub_7f0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0bb0ULL || rel >= 0x7f0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0c00 size=128 callers=50 calls=0
*/
void sub_7f0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0c00ULL || rel >= 0x7f0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0c80 size=192 callers=3 calls=0
*/
void sub_7f0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0c80ULL || rel >= 0x7f0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0d40 size=128 callers=2 calls=0
*/
void sub_7f0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0d40ULL || rel >= 0x7f0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0dc0 size=144 callers=4 calls=0
*/
void sub_7f0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0dc0ULL || rel >= 0x7f0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0e50 size=224 callers=4 calls=0
*/
void sub_7f0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0e50ULL || rel >= 0x7f0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f0f30 size=208 callers=4 calls=0
*/
void sub_7f0f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f0f30ULL || rel >= 0x7f1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1000 size=176 callers=7 calls=0
*/
void sub_7f1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1000ULL || rel >= 0x7f10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f10b0 size=256 callers=1 calls=0
*/
void sub_7f10b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f10b0ULL || rel >= 0x7f11b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f11b0 size=32 callers=0 calls=0
*/
void sub_7f11b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f11b0ULL || rel >= 0x7f11d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f11d0 size=256 callers=0 calls=0
*/
void sub_7f11d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f11d0ULL || rel >= 0x7f12d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f12d0 size=64 callers=3 calls=0
*/
void sub_7f12d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f12d0ULL || rel >= 0x7f1310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1310 size=16 callers=8 calls=0
*/
void sub_7f1310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1310ULL || rel >= 0x7f1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1320 size=112 callers=0 calls=0
*/
void sub_7f1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1320ULL || rel >= 0x7f1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1390 size=32 callers=0 calls=0
*/
void sub_7f1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1390ULL || rel >= 0x7f13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f13b0 size=32 callers=1 calls=0
*/
void sub_7f13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f13b0ULL || rel >= 0x7f13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f13d0 size=16 callers=1 calls=0
*/
void sub_7f13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f13d0ULL || rel >= 0x7f13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f13e0 size=32 callers=3 calls=0
*/
void sub_7f13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f13e0ULL || rel >= 0x7f1400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1400 size=48 callers=15 calls=0
*/
void sub_7f1400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1400ULL || rel >= 0x7f1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1430 size=48 callers=0 calls=0
*/
void sub_7f1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1430ULL || rel >= 0x7f1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1460 size=48 callers=0 calls=0
*/
void sub_7f1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1460ULL || rel >= 0x7f1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1490 size=160 callers=2 calls=2
   calls: sub_7f7c40, sub_7f8780
*/
void sub_7f1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1490ULL || rel >= 0x7f1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1530 size=112 callers=0 calls=1
   calls: sub_7f8780
*/
void sub_7f1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1530ULL || rel >= 0x7f15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f15a0 size=368 callers=1 calls=3
   calls: sub_7f8780, sub_7f8960, sub_7f89e0
*/
void sub_7f15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f15a0ULL || rel >= 0x7f1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1710 size=176 callers=1 calls=3
   calls: sub_7f8960, sub_800280, sub_800290
*/
void sub_7f1710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1710ULL || rel >= 0x7f17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f17c0 size=96 callers=1 calls=1
   calls: sub_7f8960
*/
void sub_7f17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f17c0ULL || rel >= 0x7f1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1820 size=144 callers=1 calls=2
   calls: sub_7f7c40, sub_7f8780
*/
void sub_7f1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1820ULL || rel >= 0x7f18b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f18b0 size=144 callers=0 calls=3
   calls: sub_7f8780, sub_7f8790, sub_7f88e0
*/
void sub_7f18b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f18b0ULL || rel >= 0x7f1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1940 size=144 callers=1 calls=0
*/
void sub_7f1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1940ULL || rel >= 0x7f19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f19d0 size=80 callers=1 calls=0
*/
void sub_7f19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f19d0ULL || rel >= 0x7f1a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1a20 size=48 callers=1 calls=0
*/
void sub_7f1a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1a20ULL || rel >= 0x7f1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1a50 size=640 callers=1 calls=5
   calls: sub_768270, sub_7efcb0, sub_7f1d20, sub_7f7b60, sub_7f8780
*/
void sub_7f1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1a50ULL || rel >= 0x7f1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1cd0 size=32 callers=0 calls=0
*/
void sub_7f1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1cd0ULL || rel >= 0x7f1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1cf0 size=32 callers=1 calls=0
*/
void sub_7f1cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1cf0ULL || rel >= 0x7f1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1d10 size=16 callers=0 calls=0
*/
void sub_7f1d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1d10ULL || rel >= 0x7f1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1d20 size=224 callers=2 calls=4
   calls: sub_763e60, sub_7644a0, sub_7eef50, sub_7f36e0
*/
void sub_7f1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1d20ULL || rel >= 0x7f1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f1e00 size=544 callers=1 calls=3
   calls: sub_762940, sub_767160, sub_7efcb0
*/
void sub_7f1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1e00ULL || rel >= 0x7f2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2020 size=304 callers=1 calls=5
   calls: sub_762940, sub_7658a0, sub_767160, sub_7ee6d0, sub_7f7b60
*/
void sub_7f2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2020ULL || rel >= 0x7f2150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2150 size=336 callers=0 calls=2
   calls: sub_7ffe20, sub_803b90
*/
void sub_7f2150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2150ULL || rel >= 0x7f22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f22a0 size=112 callers=0 calls=0
*/
void sub_7f22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f22a0ULL || rel >= 0x7f2310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2310 size=48 callers=0 calls=0
*/
void sub_7f2310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2310ULL || rel >= 0x7f2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2340 size=16 callers=2 calls=0
*/
void sub_7f2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2340ULL || rel >= 0x7f2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2350 size=16 callers=2 calls=0
*/
void sub_7f2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2350ULL || rel >= 0x7f2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2360 size=16 callers=5 calls=0
*/
void sub_7f2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2360ULL || rel >= 0x7f2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2370 size=16 callers=8 calls=0
*/
void sub_7f2370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2370ULL || rel >= 0x7f2380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2380 size=272 callers=1 calls=7
   calls: sub_767160, sub_768270, sub_7692e0, sub_769330, sub_7ee6d0, sub_7f1d20, sub_7f7b60
*/
void sub_7f2380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2380ULL || rel >= 0x7f2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2490 size=16 callers=0 calls=0
*/
void sub_7f2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2490ULL || rel >= 0x7f24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f24a0 size=16 callers=0 calls=0
*/
void sub_7f24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f24a0ULL || rel >= 0x7f24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f24b0 size=16 callers=6 calls=0
*/
void sub_7f24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f24b0ULL || rel >= 0x7f24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f24c0 size=80 callers=0 calls=0
*/
void sub_7f24c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f24c0ULL || rel >= 0x7f2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2510 size=16 callers=3 calls=0
*/
void sub_7f2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2510ULL || rel >= 0x7f2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2520 size=16 callers=14 calls=0
*/
void sub_7f2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2520ULL || rel >= 0x7f2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2530 size=16 callers=1 calls=0
*/
void sub_7f2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2530ULL || rel >= 0x7f2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2540 size=16 callers=11 calls=0
*/
void sub_7f2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2540ULL || rel >= 0x7f2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2550 size=16 callers=4 calls=0
*/
void sub_7f2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2550ULL || rel >= 0x7f2560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2560 size=16 callers=1 calls=0
*/
void sub_7f2560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2560ULL || rel >= 0x7f2570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2570 size=16 callers=0 calls=0
*/
void sub_7f2570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2570ULL || rel >= 0x7f2580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2580 size=16 callers=5 calls=0
*/
void sub_7f2580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2580ULL || rel >= 0x7f2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2590 size=192 callers=1 calls=0
*/
void sub_7f2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2590ULL || rel >= 0x7f2650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2650 size=128 callers=18 calls=0
*/
void sub_7f2650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2650ULL || rel >= 0x7f26d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f26d0 size=16 callers=0 calls=0
*/
void sub_7f26d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f26d0ULL || rel >= 0x7f26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f26e0 size=32 callers=1 calls=0
*/
void sub_7f26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f26e0ULL || rel >= 0x7f2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2700 size=32 callers=0 calls=0
*/
void sub_7f2700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2700ULL || rel >= 0x7f2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2720 size=48 callers=0 calls=0
*/
void sub_7f2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2720ULL || rel >= 0x7f2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2750 size=32 callers=4 calls=0
*/
void sub_7f2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2750ULL || rel >= 0x7f2770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2770 size=496 callers=0 calls=11
   calls: sub_763e60, sub_7644a0, sub_764b40, sub_7655b0, sub_765830, sub_7692e0, sub_769330, sub_7ee820, sub_7efa20, sub_7f36e0, sub_7f7b90
*/
void sub_7f2770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2770ULL || rel >= 0x7f2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2960 size=96 callers=1 calls=1
   calls: sub_7ee310
*/
void sub_7f2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2960ULL || rel >= 0x7f29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f29c0 size=16 callers=8 calls=0
*/
void sub_7f29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f29c0ULL || rel >= 0x7f29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f29d0 size=16 callers=1 calls=0
*/
void sub_7f29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f29d0ULL || rel >= 0x7f29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f29e0 size=48 callers=1 calls=0
*/
void sub_7f29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f29e0ULL || rel >= 0x7f2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2a10 size=1104 callers=0 calls=3
   calls: sub_780ca0, sub_7f7c40, sub_7f8780
*/
void sub_7f2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2a10ULL || rel >= 0x7f2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2e60 size=16 callers=0 calls=0
*/
void sub_7f2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2e60ULL || rel >= 0x7f2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2e70 size=16 callers=10 calls=0
*/
void sub_7f2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2e70ULL || rel >= 0x7f2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2e80 size=16 callers=2 calls=0
*/
void sub_7f2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2e80ULL || rel >= 0x7f2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2e90 size=64 callers=1 calls=0
*/
void sub_7f2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2e90ULL || rel >= 0x7f2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2ed0 size=80 callers=1 calls=0
*/
void sub_7f2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2ed0ULL || rel >= 0x7f2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2f20 size=96 callers=2 calls=2
   calls: sub_7634d0, sub_786b40
*/
void sub_7f2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2f20ULL || rel >= 0x7f2f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2f80 size=16 callers=1 calls=0
*/
void sub_7f2f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2f80ULL || rel >= 0x7f2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2f90 size=48 callers=1 calls=0
*/
void sub_7f2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2f90ULL || rel >= 0x7f2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2fc0 size=16 callers=1 calls=0
*/
void sub_7f2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2fc0ULL || rel >= 0x7f2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2fd0 size=16 callers=2 calls=0
*/
void sub_7f2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2fd0ULL || rel >= 0x7f2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f2fe0 size=176 callers=5 calls=0
*/
void sub_7f2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2fe0ULL || rel >= 0x7f3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3090 size=48 callers=0 calls=0
*/
void sub_7f3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3090ULL || rel >= 0x7f30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f30c0 size=224 callers=4 calls=6
   calls: sub_763e60, sub_7644a0, sub_7f31f0, sub_7f3670, sub_7f36e0, sub_7f7b60
*/
void sub_7f30c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f30c0ULL || rel >= 0x7f31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f31a0 size=80 callers=6 calls=1
   calls: sub_7f7b60
*/
void sub_7f31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f31a0ULL || rel >= 0x7f31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f31f0 size=352 callers=1 calls=6
   calls: sub_763d00, sub_763dc0, sub_7ee310, sub_7f1820, sub_7f7700, sub_804160
*/
void sub_7f31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f31f0ULL || rel >= 0x7f3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3350 size=80 callers=5 calls=1
   calls: sub_804160
*/
void sub_7f3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3350ULL || rel >= 0x7f33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f33a0 size=64 callers=4 calls=1
   calls: sub_804160
*/
void sub_7f33a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f33a0ULL || rel >= 0x7f33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f33e0 size=272 callers=0 calls=3
   calls: sub_763d00, sub_7ee310, sub_7f7700
*/
void sub_7f33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f33e0ULL || rel >= 0x7f34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f34f0 size=16 callers=1 calls=0
*/
void sub_7f34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f34f0ULL || rel >= 0x7f3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3500 size=64 callers=0 calls=1
   calls: sub_803e30
*/
void sub_7f3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3500ULL || rel >= 0x7f3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3540 size=208 callers=1 calls=1
   calls: sub_7fc740
*/
void sub_7f3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3540ULL || rel >= 0x7f3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3610 size=96 callers=0 calls=2
   calls: sub_7f4450, sub_7fc750
*/
void sub_7f3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3610ULL || rel >= 0x7f3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3670 size=112 callers=1 calls=2
   calls: sub_7f4450, sub_7f76c0
*/
void sub_7f3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3670ULL || rel >= 0x7f36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f36e0 size=16 callers=5 calls=0
*/
void sub_7f36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f36e0ULL || rel >= 0x7f36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f36f0 size=16 callers=14 calls=0
*/
void sub_7f36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f36f0ULL || rel >= 0x7f3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3700 size=16 callers=11 calls=0
*/
void sub_7f3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3700ULL || rel >= 0x7f3710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3710 size=16 callers=1 calls=0
*/
void sub_7f3710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3710ULL || rel >= 0x7f3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3720 size=16 callers=1 calls=0
*/
void sub_7f3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3720ULL || rel >= 0x7f3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3730 size=16 callers=0 calls=0
*/
void sub_7f3730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3730ULL || rel >= 0x7f3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3740 size=32 callers=0 calls=0
*/
void sub_7f3740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3740ULL || rel >= 0x7f3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3760 size=16 callers=1 calls=0
*/
void sub_7f3760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3760ULL || rel >= 0x7f3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3770 size=16 callers=1 calls=0
*/
void sub_7f3770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3770ULL || rel >= 0x7f3780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3780 size=48 callers=1 calls=0
*/
void sub_7f3780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3780ULL || rel >= 0x7f37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f37b0 size=32 callers=0 calls=0
*/
void sub_7f37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f37b0ULL || rel >= 0x7f37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f37d0 size=16 callers=0 calls=0
*/
void sub_7f37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f37d0ULL || rel >= 0x7f37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f37e0 size=16 callers=0 calls=0
*/
void sub_7f37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f37e0ULL || rel >= 0x7f37f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f37f0 size=16 callers=2 calls=0
*/
void sub_7f37f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f37f0ULL || rel >= 0x7f3800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3800 size=48 callers=0 calls=0
*/
void sub_7f3800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3800ULL || rel >= 0x7f3830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3830 size=48 callers=1 calls=0
*/
void sub_7f3830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3830ULL || rel >= 0x7f3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3860 size=32 callers=1 calls=0
*/
void sub_7f3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3860ULL || rel >= 0x7f3880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3880 size=32 callers=3 calls=0
*/
void sub_7f3880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3880ULL || rel >= 0x7f38a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f38a0 size=1488 callers=15 calls=8
   calls: battleEffectId, sub_12fa4d0, sub_1367890, sub_136b4f0, sub_137b960, sub_137b970, sub_7cd960, sub_7f3e70
*/
void sub_7f38a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f38a0ULL || rel >= 0x7f3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f3e70 size=400 callers=1 calls=1
   calls: sub_7ed7b0
*/
void sub_7f3e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f3e70ULL || rel >= 0x7f4000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4000 size=256 callers=13 calls=1
   calls: sub_783bd0
*/
void sub_7f4000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4000ULL || rel >= 0x7f4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4100 size=272 callers=2 calls=4
   calls: sub_762700, sub_764b40, sub_7847d0, sub_8dddf0
*/
void sub_7f4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4100ULL || rel >= 0x7f4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4210 size=576 callers=15 calls=5
   calls: sub_14525e0, sub_14526f0, sub_783bd0, sub_7cdac0, sub_7f4100
*/
void sub_7f4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4210ULL || rel >= 0x7f4450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4450 size=32 callers=2 calls=0
*/
void sub_7f4450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4450ULL || rel >= 0x7f4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4470 size=208 callers=2 calls=4
   calls: sub_76c420, sub_76c470, sub_76c4a0, sub_76ca40
*/
void sub_7f4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4470ULL || rel >= 0x7f4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4540 size=64 callers=4 calls=0
*/
void sub_7f4540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4540ULL || rel >= 0x7f4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4580 size=608 callers=8 calls=0
*/
void sub_7f4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4580ULL || rel >= 0x7f47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f47e0 size=560 callers=3 calls=5
   calls: battleEffectId, sub_1351510, sub_783bd0, sub_7f38a0, sub_7f4000
*/
void sub_7f47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f47e0ULL || rel >= 0x7f4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4a10 size=256 callers=2 calls=4
   calls: battleEffectId, sub_7f38a0, sub_7f4000, sub_7f4210
*/
void sub_7f4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4a10ULL || rel >= 0x7f4b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4b10 size=288 callers=1 calls=4
   calls: battleEffectId, sub_7f38a0, sub_7f4000, sub_7f4210
*/
void sub_7f4b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4b10ULL || rel >= 0x7f4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4c30 size=320 callers=1 calls=4
   calls: battleEffectId, sub_7f38a0, sub_7f4000, sub_7f4210
*/
void sub_7f4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4c30ULL || rel >= 0x7f4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4d70 size=576 callers=3 calls=5
   calls: battleEffectId, sub_783bd0, sub_7cd960, sub_7f38a0, sub_7f4000
*/
void sub_7f4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4d70ULL || rel >= 0x7f4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4fb0 size=32 callers=1 calls=0
*/
void sub_7f4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4fb0ULL || rel >= 0x7f4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f4fd0 size=576 callers=1 calls=7
   calls: battleEffectId, sub_764b40, sub_7f38a0, sub_7f4210, sub_7f5210, sub_7f5900, sub_ead0f0
*/
void sub_7f4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4fd0ULL || rel >= 0x7f5210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f5210 size=304 callers=13 calls=1
   calls: sub_783bd0
*/
void sub_7f5210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f5210ULL || rel >= 0x7f5340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f5340 size=1136 callers=1 calls=8
   calls: battleEffectId, sub_764b40, sub_7cd960, sub_7f38a0, sub_7f5210, sub_7f57b0, sub_7f5900, sub_ead0f0
*/
void sub_7f5340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f5340ULL || rel >= 0x7f57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f57b0 size=336 callers=4 calls=2
   calls: sub_783bd0, sub_7847d0
*/
void sub_7f57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f57b0ULL || rel >= 0x7f5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f5900 size=192 callers=6 calls=6
   calls: sub_762930, sub_762940, sub_765830, sub_76bd60, sub_76bdf0, sub_7847d0
*/
void sub_7f5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f5900ULL || rel >= 0x7f59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f59c0 size=208 callers=1 calls=4
   calls: battleEffectId, sub_7f38a0, sub_7f4000, sub_7f5210
*/
void sub_7f59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f59c0ULL || rel >= 0x7f5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f5a90 size=208 callers=1 calls=4
   calls: battleEffectId, sub_7f38a0, sub_7f4000, sub_7f5210
*/
void sub_7f5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f5a90ULL || rel >= 0x7f5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f5b60 size=464 callers=1 calls=11
   calls: battleEffectId, sub_762930, sub_762940, sub_76c420, sub_76c470, sub_76c4a0, sub_76ca40, sub_7f38a0, sub_7f4000, sub_7f4210, sub_7f5210
*/
void sub_7f5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f5b60ULL || rel >= 0x7f5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f5d30 size=560 callers=1 calls=12
   calls: battleEffectId, sub_762930, sub_762940, sub_76c420, sub_76c470, sub_76c4a0, sub_76ca40, sub_7c2d80, sub_7f38a0, sub_7f4000, sub_7f4210, sub_7f5210
*/
void sub_7f5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f5d30ULL || rel >= 0x7f5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f5f60 size=432 callers=1 calls=6
   calls: battleEffectId, sub_1351510, sub_7f38a0, sub_7f4000, sub_7f4210, sub_7f5210
*/
void sub_7f5f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f5f60ULL || rel >= 0x7f6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f6110 size=432 callers=1 calls=10
   calls: battleEffectId, sub_762930, sub_762940, sub_76c420, sub_76c470, sub_76c4a0, sub_76ca40, sub_7f38a0, sub_7f4000, sub_7f5210
*/
void sub_7f6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f6110ULL || rel >= 0x7f62c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f62c0 size=528 callers=2 calls=11
   calls: battleEffectId, sub_762930, sub_762940, sub_76c420, sub_76c470, sub_76c4a0, sub_76ca40, sub_7f38a0, sub_7f4000, sub_7f4210, sub_7f5210
*/
void sub_7f62c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f62c0ULL || rel >= 0x7f64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f64d0 size=112 callers=1 calls=1
   calls: sub_7f47e0
*/
void sub_7f64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f64d0ULL || rel >= 0x7f6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f6540 size=1728 callers=3 calls=13
   calls: battleEffectId, sound_attr, sub_8ddc00, sub_8dde50, sub_8ded40, sub_8def00, sub_8dfba0, sub_8e04b0, sub_8e0710, sub_8e0730, sub_8e0ae0, sub_8e0b20
   ... +1 more
   ref: a_btl35_vs01
   ref: a_btl36_vs02
*/
void a_btl36_vs02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f6540ULL || rel >= 0x7f6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f6c00 size=528 callers=2 calls=8
   calls: battleEffectId, sub_7cdac0, sub_7ce070, sub_7ce1c0, sub_7ce1f0, sub_7f38a0, sub_7f4000, sub_7f5210
*/
void sub_7f6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f6c00ULL || rel >= 0x7f6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f6e10 size=96 callers=0 calls=0
*/
void sub_7f6e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f6e10ULL || rel >= 0x7f6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f6e70 size=48 callers=0 calls=0
*/
void sub_7f6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f6e70ULL || rel >= 0x7f6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f6ea0 size=480 callers=1 calls=1
   calls: sub_7f8bd0
*/
void sub_7f6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f6ea0ULL || rel >= 0x7f7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7080 size=16 callers=3 calls=0
*/
void sub_7f7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7080ULL || rel >= 0x7f7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7090 size=144 callers=1 calls=0
*/
void sub_7f7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7090ULL || rel >= 0x7f7120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7120 size=16 callers=1 calls=0
*/
void sub_7f7120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7120ULL || rel >= 0x7f7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7130 size=16 callers=4 calls=0
*/
void sub_7f7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7130ULL || rel >= 0x7f7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7140 size=16 callers=2 calls=0
*/
void sub_7f7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7140ULL || rel >= 0x7f7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7150 size=208 callers=5 calls=2
   calls: sub_787000, sub_7870a0
*/
void sub_7f7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7150ULL || rel >= 0x7f7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7220 size=880 callers=1 calls=1
   calls: sub_787000
*/
void sub_7f7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7220ULL || rel >= 0x7f7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7590 size=64 callers=2 calls=0
*/
void sub_7f7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7590ULL || rel >= 0x7f75d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f75d0 size=192 callers=3 calls=0
*/
void sub_7f75d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f75d0ULL || rel >= 0x7f7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7690 size=48 callers=44 calls=1
   calls: sub_7f8c20
*/
void sub_7f7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7690ULL || rel >= 0x7f76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f76c0 size=64 callers=3 calls=1
   calls: sub_7f8c20
*/
void sub_7f76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f76c0ULL || rel >= 0x7f7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7700 size=32 callers=27 calls=0
*/
void sub_7f7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7700ULL || rel >= 0x7f7720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7720 size=32 callers=2 calls=0
*/
void sub_7f7720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7720ULL || rel >= 0x7f7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7740 size=48 callers=7 calls=0
*/
void sub_7f7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7740ULL || rel >= 0x7f7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7770 size=336 callers=7 calls=5
   calls: sub_7ee6b0, sub_7f87a0, sub_7f87f0, sub_7f8810, sub_7f8c20
*/
void sub_7f7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7770ULL || rel >= 0x7f78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f78c0 size=128 callers=19 calls=1
   calls: sub_7f8c20
*/
void sub_7f78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f78c0ULL || rel >= 0x7f7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7940 size=32 callers=10 calls=0
*/
void sub_7f7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7940ULL || rel >= 0x7f7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7960 size=48 callers=1 calls=0
*/
void sub_7f7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7960ULL || rel >= 0x7f7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7990 size=80 callers=24 calls=2
   calls: sub_7ee6c0, sub_7eef50
*/
void sub_7f7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7990ULL || rel >= 0x7f79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f79e0 size=96 callers=50 calls=2
   calls: sub_7ee6c0, sub_7eef50
*/
void sub_7f79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f79e0ULL || rel >= 0x7f7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7a40 size=64 callers=1 calls=0
*/
void sub_7f7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7a40ULL || rel >= 0x7f7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7a80 size=96 callers=1 calls=1
   calls: sub_7f8c20
*/
void sub_7f7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7a80ULL || rel >= 0x7f7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7ae0 size=32 callers=123 calls=0
*/
void sub_7f7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7ae0ULL || rel >= 0x7f7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7b00 size=48 callers=11 calls=1
   calls: sub_785c80
*/
void sub_7f7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7b00ULL || rel >= 0x7f7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7b30 size=48 callers=2 calls=1
   calls: sub_785c80
*/
void sub_7f7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7b30ULL || rel >= 0x7f7b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7b60 size=48 callers=26 calls=1
   calls: sub_76bc60
*/
void sub_7f7b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7b60ULL || rel >= 0x7f7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7b90 size=48 callers=1 calls=1
   calls: sub_76bd60
*/
void sub_7f7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7b90ULL || rel >= 0x7f7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7bc0 size=128 callers=1 calls=4
   calls: sub_76bf30, sub_76bfa0, sub_76bfb0, sub_76c000
*/
void sub_7f7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7bc0ULL || rel >= 0x7f7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7c40 size=16 callers=7 calls=0
*/
void sub_7f7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7c40ULL || rel >= 0x7f7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7c50 size=240 callers=1 calls=2
   calls: sub_7eef50, sub_7f0670
*/
void sub_7f7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7c50ULL || rel >= 0x7f7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7d40 size=112 callers=1 calls=0
*/
void sub_7f7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7d40ULL || rel >= 0x7f7db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7db0 size=32 callers=16 calls=0
*/
void sub_7f7db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7db0ULL || rel >= 0x7f7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7dd0 size=32 callers=6 calls=0
*/
void sub_7f7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7dd0ULL || rel >= 0x7f7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7df0 size=320 callers=4 calls=6
   calls: sub_7ee6b0, sub_7f87a0, sub_7f87f0, sub_7f8840, sub_7f8870, sub_7f8c20
*/
void sub_7f7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7df0ULL || rel >= 0x7f7f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7f30 size=96 callers=1 calls=1
   calls: sub_7f8c20
*/
void sub_7f7f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7f30ULL || rel >= 0x7f7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7f90 size=80 callers=4 calls=2
   calls: sub_7eb660, sub_7ef4c0
*/
void sub_7f7f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7f90ULL || rel >= 0x7f7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7fe0 size=16 callers=4 calls=0
*/
void sub_7f7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7fe0ULL || rel >= 0x7f7ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f7ff0 size=64 callers=18 calls=1
   calls: sub_7f8c20
*/
void sub_7f7ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f7ff0ULL || rel >= 0x7f8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8030 size=16 callers=3 calls=0
*/
void sub_7f8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8030ULL || rel >= 0x7f8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8040 size=16 callers=1 calls=0
*/
void sub_7f8040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8040ULL || rel >= 0x7f8050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8050 size=32 callers=1 calls=0
*/
void sub_7f8050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8050ULL || rel >= 0x7f8070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8070 size=80 callers=3 calls=1
   calls: sub_7f0670
*/
void sub_7f8070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8070ULL || rel >= 0x7f80c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f80c0 size=48 callers=1 calls=1
   calls: sub_7f0670
*/
void sub_7f80c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f80c0ULL || rel >= 0x7f80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f80f0 size=560 callers=6 calls=12
   calls: sub_7811e0, sub_7ca1c0, sub_7ca890, sub_7cb420, sub_7ee6b0, sub_7f0670, sub_7f8c20, sub_7f8ce0, sub_7f8cf0, sub_7f8d00, sub_7f8d20, sub_7f98e0
*/
void sub_7f80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f80f0ULL || rel >= 0x7f8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8320 size=16 callers=5 calls=0
*/
void sub_7f8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8320ULL || rel >= 0x7f8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8330 size=16 callers=1 calls=0
*/
void sub_7f8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8330ULL || rel >= 0x7f8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8340 size=16 callers=1 calls=0
*/
void sub_7f8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8340ULL || rel >= 0x7f8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8350 size=496 callers=1 calls=2
   calls: sub_764b40, sub_7847d0
*/
void sub_7f8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8350ULL || rel >= 0x7f8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8540 size=224 callers=1 calls=5
   calls: sub_137ba50, sub_7ed1b0, sub_7eef50, sub_7fc2e0, sub_7fc450
*/
void sub_7f8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8540ULL || rel >= 0x7f8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8620 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_7f8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8620ULL || rel >= 0x7f8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8670 size=96 callers=0 calls=0
*/
void sub_7f8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8670ULL || rel >= 0x7f86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f86d0 size=176 callers=0 calls=1
   calls: sub_1c0
*/
void sub_7f86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f86d0ULL || rel >= 0x7f8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8780 size=16 callers=48 calls=0
*/
void sub_7f8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8780ULL || rel >= 0x7f8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8790 size=16 callers=3 calls=0
*/
void sub_7f8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8790ULL || rel >= 0x7f87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f87a0 size=32 callers=43 calls=0
*/
void sub_7f87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f87a0ULL || rel >= 0x7f87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f87c0 size=48 callers=12 calls=0
*/
void sub_7f87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f87c0ULL || rel >= 0x7f87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f87f0 size=32 callers=5 calls=0
*/
void sub_7f87f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f87f0ULL || rel >= 0x7f8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8810 size=16 callers=16 calls=0
*/
void sub_7f8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8810ULL || rel >= 0x7f8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8820 size=32 callers=3 calls=0
*/
void sub_7f8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8820ULL || rel >= 0x7f8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8840 size=48 callers=1 calls=0
*/
void sub_7f8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8840ULL || rel >= 0x7f8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8870 size=48 callers=2 calls=0
*/
void sub_7f8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8870ULL || rel >= 0x7f88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f88a0 size=32 callers=4 calls=0
*/
void sub_7f88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f88a0ULL || rel >= 0x7f88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f88c0 size=32 callers=6 calls=0
*/
void sub_7f88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f88c0ULL || rel >= 0x7f88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f88e0 size=48 callers=5 calls=0
*/
void sub_7f88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f88e0ULL || rel >= 0x7f8910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8910 size=80 callers=1 calls=0
*/
void sub_7f8910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8910ULL || rel >= 0x7f8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8960 size=48 callers=12 calls=0
*/
void sub_7f8960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8960ULL || rel >= 0x7f8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8990 size=80 callers=1 calls=0
*/
void sub_7f8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8990ULL || rel >= 0x7f89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f89e0 size=64 callers=21 calls=0
*/
void sub_7f89e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f89e0ULL || rel >= 0x7f8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8a20 size=80 callers=1 calls=0
*/
void sub_7f8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8a20ULL || rel >= 0x7f8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8a70 size=64 callers=2 calls=0
*/
void sub_7f8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8a70ULL || rel >= 0x7f8ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8ab0 size=96 callers=2 calls=0
*/
void sub_7f8ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8ab0ULL || rel >= 0x7f8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8b10 size=96 callers=0 calls=0
*/
void sub_7f8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8b10ULL || rel >= 0x7f8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8b70 size=16 callers=7 calls=0
*/
void sub_7f8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8b70ULL || rel >= 0x7f8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8b80 size=32 callers=1 calls=0
*/
void sub_7f8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8b80ULL || rel >= 0x7f8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8ba0 size=32 callers=6 calls=0
*/
void sub_7f8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8ba0ULL || rel >= 0x7f8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8bc0 size=16 callers=13 calls=0
*/
void sub_7f8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8bc0ULL || rel >= 0x7f8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8bd0 size=48 callers=3 calls=1
   calls: sub_ead110
*/
void sub_7f8bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8bd0ULL || rel >= 0x7f8c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8c00 size=16 callers=7 calls=0
*/
void sub_7f8c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8c00ULL || rel >= 0x7f8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8c10 size=16 callers=2 calls=0
*/
void sub_7f8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8c10ULL || rel >= 0x7f8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8c20 size=192 callers=30 calls=0
*/
void sub_7f8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8c20ULL || rel >= 0x7f8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8ce0 size=16 callers=1 calls=0
*/
void sub_7f8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8ce0ULL || rel >= 0x7f8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8cf0 size=16 callers=25 calls=0
*/
void sub_7f8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8cf0ULL || rel >= 0x7f8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8d00 size=32 callers=1 calls=0
*/
void sub_7f8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8d00ULL || rel >= 0x7f8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8d20 size=208 callers=3 calls=3
   calls: sub_7f8df0, sub_7f8f60, sub_7f9400
*/
void sub_7f8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8d20ULL || rel >= 0x7f8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8df0 size=368 callers=2 calls=1
   calls: sub_7f9c70
*/
void sub_7f8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8df0ULL || rel >= 0x7f8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f8f60 size=1184 callers=2 calls=2
   calls: sub_7f9c70, sub_7f9e20
*/
void sub_7f8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f8f60ULL || rel >= 0x7f9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9400 size=1248 callers=2 calls=5
   calls: sub_7f9c70, sub_7f9d10, sub_7f9de0, sub_7f9e20, sub_7fa580
*/
void sub_7f9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9400ULL || rel >= 0x7f98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f98e0 size=304 callers=6 calls=6
   calls: sub_7ed5e0, sub_7ee6b0, sub_7ef2b0, sub_7f8df0, sub_7f8f60, sub_7f9400
*/
void sub_7f98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f98e0ULL || rel >= 0x7f9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9a10 size=176 callers=3 calls=1
   calls: sub_7f9ac0
*/
void sub_7f9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9a10ULL || rel >= 0x7f9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9ac0 size=352 callers=187 calls=0
*/
void sub_7f9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9ac0ULL || rel >= 0x7f9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9c20 size=32 callers=0 calls=1
   calls: sub_7f9ac0
*/
void sub_7f9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9c20ULL || rel >= 0x7f9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9c40 size=48 callers=0 calls=0
*/
void sub_7f9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9c40ULL || rel >= 0x7f9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9c70 size=160 callers=7 calls=1
   calls: sub_7f9ac0
*/
void sub_7f9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9c70ULL || rel >= 0x7f9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9d10 size=208 callers=4 calls=1
   calls: sub_7f9ac0
*/
void sub_7f9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9d10ULL || rel >= 0x7f9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9de0 size=32 callers=2 calls=0
*/
void sub_7f9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9de0ULL || rel >= 0x7f9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9e00 size=32 callers=0 calls=0
*/
void sub_7f9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9e00ULL || rel >= 0x7f9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007f9e20 size=1760 callers=7 calls=2
   calls: sub_7f9ac0, sub_7fa580
*/
void sub_7f9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f9e20ULL || rel >= 0x7fa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fa500 size=128 callers=67 calls=0
*/
void sub_7fa500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fa500ULL || rel >= 0x7fa580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fa580 size=976 callers=8 calls=1
   calls: sub_7f9ac0
*/
void sub_7fa580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fa580ULL || rel >= 0x7fa950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fa950 size=112 callers=0 calls=0
*/
void sub_7fa950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fa950ULL || rel >= 0x7fa9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fa9c0 size=16 callers=48 calls=0
*/
void sub_7fa9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fa9c0ULL || rel >= 0x7fa9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fa9d0 size=16 callers=0 calls=0
*/
void sub_7fa9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fa9d0ULL || rel >= 0x7fa9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fa9e0 size=160 callers=0 calls=0
*/
void sub_7fa9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fa9e0ULL || rel >= 0x7faa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007faa80 size=32 callers=2 calls=0
*/
void sub_7faa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7faa80ULL || rel >= 0x7faaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007faaa0 size=304 callers=0 calls=1
   calls: sub_7f9ac0
*/
void sub_7faaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7faaa0ULL || rel >= 0x7fabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fabd0 size=288 callers=0 calls=0
*/
void sub_7fabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fabd0ULL || rel >= 0x7facf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007facf0 size=656 callers=1 calls=1
   calls: sub_7f9ac0
*/
void sub_7facf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7facf0ULL || rel >= 0x7faf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007faf80 size=208 callers=67 calls=1
   calls: sub_7f9ac0
*/
void sub_7faf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7faf80ULL || rel >= 0x7fb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fb050 size=880 callers=1 calls=2
   calls: sub_7f9ac0, sub_7fa500
*/
void sub_7fb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fb050ULL || rel >= 0x7fb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fb3c0 size=816 callers=1 calls=2
   calls: sub_7f9ac0, sub_7fa500
*/
void sub_7fb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fb3c0ULL || rel >= 0x7fb6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fb6f0 size=80 callers=0 calls=1
   calls: sub_7fa500
*/
void sub_7fb6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fb6f0ULL || rel >= 0x7fb740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fb740 size=336 callers=2 calls=0
*/
void sub_7fb740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fb740ULL || rel >= 0x7fb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fb890 size=1136 callers=2 calls=3
   calls: sub_7f9ac0, sub_7fa500, sub_7fb050
*/
void sub_7fb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fb890ULL || rel >= 0x7fbd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fbd00 size=1120 callers=3 calls=3
   calls: sub_7f9ac0, sub_7fa500, sub_7fb3c0
*/
void sub_7fbd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fbd00ULL || rel >= 0x7fc160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc160 size=16 callers=0 calls=0
*/
void sub_7fc160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc160ULL || rel >= 0x7fc170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc170 size=16 callers=2 calls=0
*/
void sub_7fc170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc170ULL || rel >= 0x7fc180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc180 size=16 callers=0 calls=0
*/
void sub_7fc180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc180ULL || rel >= 0x7fc190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc190 size=48 callers=3 calls=0
*/
void sub_7fc190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc190ULL || rel >= 0x7fc1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc1c0 size=32 callers=7 calls=0
*/
void sub_7fc1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc1c0ULL || rel >= 0x7fc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc1e0 size=16 callers=10 calls=0
*/
void sub_7fc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc1e0ULL || rel >= 0x7fc1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc1f0 size=32 callers=9 calls=0
*/
void sub_7fc1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc1f0ULL || rel >= 0x7fc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc210 size=32 callers=7 calls=0
*/
void sub_7fc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc210ULL || rel >= 0x7fc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc230 size=176 callers=0 calls=1
   calls: sub_7ef580
*/
void sub_7fc230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc230ULL || rel >= 0x7fc2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc2e0 size=16 callers=78 calls=0
*/
void sub_7fc2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc2e0ULL || rel >= 0x7fc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc2f0 size=96 callers=46 calls=1
   calls: sub_7ef580
*/
void sub_7fc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc2f0ULL || rel >= 0x7fc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc350 size=112 callers=2 calls=1
   calls: sub_7ef580
*/
void sub_7fc350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc350ULL || rel >= 0x7fc3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc3c0 size=112 callers=2 calls=1
   calls: sub_7ef580
*/
void sub_7fc3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc3c0ULL || rel >= 0x7fc430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc430 size=32 callers=21 calls=0
*/
void sub_7fc430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc430ULL || rel >= 0x7fc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc450 size=32 callers=84 calls=0
*/
void sub_7fc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc450ULL || rel >= 0x7fc470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc470 size=48 callers=2 calls=0
*/
void sub_7fc470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc470ULL || rel >= 0x7fc4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc4a0 size=64 callers=1 calls=0
*/
void sub_7fc4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc4a0ULL || rel >= 0x7fc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc4e0 size=112 callers=1 calls=1
   calls: sub_7ee6b0
*/
void sub_7fc4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc4e0ULL || rel >= 0x7fc550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc550 size=96 callers=2 calls=1
   calls: sub_7ee6b0
*/
void sub_7fc550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc550ULL || rel >= 0x7fc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc5b0 size=128 callers=2 calls=1
   calls: sub_7ef580
*/
void sub_7fc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc5b0ULL || rel >= 0x7fc630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc630 size=144 callers=1 calls=1
   calls: sub_7ef2d0
*/
void sub_7fc630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc630ULL || rel >= 0x7fc6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc6c0 size=128 callers=0 calls=0
*/
void sub_7fc6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc6c0ULL || rel >= 0x7fc740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc740 size=16 callers=1 calls=0
*/
void sub_7fc740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc740ULL || rel >= 0x7fc750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc750 size=48 callers=1 calls=0
*/
void sub_7fc750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc750ULL || rel >= 0x7fc780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc780 size=48 callers=0 calls=0
*/
void sub_7fc780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc780ULL || rel >= 0x7fc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc7b0 size=32 callers=0 calls=0
*/
void sub_7fc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc7b0ULL || rel >= 0x7fc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc7d0 size=16 callers=1 calls=0
*/
void sub_7fc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc7d0ULL || rel >= 0x7fc7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc7e0 size=16 callers=1 calls=0
*/
void sub_7fc7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc7e0ULL || rel >= 0x7fc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc7f0 size=16 callers=4 calls=0
*/
void sub_7fc7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc7f0ULL || rel >= 0x7fc800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc800 size=32 callers=8 calls=0
*/
void sub_7fc800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc800ULL || rel >= 0x7fc820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc820 size=16 callers=3 calls=0
*/
void sub_7fc820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc820ULL || rel >= 0x7fc830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc830 size=32 callers=3 calls=0
*/
void sub_7fc830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc830ULL || rel >= 0x7fc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc850 size=16 callers=0 calls=0
*/
void sub_7fc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc850ULL || rel >= 0x7fc860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc860 size=16 callers=0 calls=0
*/
void sub_7fc860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc860ULL || rel >= 0x7fc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc870 size=32 callers=1 calls=0
*/
void sub_7fc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc870ULL || rel >= 0x7fc890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc890 size=32 callers=0 calls=0
*/
void sub_7fc890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc890ULL || rel >= 0x7fc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc8b0 size=32 callers=0 calls=0
*/
void sub_7fc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc8b0ULL || rel >= 0x7fc8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc8d0 size=32 callers=1 calls=0
*/
void sub_7fc8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc8d0ULL || rel >= 0x7fc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc8f0 size=16 callers=1 calls=0
*/
void sub_7fc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc8f0ULL || rel >= 0x7fc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc900 size=32 callers=0 calls=0
*/
void sub_7fc900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc900ULL || rel >= 0x7fc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc920 size=32 callers=0 calls=0
*/
void sub_7fc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc920ULL || rel >= 0x7fc940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fc940 size=704 callers=2 calls=5
   calls: sub_7ed5e0, sub_7eef50, sub_7ef2b0, sub_7f8c20, sub_7fe1d0
*/
void sub_7fc940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fc940ULL || rel >= 0x7fcc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fcc00 size=112 callers=1 calls=3
   calls: sub_7ee810, sub_7eef50, sub_7f37f0
*/
void sub_7fcc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fcc00ULL || rel >= 0x7fcc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fcc70 size=80 callers=1 calls=3
   calls: sub_7ee810, sub_7eef50, sub_7f37f0
*/
void sub_7fcc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fcc70ULL || rel >= 0x7fccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fccc0 size=256 callers=1 calls=4
   calls: sub_7cd1f0, sub_7eef40, sub_7f33a0, sub_7fcdc0
*/
void sub_7fccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fccc0ULL || rel >= 0x7fcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fcdc0 size=368 callers=1 calls=0
*/
void sub_7fcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fcdc0ULL || rel >= 0x7fcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fcf30 size=80 callers=1 calls=2
   calls: sub_7c56e0, sub_7cd1f0
*/
void sub_7fcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fcf30ULL || rel >= 0x7fcf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fcf80 size=128 callers=0 calls=0
*/
void sub_7fcf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fcf80ULL || rel >= 0x7fd000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fd000 size=3968 callers=3 calls=21
   calls: sub_7ea870, sub_7ec0f0, sub_7ec260, sub_7fe830, sub_7feaa0, sub_7feae0, sub_7ff3a0, sub_7ff5e0, sub_7ff600, sub_7ff840, sub_7ff8c0, sub_7ffa70
   ... +9 more
*/
void sub_7fd000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fd000ULL || rel >= 0x7fdf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fdf80 size=256 callers=2 calls=20
   calls: sub_7ead40, sub_7ec8b0, sub_7fe840, sub_7fead0, sub_7ff3e0, sub_7ff610, sub_7ff860, sub_7ffa80, sub_8005a0, sub_8008d0, sub_800d00, sub_8015d0
   ... +8 more
*/
void sub_7fdf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fdf80ULL || rel >= 0x7fe080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe080 size=336 callers=6 calls=19
   calls: sub_7eab50, sub_7ec980, sub_7fe850, sub_7feb10, sub_7ff410, sub_7ff780, sub_7ff870, sub_7ffa90, sub_800600, sub_800900, sub_800d20, sub_801440
   ... +7 more
*/
void sub_7fe080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe080ULL || rel >= 0x7fe1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe1d0 size=16 callers=340 calls=0
*/
void sub_7fe1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe1d0ULL || rel >= 0x7fe1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe1e0 size=16 callers=34 calls=0
*/
void sub_7fe1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe1e0ULL || rel >= 0x7fe1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe1f0 size=16 callers=2 calls=0
*/
void sub_7fe1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe1f0ULL || rel >= 0x7fe200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe200 size=16 callers=1 calls=0
*/
void sub_7fe200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe200ULL || rel >= 0x7fe210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe210 size=16 callers=9 calls=0
*/
void sub_7fe210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe210ULL || rel >= 0x7fe220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe220 size=16 callers=25 calls=0
*/
void sub_7fe220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe220ULL || rel >= 0x7fe230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe230 size=16 callers=11 calls=0
*/
void sub_7fe230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe230ULL || rel >= 0x7fe240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe240 size=16 callers=12 calls=0
*/
void sub_7fe240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe240ULL || rel >= 0x7fe250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe250 size=16 callers=63 calls=0
*/
void sub_7fe250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe250ULL || rel >= 0x7fe260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe260 size=16 callers=17 calls=0
*/
void sub_7fe260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe260ULL || rel >= 0x7fe270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe270 size=16 callers=2 calls=0
*/
void sub_7fe270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe270ULL || rel >= 0x7fe280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe280 size=16 callers=4 calls=0
*/
void sub_7fe280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe280ULL || rel >= 0x7fe290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe290 size=16 callers=5 calls=0
*/
void sub_7fe290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe290ULL || rel >= 0x7fe2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe2a0 size=16 callers=6 calls=0
*/
void sub_7fe2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe2a0ULL || rel >= 0x7fe2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe2b0 size=16 callers=30 calls=0
*/
void sub_7fe2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe2b0ULL || rel >= 0x7fe2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe2c0 size=16 callers=2 calls=0
*/
void sub_7fe2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe2c0ULL || rel >= 0x7fe2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe2d0 size=16 callers=14 calls=0
*/
void sub_7fe2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe2d0ULL || rel >= 0x7fe2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe2e0 size=16 callers=1 calls=0
*/
void sub_7fe2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe2e0ULL || rel >= 0x7fe2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe2f0 size=16 callers=2 calls=0
*/
void sub_7fe2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe2f0ULL || rel >= 0x7fe300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe300 size=16 callers=1 calls=0
*/
void sub_7fe300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe300ULL || rel >= 0x7fe310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe310 size=16 callers=12 calls=0
*/
void sub_7fe310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe310ULL || rel >= 0x7fe320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe320 size=16 callers=7 calls=0
*/
void sub_7fe320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe320ULL || rel >= 0x7fe330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe330 size=16 callers=3 calls=0
*/
void sub_7fe330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe330ULL || rel >= 0x7fe340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe340 size=16 callers=6 calls=0
*/
void sub_7fe340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe340ULL || rel >= 0x7fe350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe350 size=16 callers=12 calls=0
*/
void sub_7fe350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe350ULL || rel >= 0x7fe360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe360 size=16 callers=7 calls=0
*/
void sub_7fe360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe360ULL || rel >= 0x7fe370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe370 size=16 callers=1 calls=0
*/
void sub_7fe370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe370ULL || rel >= 0x7fe380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe380 size=16 callers=1 calls=0
*/
void sub_7fe380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe380ULL || rel >= 0x7fe390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe390 size=32 callers=1 calls=0
*/
void sub_7fe390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe390ULL || rel >= 0x7fe3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe3b0 size=32 callers=0 calls=0
*/
void sub_7fe3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe3b0ULL || rel >= 0x7fe3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe3d0 size=1072 callers=1 calls=4
   calls: sub_7ec260, sub_7feae0, sub_7ff600, sub_7ffa70
*/
void sub_7fe3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe3d0ULL || rel >= 0x7fe800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe800 size=48 callers=0 calls=1
   calls: sub_7fe3d0
*/
void sub_7fe800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe800ULL || rel >= 0x7fe830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe830 size=16 callers=1 calls=0
*/
void sub_7fe830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe830ULL || rel >= 0x7fe840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe840 size=16 callers=1 calls=0
*/
void sub_7fe840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe840ULL || rel >= 0x7fe850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe850 size=32 callers=1 calls=0
*/
void sub_7fe850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe850ULL || rel >= 0x7fe870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe870 size=352 callers=2 calls=3
   calls: sub_7cb490, sub_7cbf80, sub_7ee6b0
*/
void sub_7fe870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe870ULL || rel >= 0x7fe9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fe9d0 size=128 callers=0 calls=0
*/
void sub_7fe9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fe9d0ULL || rel >= 0x7fea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fea50 size=80 callers=1 calls=1
   calls: sub_76d0d0
   ref: bin/battle/talk/%s.gfbbt
*/
void unnamed_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fea50ULL || rel >= 0x7feaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007feaa0 size=48 callers=1 calls=0
*/
void sub_7feaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7feaa0ULL || rel >= 0x7fead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fead0 size=16 callers=1 calls=0
*/
void sub_7fead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fead0ULL || rel >= 0x7feae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007feae0 size=32 callers=2 calls=0
*/
void sub_7feae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7feae0ULL || rel >= 0x7feb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007feb00 size=16 callers=0 calls=0
*/
void sub_7feb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7feb00ULL || rel >= 0x7feb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007feb10 size=96 callers=1 calls=0
*/
void sub_7feb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7feb10ULL || rel >= 0x7feb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007feb70 size=16 callers=1 calls=0
*/
void sub_7feb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7feb70ULL || rel >= 0x7feb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007feb80 size=784 callers=3 calls=5
   calls: sub_7cb490, sub_7fe340, sub_7fee90, sub_7fef80, sub_7ff460
*/
void sub_7feb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7feb80ULL || rel >= 0x7fee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fee90 size=240 callers=1 calls=4
   calls: sub_7cb490, sub_7ed1a0, sub_7fc2f0, sub_7fe1d0
*/
void sub_7fee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fee90ULL || rel >= 0x7fef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007fef80 size=256 callers=1 calls=7
   calls: sub_7cb490, sub_7ed1a0, sub_7eef50, sub_7f7740, sub_7fc430, sub_7fc550, sub_7fe1d0
*/
void sub_7fef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fef80ULL || rel >= 0x7ff080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff080 size=208 callers=1 calls=1
   calls: sub_76d0d0
   ref: bin/battle/waza/sequence/%s.bseq
*/
void unnamed_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff080ULL || rel >= 0x7ff150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff150 size=304 callers=4 calls=3
   calls: sub_5e6180, sub_7ff2a0, sub_d0c0
*/
void sub_7ff150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff150ULL || rel >= 0x7ff280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff280 size=32 callers=0 calls=0
*/
void sub_7ff280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff280ULL || rel >= 0x7ff2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff2a0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_7ff2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff2a0ULL || rel >= 0x7ff320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff320 size=128 callers=0 calls=0
*/
void sub_7ff320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff320ULL || rel >= 0x7ff3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff3a0 size=64 callers=1 calls=0
*/
void sub_7ff3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff3a0ULL || rel >= 0x7ff3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff3e0 size=48 callers=1 calls=0
*/
void sub_7ff3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff3e0ULL || rel >= 0x7ff410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff410 size=80 callers=1 calls=0
*/
void sub_7ff410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff410ULL || rel >= 0x7ff460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff460 size=32 callers=10 calls=0
*/
void sub_7ff460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff460ULL || rel >= 0x7ff480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff480 size=64 callers=0 calls=0
*/
void sub_7ff480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff480ULL || rel >= 0x7ff4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff4c0 size=48 callers=1 calls=0
*/
void sub_7ff4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff4c0ULL || rel >= 0x7ff4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff4f0 size=80 callers=0 calls=0
*/
void sub_7ff4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff4f0ULL || rel >= 0x7ff540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff540 size=48 callers=2 calls=0
*/
void sub_7ff540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff540ULL || rel >= 0x7ff570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff570 size=80 callers=0 calls=0
*/
void sub_7ff570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff570ULL || rel >= 0x7ff5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff5c0 size=16 callers=0 calls=0
*/
void sub_7ff5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff5c0ULL || rel >= 0x7ff5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff5d0 size=16 callers=0 calls=0
*/
void sub_7ff5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff5d0ULL || rel >= 0x7ff5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff5e0 size=32 callers=1 calls=0
*/
void sub_7ff5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff5e0ULL || rel >= 0x7ff600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff600 size=16 callers=2 calls=0
*/
void sub_7ff600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff600ULL || rel >= 0x7ff610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff610 size=32 callers=1 calls=0
*/
void sub_7ff610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff610ULL || rel >= 0x7ff630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff630 size=160 callers=0 calls=0
*/
void sub_7ff630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff630ULL || rel >= 0x7ff6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff6d0 size=176 callers=3 calls=1
   calls: sub_7cce80
*/
void sub_7ff6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff6d0ULL || rel >= 0x7ff780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff780 size=64 callers=1 calls=0
*/
void sub_7ff780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff780ULL || rel >= 0x7ff7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff7c0 size=128 callers=0 calls=0
*/
void sub_7ff7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff7c0ULL || rel >= 0x7ff840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff840 size=32 callers=1 calls=0
*/
void sub_7ff840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff840ULL || rel >= 0x7ff860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff860 size=16 callers=1 calls=0
*/
void sub_7ff860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff860ULL || rel >= 0x7ff870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff870 size=16 callers=1 calls=0
*/
void sub_7ff870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff870ULL || rel >= 0x7ff880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff880 size=16 callers=1 calls=0
*/
void sub_7ff880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff880ULL || rel >= 0x7ff890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff890 size=16 callers=0 calls=0
*/
void sub_7ff890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff890ULL || rel >= 0x7ff8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff8a0 size=16 callers=0 calls=0
*/
void sub_7ff8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff8a0ULL || rel >= 0x7ff8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff8b0 size=16 callers=0 calls=0
*/
void sub_7ff8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff8b0ULL || rel >= 0x7ff8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff8c0 size=48 callers=4 calls=0
*/
void sub_7ff8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff8c0ULL || rel >= 0x7ff8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ff8f0 size=384 callers=0 calls=1
   calls: sub_7f8780
*/
void sub_7ff8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff8f0ULL || rel >= 0x7ffa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffa70 size=16 callers=5 calls=0
*/
void sub_7ffa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffa70ULL || rel >= 0x7ffa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffa80 size=16 callers=1 calls=0
*/
void sub_7ffa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffa80ULL || rel >= 0x7ffa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffa90 size=16 callers=1 calls=0
*/
void sub_7ffa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffa90ULL || rel >= 0x7ffaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffaa0 size=16 callers=7 calls=0
*/
void sub_7ffaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffaa0ULL || rel >= 0x7ffab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffab0 size=16 callers=1 calls=0
*/
void sub_7ffab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffab0ULL || rel >= 0x7ffac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffac0 size=48 callers=2 calls=0
*/
void sub_7ffac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffac0ULL || rel >= 0x7ffaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffaf0 size=16 callers=2 calls=0
*/
void sub_7ffaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffaf0ULL || rel >= 0x7ffb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffb00 size=48 callers=1 calls=0
*/
void sub_7ffb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffb00ULL || rel >= 0x7ffb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffb30 size=16 callers=1 calls=0
*/
void sub_7ffb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffb30ULL || rel >= 0x7ffb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffb40 size=32 callers=0 calls=0
*/
void sub_7ffb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffb40ULL || rel >= 0x7ffb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffb60 size=32 callers=0 calls=0
*/
void sub_7ffb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffb60ULL || rel >= 0x7ffb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffb80 size=80 callers=0 calls=0
*/
void sub_7ffb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffb80ULL || rel >= 0x7ffbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffbd0 size=272 callers=0 calls=1
   calls: sub_7f88e0
*/
void sub_7ffbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffbd0ULL || rel >= 0x7ffce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffce0 size=160 callers=0 calls=0
*/
void sub_7ffce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffce0ULL || rel >= 0x7ffd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffd80 size=160 callers=0 calls=1
   calls: sub_7f8780
*/
void sub_7ffd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffd80ULL || rel >= 0x7ffe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffe20 size=48 callers=29 calls=0
*/
void sub_7ffe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffe20ULL || rel >= 0x7ffe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ffe50 size=432 callers=0 calls=3
   calls: sub_7f8780, sub_7f88e0, sub_7f8910
*/
void sub_7ffe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ffe50ULL || rel >= 0x800000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800000 size=176 callers=2 calls=4
   calls: sub_7cbf80, sub_7ed1e0, sub_7ee6b0, sub_7f0500
*/
void sub_800000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800000ULL || rel >= 0x8000b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008000b0 size=128 callers=0 calls=1
   calls: sub_7f8960
*/
void sub_8000b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8000b0ULL || rel >= 0x800130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800130 size=64 callers=1 calls=0
*/
void sub_800130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800130ULL || rel >= 0x800170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800170 size=96 callers=2 calls=1
   calls: sub_7f8960
*/
void sub_800170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800170ULL || rel >= 0x8001d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008001d0 size=112 callers=1 calls=1
   calls: sub_7f8960
*/
void sub_8001d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8001d0ULL || rel >= 0x800240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800240 size=64 callers=1 calls=0
*/
void sub_800240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800240ULL || rel >= 0x800280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800280 size=16 callers=2 calls=0
*/
void sub_800280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800280ULL || rel >= 0x800290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800290 size=16 callers=3 calls=0
*/
void sub_800290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800290ULL || rel >= 0x8002a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008002a0 size=288 callers=0 calls=2
   calls: sub_7f8780, sub_7f88e0
*/
void sub_8002a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8002a0ULL || rel >= 0x8003c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008003c0 size=16 callers=4 calls=0
*/
void sub_8003c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8003c0ULL || rel >= 0x8003d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008003d0 size=16 callers=1 calls=0
*/
void sub_8003d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8003d0ULL || rel >= 0x8003e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008003e0 size=80 callers=1 calls=1
   calls: sub_7f8960
*/
void sub_8003e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8003e0ULL || rel >= 0x800430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800430 size=80 callers=1 calls=1
   calls: sub_7f8960
*/
void sub_800430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800430ULL || rel >= 0x800480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800480 size=48 callers=1 calls=1
   calls: sub_7f89e0
*/
void sub_800480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800480ULL || rel >= 0x8004b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008004b0 size=32 callers=1 calls=0
*/
void sub_8004b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8004b0ULL || rel >= 0x8004d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008004d0 size=128 callers=0 calls=0
*/
void sub_8004d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8004d0ULL || rel >= 0x800550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800550 size=80 callers=1 calls=0
*/
void sub_800550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800550ULL || rel >= 0x8005a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008005a0 size=64 callers=1 calls=0
*/
void sub_8005a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8005a0ULL || rel >= 0x8005e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008005e0 size=16 callers=0 calls=0
*/
void sub_8005e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8005e0ULL || rel >= 0x8005f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008005f0 size=16 callers=0 calls=0
*/
void sub_8005f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8005f0ULL || rel >= 0x800600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800600 size=16 callers=1 calls=0
*/
void sub_800600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800600ULL || rel >= 0x800610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800610 size=112 callers=1 calls=0
*/
void sub_800610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800610ULL || rel >= 0x800680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800680 size=96 callers=5 calls=0
*/
void sub_800680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800680ULL || rel >= 0x8006e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008006e0 size=64 callers=0 calls=0
*/
void sub_8006e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8006e0ULL || rel >= 0x800720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800720 size=64 callers=1 calls=2
   calls: sub_800760, sub_800a70
*/
void sub_800720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800720ULL || rel >= 0x800760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800760 size=368 callers=1 calls=1
   calls: sub_800a30
*/
void sub_800760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800760ULL || rel >= 0x8008d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008008d0 size=48 callers=1 calls=1
   calls: sub_800a70
*/
void sub_8008d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8008d0ULL || rel >= 0x800900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800900 size=64 callers=1 calls=1
   calls: sub_800ab0
*/
void sub_800900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800900ULL || rel >= 0x800940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800940 size=80 callers=4 calls=1
   calls: sub_7cac80
*/
void sub_800940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800940ULL || rel >= 0x800990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800990 size=16 callers=9 calls=0
*/
void sub_800990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800990ULL || rel >= 0x8009a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008009a0 size=16 callers=2 calls=0
*/
void sub_8009a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8009a0ULL || rel >= 0x8009b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008009b0 size=128 callers=0 calls=0
*/
void sub_8009b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8009b0ULL || rel >= 0x800a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800a30 size=64 callers=2 calls=0
*/
void sub_800a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800a30ULL || rel >= 0x800a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800a70 size=64 callers=2 calls=0
*/
void sub_800a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800a70ULL || rel >= 0x800ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800ab0 size=48 callers=1 calls=0
*/
void sub_800ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800ab0ULL || rel >= 0x800ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800ae0 size=80 callers=3 calls=1
   calls: sub_7c56e0
*/
void sub_800ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800ae0ULL || rel >= 0x800b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800b30 size=48 callers=0 calls=0
*/
void sub_800b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800b30ULL || rel >= 0x800b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800b60 size=64 callers=0 calls=0
*/
void sub_800b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800b60ULL || rel >= 0x800ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800ba0 size=80 callers=3 calls=0
*/
void sub_800ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800ba0ULL || rel >= 0x800bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800bf0 size=16 callers=1 calls=0
*/
void sub_800bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800bf0ULL || rel >= 0x800c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800c00 size=32 callers=4 calls=0
*/
void sub_800c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800c00ULL || rel >= 0x800c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800c20 size=64 callers=0 calls=0
*/
void sub_800c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800c20ULL || rel >= 0x800c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800c60 size=32 callers=0 calls=0
*/
void sub_800c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800c60ULL || rel >= 0x800c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800c80 size=128 callers=0 calls=0
*/
void sub_800c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800c80ULL || rel >= 0x800d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800d00 size=32 callers=1 calls=0
*/
void sub_800d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800d00ULL || rel >= 0x800d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800d20 size=32 callers=1 calls=0
*/
void sub_800d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800d20ULL || rel >= 0x800d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800d40 size=80 callers=1 calls=0
*/
void sub_800d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800d40ULL || rel >= 0x800d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00800d90 size=1104 callers=0 calls=1
   calls: sub_801720
*/
void sub_800d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x800d90ULL || rel >= 0x8011e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008011e0 size=144 callers=0 calls=1
   calls: sub_801270
*/
void sub_8011e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8011e0ULL || rel >= 0x801270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801270 size=320 callers=2 calls=0
*/
void sub_801270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801270ULL || rel >= 0x8013b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008013b0 size=144 callers=0 calls=1
   calls: sub_801270
*/
void sub_8013b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8013b0ULL || rel >= 0x801440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801440 size=400 callers=1 calls=1
   calls: sub_801770
*/
void sub_801440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801440ULL || rel >= 0x8015d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008015d0 size=272 callers=1 calls=1
   calls: sub_8017d0
*/
void sub_8015d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8015d0ULL || rel >= 0x8016e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008016e0 size=64 callers=0 calls=0
*/
void sub_8016e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8016e0ULL || rel >= 0x801720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801720 size=48 callers=5 calls=0
*/
void sub_801720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801720ULL || rel >= 0x801750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801750 size=16 callers=0 calls=0
*/
void sub_801750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801750ULL || rel >= 0x801760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801760 size=16 callers=0 calls=0
*/
void sub_801760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801760ULL || rel >= 0x801770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801770 size=16 callers=29 calls=0
*/
void sub_801770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801770ULL || rel >= 0x801780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801780 size=48 callers=2 calls=0
*/
void sub_801780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801780ULL || rel >= 0x8017b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008017b0 size=16 callers=5 calls=0
*/
void sub_8017b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8017b0ULL || rel >= 0x8017c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008017c0 size=16 callers=2 calls=0
*/
void sub_8017c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8017c0ULL || rel >= 0x8017d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008017d0 size=16 callers=31 calls=0
*/
void sub_8017d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8017d0ULL || rel >= 0x8017e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008017e0 size=16 callers=2 calls=0
*/
void sub_8017e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8017e0ULL || rel >= 0x8017f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

