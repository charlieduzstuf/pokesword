/* main functions 0134cb20..0136e990 (163 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0134cb20 size=224 callers=2 calls=0
*/
void sub_134cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134cb20ULL || rel >= 0x134cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134cc00 size=208 callers=2 calls=0
*/
void sub_134cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134cc00ULL || rel >= 0x134ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ccd0 size=512 callers=2 calls=2
   calls: sub_1346730, sub_134ced0
*/
void sub_134ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ccd0ULL || rel >= 0x134ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ced0 size=336 callers=1 calls=0
*/
void sub_134ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ced0ULL || rel >= 0x134d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134d020 size=512 callers=28 calls=2
   calls: sub_1346730, sub_134d220
*/
void sub_134d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134d020ULL || rel >= 0x134d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134d220 size=336 callers=1 calls=0
*/
void sub_134d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134d220ULL || rel >= 0x134d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134d370 size=512 callers=14 calls=2
   calls: sub_1346730, sub_134d570
*/
void sub_134d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134d370ULL || rel >= 0x134d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134d570 size=336 callers=1 calls=0
*/
void sub_134d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134d570ULL || rel >= 0x134d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134d6c0 size=336 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_134d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134d6c0ULL || rel >= 0x134d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134d810 size=560 callers=1 calls=2
   calls: sub_1346730, sub_134dc40
*/
void sub_134d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134d810ULL || rel >= 0x134da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134da40 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_134dc40
*/
void sub_134da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134da40ULL || rel >= 0x134dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134dc40 size=368 callers=2 calls=0
*/
void sub_134dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134dc40ULL || rel >= 0x134ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ddb0 size=336 callers=3 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_134ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ddb0ULL || rel >= 0x134df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134df00 size=560 callers=1 calls=2
   calls: sub_1346730, sub_134e330
*/
void sub_134df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134df00ULL || rel >= 0x134e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134e130 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_134e330
*/
void sub_134e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134e130ULL || rel >= 0x134e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134e330 size=368 callers=6 calls=0
*/
void sub_134e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134e330ULL || rel >= 0x134e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134e4a0 size=336 callers=2 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_134e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134e4a0ULL || rel >= 0x134e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134e5f0 size=560 callers=1 calls=2
   calls: sub_1346730, sub_134ea20
*/
void sub_134e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134e5f0ULL || rel >= 0x134e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134e820 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_134ea20
*/
void sub_134e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134e820ULL || rel >= 0x134ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ea20 size=368 callers=4 calls=0
*/
void sub_134ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ea20ULL || rel >= 0x134eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134eb90 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_134eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134eb90ULL || rel >= 0x134ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134ebe0 size=784 callers=0 calls=4
   calls: sub_134eef0, sub_137e480, sub_76f550, sub_76f7d0
*/
void sub_134ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ebe0ULL || rel >= 0x134eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134eef0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1351c70, sub_1351ec0
*/
void sub_134eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134eef0ULL || rel >= 0x134f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f030 size=688 callers=0 calls=7
   calls: sub_1301a30, sub_13520d0, sub_137e480, sub_762d50, sub_76f550, sub_76f7d0, sub_76f7e0
*/
void sub_134f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f030ULL || rel >= 0x134f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f2e0 size=192 callers=1 calls=3
   calls: sub_762d50, sub_767950, sub_76f7e0
*/
void sub_134f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f2e0ULL || rel >= 0x134f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f3a0 size=64 callers=25 calls=0
*/
void sub_134f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f3a0ULL || rel >= 0x134f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f3e0 size=64 callers=22 calls=0
*/
void sub_134f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f3e0ULL || rel >= 0x134f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f420 size=96 callers=0 calls=2
   calls: sub_134eef0, sub_137e480
*/
void sub_134f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f420ULL || rel >= 0x134f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f480 size=16 callers=1 calls=0
*/
void sub_134f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f480ULL || rel >= 0x134f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f490 size=368 callers=41 calls=2
   calls: sub_76f440, sub_76f7e0
*/
void sub_134f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f490ULL || rel >= 0x134f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f600 size=448 callers=4 calls=4
   calls: sub_762d50, sub_767950, sub_76f440, sub_76f7e0
*/
void sub_134f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f600ULL || rel >= 0x134f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134f7c0 size=576 callers=3 calls=3
   calls: sub_134fa00, sub_13533f0, sub_1354700
*/
void sub_134f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134f7c0ULL || rel >= 0x134fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134fa00 size=688 callers=6 calls=3
   calls: sub_762d50, sub_76f7d0, sub_76f7e0
*/
void sub_134fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134fa00ULL || rel >= 0x134fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134fcb0 size=432 callers=3 calls=2
   calls: sub_134f7c0, sub_76f440
*/
void sub_134fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134fcb0ULL || rel >= 0x134fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0134fe60 size=432 callers=1 calls=2
   calls: sub_134fa00, sub_76f440
*/
void sub_134fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134fe60ULL || rel >= 0x1350010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350010 size=560 callers=7 calls=4
   calls: sub_762d50, sub_76f440, sub_76f7d0, sub_76f7e0
*/
void sub_1350010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350010ULL || rel >= 0x1350240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350240 size=288 callers=1 calls=0
*/
void sub_1350240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350240ULL || rel >= 0x1350360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350360 size=240 callers=1 calls=0
*/
void sub_1350360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350360ULL || rel >= 0x1350450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350450 size=640 callers=1 calls=4
   calls: sub_762d40, sub_762d50, sub_76f7d0, sub_76f7e0
*/
void sub_1350450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350450ULL || rel >= 0x13506d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013506d0 size=160 callers=3 calls=2
   calls: sub_762d40, sub_76f7d0
*/
void sub_13506d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13506d0ULL || rel >= 0x1350770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350770 size=400 callers=7 calls=3
   calls: sub_762d40, sub_76f440, sub_76f7d0
*/
void sub_1350770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350770ULL || rel >= 0x1350900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350900 size=432 callers=11 calls=3
   calls: sub_762d50, sub_767950, sub_76f7e0
*/
void sub_1350900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350900ULL || rel >= 0x1350ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350ab0 size=496 callers=5 calls=3
   calls: sub_1350900, sub_1354700, sub_76f440
*/
void sub_1350ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350ab0ULL || rel >= 0x1350ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350ca0 size=352 callers=2 calls=2
   calls: sub_1350900, sub_76f440
*/
void sub_1350ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350ca0ULL || rel >= 0x1350e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350e00 size=368 callers=2 calls=2
   calls: sub_1350900, sub_1354700
*/
void sub_1350e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350e00ULL || rel >= 0x1350f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01350f70 size=320 callers=8 calls=2
   calls: sub_1350e00, sub_76f440
*/
void sub_1350f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1350f70ULL || rel >= 0x13510b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013510b0 size=1120 callers=3 calls=4
   calls: sub_13533f0, sub_1354700, sub_762d50, sub_76f7e0
*/
void sub_13510b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13510b0ULL || rel >= 0x1351510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351510 size=352 callers=4 calls=2
   calls: sub_13510b0, sub_76f440
*/
void sub_1351510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351510ULL || rel >= 0x1351670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351670 size=304 callers=4 calls=3
   calls: sub_1350900, sub_13533f0, sub_13546e0
*/
void sub_1351670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351670ULL || rel >= 0x13517a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013517a0 size=320 callers=10 calls=2
   calls: sub_1351670, sub_76f440
*/
void sub_13517a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13517a0ULL || rel >= 0x13518e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013518e0 size=512 callers=2 calls=6
   calls: sub_7628f0, sub_762d50, sub_767950, sub_76f440, sub_76f7d0, sub_76f7e0
*/
void sub_13518e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13518e0ULL || rel >= 0x1351ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351ae0 size=80 callers=0 calls=0
*/
void sub_1351ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351ae0ULL || rel >= 0x1351b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351b30 size=80 callers=0 calls=0
*/
void sub_1351b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351b30ULL || rel >= 0x1351b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351b80 size=80 callers=0 calls=0
*/
void sub_1351b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351b80ULL || rel >= 0x1351bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351bd0 size=80 callers=0 calls=0
*/
void sub_1351bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351bd0ULL || rel >= 0x1351c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351c20 size=80 callers=0 calls=0
*/
void sub_1351c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351c20ULL || rel >= 0x1351c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351c70 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1351c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351c70ULL || rel >= 0x1351ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01351ec0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1351ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1351ec0ULL || rel >= 0x13520d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013520d0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13520d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13520d0ULL || rel >= 0x13522f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013522f0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_13522f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13522f0ULL || rel >= 0x1352340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01352340 size=64 callers=0 calls=1
   calls: boxname
*/
void sub_1352340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1352340ULL || rel >= 0x1352380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01352380 size=1392 callers=3 calls=10
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_67b990, sub_67bdb0, sub_67c120, sub_67cbd0, sub_67d080, unnamed_47
   ref: common/boxname.dat
*/
void boxname(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1352380ULL || rel >= 0x13528f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013528f0 size=896 callers=0 calls=5
   calls: sub_1346e90, sub_134d370, sub_1354a50, sub_1354f60, sub_137e480
*/
void sub_13528f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13528f0ULL || rel >= 0x1352c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01352c70 size=448 callers=0 calls=5
   calls: sub_1345aa0, sub_134c3e0, sub_1352e30, sub_1352f70, sub_137e480
*/
void sub_1352c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1352c70ULL || rel >= 0x1352e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01352e30 size=320 callers=3 calls=3
   calls: sub_1355470, sub_1355600, sub_1355850
*/
void sub_1352e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1352e30ULL || rel >= 0x1352f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01352f70 size=320 callers=1 calls=3
   calls: sub_1355d50, sub_1355ee0, sub_1356130
*/
void sub_1352f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1352f70ULL || rel >= 0x13530b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013530b0 size=32 callers=1 calls=0
*/
void sub_13530b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13530b0ULL || rel >= 0x13530d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013530d0 size=32 callers=1 calls=0
*/
void sub_13530d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13530d0ULL || rel >= 0x13530f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013530f0 size=32 callers=1 calls=0
*/
void sub_13530f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13530f0ULL || rel >= 0x1353110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353110 size=736 callers=1 calls=1
   calls: sub_135a1a0
*/
void sub_1353110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353110ULL || rel >= 0x13533f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013533f0 size=208 callers=35 calls=1
   calls: sub_135a1a0
*/
void sub_13533f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13533f0ULL || rel >= 0x13534c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013534c0 size=320 callers=0 calls=0
*/
void sub_13534c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13534c0ULL || rel >= 0x1353600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353600 size=32 callers=2 calls=0
*/
void sub_1353600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353600ULL || rel >= 0x1353620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353620 size=1200 callers=3 calls=0
*/
void sub_1353620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353620ULL || rel >= 0x1353ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353ad0 size=48 callers=32 calls=0
*/
void sub_1353ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353ad0ULL || rel >= 0x1353b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353b00 size=48 callers=27 calls=0
*/
void sub_1353b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353b00ULL || rel >= 0x1353b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353b30 size=32 callers=6 calls=0
*/
void sub_1353b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353b30ULL || rel >= 0x1353b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353b50 size=96 callers=2 calls=0
*/
void sub_1353b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353b50ULL || rel >= 0x1353bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353bb0 size=192 callers=4 calls=1
   calls: sub_1353c70
*/
void sub_1353bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353bb0ULL || rel >= 0x1353c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353c70 size=272 callers=24 calls=0
*/
void sub_1353c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353c70ULL || rel >= 0x1353d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353d80 size=320 callers=6 calls=0
*/
void sub_1353d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353d80ULL || rel >= 0x1353ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353ec0 size=96 callers=16 calls=0
*/
void sub_1353ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353ec0ULL || rel >= 0x1353f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01353f20 size=304 callers=3 calls=1
   calls: sub_1353d80
*/
void sub_1353f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1353f20ULL || rel >= 0x1354050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354050 size=32 callers=3 calls=0
*/
void sub_1354050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354050ULL || rel >= 0x1354070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354070 size=912 callers=24 calls=0
*/
void sub_1354070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354070ULL || rel >= 0x1354400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354400 size=48 callers=28 calls=0
*/
void sub_1354400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354400ULL || rel >= 0x1354430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354430 size=256 callers=10 calls=1
   calls: sub_1353c70
*/
void sub_1354430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354430ULL || rel >= 0x1354530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354530 size=352 callers=8 calls=0
*/
void sub_1354530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354530ULL || rel >= 0x1354690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354690 size=48 callers=11 calls=0
*/
void sub_1354690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354690ULL || rel >= 0x13546c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013546c0 size=32 callers=6 calls=0
*/
void sub_13546c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13546c0ULL || rel >= 0x13546e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013546e0 size=32 callers=1 calls=0
*/
void sub_13546e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13546e0ULL || rel >= 0x1354700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354700 size=176 callers=13 calls=1
   calls: sub_135a1a0
*/
void sub_1354700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354700ULL || rel >= 0x13547b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013547b0 size=224 callers=6 calls=1
   calls: sub_135a1a0
*/
void sub_13547b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13547b0ULL || rel >= 0x1354890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354890 size=16 callers=170 calls=0
*/
void sub_1354890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354890ULL || rel >= 0x13548a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013548a0 size=16 callers=2 calls=0
*/
void sub_13548a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13548a0ULL || rel >= 0x13548b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013548b0 size=16 callers=1 calls=0
*/
void sub_13548b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13548b0ULL || rel >= 0x13548c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013548c0 size=80 callers=0 calls=0
*/
void sub_13548c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13548c0ULL || rel >= 0x1354910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354910 size=80 callers=0 calls=0
*/
void sub_1354910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354910ULL || rel >= 0x1354960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354960 size=80 callers=0 calls=0
*/
void sub_1354960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354960ULL || rel >= 0x13549b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013549b0 size=80 callers=0 calls=0
*/
void sub_13549b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13549b0ULL || rel >= 0x1354a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354a00 size=80 callers=0 calls=0
*/
void sub_1354a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354a00ULL || rel >= 0x1354a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354a50 size=544 callers=3 calls=2
   calls: sub_1346730, sub_1354c70
*/
void sub_1354a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354a50ULL || rel >= 0x1354c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354c70 size=384 callers=1 calls=1
   calls: sub_1354df0
*/
void sub_1354c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354c70ULL || rel >= 0x1354df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354df0 size=368 callers=1 calls=0
*/
void sub_1354df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354df0ULL || rel >= 0x1354f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01354f60 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1355180
*/
void sub_1354f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1354f60ULL || rel >= 0x1355180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355180 size=384 callers=1 calls=1
   calls: sub_1355300
*/
void sub_1355180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355180ULL || rel >= 0x1355300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355300 size=368 callers=1 calls=0
*/
void sub_1355300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355300ULL || rel >= 0x1355470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355470 size=400 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_1355470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355470ULL || rel >= 0x1355600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355600 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1355a60
*/
void sub_1355600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355600ULL || rel >= 0x1355850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355850 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_1355a60
*/
void sub_1355850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355850ULL || rel >= 0x1355a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355a60 size=384 callers=2 calls=1
   calls: sub_1355be0
*/
void sub_1355a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355a60ULL || rel >= 0x1355be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355be0 size=368 callers=1 calls=0
*/
void sub_1355be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355be0ULL || rel >= 0x1355d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355d50 size=400 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_1355d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355d50ULL || rel >= 0x1355ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01355ee0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1356340
*/
void sub_1355ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355ee0ULL || rel >= 0x1356130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356130 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_1356340
*/
void sub_1356130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356130ULL || rel >= 0x1356340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356340 size=384 callers=2 calls=1
   calls: sub_13564c0
*/
void sub_1356340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356340ULL || rel >= 0x13564c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013564c0 size=368 callers=1 calls=0
*/
void sub_13564c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13564c0ULL || rel >= 0x1356630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356630 size=112 callers=2 calls=3
   calls: sub_5e2350, sub_7c2280, sub_7c2af0
*/
void sub_1356630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356630ULL || rel >= 0x13566a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013566a0 size=80 callers=1 calls=2
   calls: sub_7c2280, sub_7c2af0
*/
void sub_13566a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13566a0ULL || rel >= 0x13566f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013566f0 size=80 callers=0 calls=0
*/
void sub_13566f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13566f0ULL || rel >= 0x1356740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356740 size=80 callers=0 calls=0
*/
void sub_1356740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356740ULL || rel >= 0x1356790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356790 size=80 callers=0 calls=0
*/
void sub_1356790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356790ULL || rel >= 0x13567e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013567e0 size=80 callers=0 calls=0
*/
void sub_13567e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13567e0ULL || rel >= 0x1356830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356830 size=80 callers=0 calls=0
*/
void sub_1356830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356830ULL || rel >= 0x1356880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356880 size=80 callers=0 calls=0
*/
void sub_1356880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356880ULL || rel >= 0x13568d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013568d0 size=80 callers=0 calls=2
   calls: sub_7c2280, sub_7c2af0
*/
void sub_13568d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13568d0ULL || rel >= 0x1356920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356920 size=800 callers=2 calls=2
   calls: sub_1357700, sub_137e480
*/
void sub_1356920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356920ULL || rel >= 0x1356c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01356c40 size=1920 callers=0 calls=6
   calls: sub_134d020, sub_137e480, sub_5cfad0, sub_794310, sub_ea3b30, sub_ea3c00
   ref: Config_BGMVolume
   ref: Config_SEVolume
   ref: Config_VoiceVolume
*/
void Config_VoiceVolume(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1356c40ULL || rel >= 0x13573c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013573c0 size=16 callers=3 calls=0
*/
void sub_13573c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13573c0ULL || rel >= 0x13573d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013573d0 size=16 callers=3 calls=0
*/
void sub_13573d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13573d0ULL || rel >= 0x13573e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013573e0 size=16 callers=3 calls=0
*/
void sub_13573e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13573e0ULL || rel >= 0x13573f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013573f0 size=16 callers=3 calls=0
*/
void sub_13573f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13573f0ULL || rel >= 0x1357400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357400 size=16 callers=6 calls=0
*/
void sub_1357400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357400ULL || rel >= 0x1357410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357410 size=16 callers=1 calls=0
*/
void sub_1357410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357410ULL || rel >= 0x1357420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357420 size=16 callers=2 calls=0
*/
void sub_1357420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357420ULL || rel >= 0x1357430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357430 size=16 callers=1 calls=0
*/
void sub_1357430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357430ULL || rel >= 0x1357440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357440 size=16 callers=2 calls=0
*/
void sub_1357440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357440ULL || rel >= 0x1357450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357450 size=96 callers=2 calls=1
   calls: sub_7c2280
*/
void sub_1357450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357450ULL || rel >= 0x13574b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013574b0 size=32 callers=7 calls=0
*/
void sub_13574b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13574b0ULL || rel >= 0x13574d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013574d0 size=32 callers=2 calls=0
*/
void sub_13574d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13574d0ULL || rel >= 0x13574f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013574f0 size=16 callers=4 calls=0
*/
void sub_13574f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13574f0ULL || rel >= 0x1357500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357500 size=32 callers=1 calls=0
*/
void sub_1357500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357500ULL || rel >= 0x1357520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357520 size=32 callers=1 calls=0
*/
void sub_1357520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357520ULL || rel >= 0x1357540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357540 size=32 callers=1 calls=0
*/
void sub_1357540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357540ULL || rel >= 0x1357560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357560 size=32 callers=1 calls=0
*/
void sub_1357560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357560ULL || rel >= 0x1357580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357580 size=16 callers=2 calls=0
*/
void sub_1357580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357580ULL || rel >= 0x1357590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357590 size=32 callers=1 calls=0
*/
void sub_1357590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357590ULL || rel >= 0x13575b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013575b0 size=16 callers=3 calls=0
*/
void sub_13575b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13575b0ULL || rel >= 0x13575c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013575c0 size=32 callers=1 calls=0
*/
void sub_13575c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13575c0ULL || rel >= 0x13575e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013575e0 size=16 callers=29 calls=0
*/
void sub_13575e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13575e0ULL || rel >= 0x13575f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013575f0 size=32 callers=1 calls=0
*/
void sub_13575f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13575f0ULL || rel >= 0x1357610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357610 size=16 callers=6 calls=0
*/
void sub_1357610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357610ULL || rel >= 0x1357620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357620 size=32 callers=1 calls=0
*/
void sub_1357620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357620ULL || rel >= 0x1357640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357640 size=16 callers=3 calls=0
*/
void sub_1357640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357640ULL || rel >= 0x1357650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357650 size=32 callers=1 calls=0
*/
void sub_1357650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357650ULL || rel >= 0x1357670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357670 size=16 callers=3 calls=0
*/
void sub_1357670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357670ULL || rel >= 0x1357680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357680 size=32 callers=1 calls=0
*/
void sub_1357680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357680ULL || rel >= 0x13576a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013576a0 size=16 callers=6 calls=0
*/
void sub_13576a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13576a0ULL || rel >= 0x13576b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013576b0 size=32 callers=1 calls=0
*/
void sub_13576b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13576b0ULL || rel >= 0x13576d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013576d0 size=16 callers=6 calls=0
*/
void sub_13576d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13576d0ULL || rel >= 0x13576e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013576e0 size=16 callers=1 calls=0
*/
void sub_13576e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13576e0ULL || rel >= 0x13576f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013576f0 size=16 callers=3 calls=0
*/
void sub_13576f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13576f0ULL || rel >= 0x1357700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357700 size=304 callers=20 calls=3
   calls: sub_134ddb0, sub_1357830, sub_1357a60
*/
void sub_1357700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357700ULL || rel >= 0x1357830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357830 size=560 callers=1 calls=2
   calls: sub_1346730, sub_134e330
*/
void sub_1357830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357830ULL || rel >= 0x1357a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357a60 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_134e330
*/
void sub_1357a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357a60ULL || rel >= 0x1357c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357c60 size=224 callers=0 calls=3
   calls: sub_1358010, sub_1358150, sub_137e480
*/
void sub_1357c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357c60ULL || rel >= 0x1357d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357d40 size=144 callers=0 calls=3
   calls: sub_1358010, sub_1358150, sub_137e480
*/
void sub_1357d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357d40ULL || rel >= 0x1357dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357dd0 size=272 callers=1 calls=4
   calls: sub_12f9ef0, sub_763000, sub_767950, sub_7847d0
*/
void sub_1357dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357dd0ULL || rel >= 0x1357ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357ee0 size=64 callers=1 calls=0
*/
void sub_1357ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357ee0ULL || rel >= 0x1357f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357f20 size=16 callers=4 calls=0
*/
void sub_1357f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357f20ULL || rel >= 0x1357f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01357f30 size=224 callers=0 calls=3
   calls: sub_1358490, sub_13586b0, sub_137e480
*/
void sub_1357f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1357f30ULL || rel >= 0x1358010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358010 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1358a00, sub_1358c50
*/
void sub_1358010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358010ULL || rel >= 0x1358150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358150 size=304 callers=3 calls=3
   calls: sub_1358e60, sub_1358fb0, sub_13591e0
*/
void sub_1358150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358150ULL || rel >= 0x1358280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358280 size=128 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1358280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358280ULL || rel >= 0x1358300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358300 size=80 callers=0 calls=0
*/
void sub_1358300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358300ULL || rel >= 0x1358350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358350 size=80 callers=0 calls=0
*/
void sub_1358350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358350ULL || rel >= 0x13583a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013583a0 size=80 callers=0 calls=0
*/
void sub_13583a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13583a0ULL || rel >= 0x13583f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013583f0 size=80 callers=0 calls=0
*/
void sub_13583f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13583f0ULL || rel >= 0x1358440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358440 size=80 callers=0 calls=0
*/
void sub_1358440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358440ULL || rel >= 0x1358490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358490 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1358490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358490ULL || rel >= 0x13586b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013586b0 size=512 callers=2 calls=2
   calls: sub_1346730, sub_13588b0
*/
void sub_13586b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13586b0ULL || rel >= 0x13588b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013588b0 size=336 callers=1 calls=0
*/
void sub_13588b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13588b0ULL || rel >= 0x1358a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358a00 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1358a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358a00ULL || rel >= 0x1358c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358c50 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1358c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358c50ULL || rel >= 0x1358e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358e60 size=336 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_1358e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358e60ULL || rel >= 0x1358fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01358fb0 size=560 callers=1 calls=2
   calls: sub_1346730, sub_13593e0
*/
void sub_1358fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358fb0ULL || rel >= 0x13591e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013591e0 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_13593e0
*/
void sub_13591e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13591e0ULL || rel >= 0x13593e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013593e0 size=368 callers=2 calls=0
*/
void sub_13593e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13593e0ULL || rel >= 0x1359550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359550 size=368 callers=0 calls=0
*/
void sub_1359550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359550ULL || rel >= 0x13596c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013596c0 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13596c0ULL || rel >= 0x1359890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359890 size=208 callers=0 calls=2
   calls: sub_1359960, sub_1359a60
*/
void sub_1359890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359890ULL || rel >= 0x1359960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359960 size=256 callers=6 calls=5
   calls: sub_135a8e0, sub_135c800, sub_135caa0, sub_137e480, sub_5e7bb0
*/
void sub_1359960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359960ULL || rel >= 0x1359a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359a60 size=256 callers=2 calls=5
   calls: sub_135a8e0, sub_135d650, sub_135d8f0, sub_137e480, sub_5e7bb0
*/
void sub_1359a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359a60ULL || rel >= 0x1359b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359b60 size=176 callers=0 calls=2
   calls: sub_1359c10, sub_1359d30
*/
void sub_1359b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359b60ULL || rel >= 0x1359c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359c10 size=288 callers=6 calls=5
   calls: sub_135a8e0, sub_135c800, sub_135e220, sub_137e480, sub_5e7bb0
*/
void sub_1359c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359c10ULL || rel >= 0x1359d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359d30 size=288 callers=2 calls=5
   calls: sub_134d020, sub_135a8e0, sub_135d650, sub_137e480, sub_5e7bb0
*/
void sub_1359d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359d30ULL || rel >= 0x1359e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359e50 size=176 callers=0 calls=2
   calls: sub_1359f00, sub_135a050
*/
void sub_1359e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359e50ULL || rel >= 0x1359f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01359f00 size=336 callers=6 calls=4
   calls: sub_135a8e0, sub_135e4d0, sub_137e480, sub_5e7bb0
*/
void sub_1359f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1359f00ULL || rel >= 0x135a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a050 size=336 callers=2 calls=4
   calls: sub_134c2b0, sub_135a8e0, sub_137e480, sub_5e7bb0
*/
void sub_135a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a050ULL || rel >= 0x135a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a1a0 size=304 callers=198 calls=0
*/
void sub_135a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a1a0ULL || rel >= 0x135a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a2d0 size=240 callers=28 calls=0
*/
void sub_135a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a2d0ULL || rel >= 0x135a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a3c0 size=240 callers=18 calls=0
*/
void sub_135a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a3c0ULL || rel >= 0x135a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a4b0 size=240 callers=14 calls=0
*/
void sub_135a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a4b0ULL || rel >= 0x135a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a5a0 size=448 callers=2 calls=0
*/
void sub_135a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a5a0ULL || rel >= 0x135a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a760 size=288 callers=54 calls=0
*/
void sub_135a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a760ULL || rel >= 0x135a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a880 size=96 callers=3 calls=2
   calls: sub_135a8e0, sub_5cfaf0
*/
void sub_135a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a880ULL || rel >= 0x135a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a8e0 size=192 callers=8 calls=2
   calls: sub_1c0, sub_5e6770
*/
void sub_135a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a8e0ULL || rel >= 0x135a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135a9a0 size=256 callers=1 calls=0
*/
void sub_135a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a9a0ULL || rel >= 0x135aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135aaa0 size=608 callers=2 calls=3
   calls: sub_135a8e0, sub_5e2bc0, sub_5e7bb0
*/
void sub_135aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135aaa0ULL || rel >= 0x135ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ad00 size=64 callers=3 calls=1
   calls: sub_5e7b30
*/
void sub_135ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ad00ULL || rel >= 0x135ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ad40 size=3104 callers=1 calls=10
   calls: sub_135eb60, sub_135ec30, sub_135ed00, sub_5e2930, sub_5e6180, sub_96d060, sub_c49fc0, sub_c50b30, sub_e87f60, sub_e98170
   ref: bin/trainer/trainer_id_hash_table.tbl
   ref: bin/flagwork/event_flags.tbl
   ref: bin/flagwork/system_works.tbl
   ref: bin/flagwork/scene_works.tbl
   ref: bin/flagwork/system_flags.tbl
   ref: bin/flagwork/vanish_flags.tbl
   ref: bin/field/param/placement/table/VanishFlagAutoTable.tbl
   ref: bin/flagwork/event_works.tbl
*/
void trainer_id_hash_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ad40ULL || rel >= 0x135b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135b960 size=160 callers=3 calls=0
*/
void sub_135b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135b960ULL || rel >= 0x135ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ba00 size=1008 callers=1 calls=6
   calls: sub_135bdf0, sub_135be80, sub_135bfa0, sub_135cbd0, sub_135da20, sub_5e7bb0
*/
void sub_135ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ba00ULL || rel >= 0x135bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135bdf0 size=144 callers=1 calls=1
   calls: sub_5e7bb0
*/
void sub_135bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135bdf0ULL || rel >= 0x135be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135be80 size=288 callers=1 calls=1
   calls: sub_65d700
*/
void sub_135be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135be80ULL || rel >= 0x135bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135bfa0 size=288 callers=1 calls=1
   calls: sub_65d700
*/
void sub_135bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135bfa0ULL || rel >= 0x135c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c0c0 size=384 callers=0 calls=2
   calls: sub_135c290, sub_135c460
*/
void sub_135c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c0c0ULL || rel >= 0x135c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c240 size=16 callers=0 calls=0
*/
void sub_135c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c240ULL || rel >= 0x135c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c250 size=16 callers=0 calls=0
*/
void sub_135c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c250ULL || rel >= 0x135c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c260 size=16 callers=0 calls=0
*/
void sub_135c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c260ULL || rel >= 0x135c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c270 size=16 callers=0 calls=0
*/
void sub_135c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c270ULL || rel >= 0x135c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c280 size=16 callers=0 calls=0
*/
void sub_135c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c280ULL || rel >= 0x135c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c290 size=464 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_135c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c290ULL || rel >= 0x135c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c460 size=928 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_135c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c460ULL || rel >= 0x135c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135c800 size=672 callers=2 calls=1
   calls: sub_135cbd0
*/
void sub_135c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135c800ULL || rel >= 0x135caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135caa0 size=304 callers=9 calls=3
   calls: sub_135cfa0, sub_135d0f0, sub_135d3b0
*/
void sub_135caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135caa0ULL || rel >= 0x135cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135cbd0 size=272 callers=2 calls=0
*/
void sub_135cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135cbd0ULL || rel >= 0x135cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135cce0 size=704 callers=0 calls=0
*/
void sub_135cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135cce0ULL || rel >= 0x135cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135cfa0 size=336 callers=3 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_135cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135cfa0ULL || rel >= 0x135d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135d0f0 size=704 callers=1 calls=1
   calls: sub_1346730
*/
void sub_135d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135d0f0ULL || rel >= 0x135d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135d3b0 size=672 callers=1 calls=3
   calls: sub_1346730, sub_1347cd0, sub_1347fd0
*/
void sub_135d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135d3b0ULL || rel >= 0x135d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135d650 size=672 callers=2 calls=1
   calls: sub_135da20
*/
void sub_135d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135d650ULL || rel >= 0x135d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135d8f0 size=304 callers=1 calls=3
   calls: sub_134ddb0, sub_135ddf0, sub_135e020
*/
void sub_135d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135d8f0ULL || rel >= 0x135da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135da20 size=272 callers=2 calls=0
*/
void sub_135da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135da20ULL || rel >= 0x135db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135db30 size=704 callers=0 calls=0
*/
void sub_135db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135db30ULL || rel >= 0x135ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ddf0 size=560 callers=1 calls=2
   calls: sub_1346730, sub_134e330
*/
void sub_135ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ddf0ULL || rel >= 0x135e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135e020 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_134e330
*/
void sub_135e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135e020ULL || rel >= 0x135e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135e220 size=688 callers=10 calls=1
   calls: sub_1346730
*/
void sub_135e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135e220ULL || rel >= 0x135e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135e4d0 size=304 callers=6 calls=3
   calls: sub_135cfa0, sub_135e600, sub_135e8c0
*/
void sub_135e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135e4d0ULL || rel >= 0x135e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135e600 size=704 callers=1 calls=1
   calls: sub_1346730
*/
void sub_135e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135e600ULL || rel >= 0x135e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135e8c0 size=672 callers=1 calls=3
   calls: sub_1346730, sub_1347cd0, sub_1347fd0
*/
void sub_135e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135e8c0ULL || rel >= 0x135eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135eb60 size=208 callers=4 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_135eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135eb60ULL || rel >= 0x135ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ec30 size=208 callers=3 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_135ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ec30ULL || rel >= 0x135ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ed00 size=208 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_135ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ed00ULL || rel >= 0x135edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135edd0 size=64 callers=0 calls=0
*/
void sub_135edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135edd0ULL || rel >= 0x135ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ee10 size=256 callers=0 calls=5
   calls: sub_135e4d0, sub_135f120, sub_135f250, sub_135f380, sub_137e480
*/
void sub_135ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ee10ULL || rel >= 0x135ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ef10 size=528 callers=0 calls=5
   calls: sub_135e220, sub_135f6c0, sub_135fa10, sub_135fd90, sub_137e480
*/
void sub_135ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ef10ULL || rel >= 0x135f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f120 size=304 callers=1 calls=3
   calls: sub_13600e0, sub_1360230, sub_1360460
*/
void sub_135f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f120ULL || rel >= 0x135f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f250 size=304 callers=3 calls=3
   calls: sub_13607d0, sub_1360920, sub_1360b50
*/
void sub_135f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f250ULL || rel >= 0x135f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f380 size=304 callers=1 calls=3
   calls: sub_1360ec0, sub_1361010, sub_1361250
*/
void sub_135f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f380ULL || rel >= 0x135f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f4b0 size=64 callers=4 calls=0
*/
void sub_135f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f4b0ULL || rel >= 0x135f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f4f0 size=64 callers=2 calls=0
*/
void sub_135f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f4f0ULL || rel >= 0x135f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f530 size=80 callers=0 calls=0
*/
void sub_135f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f530ULL || rel >= 0x135f580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f580 size=80 callers=0 calls=0
*/
void sub_135f580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f580ULL || rel >= 0x135f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f5d0 size=80 callers=0 calls=0
*/
void sub_135f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f5d0ULL || rel >= 0x135f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f620 size=80 callers=0 calls=0
*/
void sub_135f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f620ULL || rel >= 0x135f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f670 size=80 callers=0 calls=0
*/
void sub_135f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f670ULL || rel >= 0x135f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f6c0 size=512 callers=1 calls=2
   calls: sub_1346730, sub_135f8c0
*/
void sub_135f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f6c0ULL || rel >= 0x135f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135f8c0 size=336 callers=1 calls=0
*/
void sub_135f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135f8c0ULL || rel >= 0x135fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135fa10 size=512 callers=3 calls=2
   calls: sub_1346730, sub_135fc10
*/
void sub_135fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135fa10ULL || rel >= 0x135fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135fc10 size=384 callers=1 calls=0
*/
void sub_135fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135fc10ULL || rel >= 0x135fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135fd90 size=528 callers=2 calls=2
   calls: sub_1346730, sub_135ffa0
*/
void sub_135fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135fd90ULL || rel >= 0x135ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0135ffa0 size=320 callers=1 calls=0
*/
void sub_135ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ffa0ULL || rel >= 0x13600e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013600e0 size=336 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_13600e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13600e0ULL || rel >= 0x1360230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01360230 size=560 callers=1 calls=2
   calls: sub_1346730, sub_1360660
*/
void sub_1360230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1360230ULL || rel >= 0x1360460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01360460 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_1360660
*/
void sub_1360460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1360460ULL || rel >= 0x1360660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01360660 size=368 callers=2 calls=0
*/
void sub_1360660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1360660ULL || rel >= 0x13607d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013607d0 size=336 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_13607d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13607d0ULL || rel >= 0x1360920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01360920 size=560 callers=1 calls=2
   calls: sub_1346730, sub_1360d50
*/
void sub_1360920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1360920ULL || rel >= 0x1360b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01360b50 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_1360d50
*/
void sub_1360b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1360b50ULL || rel >= 0x1360d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01360d50 size=368 callers=2 calls=0
*/
void sub_1360d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1360d50ULL || rel >= 0x1360ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01360ec0 size=336 callers=2 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_1360ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1360ec0ULL || rel >= 0x1361010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361010 size=576 callers=1 calls=2
   calls: sub_1346730, sub_1361460
*/
void sub_1361010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361010ULL || rel >= 0x1361250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361250 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_1361460
*/
void sub_1361250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361250ULL || rel >= 0x1361460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361460 size=352 callers=4 calls=0
*/
void sub_1361460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361460ULL || rel >= 0x13615c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013615c0 size=208 callers=2 calls=4
   calls: sub_5c63d0, sub_5c6450, sub_5c6460, sub_5e2350
*/
void sub_13615c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13615c0ULL || rel >= 0x1361690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361690 size=160 callers=0 calls=3
   calls: sub_5c63d0, sub_5c6450, sub_5c6460
*/
void sub_1361690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361690ULL || rel >= 0x1361730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361730 size=752 callers=0 calls=8
   calls: sub_134d020, sub_135e220, sub_13623c0, sub_13625e0, sub_1362800, sub_137e480, sub_eadbd0, sub_eadbf0
*/
void sub_1361730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361730ULL || rel >= 0x1361a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361a20 size=352 callers=0 calls=6
   calls: sub_134c2b0, sub_135e4d0, sub_1361b80, sub_1361cc0, sub_1361e00, sub_137e480
*/
void sub_1361a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361a20ULL || rel >= 0x1361b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361b80 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1362a20, sub_1362c70
*/
void sub_1361b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361b80ULL || rel >= 0x1361cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361cc0 size=320 callers=3 calls=3
   calls: sub_13471e0, sub_1362e80, sub_13630d0
*/
void sub_1361cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361cc0ULL || rel >= 0x1361e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361e00 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_13632e0, sub_1363530
*/
void sub_1361e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361e00ULL || rel >= 0x1361f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361f40 size=64 callers=2 calls=1
   calls: sub_5c6460
*/
void sub_1361f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361f40ULL || rel >= 0x1361f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361f80 size=32 callers=1 calls=0
*/
void sub_1361f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361f80ULL || rel >= 0x1361fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361fa0 size=48 callers=1 calls=0
*/
void sub_1361fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361fa0ULL || rel >= 0x1361fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01361fd0 size=48 callers=4 calls=0
*/
void sub_1361fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1361fd0ULL || rel >= 0x1362000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362000 size=16 callers=1 calls=0
*/
void sub_1362000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362000ULL || rel >= 0x1362010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362010 size=112 callers=2 calls=2
   calls: sub_5c6460, sub_5c6490
*/
void sub_1362010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362010ULL || rel >= 0x1362080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362080 size=16 callers=6 calls=0
*/
void sub_1362080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362080ULL || rel >= 0x1362090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362090 size=208 callers=2 calls=5
   calls: sub_eadb00, sub_eadb10, sub_eadb40, sub_eadc60, sub_eadcf0
*/
void sub_1362090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362090ULL || rel >= 0x1362160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362160 size=48 callers=1 calls=0
*/
void sub_1362160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362160ULL || rel >= 0x1362190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362190 size=64 callers=1 calls=1
   calls: sub_eadb70
*/
void sub_1362190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362190ULL || rel >= 0x13621d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013621d0 size=64 callers=1 calls=1
   calls: sub_eadbe0
*/
void sub_13621d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13621d0ULL || rel >= 0x1362210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362210 size=32 callers=2 calls=0
*/
void sub_1362210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362210ULL || rel >= 0x1362230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362230 size=80 callers=0 calls=0
*/
void sub_1362230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362230ULL || rel >= 0x1362280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362280 size=80 callers=0 calls=0
*/
void sub_1362280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362280ULL || rel >= 0x13622d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013622d0 size=80 callers=0 calls=0
*/
void sub_13622d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13622d0ULL || rel >= 0x1362320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362320 size=80 callers=0 calls=0
*/
void sub_1362320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362320ULL || rel >= 0x1362370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362370 size=80 callers=0 calls=0
*/
void sub_1362370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362370ULL || rel >= 0x13623c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013623c0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13623c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13623c0ULL || rel >= 0x13625e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013625e0 size=544 callers=3 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13625e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13625e0ULL || rel >= 0x1362800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362800 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1362800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362800ULL || rel >= 0x1362a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362a20 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1362a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362a20ULL || rel >= 0x1362c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362c70 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1362c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362c70ULL || rel >= 0x1362e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01362e80 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1362e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362e80ULL || rel >= 0x13630d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013630d0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_13630d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13630d0ULL || rel >= 0x13632e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013632e0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_13632e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13632e0ULL || rel >= 0x1363530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363530 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1363530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363530ULL || rel >= 0x1363740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363740 size=64 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1363740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363740ULL || rel >= 0x1363780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363780 size=240 callers=1 calls=2
   calls: sub_ead0f0, sub_ead110
*/
void sub_1363780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363780ULL || rel >= 0x1363870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363870 size=80 callers=0 calls=0
*/
void sub_1363870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363870ULL || rel >= 0x13638c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013638c0 size=80 callers=0 calls=0
*/
void sub_13638c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13638c0ULL || rel >= 0x1363910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363910 size=80 callers=0 calls=0
*/
void sub_1363910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363910ULL || rel >= 0x1363960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363960 size=80 callers=0 calls=0
*/
void sub_1363960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363960ULL || rel >= 0x13639b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013639b0 size=80 callers=0 calls=0
*/
void sub_13639b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13639b0ULL || rel >= 0x1363a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363a00 size=80 callers=0 calls=0
*/
void sub_1363a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363a00ULL || rel >= 0x1363a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363a50 size=112 callers=0 calls=3
   calls: sub_1363780, sub_1363ac0, sub_137e480
*/
void sub_1363a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363a50ULL || rel >= 0x1363ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363ac0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1363de0, sub_1364030
*/
void sub_1363ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363ac0ULL || rel >= 0x1363c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363c00 size=144 callers=0 calls=2
   calls: sub_1364240, sub_137e480
*/
void sub_1363c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363c00ULL || rel >= 0x1363c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363c90 size=96 callers=0 calls=2
   calls: sub_1363ac0, sub_137e480
*/
void sub_1363c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363c90ULL || rel >= 0x1363cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363cf0 size=240 callers=2 calls=2
   calls: sub_ead0f0, sub_ead110
*/
void sub_1363cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363cf0ULL || rel >= 0x1363de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01363de0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1363de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1363de0ULL || rel >= 0x1364030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364030 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1364030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364030ULL || rel >= 0x1364240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364240 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1364240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364240ULL || rel >= 0x1364460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364460 size=416 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1364460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364460ULL || rel >= 0x1364600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364600 size=80 callers=0 calls=0
*/
void sub_1364600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364600ULL || rel >= 0x1364650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364650 size=80 callers=0 calls=0
*/
void sub_1364650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364650ULL || rel >= 0x13646a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013646a0 size=80 callers=0 calls=0
*/
void sub_13646a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13646a0ULL || rel >= 0x13646f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013646f0 size=80 callers=0 calls=0
*/
void sub_13646f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13646f0ULL || rel >= 0x1364740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364740 size=80 callers=0 calls=0
*/
void sub_1364740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364740ULL || rel >= 0x1364790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364790 size=80 callers=0 calls=0
*/
void sub_1364790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364790ULL || rel >= 0x13647e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013647e0 size=544 callers=0 calls=3
   calls: sub_1364a00, sub_137e480, sub_e91a80
*/
void sub_13647e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13647e0ULL || rel >= 0x1364a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364a00 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_1364c70, sub_1364ec0
*/
void sub_1364a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364a00ULL || rel >= 0x1364b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364b40 size=144 callers=0 calls=2
   calls: sub_13650d0, sub_137e480
*/
void sub_1364b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364b40ULL || rel >= 0x1364bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364bd0 size=96 callers=0 calls=2
   calls: sub_1364a00, sub_137e480
*/
void sub_1364bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364bd0ULL || rel >= 0x1364c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364c30 size=32 callers=2 calls=0
*/
void sub_1364c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364c30ULL || rel >= 0x1364c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364c50 size=32 callers=3 calls=0
*/
void sub_1364c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364c50ULL || rel >= 0x1364c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364c70 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1364c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364c70ULL || rel >= 0x1364ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01364ec0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1364ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1364ec0ULL || rel >= 0x13650d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013650d0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_13650d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13650d0ULL || rel >= 0x13652f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013652f0 size=176 callers=0 calls=4
   calls: sub_134c2b0, sub_135e4d0, sub_1365550, sub_137e480
*/
void sub_13652f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13652f0ULL || rel >= 0x13653a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013653a0 size=144 callers=0 calls=4
   calls: sub_134c2b0, sub_135e4d0, sub_1365550, sub_137e480
*/
void sub_13653a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13653a0ULL || rel >= 0x1365430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365430 size=288 callers=0 calls=4
   calls: sub_134d020, sub_135e220, sub_13659e0, sub_137e480
*/
void sub_1365430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365430ULL || rel >= 0x1365550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365550 size=304 callers=2 calls=3
   calls: sub_1365d30, sub_1365e80, sub_13660b0
*/
void sub_1365550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365550ULL || rel >= 0x1365680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365680 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_1365680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365680ULL || rel >= 0x13656d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013656d0 size=80 callers=0 calls=0
*/
void sub_13656d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13656d0ULL || rel >= 0x1365720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365720 size=80 callers=0 calls=0
*/
void sub_1365720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365720ULL || rel >= 0x1365770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365770 size=80 callers=0 calls=0
*/
void sub_1365770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365770ULL || rel >= 0x13657c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013657c0 size=80 callers=0 calls=0
*/
void sub_13657c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13657c0ULL || rel >= 0x1365810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365810 size=80 callers=0 calls=0
*/
void sub_1365810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365810ULL || rel >= 0x1365860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365860 size=80 callers=0 calls=0
*/
void sub_1365860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365860ULL || rel >= 0x13658b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013658b0 size=64 callers=2 calls=0
*/
void sub_13658b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13658b0ULL || rel >= 0x13658f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013658f0 size=48 callers=2 calls=0
*/
void sub_13658f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13658f0ULL || rel >= 0x1365920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365920 size=16 callers=2 calls=0
*/
void sub_1365920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365920ULL || rel >= 0x1365930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365930 size=176 callers=4 calls=0
*/
void sub_1365930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365930ULL || rel >= 0x13659e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013659e0 size=528 callers=1 calls=2
   calls: sub_1346730, sub_1365bf0
*/
void sub_13659e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13659e0ULL || rel >= 0x1365bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365bf0 size=320 callers=1 calls=0
*/
void sub_1365bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365bf0ULL || rel >= 0x1365d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365d30 size=336 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_1365d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365d30ULL || rel >= 0x1365e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01365e80 size=560 callers=1 calls=2
   calls: sub_1346730, sub_13662b0
*/
void sub_1365e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1365e80ULL || rel >= 0x13660b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013660b0 size=512 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_13662b0
*/
void sub_13660b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13660b0ULL || rel >= 0x13662b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013662b0 size=352 callers=2 calls=0
*/
void sub_13662b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13662b0ULL || rel >= 0x1366410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366410 size=64 callers=0 calls=0
*/
void sub_1366410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366410ULL || rel >= 0x1366450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366450 size=144 callers=0 calls=2
   calls: sub_1368ee0, sub_137e480
*/
void sub_1366450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366450ULL || rel >= 0x13664e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013664e0 size=96 callers=0 calls=2
   calls: sub_1366540, sub_137e480
*/
void sub_13664e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13664e0ULL || rel >= 0x1366540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366540 size=320 callers=1 calls=3
   calls: sub_13471e0, sub_1369100, sub_1369350
*/
void sub_1366540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366540ULL || rel >= 0x1366680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366680 size=304 callers=1 calls=1
   calls: sub_7860a0
*/
void sub_1366680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366680ULL || rel >= 0x13667b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013667b0 size=160 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_13667b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13667b0ULL || rel >= 0x1366850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366850 size=80 callers=0 calls=0
*/
void sub_1366850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366850ULL || rel >= 0x13668a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013668a0 size=80 callers=0 calls=0
*/
void sub_13668a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13668a0ULL || rel >= 0x13668f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013668f0 size=80 callers=0 calls=0
*/
void sub_13668f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13668f0ULL || rel >= 0x1366940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366940 size=80 callers=0 calls=0
*/
void sub_1366940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366940ULL || rel >= 0x1366990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366990 size=80 callers=0 calls=0
*/
void sub_1366990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366990ULL || rel >= 0x13669e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013669e0 size=80 callers=0 calls=0
*/
void sub_13669e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13669e0ULL || rel >= 0x1366a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366a30 size=16 callers=0 calls=0
*/
void sub_1366a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366a30ULL || rel >= 0x1366a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366a40 size=256 callers=14 calls=0
*/
void sub_1366a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366a40ULL || rel >= 0x1366b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366b40 size=400 callers=1 calls=1
   calls: sub_786a40
*/
void sub_1366b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366b40ULL || rel >= 0x1366cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366cd0 size=720 callers=36 calls=0
*/
void sub_1366cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366cd0ULL || rel >= 0x1366fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01366fa0 size=352 callers=2 calls=0
*/
void sub_1366fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1366fa0ULL || rel >= 0x1367100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01367100 size=592 callers=89 calls=1
   calls: sub_786a40
*/
void sub_1367100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1367100ULL || rel >= 0x1367350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01367350 size=448 callers=5 calls=1
   calls: sub_786a40
*/
void sub_1367350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1367350ULL || rel >= 0x1367510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01367510 size=896 callers=29 calls=1
   calls: sub_786a40
*/
void sub_1367510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1367510ULL || rel >= 0x1367890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01367890 size=416 callers=10 calls=1
   calls: sub_786a40
*/
void sub_1367890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1367890ULL || rel >= 0x1367a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01367a30 size=400 callers=35 calls=1
   calls: sub_786a40
*/
void sub_1367a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1367a30ULL || rel >= 0x1367bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01367bc0 size=544 callers=1 calls=0
*/
void sub_1367bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1367bc0ULL || rel >= 0x1367de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01367de0 size=1264 callers=3 calls=0
*/
void sub_1367de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1367de0ULL || rel >= 0x13682d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013682d0 size=1248 callers=3 calls=0
*/
void sub_13682d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13682d0ULL || rel >= 0x13687b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013687b0 size=160 callers=3 calls=1
   calls: sub_1366cd0
*/
void sub_13687b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13687b0ULL || rel >= 0x1368850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01368850 size=160 callers=3 calls=1
   calls: sub_1366cd0
*/
void sub_1368850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1368850ULL || rel >= 0x13688f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013688f0 size=224 callers=3 calls=2
   calls: sub_14b9600, sub_14b9630
*/
void sub_13688f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13688f0ULL || rel >= 0x13689d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013689d0 size=272 callers=1 calls=4
   calls: sub_14b9600, sub_14b9630, sub_786c50, sub_786cd0
*/
void sub_13689d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13689d0ULL || rel >= 0x1368ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01368ae0 size=464 callers=1 calls=1
   calls: sub_786a40
*/
void sub_1368ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1368ae0ULL || rel >= 0x1368cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01368cb0 size=512 callers=2 calls=2
   calls: sub_786a40, sub_786b60
*/
void sub_1368cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1368cb0ULL || rel >= 0x1368eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01368eb0 size=16 callers=0 calls=0
*/
void sub_1368eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1368eb0ULL || rel >= 0x1368ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01368ec0 size=16 callers=0 calls=0
*/
void sub_1368ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1368ec0ULL || rel >= 0x1368ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01368ed0 size=16 callers=0 calls=0
*/
void sub_1368ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1368ed0ULL || rel >= 0x1368ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01368ee0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_1368ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1368ee0ULL || rel >= 0x1369100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01369100 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_1369100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1369100ULL || rel >= 0x1369350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01369350 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_1369350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1369350ULL || rel >= 0x1369560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01369560 size=1344 callers=2 calls=5
   calls: sub_1369560, sub_1369aa0, sub_1369ce0, sub_1369e20, sub_786c50
*/
void sub_1369560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1369560ULL || rel >= 0x1369aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01369aa0 size=320 callers=5 calls=1
   calls: sub_786c50
*/
void sub_1369aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1369aa0ULL || rel >= 0x1369be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01369be0 size=256 callers=2 calls=2
   calls: sub_1369aa0, sub_786c50
*/
void sub_1369be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1369be0ULL || rel >= 0x1369ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01369ce0 size=320 callers=2 calls=2
   calls: sub_1369be0, sub_786c50
*/
void sub_1369ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1369ce0ULL || rel >= 0x1369e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01369e20 size=480 callers=2 calls=4
   calls: sub_1369aa0, sub_1369be0, sub_1369ce0, sub_786c50
*/
void sub_1369e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1369e20ULL || rel >= 0x136a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136a000 size=1824 callers=2 calls=8
   calls: sub_136a000, sub_136a720, sub_136a920, sub_136aab0, sub_136acb0, sub_7863b0, sub_786410, sub_786fe0
*/
void sub_136a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136a000ULL || rel >= 0x136a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136a720 size=512 callers=6 calls=3
   calls: sub_7863b0, sub_786410, sub_786fe0
*/
void sub_136a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136a720ULL || rel >= 0x136a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136a920 size=400 callers=3 calls=4
   calls: sub_136a720, sub_7863b0, sub_786410, sub_786fe0
*/
void sub_136a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136a920ULL || rel >= 0x136aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136aab0 size=512 callers=3 calls=4
   calls: sub_136a920, sub_7863b0, sub_786410, sub_786fe0
*/
void sub_136aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136aab0ULL || rel >= 0x136acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136acb0 size=608 callers=2 calls=6
   calls: sub_136a720, sub_136a920, sub_136aab0, sub_7863b0, sub_786410, sub_786fe0
*/
void sub_136acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136acb0ULL || rel >= 0x136af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136af10 size=208 callers=2 calls=4
   calls: sub_5e2350, sub_7c2280, sub_b6f8c0, sub_b70d80
*/
void sub_136af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136af10ULL || rel >= 0x136afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136afe0 size=80 callers=0 calls=0
*/
void sub_136afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136afe0ULL || rel >= 0x136b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b030 size=80 callers=0 calls=0
*/
void sub_136b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b030ULL || rel >= 0x136b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b080 size=80 callers=0 calls=0
*/
void sub_136b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b080ULL || rel >= 0x136b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b0d0 size=80 callers=0 calls=0
*/
void sub_136b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b0d0ULL || rel >= 0x136b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b120 size=80 callers=0 calls=0
*/
void sub_136b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b120ULL || rel >= 0x136b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b170 size=80 callers=0 calls=0
*/
void sub_136b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b170ULL || rel >= 0x136b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b1c0 size=240 callers=0 calls=4
   calls: sub_136b2b0, sub_137e480, sub_7c2280, sub_b70d80
*/
void sub_136b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b1c0ULL || rel >= 0x136b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b2b0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_136b8c0, sub_136bb10
*/
void sub_136b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b2b0ULL || rel >= 0x136b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b3f0 size=144 callers=0 calls=2
   calls: sub_136bd20, sub_137e480
*/
void sub_136b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b3f0ULL || rel >= 0x136b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b480 size=96 callers=0 calls=2
   calls: sub_136b2b0, sub_137e480
*/
void sub_136b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b480ULL || rel >= 0x136b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b4e0 size=16 callers=2 calls=0
*/
void sub_136b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b4e0ULL || rel >= 0x136b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b4f0 size=16 callers=21 calls=0
*/
void sub_136b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b4f0ULL || rel >= 0x136b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b500 size=32 callers=5 calls=0
*/
void sub_136b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b500ULL || rel >= 0x136b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b520 size=16 callers=22 calls=0
*/
void sub_136b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b520ULL || rel >= 0x136b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b530 size=32 callers=24 calls=0
*/
void sub_136b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b530ULL || rel >= 0x136b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b550 size=16 callers=9 calls=0
*/
void sub_136b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b550ULL || rel >= 0x136b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b560 size=32 callers=3 calls=0
*/
void sub_136b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b560ULL || rel >= 0x136b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b580 size=16 callers=70 calls=0
*/
void sub_136b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b580ULL || rel >= 0x136b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b590 size=16 callers=36 calls=0
*/
void sub_136b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b590ULL || rel >= 0x136b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b5a0 size=16 callers=2 calls=0
*/
void sub_136b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b5a0ULL || rel >= 0x136b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b5b0 size=48 callers=3 calls=0
*/
void sub_136b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b5b0ULL || rel >= 0x136b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b5e0 size=160 callers=17 calls=6
   calls: sub_67c270, sub_767680, sub_7676d0, sub_767d90, sub_7692e0, sub_769330
*/
void sub_136b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b5e0ULL || rel >= 0x136b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b680 size=16 callers=1 calls=0
*/
void sub_136b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b680ULL || rel >= 0x136b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b690 size=16 callers=26 calls=0
*/
void sub_136b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b690ULL || rel >= 0x136b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b6a0 size=48 callers=2 calls=0
*/
void sub_136b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b6a0ULL || rel >= 0x136b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b6d0 size=16 callers=1 calls=0
*/
void sub_136b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b6d0ULL || rel >= 0x136b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b6e0 size=16 callers=3 calls=0
*/
void sub_136b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b6e0ULL || rel >= 0x136b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b6f0 size=16 callers=8 calls=0
*/
void sub_136b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b6f0ULL || rel >= 0x136b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b700 size=16 callers=7 calls=0
*/
void sub_136b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b700ULL || rel >= 0x136b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b710 size=16 callers=2 calls=0
*/
void sub_136b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b710ULL || rel >= 0x136b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b720 size=16 callers=1 calls=0
*/
void sub_136b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b720ULL || rel >= 0x136b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b730 size=16 callers=10 calls=0
*/
void sub_136b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b730ULL || rel >= 0x136b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b740 size=32 callers=2 calls=0
*/
void sub_136b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b740ULL || rel >= 0x136b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b760 size=16 callers=1 calls=0
*/
void sub_136b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b760ULL || rel >= 0x136b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b770 size=16 callers=24 calls=0
*/
void sub_136b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b770ULL || rel >= 0x136b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b780 size=16 callers=73 calls=0
*/
void sub_136b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b780ULL || rel >= 0x136b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b790 size=16 callers=13 calls=0
*/
void sub_136b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b790ULL || rel >= 0x136b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b7a0 size=32 callers=1 calls=0
*/
void sub_136b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b7a0ULL || rel >= 0x136b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b7c0 size=96 callers=15 calls=1
   calls: sub_136e810
*/
void sub_136b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b7c0ULL || rel >= 0x136b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b820 size=32 callers=3 calls=0
*/
void sub_136b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b820ULL || rel >= 0x136b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b840 size=16 callers=5 calls=0
*/
void sub_136b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b840ULL || rel >= 0x136b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b850 size=16 callers=4 calls=0
*/
void sub_136b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b850ULL || rel >= 0x136b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b860 size=16 callers=5 calls=0
*/
void sub_136b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b860ULL || rel >= 0x136b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b870 size=64 callers=7 calls=0
*/
void sub_136b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b870ULL || rel >= 0x136b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b8b0 size=16 callers=7 calls=0
*/
void sub_136b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b8b0ULL || rel >= 0x136b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136b8c0 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_136b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136b8c0ULL || rel >= 0x136bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136bb10 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_136bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136bb10ULL || rel >= 0x136bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136bd20 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_136bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136bd20ULL || rel >= 0x136bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136bf40 size=80 callers=2 calls=2
   calls: sub_136bf90, sub_5e2350
*/
void sub_136bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136bf40ULL || rel >= 0x136bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136bf90 size=448 callers=1 calls=0
*/
void sub_136bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136bf90ULL || rel >= 0x136c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c150 size=224 callers=1 calls=1
   calls: sub_ead110
*/
void sub_136c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c150ULL || rel >= 0x136c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c230 size=80 callers=0 calls=0
*/
void sub_136c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c230ULL || rel >= 0x136c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c280 size=80 callers=0 calls=0
*/
void sub_136c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c280ULL || rel >= 0x136c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c2d0 size=80 callers=0 calls=0
*/
void sub_136c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c2d0ULL || rel >= 0x136c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c320 size=80 callers=0 calls=0
*/
void sub_136c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c320ULL || rel >= 0x136c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c370 size=80 callers=0 calls=0
*/
void sub_136c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c370ULL || rel >= 0x136c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c3c0 size=80 callers=0 calls=0
*/
void sub_136c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c3c0ULL || rel >= 0x136c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c410 size=192 callers=0 calls=4
   calls: sub_136c150, sub_136c4d0, sub_137e480, sub_e913f0
*/
void sub_136c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c410ULL || rel >= 0x136c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c4d0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_136c980, sub_136cbd0
*/
void sub_136c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c4d0ULL || rel >= 0x136c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c610 size=144 callers=0 calls=2
   calls: sub_136cde0, sub_137e480
*/
void sub_136c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c610ULL || rel >= 0x136c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c6a0 size=96 callers=0 calls=2
   calls: sub_136c4d0, sub_137e480
*/
void sub_136c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c6a0ULL || rel >= 0x136c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c700 size=32 callers=2 calls=0
*/
void sub_136c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c700ULL || rel >= 0x136c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c720 size=32 callers=2 calls=0
*/
void sub_136c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c720ULL || rel >= 0x136c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c740 size=32 callers=3 calls=0
*/
void sub_136c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c740ULL || rel >= 0x136c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c760 size=32 callers=4 calls=0
*/
void sub_136c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c760ULL || rel >= 0x136c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c780 size=32 callers=1 calls=0
*/
void sub_136c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c780ULL || rel >= 0x136c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c7a0 size=64 callers=9 calls=0
*/
void sub_136c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c7a0ULL || rel >= 0x136c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c7e0 size=48 callers=5 calls=0
*/
void sub_136c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c7e0ULL || rel >= 0x136c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c810 size=32 callers=23 calls=0
*/
void sub_136c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c810ULL || rel >= 0x136c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c830 size=48 callers=4 calls=0
*/
void sub_136c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c830ULL || rel >= 0x136c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c860 size=32 callers=8 calls=0
*/
void sub_136c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c860ULL || rel >= 0x136c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c880 size=32 callers=2 calls=0
*/
void sub_136c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c880ULL || rel >= 0x136c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c8a0 size=112 callers=8 calls=0
*/
void sub_136c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c8a0ULL || rel >= 0x136c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c910 size=48 callers=8 calls=0
*/
void sub_136c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c910ULL || rel >= 0x136c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c940 size=32 callers=1 calls=0
*/
void sub_136c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c940ULL || rel >= 0x136c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c960 size=32 callers=1 calls=0
*/
void sub_136c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c960ULL || rel >= 0x136c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136c980 size=592 callers=1 calls=2
   calls: sub_1346730, sub_1347af0
*/
void sub_136c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c980ULL || rel >= 0x136cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136cbd0 size=528 callers=1 calls=4
   calls: sub_1346730, sub_1347af0, sub_1347cd0, sub_1347fd0
*/
void sub_136cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136cbd0ULL || rel >= 0x136cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136cde0 size=544 callers=1 calls=2
   calls: sub_1346730, sub_1346860
*/
void sub_136cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136cde0ULL || rel >= 0x136d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136d000 size=16 callers=0 calls=0
*/
void sub_136d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136d000ULL || rel >= 0x136d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136d010 size=400 callers=3 calls=2
   calls: sub_136d4a0, sub_137e480
*/
void sub_136d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136d010ULL || rel >= 0x136d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136d1a0 size=544 callers=1 calls=4
   calls: sub_136d010, sub_136d4a0, sub_136d5e0, sub_137e480
*/
void sub_136d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136d1a0ULL || rel >= 0x136d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136d3c0 size=224 callers=1 calls=2
   calls: sub_136d5e0, sub_137e480
*/
void sub_136d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136d3c0ULL || rel >= 0x136d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136d4a0 size=320 callers=2 calls=3
   calls: sub_136daf0, sub_136dc80, sub_136ded0
*/
void sub_136d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136d4a0ULL || rel >= 0x136d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136d5e0 size=544 callers=4 calls=2
   calls: sub_1346730, sub_136d800
*/
void sub_136d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136d5e0ULL || rel >= 0x136d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136d800 size=384 callers=1 calls=1
   calls: sub_136d980
*/
void sub_136d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136d800ULL || rel >= 0x136d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136d980 size=368 callers=1 calls=0
*/
void sub_136d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136d980ULL || rel >= 0x136daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136daf0 size=400 callers=1 calls=2
   calls: sub_1346730, sub_13477b0
*/
void sub_136daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136daf0ULL || rel >= 0x136dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136dc80 size=592 callers=1 calls=2
   calls: sub_1346730, sub_136e0f0
*/
void sub_136dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136dc80ULL || rel >= 0x136ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136ded0 size=544 callers=1 calls=4
   calls: sub_1346730, sub_1347cd0, sub_1347fd0, sub_136e0f0
*/
void sub_136ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136ded0ULL || rel >= 0x136e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e0f0 size=384 callers=2 calls=1
   calls: sub_136e270
*/
void sub_136e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e0f0ULL || rel >= 0x136e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e270 size=368 callers=1 calls=0
*/
void sub_136e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e270ULL || rel >= 0x136e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e3e0 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_136e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e3e0ULL || rel >= 0x136e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e450 size=144 callers=0 calls=2
   calls: sub_136e4e0, sub_137e480
*/
void sub_136e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e450ULL || rel >= 0x136e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e4e0 size=320 callers=2 calls=3
   calls: sub_13471e0, sub_136ead0, sub_136ed20
*/
void sub_136e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e4e0ULL || rel >= 0x136e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e620 size=144 callers=0 calls=2
   calls: sub_136ef30, sub_137e480
*/
void sub_136e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e620ULL || rel >= 0x136e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e6b0 size=96 callers=0 calls=2
   calls: sub_136e4e0, sub_137e480
*/
void sub_136e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e6b0ULL || rel >= 0x136e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e710 size=112 callers=24 calls=0
*/
void sub_136e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e710ULL || rel >= 0x136e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e780 size=144 callers=2 calls=0
*/
void sub_136e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e780ULL || rel >= 0x136e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e810 size=160 callers=4 calls=0
*/
void sub_136e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e810ULL || rel >= 0x136e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e8b0 size=144 callers=31 calls=0
*/
void sub_136e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e8b0ULL || rel >= 0x136e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e940 size=80 callers=0 calls=0
*/
void sub_136e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e940ULL || rel >= 0x136e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0136e990 size=80 callers=0 calls=0
*/
void sub_136e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136e990ULL || rel >= 0x136e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

