/* subsdk0 functions 00034020..000875f0 (3 of 20). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00034020 size=64 callers=0 calls=0
*/
void sub_34020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34020ULL || rel >= 0x34060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00034060 size=80 callers=0 calls=0
*/
void sub_34060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34060ULL || rel >= 0x340b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000340b0 size=288 callers=0 calls=0
*/
void sub_340b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340b0ULL || rel >= 0x341d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000341d0 size=560 callers=0 calls=0
*/
void sub_341d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341d0ULL || rel >= 0x34400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00034400 size=1504 callers=0 calls=0
*/
void sub_34400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34400ULL || rel >= 0x349e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000349e0 size=5696 callers=0 calls=1
   calls: sub_36020
*/
void sub_349e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349e0ULL || rel >= 0x36020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00036020 size=2192 callers=3 calls=1
   calls: sub_36020
*/
void sub_36020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36020ULL || rel >= 0x368b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000368b0 size=16 callers=0 calls=0
*/
void sub_368b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368b0ULL || rel >= 0x368c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000368c0 size=80 callers=0 calls=0
*/
void sub_368c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368c0ULL || rel >= 0x36910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00036910 size=160 callers=0 calls=0
*/
void sub_36910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36910ULL || rel >= 0x369b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000369b0 size=16 callers=0 calls=0
*/
void sub_369b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369b0ULL || rel >= 0x369c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000369c0 size=16 callers=0 calls=0
*/
void sub_369c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369c0ULL || rel >= 0x369d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000369d0 size=800 callers=0 calls=1
   calls: sub_36cf0
*/
void sub_369d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369d0ULL || rel >= 0x36cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00036cf0 size=400 callers=3 calls=0
*/
void sub_36cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36cf0ULL || rel >= 0x36e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00036e80 size=384 callers=0 calls=1
   calls: sub_36cf0
*/
void sub_36e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e80ULL || rel >= 0x37000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00037000 size=160 callers=0 calls=1
   calls: sub_36cf0
*/
void sub_37000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37000ULL || rel >= 0x370a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000370a0 size=112 callers=0 calls=0
*/
void sub_370a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370a0ULL || rel >= 0x37110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00037110 size=144 callers=0 calls=0
*/
void sub_37110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37110ULL || rel >= 0x371a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000371a0 size=1584 callers=0 calls=0
*/
void sub_371a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371a0ULL || rel >= 0x377d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000377d0 size=16 callers=0 calls=0
*/
void sub_377d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377d0ULL || rel >= 0x377e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000377e0 size=688 callers=0 calls=0
   ref: %d.%d.%d
   ref: AAC Decoder Lib
*/
void d_d_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377e0ULL || rel >= 0x37a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00037a90 size=512 callers=0 calls=0
*/
void sub_37a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a90ULL || rel >= 0x37c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00037c90 size=688 callers=0 calls=0
*/
void sub_37c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c90ULL || rel >= 0x37f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00037f40 size=672 callers=0 calls=0
*/
void sub_37f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f40ULL || rel >= 0x381e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000381e0 size=992 callers=0 calls=0
*/
void sub_381e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381e0ULL || rel >= 0x385c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000385c0 size=960 callers=0 calls=0
*/
void sub_385c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385c0ULL || rel >= 0x38980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00038980 size=1504 callers=0 calls=0
*/
void sub_38980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38980ULL || rel >= 0x38f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00038f60 size=128 callers=0 calls=0
*/
void sub_38f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f60ULL || rel >= 0x38fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00038fe0 size=368 callers=0 calls=0
*/
void sub_38fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fe0ULL || rel >= 0x39150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00039150 size=32 callers=0 calls=0
*/
void sub_39150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39150ULL || rel >= 0x39170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00039170 size=576 callers=0 calls=0
*/
void sub_39170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39170ULL || rel >= 0x393b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000393b0 size=224 callers=0 calls=0
*/
void sub_393b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393b0ULL || rel >= 0x39490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00039490 size=1600 callers=0 calls=0
*/
void sub_39490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39490ULL || rel >= 0x39ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00039ad0 size=288 callers=0 calls=0
*/
void sub_39ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ad0ULL || rel >= 0x39bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00039bf0 size=1056 callers=0 calls=0
*/
void sub_39bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bf0ULL || rel >= 0x3a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003a010 size=160 callers=0 calls=0
*/
void sub_3a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a010ULL || rel >= 0x3a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003a0b0 size=144 callers=0 calls=0
*/
void sub_3a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0b0ULL || rel >= 0x3a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003a140 size=32 callers=0 calls=0
*/
void sub_3a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a140ULL || rel >= 0x3a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003a160 size=96 callers=0 calls=0
*/
void sub_3a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a160ULL || rel >= 0x3a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003a1c0 size=288 callers=0 calls=0
*/
void sub_3a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1c0ULL || rel >= 0x3a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003a2e0 size=2304 callers=0 calls=0
*/
void sub_3a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e0ULL || rel >= 0x3abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003abe0 size=16 callers=0 calls=0
*/
void sub_3abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abe0ULL || rel >= 0x3abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003abf0 size=320 callers=0 calls=0
*/
void sub_3abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abf0ULL || rel >= 0x3ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003ad30 size=32 callers=0 calls=0
*/
void sub_3ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad30ULL || rel >= 0x3ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003ad50 size=7360 callers=0 calls=1
   calls: sub_3ca10
*/
void sub_3ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad50ULL || rel >= 0x3ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003ca10 size=1168 callers=2 calls=0
*/
void sub_3ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca10ULL || rel >= 0x3cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003cea0 size=160 callers=0 calls=0
*/
void sub_3cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cea0ULL || rel >= 0x3cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003cf40 size=32 callers=0 calls=0
*/
void sub_3cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf40ULL || rel >= 0x3cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003cf60 size=1312 callers=0 calls=0
*/
void sub_3cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf60ULL || rel >= 0x3d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003d480 size=432 callers=0 calls=0
*/
void sub_3d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d480ULL || rel >= 0x3d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003d630 size=608 callers=0 calls=0
*/
void sub_3d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d630ULL || rel >= 0x3d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003d890 size=80 callers=0 calls=0
*/
void sub_3d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d890ULL || rel >= 0x3d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003d8e0 size=688 callers=0 calls=0
*/
void sub_3d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8e0ULL || rel >= 0x3db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003db90 size=1136 callers=0 calls=0
*/
void sub_3db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3db90ULL || rel >= 0x3e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003e000 size=5152 callers=0 calls=0
*/
void sub_3e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e000ULL || rel >= 0x3f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003f420 size=272 callers=0 calls=0
*/
void sub_3f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f420ULL || rel >= 0x3f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003f530 size=400 callers=0 calls=0
*/
void sub_3f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f530ULL || rel >= 0x3f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003f6c0 size=1552 callers=0 calls=0
*/
void sub_3f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6c0ULL || rel >= 0x3fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003fcd0 size=1040 callers=0 calls=0
*/
void sub_3fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcd0ULL || rel >= 0x400e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000400e0 size=784 callers=0 calls=0
*/
void sub_400e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400e0ULL || rel >= 0x403f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000403f0 size=304 callers=0 calls=0
*/
void sub_403f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403f0ULL || rel >= 0x40520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040520 size=416 callers=0 calls=0
*/
void sub_40520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40520ULL || rel >= 0x406c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000406c0 size=464 callers=0 calls=0
*/
void sub_406c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406c0ULL || rel >= 0x40890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040890 size=640 callers=0 calls=0
*/
void sub_40890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40890ULL || rel >= 0x40b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040b10 size=48 callers=0 calls=0
*/
void sub_40b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b10ULL || rel >= 0x40b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040b40 size=32 callers=0 calls=0
*/
void sub_40b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b40ULL || rel >= 0x40b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040b60 size=16 callers=0 calls=0
*/
void sub_40b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b60ULL || rel >= 0x40b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040b70 size=16 callers=0 calls=0
*/
void sub_40b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b70ULL || rel >= 0x40b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040b80 size=160 callers=0 calls=0
*/
void sub_40b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b80ULL || rel >= 0x40c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040c20 size=448 callers=0 calls=0
*/
void sub_40c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c20ULL || rel >= 0x40de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040de0 size=192 callers=0 calls=0
*/
void sub_40de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40de0ULL || rel >= 0x40ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040ea0 size=272 callers=0 calls=0
*/
void sub_40ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ea0ULL || rel >= 0x40fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040fb0 size=288 callers=0 calls=0
*/
void sub_40fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fb0ULL || rel >= 0x410d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000410d0 size=48 callers=0 calls=0
*/
void sub_410d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410d0ULL || rel >= 0x41100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041100 size=48 callers=0 calls=0
*/
void sub_41100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41100ULL || rel >= 0x41130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041130 size=16 callers=0 calls=0
*/
void sub_41130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41130ULL || rel >= 0x41140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041140 size=16 callers=0 calls=0
*/
void sub_41140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41140ULL || rel >= 0x41150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041150 size=208 callers=0 calls=0
*/
void sub_41150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41150ULL || rel >= 0x41220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041220 size=192 callers=0 calls=0
*/
void sub_41220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41220ULL || rel >= 0x412e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000412e0 size=624 callers=0 calls=0
*/
void sub_412e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412e0ULL || rel >= 0x41550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041550 size=192 callers=0 calls=0
*/
void sub_41550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41550ULL || rel >= 0x41610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041610 size=1536 callers=0 calls=0
   ref: %d.%d.%d
   ref: FDK Tools
*/
void d_d_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41610ULL || rel >= 0x41c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041c10 size=128 callers=0 calls=0
*/
void sub_41c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c10ULL || rel >= 0x41c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041c90 size=32 callers=0 calls=0
*/
void sub_41c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c90ULL || rel >= 0x41cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041cb0 size=192 callers=0 calls=0
*/
void sub_41cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41cb0ULL || rel >= 0x41d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041d70 size=1248 callers=0 calls=0
*/
void sub_41d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d70ULL || rel >= 0x42250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042250 size=32 callers=0 calls=0
*/
void sub_42250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42250ULL || rel >= 0x42270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042270 size=32 callers=0 calls=0
*/
void sub_42270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42270ULL || rel >= 0x42290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042290 size=592 callers=0 calls=0
*/
void sub_42290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42290ULL || rel >= 0x424e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000424e0 size=2096 callers=0 calls=0
*/
void sub_424e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424e0ULL || rel >= 0x42d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042d10 size=3552 callers=0 calls=0
*/
void sub_42d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d10ULL || rel >= 0x43af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043af0 size=32 callers=0 calls=0
*/
void sub_43af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43af0ULL || rel >= 0x43b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043b10 size=48 callers=0 calls=0
*/
void sub_43b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b10ULL || rel >= 0x43b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043b40 size=416 callers=0 calls=0
*/
void sub_43b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b40ULL || rel >= 0x43ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043ce0 size=144 callers=0 calls=0
*/
void sub_43ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ce0ULL || rel >= 0x43d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043d70 size=272 callers=0 calls=0
*/
void sub_43d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d70ULL || rel >= 0x43e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043e80 size=496 callers=0 calls=0
*/
void sub_43e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e80ULL || rel >= 0x44070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044070 size=256 callers=0 calls=0
*/
void sub_44070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44070ULL || rel >= 0x44170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044170 size=208 callers=0 calls=0
*/
void sub_44170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44170ULL || rel >= 0x44240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044240 size=208 callers=0 calls=0
*/
void sub_44240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44240ULL || rel >= 0x44310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044310 size=240 callers=0 calls=0
*/
void sub_44310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44310ULL || rel >= 0x44400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044400 size=432 callers=0 calls=0
*/
void sub_44400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44400ULL || rel >= 0x445b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000445b0 size=880 callers=0 calls=0
*/
void sub_445b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445b0ULL || rel >= 0x44920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044920 size=752 callers=0 calls=0
*/
void sub_44920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44920ULL || rel >= 0x44c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044c10 size=800 callers=0 calls=0
*/
void sub_44c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44c10ULL || rel >= 0x44f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044f30 size=832 callers=0 calls=0
*/
void sub_44f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f30ULL || rel >= 0x45270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00045270 size=832 callers=0 calls=0
*/
void sub_45270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45270ULL || rel >= 0x455b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000455b0 size=5264 callers=0 calls=1
   calls: sub_48210
*/
void sub_455b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455b0ULL || rel >= 0x46a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046a40 size=4672 callers=0 calls=0
*/
void sub_46a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46a40ULL || rel >= 0x47c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00047c80 size=1424 callers=0 calls=0
*/
void sub_47c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c80ULL || rel >= 0x48210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048210 size=1824 callers=4 calls=0
*/
void sub_48210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48210ULL || rel >= 0x48930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048930 size=16 callers=0 calls=0
*/
void sub_48930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48930ULL || rel >= 0x48940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048940 size=1728 callers=0 calls=0
*/
void sub_48940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48940ULL || rel >= 0x49000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049000 size=1808 callers=0 calls=0
*/
void sub_49000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49000ULL || rel >= 0x49710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049710 size=80 callers=0 calls=0
*/
void sub_49710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49710ULL || rel >= 0x49760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049760 size=80 callers=0 calls=0
*/
void sub_49760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49760ULL || rel >= 0x497b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000497b0 size=160 callers=0 calls=0
*/
void sub_497b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497b0ULL || rel >= 0x49850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049850 size=48 callers=0 calls=0
*/
void sub_49850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49850ULL || rel >= 0x49880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049880 size=160 callers=0 calls=0
*/
void sub_49880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49880ULL || rel >= 0x49920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049920 size=16 callers=0 calls=0
*/
void sub_49920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49920ULL || rel >= 0x49930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049930 size=48 callers=0 calls=0
*/
void sub_49930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49930ULL || rel >= 0x49960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049960 size=16 callers=0 calls=0
*/
void sub_49960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49960ULL || rel >= 0x49970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049970 size=160 callers=0 calls=0
*/
void sub_49970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49970ULL || rel >= 0x49a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049a10 size=176 callers=0 calls=0
*/
void sub_49a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a10ULL || rel >= 0x49ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049ac0 size=112 callers=0 calls=0
*/
void sub_49ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ac0ULL || rel >= 0x49b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049b30 size=144 callers=0 calls=0
*/
void sub_49b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b30ULL || rel >= 0x49bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049bc0 size=528 callers=0 calls=0
*/
void sub_49bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49bc0ULL || rel >= 0x49dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049dd0 size=96 callers=0 calls=0
*/
void sub_49dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49dd0ULL || rel >= 0x49e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049e30 size=896 callers=0 calls=0
*/
void sub_49e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e30ULL || rel >= 0x4a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a1b0 size=16 callers=0 calls=0
*/
void sub_4a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1b0ULL || rel >= 0x4a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a1c0 size=448 callers=0 calls=0
*/
void sub_4a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1c0ULL || rel >= 0x4a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a380 size=352 callers=0 calls=0
*/
void sub_4a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a380ULL || rel >= 0x4a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a4e0 size=80 callers=0 calls=0
*/
void sub_4a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a4e0ULL || rel >= 0x4a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a530 size=160 callers=0 calls=0
*/
void sub_4a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a530ULL || rel >= 0x4a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a5d0 size=80 callers=0 calls=0
*/
void sub_4a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5d0ULL || rel >= 0x4a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a620 size=160 callers=0 calls=0
*/
void sub_4a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a620ULL || rel >= 0x4a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a6c0 size=352 callers=0 calls=0
*/
void sub_4a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a6c0ULL || rel >= 0x4a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a820 size=32 callers=0 calls=0
*/
void sub_4a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a820ULL || rel >= 0x4a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a840 size=144 callers=0 calls=0
*/
void sub_4a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a840ULL || rel >= 0x4a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a8d0 size=96 callers=0 calls=0
*/
void sub_4a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a8d0ULL || rel >= 0x4a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a930 size=272 callers=0 calls=0
*/
void sub_4a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a930ULL || rel >= 0x4aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004aa40 size=144 callers=0 calls=0
*/
void sub_4aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa40ULL || rel >= 0x4aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004aad0 size=2208 callers=0 calls=0
*/
void sub_4aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aad0ULL || rel >= 0x4b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004b370 size=1936 callers=0 calls=0
*/
void sub_4b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b370ULL || rel >= 0x4bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004bb00 size=192 callers=0 calls=0
*/
void sub_4bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb00ULL || rel >= 0x4bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004bbc0 size=2528 callers=0 calls=0
*/
void sub_4bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bbc0ULL || rel >= 0x4c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004c5a0 size=240 callers=0 calls=0
*/
void sub_4c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5a0ULL || rel >= 0x4c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004c690 size=80 callers=0 calls=1
   calls: sub_4c6e0
*/
void sub_4c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c690ULL || rel >= 0x4c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004c6e0 size=480 callers=2 calls=0
*/
void sub_4c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6e0ULL || rel >= 0x4c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004c8c0 size=400 callers=0 calls=1
   calls: sub_4c6e0
*/
void sub_4c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8c0ULL || rel >= 0x4ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004ca50 size=416 callers=0 calls=0
*/
void sub_4ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca50ULL || rel >= 0x4cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004cbf0 size=16 callers=0 calls=0
*/
void sub_4cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbf0ULL || rel >= 0x4cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004cc00 size=368 callers=0 calls=0
*/
void sub_4cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc00ULL || rel >= 0x4cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004cd70 size=1440 callers=0 calls=0
*/
void sub_4cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd70ULL || rel >= 0x4d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d310 size=32 callers=0 calls=0
*/
void sub_4d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d310ULL || rel >= 0x4d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d330 size=32 callers=0 calls=0
*/
void sub_4d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d330ULL || rel >= 0x4d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d350 size=32 callers=0 calls=0
*/
void sub_4d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d350ULL || rel >= 0x4d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d370 size=80 callers=0 calls=0
*/
void sub_4d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d370ULL || rel >= 0x4d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d3c0 size=2928 callers=0 calls=0
*/
void sub_4d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3c0ULL || rel >= 0x4df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004df30 size=112 callers=0 calls=0
*/
void sub_4df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df30ULL || rel >= 0x4dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004dfa0 size=16 callers=0 calls=0
*/
void sub_4dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfa0ULL || rel >= 0x4dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004dfb0 size=48 callers=0 calls=0
*/
void sub_4dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfb0ULL || rel >= 0x4dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004dfe0 size=16 callers=0 calls=0
*/
void sub_4dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfe0ULL || rel >= 0x4dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004dff0 size=4144 callers=0 calls=0
*/
void sub_4dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dff0ULL || rel >= 0x4f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f020 size=544 callers=0 calls=0
*/
void sub_4f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f020ULL || rel >= 0x4f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f240 size=960 callers=0 calls=0
*/
void sub_4f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f240ULL || rel >= 0x4f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004f600 size=4640 callers=0 calls=0
*/
void sub_4f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f600ULL || rel >= 0x50820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00050820 size=576 callers=0 calls=0
*/
void sub_50820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50820ULL || rel >= 0x50a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00050a60 size=80 callers=0 calls=0
*/
void sub_50a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a60ULL || rel >= 0x50ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00050ab0 size=5440 callers=0 calls=0
*/
void sub_50ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ab0ULL || rel >= 0x51ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051ff0 size=464 callers=0 calls=0
*/
void sub_51ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51ff0ULL || rel >= 0x521c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000521c0 size=2672 callers=0 calls=0
*/
void sub_521c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x521c0ULL || rel >= 0x52c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052c30 size=384 callers=0 calls=0
*/
void sub_52c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52c30ULL || rel >= 0x52db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052db0 size=176 callers=0 calls=0
*/
void sub_52db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52db0ULL || rel >= 0x52e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052e60 size=16 callers=0 calls=0
*/
void sub_52e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52e60ULL || rel >= 0x52e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052e70 size=16 callers=0 calls=0
*/
void sub_52e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52e70ULL || rel >= 0x52e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052e80 size=16 callers=0 calls=0
*/
void sub_52e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52e80ULL || rel >= 0x52e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052e90 size=16 callers=0 calls=0
*/
void sub_52e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52e90ULL || rel >= 0x52ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052ea0 size=16 callers=0 calls=0
*/
void sub_52ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ea0ULL || rel >= 0x52eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052eb0 size=48 callers=0 calls=0
*/
void sub_52eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52eb0ULL || rel >= 0x52ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052ee0 size=16 callers=0 calls=0
*/
void sub_52ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ee0ULL || rel >= 0x52ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052ef0 size=16 callers=0 calls=0
*/
void sub_52ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ef0ULL || rel >= 0x52f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052f00 size=48 callers=0 calls=0
*/
void sub_52f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52f00ULL || rel >= 0x52f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052f30 size=16 callers=0 calls=0
*/
void sub_52f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52f30ULL || rel >= 0x52f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052f40 size=272 callers=0 calls=0
*/
void sub_52f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52f40ULL || rel >= 0x53050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053050 size=112 callers=0 calls=0
*/
void sub_53050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53050ULL || rel >= 0x530c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000530c0 size=288 callers=0 calls=0
*/
void sub_530c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530c0ULL || rel >= 0x531e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000531e0 size=32 callers=0 calls=0
*/
void sub_531e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531e0ULL || rel >= 0x53200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053200 size=32 callers=0 calls=0
*/
void sub_53200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53200ULL || rel >= 0x53220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053220 size=32 callers=0 calls=0
*/
void sub_53220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53220ULL || rel >= 0x53240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053240 size=320 callers=0 calls=0
*/
void sub_53240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53240ULL || rel >= 0x53380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053380 size=16 callers=0 calls=0
*/
void sub_53380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53380ULL || rel >= 0x53390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053390 size=16 callers=0 calls=0
*/
void sub_53390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53390ULL || rel >= 0x533a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000533a0 size=112 callers=0 calls=0
*/
void sub_533a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533a0ULL || rel >= 0x53410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053410 size=1376 callers=0 calls=3
   calls: sub_53970, sub_54020, sub_547d0
*/
void sub_53410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53410ULL || rel >= 0x53970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053970 size=1376 callers=2 calls=0
*/
void sub_53970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53970ULL || rel >= 0x53ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053ed0 size=288 callers=0 calls=0
*/
void sub_53ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ed0ULL || rel >= 0x53ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053ff0 size=16 callers=0 calls=0
*/
void sub_53ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53ff0ULL || rel >= 0x54000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054000 size=16 callers=0 calls=0
*/
void sub_54000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54000ULL || rel >= 0x54010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054010 size=16 callers=0 calls=0
*/
void sub_54010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54010ULL || rel >= 0x54020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054020 size=688 callers=3 calls=0
*/
void sub_54020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54020ULL || rel >= 0x542d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000542d0 size=384 callers=0 calls=0
*/
void sub_542d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542d0ULL || rel >= 0x54450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054450 size=64 callers=0 calls=0
*/
void sub_54450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54450ULL || rel >= 0x54490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054490 size=640 callers=0 calls=0
   ref: %d.%d.%d
   ref: MPEG Transport
*/
void d_d_d_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54490ULL || rel >= 0x54710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054710 size=48 callers=0 calls=0
*/
void sub_54710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54710ULL || rel >= 0x54740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054740 size=48 callers=0 calls=0
*/
void sub_54740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54740ULL || rel >= 0x54770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054770 size=96 callers=0 calls=1
   calls: sub_54020
*/
void sub_54770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54770ULL || rel >= 0x547d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000547d0 size=2544 callers=2 calls=2
   calls: sub_53970, sub_54020
*/
void sub_547d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x547d0ULL || rel >= 0x551c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000551c0 size=512 callers=0 calls=0
*/
void sub_551c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x551c0ULL || rel >= 0x553c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000553c0 size=80 callers=0 calls=0
*/
void sub_553c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x553c0ULL || rel >= 0x55410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055410 size=128 callers=0 calls=0
*/
void sub_55410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55410ULL || rel >= 0x55490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055490 size=1264 callers=0 calls=0
*/
void sub_55490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55490ULL || rel >= 0x55980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055980 size=16 callers=0 calls=0
*/
void sub_55980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55980ULL || rel >= 0x55990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055990 size=48 callers=0 calls=0
*/
void sub_55990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55990ULL || rel >= 0x559c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000559c0 size=336 callers=0 calls=0
*/
void sub_559c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559c0ULL || rel >= 0x55b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055b10 size=240 callers=0 calls=0
*/
void sub_55b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b10ULL || rel >= 0x55c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055c00 size=192 callers=0 calls=0
*/
void sub_55c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c00ULL || rel >= 0x55cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055cc0 size=32 callers=0 calls=0
*/
void sub_55cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc0ULL || rel >= 0x55ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055ce0 size=176 callers=0 calls=0
*/
void sub_55ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ce0ULL || rel >= 0x55d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055d90 size=144 callers=0 calls=0
*/
void sub_55d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d90ULL || rel >= 0x55e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055e20 size=432 callers=0 calls=0
*/
void sub_55e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55e20ULL || rel >= 0x55fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055fd0 size=112 callers=0 calls=0
*/
void sub_55fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55fd0ULL || rel >= 0x56040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056040 size=3072 callers=0 calls=0
*/
void sub_56040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56040ULL || rel >= 0x56c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056c40 size=128 callers=0 calls=0
*/
void sub_56c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c40ULL || rel >= 0x56cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056cc0 size=64 callers=0 calls=0
*/
void sub_56cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56cc0ULL || rel >= 0x56d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056d00 size=7584 callers=0 calls=2
   calls: sub_58aa0, sub_58cf0
*/
void sub_56d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d00ULL || rel >= 0x58aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058aa0 size=592 callers=2 calls=0
*/
void sub_58aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58aa0ULL || rel >= 0x58cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058cf0 size=11376 callers=1 calls=2
   calls: sub_5bc40, sub_5bdc0
*/
void sub_58cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58cf0ULL || rel >= 0x5b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b960 size=64 callers=0 calls=0
*/
void sub_5b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b960ULL || rel >= 0x5b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b9a0 size=672 callers=0 calls=0
   ref: PCM Downmix Lib
   ref: %d.%d.%d
*/
void d_d_d_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b9a0ULL || rel >= 0x5bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005bc40 size=384 callers=18 calls=0
*/
void sub_5bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bc40ULL || rel >= 0x5bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005bdc0 size=832 callers=18 calls=0
*/
void sub_5bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bdc0ULL || rel >= 0x5c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c100 size=256 callers=0 calls=0
*/
void sub_5c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c100ULL || rel >= 0x5c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c200 size=1440 callers=0 calls=0
*/
void sub_5c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c200ULL || rel >= 0x5c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c7a0 size=7936 callers=0 calls=0
*/
void sub_5c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c7a0ULL || rel >= 0x5e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005e6a0 size=1552 callers=0 calls=0
*/
void sub_5e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6a0ULL || rel >= 0x5ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005ecb0 size=1632 callers=0 calls=0
*/
void sub_5ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ecb0ULL || rel >= 0x5f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005f310 size=960 callers=0 calls=0
*/
void sub_5f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f310ULL || rel >= 0x5f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005f6d0 size=448 callers=0 calls=0
*/
void sub_5f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6d0ULL || rel >= 0x5f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005f890 size=240 callers=0 calls=0
*/
void sub_5f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f890ULL || rel >= 0x5f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005f980 size=848 callers=0 calls=0
*/
void sub_5f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f980ULL || rel >= 0x5fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005fcd0 size=1344 callers=0 calls=0
*/
void sub_5fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fcd0ULL || rel >= 0x60210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060210 size=384 callers=0 calls=0
*/
void sub_60210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60210ULL || rel >= 0x60390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060390 size=1472 callers=0 calls=0
*/
void sub_60390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60390ULL || rel >= 0x60950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060950 size=64 callers=0 calls=0
*/
void sub_60950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60950ULL || rel >= 0x60990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060990 size=32 callers=0 calls=0
*/
void sub_60990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60990ULL || rel >= 0x609b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000609b0 size=16 callers=0 calls=0
*/
void sub_609b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609b0ULL || rel >= 0x609c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000609c0 size=1040 callers=0 calls=0
*/
void sub_609c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609c0ULL || rel >= 0x60dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060dd0 size=1008 callers=0 calls=2
   calls: sub_611c0, sub_616a0
*/
void sub_60dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60dd0ULL || rel >= 0x611c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000611c0 size=1248 callers=4 calls=2
   calls: sub_611c0, sub_61980
*/
void sub_611c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611c0ULL || rel >= 0x616a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000616a0 size=736 callers=2 calls=0
*/
void sub_616a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x616a0ULL || rel >= 0x61980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061980 size=1232 callers=2 calls=0
*/
void sub_61980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61980ULL || rel >= 0x61e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061e50 size=224 callers=0 calls=0
*/
void sub_61e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e50ULL || rel >= 0x61f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061f30 size=64 callers=0 calls=0
*/
void sub_61f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f30ULL || rel >= 0x61f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061f70 size=1440 callers=0 calls=0
*/
void sub_61f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f70ULL || rel >= 0x62510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062510 size=352 callers=0 calls=0
*/
void sub_62510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62510ULL || rel >= 0x62670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062670 size=896 callers=0 calls=5
   calls: sub_629f0, sub_638f0, sub_63a90, sub_63e20, sub_640f0
*/
void sub_62670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62670ULL || rel >= 0x629f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000629f0 size=3840 callers=3 calls=0
*/
void sub_629f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629f0ULL || rel >= 0x638f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000638f0 size=416 callers=3 calls=0
*/
void sub_638f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x638f0ULL || rel >= 0x63a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063a90 size=912 callers=5 calls=0
*/
void sub_63a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63a90ULL || rel >= 0x63e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063e20 size=720 callers=4 calls=0
*/
void sub_63e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e20ULL || rel >= 0x640f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000640f0 size=1072 callers=2 calls=0
*/
void sub_640f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x640f0ULL || rel >= 0x64520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064520 size=1536 callers=0 calls=5
   calls: sub_629f0, sub_638f0, sub_63a90, sub_63e20, sub_640f0
*/
void sub_64520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64520ULL || rel >= 0x64b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064b20 size=176 callers=0 calls=0
*/
void sub_64b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b20ULL || rel >= 0x64bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064bd0 size=7024 callers=0 calls=0
*/
void sub_64bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64bd0ULL || rel >= 0x66740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066740 size=112 callers=0 calls=0
*/
void sub_66740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66740ULL || rel >= 0x667b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000667b0 size=912 callers=0 calls=0
*/
void sub_667b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667b0ULL || rel >= 0x66b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066b40 size=4896 callers=0 calls=1
   calls: sub_67e60
*/
void sub_66b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b40ULL || rel >= 0x67e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067e60 size=480 callers=2 calls=0
*/
void sub_67e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67e60ULL || rel >= 0x68040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068040 size=2704 callers=0 calls=0
*/
void sub_68040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68040ULL || rel >= 0x68ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068ad0 size=256 callers=0 calls=0
*/
void sub_68ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ad0ULL || rel >= 0x68bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068bd0 size=560 callers=0 calls=0
*/
void sub_68bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68bd0ULL || rel >= 0x68e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068e00 size=1152 callers=0 calls=0
*/
void sub_68e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e00ULL || rel >= 0x69280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069280 size=48 callers=0 calls=0
*/
void sub_69280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69280ULL || rel >= 0x692b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000692b0 size=11328 callers=0 calls=0
*/
void sub_692b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x692b0ULL || rel >= 0x6bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006bef0 size=960 callers=0 calls=0
*/
void sub_6bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bef0ULL || rel >= 0x6c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006c2b0 size=1136 callers=0 calls=0
*/
void sub_6c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2b0ULL || rel >= 0x6c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006c720 size=8096 callers=0 calls=0
*/
void sub_6c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c720ULL || rel >= 0x6e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e6c0 size=144 callers=0 calls=0
*/
void sub_6e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e6c0ULL || rel >= 0x6e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e750 size=240 callers=0 calls=0
*/
void sub_6e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e750ULL || rel >= 0x6e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e840 size=2560 callers=0 calls=0
*/
void sub_6e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e840ULL || rel >= 0x6f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f240 size=288 callers=0 calls=0
*/
void sub_6f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f240ULL || rel >= 0x6f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f360 size=1168 callers=0 calls=0
*/
void sub_6f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f360ULL || rel >= 0x6f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f7f0 size=2160 callers=0 calls=1
   calls: sub_70060
*/
void sub_6f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7f0ULL || rel >= 0x70060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070060 size=576 callers=3 calls=0
*/
void sub_70060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70060ULL || rel >= 0x702a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000702a0 size=432 callers=0 calls=1
   calls: sub_70060
*/
void sub_702a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x702a0ULL || rel >= 0x70450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070450 size=80 callers=0 calls=0
*/
void sub_70450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70450ULL || rel >= 0x704a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000704a0 size=2272 callers=0 calls=1
   calls: sub_70060
*/
void sub_704a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x704a0ULL || rel >= 0x70d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070d80 size=16 callers=0 calls=0
*/
void sub_70d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d80ULL || rel >= 0x70d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070d90 size=48 callers=0 calls=0
*/
void sub_70d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d90ULL || rel >= 0x70dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070dc0 size=16 callers=0 calls=0
*/
void sub_70dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70dc0ULL || rel >= 0x70dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070dd0 size=16 callers=0 calls=0
*/
void sub_70dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70dd0ULL || rel >= 0x70de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070de0 size=48 callers=0 calls=0
*/
void sub_70de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70de0ULL || rel >= 0x70e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070e10 size=16 callers=0 calls=0
*/
void sub_70e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e10ULL || rel >= 0x70e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070e20 size=16 callers=0 calls=0
*/
void sub_70e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e20ULL || rel >= 0x70e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070e30 size=48 callers=0 calls=0
*/
void sub_70e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e30ULL || rel >= 0x70e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070e60 size=16 callers=0 calls=0
*/
void sub_70e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e60ULL || rel >= 0x70e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070e70 size=16 callers=0 calls=0
*/
void sub_70e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e70ULL || rel >= 0x70e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070e80 size=48 callers=0 calls=0
*/
void sub_70e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e80ULL || rel >= 0x70eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070eb0 size=16 callers=0 calls=0
*/
void sub_70eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70eb0ULL || rel >= 0x70ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070ec0 size=16 callers=0 calls=0
*/
void sub_70ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ec0ULL || rel >= 0x70ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070ed0 size=48 callers=0 calls=0
*/
void sub_70ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ed0ULL || rel >= 0x70f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070f00 size=16 callers=0 calls=0
*/
void sub_70f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f00ULL || rel >= 0x70f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070f10 size=16 callers=0 calls=0
*/
void sub_70f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f10ULL || rel >= 0x70f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070f20 size=48 callers=0 calls=0
*/
void sub_70f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f20ULL || rel >= 0x70f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070f50 size=16 callers=0 calls=0
*/
void sub_70f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f50ULL || rel >= 0x70f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070f60 size=16 callers=0 calls=0
*/
void sub_70f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f60ULL || rel >= 0x70f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070f70 size=48 callers=0 calls=0
*/
void sub_70f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f70ULL || rel >= 0x70fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070fa0 size=16 callers=0 calls=0
*/
void sub_70fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70fa0ULL || rel >= 0x70fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070fb0 size=16 callers=0 calls=0
*/
void sub_70fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70fb0ULL || rel >= 0x70fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070fc0 size=48 callers=0 calls=0
*/
void sub_70fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70fc0ULL || rel >= 0x70ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070ff0 size=16 callers=0 calls=0
*/
void sub_70ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ff0ULL || rel >= 0x71000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071000 size=208 callers=0 calls=0
*/
void sub_71000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71000ULL || rel >= 0x710d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000710d0 size=112 callers=0 calls=0
*/
void sub_710d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x710d0ULL || rel >= 0x71140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071140 size=2064 callers=0 calls=0
*/
void sub_71140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71140ULL || rel >= 0x71950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071950 size=240 callers=0 calls=0
*/
void sub_71950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71950ULL || rel >= 0x71a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071a40 size=5360 callers=0 calls=0
*/
void sub_71a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a40ULL || rel >= 0x72f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072f30 size=304 callers=0 calls=0
*/
void sub_72f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72f30ULL || rel >= 0x73060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073060 size=192 callers=0 calls=0
*/
void sub_73060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73060ULL || rel >= 0x73120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073120 size=736 callers=0 calls=0
*/
void sub_73120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73120ULL || rel >= 0x73400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073400 size=128 callers=0 calls=0
*/
void sub_73400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73400ULL || rel >= 0x73480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073480 size=1248 callers=0 calls=0
*/
void sub_73480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73480ULL || rel >= 0x73960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073960 size=400 callers=0 calls=0
*/
void sub_73960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73960ULL || rel >= 0x73af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073af0 size=464 callers=0 calls=0
*/
void sub_73af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73af0ULL || rel >= 0x73cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073cc0 size=1600 callers=0 calls=0
*/
void sub_73cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73cc0ULL || rel >= 0x74300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074300 size=1200 callers=0 calls=0
*/
void sub_74300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74300ULL || rel >= 0x747b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000747b0 size=2112 callers=0 calls=0
*/
void sub_747b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x747b0ULL || rel >= 0x74ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074ff0 size=1728 callers=0 calls=0
*/
void sub_74ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ff0ULL || rel >= 0x756b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000756b0 size=944 callers=0 calls=0
*/
void sub_756b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756b0ULL || rel >= 0x75a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075a60 size=640 callers=0 calls=0
   ref: %d.%d.%d
   ref: SBR Decoder
*/
void d_d_d_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a60ULL || rel >= 0x75ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075ce0 size=160 callers=0 calls=0
*/
void sub_75ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ce0ULL || rel >= 0x75d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075d80 size=2368 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\external\aac\libSYS\src\cmdl_parse
   ref: Bug: unsupported data identifier "%c"
   ref: Argument is too LONG.
   ref: Error allocating memory line %d, file %s
   ref: No command line arguments
   ref: Warning: Ignoring argument for switch '%s'. 
*/
void cmdl_parser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d80ULL || rel >= 0x766c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000766c0 size=384 callers=0 calls=0
   ref: main returned %d
*/
void main_returned_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766c0ULL || rel >= 0x76840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076840 size=96 callers=0 calls=0
   ref: 0123456789abcdef
*/
void f_0123456789abcdef(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76840ULL || rel >= 0x768a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000768a0 size=320 callers=0 calls=0
*/
void sub_768a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x768a0ULL || rel >= 0x769e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000769e0 size=80 callers=0 calls=0
*/
void sub_769e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x769e0ULL || rel >= 0x76a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076a30 size=128 callers=0 calls=0
*/
void sub_76a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76a30ULL || rel >= 0x76ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076ab0 size=48 callers=0 calls=0
*/
void sub_76ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ab0ULL || rel >= 0x76ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076ae0 size=16 callers=0 calls=0
*/
void sub_76ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ae0ULL || rel >= 0x76af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076af0 size=128 callers=0 calls=0
*/
void sub_76af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76af0ULL || rel >= 0x76b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076b70 size=128 callers=0 calls=0
*/
void sub_76b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76b70ULL || rel >= 0x76bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076bf0 size=16 callers=0 calls=0
*/
void sub_76bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76bf0ULL || rel >= 0x76c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076c00 size=16 callers=0 calls=0
*/
void sub_76c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c00ULL || rel >= 0x76c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076c10 size=16 callers=0 calls=0
*/
void sub_76c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c10ULL || rel >= 0x76c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076c20 size=16 callers=0 calls=0
*/
void sub_76c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c20ULL || rel >= 0x76c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076c30 size=16 callers=0 calls=0
*/
void sub_76c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c30ULL || rel >= 0x76c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076c40 size=16 callers=0 calls=0
*/
void sub_76c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c40ULL || rel >= 0x76c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076c50 size=16 callers=0 calls=0
*/
void sub_76c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c50ULL || rel >= 0x76c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076c60 size=80 callers=0 calls=0
*/
void sub_76c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76c60ULL || rel >= 0x76cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076cb0 size=16 callers=0 calls=0
*/
void sub_76cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cb0ULL || rel >= 0x76cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076cc0 size=16 callers=0 calls=0
*/
void sub_76cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cc0ULL || rel >= 0x76cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076cd0 size=16 callers=0 calls=0
*/
void sub_76cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76cd0ULL || rel >= 0x76ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076ce0 size=80 callers=0 calls=0
*/
void sub_76ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ce0ULL || rel >= 0x76d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076d30 size=16 callers=0 calls=0
*/
void sub_76d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d30ULL || rel >= 0x76d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076d40 size=16 callers=0 calls=0
*/
void sub_76d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d40ULL || rel >= 0x76d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076d50 size=16 callers=0 calls=0
*/
void sub_76d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d50ULL || rel >= 0x76d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076d60 size=16 callers=0 calls=0
*/
void sub_76d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d60ULL || rel >= 0x76d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076d70 size=16 callers=0 calls=0
*/
void sub_76d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d70ULL || rel >= 0x76d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076d80 size=32 callers=0 calls=0
*/
void sub_76d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76d80ULL || rel >= 0x76da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076da0 size=16 callers=0 calls=0
*/
void sub_76da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76da0ULL || rel >= 0x76db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076db0 size=16 callers=0 calls=0
*/
void sub_76db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76db0ULL || rel >= 0x76dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076dc0 size=16 callers=0 calls=0
*/
void sub_76dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76dc0ULL || rel >= 0x76dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076dd0 size=16 callers=0 calls=0
*/
void sub_76dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76dd0ULL || rel >= 0x76de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076de0 size=16 callers=0 calls=0
*/
void sub_76de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76de0ULL || rel >= 0x76df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076df0 size=16 callers=0 calls=0
*/
void sub_76df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76df0ULL || rel >= 0x76e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e00 size=32 callers=0 calls=0
*/
void sub_76e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e00ULL || rel >= 0x76e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e20 size=16 callers=0 calls=0
*/
void sub_76e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e20ULL || rel >= 0x76e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e30 size=16 callers=0 calls=0
*/
void sub_76e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e30ULL || rel >= 0x76e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e40 size=16 callers=0 calls=0
*/
void sub_76e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e40ULL || rel >= 0x76e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e50 size=16 callers=0 calls=0
*/
void sub_76e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e50ULL || rel >= 0x76e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e60 size=16 callers=0 calls=0
*/
void sub_76e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e60ULL || rel >= 0x76e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e70 size=16 callers=0 calls=0
*/
void sub_76e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e70ULL || rel >= 0x76e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e80 size=16 callers=0 calls=0
*/
void sub_76e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e80ULL || rel >= 0x76e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076e90 size=16 callers=0 calls=0
*/
void sub_76e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76e90ULL || rel >= 0x76ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076ea0 size=16 callers=0 calls=0
*/
void sub_76ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ea0ULL || rel >= 0x76eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076eb0 size=16 callers=0 calls=0
*/
void sub_76eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76eb0ULL || rel >= 0x76ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076ec0 size=16 callers=0 calls=0
*/
void sub_76ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ec0ULL || rel >= 0x76ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076ed0 size=16 callers=0 calls=0
*/
void sub_76ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ed0ULL || rel >= 0x76ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076ee0 size=32 callers=0 calls=0
*/
void sub_76ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ee0ULL || rel >= 0x76f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076f00 size=16 callers=0 calls=0
*/
void sub_76f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f00ULL || rel >= 0x76f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076f10 size=16 callers=0 calls=0
*/
void sub_76f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f10ULL || rel >= 0x76f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076f20 size=16 callers=0 calls=0
*/
void sub_76f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f20ULL || rel >= 0x76f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076f30 size=32 callers=0 calls=0
*/
void sub_76f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f30ULL || rel >= 0x76f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076f50 size=16 callers=0 calls=0
*/
void sub_76f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f50ULL || rel >= 0x76f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076f60 size=32 callers=0 calls=0
*/
void sub_76f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f60ULL || rel >= 0x76f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076f80 size=32 callers=0 calls=0
*/
void sub_76f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76f80ULL || rel >= 0x76fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076fa0 size=16 callers=0 calls=0
*/
void sub_76fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76fa0ULL || rel >= 0x76fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076fb0 size=16 callers=0 calls=0
*/
void sub_76fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76fb0ULL || rel >= 0x76fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076fc0 size=48 callers=0 calls=0
*/
void sub_76fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76fc0ULL || rel >= 0x76ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00076ff0 size=192 callers=0 calls=0
*/
void sub_76ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x76ff0ULL || rel >= 0x770b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000770b0 size=16 callers=0 calls=0
*/
void sub_770b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770b0ULL || rel >= 0x770c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000770c0 size=16 callers=0 calls=0
   ref: This program is protected by copyright law and international treaties.
*/
void This_program_is_protected_by_copyright_law_and_internati(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770c0ULL || rel >= 0x770d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000770d0 size=1184 callers=0 calls=0
   ref: WAV_InputOpen(): couldn't read format_ID
   ref: WAV_InputOpen(): couldn't read RIFF_ID
   ref: WAV_InputOpen(): couldn't read format
   ref: WAV_InputOpen(): WAVE chunk ID not found.
   ref: WAV_InputOpen(): fmt chunk format not found.
   ref: WAV_InputOpen(): Unable to allocate WAV struct.
   ref: WAV_InputOpen(): RIFF descriptor not found.
   ref: WAV_InputOpen(): Unable to open wav file. %s
*/
void WAV_InputOpen_couldn_t_read_format(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x770d0ULL || rel >= 0x77570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077570 size=640 callers=0 calls=0
   ref: WAV_InputRead(): unsupported data-compression!!
*/
void WAV_InputRead_unsupported_data_compression(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77570ULL || rel >= 0x777f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000777f0 size=64 callers=0 calls=0
*/
void sub_777f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777f0ULL || rel >= 0x77830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077830 size=448 callers=0 calls=0
   ref: WAV_OutputOpen(): error writing to output file %s
   ref: WAV_OutputOpen(): Unable to allocate WAV struct.
   ref: WAV_OutputOpen(): unable to create file %s
   ref: WAV_OutputOpen(): Invalid argument (bitsPerSample).
*/
void WAV_OutputOpen_unable_to_create_file_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77830ULL || rel >= 0x779f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000779f0 size=496 callers=0 calls=0
   ref: WAV_OutputWrite(): error: unable to write to file %d
*/
void WAV_OutputWrite_error_unable_to_write_to_file_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x779f0ULL || rel >= 0x77be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077be0 size=176 callers=0 calls=0
   ref: WAV_OutputClose(): fseek() failed.
   ref: WAV_OutputClose(): unable to close wav file
   ref: WAV_OutputClose(): unable to write header
*/
void WAV_OutputClose_fseek_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77be0ULL || rel >= 0x77c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077c90 size=160 callers=0 calls=0
*/
void sub_77c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77c90ULL || rel >= 0x77d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077d30 size=176 callers=0 calls=0
*/
void sub_77d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77d30ULL || rel >= 0x77de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077de0 size=576 callers=0 calls=0
   ref: !(mMeta->findInt32(kKeyChannelCount, &mChannels))
   ref: AACEncoder
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mChannels <= 2 && mChannels >= 1)
   ref: !(mMeta->findInt32(kKeyBitRate, &mBitRate))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AACEncoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77de0ULL || rel >= 0x78020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078020 size=560 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: AACEncoder
*/
void AACEncoder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78020ULL || rel >= 0x78250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078250 size=128 callers=0 calls=0
*/
void sub_78250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78250ULL || rel >= 0x782d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000782d0 size=144 callers=0 calls=0
*/
void sub_782d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782d0ULL || rel >= 0x78360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078360 size=160 callers=0 calls=0
*/
void sub_78360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78360ULL || rel >= 0x78400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078400 size=160 callers=0 calls=0
*/
void sub_78400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78400ULL || rel >= 0x784a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000784a0 size=16 callers=0 calls=0
*/
void sub_784a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784a0ULL || rel >= 0x784b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000784b0 size=336 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: AACEncoder
*/
void AACEncoder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784b0ULL || rel >= 0x78600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078600 size=384 callers=0 calls=0
   ref: AACEncoder
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AACEncoder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78600ULL || rel >= 0x78780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078780 size=208 callers=0 calls=0
   ref: AACEncoder
*/
void AACEncoder_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78780ULL || rel >= 0x78850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078850 size=1520 callers=0 calls=0
   ref: !(0x00000000 == mApiHandle->SetInputData(mEncoderHandle,&inputData))
   ref: AACEncoder
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(options == 0L || !options->getSeekTo(&seekTimeUs, &mode))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void AACEncoder_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78850ULL || rel >= 0x78e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078e40 size=16 callers=0 calls=0
*/
void sub_78e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e40ULL || rel >= 0x78e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078e50 size=16 callers=0 calls=0
*/
void sub_78e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e50ULL || rel >= 0x78e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078e60 size=16 callers=0 calls=0
*/
void sub_78e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e60ULL || rel >= 0x78e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078e70 size=16 callers=0 calls=0
*/
void sub_78e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e70ULL || rel >= 0x78e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078e80 size=16 callers=0 calls=0
*/
void sub_78e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e80ULL || rel >= 0x78e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00078e90 size=544 callers=0 calls=0
   ref: audio/raw
   ref: SoftAACEncoder
   ref: audio/aac
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void SoftAACEncoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e90ULL || rel >= 0x790b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000790b0 size=160 callers=0 calls=0
   ref: audio/raw
   ref: audio/aac
*/
void raw_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790b0ULL || rel >= 0x79150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079150 size=176 callers=0 calls=0
*/
void sub_79150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79150ULL || rel >= 0x79200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079200 size=432 callers=0 calls=0
*/
void sub_79200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79200ULL || rel >= 0x793b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000793b0 size=432 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: SoftAACEncoder
*/
void SoftAACEncoder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793b0ULL || rel >= 0x79560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079560 size=48 callers=0 calls=0
*/
void sub_79560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79560ULL || rel >= 0x79590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079590 size=64 callers=0 calls=0
*/
void sub_79590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79590ULL || rel >= 0x795d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000795d0 size=336 callers=0 calls=0
*/
void sub_795d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x795d0ULL || rel >= 0x79720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079720 size=464 callers=0 calls=0
   ref: audio_encoder.aac
*/
void audio_encoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79720ULL || rel >= 0x798f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000798f0 size=528 callers=0 calls=0
*/
void sub_798f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x798f0ULL || rel >= 0x79b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079b00 size=928 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: SoftAACEncoder
   ref: !(0x00000000 == mApiHandle->SetInputData(mEncoderHandle, &inputData))
*/
void SoftAACEncoder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b00ULL || rel >= 0x79ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079ea0 size=96 callers=0 calls=0
*/
void sub_79ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79ea0ULL || rel >= 0x79f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00079f00 size=368 callers=0 calls=0
*/
void sub_79f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f00ULL || rel >= 0x7a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a070 size=224 callers=0 calls=0
*/
void sub_7a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a070ULL || rel >= 0x7a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a150 size=432 callers=0 calls=0
*/
void sub_7a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a150ULL || rel >= 0x7a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a300 size=64 callers=0 calls=0
*/
void sub_7a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a300ULL || rel >= 0x7a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a340 size=1232 callers=0 calls=0
*/
void sub_7a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a340ULL || rel >= 0x7a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a810 size=16 callers=0 calls=0
*/
void sub_7a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a810ULL || rel >= 0x7a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a820 size=96 callers=0 calls=0
*/
void sub_7a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a820ULL || rel >= 0x7a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a880 size=32 callers=0 calls=0
*/
void sub_7a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a880ULL || rel >= 0x7a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007a8a0 size=352 callers=0 calls=0
*/
void sub_7a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8a0ULL || rel >= 0x7aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007aa00 size=384 callers=0 calls=0
*/
void sub_7aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aa00ULL || rel >= 0x7ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ab80 size=128 callers=0 calls=0
*/
void sub_7ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab80ULL || rel >= 0x7ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ac00 size=32 callers=0 calls=0
*/
void sub_7ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac00ULL || rel >= 0x7ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ac20 size=320 callers=0 calls=0
*/
void sub_7ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac20ULL || rel >= 0x7ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ad60 size=7568 callers=0 calls=1
   calls: sub_7cb00
*/
void sub_7ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ad60ULL || rel >= 0x7caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007caf0 size=16 callers=0 calls=0
*/
void sub_7caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caf0ULL || rel >= 0x7cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007cb00 size=352 callers=2 calls=0
*/
void sub_7cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb00ULL || rel >= 0x7cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007cc60 size=80 callers=0 calls=0
*/
void sub_7cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc60ULL || rel >= 0x7ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ccb0 size=2448 callers=0 calls=0
*/
void sub_7ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccb0ULL || rel >= 0x7d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007d640 size=32 callers=0 calls=0
*/
void sub_7d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d640ULL || rel >= 0x7d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007d660 size=96 callers=0 calls=0
*/
void sub_7d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d660ULL || rel >= 0x7d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007d6c0 size=624 callers=0 calls=0
*/
void sub_7d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6c0ULL || rel >= 0x7d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007d930 size=576 callers=0 calls=0
*/
void sub_7d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d930ULL || rel >= 0x7db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007db70 size=336 callers=0 calls=0
*/
void sub_7db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db70ULL || rel >= 0x7dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007dcc0 size=272 callers=0 calls=0
*/
void sub_7dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dcc0ULL || rel >= 0x7ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ddd0 size=224 callers=0 calls=0
*/
void sub_7ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ddd0ULL || rel >= 0x7deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007deb0 size=160 callers=0 calls=0
*/
void sub_7deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7deb0ULL || rel >= 0x7df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007df50 size=304 callers=0 calls=0
*/
void sub_7df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df50ULL || rel >= 0x7e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e080 size=48 callers=0 calls=0
*/
void sub_7e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e080ULL || rel >= 0x7e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e0b0 size=32 callers=0 calls=0
*/
void sub_7e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e0b0ULL || rel >= 0x7e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e0d0 size=32 callers=0 calls=0
*/
void sub_7e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e0d0ULL || rel >= 0x7e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e0f0 size=32 callers=0 calls=0
*/
void sub_7e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e0f0ULL || rel >= 0x7e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e110 size=16 callers=0 calls=0
*/
void sub_7e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e110ULL || rel >= 0x7e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e120 size=144 callers=0 calls=0
*/
void sub_7e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e120ULL || rel >= 0x7e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e1b0 size=1568 callers=0 calls=2
   calls: sub_7e7d0, sub_7ed10
*/
void sub_7e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e1b0ULL || rel >= 0x7e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e7d0 size=1344 callers=3 calls=1
   calls: sub_7ed10
*/
void sub_7e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7d0ULL || rel >= 0x7ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ed10 size=224 callers=2 calls=0
*/
void sub_7ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed10ULL || rel >= 0x7edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007edf0 size=144 callers=0 calls=0
*/
void sub_7edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7edf0ULL || rel >= 0x7ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ee80 size=656 callers=0 calls=0
*/
void sub_7ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee80ULL || rel >= 0x7f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f110 size=416 callers=0 calls=0
*/
void sub_7f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f110ULL || rel >= 0x7f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f2b0 size=352 callers=0 calls=0
*/
void sub_7f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f2b0ULL || rel >= 0x7f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f410 size=96 callers=0 calls=0
*/
void sub_7f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f410ULL || rel >= 0x7f470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f470 size=112 callers=0 calls=0
*/
void sub_7f470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f470ULL || rel >= 0x7f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f4e0 size=3584 callers=0 calls=1
   calls: sub_802e0
*/
void sub_7f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f4e0ULL || rel >= 0x802e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000802e0 size=320 callers=3 calls=0
*/
void sub_802e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802e0ULL || rel >= 0x80420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080420 size=2832 callers=0 calls=0
*/
void sub_80420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80420ULL || rel >= 0x80f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080f30 size=1072 callers=0 calls=0
*/
void sub_80f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f30ULL || rel >= 0x81360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081360 size=208 callers=0 calls=0
*/
void sub_81360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81360ULL || rel >= 0x81430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081430 size=864 callers=0 calls=0
*/
void sub_81430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81430ULL || rel >= 0x81790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081790 size=272 callers=0 calls=0
*/
void sub_81790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81790ULL || rel >= 0x818a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000818a0 size=32 callers=0 calls=0
*/
void sub_818a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818a0ULL || rel >= 0x818c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000818c0 size=512 callers=0 calls=0
*/
void sub_818c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818c0ULL || rel >= 0x81ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081ac0 size=160 callers=0 calls=0
*/
void sub_81ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ac0ULL || rel >= 0x81b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081b60 size=272 callers=0 calls=0
*/
void sub_81b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b60ULL || rel >= 0x81c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081c70 size=240 callers=0 calls=0
*/
void sub_81c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c70ULL || rel >= 0x81d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081d60 size=1120 callers=0 calls=2
   calls: sub_821c0, sub_82360
*/
void sub_81d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81d60ULL || rel >= 0x821c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000821c0 size=416 callers=2 calls=0
*/
void sub_821c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x821c0ULL || rel >= 0x82360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082360 size=592 callers=2 calls=0
*/
void sub_82360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82360ULL || rel >= 0x825b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000825b0 size=1088 callers=0 calls=2
   calls: sub_821c0, sub_82360
*/
void sub_825b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x825b0ULL || rel >= 0x829f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000829f0 size=176 callers=0 calls=0
*/
void sub_829f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x829f0ULL || rel >= 0x82aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082aa0 size=80 callers=0 calls=0
*/
void sub_82aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82aa0ULL || rel >= 0x82af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082af0 size=48 callers=0 calls=0
*/
void sub_82af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82af0ULL || rel >= 0x82b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082b20 size=16 callers=0 calls=0
*/
void sub_82b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b20ULL || rel >= 0x82b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082b30 size=304 callers=0 calls=0
*/
void sub_82b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b30ULL || rel >= 0x82c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082c60 size=5744 callers=0 calls=0
*/
void sub_82c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c60ULL || rel >= 0x842d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000842d0 size=224 callers=0 calls=0
*/
void sub_842d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842d0ULL || rel >= 0x843b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000843b0 size=128 callers=0 calls=0
*/
void sub_843b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843b0ULL || rel >= 0x84430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084430 size=48 callers=0 calls=0
*/
void sub_84430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84430ULL || rel >= 0x84460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084460 size=16 callers=0 calls=0
*/
void sub_84460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84460ULL || rel >= 0x84470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084470 size=176 callers=0 calls=0
*/
void sub_84470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84470ULL || rel >= 0x84520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084520 size=1200 callers=0 calls=0
*/
void sub_84520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84520ULL || rel >= 0x849d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000849d0 size=96 callers=0 calls=0
*/
void sub_849d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849d0ULL || rel >= 0x84a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084a30 size=272 callers=0 calls=0
*/
void sub_84a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a30ULL || rel >= 0x84b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084b40 size=96 callers=0 calls=0
*/
void sub_84b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b40ULL || rel >= 0x84ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084ba0 size=16 callers=0 calls=0
*/
void sub_84ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ba0ULL || rel >= 0x84bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084bb0 size=336 callers=0 calls=0
*/
void sub_84bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84bb0ULL || rel >= 0x84d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084d00 size=720 callers=0 calls=0
*/
void sub_84d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d00ULL || rel >= 0x84fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084fd0 size=5504 callers=0 calls=0
*/
void sub_84fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fd0ULL || rel >= 0x86550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086550 size=192 callers=0 calls=0
*/
void sub_86550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86550ULL || rel >= 0x86610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086610 size=1216 callers=0 calls=0
*/
void sub_86610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86610ULL || rel >= 0x86ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086ad0 size=576 callers=0 calls=0
*/
void sub_86ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ad0ULL || rel >= 0x86d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086d10 size=576 callers=0 calls=0
*/
void sub_86d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d10ULL || rel >= 0x86f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086f50 size=1104 callers=0 calls=1
   calls: sub_873a0
*/
void sub_86f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f50ULL || rel >= 0x873a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000873a0 size=592 callers=2 calls=0
*/
void sub_873a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873a0ULL || rel >= 0x875f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000875f0 size=176 callers=0 calls=0
*/
void sub_875f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875f0ULL || rel >= 0x876a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

