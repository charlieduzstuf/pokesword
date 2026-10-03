/* main functions 00658df0..00675510 (42 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00658df0 size=16 callers=2 calls=0
*/
void sub_658df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658df0ULL || rel >= 0x658e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658e00 size=32 callers=2 calls=0
*/
void sub_658e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658e00ULL || rel >= 0x658e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658e20 size=16 callers=2 calls=0
*/
void sub_658e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658e20ULL || rel >= 0x658e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658e30 size=16 callers=4 calls=0
*/
void sub_658e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658e30ULL || rel >= 0x658e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658e40 size=16 callers=4 calls=0
*/
void sub_658e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658e40ULL || rel >= 0x658e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658e50 size=16 callers=3 calls=0
*/
void sub_658e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658e50ULL || rel >= 0x658e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658e60 size=16 callers=3 calls=0
*/
void sub_658e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658e60ULL || rel >= 0x658e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658e70 size=16 callers=2 calls=0
*/
void sub_658e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658e70ULL || rel >= 0x658e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658e80 size=128 callers=7 calls=0
*/
void sub_658e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658e80ULL || rel >= 0x658f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658f00 size=16 callers=6 calls=0
*/
void sub_658f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658f00ULL || rel >= 0x658f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658f10 size=160 callers=0 calls=0
*/
void sub_658f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658f10ULL || rel >= 0x658fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00658fb0 size=160 callers=0 calls=0
*/
void sub_658fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x658fb0ULL || rel >= 0x659050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659050 size=240 callers=0 calls=0
*/
void sub_659050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659050ULL || rel >= 0x659140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659140 size=176 callers=0 calls=0
*/
void sub_659140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659140ULL || rel >= 0x6591f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006591f0 size=176 callers=0 calls=0
*/
void sub_6591f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6591f0ULL || rel >= 0x6592a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006592a0 size=16 callers=0 calls=0
*/
void sub_6592a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6592a0ULL || rel >= 0x6592b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006592b0 size=16 callers=0 calls=0
*/
void sub_6592b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6592b0ULL || rel >= 0x6592c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006592c0 size=176 callers=0 calls=0
*/
void sub_6592c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6592c0ULL || rel >= 0x659370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659370 size=176 callers=0 calls=0
*/
void sub_659370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659370ULL || rel >= 0x659420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659420 size=80 callers=1 calls=0
*/
void sub_659420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659420ULL || rel >= 0x659470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659470 size=64 callers=0 calls=0
*/
void sub_659470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659470ULL || rel >= 0x6594b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006594b0 size=144 callers=0 calls=0
*/
void sub_6594b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6594b0ULL || rel >= 0x659540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659540 size=64 callers=0 calls=0
*/
void sub_659540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659540ULL || rel >= 0x659580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659580 size=64 callers=0 calls=0
*/
void sub_659580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659580ULL || rel >= 0x6595c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006595c0 size=960 callers=1 calls=5
   calls: VibrationThread, sub_5e2350, sub_659980, sub_65ad00, sub_65b030
*/
void sub_6595c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6595c0ULL || rel >= 0x659980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659980 size=608 callers=1 calls=1
   calls: sub_659f20
*/
void sub_659980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659980ULL || rel >= 0x659be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659be0 size=832 callers=0 calls=1
   calls: sub_659f20
*/
void sub_659be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659be0ULL || rel >= 0x659f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00659f20 size=336 callers=2 calls=0
*/
void sub_659f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x659f20ULL || rel >= 0x65a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a070 size=16 callers=0 calls=0
*/
void sub_65a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a070ULL || rel >= 0x65a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a080 size=16 callers=0 calls=0
*/
void sub_65a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a080ULL || rel >= 0x65a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a090 size=16 callers=0 calls=0
*/
void sub_65a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a090ULL || rel >= 0x65a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a0a0 size=16 callers=0 calls=0
*/
void sub_65a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a0a0ULL || rel >= 0x65a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a0b0 size=16 callers=0 calls=0
*/
void sub_65a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a0b0ULL || rel >= 0x65a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a0c0 size=16 callers=1 calls=0
*/
void sub_65a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a0c0ULL || rel >= 0x65a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a0d0 size=192 callers=35 calls=1
   calls: sub_658df0
*/
void sub_65a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a0d0ULL || rel >= 0x65a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a190 size=560 callers=2 calls=3
   calls: sub_658d20, sub_658df0, sub_65a3c0
*/
void sub_65a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a190ULL || rel >= 0x65a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a3c0 size=336 callers=1 calls=1
   calls: sub_65b120
*/
void sub_65a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a3c0ULL || rel >= 0x65a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a510 size=112 callers=1 calls=0
*/
void sub_65a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a510ULL || rel >= 0x65a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a580 size=80 callers=2 calls=0
*/
void sub_65a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a580ULL || rel >= 0x65a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a5d0 size=64 callers=0 calls=0
*/
void sub_65a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a5d0ULL || rel >= 0x65a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a610 size=112 callers=0 calls=0
*/
void sub_65a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a610ULL || rel >= 0x65a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a680 size=240 callers=0 calls=0
*/
void sub_65a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a680ULL || rel >= 0x65a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a770 size=16 callers=0 calls=0
*/
void sub_65a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a770ULL || rel >= 0x65a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a780 size=16 callers=0 calls=0
*/
void sub_65a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a780ULL || rel >= 0x65a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a790 size=80 callers=0 calls=0
*/
void sub_65a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a790ULL || rel >= 0x65a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a7e0 size=80 callers=0 calls=0
*/
void sub_65a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a7e0ULL || rel >= 0x65a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a830 size=80 callers=0 calls=0
*/
void sub_65a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a830ULL || rel >= 0x65a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a880 size=80 callers=0 calls=0
*/
void sub_65a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a880ULL || rel >= 0x65a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a8d0 size=80 callers=0 calls=0
*/
void sub_65a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a8d0ULL || rel >= 0x65a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a920 size=80 callers=0 calls=0
*/
void sub_65a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a920ULL || rel >= 0x65a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065a970 size=144 callers=0 calls=0
*/
void sub_65a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65a970ULL || rel >= 0x65aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065aa00 size=144 callers=0 calls=0
*/
void sub_65aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65aa00ULL || rel >= 0x65aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065aa90 size=16 callers=0 calls=0
*/
void sub_65aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65aa90ULL || rel >= 0x65aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065aaa0 size=144 callers=0 calls=0
*/
void sub_65aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65aaa0ULL || rel >= 0x65ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ab30 size=144 callers=0 calls=0
*/
void sub_65ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ab30ULL || rel >= 0x65abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065abc0 size=16 callers=0 calls=0
*/
void sub_65abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65abc0ULL || rel >= 0x65abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065abd0 size=16 callers=0 calls=0
*/
void sub_65abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65abd0ULL || rel >= 0x65abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065abe0 size=144 callers=0 calls=0
*/
void sub_65abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65abe0ULL || rel >= 0x65ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ac70 size=144 callers=0 calls=0
*/
void sub_65ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ac70ULL || rel >= 0x65ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ad00 size=512 callers=1 calls=0
*/
void sub_65ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ad00ULL || rel >= 0x65af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065af00 size=304 callers=1 calls=3
   calls: sub_5d0f90, sub_5e2350, sub_65b300
   ref: VibrationThread
*/
void VibrationThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65af00ULL || rel >= 0x65b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b030 size=240 callers=1 calls=0
*/
void sub_65b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b030ULL || rel >= 0x65b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b120 size=480 callers=1 calls=0
*/
void sub_65b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b120ULL || rel >= 0x65b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b300 size=272 callers=1 calls=1
   calls: sub_5d0b10
*/
void sub_65b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b300ULL || rel >= 0x65b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b410 size=128 callers=0 calls=1
   calls: sub_1c0
*/
void sub_65b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b410ULL || rel >= 0x65b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b490 size=496 callers=1 calls=9
   calls: sub_15497e0, sub_15498c0, sub_154ae60, sub_154c880, sub_1552530, sub_1552860, sub_65c490, sub_65da00, sub_65daf0
*/
void sub_65b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b490ULL || rel >= 0x65b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b680 size=16 callers=0 calls=0
*/
void sub_65b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b680ULL || rel >= 0x65b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b690 size=16 callers=0 calls=0
*/
void sub_65b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b690ULL || rel >= 0x65b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b6a0 size=384 callers=3 calls=5
   calls: sub_15498c0, sub_1552860, sub_65bf00, sub_65da00, sub_65daf0
*/
void sub_65b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b6a0ULL || rel >= 0x65b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065b820 size=512 callers=1 calls=12
   calls: coroutine, sub_15497e0, sub_15498c0, sub_154ae60, sub_1c0, sub_65bc60, sub_65bd60, sub_65be30, sub_65bf00, sub_65c040, sub_65da00, sub_65daf0
*/
void sub_65b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65b820ULL || rel >= 0x65ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ba20 size=576 callers=1 calls=2
   calls: LOADED_2, sub_154ab20
   ref: string
   ref: package
   ref: coroutine
*/
void coroutine(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ba20ULL || rel >= 0x65bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065bc60 size=256 callers=1 calls=6
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154c2e0, sub_65c2b0
*/
void sub_65bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65bc60ULL || rel >= 0x65bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065bd60 size=208 callers=1 calls=4
   calls: sub_154aac0, sub_154ab00, sub_154ab20, sub_154ab80
*/
void sub_65bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65bd60ULL || rel >= 0x65be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065be30 size=208 callers=1 calls=4
   calls: sub_154aac0, sub_154ab00, sub_154ab20, sub_154ab80
*/
void sub_65be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65be30ULL || rel >= 0x65bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065bf00 size=320 callers=7 calls=6
   calls: sub_15497e0, sub_15498c0, sub_154a9b0, sub_154be20, sub_154bf00, sub_154c880
*/
void sub_65bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65bf00ULL || rel >= 0x65c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c040 size=512 callers=1 calls=3
   calls: sub_1549d50, sub_154aac0, sub_1c0
*/
void sub_65c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c040ULL || rel >= 0x65c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c240 size=112 callers=0 calls=1
   calls: sub_ce0
*/
void sub_65c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c240ULL || rel >= 0x65c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c2b0 size=480 callers=1 calls=6
   calls: sub_154a9b0, sub_154ab00, sub_154ab80, sub_154bf00, sub_154c880, sub_154d880
*/
void sub_65c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c2b0ULL || rel >= 0x65c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c490 size=240 callers=1 calls=10
   calls: sub_15497e0, sub_15498c0, sub_154aa90, sub_154ab20, sub_154ae60, sub_154bf00, sub_154c170, sub_154c290, sub_154c880, sub_154cd10
*/
void sub_65c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c490ULL || rel >= 0x65c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c580 size=16 callers=0 calls=0
*/
void sub_65c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c580ULL || rel >= 0x65c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c590 size=32 callers=0 calls=1
   calls: sub_154bf60
*/
void sub_65c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c590ULL || rel >= 0x65c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c5b0 size=336 callers=0 calls=6
   calls: stack_overflow, sub_154af10, sub_154b940, sub_154bf60, sub_c70, sub_ce0
   ref: An unknown error has triggered the default error handler
*/
void An_unknown_error_has_triggered_the_default_error_handler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c5b0ULL || rel >= 0x65c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c700 size=192 callers=6 calls=1
   calls: sub_65c940
*/
void sub_65c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c700ULL || rel >= 0x65c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c7c0 size=192 callers=11 calls=1
   calls: sub_65c940
*/
void sub_65c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c7c0ULL || rel >= 0x65c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c880 size=192 callers=1 calls=1
   calls: sub_65cb60
*/
void sub_65c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c880ULL || rel >= 0x65c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065c940 size=544 callers=6 calls=0
*/
void sub_65c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65c940ULL || rel >= 0x65cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065cb60 size=384 callers=1 calls=1
   calls: sub_65cce0
*/
void sub_65cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65cb60ULL || rel >= 0x65cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065cce0 size=16 callers=1 calls=0
*/
void sub_65cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65cce0ULL || rel >= 0x65ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ccf0 size=32 callers=18 calls=0
*/
void sub_65ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ccf0ULL || rel >= 0x65cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065cd10 size=64 callers=3 calls=0
*/
void sub_65cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65cd10ULL || rel >= 0x65cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065cd50 size=32 callers=18 calls=0
*/
void sub_65cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65cd50ULL || rel >= 0x65cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065cd70 size=32 callers=51 calls=0
*/
void sub_65cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65cd70ULL || rel >= 0x65cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065cd90 size=32 callers=30 calls=0
*/
void sub_65cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65cd90ULL || rel >= 0x65cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065cdb0 size=480 callers=18 calls=0
*/
void sub_65cdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65cdb0ULL || rel >= 0x65cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065cf90 size=656 callers=2 calls=0
*/
void sub_65cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65cf90ULL || rel >= 0x65d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d220 size=1104 callers=40 calls=0
*/
void sub_65d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d220ULL || rel >= 0x65d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d670 size=16 callers=0 calls=0
*/
void sub_65d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d670ULL || rel >= 0x65d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d680 size=80 callers=1 calls=0
   ref: GlobalHeap
*/
void GlobalHeap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d680ULL || rel >= 0x65d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d6d0 size=32 callers=1 calls=0
   ref: DebugHeap
*/
void DebugHeap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d6d0ULL || rel >= 0x65d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d6f0 size=16 callers=3 calls=0
*/
void sub_65d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d6f0ULL || rel >= 0x65d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d700 size=256 callers=420 calls=1
   calls: sub_1c0
*/
void sub_65d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d700ULL || rel >= 0x65d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d800 size=48 callers=8 calls=0
*/
void sub_65d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d800ULL || rel >= 0x65d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d830 size=272 callers=10 calls=1
   calls: sub_1c0
*/
void sub_65d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d830ULL || rel >= 0x65d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d940 size=32 callers=6 calls=0
*/
void sub_65d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d940ULL || rel >= 0x65d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065d960 size=160 callers=9 calls=1
   calls: sub_1c0
*/
void sub_65d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65d960ULL || rel >= 0x65da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065da00 size=240 callers=452 calls=1
   calls: sub_1c0
*/
void sub_65da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65da00ULL || rel >= 0x65daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065daf0 size=192 callers=453 calls=1
   calls: sub_1c0
*/
void sub_65daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65daf0ULL || rel >= 0x65dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dbb0 size=16 callers=0 calls=0
*/
void sub_65dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dbb0ULL || rel >= 0x65dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dbc0 size=16 callers=0 calls=0
*/
void sub_65dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dbc0ULL || rel >= 0x65dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dbd0 size=16 callers=0 calls=0
*/
void sub_65dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dbd0ULL || rel >= 0x65dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dbe0 size=16 callers=2 calls=0
*/
void sub_65dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dbe0ULL || rel >= 0x65dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dbf0 size=32 callers=1 calls=0
*/
void sub_65dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dbf0ULL || rel >= 0x65dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dc10 size=96 callers=1 calls=0
*/
void sub_65dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dc10ULL || rel >= 0x65dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dc70 size=16 callers=3 calls=0
*/
void sub_65dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dc70ULL || rel >= 0x65dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dc80 size=16 callers=7 calls=0
*/
void sub_65dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dc80ULL || rel >= 0x65dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dc90 size=32 callers=4 calls=0
*/
void sub_65dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dc90ULL || rel >= 0x65dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dcb0 size=16 callers=1 calls=0
*/
void sub_65dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dcb0ULL || rel >= 0x65dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dcc0 size=48 callers=1 calls=1
   calls: sub_660230
*/
void sub_65dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dcc0ULL || rel >= 0x65dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dcf0 size=32 callers=1 calls=0
*/
void sub_65dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dcf0ULL || rel >= 0x65dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dd10 size=64 callers=1 calls=0
*/
void sub_65dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dd10ULL || rel >= 0x65dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dd50 size=16 callers=1 calls=0
*/
void sub_65dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dd50ULL || rel >= 0x65dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dd60 size=48 callers=3 calls=0
*/
void sub_65dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dd60ULL || rel >= 0x65dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dd90 size=32 callers=1 calls=0
*/
void sub_65dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dd90ULL || rel >= 0x65ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ddb0 size=240 callers=2 calls=0
*/
void sub_65ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ddb0ULL || rel >= 0x65dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dea0 size=320 callers=3 calls=0
*/
void sub_65dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dea0ULL || rel >= 0x65dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065dfe0 size=48 callers=2 calls=0
*/
void sub_65dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65dfe0ULL || rel >= 0x65e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e010 size=16 callers=4 calls=0
*/
void sub_65e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e010ULL || rel >= 0x65e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e020 size=32 callers=3 calls=0
*/
void sub_65e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e020ULL || rel >= 0x65e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e040 size=48 callers=1 calls=0
*/
void sub_65e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e040ULL || rel >= 0x65e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e070 size=64 callers=1 calls=0
*/
void sub_65e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e070ULL || rel >= 0x65e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e0b0 size=16 callers=3 calls=0
*/
void sub_65e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e0b0ULL || rel >= 0x65e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e0c0 size=16 callers=2 calls=0
*/
void sub_65e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e0c0ULL || rel >= 0x65e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e0d0 size=320 callers=1 calls=4
   calls: sub_65dbf0, sub_65dc10, sub_65e210, sub_6601a0
*/
void sub_65e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e0d0ULL || rel >= 0x65e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e210 size=336 callers=6 calls=4
   calls: sub_65dc80, sub_65e070, sub_65eba0, sub_6601a0
*/
void sub_65e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e210ULL || rel >= 0x65e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e360 size=512 callers=2 calls=3
   calls: sub_65dc80, sub_65e0b0, sub_6601a0
*/
void sub_65e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e360ULL || rel >= 0x65e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e560 size=352 callers=0 calls=8
   calls: sub_65dc80, sub_65dcf0, sub_65dd10, sub_65dea0, sub_65dfe0, sub_65e020, sub_65e210, sub_65eba0
*/
void sub_65e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e560ULL || rel >= 0x65e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e6c0 size=96 callers=2 calls=1
   calls: sub_65e720
*/
void sub_65e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e6c0ULL || rel >= 0x65e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e720 size=512 callers=1 calls=2
   calls: sub_6601a0, sub_660230
*/
void sub_65e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e720ULL || rel >= 0x65e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065e920 size=224 callers=1 calls=1
   calls: sub_6601a0
*/
void sub_65e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65e920ULL || rel >= 0x65ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ea00 size=16 callers=2 calls=0
*/
void sub_65ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ea00ULL || rel >= 0x65ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ea10 size=208 callers=1 calls=7
   calls: sub_65dd50, sub_65dd60, sub_65dd90, sub_65ddb0, sub_65e010, sub_65e210, sub_65eba0
*/
void sub_65ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ea10ULL || rel >= 0x65eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065eae0 size=192 callers=2 calls=0
*/
void sub_65eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65eae0ULL || rel >= 0x65eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065eba0 size=352 callers=9 calls=4
   calls: sub_65dc80, sub_65e040, sub_65e0b0, sub_6601a0
*/
void sub_65eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65eba0ULL || rel >= 0x65ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ed00 size=160 callers=1 calls=2
   calls: sub_65e0d0, sub_65eae0
   ref: <no name>
*/
void no_name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ed00ULL || rel >= 0x65eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065eda0 size=32 callers=0 calls=0
*/
void sub_65eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65eda0ULL || rel >= 0x65edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065edc0 size=16 callers=5 calls=0
*/
void sub_65edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65edc0ULL || rel >= 0x65edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065edd0 size=16 callers=1 calls=0
*/
void sub_65edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65edd0ULL || rel >= 0x65ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ede0 size=16 callers=1 calls=0
*/
void sub_65ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ede0ULL || rel >= 0x65edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065edf0 size=32 callers=1 calls=0
*/
void sub_65edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65edf0ULL || rel >= 0x65ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ee10 size=32 callers=1 calls=1
   calls: sub_65e920
*/
void sub_65ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ee10ULL || rel >= 0x65ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ee30 size=16 callers=1 calls=0
*/
void sub_65ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ee30ULL || rel >= 0x65ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ee40 size=48 callers=2 calls=0
*/
void sub_65ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ee40ULL || rel >= 0x65ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ee70 size=16 callers=2 calls=0
*/
void sub_65ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ee70ULL || rel >= 0x65ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ee80 size=288 callers=2 calls=5
   calls: sub_65dc70, sub_65dc90, sub_65dcc0, sub_65e360, sub_65e6c0
*/
void sub_65ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ee80ULL || rel >= 0x65efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065efa0 size=208 callers=2 calls=3
   calls: sub_65dbe0, sub_65dc90, sub_65ea10
   ref: [gfl::mem] %s deallocated. %zx
   ref: deactivate
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflib3/src/mem/internal/tlsf_pool.cpp
*/
void gflib3_tlsf_pool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65efa0ULL || rel >= 0x65f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f070 size=80 callers=5 calls=1
   calls: sub_65eae0
*/
void sub_65f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f070ULL || rel >= 0x65f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f0c0 size=80 callers=1 calls=3
   calls: sub_65dbe0, sub_65dc80, sub_65dcb0
*/
void sub_65f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f0c0ULL || rel >= 0x65f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f110 size=128 callers=244 calls=2
   calls: sub_1c0, sub_5cf8c0
*/
void sub_65f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f110ULL || rel >= 0x65f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f190 size=16 callers=0 calls=0
*/
void sub_65f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f190ULL || rel >= 0x65f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f1a0 size=16 callers=2 calls=0
*/
void sub_65f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f1a0ULL || rel >= 0x65f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f1b0 size=16 callers=1 calls=0
*/
void sub_65f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f1b0ULL || rel >= 0x65f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f1c0 size=96 callers=238 calls=2
   calls: no_name, sub_5cf8c0
*/
void sub_65f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f1c0ULL || rel >= 0x65f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f220 size=208 callers=4 calls=6
   calls: gflib3_tlsf_pool_resource, sub_5cf8d0, sub_5cf8e0, sub_5cf8f0, sub_65edc0, sub_65f070
*/
void sub_65f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f220ULL || rel >= 0x65f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f2f0 size=16 callers=0 calls=0
*/
void sub_65f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f2f0ULL || rel >= 0x65f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f300 size=48 callers=0 calls=1
   calls: sub_65f220
*/
void sub_65f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f300ULL || rel >= 0x65f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f330 size=48 callers=0 calls=1
   calls: sub_65f220
*/
void sub_65f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f330ULL || rel >= 0x65f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f360 size=560 callers=2 calls=9
   calls: sub_65d800, sub_65dc70, sub_65dc80, sub_65dc90, sub_65dd60, sub_65e010, sub_65e0c0, sub_65ea00, sub_65f1a0
   ref: [gfl::mem] dump %s end
   ref: do_dump_no_lock
   ref: operator()
   ref: idx[%d] using[%s] addr[%zx] size[%zu]:[%zu]
   ref: [gfl::mem] dump %s begin
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflib3/src/mem/tlsf_pool_resource.cpp
*/
void gflib3_tlsf_pool_resource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f360ULL || rel >= 0x65f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f590 size=176 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65ede0
*/
void sub_65f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f590ULL || rel >= 0x65f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f640 size=176 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65edf0
*/
void sub_65f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f640ULL || rel >= 0x65f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f6f0 size=176 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65ee10
*/
void sub_65f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f6f0ULL || rel >= 0x65f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f7a0 size=176 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65ee30
*/
void sub_65f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f7a0ULL || rel >= 0x65f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f850 size=176 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65edd0
*/
void sub_65f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f850ULL || rel >= 0x65f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f900 size=192 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65ee40
*/
void sub_65f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f900ULL || rel >= 0x65f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065f9c0 size=176 callers=0 calls=2
   calls: sub_5cf8f0, sub_65ee70
*/
void sub_65f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65f9c0ULL || rel >= 0x65fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fa70 size=144 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_65fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fa70ULL || rel >= 0x65fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fb00 size=16 callers=1 calls=0
*/
void sub_65fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fb00ULL || rel >= 0x65fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fb10 size=16 callers=0 calls=0
*/
void sub_65fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fb10ULL || rel >= 0x65fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fb20 size=32 callers=0 calls=0
*/
void sub_65fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fb20ULL || rel >= 0x65fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fb40 size=32 callers=0 calls=0
*/
void sub_65fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fb40ULL || rel >= 0x65fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fb60 size=32 callers=0 calls=0
*/
void sub_65fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fb60ULL || rel >= 0x65fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fb80 size=32 callers=0 calls=0
*/
void sub_65fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fb80ULL || rel >= 0x65fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fba0 size=32 callers=0 calls=0
*/
void sub_65fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fba0ULL || rel >= 0x65fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fbc0 size=240 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65ee70
*/
void sub_65fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fbc0ULL || rel >= 0x65fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fcb0 size=224 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65ee80
*/
void sub_65fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fcb0ULL || rel >= 0x65fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fd90 size=240 callers=0 calls=4
   calls: gflib3_tlsf_pool, sub_5cf8e0, sub_5cf8f0, sub_65ee40
*/
void sub_65fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fd90ULL || rel >= 0x65fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065fe80 size=176 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_65fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65fe80ULL || rel >= 0x65ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ff30 size=160 callers=0 calls=2
   calls: gflib3_tlsf_pool_resource, sub_5cf8f0
*/
void sub_65ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ff30ULL || rel >= 0x65ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0065ffd0 size=112 callers=0 calls=1
   calls: sub_6600b0
*/
void sub_65ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65ffd0ULL || rel >= 0x660040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660040 size=112 callers=0 calls=1
   calls: sub_6600b0
*/
void sub_660040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660040ULL || rel >= 0x6600b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006600b0 size=240 callers=2 calls=0
*/
void sub_6600b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6600b0ULL || rel >= 0x6601a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006601a0 size=144 callers=7 calls=0
*/
void sub_6601a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6601a0ULL || rel >= 0x660230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660230 size=144 callers=4 calls=0
*/
void sub_660230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660230ULL || rel >= 0x6602c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006602c0 size=1024 callers=1 calls=10
   calls: MoviePlayerThread, height_2, mp4a_latm, sub_5e2350, sub_660b60, sub_660cc0, sub_661790, sub_6617f0, sub_661cf0, sub_661d80
*/
void sub_6602c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6602c0ULL || rel >= 0x6606c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006606c0 size=240 callers=0 calls=2
   calls: sub_6607b0, sub_660cc0
*/
void sub_6606c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6606c0ULL || rel >= 0x6607b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006607b0 size=208 callers=1 calls=2
   calls: sub_660cc0, sub_662cf0
*/
void sub_6607b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6607b0ULL || rel >= 0x660880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660880 size=16 callers=0 calls=0
*/
void sub_660880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660880ULL || rel >= 0x660890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660890 size=16 callers=0 calls=0
*/
void sub_660890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660890ULL || rel >= 0x6608a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006608a0 size=16 callers=0 calls=0
*/
void sub_6608a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6608a0ULL || rel >= 0x6608b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006608b0 size=16 callers=0 calls=0
*/
void sub_6608b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6608b0ULL || rel >= 0x6608c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006608c0 size=16 callers=0 calls=0
*/
void sub_6608c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6608c0ULL || rel >= 0x6608d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006608d0 size=48 callers=2 calls=1
   calls: height
*/
void sub_6608d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6608d0ULL || rel >= 0x660900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660900 size=64 callers=1 calls=1
   calls: sub_662e70
*/
void sub_660900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660900ULL || rel >= 0x660940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660940 size=64 callers=2 calls=1
   calls: sub_6610e0
*/
void sub_660940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660940ULL || rel >= 0x660980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660980 size=128 callers=2 calls=1
   calls: sub_662e70
*/
void sub_660980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660980ULL || rel >= 0x660a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660a00 size=80 callers=2 calls=1
   calls: sub_662f70
*/
void sub_660a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660a00ULL || rel >= 0x660a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660a50 size=240 callers=0 calls=0
*/
void sub_660a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660a50ULL || rel >= 0x660b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660b40 size=16 callers=0 calls=0
*/
void sub_660b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660b40ULL || rel >= 0x660b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660b50 size=16 callers=0 calls=0
*/
void sub_660b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660b50ULL || rel >= 0x660b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660b60 size=352 callers=1 calls=0
*/
void sub_660b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660b60ULL || rel >= 0x660cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00660cc0 size=1056 callers=3 calls=7
   calls: sub_661140, sub_663de0, sub_6645e0, sub_664e70, sub_667480, sub_6695a0, sub_ce0
*/
void sub_660cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x660cc0ULL || rel >= 0x6610e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006610e0 size=96 callers=1 calls=0
*/
void sub_6610e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6610e0ULL || rel >= 0x661140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00661140 size=336 callers=2 calls=2
   calls: sub_663de0, sub_6645e0
*/
void sub_661140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661140ULL || rel >= 0x661290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00661290 size=1024 callers=1 calls=0
   ref: MoviePlayerThread
*/
void MoviePlayerThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661290ULL || rel >= 0x661690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00661690 size=256 callers=0 calls=2
   calls: height, sub_661e60
*/
void sub_661690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661690ULL || rel >= 0x661790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00661790 size=96 callers=1 calls=0
*/
void sub_661790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661790ULL || rel >= 0x6617f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006617f0 size=144 callers=1 calls=2
   calls: durationUs, sub_661880
*/
void sub_6617f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6617f0ULL || rel >= 0x661880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00661880 size=320 callers=2 calls=1
   calls: sub_663630
*/
void sub_661880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661880ULL || rel >= 0x6619c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006619c0 size=816 callers=2 calls=0
   ref: audio/
   ref: video/x-vnd.on2.vp9
   ref: video/
   ref: video/x-vnd.on2.vp8
   ref: channel-count
   ref: video/avc
   ref: sample-rate
   ref: audio/vorbis
*/
void durationUs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6619c0ULL || rel >= 0x661cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00661cf0 size=144 callers=1 calls=2
   calls: durationUs, sub_661880
*/
void sub_661cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661cf0ULL || rel >= 0x661d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00661d80 size=224 callers=1 calls=1
   calls: sub_661e60
*/
void sub_661d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661d80ULL || rel >= 0x661e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00661e60 size=2672 callers=2 calls=16
   calls: MovieAudioInputReadThread, MovieDecoderEventHandler, MovieVideoInputReadThread, sub_663af0, sub_663d40, sub_663de0, sub_664540, sub_6645e0, sub_664d40, sub_664e70, sub_6673a0, sub_667480
   ... +4 more
*/
void sub_661e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x661e60ULL || rel >= 0x6628d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006628d0 size=848 callers=2 calls=10
   calls: MovieAudioOutputHandlerThread, sub_662c20, sub_665550, sub_6658b0, sub_6666a0, sub_6674e0, sub_667600, sub_667630, sub_667e60, sub_669f10
   ref: height
   ref: channel-count
   ref: sample-rate
*/
void height(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6628d0ULL || rel >= 0x662c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00662c20 size=208 callers=1 calls=5
   calls: sub_663c20, sub_6658b0, sub_666240, sub_667630, sub_667b80
*/
void sub_662c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x662c20ULL || rel >= 0x662cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00662cf0 size=384 callers=1 calls=10
   calls: sub_661140, sub_665470, sub_666240, sub_666310, sub_666600, sub_6675e0, sub_667b80, sub_667c40, sub_667cc0, sub_6695a0
*/
void sub_662cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x662cf0ULL || rel >= 0x662e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00662e70 size=256 callers=2 calls=6
   calls: sub_666640, sub_667c80, sub_669b20, sub_669c10, sub_669d20, sub_669e10
*/
void sub_662e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x662e70ULL || rel >= 0x662f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00662f70 size=64 callers=1 calls=0
*/
void sub_662f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x662f70ULL || rel >= 0x662fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00662fb0 size=1312 callers=1 calls=0
   ref: audio/
   ref: channel-count
   ref: media-language
   ref: sample-rate
   ref: audio/mp4a-latm
*/
void mp4a_latm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x662fb0ULL || rel >= 0x6634d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006634d0 size=336 callers=1 calls=0
   ref: video/
   ref: height
*/
void height_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6634d0ULL || rel >= 0x663620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663620 size=16 callers=0 calls=0
*/
void sub_663620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663620ULL || rel >= 0x663630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663630 size=880 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_663630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663630ULL || rel >= 0x6639a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006639a0 size=128 callers=0 calls=0
*/
void sub_6639a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6639a0ULL || rel >= 0x663a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663a20 size=96 callers=0 calls=0
*/
void sub_663a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663a20ULL || rel >= 0x663a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663a80 size=64 callers=0 calls=0
*/
void sub_663a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663a80ULL || rel >= 0x663ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663ac0 size=48 callers=0 calls=0
*/
void sub_663ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663ac0ULL || rel >= 0x663af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663af0 size=64 callers=1 calls=0
*/
void sub_663af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663af0ULL || rel >= 0x663b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663b30 size=48 callers=2 calls=0
*/
void sub_663b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663b30ULL || rel >= 0x663b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663b60 size=192 callers=2 calls=0
*/
void sub_663b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663b60ULL || rel >= 0x663c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663c20 size=48 callers=3 calls=0
*/
void sub_663c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663c20ULL || rel >= 0x663c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663c50 size=208 callers=1 calls=0
*/
void sub_663c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663c50ULL || rel >= 0x663d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663d20 size=16 callers=0 calls=0
*/
void sub_663d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663d20ULL || rel >= 0x663d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663d30 size=16 callers=0 calls=0
*/
void sub_663d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663d30ULL || rel >= 0x663d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663d40 size=160 callers=1 calls=0
*/
void sub_663d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663d40ULL || rel >= 0x663de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663de0 size=256 callers=3 calls=1
   calls: sub_ce0
*/
void sub_663de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663de0ULL || rel >= 0x663ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00663ee0 size=608 callers=1 calls=2
   calls: sub_c70, sub_ce0
   ref: MovieAudioInputReadThread
*/
void MovieAudioInputReadThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x663ee0ULL || rel >= 0x664140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664140 size=160 callers=0 calls=1
   calls: sub_664430
*/
void sub_664140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664140ULL || rel >= 0x6641e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006641e0 size=288 callers=2 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6641e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6641e0ULL || rel >= 0x664300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664300 size=32 callers=1 calls=0
*/
void sub_664300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664300ULL || rel >= 0x664320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664320 size=272 callers=1 calls=0
*/
void sub_664320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664320ULL || rel >= 0x664430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664430 size=272 callers=1 calls=1
   calls: sub_664320
*/
void sub_664430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664430ULL || rel >= 0x664540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664540 size=160 callers=1 calls=0
*/
void sub_664540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664540ULL || rel >= 0x6645e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006645e0 size=256 callers=3 calls=1
   calls: sub_ce0
*/
void sub_6645e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6645e0ULL || rel >= 0x6646e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006646e0 size=608 callers=1 calls=2
   calls: sub_c70, sub_ce0
   ref: MovieVideoInputReadThread
*/
void MovieVideoInputReadThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6646e0ULL || rel >= 0x664940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664940 size=160 callers=0 calls=1
   calls: sub_664c30
*/
void sub_664940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664940ULL || rel >= 0x6649e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006649e0 size=288 callers=2 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6649e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6649e0ULL || rel >= 0x664b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664b00 size=32 callers=1 calls=0
*/
void sub_664b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664b00ULL || rel >= 0x664b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664b20 size=272 callers=1 calls=0
*/
void sub_664b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664b20ULL || rel >= 0x664c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664c30 size=272 callers=1 calls=1
   calls: sub_664b20
*/
void sub_664c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664c30ULL || rel >= 0x664d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664d40 size=304 callers=1 calls=0
*/
void sub_664d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664d40ULL || rel >= 0x664e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664e70 size=352 callers=3 calls=2
   calls: sub_666a30, sub_ce0
*/
void sub_664e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664e70ULL || rel >= 0x664fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00664fd0 size=1088 callers=1 calls=4
   calls: sub_666950, sub_666a30, sub_c70, sub_ce0
   ref: MovieAudioOutputHandlerThread
*/
void MovieAudioOutputHandlerThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x664fd0ULL || rel >= 0x665410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00665410 size=96 callers=0 calls=1
   calls: sub_665940
*/
void sub_665410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x665410ULL || rel >= 0x665470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00665470 size=224 callers=1 calls=1
   calls: sub_666a30
*/
void sub_665470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x665470ULL || rel >= 0x665550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00665550 size=864 callers=1 calls=2
   calls: sub_6666d0, sub_666a60
*/
void sub_665550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x665550ULL || rel >= 0x6658b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006658b0 size=144 callers=2 calls=2
   calls: sub_663b30, sub_6670c0
*/
void sub_6658b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6658b0ULL || rel >= 0x665940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00665940 size=1136 callers=1 calls=8
   calls: sub_663b30, sub_663b60, sub_665db0, sub_6666d0, sub_666f50, sub_667030, sub_667100, sub_667190
*/
void sub_665940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x665940ULL || rel >= 0x665db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00665db0 size=1168 callers=1 calls=1
   calls: sub_666810
*/
void sub_665db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x665db0ULL || rel >= 0x666240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666240 size=208 callers=2 calls=1
   calls: sub_6671e0
*/
void sub_666240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666240ULL || rel >= 0x666310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666310 size=384 callers=1 calls=1
   calls: sub_667220
*/
void sub_666310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666310ULL || rel >= 0x666490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666490 size=368 callers=2 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_666490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666490ULL || rel >= 0x666600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666600 size=64 callers=1 calls=1
   calls: sub_663c20
*/
void sub_666600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666600ULL || rel >= 0x666640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666640 size=64 callers=1 calls=0
*/
void sub_666640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666640ULL || rel >= 0x666680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666680 size=32 callers=0 calls=0
*/
void sub_666680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666680ULL || rel >= 0x6666a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006666a0 size=48 callers=1 calls=0
*/
void sub_6666a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6666a0ULL || rel >= 0x6666d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006666d0 size=320 callers=2 calls=1
   calls: sub_c70
*/
void sub_6666d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6666d0ULL || rel >= 0x666810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666810 size=320 callers=1 calls=1
   calls: sub_c70
*/
void sub_666810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666810ULL || rel >= 0x666950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666950 size=224 callers=1 calls=0
*/
void sub_666950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666950ULL || rel >= 0x666a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666a30 size=16 callers=3 calls=0
*/
void sub_666a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666a30ULL || rel >= 0x666a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666a40 size=32 callers=0 calls=0
*/
void sub_666a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666a40ULL || rel >= 0x666a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666a60 size=1264 callers=1 calls=0
*/
void sub_666a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666a60ULL || rel >= 0x666f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00666f50 size=224 callers=1 calls=0
*/
void sub_666f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x666f50ULL || rel >= 0x667030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667030 size=144 callers=1 calls=0
*/
void sub_667030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667030ULL || rel >= 0x6670c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006670c0 size=64 callers=1 calls=0
*/
void sub_6670c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6670c0ULL || rel >= 0x667100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667100 size=144 callers=1 calls=0
*/
void sub_667100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667100ULL || rel >= 0x667190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667190 size=80 callers=1 calls=0
*/
void sub_667190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667190ULL || rel >= 0x6671e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006671e0 size=64 callers=1 calls=0
*/
void sub_6671e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6671e0ULL || rel >= 0x667220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667220 size=384 callers=1 calls=0
*/
void sub_667220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667220ULL || rel >= 0x6673a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006673a0 size=224 callers=1 calls=2
   calls: sub_667e70, sub_6682b0
*/
void sub_6673a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6673a0ULL || rel >= 0x667480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667480 size=96 callers=3 calls=1
   calls: sub_ce0
*/
void sub_667480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667480ULL || rel >= 0x6674e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006674e0 size=256 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6674e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6674e0ULL || rel >= 0x6675e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006675e0 size=32 callers=1 calls=0
*/
void sub_6675e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6675e0ULL || rel >= 0x667600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667600 size=48 callers=1 calls=1
   calls: sub_668bc0
*/
void sub_667600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667600ULL || rel >= 0x667630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667630 size=144 callers=2 calls=1
   calls: sub_668bc0
*/
void sub_667630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667630ULL || rel >= 0x6676c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006676c0 size=880 callers=0 calls=5
   calls: ColorSpace, sub_1787bf0, sub_667a30, sub_668bc0, sub_669140
   ref: height
   ref: nv12-y-stride
   ref: nv12-uv-offset
   ref: nv12-y-offset
   ref: nv12-colorspace
*/
void height_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6676c0ULL || rel >= 0x667a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667a30 size=336 callers=1 calls=2
   calls: sub_663b60, sub_663c50
*/
void sub_667a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667a30ULL || rel >= 0x667b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667b80 size=192 callers=2 calls=0
*/
void sub_667b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667b80ULL || rel >= 0x667c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667c40 size=64 callers=1 calls=1
   calls: sub_663c20
*/
void sub_667c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667c40ULL || rel >= 0x667c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667c80 size=64 callers=1 calls=0
*/
void sub_667c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667c80ULL || rel >= 0x667cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667cc0 size=16 callers=1 calls=0
*/
void sub_667cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667cc0ULL || rel >= 0x667cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667cd0 size=368 callers=2 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_667cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667cd0ULL || rel >= 0x667e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667e40 size=32 callers=0 calls=0
*/
void sub_667e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667e40ULL || rel >= 0x667e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667e60 size=16 callers=1 calls=0
*/
void sub_667e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667e60ULL || rel >= 0x667e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667e70 size=224 callers=2 calls=1
   calls: sub_667f50
*/
void sub_667e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667e70ULL || rel >= 0x667f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00667f50 size=208 callers=2 calls=1
   calls: sub_178fda0
*/
void sub_667f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667f50ULL || rel >= 0x668020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00668020 size=352 callers=0 calls=3
   calls: sub_178fdb0, sub_5e2bc0, sub_668180
*/
void sub_668020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x668020ULL || rel >= 0x668180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00668180 size=256 callers=1 calls=3
   calls: sub_178fdd0, sub_1790120, sub_5e2bc0
*/
void sub_668180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x668180ULL || rel >= 0x668280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00668280 size=16 callers=0 calls=0
*/
void sub_668280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x668280ULL || rel >= 0x668290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00668290 size=16 callers=0 calls=0
*/
void sub_668290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x668290ULL || rel >= 0x6682a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006682a0 size=16 callers=0 calls=0
*/
void sub_6682a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6682a0ULL || rel >= 0x6682b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006682b0 size=48 callers=1 calls=1
   calls: movie
*/
void sub_6682b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6682b0ULL || rel >= 0x6682e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006682e0 size=1008 callers=1 calls=12
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5fb340, sub_60e880, sub_60eda0, sub_60f110, sub_60fdb0, sub_610520, sub_612020, sub_d700, sub_fae0
   ref: shader/movie.bnsh
*/
void movie(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6682e0ULL || rel >= 0x6686d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006686d0 size=304 callers=0 calls=6
   calls: sub_1787540, sub_1787560, sub_1787570, sub_178fd30, sub_178fdc0, sub_178fde0
   ref: a_position
   ref: a_texCoord
*/
void a_texCoord(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6686d0ULL || rel >= 0x668800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00668800 size=960 callers=2 calls=19
   calls: sub_17876e0, sub_1788030, sub_17884a0, sub_1788500, sub_1788610, sub_1788980, sub_1789530, sub_1789610, sub_5cfad0, sub_5f7100, sub_5f7110, sub_5f7120
   ... +7 more
   ref: ColorSpace
*/
void ColorSpace(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x668800ULL || rel >= 0x668bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00668bc0 size=1408 callers=3 calls=9
   calls: sub_1787c10, sub_1787c20, sub_5f7110, sub_5f7120, sub_5f8bc0, sub_5f8c40, sub_5fe6a0, sub_669230, sub_68cb70
*/
void sub_668bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x668bc0ULL || rel >= 0x669140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669140 size=32 callers=1 calls=0
*/
void sub_669140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669140ULL || rel >= 0x669160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669160 size=16 callers=0 calls=0
*/
void sub_669160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669160ULL || rel >= 0x669170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669170 size=192 callers=0 calls=1
   calls: sub_68ca30
*/
void sub_669170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669170ULL || rel >= 0x669230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669230 size=240 callers=1 calls=2
   calls: sub_5f6f50, sub_5f6fe0
*/
void sub_669230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669230ULL || rel >= 0x669320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669320 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_669320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669320ULL || rel >= 0x669370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669370 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_669370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669370ULL || rel >= 0x6693c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006693c0 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_6693c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6693c0ULL || rel >= 0x669410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669410 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_669410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669410ULL || rel >= 0x669460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669460 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_669460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669460ULL || rel >= 0x6694b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006694b0 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_6694b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6694b0ULL || rel >= 0x669500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669500 size=160 callers=1 calls=0
*/
void sub_669500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669500ULL || rel >= 0x6695a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006695a0 size=400 callers=4 calls=0
*/
void sub_6695a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6695a0ULL || rel >= 0x669730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669730 size=368 callers=1 calls=0
   ref: MovieDecoderEventHandler
*/
void MovieDecoderEventHandler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669730ULL || rel >= 0x6698a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006698a0 size=48 callers=8 calls=1
   calls: sub_669a60
*/
void sub_6698a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6698a0ULL || rel >= 0x6698d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006698d0 size=384 callers=0 calls=4
   calls: sub_669b20, sub_669c10, sub_669d20, sub_669e10
*/
void sub_6698d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6698d0ULL || rel >= 0x669a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669a50 size=16 callers=1 calls=0
*/
void sub_669a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669a50ULL || rel >= 0x669a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669a60 size=192 callers=1 calls=0
*/
void sub_669a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669a60ULL || rel >= 0x669b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669b20 size=240 callers=2 calls=2
   calls: sub_6649e0, sub_664b00
*/
void sub_669b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669b20ULL || rel >= 0x669c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669c10 size=272 callers=2 calls=1
   calls: sub_667cd0
*/
void sub_669c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669c10ULL || rel >= 0x669d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669d20 size=240 callers=2 calls=2
   calls: sub_6641e0, sub_664300
*/
void sub_669d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669d20ULL || rel >= 0x669e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669e10 size=256 callers=2 calls=1
   calls: sub_666490
*/
void sub_669e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669e10ULL || rel >= 0x669f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669f10 size=64 callers=1 calls=0
*/
void sub_669f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669f10ULL || rel >= 0x669f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669f50 size=32 callers=0 calls=0
*/
void sub_669f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669f50ULL || rel >= 0x669f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669f70 size=32 callers=0 calls=0
*/
void sub_669f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669f70ULL || rel >= 0x669f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00669f90 size=192 callers=0 calls=1
   calls: sub_27d0
*/
void sub_669f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669f90ULL || rel >= 0x66a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a050 size=304 callers=1 calls=2
   calls: sub_602030, sub_66a180
*/
void sub_66a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a050ULL || rel >= 0x66a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a180 size=640 callers=3 calls=5
   calls: DefaultPath, sub_27d0, sub_5cf8c0, sub_65d700, sub_65da00
*/
void sub_66a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a180ULL || rel >= 0x66a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a400 size=528 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_6602c0, sub_66abf0
*/
void sub_66a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a400ULL || rel >= 0x66a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a610 size=560 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_660980, sub_66ae00
*/
void sub_66a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a610ULL || rel >= 0x66a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a840 size=16 callers=0 calls=0
*/
void sub_66a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a840ULL || rel >= 0x66a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a850 size=16 callers=0 calls=0
*/
void sub_66a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a850ULL || rel >= 0x66a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a860 size=64 callers=0 calls=2
   calls: sub_5f3730, sub_66aa30
*/
void sub_66a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a860ULL || rel >= 0x66a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a8a0 size=16 callers=0 calls=0
*/
void sub_66a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a8a0ULL || rel >= 0x66a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a8b0 size=16 callers=0 calls=0
*/
void sub_66a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a8b0ULL || rel >= 0x66a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a8c0 size=16 callers=0 calls=0
*/
void sub_66a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a8c0ULL || rel >= 0x66a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a8d0 size=16 callers=0 calls=0
*/
void sub_66a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a8d0ULL || rel >= 0x66a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a8e0 size=16 callers=0 calls=0
*/
void sub_66a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a8e0ULL || rel >= 0x66a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a8f0 size=16 callers=0 calls=0
*/
void sub_66a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a8f0ULL || rel >= 0x66a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066a900 size=304 callers=0 calls=0
*/
void sub_66a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a900ULL || rel >= 0x66aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066aa30 size=352 callers=1 calls=5
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5f7540, sub_66a610
*/
void sub_66aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66aa30ULL || rel >= 0x66ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066ab90 size=48 callers=0 calls=0
*/
void sub_66ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66ab90ULL || rel >= 0x66abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066abc0 size=16 callers=0 calls=0
*/
void sub_66abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66abc0ULL || rel >= 0x66abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066abd0 size=16 callers=0 calls=0
*/
void sub_66abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66abd0ULL || rel >= 0x66abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066abe0 size=16 callers=0 calls=0
*/
void sub_66abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66abe0ULL || rel >= 0x66abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066abf0 size=528 callers=1 calls=0
*/
void sub_66abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66abf0ULL || rel >= 0x66ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066ae00 size=464 callers=2 calls=0
*/
void sub_66ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66ae00ULL || rel >= 0x66afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066afd0 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_66afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66afd0ULL || rel >= 0x66b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b040 size=176 callers=0 calls=1
   calls: sub_66c130
*/
void sub_66b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b040ULL || rel >= 0x66b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b0f0 size=96 callers=6 calls=1
   calls: sub_66c130
*/
void sub_66b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b0f0ULL || rel >= 0x66b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b150 size=176 callers=0 calls=1
   calls: sub_66c130
*/
void sub_66b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b150ULL || rel >= 0x66b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b200 size=176 callers=0 calls=1
   calls: sub_66c130
*/
void sub_66b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b200ULL || rel >= 0x66b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b2b0 size=176 callers=0 calls=1
   calls: sub_66c130
*/
void sub_66b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b2b0ULL || rel >= 0x66b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b360 size=176 callers=0 calls=1
   calls: sub_66c130
*/
void sub_66b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b360ULL || rel >= 0x66b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b410 size=176 callers=0 calls=1
   calls: sub_66c130
*/
void sub_66b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b410ULL || rel >= 0x66b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b4c0 size=304 callers=1 calls=6
   calls: sub_66b9b0, sub_66c130, sub_66c2b0, sub_66f690, sub_670340, sub_6707d0
*/
void sub_66b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b4c0ULL || rel >= 0x66b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b5f0 size=16 callers=9 calls=0
*/
void sub_66b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b5f0ULL || rel >= 0x66b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b600 size=304 callers=0 calls=1
   calls: sub_66c130
*/
void sub_66b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b600ULL || rel >= 0x66b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b730 size=96 callers=1 calls=1
   calls: sub_66c9f0
*/
void sub_66b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b730ULL || rel >= 0x66b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b790 size=64 callers=2 calls=1
   calls: sub_66c140
*/
void sub_66b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b790ULL || rel >= 0x66b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b7d0 size=96 callers=10 calls=2
   calls: sub_66c200, sub_66efe0
*/
void sub_66b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b7d0ULL || rel >= 0x66b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b830 size=144 callers=0 calls=1
   calls: sub_66c9f0
*/
void sub_66b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b830ULL || rel >= 0x66b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b8c0 size=64 callers=4 calls=0
*/
void sub_66b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b8c0ULL || rel >= 0x66b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b900 size=32 callers=0 calls=0
*/
void sub_66b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b900ULL || rel >= 0x66b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b920 size=144 callers=0 calls=0
*/
void sub_66b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b920ULL || rel >= 0x66b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066b9b0 size=960 callers=1 calls=1
   calls: sub_66bd70
*/
void sub_66b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b9b0ULL || rel >= 0x66bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066bd70 size=960 callers=1 calls=0
*/
void sub_66bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66bd70ULL || rel >= 0x66c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066c130 size=16 callers=9 calls=0
*/
void sub_66c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c130ULL || rel >= 0x66c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066c140 size=192 callers=1 calls=0
*/
void sub_66c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c140ULL || rel >= 0x66c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066c200 size=176 callers=1 calls=0
*/
void sub_66c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c200ULL || rel >= 0x66c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066c2b0 size=560 callers=1 calls=0
*/
void sub_66c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c2b0ULL || rel >= 0x66c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066c4e0 size=144 callers=263 calls=0
*/
void sub_66c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c4e0ULL || rel >= 0x66c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066c570 size=416 callers=39 calls=1
   calls: sub_66c710
*/
void sub_66c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c570ULL || rel >= 0x66c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066c710 size=736 callers=5 calls=0
*/
void sub_66c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c710ULL || rel >= 0x66c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066c9f0 size=9696 callers=4 calls=0
*/
void sub_66c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c9f0ULL || rel >= 0x66efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066efd0 size=16 callers=63 calls=0
*/
void sub_66efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66efd0ULL || rel >= 0x66efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066efe0 size=112 callers=29 calls=0
*/
void sub_66efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66efe0ULL || rel >= 0x66f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f050 size=304 callers=20 calls=0
*/
void sub_66f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f050ULL || rel >= 0x66f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f180 size=16 callers=0 calls=0
*/
void sub_66f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f180ULL || rel >= 0x66f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f190 size=432 callers=0 calls=0
*/
void sub_66f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f190ULL || rel >= 0x66f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f340 size=16 callers=0 calls=0
*/
void sub_66f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f340ULL || rel >= 0x66f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f350 size=16 callers=0 calls=0
*/
void sub_66f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f350ULL || rel >= 0x66f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f360 size=16 callers=0 calls=0
*/
void sub_66f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f360ULL || rel >= 0x66f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f370 size=16 callers=0 calls=0
*/
void sub_66f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f370ULL || rel >= 0x66f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f380 size=32 callers=0 calls=0
*/
void sub_66f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f380ULL || rel >= 0x66f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f3a0 size=96 callers=0 calls=0
*/
void sub_66f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f3a0ULL || rel >= 0x66f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f400 size=32 callers=0 calls=0
*/
void sub_66f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f400ULL || rel >= 0x66f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f420 size=96 callers=0 calls=0
*/
void sub_66f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f420ULL || rel >= 0x66f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f480 size=32 callers=0 calls=0
*/
void sub_66f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f480ULL || rel >= 0x66f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f4a0 size=128 callers=0 calls=0
*/
void sub_66f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f4a0ULL || rel >= 0x66f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f520 size=112 callers=0 calls=0
*/
void sub_66f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f520ULL || rel >= 0x66f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f590 size=112 callers=0 calls=0
*/
void sub_66f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f590ULL || rel >= 0x66f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f600 size=112 callers=0 calls=0
*/
void sub_66f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f600ULL || rel >= 0x66f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f670 size=32 callers=0 calls=0
*/
void sub_66f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f670ULL || rel >= 0x66f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f690 size=16 callers=1 calls=0
*/
void sub_66f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f690ULL || rel >= 0x66f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066f6a0 size=1392 callers=2 calls=1
   calls: sub_66fc30
*/
void sub_66f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f6a0ULL || rel >= 0x66fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066fc10 size=16 callers=0 calls=0
*/
void sub_66fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66fc10ULL || rel >= 0x66fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066fc20 size=16 callers=0 calls=0
*/
void sub_66fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66fc20ULL || rel >= 0x66fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0066fc30 size=1616 callers=2 calls=1
   calls: sub_66f6a0
*/
void sub_66fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66fc30ULL || rel >= 0x670280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670280 size=192 callers=0 calls=1
   calls: sub_66f6a0
*/
void sub_670280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670280ULL || rel >= 0x670340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670340 size=16 callers=1 calls=0
*/
void sub_670340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670340ULL || rel >= 0x670350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670350 size=48 callers=0 calls=0
*/
void sub_670350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670350ULL || rel >= 0x670380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670380 size=64 callers=0 calls=0
*/
void sub_670380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670380ULL || rel >= 0x6703c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006703c0 size=112 callers=0 calls=0
*/
void sub_6703c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6703c0ULL || rel >= 0x670430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670430 size=16 callers=0 calls=0
*/
void sub_670430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670430ULL || rel >= 0x670440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670440 size=576 callers=0 calls=0
*/
void sub_670440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670440ULL || rel >= 0x670680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670680 size=16 callers=0 calls=0
*/
void sub_670680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670680ULL || rel >= 0x670690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670690 size=32 callers=0 calls=0
*/
void sub_670690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670690ULL || rel >= 0x6706b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006706b0 size=32 callers=0 calls=0
*/
void sub_6706b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6706b0ULL || rel >= 0x6706d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006706d0 size=16 callers=0 calls=0
*/
void sub_6706d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6706d0ULL || rel >= 0x6706e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006706e0 size=16 callers=0 calls=0
*/
void sub_6706e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6706e0ULL || rel >= 0x6706f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006706f0 size=80 callers=0 calls=0
*/
void sub_6706f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6706f0ULL || rel >= 0x670740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670740 size=144 callers=0 calls=0
*/
void sub_670740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670740ULL || rel >= 0x6707d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006707d0 size=16 callers=1 calls=0
*/
void sub_6707d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6707d0ULL || rel >= 0x6707e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006707e0 size=16 callers=1 calls=0
*/
void sub_6707e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6707e0ULL || rel >= 0x6707f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006707f0 size=16 callers=2 calls=0
*/
void sub_6707f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6707f0ULL || rel >= 0x670800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670800 size=16 callers=4 calls=0
*/
void sub_670800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670800ULL || rel >= 0x670810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670810 size=16 callers=4 calls=0
*/
void sub_670810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670810ULL || rel >= 0x670820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670820 size=16 callers=1 calls=0
*/
void sub_670820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670820ULL || rel >= 0x670830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670830 size=48 callers=16 calls=0
*/
void sub_670830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670830ULL || rel >= 0x670860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670860 size=352 callers=1 calls=1
   calls: sub_5db3d0
*/
void sub_670860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670860ULL || rel >= 0x6709c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006709c0 size=272 callers=0 calls=0
*/
void sub_6709c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6709c0ULL || rel >= 0x670ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00670ad0 size=1792 callers=0 calls=2
   calls: sub_671f40, sub_967240
*/
void sub_670ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x670ad0ULL || rel >= 0x6711d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006711d0 size=16 callers=0 calls=0
*/
void sub_6711d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6711d0ULL || rel >= 0x6711e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006711e0 size=48 callers=0 calls=1
   calls: sub_671210
*/
void sub_6711e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6711e0ULL || rel >= 0x671210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671210 size=864 callers=2 calls=4
   calls: sub_59bee0, sub_615bd0, sub_615c50, sub_967240
*/
void sub_671210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671210ULL || rel >= 0x671570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671570 size=1328 callers=0 calls=3
   calls: sub_59bee0, sub_614680, sub_967240
*/
void sub_671570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671570ULL || rel >= 0x671aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671aa0 size=48 callers=0 calls=1
   calls: sub_671210
*/
void sub_671aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671aa0ULL || rel >= 0x671ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671ad0 size=48 callers=4 calls=0
*/
void sub_671ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671ad0ULL || rel >= 0x671b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671b00 size=448 callers=3 calls=1
   calls: sub_967240
*/
void sub_671b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671b00ULL || rel >= 0x671cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671cc0 size=32 callers=1 calls=0
*/
void sub_671cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671cc0ULL || rel >= 0x671ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671ce0 size=16 callers=1 calls=0
*/
void sub_671ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671ce0ULL || rel >= 0x671cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671cf0 size=16 callers=1 calls=0
*/
void sub_671cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671cf0ULL || rel >= 0x671d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671d00 size=384 callers=4 calls=2
   calls: sub_671f40, sub_967240
*/
void sub_671d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671d00ULL || rel >= 0x671e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671e80 size=192 callers=15 calls=0
*/
void sub_671e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671e80ULL || rel >= 0x671f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00671f40 size=304 callers=3 calls=0
*/
void sub_671f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671f40ULL || rel >= 0x672070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672070 size=384 callers=4 calls=2
   calls: sub_671f40, sub_967240
*/
void sub_672070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672070ULL || rel >= 0x6721f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006721f0 size=80 callers=4 calls=0
*/
void sub_6721f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6721f0ULL || rel >= 0x672240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672240 size=272 callers=1 calls=0
*/
void sub_672240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672240ULL || rel >= 0x672350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672350 size=304 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_672350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672350ULL || rel >= 0x672480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672480 size=16 callers=0 calls=0
*/
void sub_672480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672480ULL || rel >= 0x672490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672490 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_672490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672490ULL || rel >= 0x672500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672500 size=16 callers=0 calls=0
*/
void sub_672500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672500ULL || rel >= 0x672510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672510 size=16 callers=0 calls=0
*/
void sub_672510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672510ULL || rel >= 0x672520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672520 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_672520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672520ULL || rel >= 0x672590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672590 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_672590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672590ULL || rel >= 0x672600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672600 size=16 callers=0 calls=0
*/
void sub_672600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672600ULL || rel >= 0x672610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672610 size=16 callers=0 calls=0
*/
void sub_672610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672610ULL || rel >= 0x672620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672620 size=160 callers=4 calls=1
   calls: sub_5e2350
*/
void sub_672620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672620ULL || rel >= 0x6726c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006726c0 size=320 callers=0 calls=0
*/
void sub_6726c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6726c0ULL || rel >= 0x672800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672800 size=16 callers=0 calls=0
*/
void sub_672800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672800ULL || rel >= 0x672810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672810 size=16 callers=0 calls=0
*/
void sub_672810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672810ULL || rel >= 0x672820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672820 size=16 callers=0 calls=0
*/
void sub_672820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672820ULL || rel >= 0x672830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672830 size=16 callers=0 calls=0
*/
void sub_672830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672830ULL || rel >= 0x672840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672840 size=16 callers=0 calls=0
*/
void sub_672840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672840ULL || rel >= 0x672850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672850 size=48 callers=0 calls=0
*/
void sub_672850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672850ULL || rel >= 0x672880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672880 size=48 callers=0 calls=0
*/
void sub_672880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672880ULL || rel >= 0x6728b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006728b0 size=160 callers=1 calls=0
*/
void sub_6728b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6728b0ULL || rel >= 0x672950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672950 size=48 callers=7 calls=0
*/
void sub_672950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672950ULL || rel >= 0x672980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672980 size=48 callers=10 calls=0
*/
void sub_672980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672980ULL || rel >= 0x6729b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006729b0 size=160 callers=3 calls=1
   calls: sub_672f70
*/
void sub_6729b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6729b0ULL || rel >= 0x672a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672a50 size=448 callers=2 calls=1
   calls: sub_672f70
*/
void sub_672a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672a50ULL || rel >= 0x672c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672c10 size=80 callers=70 calls=0
*/
void sub_672c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672c10ULL || rel >= 0x672c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672c60 size=240 callers=0 calls=0
*/
void sub_672c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672c60ULL || rel >= 0x672d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672d50 size=16 callers=0 calls=0
*/
void sub_672d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672d50ULL || rel >= 0x672d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672d60 size=16 callers=0 calls=0
*/
void sub_672d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672d60ULL || rel >= 0x672d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672d70 size=512 callers=0 calls=0
*/
void sub_672d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672d70ULL || rel >= 0x672f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00672f70 size=320 callers=2 calls=0
*/
void sub_672f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x672f70ULL || rel >= 0x6730b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006730b0 size=464 callers=0 calls=0
*/
void sub_6730b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6730b0ULL || rel >= 0x673280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00673280 size=32 callers=0 calls=0
*/
void sub_673280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x673280ULL || rel >= 0x6732a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006732a0 size=32 callers=0 calls=0
*/
void sub_6732a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6732a0ULL || rel >= 0x6732c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006732c0 size=32 callers=0 calls=0
*/
void sub_6732c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6732c0ULL || rel >= 0x6732e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006732e0 size=64 callers=2 calls=0
*/
void sub_6732e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6732e0ULL || rel >= 0x673320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00673320 size=64 callers=5 calls=0
*/
void sub_673320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x673320ULL || rel >= 0x673360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00673360 size=64 callers=3 calls=0
*/
void sub_673360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x673360ULL || rel >= 0x6733a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006733a0 size=64 callers=5 calls=0
*/
void sub_6733a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6733a0ULL || rel >= 0x6733e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006733e0 size=1696 callers=1 calls=3
   calls: sub_6798d0, sub_67a1e0, sub_67b080
*/
void sub_6733e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6733e0ULL || rel >= 0x673a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00673a80 size=800 callers=3 calls=1
   calls: sub_67a1e0
*/
void sub_673a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x673a80ULL || rel >= 0x673da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00673da0 size=896 callers=1 calls=1
   calls: sub_674120
   ref: GFDefaultListener
*/
void GFDefaultListener(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x673da0ULL || rel >= 0x674120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674120 size=960 callers=3 calls=2
   calls: sub_675820, sub_675ad0
*/
void sub_674120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674120ULL || rel >= 0x6744e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006744e0 size=272 callers=0 calls=1
   calls: sub_67a1e0
*/
void sub_6744e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6744e0ULL || rel >= 0x6745f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006745f0 size=48 callers=1 calls=0
*/
void sub_6745f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6745f0ULL || rel >= 0x674620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674620 size=32 callers=0 calls=0
*/
void sub_674620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674620ULL || rel >= 0x674640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674640 size=64 callers=1 calls=0
*/
void sub_674640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674640ULL || rel >= 0x674680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674680 size=16 callers=1 calls=0
*/
void sub_674680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674680ULL || rel >= 0x674690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674690 size=96 callers=0 calls=0
*/
void sub_674690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674690ULL || rel >= 0x6746f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006746f0 size=48 callers=0 calls=0
*/
void sub_6746f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6746f0ULL || rel >= 0x674720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674720 size=224 callers=0 calls=1
   calls: sub_674820
*/
void sub_674720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674720ULL || rel >= 0x674800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674800 size=32 callers=0 calls=0
*/
void sub_674800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674800ULL || rel >= 0x674820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674820 size=832 callers=1 calls=3
   calls: sub_676190, sub_676470, sub_d0c0
*/
void sub_674820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674820ULL || rel >= 0x674b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674b60 size=208 callers=0 calls=1
   calls: sub_674c50
*/
void sub_674b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674b60ULL || rel >= 0x674c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674c30 size=32 callers=0 calls=0
*/
void sub_674c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674c30ULL || rel >= 0x674c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674c50 size=736 callers=1 calls=2
   calls: sub_676f50, sub_d0c0
*/
void sub_674c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674c50ULL || rel >= 0x674f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00674f30 size=272 callers=1 calls=2
   calls: sub_3047c0, sub_674120
*/
void sub_674f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x674f30ULL || rel >= 0x675040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00675040 size=112 callers=1 calls=1
   calls: sub_6750b0
*/
void sub_675040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x675040ULL || rel >= 0x6750b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006750b0 size=544 callers=1 calls=0
*/
void sub_6750b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6750b0ULL || rel >= 0x6752d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006752d0 size=192 callers=1 calls=1
   calls: sub_674120
*/
void sub_6752d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6752d0ULL || rel >= 0x675390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00675390 size=80 callers=1 calls=0
*/
void sub_675390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x675390ULL || rel >= 0x6753e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006753e0 size=304 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_6753e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6753e0ULL || rel >= 0x675510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00675510 size=128 callers=1 calls=0
*/
void sub_675510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x675510ULL || rel >= 0x675590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

