/* main functions 0032b160..0034b0a0 (19 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0032b160 size=368 callers=12 calls=0
*/
void sub_32b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b160ULL || rel >= 0x32b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b2d0 size=400 callers=16 calls=0
*/
void sub_32b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b2d0ULL || rel >= 0x32b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b460 size=240 callers=12 calls=0
*/
void sub_32b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b460ULL || rel >= 0x32b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b550 size=192 callers=65 calls=0
*/
void sub_32b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b550ULL || rel >= 0x32b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b610 size=176 callers=28 calls=0
*/
void sub_32b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b610ULL || rel >= 0x32b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b6c0 size=64 callers=0 calls=0
*/
void sub_32b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b6c0ULL || rel >= 0x32b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b700 size=80 callers=0 calls=0
*/
void sub_32b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b700ULL || rel >= 0x32b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b750 size=16 callers=0 calls=0
*/
void sub_32b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b750ULL || rel >= 0x32b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b760 size=16 callers=0 calls=0
*/
void sub_32b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b760ULL || rel >= 0x32b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b770 size=96 callers=0 calls=0
*/
void sub_32b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b770ULL || rel >= 0x32b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b7d0 size=48 callers=0 calls=0
*/
void sub_32b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b7d0ULL || rel >= 0x32b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b800 size=80 callers=0 calls=0
*/
void sub_32b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b800ULL || rel >= 0x32b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b850 size=32 callers=0 calls=0
*/
void sub_32b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b850ULL || rel >= 0x32b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b870 size=96 callers=0 calls=0
*/
void sub_32b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b870ULL || rel >= 0x32b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b8d0 size=16 callers=0 calls=0
*/
void sub_32b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b8d0ULL || rel >= 0x32b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b8e0 size=16 callers=0 calls=0
*/
void sub_32b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b8e0ULL || rel >= 0x32b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b8f0 size=192 callers=0 calls=0
*/
void sub_32b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b8f0ULL || rel >= 0x32b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b9b0 size=80 callers=0 calls=0
*/
void sub_32b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b9b0ULL || rel >= 0x32ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ba00 size=16 callers=0 calls=0
*/
void sub_32ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ba00ULL || rel >= 0x32ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ba10 size=32 callers=0 calls=0
*/
void sub_32ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ba10ULL || rel >= 0x32ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ba30 size=160 callers=0 calls=0
*/
void sub_32ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ba30ULL || rel >= 0x32bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bad0 size=96 callers=0 calls=0
*/
void sub_32bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bad0ULL || rel >= 0x32bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bb30 size=48 callers=0 calls=0
*/
void sub_32bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bb30ULL || rel >= 0x32bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bb60 size=16 callers=0 calls=0
*/
void sub_32bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bb60ULL || rel >= 0x32bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bb70 size=96 callers=0 calls=0
*/
void sub_32bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bb70ULL || rel >= 0x32bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bbd0 size=16 callers=0 calls=0
*/
void sub_32bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bbd0ULL || rel >= 0x32bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bbe0 size=16 callers=0 calls=0
*/
void sub_32bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bbe0ULL || rel >= 0x32bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bbf0 size=16 callers=0 calls=0
*/
void sub_32bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bbf0ULL || rel >= 0x32bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bc00 size=80 callers=0 calls=0
*/
void sub_32bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bc00ULL || rel >= 0x32bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bc50 size=160 callers=1 calls=0
*/
void sub_32bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bc50ULL || rel >= 0x32bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bcf0 size=176 callers=0 calls=1
   calls: sub_3e7ef0
*/
void sub_32bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bcf0ULL || rel >= 0x32bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bda0 size=144 callers=3 calls=1
   calls: sub_3e7ef0
*/
void sub_32bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bda0ULL || rel >= 0x32be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032be30 size=192 callers=0 calls=1
   calls: sub_304740
*/
void sub_32be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32be30ULL || rel >= 0x32bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bef0 size=192 callers=0 calls=1
   calls: sub_304740
*/
void sub_32bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bef0ULL || rel >= 0x32bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bfb0 size=144 callers=1 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_32bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bfb0ULL || rel >= 0x32c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c040 size=128 callers=9 calls=0
*/
void sub_32c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c040ULL || rel >= 0x32c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c0c0 size=64 callers=1 calls=1
   calls: sub_399420
*/
void sub_32c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c0c0ULL || rel >= 0x32c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c100 size=128 callers=0 calls=1
   calls: sub_3e7ef0
*/
void sub_32c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c100ULL || rel >= 0x32c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c180 size=160 callers=3 calls=0
*/
void sub_32c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c180ULL || rel >= 0x32c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c220 size=48 callers=1 calls=1
   calls: sub_3e7ef0
*/
void sub_32c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c220ULL || rel >= 0x32c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c250 size=448 callers=1 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_32c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c250ULL || rel >= 0x32c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c410 size=416 callers=1 calls=3
   calls: sub_369910, sub_369920, sub_37d6b0
*/
void sub_32c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c410ULL || rel >= 0x32c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c5b0 size=704 callers=0 calls=5
   calls: sub_3045e0, sub_32c870, sub_32e6c0, sub_359880, sub_395830
*/
void sub_32c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c5b0ULL || rel >= 0x32c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c870 size=624 callers=1 calls=2
   calls: sub_32e6c0, sub_3694d0
*/
void sub_32c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c870ULL || rel >= 0x32cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cae0 size=5152 callers=1 calls=9
   calls: sub_32e6c0, sub_34fbc0, sub_369910, sub_369920, sub_37d6b0, sub_3a8cf0, sub_3a9080, sub_3a9300, sub_3ad140
*/
void sub_32cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cae0ULL || rel >= 0x32df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032df00 size=112 callers=2 calls=0
*/
void sub_32df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32df00ULL || rel >= 0x32df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032df70 size=768 callers=1 calls=1
   calls: sub_32e6c0
*/
void sub_32df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32df70ULL || rel >= 0x32e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e270 size=224 callers=1 calls=4
   calls: sub_357c00, sub_369910, sub_369930, sub_38f490
*/
void sub_32e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e270ULL || rel >= 0x32e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e350 size=128 callers=2 calls=0
*/
void sub_32e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e350ULL || rel >= 0x32e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e3d0 size=368 callers=0 calls=0
*/
void sub_32e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e3d0ULL || rel >= 0x32e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e540 size=336 callers=3 calls=0
*/
void sub_32e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e540ULL || rel >= 0x32e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e690 size=48 callers=0 calls=0
*/
void sub_32e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e690ULL || rel >= 0x32e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e6c0 size=656 callers=37 calls=1
   calls: sub_32e950
*/
void sub_32e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e6c0ULL || rel >= 0x32e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e950 size=528 callers=2 calls=0
*/
void sub_32e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e950ULL || rel >= 0x32eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032eb60 size=128 callers=0 calls=0
*/
void sub_32eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32eb60ULL || rel >= 0x32ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ebe0 size=128 callers=0 calls=0
*/
void sub_32ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ebe0ULL || rel >= 0x32ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ec60 size=16 callers=0 calls=0
*/
void sub_32ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ec60ULL || rel >= 0x32ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ec70 size=16 callers=0 calls=0
*/
void sub_32ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ec70ULL || rel >= 0x32ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ec80 size=16 callers=0 calls=0
*/
void sub_32ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ec80ULL || rel >= 0x32ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ec90 size=112 callers=0 calls=1
   calls: sub_1c0
*/
void sub_32ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ec90ULL || rel >= 0x32ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ed00 size=272 callers=6 calls=0
*/
void sub_32ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ed00ULL || rel >= 0x32ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ee10 size=112 callers=10 calls=0
*/
void sub_32ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ee10ULL || rel >= 0x32ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ee80 size=64 callers=2 calls=0
*/
void sub_32ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ee80ULL || rel >= 0x32eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032eec0 size=224 callers=2 calls=0
*/
void sub_32eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32eec0ULL || rel >= 0x32efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032efa0 size=16 callers=2 calls=0
*/
void sub_32efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32efa0ULL || rel >= 0x32efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032efb0 size=1856 callers=0 calls=32
   calls: sub_3044e0, sub_3045e0, sub_305450, sub_305660, sub_32f750, sub_333700, sub_333930, sub_334be0, sub_3358b0, sub_335940, sub_33c590, sub_342920
   ... +20 more
*/
void sub_32efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32efb0ULL || rel >= 0x32f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032f6f0 size=96 callers=0 calls=0
*/
void sub_32f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32f6f0ULL || rel >= 0x32f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032f750 size=1648 callers=3 calls=30
   calls: sub_3047c0, sub_305660, sub_32bfb0, sub_334cf0, sub_334f70, sub_3350e0, sub_335900, sub_335a60, sub_33c6b0, sub_357b90, sub_35f2d0, sub_377580
   ... +18 more
*/
void sub_32f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32f750ULL || rel >= 0x32fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fdc0 size=16 callers=0 calls=0
*/
void sub_32fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fdc0ULL || rel >= 0x32fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fdd0 size=32 callers=0 calls=0
*/
void sub_32fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fdd0ULL || rel >= 0x32fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fdf0 size=16 callers=0 calls=0
*/
void sub_32fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fdf0ULL || rel >= 0x32fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fe00 size=32 callers=0 calls=0
*/
void sub_32fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fe00ULL || rel >= 0x32fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fe20 size=368 callers=0 calls=2
   calls: sub_335840, sub_336100
*/
void sub_32fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fe20ULL || rel >= 0x32ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ff90 size=224 callers=0 calls=1
   calls: sub_336100
*/
void sub_32ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ff90ULL || rel >= 0x330070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330070 size=208 callers=0 calls=1
   calls: sub_336100
*/
void sub_330070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330070ULL || rel >= 0x330140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330140 size=240 callers=0 calls=3
   calls: sub_3357d0, sub_3357e0, sub_336100
*/
void sub_330140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330140ULL || rel >= 0x330230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330230 size=432 callers=0 calls=3
   calls: sub_3357d0, sub_3357e0, sub_336100
*/
void sub_330230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330230ULL || rel >= 0x3303e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003303e0 size=112 callers=0 calls=2
   calls: sub_335800, sub_336100
*/
void sub_3303e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3303e0ULL || rel >= 0x330450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330450 size=480 callers=0 calls=2
   calls: sub_335800, sub_336100
*/
void sub_330450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330450ULL || rel >= 0x330630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330630 size=112 callers=0 calls=2
   calls: sub_335810, sub_336100
*/
void sub_330630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330630ULL || rel >= 0x3306a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003306a0 size=288 callers=0 calls=2
   calls: sub_335810, sub_336100
*/
void sub_3306a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3306a0ULL || rel >= 0x3307c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003307c0 size=128 callers=0 calls=2
   calls: sub_3357f0, sub_336100
*/
void sub_3307c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3307c0ULL || rel >= 0x330840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330840 size=160 callers=2 calls=2
   calls: sub_3357f0, sub_336100
*/
void sub_330840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330840ULL || rel >= 0x3308e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003308e0 size=480 callers=0 calls=2
   calls: sub_3357f0, sub_336100
*/
void sub_3308e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3308e0ULL || rel >= 0x330ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330ac0 size=144 callers=0 calls=2
   calls: sub_335850, sub_336100
*/
void sub_330ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330ac0ULL || rel >= 0x330b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330b50 size=128 callers=0 calls=2
   calls: sub_335860, sub_336100
*/
void sub_330b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330b50ULL || rel >= 0x330bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330bd0 size=256 callers=1 calls=0
*/
void sub_330bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330bd0ULL || rel >= 0x330cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330cd0 size=80 callers=1 calls=0
*/
void sub_330cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330cd0ULL || rel >= 0x330d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330d20 size=48 callers=1 calls=0
*/
void sub_330d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330d20ULL || rel >= 0x330d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330d50 size=288 callers=0 calls=3
   calls: sub_3047c0, sub_330e70, sub_330fb0
*/
void sub_330d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330d50ULL || rel >= 0x330e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330e70 size=320 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_330e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330e70ULL || rel >= 0x330fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330fb0 size=416 callers=4 calls=3
   calls: sub_3357c0, sub_336100, sub_38ec10
*/
void sub_330fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330fb0ULL || rel >= 0x331150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331150 size=144 callers=39 calls=1
   calls: sub_3047c0
*/
void sub_331150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331150ULL || rel >= 0x3311e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003311e0 size=432 callers=0 calls=3
   calls: sub_3047c0, sub_330e70, sub_330fb0
*/
void sub_3311e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3311e0ULL || rel >= 0x331390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331390 size=448 callers=0 calls=3
   calls: sub_3047c0, sub_330e70, sub_330fb0
*/
void sub_331390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331390ULL || rel >= 0x331550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331550 size=128 callers=0 calls=2
   calls: sub_335820, sub_336100
*/
void sub_331550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331550ULL || rel >= 0x3315d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003315d0 size=128 callers=0 calls=2
   calls: sub_335820, sub_336100
*/
void sub_3315d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3315d0ULL || rel >= 0x331650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331650 size=112 callers=0 calls=2
   calls: sub_335830, sub_336100
*/
void sub_331650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331650ULL || rel >= 0x3316c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003316c0 size=16 callers=0 calls=0
*/
void sub_3316c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3316c0ULL || rel >= 0x3316d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003316d0 size=512 callers=0 calls=1
   calls: sub_342110
*/
void sub_3316d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3316d0ULL || rel >= 0x3318d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003318d0 size=192 callers=0 calls=0
*/
void sub_3318d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3318d0ULL || rel >= 0x331990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331990 size=256 callers=0 calls=1
   calls: sub_347090
*/
void sub_331990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331990ULL || rel >= 0x331a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331a90 size=208 callers=0 calls=1
   calls: sub_347090
*/
void sub_331a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331a90ULL || rel >= 0x331b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331b60 size=464 callers=0 calls=1
   calls: sub_341fc0
*/
void sub_331b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331b60ULL || rel >= 0x331d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331d30 size=96 callers=0 calls=0
*/
void sub_331d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331d30ULL || rel >= 0x331d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331d90 size=192 callers=0 calls=1
   calls: sub_347090
*/
void sub_331d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331d90ULL || rel >= 0x331e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331e50 size=160 callers=0 calls=1
   calls: sub_347090
*/
void sub_331e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331e50ULL || rel >= 0x331ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331ef0 size=224 callers=0 calls=0
*/
void sub_331ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331ef0ULL || rel >= 0x331fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331fd0 size=480 callers=0 calls=0
*/
void sub_331fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331fd0ULL || rel >= 0x3321b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003321b0 size=432 callers=0 calls=0
*/
void sub_3321b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3321b0ULL || rel >= 0x332360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332360 size=112 callers=0 calls=0
*/
void sub_332360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332360ULL || rel >= 0x3323d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003323d0 size=768 callers=6 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3323d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3323d0ULL || rel >= 0x3326d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003326d0 size=448 callers=2 calls=0
*/
void sub_3326d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3326d0ULL || rel >= 0x332890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332890 size=16 callers=1 calls=0
*/
void sub_332890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332890ULL || rel >= 0x3328a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003328a0 size=16 callers=1 calls=0
*/
void sub_3328a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3328a0ULL || rel >= 0x3328b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003328b0 size=16 callers=1 calls=0
*/
void sub_3328b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3328b0ULL || rel >= 0x3328c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003328c0 size=112 callers=0 calls=2
   calls: sub_335880, sub_336100
*/
void sub_3328c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3328c0ULL || rel >= 0x332930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332930 size=16 callers=2 calls=0
*/
void sub_332930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332930ULL || rel >= 0x332940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332940 size=320 callers=0 calls=3
   calls: sub_3045e0, sub_335890, sub_336100
*/
void sub_332940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332940ULL || rel >= 0x332a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332a80 size=160 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_332a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332a80ULL || rel >= 0x332b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332b20 size=16 callers=0 calls=0
*/
void sub_332b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332b20ULL || rel >= 0x332b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332b30 size=16 callers=0 calls=0
*/
void sub_332b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332b30ULL || rel >= 0x332b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332b40 size=16 callers=0 calls=0
*/
void sub_332b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332b40ULL || rel >= 0x332b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332b50 size=16 callers=0 calls=0
*/
void sub_332b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332b50ULL || rel >= 0x332b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332b60 size=16 callers=0 calls=0
*/
void sub_332b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332b60ULL || rel >= 0x332b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332b70 size=16 callers=0 calls=0
*/
void sub_332b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332b70ULL || rel >= 0x332b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332b80 size=16 callers=0 calls=0
*/
void sub_332b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332b80ULL || rel >= 0x332b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332b90 size=32 callers=0 calls=0
*/
void sub_332b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332b90ULL || rel >= 0x332bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332bb0 size=32 callers=0 calls=0
*/
void sub_332bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332bb0ULL || rel >= 0x332bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332bd0 size=16 callers=0 calls=0
*/
void sub_332bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332bd0ULL || rel >= 0x332be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332be0 size=448 callers=0 calls=0
*/
void sub_332be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332be0ULL || rel >= 0x332da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332da0 size=16 callers=0 calls=0
*/
void sub_332da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332da0ULL || rel >= 0x332db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332db0 size=240 callers=0 calls=3
   calls: sub_3357d0, sub_3357e0, sub_336100
*/
void sub_332db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332db0ULL || rel >= 0x332ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332ea0 size=32 callers=0 calls=0
*/
void sub_332ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332ea0ULL || rel >= 0x332ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332ec0 size=64 callers=0 calls=1
   calls: sub_3cad90
*/
void sub_332ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332ec0ULL || rel >= 0x332f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332f00 size=112 callers=0 calls=1
   calls: sub_3caf60
*/
void sub_332f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332f00ULL || rel >= 0x332f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332f70 size=64 callers=0 calls=0
*/
void sub_332f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332f70ULL || rel >= 0x332fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332fb0 size=128 callers=0 calls=0
*/
void sub_332fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332fb0ULL || rel >= 0x333030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333030 size=912 callers=0 calls=1
   calls: sub_3a8ad0
*/
void sub_333030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333030ULL || rel >= 0x3333c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003333c0 size=16 callers=0 calls=0
*/
void sub_3333c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3333c0ULL || rel >= 0x3333d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003333d0 size=96 callers=0 calls=2
   calls: sub_32c040, sub_32e350
*/
void sub_3333d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3333d0ULL || rel >= 0x333430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333430 size=16 callers=0 calls=0
*/
void sub_333430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333430ULL || rel >= 0x333440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333440 size=16 callers=0 calls=0
*/
void sub_333440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333440ULL || rel >= 0x333450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333450 size=48 callers=0 calls=0
*/
void sub_333450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333450ULL || rel >= 0x333480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333480 size=16 callers=0 calls=0
*/
void sub_333480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333480ULL || rel >= 0x333490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333490 size=96 callers=0 calls=1
   calls: sub_357ea0
*/
void sub_333490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333490ULL || rel >= 0x3334f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003334f0 size=48 callers=0 calls=1
   calls: sub_358190
*/
void sub_3334f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3334f0ULL || rel >= 0x333520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333520 size=16 callers=0 calls=0
*/
void sub_333520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333520ULL || rel >= 0x333530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333530 size=16 callers=0 calls=0
*/
void sub_333530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333530ULL || rel >= 0x333540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333540 size=16 callers=0 calls=0
*/
void sub_333540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333540ULL || rel >= 0x333550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333550 size=16 callers=0 calls=0
*/
void sub_333550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333550ULL || rel >= 0x333560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333560 size=416 callers=3 calls=0
*/
void sub_333560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333560ULL || rel >= 0x333700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333700 size=384 callers=1 calls=0
*/
void sub_333700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333700ULL || rel >= 0x333880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333880 size=16 callers=0 calls=0
*/
void sub_333880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333880ULL || rel >= 0x333890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333890 size=16 callers=1 calls=0
*/
void sub_333890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333890ULL || rel >= 0x3338a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003338a0 size=144 callers=0 calls=0
*/
void sub_3338a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3338a0ULL || rel >= 0x333930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333930 size=16 callers=1 calls=0
*/
void sub_333930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333930ULL || rel >= 0x333940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333940 size=96 callers=0 calls=3
   calls: sub_3a5800, sub_3a5890, sub_3c52f0
*/
void sub_333940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333940ULL || rel >= 0x3339a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003339a0 size=96 callers=1 calls=2
   calls: sub_334390, sub_3c5360
*/
void sub_3339a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3339a0ULL || rel >= 0x333a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333a00 size=16 callers=1 calls=0
*/
void sub_333a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333a00ULL || rel >= 0x333a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333a10 size=32 callers=0 calls=0
*/
void sub_333a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333a10ULL || rel >= 0x333a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333a30 size=224 callers=25 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_333a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333a30ULL || rel >= 0x333b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333b10 size=1424 callers=0 calls=0
*/
void sub_333b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333b10ULL || rel >= 0x3340a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003340a0 size=528 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3340a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3340a0ULL || rel >= 0x3342b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003342b0 size=224 callers=0 calls=1
   calls: sub_673320
   ref: AK::OpusDecodingThread
*/
void AK_OpusDecodingThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3342b0ULL || rel >= 0x334390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334390 size=912 callers=1 calls=1
   calls: sub_333a30
*/
void sub_334390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334390ULL || rel >= 0x334720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334720 size=208 callers=0 calls=2
   calls: sub_333a30, sub_334860
*/
void sub_334720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334720ULL || rel >= 0x3347f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003347f0 size=112 callers=0 calls=1
   calls: sub_6733a0
*/
void sub_3347f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3347f0ULL || rel >= 0x334860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334860 size=416 callers=1 calls=0
*/
void sub_334860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334860ULL || rel >= 0x334a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334a00 size=16 callers=0 calls=0
*/
void sub_334a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334a00ULL || rel >= 0x334a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334a10 size=32 callers=1 calls=0
*/
void sub_334a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334a10ULL || rel >= 0x334a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334a30 size=16 callers=7 calls=0
*/
void sub_334a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334a30ULL || rel >= 0x334a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334a40 size=128 callers=0 calls=2
   calls: sub_336510, sub_3689d0
*/
void sub_334a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334a40ULL || rel >= 0x334ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334ac0 size=176 callers=1 calls=1
   calls: sub_673320
   ref: AK::EventManager
*/
void AK_EventManager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334ac0ULL || rel >= 0x334b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334b70 size=112 callers=0 calls=1
   calls: sub_6733a0
*/
void sub_334b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334b70ULL || rel >= 0x334be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334be0 size=272 callers=1 calls=1
   calls: sub_3352d0
*/
void sub_334be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334be0ULL || rel >= 0x334cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334cf0 size=640 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_334cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334cf0ULL || rel >= 0x334f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334f70 size=368 callers=1 calls=0
*/
void sub_334f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334f70ULL || rel >= 0x3350e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003350e0 size=208 callers=1 calls=1
   calls: sub_38fcb0
*/
void sub_3350e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3350e0ULL || rel >= 0x3351b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003351b0 size=240 callers=50 calls=0
*/
void sub_3351b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3351b0ULL || rel >= 0x3352a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003352a0 size=16 callers=9 calls=0
*/
void sub_3352a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3352a0ULL || rel >= 0x3352b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003352b0 size=16 callers=2 calls=0
*/
void sub_3352b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3352b0ULL || rel >= 0x3352c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003352c0 size=16 callers=12 calls=0
*/
void sub_3352c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3352c0ULL || rel >= 0x3352d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003352d0 size=336 callers=13 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3352d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3352d0ULL || rel >= 0x335420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335420 size=928 callers=12 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_335420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335420ULL || rel >= 0x3357c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003357c0 size=16 callers=1 calls=0
*/
void sub_3357c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3357c0ULL || rel >= 0x3357d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003357d0 size=16 callers=3 calls=0
*/
void sub_3357d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3357d0ULL || rel >= 0x3357e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003357e0 size=16 callers=3 calls=0
*/
void sub_3357e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3357e0ULL || rel >= 0x3357f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003357f0 size=16 callers=3 calls=0
*/
void sub_3357f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3357f0ULL || rel >= 0x335800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335800 size=16 callers=2 calls=0
*/
void sub_335800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335800ULL || rel >= 0x335810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335810 size=16 callers=2 calls=0
*/
void sub_335810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335810ULL || rel >= 0x335820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335820 size=16 callers=2 calls=0
*/
void sub_335820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335820ULL || rel >= 0x335830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335830 size=16 callers=1 calls=0
*/
void sub_335830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335830ULL || rel >= 0x335840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335840 size=16 callers=1 calls=0
*/
void sub_335840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335840ULL || rel >= 0x335850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335850 size=16 callers=2 calls=0
*/
void sub_335850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335850ULL || rel >= 0x335860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335860 size=16 callers=1 calls=0
*/
void sub_335860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335860ULL || rel >= 0x335870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335870 size=16 callers=1 calls=0
*/
void sub_335870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335870ULL || rel >= 0x335880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335880 size=16 callers=1 calls=0
*/
void sub_335880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335880ULL || rel >= 0x335890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335890 size=16 callers=2 calls=0
*/
void sub_335890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335890ULL || rel >= 0x3358a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003358a0 size=16 callers=6 calls=0
*/
void sub_3358a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3358a0ULL || rel >= 0x3358b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003358b0 size=80 callers=1 calls=1
   calls: sub_334a10
*/
void sub_3358b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3358b0ULL || rel >= 0x335900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335900 size=64 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_335900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335900ULL || rel >= 0x335940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335940 size=288 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_335940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335940ULL || rel >= 0x335a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335a60 size=480 callers=1 calls=4
   calls: sub_3047c0, sub_335c40, sub_335df0, sub_335f00
*/
void sub_335a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335a60ULL || rel >= 0x335c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335c40 size=432 callers=1 calls=2
   calls: sub_331150, sub_38fcb0
*/
void sub_335c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335c40ULL || rel >= 0x335df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335df0 size=272 callers=1 calls=3
   calls: sub_3047c0, sub_341ca0, sub_38fcb0
*/
void sub_335df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335df0ULL || rel >= 0x335f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335f00 size=272 callers=1 calls=3
   calls: sub_3047c0, sub_341ca0, sub_38fcb0
*/
void sub_335f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335f00ULL || rel >= 0x336010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336010 size=240 callers=0 calls=3
   calls: sub_334a30, sub_336100, sub_336510
*/
void sub_336010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336010ULL || rel >= 0x336100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336100 size=1040 callers=37 calls=1
   calls: sub_3368e0
*/
void sub_336100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336100ULL || rel >= 0x336510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336510 size=976 callers=2 calls=14
   calls: sub_32c0c0, sub_32ed00, sub_333a00, sub_3368e0, sub_337f70, sub_3681b0, sub_3681e0, sub_368b10, sub_378930, sub_37c2d0, sub_38aff0, sub_3995b0
   ... +2 more
*/
void sub_336510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336510ULL || rel >= 0x3368e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003368e0 size=5776 callers=2 calls=72
   calls: sub_3046a0, sub_304740, sub_3047c0, sub_32c250, sub_32ee80, sub_331150, sub_3351b0, sub_3352c0, sub_3380e0, sub_338560, sub_338fd0, sub_339240
   ... +60 more
*/
void sub_3368e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3368e0ULL || rel >= 0x337f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337f70 size=368 callers=3 calls=4
   calls: sub_3047c0, sub_341ca0, sub_38fcb0, sub_396310
*/
void sub_337f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337f70ULL || rel >= 0x3380e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003380e0 size=496 callers=2 calls=3
   calls: sub_3045e0, sub_331150, sub_3382d0
*/
void sub_3380e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3380e0ULL || rel >= 0x3382d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003382d0 size=656 callers=7 calls=6
   calls: sub_3045e0, sub_33e3f0, sub_341ca0, sub_38fc20, sub_38fcb0, sub_396310
*/
void sub_3382d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3382d0ULL || rel >= 0x338560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338560 size=464 callers=2 calls=6
   calls: sub_338560, sub_338730, sub_338840, sub_338c90, sub_338e50, sub_33e810
*/
void sub_338560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338560ULL || rel >= 0x338730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338730 size=272 callers=1 calls=4
   calls: sub_339930, sub_339cd0, sub_33a0e0, sub_33a340
*/
void sub_338730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338730ULL || rel >= 0x338840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338840 size=1104 callers=1 calls=3
   calls: sub_3047c0, sub_341ca0, sub_38fcb0
*/
void sub_338840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338840ULL || rel >= 0x338c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338c90 size=448 callers=1 calls=1
   calls: sub_33a710
*/
void sub_338c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338c90ULL || rel >= 0x338e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338e50 size=384 callers=1 calls=1
   calls: sub_33aaf0
*/
void sub_338e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338e50ULL || rel >= 0x338fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338fd0 size=624 callers=3 calls=3
   calls: sub_338fd0, sub_33e810, sub_3c26f0
*/
void sub_338fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338fd0ULL || rel >= 0x339240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339240 size=656 callers=3 calls=3
   calls: sub_339240, sub_33e810, sub_3c27c0
*/
void sub_339240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339240ULL || rel >= 0x3394d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003394d0 size=544 callers=1 calls=6
   calls: sub_3047c0, sub_331150, sub_3351b0, sub_37f560, sub_380dd0, sub_38e5c0
*/
void sub_3394d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3394d0ULL || rel >= 0x3396f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003396f0 size=576 callers=3 calls=3
   calls: sub_3047c0, sub_341ca0, sub_38fcb0
*/
void sub_3396f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3396f0ULL || rel >= 0x339930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339930 size=928 callers=7 calls=4
   calls: sub_3047c0, sub_33e810, sub_341ca0, sub_38fcb0
*/
void sub_339930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339930ULL || rel >= 0x339cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339cd0 size=1040 callers=2 calls=2
   calls: sub_33a710, sub_33e810
*/
void sub_339cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339cd0ULL || rel >= 0x33a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a0e0 size=608 callers=2 calls=2
   calls: sub_33aaf0, sub_33e810
*/
void sub_33a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a0e0ULL || rel >= 0x33a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a340 size=976 callers=2 calls=5
   calls: sub_3047c0, sub_33e810, sub_341ca0, sub_341d60, sub_38fcb0
*/
void sub_33a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a340ULL || rel >= 0x33a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a710 size=400 callers=9 calls=4
   calls: sub_3045e0, sub_3047c0, sub_341ca0, sub_38fcb0
*/
void sub_33a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a710ULL || rel >= 0x33a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a8a0 size=320 callers=1 calls=2
   calls: sub_33a710, sub_33e810
*/
void sub_33a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a8a0ULL || rel >= 0x33a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a9e0 size=272 callers=1 calls=1
   calls: sub_33a710
*/
void sub_33a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a9e0ULL || rel >= 0x33aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aaf0 size=400 callers=9 calls=4
   calls: sub_3045e0, sub_3047c0, sub_341ca0, sub_38fcb0
*/
void sub_33aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aaf0ULL || rel >= 0x33ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ac80 size=912 callers=2 calls=4
   calls: sub_3047c0, sub_341ca0, sub_341d60, sub_38fcb0
*/
void sub_33ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ac80ULL || rel >= 0x33b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b010 size=896 callers=1 calls=2
   calls: sub_33a710, sub_33b390
*/
void sub_33b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b010ULL || rel >= 0x33b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b390 size=384 callers=17 calls=1
   calls: sub_33e810
*/
void sub_33b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b390ULL || rel >= 0x33b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b510 size=1280 callers=1 calls=4
   calls: sub_3047c0, sub_33b390, sub_341ca0, sub_38fcb0
*/
void sub_33b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b510ULL || rel >= 0x33ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ba10 size=368 callers=0 calls=2
   calls: sub_33e810, sub_341d10
*/
void sub_33ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ba10ULL || rel >= 0x33bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033bb80 size=320 callers=1 calls=3
   calls: sub_33aaf0, sub_33e810, sub_341d10
*/
void sub_33bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33bb80ULL || rel >= 0x33bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033bcc0 size=192 callers=1 calls=1
   calls: sub_33aaf0
*/
void sub_33bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33bcc0ULL || rel >= 0x33bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033bd80 size=656 callers=1 calls=2
   calls: sub_33aaf0, sub_33b390
*/
void sub_33bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33bd80ULL || rel >= 0x33c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c010 size=352 callers=0 calls=2
   calls: sub_33b390, sub_341d10
*/
void sub_33c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c010ULL || rel >= 0x33c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c170 size=448 callers=1 calls=4
   calls: sub_3047c0, sub_33e810, sub_341ca0, sub_38fcb0
*/
void sub_33c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c170ULL || rel >= 0x33c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c330 size=480 callers=1 calls=4
   calls: sub_3047c0, sub_33e810, sub_341ca0, sub_38fcb0
*/
void sub_33c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c330ULL || rel >= 0x33c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c510 size=128 callers=1 calls=1
   calls: sub_341ce0
*/
void sub_33c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c510ULL || rel >= 0x33c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c590 size=288 callers=1 calls=5
   calls: AK_EventManager, sub_32ee80, sub_334a30, sub_336100, sub_3689d0
*/
void sub_33c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c590ULL || rel >= 0x33c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c6b0 size=32 callers=1 calls=0
*/
void sub_33c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c6b0ULL || rel >= 0x33c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c6d0 size=64 callers=5 calls=0
*/
void sub_33c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c6d0ULL || rel >= 0x33c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c710 size=160 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_33c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c710ULL || rel >= 0x33c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c7b0 size=144 callers=0 calls=2
   calls: sub_3047c0, sub_331150
*/
void sub_33c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c7b0ULL || rel >= 0x33c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c840 size=176 callers=0 calls=1
   calls: sub_33cb20
*/
void sub_33c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c840ULL || rel >= 0x33c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c8f0 size=560 callers=0 calls=3
   calls: sub_3047c0, sub_341ca0, sub_38fcb0
*/
void sub_33c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c8f0ULL || rel >= 0x33cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cb20 size=288 callers=3 calls=1
   calls: sub_33a710
*/
void sub_33cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cb20ULL || rel >= 0x33cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cc40 size=288 callers=1 calls=2
   calls: sub_334a30, sub_336100
*/
void sub_33cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cc40ULL || rel >= 0x33cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cd60 size=96 callers=1 calls=1
   calls: sub_336100
*/
void sub_33cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cd60ULL || rel >= 0x33cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cdc0 size=16 callers=0 calls=0
*/
void sub_33cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cdc0ULL || rel >= 0x33cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cdd0 size=48 callers=0 calls=1
   calls: sub_33cfe0
*/
void sub_33cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cdd0ULL || rel >= 0x33ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ce00 size=112 callers=2 calls=3
   calls: sub_3045e0, sub_33cfb0, sub_33dac0
*/
void sub_33ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ce00ULL || rel >= 0x33ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ce70 size=240 callers=0 calls=5
   calls: sub_339930, sub_33b510, sub_33d080, sub_33d150, sub_33e810
*/
void sub_33ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ce70ULL || rel >= 0x33cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cf60 size=48 callers=0 calls=0
*/
void sub_33cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cf60ULL || rel >= 0x33cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cf90 size=32 callers=0 calls=0
*/
void sub_33cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cf90ULL || rel >= 0x33cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cfb0 size=48 callers=5 calls=1
   calls: sub_33d2f0
*/
void sub_33cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cfb0ULL || rel >= 0x33cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cfe0 size=16 callers=5 calls=0
*/
void sub_33cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cfe0ULL || rel >= 0x33cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cff0 size=16 callers=0 calls=0
*/
void sub_33cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cff0ULL || rel >= 0x33d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d000 size=128 callers=0 calls=0
*/
void sub_33d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d000ULL || rel >= 0x33d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d080 size=208 callers=4 calls=2
   calls: sub_33e2d0, sub_33e810
*/
void sub_33d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d080ULL || rel >= 0x33d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d150 size=400 callers=3 calls=3
   calls: sub_33e2d0, sub_352440, sub_35d2c0
*/
void sub_33d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d150ULL || rel >= 0x33d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d2e0 size=16 callers=0 calls=0
*/
void sub_33d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d2e0ULL || rel >= 0x33d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d2f0 size=64 callers=4 calls=1
   calls: sub_33d850
*/
void sub_33d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d2f0ULL || rel >= 0x33d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d330 size=96 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_33d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d330ULL || rel >= 0x33d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d390 size=16 callers=0 calls=0
*/
void sub_33d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d390ULL || rel >= 0x33d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d3a0 size=400 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_33d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d3a0ULL || rel >= 0x33d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d530 size=240 callers=0 calls=0
*/
void sub_33d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d530ULL || rel >= 0x33d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d620 size=16 callers=0 calls=0
*/
void sub_33d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d620ULL || rel >= 0x33d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d630 size=544 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_33d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d630ULL || rel >= 0x33d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d850 size=80 callers=10 calls=1
   calls: sub_363510
*/
void sub_33d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d850ULL || rel >= 0x33d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d8a0 size=112 callers=8 calls=1
   calls: sub_3047c0
*/
void sub_33d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d8a0ULL || rel >= 0x33d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d910 size=16 callers=0 calls=0
*/
void sub_33d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d910ULL || rel >= 0x33d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d920 size=416 callers=1 calls=17
   calls: sub_33ce00, sub_33eb40, sub_33f430, sub_33f540, sub_33f870, sub_33fa20, sub_33fc30, sub_33fe40, sub_33ffc0, sub_340350, sub_340480, sub_3405d0
   ... +5 more
*/
void sub_33d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d920ULL || rel >= 0x33dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033dac0 size=208 callers=18 calls=1
   calls: sub_335420
*/
void sub_33dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33dac0ULL || rel >= 0x33db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033db90 size=96 callers=0 calls=0
*/
void sub_33db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33db90ULL || rel >= 0x33dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033dbf0 size=272 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_33dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33dbf0ULL || rel >= 0x33dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033dd00 size=32 callers=0 calls=0
*/
void sub_33dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33dd00ULL || rel >= 0x33dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033dd20 size=736 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_33dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33dd20ULL || rel >= 0x33e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e000 size=720 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_33e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e000ULL || rel >= 0x33e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e2d0 size=288 callers=17 calls=0
*/
void sub_33e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e2d0ULL || rel >= 0x33e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e3f0 size=288 callers=1 calls=0
*/
void sub_33e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e3f0ULL || rel >= 0x33e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e510 size=736 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_33e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e510ULL || rel >= 0x33e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e7f0 size=16 callers=0 calls=0
*/
void sub_33e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e7f0ULL || rel >= 0x33e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e800 size=16 callers=0 calls=0
*/
void sub_33e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e800ULL || rel >= 0x33e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e810 size=32 callers=46 calls=0
*/
void sub_33e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e810ULL || rel >= 0x33e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e830 size=16 callers=4 calls=0
*/
void sub_33e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e830ULL || rel >= 0x33e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e840 size=16 callers=2 calls=0
*/
void sub_33e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e840ULL || rel >= 0x33e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e850 size=16 callers=0 calls=0
*/
void sub_33e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e850ULL || rel >= 0x33e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e860 size=48 callers=0 calls=1
   calls: sub_33ebe0
*/
void sub_33e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e860ULL || rel >= 0x33e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e890 size=80 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_33e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e890ULL || rel >= 0x33e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e8e0 size=96 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_33e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e8e0ULL || rel >= 0x33e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e940 size=80 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_33e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e940ULL || rel >= 0x33e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e990 size=96 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_33e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e990ULL || rel >= 0x33e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e9f0 size=160 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_33e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e9f0ULL || rel >= 0x33ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ea90 size=176 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_33ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ea90ULL || rel >= 0x33eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033eb40 size=112 callers=1 calls=3
   calls: sub_3045e0, sub_33dac0, sub_33ebb0
*/
void sub_33eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33eb40ULL || rel >= 0x33ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ebb0 size=48 callers=3 calls=1
   calls: sub_33d2f0
*/
void sub_33ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ebb0ULL || rel >= 0x33ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ebe0 size=16 callers=3 calls=0
*/
void sub_33ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ebe0ULL || rel >= 0x33ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ebf0 size=16 callers=0 calls=0
*/
void sub_33ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ebf0ULL || rel >= 0x33ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ec00 size=992 callers=0 calls=2
   calls: sub_3352a0, sub_33e810
*/
void sub_33ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ec00ULL || rel >= 0x33efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033efe0 size=128 callers=0 calls=0
*/
void sub_33efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33efe0ULL || rel >= 0x33f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f060 size=48 callers=0 calls=0
*/
void sub_33f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f060ULL || rel >= 0x33f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f090 size=64 callers=1 calls=1
   calls: sub_33d850
*/
void sub_33f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f090ULL || rel >= 0x33f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f0d0 size=16 callers=0 calls=0
*/
void sub_33f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f0d0ULL || rel >= 0x33f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f0e0 size=48 callers=0 calls=1
   calls: sub_33d8a0
*/
void sub_33f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f0e0ULL || rel >= 0x33f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f110 size=800 callers=0 calls=8
   calls: sub_3047c0, sub_331150, sub_33e2d0, sub_33e810, sub_33e840, sub_37f560, sub_380dd0, sub_38e5c0
*/
void sub_33f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f110ULL || rel >= 0x33f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f430 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_33d850, sub_33dac0
*/
void sub_33f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f430ULL || rel >= 0x33f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f4b0 size=16 callers=0 calls=0
*/
void sub_33f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f4b0ULL || rel >= 0x33f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f4c0 size=64 callers=0 calls=0
*/
void sub_33f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f4c0ULL || rel >= 0x33f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f500 size=16 callers=0 calls=0
*/
void sub_33f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f500ULL || rel >= 0x33f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f510 size=48 callers=0 calls=1
   calls: sub_33d330
*/
void sub_33f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f510ULL || rel >= 0x33f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f540 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_33d2f0, sub_33dac0
*/
void sub_33f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f540ULL || rel >= 0x33f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f5c0 size=112 callers=0 calls=0
*/
void sub_33f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f5c0ULL || rel >= 0x33f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f630 size=576 callers=0 calls=2
   calls: sub_33e810, sub_352440
*/
void sub_33f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f630ULL || rel >= 0x33f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f870 size=112 callers=1 calls=3
   calls: sub_3045e0, sub_33d850, sub_33dac0
*/
void sub_33f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f870ULL || rel >= 0x33f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f8e0 size=16 callers=0 calls=0
*/
void sub_33f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f8e0ULL || rel >= 0x33f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f8f0 size=48 callers=0 calls=1
   calls: sub_33d8a0
*/
void sub_33f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f8f0ULL || rel >= 0x33f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f920 size=192 callers=0 calls=2
   calls: sub_33a340, sub_33e810
*/
void sub_33f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f920ULL || rel >= 0x33f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f9e0 size=16 callers=0 calls=0
*/
void sub_33f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f9e0ULL || rel >= 0x33f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f9f0 size=48 callers=0 calls=1
   calls: sub_33cfe0
*/
void sub_33f9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f9f0ULL || rel >= 0x33fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fa20 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_33cfb0, sub_33dac0
*/
void sub_33fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fa20ULL || rel >= 0x33faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033faa0 size=240 callers=0 calls=5
   calls: sub_339cd0, sub_33b010, sub_33d080, sub_33d150, sub_33e810
*/
void sub_33faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33faa0ULL || rel >= 0x33fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fb90 size=64 callers=0 calls=0
*/
void sub_33fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fb90ULL || rel >= 0x33fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fbd0 size=32 callers=0 calls=0
*/
void sub_33fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fbd0ULL || rel >= 0x33fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fbf0 size=16 callers=0 calls=0
*/
void sub_33fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fbf0ULL || rel >= 0x33fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fc00 size=48 callers=0 calls=1
   calls: sub_33cfe0
*/
void sub_33fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fc00ULL || rel >= 0x33fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fc30 size=112 callers=1 calls=3
   calls: sub_3045e0, sub_33cfb0, sub_33dac0
*/
void sub_33fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fc30ULL || rel >= 0x33fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fca0 size=240 callers=0 calls=5
   calls: sub_33a0e0, sub_33bd80, sub_33d080, sub_33d150, sub_33e810
*/
void sub_33fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fca0ULL || rel >= 0x33fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fd90 size=64 callers=0 calls=0
*/
void sub_33fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fd90ULL || rel >= 0x33fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fdd0 size=48 callers=0 calls=0
*/
void sub_33fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fdd0ULL || rel >= 0x33fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fe00 size=16 callers=0 calls=0
*/
void sub_33fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fe00ULL || rel >= 0x33fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fe10 size=48 callers=0 calls=1
   calls: sub_33cfe0
*/
void sub_33fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fe10ULL || rel >= 0x33fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fe40 size=112 callers=1 calls=3
   calls: sub_3045e0, sub_33cfb0, sub_33dac0
*/
void sub_33fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fe40ULL || rel >= 0x33feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033feb0 size=144 callers=0 calls=2
   calls: sub_33d080, sub_33e810
*/
void sub_33feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33feb0ULL || rel >= 0x33ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ff40 size=16 callers=0 calls=0
*/
void sub_33ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ff40ULL || rel >= 0x33ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ff50 size=16 callers=0 calls=0
*/
void sub_33ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ff50ULL || rel >= 0x33ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ff60 size=48 callers=0 calls=1
   calls: sub_33d8a0
*/
void sub_33ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ff60ULL || rel >= 0x33ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ff90 size=48 callers=0 calls=1
   calls: sub_3b5a80
*/
void sub_33ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ff90ULL || rel >= 0x33ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ffc0 size=112 callers=1 calls=3
   calls: sub_3045e0, sub_33d850, sub_33dac0
*/
void sub_33ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ffc0ULL || rel >= 0x340030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340030 size=16 callers=0 calls=0
*/
void sub_340030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340030ULL || rel >= 0x340040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340040 size=48 callers=0 calls=1
   calls: sub_33d330
*/
void sub_340040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340040ULL || rel >= 0x340070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340070 size=736 callers=0 calls=4
   calls: sub_3352a0, sub_33e810, sub_383850, sub_383a50
*/
void sub_340070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340070ULL || rel >= 0x340350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340350 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_33d2f0, sub_33dac0
*/
void sub_340350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340350ULL || rel >= 0x3403d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003403d0 size=48 callers=0 calls=0
*/
void sub_3403d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3403d0ULL || rel >= 0x340400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340400 size=16 callers=0 calls=0
*/
void sub_340400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340400ULL || rel >= 0x340410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340410 size=48 callers=0 calls=1
   calls: sub_33d8a0
*/
void sub_340410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340410ULL || rel >= 0x340440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340440 size=64 callers=0 calls=1
   calls: sub_3b4c40
*/
void sub_340440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340440ULL || rel >= 0x340480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340480 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_33d850, sub_33dac0
*/
void sub_340480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340480ULL || rel >= 0x340500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340500 size=48 callers=0 calls=0
*/
void sub_340500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340500ULL || rel >= 0x340530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340530 size=16 callers=0 calls=0
*/
void sub_340530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340530ULL || rel >= 0x340540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340540 size=48 callers=0 calls=1
   calls: sub_33d8a0
*/
void sub_340540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340540ULL || rel >= 0x340570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340570 size=96 callers=0 calls=2
   calls: sub_33e810, sub_3b33b0
*/
void sub_340570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340570ULL || rel >= 0x3405d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003405d0 size=112 callers=1 calls=3
   calls: sub_3045e0, sub_33d850, sub_33dac0
*/
void sub_3405d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3405d0ULL || rel >= 0x340640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340640 size=16 callers=0 calls=0
*/
void sub_340640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340640ULL || rel >= 0x340650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340650 size=48 callers=0 calls=1
   calls: sub_33d8a0
*/
void sub_340650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340650ULL || rel >= 0x340680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340680 size=208 callers=0 calls=1
   calls: sub_3380e0
*/
void sub_340680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340680ULL || rel >= 0x340750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340750 size=112 callers=1 calls=3
   calls: sub_3045e0, sub_33d850, sub_33dac0
*/
void sub_340750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340750ULL || rel >= 0x3407c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003407c0 size=16 callers=0 calls=0
*/
void sub_3407c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3407c0ULL || rel >= 0x3407d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003407d0 size=16 callers=0 calls=0
*/
void sub_3407d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3407d0ULL || rel >= 0x3407e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003407e0 size=48 callers=0 calls=1
   calls: sub_33ebe0
*/
void sub_3407e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3407e0ULL || rel >= 0x340810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340810 size=224 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_340810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340810ULL || rel >= 0x3408f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003408f0 size=240 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_3408f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3408f0ULL || rel >= 0x3409e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003409e0 size=96 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_3409e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3409e0ULL || rel >= 0x340a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340a40 size=112 callers=0 calls=1
   calls: sub_33e2d0
*/
void sub_340a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340a40ULL || rel >= 0x340ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340ab0 size=96 callers=0 calls=0
*/
void sub_340ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340ab0ULL || rel >= 0x340b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340b10 size=96 callers=0 calls=0
*/
void sub_340b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340b10ULL || rel >= 0x340b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340b70 size=144 callers=5 calls=3
   calls: sub_3045e0, sub_33dac0, sub_33ebb0
*/
void sub_340b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340b70ULL || rel >= 0x340c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340c00 size=80 callers=0 calls=0
*/
void sub_340c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340c00ULL || rel >= 0x340c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340c50 size=16 callers=0 calls=0
*/
void sub_340c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340c50ULL || rel >= 0x340c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340c60 size=48 callers=0 calls=1
   calls: sub_33d8a0
*/
void sub_340c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340c60ULL || rel >= 0x340c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340c90 size=112 callers=0 calls=4
   calls: sub_3bb7d0, sub_3bc190, sub_3bc350, sub_3bc370
*/
void sub_340c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340c90ULL || rel >= 0x340d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340d00 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_33d850, sub_33dac0
*/
void sub_340d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340d00ULL || rel >= 0x340d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340d80 size=48 callers=0 calls=0
*/
void sub_340d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340d80ULL || rel >= 0x340db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340db0 size=16 callers=0 calls=0
*/
void sub_340db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340db0ULL || rel >= 0x340dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340dc0 size=48 callers=0 calls=1
   calls: sub_33cfe0
*/
void sub_340dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340dc0ULL || rel >= 0x340df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340df0 size=112 callers=1 calls=3
   calls: sub_3045e0, sub_33cfb0, sub_33dac0
*/
void sub_340df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340df0ULL || rel >= 0x340e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340e60 size=160 callers=0 calls=2
   calls: sub_33e810, sub_393480
*/
void sub_340e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340e60ULL || rel >= 0x340f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340f00 size=16 callers=0 calls=0
*/
void sub_340f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340f00ULL || rel >= 0x340f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340f10 size=16 callers=0 calls=0
*/
void sub_340f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340f10ULL || rel >= 0x340f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340f20 size=48 callers=0 calls=1
   calls: sub_33ebe0
*/
void sub_340f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340f20ULL || rel >= 0x340f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340f50 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_33dac0, sub_33ebb0
*/
void sub_340f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340f50ULL || rel >= 0x340fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340fd0 size=240 callers=0 calls=2
   calls: sub_33e2d0, sub_39b910
*/
void sub_340fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340fd0ULL || rel >= 0x3410c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003410c0 size=240 callers=0 calls=2
   calls: sub_33e2d0, sub_39b910
*/
void sub_3410c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3410c0ULL || rel >= 0x3411b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003411b0 size=128 callers=0 calls=2
   calls: sub_33e2d0, sub_39ea90
*/
void sub_3411b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3411b0ULL || rel >= 0x341230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341230 size=128 callers=0 calls=2
   calls: sub_33e2d0, sub_39ea90
*/
void sub_341230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341230ULL || rel >= 0x3412b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003412b0 size=16 callers=0 calls=0
*/
void sub_3412b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3412b0ULL || rel >= 0x3412c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003412c0 size=16 callers=0 calls=0
*/
void sub_3412c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3412c0ULL || rel >= 0x3412d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003412d0 size=96 callers=0 calls=0
*/
void sub_3412d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3412d0ULL || rel >= 0x341330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341330 size=384 callers=1 calls=5
   calls: sub_35b5d0, sub_3790e0, sub_38acc0, sub_3be1a0, sub_3c47b0
*/
void sub_341330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341330ULL || rel >= 0x3414b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003414b0 size=48 callers=0 calls=1
   calls: sub_341330
*/
void sub_3414b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3414b0ULL || rel >= 0x3414e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003414e0 size=224 callers=4 calls=4
   calls: sub_3045e0, sub_33dac0, sub_33f090, sub_35b5c0
*/
void sub_3414e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3414e0ULL || rel >= 0x3415c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003415c0 size=992 callers=0 calls=12
   calls: sub_3047c0, sub_331150, sub_33e810, sub_33e840, sub_35b5c0, sub_35b5d0, sub_3790e0, sub_37f560, sub_380dd0, sub_38acc0, sub_38c050, sub_38e5c0
*/
void sub_3415c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3415c0ULL || rel >= 0x3419a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003419a0 size=112 callers=3 calls=2
   calls: sub_3be010, sub_3be1a0
*/
void sub_3419a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3419a0ULL || rel >= 0x341a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341a10 size=112 callers=4 calls=2
   calls: sub_3be010, sub_3be1a0
*/
void sub_341a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341a10ULL || rel >= 0x341a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341a80 size=144 callers=4 calls=2
   calls: sub_3351b0, sub_38acb0
*/
void sub_341a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341a80ULL || rel >= 0x341b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341b10 size=32 callers=0 calls=0
*/
void sub_341b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341b10ULL || rel >= 0x341b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341b30 size=64 callers=4 calls=0
*/
void sub_341b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341b30ULL || rel >= 0x341b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341b70 size=16 callers=1 calls=0
*/
void sub_341b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341b70ULL || rel >= 0x341b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341b80 size=32 callers=4 calls=0
*/
void sub_341b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341b80ULL || rel >= 0x341ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341ba0 size=192 callers=5 calls=2
   calls: sub_3045e0, sub_3c4790
*/
void sub_341ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341ba0ULL || rel >= 0x341c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341c60 size=32 callers=3 calls=0
*/
void sub_341c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341c60ULL || rel >= 0x341c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341c80 size=16 callers=2 calls=0
*/
void sub_341c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341c80ULL || rel >= 0x341c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341c90 size=16 callers=1 calls=0
*/
void sub_341c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341c90ULL || rel >= 0x341ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341ca0 size=16 callers=27 calls=0
*/
void sub_341ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341ca0ULL || rel >= 0x341cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341cb0 size=16 callers=2 calls=0
*/
void sub_341cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341cb0ULL || rel >= 0x341cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341cc0 size=16 callers=1 calls=0
*/
void sub_341cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341cc0ULL || rel >= 0x341cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341cd0 size=16 callers=2 calls=0
*/
void sub_341cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341cd0ULL || rel >= 0x341ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341ce0 size=32 callers=2 calls=0
*/
void sub_341ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341ce0ULL || rel >= 0x341d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341d00 size=16 callers=1 calls=0
*/
void sub_341d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341d00ULL || rel >= 0x341d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341d10 size=80 callers=7 calls=2
   calls: sub_3bd790, sub_3be1a0
*/
void sub_341d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341d10ULL || rel >= 0x341d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341d60 size=544 callers=4 calls=6
   calls: sub_35b330, sub_35b5c0, sub_35b5d0, sub_37a260, sub_380d60, sub_392c80
*/
void sub_341d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341d60ULL || rel >= 0x341f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341f80 size=64 callers=3 calls=1
   calls: sub_3047c0
*/
void sub_341f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341f80ULL || rel >= 0x341fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341fc0 size=336 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_341fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341fc0ULL || rel >= 0x342110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342110 size=192 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_342110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342110ULL || rel >= 0x3421d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003421d0 size=432 callers=3 calls=6
   calls: sub_3045b0, sub_3047c0, sub_3048a0, sub_305660, sub_342380, sub_34d450
*/
void sub_3421d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3421d0ULL || rel >= 0x342380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342380 size=528 callers=2 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_342380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342380ULL || rel >= 0x342590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342590 size=512 callers=6 calls=6
   calls: sub_3045b0, sub_3047c0, sub_3048a0, sub_305660, sub_342790, sub_34a990
*/
void sub_342590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342590ULL || rel >= 0x342790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342790 size=400 callers=1 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_342790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342790ULL || rel >= 0x342920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342920 size=112 callers=2 calls=1
   calls: sub_34dc20
*/
void sub_342920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342920ULL || rel >= 0x342990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342990 size=144 callers=1 calls=2
   calls: sub_3047c0, sub_34d070
*/
void sub_342990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342990ULL || rel >= 0x342a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342a20 size=144 callers=0 calls=3
   calls: sub_3047c0, sub_34d070, sub_34dc40
*/
void sub_342a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342a20ULL || rel >= 0x342ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342ab0 size=64 callers=1 calls=1
   calls: sub_34a660
*/
void sub_342ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342ab0ULL || rel >= 0x342af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342af0 size=272 callers=1 calls=5
   calls: sub_3047c0, sub_342c00, sub_342d90, sub_34a7c0, sub_34dcb0
*/
void sub_342af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342af0ULL || rel >= 0x342c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342c00 size=400 callers=1 calls=4
   calls: sub_3047c0, sub_3421d0, sub_346c20, sub_346eb0
*/
void sub_342c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342c00ULL || rel >= 0x342d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342d90 size=272 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_342d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342d90ULL || rel >= 0x342ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342ea0 size=816 callers=2 calls=12
   calls: sub_3047c0, sub_342590, sub_3433d0, sub_3435d0, sub_343880, sub_343b50, sub_343d90, sub_346560, sub_3469b0, sub_346c20, sub_34a900, sub_34d450
*/
void sub_342ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342ea0ULL || rel >= 0x3431d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003431d0 size=512 callers=0 calls=5
   calls: an_older, sub_3047c0, sub_3421d0, sub_34a800, sub_34d450
*/
void sub_3431d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3431d0ULL || rel >= 0x3433d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003433d0 size=512 callers=1 calls=3
   calls: sub_34a900, sub_34a990, sub_34d450
*/
void sub_3433d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3433d0ULL || rel >= 0x3435d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003435d0 size=688 callers=1 calls=6
   calls: sub_3047c0, sub_346460, sub_346560, sub_348df0, sub_3496f0, sub_34d450
*/
void sub_3435d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3435d0ULL || rel >= 0x343880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343880 size=720 callers=1 calls=5
   calls: sub_3047c0, sub_348df0, sub_3496f0, sub_34d450, sub_3b55a0
*/
void sub_343880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343880ULL || rel >= 0x343b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343b50 size=576 callers=1 calls=2
   calls: sub_3463b0, sub_34d450
*/
void sub_343b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343b50ULL || rel >= 0x343d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343d90 size=288 callers=1 calls=2
   calls: sub_346d80, sub_34d450
*/
void sub_343d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343d90ULL || rel >= 0x343eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343eb0 size=16 callers=1 calls=0
*/
void sub_343eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343eb0ULL || rel >= 0x343ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343ec0 size=192 callers=1 calls=4
   calls: sub_34dc90, sub_34e060, sub_34e210, sub_34e350
*/
void sub_343ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343ec0ULL || rel >= 0x343f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343f80 size=1808 callers=2 calls=22
   calls: an_older_2, sub_3045e0, sub_333890, sub_344820, sub_344d50, sub_344ea0, sub_3451b0, sub_3452c0, sub_345750, sub_3459e0, sub_346000, sub_346320
   ... +10 more
   ref: Load bank failed : incompatible bank version. Bank was generated with %s version of Wwise. The Bank 
   ref: an older
   ref: a newer
*/
void an_older(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343f80ULL || rel >= 0x344690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344690 size=400 callers=1 calls=2
   calls: sub_34de90, sub_34e590
   ref: Load bank failed : incompatible bank version. Bank was generated with %s version of Wwise. The Bank 
   ref: an older
   ref: a newer
*/
void an_older_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344690ULL || rel >= 0x344820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344820 size=1328 callers=1 calls=10
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_346d80, sub_348ab0, sub_348df0, sub_34a2b0, sub_34de90, sub_34e350, sub_35fa60
*/
void sub_344820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344820ULL || rel >= 0x344d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344d50 size=336 callers=1 calls=7
   calls: sub_3045b0, sub_3045e0, sub_304840, sub_3048f0, sub_304910, sub_305450, sub_34e350
*/
void sub_344d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344d50ULL || rel >= 0x344ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344ea0 size=784 callers=1 calls=5
   calls: sub_3045e0, sub_3047c0, sub_342380, sub_349bf0, sub_34a2b0
*/
void sub_344ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344ea0ULL || rel >= 0x3451b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003451b0 size=272 callers=1 calls=5
   calls: sub_3045e0, sub_34de90, sub_34e250, sub_34e550, sub_34e590
*/
void sub_3451b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3451b0ULL || rel >= 0x3452c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003452c0 size=1168 callers=1 calls=22
   calls: sub_3045e0, sub_3047c0, sub_3352c0, sub_3470b0, sub_347230, sub_3473b0, sub_347550, sub_3476d0, sub_347840, sub_3479b0, sub_347b20, sub_347c90
   ... +10 more
*/
void sub_3452c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3452c0ULL || rel >= 0x345750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345750 size=656 callers=1 calls=5
   calls: sub_3045e0, sub_3047c0, sub_349f00, sub_34de90, sub_34e590
*/
void sub_345750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345750ULL || rel >= 0x3459e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003459e0 size=1568 callers=1 calls=14
   calls: sub_3045e0, sub_3047c0, sub_330bd0, sub_330cd0, sub_330d20, sub_34e590, sub_39e9e0, sub_39ea10, sub_39ec00, sub_3b43b0, sub_3b46d0, sub_3b4800
   ... +2 more
*/
void sub_3459e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3459e0ULL || rel >= 0x346000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346000 size=800 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_34e590, sub_35f3b0
*/
void sub_346000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346000ULL || rel >= 0x346320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346320 size=144 callers=1 calls=3
   calls: sub_332a80, sub_34e250, sub_34e550
*/
void sub_346320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346320ULL || rel >= 0x3463b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003463b0 size=176 callers=1 calls=2
   calls: sub_349ab0, sub_34d0c0
*/
void sub_3463b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3463b0ULL || rel >= 0x346460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346460 size=256 callers=2 calls=1
   calls: sub_346650
*/
void sub_346460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346460ULL || rel >= 0x346560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346560 size=240 callers=5 calls=1
   calls: sub_346b00
*/
void sub_346560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346560ULL || rel >= 0x346650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346650 size=864 callers=2 calls=9
   calls: sub_3047c0, sub_341fc0, sub_342590, sub_346650, sub_3469b0, sub_346b00, sub_34a900, sub_382d00, sub_382d80
*/
void sub_346650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346650ULL || rel >= 0x3469b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003469b0 size=336 callers=2 calls=5
   calls: an_older, sub_342590, sub_34a800, sub_34a900, sub_34a990
*/
void sub_3469b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3469b0ULL || rel >= 0x346b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346b00 size=288 callers=4 calls=4
   calls: sub_342590, sub_346b00, sub_34a900, sub_382d80
*/
void sub_346b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346b00ULL || rel >= 0x346c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346c20 size=352 callers=2 calls=1
   calls: sub_346b00
*/
void sub_346c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346c20ULL || rel >= 0x346d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346d80 size=304 callers=3 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_346d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346d80ULL || rel >= 0x346eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346eb0 size=432 callers=1 calls=2
   calls: sub_342590, sub_34a900
*/
void sub_346eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346eb0ULL || rel >= 0x347060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347060 size=48 callers=4 calls=0
*/
void sub_347060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347060ULL || rel >= 0x347090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347090 size=32 callers=4 calls=0
*/
void sub_347090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347090ULL || rel >= 0x3470b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003470b0 size=384 callers=1 calls=4
   calls: sub_33d920, sub_33e510, sub_34e250, sub_34e550
*/
void sub_3470b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3470b0ULL || rel >= 0x347230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347230 size=384 callers=1 calls=5
   calls: sub_34e250, sub_34e550, sub_35f5d0, sub_35f690, sub_35f870
*/
void sub_347230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347230ULL || rel >= 0x3473b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003473b0 size=416 callers=1 calls=5
   calls: sub_3351b0, sub_34e250, sub_34e550, sub_3a69c0, sub_3a6ea0
*/
void sub_3473b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3473b0ULL || rel >= 0x347550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347550 size=384 callers=1 calls=4
   calls: sub_34e250, sub_34e550, sub_391040, sub_391800
*/
void sub_347550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347550ULL || rel >= 0x3476d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003476d0 size=368 callers=1 calls=4
   calls: sub_34e250, sub_34e550, sub_3b7ed0, sub_3b89e0
*/
void sub_3476d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3476d0ULL || rel >= 0x347840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347840 size=368 callers=1 calls=4
   calls: sub_34e250, sub_34e550, sub_363980, sub_363ef0
*/
void sub_347840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347840ULL || rel >= 0x3479b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003479b0 size=368 callers=1 calls=4
   calls: sub_34b010, sub_34b140, sub_34e250, sub_34e550
*/
void sub_3479b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3479b0ULL || rel >= 0x347b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347b20 size=368 callers=1 calls=4
   calls: sub_34e250, sub_34e550, sub_3b1950, sub_3b1a50
*/
void sub_347b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347b20ULL || rel >= 0x347c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347c90 size=624 callers=1 calls=7
   calls: sub_3352c0, sub_33cd60, sub_34e250, sub_34e550, sub_351f10, sub_357650, sub_37d390
*/
void sub_347c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347c90ULL || rel >= 0x347f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347f00 size=384 callers=1 calls=3
   calls: sub_34d7e0, sub_34e250, sub_34e550
*/
void sub_347f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347f00ULL || rel >= 0x348080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348080 size=368 callers=1 calls=4
   calls: sub_34c610, sub_34c780, sub_34e250, sub_34e550
*/
void sub_348080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348080ULL || rel >= 0x3481f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003481f0 size=384 callers=1 calls=3
   calls: sub_34e250, sub_34e550, sub_36a820
*/
void sub_3481f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3481f0ULL || rel >= 0x348370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348370 size=384 callers=1 calls=3
   calls: sub_34e250, sub_34e550, sub_36a820
*/
void sub_348370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348370ULL || rel >= 0x3484f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003484f0 size=368 callers=1 calls=4
   calls: sub_34e250, sub_34e550, sub_35c210, sub_35c490
*/
void sub_3484f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3484f0ULL || rel >= 0x348660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348660 size=368 callers=1 calls=4
   calls: sub_34e250, sub_34e550, sub_35ff30, sub_360c20
*/
void sub_348660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348660ULL || rel >= 0x3487d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003487d0 size=368 callers=1 calls=4
   calls: sub_34e250, sub_34e550, sub_35ff30, sub_360ec0
*/
void sub_3487d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3487d0ULL || rel >= 0x348940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348940 size=368 callers=1 calls=4
   calls: sub_34e250, sub_34e550, sub_35ff30, sub_361160
*/
void sub_348940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348940ULL || rel >= 0x348ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348ab0 size=832 callers=1 calls=3
   calls: sub_3047c0, sub_3dd7e0, sub_3ddce0
*/
void sub_348ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348ab0ULL || rel >= 0x348df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348df0 size=288 callers=5 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_348df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348df0ULL || rel >= 0x348f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348f10 size=448 callers=3 calls=1
   calls: sub_304740
*/
void sub_348f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348f10ULL || rel >= 0x3490d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003490d0 size=320 callers=7 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_3490d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3490d0ULL || rel >= 0x349210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349210 size=1248 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_349210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349210ULL || rel >= 0x3496f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003496f0 size=592 callers=4 calls=6
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_343ec0, sub_346d80, sub_34a2b0
*/
void sub_3496f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3496f0ULL || rel >= 0x349940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349940 size=16 callers=0 calls=0
*/
void sub_349940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349940ULL || rel >= 0x349950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349950 size=64 callers=1 calls=1
   calls: sub_3b4040
*/
void sub_349950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349950ULL || rel >= 0x349990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349990 size=288 callers=2 calls=0
*/
void sub_349990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349990ULL || rel >= 0x349ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349ab0 size=304 callers=1 calls=3
   calls: sub_3047c0, sub_335870, sub_336100
*/
void sub_349ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349ab0ULL || rel >= 0x349be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349be0 size=16 callers=10 calls=0
*/
void sub_349be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349be0ULL || rel >= 0x349bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349bf0 size=576 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_349bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349bf0ULL || rel >= 0x349e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349e30 size=112 callers=0 calls=3
   calls: sub_3047c0, sub_342ea0, sub_34d0c0
*/
void sub_349e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349e30ULL || rel >= 0x349ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349ea0 size=16 callers=0 calls=0
*/
void sub_349ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349ea0ULL || rel >= 0x349eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349eb0 size=32 callers=0 calls=0
*/
void sub_349eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349eb0ULL || rel >= 0x349ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349ed0 size=16 callers=0 calls=0
*/
void sub_349ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349ed0ULL || rel >= 0x349ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349ee0 size=16 callers=0 calls=0
*/
void sub_349ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349ee0ULL || rel >= 0x349ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349ef0 size=16 callers=0 calls=0
*/
void sub_349ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349ef0ULL || rel >= 0x349f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349f00 size=944 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_349f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349f00ULL || rel >= 0x34a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a2b0 size=944 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_34a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a2b0ULL || rel >= 0x34a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a660 size=16 callers=1 calls=0
*/
void sub_34a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a660ULL || rel >= 0x34a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a670 size=336 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_34a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a670ULL || rel >= 0x34a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a7c0 size=64 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_34a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a7c0ULL || rel >= 0x34a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a800 size=256 callers=2 calls=1
   calls: sub_34aa50
*/
void sub_34a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a800ULL || rel >= 0x34a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a900 size=144 callers=10 calls=0
*/
void sub_34a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a900ULL || rel >= 0x34a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a990 size=192 callers=3 calls=0
*/
void sub_34a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a990ULL || rel >= 0x34aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034aa50 size=944 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_34aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34aa50ULL || rel >= 0x34ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ae00 size=80 callers=0 calls=0
*/
void sub_34ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ae00ULL || rel >= 0x34ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ae50 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_34ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ae50ULL || rel >= 0x34aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034aec0 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_34aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34aec0ULL || rel >= 0x34af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034af30 size=112 callers=0 calls=2
   calls: sub_3047c0, sub_37e0e0
*/
void sub_34af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34af30ULL || rel >= 0x34afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034afa0 size=112 callers=0 calls=2
   calls: sub_3047c0, sub_37e0e0
*/
void sub_34afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34afa0ULL || rel >= 0x34b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b010 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_37e080, sub_3820f0
*/
void sub_34b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b010ULL || rel >= 0x34b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b090 size=16 callers=0 calls=0
*/
void sub_34b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b090ULL || rel >= 0x34b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b0a0 size=144 callers=0 calls=0
*/
void sub_34b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b0a0ULL || rel >= 0x34b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

