/* main functions 0143ef40..0145cd90 (172 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0143ef40 size=96 callers=0 calls=0
*/
void sub_143ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ef40ULL || rel >= 0x143efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143efa0 size=96 callers=0 calls=0
*/
void sub_143efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143efa0ULL || rel >= 0x143f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f000 size=96 callers=0 calls=0
*/
void sub_143f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f000ULL || rel >= 0x143f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f060 size=96 callers=0 calls=0
*/
void sub_143f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f060ULL || rel >= 0x143f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f0c0 size=96 callers=0 calls=0
*/
void sub_143f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f0c0ULL || rel >= 0x143f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f120 size=16 callers=0 calls=0
*/
void sub_143f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f120ULL || rel >= 0x143f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f130 size=16 callers=0 calls=0
*/
void sub_143f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f130ULL || rel >= 0x143f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f140 size=16 callers=0 calls=0
*/
void sub_143f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f140ULL || rel >= 0x143f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f150 size=592 callers=0 calls=3
   calls: sub_143f3a0, sub_143fce0, sub_c39c40
*/
void sub_143f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f150ULL || rel >= 0x143f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f3a0 size=400 callers=1 calls=3
   calls: sub_143f690, sub_672c10, sub_c386f0
*/
void sub_143f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f3a0ULL || rel >= 0x143f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f530 size=16 callers=0 calls=0
*/
void sub_143f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f530ULL || rel >= 0x143f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f540 size=16 callers=0 calls=0
*/
void sub_143f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f540ULL || rel >= 0x143f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f550 size=16 callers=0 calls=0
*/
void sub_143f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f550ULL || rel >= 0x143f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f560 size=304 callers=1 calls=0
*/
void sub_143f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f560ULL || rel >= 0x143f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f690 size=80 callers=1 calls=2
   calls: sub_143f6e0, sub_e7b660
*/
void sub_143f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f690ULL || rel >= 0x143f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f6e0 size=224 callers=1 calls=3
   calls: sub_1440660, sub_7c2da0, sub_e7b5e0
*/
void sub_143f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f6e0ULL || rel >= 0x143f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143f7c0 size=576 callers=0 calls=9
   calls: sub_143fa00, sub_1440880, sub_14409c0, sub_1440d10, sub_78f150, sub_78f240, sub_e7c0f0, sub_e7c160, sub_e7e890
   ref: ViewTop
   ref: ViewMessage
   ref: common/tournament.dat
*/
void ViewMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143f7c0ULL || rel >= 0x143fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fa00 size=432 callers=1 calls=3
   calls: sub_1440750, sub_e7c160, sub_e7c210
*/
void sub_143fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fa00ULL || rel >= 0x143fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fbb0 size=32 callers=0 calls=0
*/
void sub_143fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fbb0ULL || rel >= 0x143fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fbd0 size=16 callers=0 calls=0
*/
void sub_143fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fbd0ULL || rel >= 0x143fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fbe0 size=16 callers=0 calls=0
*/
void sub_143fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fbe0ULL || rel >= 0x143fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fbf0 size=16 callers=0 calls=0
*/
void sub_143fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fbf0ULL || rel >= 0x143fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fc00 size=224 callers=0 calls=2
   calls: sub_1440880, sub_e7c160
*/
void sub_143fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fc00ULL || rel >= 0x143fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fce0 size=16 callers=2 calls=0
*/
void sub_143fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fce0ULL || rel >= 0x143fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fcf0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_143fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fcf0ULL || rel >= 0x143fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fe90 size=16 callers=0 calls=0
*/
void sub_143fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fe90ULL || rel >= 0x143fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143fea0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_143fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143fea0ULL || rel >= 0x143ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ff50 size=16 callers=0 calls=0
*/
void sub_143ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ff50ULL || rel >= 0x143ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ff60 size=16 callers=0 calls=0
*/
void sub_143ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ff60ULL || rel >= 0x143ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ff70 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_143ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ff70ULL || rel >= 0x1440020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440020 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1440020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440020ULL || rel >= 0x14400d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014400d0 size=16 callers=0 calls=0
*/
void sub_14400d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14400d0ULL || rel >= 0x14400e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014400e0 size=16 callers=0 calls=0
*/
void sub_14400e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14400e0ULL || rel >= 0x14400f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014400f0 size=16 callers=0 calls=0
*/
void sub_14400f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14400f0ULL || rel >= 0x1440100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440100 size=16 callers=0 calls=0
*/
void sub_1440100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440100ULL || rel >= 0x1440110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440110 size=16 callers=0 calls=0
*/
void sub_1440110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440110ULL || rel >= 0x1440120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440120 size=16 callers=0 calls=0
*/
void sub_1440120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440120ULL || rel >= 0x1440130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440130 size=16 callers=0 calls=0
*/
void sub_1440130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440130ULL || rel >= 0x1440140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440140 size=16 callers=0 calls=0
*/
void sub_1440140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440140ULL || rel >= 0x1440150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440150 size=16 callers=0 calls=0
*/
void sub_1440150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440150ULL || rel >= 0x1440160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440160 size=16 callers=0 calls=0
*/
void sub_1440160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440160ULL || rel >= 0x1440170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440170 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1440170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440170ULL || rel >= 0x14401f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014401f0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14401f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14401f0ULL || rel >= 0x1440360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440360 size=96 callers=0 calls=1
   calls: sub_1440580
*/
void sub_1440360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440360ULL || rel >= 0x14403c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014403c0 size=16 callers=0 calls=0
*/
void sub_14403c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14403c0ULL || rel >= 0x14403d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014403d0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14403d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14403d0ULL || rel >= 0x1440470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440470 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1440470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440470ULL || rel >= 0x1440530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440530 size=16 callers=0 calls=0
*/
void sub_1440530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440530ULL || rel >= 0x1440540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440540 size=16 callers=0 calls=0
*/
void sub_1440540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440540ULL || rel >= 0x1440550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440550 size=16 callers=0 calls=0
*/
void sub_1440550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440550ULL || rel >= 0x1440560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440560 size=32 callers=0 calls=0
*/
void sub_1440560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440560ULL || rel >= 0x1440580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440580 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1440580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440580ULL || rel >= 0x1440660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440660 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1440660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440660ULL || rel >= 0x1440750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440750 size=304 callers=7 calls=0
*/
void sub_1440750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440750ULL || rel >= 0x1440880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440880 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_1440880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440880ULL || rel >= 0x14409c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014409c0 size=288 callers=1 calls=2
   calls: sub_1440ae0, sub_e809c0
*/
void sub_14409c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14409c0ULL || rel >= 0x1440ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440ae0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1440ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440ae0ULL || rel >= 0x1440d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440d10 size=288 callers=2 calls=2
   calls: sub_1440e30, sub_e809c0
*/
void sub_1440d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440d10ULL || rel >= 0x1440e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440e30 size=384 callers=1 calls=3
   calls: sub_1440fb0, sub_790490, sub_e7fe20
*/
void sub_1440e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440e30ULL || rel >= 0x1440fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01440fb0 size=320 callers=1 calls=2
   calls: anonymous_2, sub_ea46c0
*/
void sub_1440fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440fb0ULL || rel >= 0x14410f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014410f0 size=672 callers=0 calls=7
   calls: SYS_WORK_TOURNAMENT_WIN_02d, sub_1441850, sub_1441e60, sub_1441fb0, sub_5cfaf0, sub_c39c40, sub_d0c0
   ref: ViewTop
   ref: StateFirst
*/
void StateFirst_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14410f0ULL || rel >= 0x1441390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441390 size=1216 callers=1 calls=5
   calls: anime_line_08_win, msg_ui_tournament_01, sub_135a760, sub_1440750, sub_e806b0
   ref: SYS_WORK_TOURNAMENT_WIN%02d
*/
void SYS_WORK_TOURNAMENT_WIN_02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441390ULL || rel >= 0x1441850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441850 size=736 callers=1 calls=7
   calls: sub_1311c60, sub_1440750, sub_1442da0, sub_67d450, sub_e807f0, sub_eb8930, sub_ec0370
*/
void sub_1441850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441850ULL || rel >= 0x1441b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441b30 size=368 callers=0 calls=8
   calls: sub_1440750, sub_1442c40, sub_5cfaf0, sub_793a60, sub_794330, sub_d0c0, sub_eb6530, sub_eb8e80
   ref: Play_UI_tournament_fanfare
*/
void Play_UI_tournament_fanfare(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441b30ULL || rel >= 0x1441ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441ca0 size=16 callers=0 calls=0
*/
void sub_1441ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441ca0ULL || rel >= 0x1441cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441cb0 size=16 callers=0 calls=0
*/
void sub_1441cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441cb0ULL || rel >= 0x1441cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441cc0 size=16 callers=0 calls=0
*/
void sub_1441cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441cc0ULL || rel >= 0x1441cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441cd0 size=16 callers=0 calls=0
*/
void sub_1441cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441cd0ULL || rel >= 0x1441ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441ce0 size=16 callers=0 calls=0
*/
void sub_1441ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441ce0ULL || rel >= 0x1441cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441cf0 size=16 callers=0 calls=0
*/
void sub_1441cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441cf0ULL || rel >= 0x1441d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441d00 size=16 callers=0 calls=0
*/
void sub_1441d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441d00ULL || rel >= 0x1441d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441d10 size=16 callers=0 calls=0
*/
void sub_1441d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441d10ULL || rel >= 0x1441d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441d20 size=16 callers=0 calls=0
*/
void sub_1441d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441d20ULL || rel >= 0x1441d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441d30 size=304 callers=0 calls=0
*/
void sub_1441d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441d30ULL || rel >= 0x1441e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441e60 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1441e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441e60ULL || rel >= 0x1441fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01441fb0 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_1441fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1441fb0ULL || rel >= 0x14420a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014420a0 size=16 callers=0 calls=0
*/
void sub_14420a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14420a0ULL || rel >= 0x14420b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014420b0 size=1008 callers=0 calls=3
   calls: sub_14ba7b0, sub_8f3180, sub_e7eb10
*/
void sub_14420b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14420b0ULL || rel >= 0x14424a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014424a0 size=320 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/tournament/bin/tournament_top_00_lyt.bin
*/
void tournament_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14424a0ULL || rel >= 0x14425e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014425e0 size=1632 callers=1 calls=7
   calls: player_icon_table_3, sub_13149a0, sub_14ac370, sub_67d450, sub_e83930, sub_eb6230, trname
   ref: msg_ui_tournament_01
*/
void msg_ui_tournament_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14425e0ULL || rel >= 0x1442c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442c40 size=16 callers=1 calls=0
*/
void sub_1442c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442c40ULL || rel >= 0x1442c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442c50 size=336 callers=8 calls=2
   calls: sub_e833a0, sub_e83870
   ref: anime_line_%02d_lose
   ref: anime_L_name_%02d_color
   ref: anime_line_08_win
   ref: anime_line_%02d_win
   ref: anime_keep
   ref: anime_line_08
   ref: anime_line_%02d
*/
void anime_line_08_win(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442c50ULL || rel >= 0x1442da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442da0 size=32 callers=1 calls=0
*/
void sub_1442da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442da0ULL || rel >= 0x1442dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442dc0 size=96 callers=0 calls=0
*/
void sub_1442dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442dc0ULL || rel >= 0x1442e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442e20 size=96 callers=0 calls=0
*/
void sub_1442e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442e20ULL || rel >= 0x1442e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442e80 size=16 callers=0 calls=0
*/
void sub_1442e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442e80ULL || rel >= 0x1442e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442e90 size=96 callers=0 calls=0
*/
void sub_1442e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442e90ULL || rel >= 0x1442ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442ef0 size=96 callers=0 calls=0
*/
void sub_1442ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442ef0ULL || rel >= 0x1442f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442f50 size=16 callers=0 calls=0
*/
void sub_1442f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442f50ULL || rel >= 0x1442f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442f60 size=16 callers=0 calls=0
*/
void sub_1442f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442f60ULL || rel >= 0x1442f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442f70 size=96 callers=0 calls=0
*/
void sub_1442f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442f70ULL || rel >= 0x1442fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01442fd0 size=96 callers=0 calls=0
*/
void sub_1442fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1442fd0ULL || rel >= 0x1443030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443030 size=304 callers=0 calls=0
*/
void sub_1443030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443030ULL || rel >= 0x1443160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443160 size=32 callers=1 calls=0
*/
void sub_1443160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443160ULL || rel >= 0x1443180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443180 size=144 callers=2 calls=0
*/
void sub_1443180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443180ULL || rel >= 0x1443210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443210 size=368 callers=1 calls=0
*/
void sub_1443210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443210ULL || rel >= 0x1443380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443380 size=288 callers=7 calls=1
   calls: sub_14aadf0
*/
void sub_1443380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443380ULL || rel >= 0x14434a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014434a0 size=352 callers=3 calls=5
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0
   ref: DestinationDataList
   ref: msgHash
   ref: workId
*/
void DestinationDataList_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14434a0ULL || rel >= 0x1443600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443600 size=64 callers=1 calls=0
*/
void sub_1443600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443600ULL || rel >= 0x1443640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443640 size=112 callers=1 calls=0
*/
void sub_1443640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443640ULL || rel >= 0x14436b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014436b0 size=1280 callers=1 calls=4
   calls: sub_1443bb0, sub_14aadf0, sub_1502120, sub_5cfad0
*/
void sub_14436b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14436b0ULL || rel >= 0x1443bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443bb0 size=544 callers=3 calls=1
   calls: sub_14aadf0
*/
void sub_1443bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443bb0ULL || rel >= 0x1443dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443dd0 size=32 callers=2 calls=0
*/
void sub_1443dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443dd0ULL || rel >= 0x1443df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443df0 size=32 callers=2 calls=0
*/
void sub_1443df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443df0ULL || rel >= 0x1443e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443e10 size=192 callers=0 calls=1
   calls: sub_14aadf0
*/
void sub_1443e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443e10ULL || rel >= 0x1443ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01443ed0 size=848 callers=0 calls=5
   calls: sub_1444220, sub_5dd790, sub_5e2930, sub_96dd80, sub_9b2290
   ref: bin/appli/townmap/bin/map_control_data.prmb
   ref: bin/appli/townmap/bin/map_destination_data.prmb
   ref: bin/appli/townmap/bin/map_data.prmb
*/
void map_destination_data_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1443ed0ULL || rel >= 0x1444220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01444220 size=304 callers=1 calls=3
   calls: sub_1449870, sub_5e6180, sub_d0c0
*/
void sub_1444220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1444220ULL || rel >= 0x1444350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01444350 size=1680 callers=0 calls=14
   calls: P_icon_pokemon_00, iconCollisionSize, startScrollOffset, sub_1106200, sub_1106f30, sub_14462a0, sub_14ab040, sub_14ba3b0, sub_14ba7b0, sub_14e1a00, sub_5cfad0, sub_7a3c20
   ... +2 more
*/
void sub_1444350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1444350ULL || rel >= 0x14449e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014449e0 size=352 callers=1 calls=4
   calls: sub_11063e0, sub_11067c0, sub_1443180, sub_14aad40
   ref: cursorSpeed
   ref: cursorBoostRate
   ref: startScrollOffset
*/
void startScrollOffset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14449e0ULL || rel >= 0x1444b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01444b40 size=5984 callers=1 calls=16
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_11069b0, sub_1106cd0, sub_135a1a0, sub_1443640, sub_14aad40, sub_c60e50, sub_d0c0
   ... +4 more
   ref: facilityTextHash4
   ref: centerFlag
   ref: pane_%s
   ref: anime_%s
   ref: facilityTextHash6
   ref: flyLandingHash
   ref: iconTargetSize
   ref: MapDataList
*/
void iconCollisionSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1444b40ULL || rel >= 0x14462a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014462a0 size=448 callers=1 calls=4
   calls: sub_1443380, sub_14aad40, sub_d25c50, sub_e90870
*/
void sub_14462a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14462a0ULL || rel >= 0x1446460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01446460 size=1136 callers=1 calls=6
   calls: sub_1449b60, sub_14aad40, sub_14ba7b0, sub_8f3180, sub_ce0, sub_e83430
   ref: pane_%s
   ref: anime_%s
   ref: P_icon_pokemon_00
   ref: /dev/urandom
   ref: pane_%s_%s
   ref: L_pokemon_%02d
   ref: anime_%s_%s
*/
void P_icon_pokemon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1446460ULL || rel >= 0x14468d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014468d0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/townmap/bin/townmap_top_00_lyt.bin
   ref: bin/appli/townmap/bin/uikit_townmap_top.bin
*/
void uikit_townmap_top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14468d0ULL || rel >= 0x1446ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01446ab0 size=160 callers=5 calls=1
   calls: sub_1443380
*/
void sub_1446ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1446ab0ULL || rel >= 0x1446b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01446b50 size=48 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_1446b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1446b50ULL || rel >= 0x1446b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01446b80 size=416 callers=1 calls=6
   calls: sub_1443210, sub_14436b0, sub_1443dd0, sub_ea4740, sub_ea47d0, sub_ea47f0
*/
void sub_1446b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1446b80ULL || rel >= 0x1446d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01446d20 size=432 callers=2 calls=3
   calls: sub_d62e30, sub_e83430, sub_e83930
   ref: anime_%s
   ref: weather_ptn
   ref: anime_%s_%s
   ref: L_weather_%02d
*/
void weather_ptn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1446d20ULL || rel >= 0x1446ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01446ed0 size=3552 callers=0 calls=11
   calls: place_name_6, sub_13149a0, sub_135a1a0, sub_14ab040, sub_14ab0c0, sub_14ab440, sub_14ac370, sub_67d450, sub_d62e30, sub_e7eb10, sub_e90930
   ref: pane_%s
   ref: L_info_00_T_info_%02d
*/
void pane__s_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1446ed0ULL || rel >= 0x1447cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01447cb0 size=192 callers=0 calls=2
   calls: sub_14ab040, sub_e83430
*/
void sub_1447cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1447cb0ULL || rel >= 0x1447d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01447d70 size=144 callers=8 calls=2
   calls: sub_1443dd0, sub_1443df0
*/
void sub_1447d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1447d70ULL || rel >= 0x1447e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01447e00 size=176 callers=2 calls=2
   calls: sub_1443df0, sub_e90da0
*/
void sub_1447e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1447e00ULL || rel >= 0x1447eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01447eb0 size=1584 callers=1 calls=14
   calls: DestinationDataList_2, sub_11061e0, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_135a760, sub_14aad40, sub_14ab040, sub_7c2d80, sub_8f19b0
   ... +2 more
   ref: DestinationDataList
   ref: workId
   ref: screenShotId_T
   ref: zoneHash
   ref: screenShotId
*/
void DestinationDataList_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1447eb0ULL || rel >= 0x14484e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014484e0 size=512 callers=12 calls=2
   calls: sub_14aad40, sub_14bc060
   ref: pane_%s
   ref: L_pokemon_%02d
*/
void pane__s_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14484e0ULL || rel >= 0x14486e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014486e0 size=128 callers=3 calls=1
   calls: sub_14ab040
*/
void sub_14486e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14486e0ULL || rel >= 0x1448760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01448760 size=576 callers=2 calls=3
   calls: sub_14aad40, sub_e83430, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: L_weather_00_weather_ptn
   ref: anime_%s_%s
   ref: L_bunpu_%02d
*/
void L_weather_00_weather_ptn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1448760ULL || rel >= 0x14489a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014489a0 size=320 callers=3 calls=1
   calls: sub_14aad40
   ref: pane_%s
   ref: L_bunpu_%02d
*/
void pane__s_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14489a0ULL || rel >= 0x1448ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01448ae0 size=128 callers=5 calls=1
   calls: sub_14ab040
*/
void sub_1448ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1448ae0ULL || rel >= 0x1448b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01448b60 size=16 callers=0 calls=0
*/
void sub_1448b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1448b60ULL || rel >= 0x1448b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01448b70 size=48 callers=4 calls=0
*/
void sub_1448b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1448b70ULL || rel >= 0x1448ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01448ba0 size=224 callers=3 calls=1
   calls: sub_1443380
*/
void sub_1448ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1448ba0ULL || rel >= 0x1448c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01448c80 size=1072 callers=3 calls=1
   calls: sub_14aad40
   ref: pane_%s
   ref: L_pokemon_%02d
*/
void pane__s_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1448c80ULL || rel >= 0x14490b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014490b0 size=176 callers=3 calls=2
   calls: sub_14ab040, weather_ptn
*/
void sub_14490b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14490b0ULL || rel >= 0x1449160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449160 size=32 callers=1 calls=0
*/
void sub_1449160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449160ULL || rel >= 0x1449180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449180 size=240 callers=1 calls=1
   calls: sub_1443380
*/
void sub_1449180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449180ULL || rel >= 0x1449270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449270 size=32 callers=4 calls=0
*/
void sub_1449270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449270ULL || rel >= 0x1449290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449290 size=240 callers=3 calls=1
   calls: sub_14ab040
*/
void sub_1449290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449290ULL || rel >= 0x1449380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449380 size=16 callers=1 calls=0
*/
void sub_1449380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449380ULL || rel >= 0x1449390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449390 size=816 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1449390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449390ULL || rel >= 0x14496c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014496c0 size=16 callers=0 calls=0
*/
void sub_14496c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14496c0ULL || rel >= 0x14496d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014496d0 size=16 callers=0 calls=0
*/
void sub_14496d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14496d0ULL || rel >= 0x14496e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014496e0 size=16 callers=0 calls=0
*/
void sub_14496e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14496e0ULL || rel >= 0x14496f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014496f0 size=16 callers=0 calls=0
*/
void sub_14496f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14496f0ULL || rel >= 0x1449700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449700 size=16 callers=0 calls=0
*/
void sub_1449700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449700ULL || rel >= 0x1449710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449710 size=16 callers=0 calls=0
*/
void sub_1449710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449710ULL || rel >= 0x1449720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449720 size=16 callers=0 calls=0
*/
void sub_1449720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449720ULL || rel >= 0x1449730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449730 size=16 callers=0 calls=0
*/
void sub_1449730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449730ULL || rel >= 0x1449740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449740 size=304 callers=0 calls=0
*/
void sub_1449740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449740ULL || rel >= 0x1449870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449870 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_1449870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449870ULL || rel >= 0x14498f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014498f0 size=240 callers=0 calls=2
   calls: sub_1443380, sub_1500c40
*/
void sub_14498f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14498f0ULL || rel >= 0x14499e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014499e0 size=16 callers=0 calls=0
*/
void sub_14499e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14499e0ULL || rel >= 0x14499f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014499f0 size=16 callers=0 calls=0
*/
void sub_14499f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14499f0ULL || rel >= 0x1449a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449a00 size=16 callers=0 calls=0
*/
void sub_1449a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449a00ULL || rel >= 0x1449a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449a10 size=288 callers=0 calls=2
   calls: sub_1443380, sub_1500c40
*/
void sub_1449a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449a10ULL || rel >= 0x1449b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449b30 size=16 callers=0 calls=0
*/
void sub_1449b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449b30ULL || rel >= 0x1449b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449b40 size=16 callers=0 calls=0
*/
void sub_1449b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449b40ULL || rel >= 0x1449b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449b50 size=16 callers=0 calls=0
*/
void sub_1449b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449b50ULL || rel >= 0x1449b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449b60 size=400 callers=4 calls=1
   calls: sub_1449cf0
*/
void sub_1449b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449b60ULL || rel >= 0x1449cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449cf0 size=512 callers=2 calls=0
*/
void sub_1449cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449cf0ULL || rel >= 0x1449ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449ef0 size=16 callers=0 calls=0
*/
void sub_1449ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449ef0ULL || rel >= 0x1449f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449f00 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_1449f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449f00ULL || rel >= 0x1449f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01449f30 size=352 callers=1 calls=2
   calls: sub_14ba820, sub_f1db30
   ref: bin/appli/townmap/townmap_pic_%03d.bntx
*/
void townmap_pic__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449f30ULL || rel >= 0x144a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a090 size=224 callers=2 calls=2
   calls: sub_144a170, sub_144aae0
*/
void sub_144a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a090ULL || rel >= 0x144a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a170 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_144a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a170ULL || rel >= 0x144a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a330 size=96 callers=0 calls=0
*/
void sub_144a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a330ULL || rel >= 0x144a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a390 size=96 callers=0 calls=0
*/
void sub_144a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a390ULL || rel >= 0x144a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a3f0 size=96 callers=0 calls=0
*/
void sub_144a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a3f0ULL || rel >= 0x144a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a450 size=96 callers=0 calls=0
*/
void sub_144a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a450ULL || rel >= 0x144a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a4b0 size=96 callers=0 calls=0
*/
void sub_144a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a4b0ULL || rel >= 0x144a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a510 size=96 callers=0 calls=0
*/
void sub_144a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a510ULL || rel >= 0x144a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a570 size=16 callers=0 calls=0
*/
void sub_144a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a570ULL || rel >= 0x144a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a580 size=16 callers=0 calls=0
*/
void sub_144a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a580ULL || rel >= 0x144a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a590 size=16 callers=0 calls=0
*/
void sub_144a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a590ULL || rel >= 0x144a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a5a0 size=640 callers=0 calls=7
   calls: sub_144a820, sub_144a930, sub_144b3c0, sub_1502120, sub_c44410, sub_c60e50, sub_d7eea0
   ref: Play_UI_map_open
*/
void Play_UI_map_open(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a5a0ULL || rel >= 0x144a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a820 size=272 callers=1 calls=3
   calls: sub_144ac10, sub_672c10, sub_c386f0
*/
void sub_144a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a820ULL || rel >= 0x144a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144a930 size=384 callers=2 calls=1
   calls: sub_c443f0
*/
void sub_144a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144a930ULL || rel >= 0x144aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144aab0 size=16 callers=0 calls=0
*/
void sub_144aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144aab0ULL || rel >= 0x144aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144aac0 size=16 callers=0 calls=0
*/
void sub_144aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144aac0ULL || rel >= 0x144aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144aad0 size=16 callers=0 calls=0
*/
void sub_144aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144aad0ULL || rel >= 0x144aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144aae0 size=304 callers=1 calls=0
*/
void sub_144aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144aae0ULL || rel >= 0x144ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ac10 size=240 callers=1 calls=2
   calls: sub_144ad00, sub_e7b660
*/
void sub_144ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ac10ULL || rel >= 0x144ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ad00 size=224 callers=1 calls=3
   calls: sub_144ade0, sub_7c2da0, sub_e7b5e0
*/
void sub_144ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ad00ULL || rel >= 0x144ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ade0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_144ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ade0ULL || rel >= 0x144aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144aed0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_144aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144aed0ULL || rel >= 0x144af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144af50 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_144af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144af50ULL || rel >= 0x144b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b0c0 size=96 callers=0 calls=1
   calls: sub_144b2e0
*/
void sub_144b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b0c0ULL || rel >= 0x144b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b120 size=16 callers=0 calls=0
*/
void sub_144b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b120ULL || rel >= 0x144b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b130 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_144b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b130ULL || rel >= 0x144b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b1d0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_144b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b1d0ULL || rel >= 0x144b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b290 size=16 callers=0 calls=0
*/
void sub_144b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b290ULL || rel >= 0x144b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b2a0 size=16 callers=0 calls=0
*/
void sub_144b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b2a0ULL || rel >= 0x144b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b2b0 size=16 callers=0 calls=0
*/
void sub_144b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b2b0ULL || rel >= 0x144b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b2c0 size=32 callers=0 calls=0
*/
void sub_144b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b2c0ULL || rel >= 0x144b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b2e0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_144b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b2e0ULL || rel >= 0x144b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b3c0 size=240 callers=1 calls=1
   calls: sub_c39c40
*/
void sub_144b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b3c0ULL || rel >= 0x144b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b4b0 size=768 callers=0 calls=9
   calls: sub_12fac60, sub_144b7b0, sub_153df70, sub_78f150, sub_78f240, sub_79ab20, sub_79b250, sub_e7c0f0, sub_e7e890
   ref: CommonOptionBar
   ref: ViewMain
   ref: common/townmap.dat
   ref: common/townmap_target.dat
   ref: common/townmap_facility.dat
   ref: ViewMsgWindow
   ref: USE_TOWNMAP
*/
void CommonOptionBar_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b4b0ULL || rel >= 0x144b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b7b0 size=432 callers=1 calls=3
   calls: sub_144c2d0, sub_e7c160, sub_e7c210
*/
void sub_144b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b7b0ULL || rel >= 0x144b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b960 size=16 callers=0 calls=0
*/
void sub_144b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b960ULL || rel >= 0x144b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144b970 size=224 callers=0 calls=3
   calls: sub_1500ea0, sub_1545480, sub_795bc0
   ref: CommonOptionBar
   ref: ViewMain
*/
void CommonOptionBar_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b970ULL || rel >= 0x144ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ba50 size=16 callers=0 calls=0
*/
void sub_144ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ba50ULL || rel >= 0x144ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ba60 size=992 callers=0 calls=6
   calls: sub_144c400, sub_144c540, sub_144c680, sub_144c7c0, sub_79c240, sub_e7c160
*/
void sub_144ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ba60ULL || rel >= 0x144be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144be40 size=16 callers=0 calls=0
*/
void sub_144be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144be40ULL || rel >= 0x144be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144be50 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_144be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144be50ULL || rel >= 0x144bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144bff0 size=16 callers=0 calls=0
*/
void sub_144bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144bff0ULL || rel >= 0x144c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c000 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_144c000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c000ULL || rel >= 0x144c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c0b0 size=16 callers=0 calls=0
*/
void sub_144c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c0b0ULL || rel >= 0x144c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c0c0 size=16 callers=0 calls=0
*/
void sub_144c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c0c0ULL || rel >= 0x144c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c0d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_144c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c0d0ULL || rel >= 0x144c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c180 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_144c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c180ULL || rel >= 0x144c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c230 size=16 callers=0 calls=0
*/
void sub_144c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c230ULL || rel >= 0x144c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c240 size=16 callers=0 calls=0
*/
void sub_144c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c240ULL || rel >= 0x144c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c250 size=16 callers=0 calls=0
*/
void sub_144c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c250ULL || rel >= 0x144c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c260 size=16 callers=0 calls=0
*/
void sub_144c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c260ULL || rel >= 0x144c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c270 size=16 callers=0 calls=0
*/
void sub_144c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c270ULL || rel >= 0x144c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c280 size=16 callers=0 calls=0
*/
void sub_144c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c280ULL || rel >= 0x144c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c290 size=16 callers=0 calls=0
*/
void sub_144c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c290ULL || rel >= 0x144c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c2a0 size=16 callers=0 calls=0
*/
void sub_144c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c2a0ULL || rel >= 0x144c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c2b0 size=16 callers=0 calls=0
*/
void sub_144c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c2b0ULL || rel >= 0x144c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c2c0 size=16 callers=0 calls=0
*/
void sub_144c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c2c0ULL || rel >= 0x144c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c2d0 size=304 callers=2 calls=0
*/
void sub_144c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c2d0ULL || rel >= 0x144c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c400 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_144c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c400ULL || rel >= 0x144c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c540 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_144c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c540ULL || rel >= 0x144c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c680 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_144c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c680ULL || rel >= 0x144c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c7c0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_144c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c7c0ULL || rel >= 0x144c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144c900 size=496 callers=0 calls=5
   calls: sub_1545480, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0
   ref: ViewMain
   ref: StateStart
*/
void StateStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144c900ULL || rel >= 0x144caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144caf0 size=208 callers=0 calls=8
   calls: DestinationDataList_3, sub_c43ed0, sub_c44310, sub_e806b0, sub_eb6230, sub_eb6630, sub_eb7730, sub_eb7790
*/
void sub_144caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144caf0ULL || rel >= 0x144cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cbc0 size=16 callers=0 calls=0
*/
void sub_144cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cbc0ULL || rel >= 0x144cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cbd0 size=16 callers=0 calls=0
*/
void sub_144cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cbd0ULL || rel >= 0x144cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cbe0 size=16 callers=0 calls=0
*/
void sub_144cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cbe0ULL || rel >= 0x144cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cbf0 size=16 callers=0 calls=0
*/
void sub_144cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cbf0ULL || rel >= 0x144cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cc00 size=16 callers=0 calls=0
*/
void sub_144cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cc00ULL || rel >= 0x144cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cc10 size=16 callers=0 calls=0
*/
void sub_144cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cc10ULL || rel >= 0x144cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cc20 size=16 callers=0 calls=0
*/
void sub_144cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cc20ULL || rel >= 0x144cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cc30 size=16 callers=0 calls=0
*/
void sub_144cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cc30ULL || rel >= 0x144cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cc40 size=16 callers=0 calls=0
*/
void sub_144cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cc40ULL || rel >= 0x144cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cc50 size=304 callers=0 calls=0
*/
void sub_144cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cc50ULL || rel >= 0x144cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144cd80 size=1712 callers=0 calls=17
   calls: place_name_6, sub_1311c60, sub_135a1a0, sub_1447d70, sub_1545480, sub_5cfaf0, sub_67b990, sub_67d450, sub_79b990, sub_969be0, sub_c39c40, sub_d0c0
   ... +5 more
   ref: StateCheckFly
   ref: ViewMain
*/
void StateCheckFly(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144cd80ULL || rel >= 0x144d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d430 size=400 callers=0 calls=7
   calls: sub_1447e00, sub_144c2d0, sub_14e0450, sub_eb8a30, sub_eb8c60, sub_eb8e80, sub_eb8ea0
*/
void sub_144d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d430ULL || rel >= 0x144d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d5c0 size=16 callers=0 calls=0
*/
void sub_144d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d5c0ULL || rel >= 0x144d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d5d0 size=16 callers=0 calls=0
*/
void sub_144d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d5d0ULL || rel >= 0x144d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d5e0 size=16 callers=0 calls=0
*/
void sub_144d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d5e0ULL || rel >= 0x144d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d5f0 size=16 callers=0 calls=0
*/
void sub_144d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d5f0ULL || rel >= 0x144d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d600 size=16 callers=0 calls=0
*/
void sub_144d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d600ULL || rel >= 0x144d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d610 size=16 callers=0 calls=0
*/
void sub_144d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d610ULL || rel >= 0x144d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d620 size=16 callers=0 calls=0
*/
void sub_144d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d620ULL || rel >= 0x144d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d630 size=16 callers=0 calls=0
*/
void sub_144d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d630ULL || rel >= 0x144d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d640 size=16 callers=0 calls=0
*/
void sub_144d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d640ULL || rel >= 0x144d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d650 size=304 callers=0 calls=0
*/
void sub_144d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d650ULL || rel >= 0x144d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d780 size=128 callers=0 calls=0
*/
void sub_144d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d780ULL || rel >= 0x144d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144d800 size=1248 callers=0 calls=6
   calls: sub_14e1a00, sub_1545480, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0
   ref: ViewMain
   ref: StateCursorControl
*/
void StateCursorControl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d800ULL || rel >= 0x144dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144dce0 size=64 callers=0 calls=2
   calls: sub_144ded0, sub_e807f0
*/
void sub_144dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144dce0ULL || rel >= 0x144dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144dd20 size=64 callers=0 calls=3
   calls: sub_144e0c0, sub_e80580, sub_e807f0
*/
void sub_144dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144dd20ULL || rel >= 0x144dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144dd60 size=16 callers=0 calls=0
*/
void sub_144dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144dd60ULL || rel >= 0x144dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144dd70 size=64 callers=0 calls=2
   calls: sub_144e2b0, sub_e807f0
*/
void sub_144dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144dd70ULL || rel >= 0x144ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ddb0 size=272 callers=0 calls=4
   calls: sub_1446b80, sub_c39c40, sub_e7e380, sub_e807d0
*/
void sub_144ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ddb0ULL || rel >= 0x144dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144dec0 size=16 callers=0 calls=0
*/
void sub_144dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144dec0ULL || rel >= 0x144ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ded0 size=496 callers=1 calls=5
   calls: sub_144e520, sub_c39c40, sub_e7eb10, sub_eb75e0, sub_eb76b0
*/
void sub_144ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ded0ULL || rel >= 0x144e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144e0c0 size=496 callers=1 calls=5
   calls: sub_144e520, sub_c39c40, sub_e7eb10, sub_eb75e0, sub_eb76b0
*/
void sub_144e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144e0c0ULL || rel >= 0x144e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144e2b0 size=624 callers=1 calls=7
   calls: sub_144e520, sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_eb76b0
*/
void sub_144e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144e2b0ULL || rel >= 0x144e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144e520 size=1008 callers=3 calls=7
   calls: sub_1449160, sub_5cfad0, sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb7720
*/
void sub_144e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144e520ULL || rel >= 0x144e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144e910 size=208 callers=1 calls=5
   calls: sub_1446ab0, sub_14490b0, sub_1449180, sub_e80580, sub_e807f0
*/
void sub_144e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144e910ULL || rel >= 0x144e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144e9e0 size=16 callers=0 calls=0
*/
void sub_144e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144e9e0ULL || rel >= 0x144e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144e9f0 size=16 callers=0 calls=0
*/
void sub_144e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144e9f0ULL || rel >= 0x144ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ea00 size=16 callers=0 calls=0
*/
void sub_144ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ea00ULL || rel >= 0x144ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ea10 size=16 callers=0 calls=0
*/
void sub_144ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ea10ULL || rel >= 0x144ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ea20 size=16 callers=0 calls=0
*/
void sub_144ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ea20ULL || rel >= 0x144ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ea30 size=16 callers=0 calls=0
*/
void sub_144ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ea30ULL || rel >= 0x144ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ea40 size=16 callers=0 calls=0
*/
void sub_144ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ea40ULL || rel >= 0x144ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ea50 size=16 callers=0 calls=0
*/
void sub_144ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ea50ULL || rel >= 0x144ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ea60 size=304 callers=0 calls=0
*/
void sub_144ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ea60ULL || rel >= 0x144eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144eb90 size=32 callers=0 calls=0
*/
void sub_144eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144eb90ULL || rel >= 0x144ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ebb0 size=16 callers=0 calls=0
*/
void sub_144ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ebb0ULL || rel >= 0x144ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ebc0 size=32 callers=0 calls=0
*/
void sub_144ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ebc0ULL || rel >= 0x144ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ebe0 size=32 callers=0 calls=0
*/
void sub_144ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ebe0ULL || rel >= 0x144ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ec00 size=32 callers=0 calls=0
*/
void sub_144ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ec00ULL || rel >= 0x144ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ec20 size=16 callers=0 calls=0
*/
void sub_144ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ec20ULL || rel >= 0x144ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ec30 size=32 callers=0 calls=0
*/
void sub_144ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ec30ULL || rel >= 0x144ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ec50 size=32 callers=0 calls=0
*/
void sub_144ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ec50ULL || rel >= 0x144ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ec70 size=16 callers=0 calls=0
*/
void sub_144ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ec70ULL || rel >= 0x144ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ec80 size=16 callers=0 calls=0
*/
void sub_144ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ec80ULL || rel >= 0x144ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ec90 size=16 callers=0 calls=0
*/
void sub_144ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ec90ULL || rel >= 0x144eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144eca0 size=16 callers=0 calls=0
*/
void sub_144eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144eca0ULL || rel >= 0x144ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ecb0 size=16 callers=0 calls=0
*/
void sub_144ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ecb0ULL || rel >= 0x144ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ecc0 size=16 callers=0 calls=0
*/
void sub_144ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ecc0ULL || rel >= 0x144ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ecd0 size=16 callers=0 calls=0
*/
void sub_144ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ecd0ULL || rel >= 0x144ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ece0 size=16 callers=0 calls=0
*/
void sub_144ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ece0ULL || rel >= 0x144ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ecf0 size=64 callers=0 calls=1
   calls: sub_144e910
*/
void sub_144ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ecf0ULL || rel >= 0x144ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ed30 size=16 callers=0 calls=0
*/
void sub_144ed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ed30ULL || rel >= 0x144ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ed40 size=16 callers=0 calls=0
*/
void sub_144ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ed40ULL || rel >= 0x144ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ed50 size=16 callers=0 calls=0
*/
void sub_144ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ed50ULL || rel >= 0x144ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ed60 size=528 callers=0 calls=7
   calls: sub_1545480, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: StateEnd
   ref: ViewMain
*/
void ViewMain(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ed60ULL || rel >= 0x144ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144ef70 size=64 callers=0 calls=2
   calls: sub_eb6630, sub_eb7830
*/
void sub_144ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ef70ULL || rel >= 0x144efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144efb0 size=16 callers=0 calls=0
*/
void sub_144efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144efb0ULL || rel >= 0x144efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144efc0 size=16 callers=0 calls=0
*/
void sub_144efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144efc0ULL || rel >= 0x144efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144efd0 size=16 callers=0 calls=0
*/
void sub_144efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144efd0ULL || rel >= 0x144efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144efe0 size=16 callers=0 calls=0
*/
void sub_144efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144efe0ULL || rel >= 0x144eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144eff0 size=16 callers=0 calls=0
*/
void sub_144eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144eff0ULL || rel >= 0x144f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f000 size=16 callers=0 calls=0
*/
void sub_144f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f000ULL || rel >= 0x144f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f010 size=16 callers=0 calls=0
*/
void sub_144f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f010ULL || rel >= 0x144f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f020 size=16 callers=0 calls=0
*/
void sub_144f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f020ULL || rel >= 0x144f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f030 size=16 callers=0 calls=0
*/
void sub_144f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f030ULL || rel >= 0x144f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f040 size=304 callers=0 calls=0
*/
void sub_144f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f040ULL || rel >= 0x144f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f170 size=32 callers=5 calls=0
*/
void sub_144f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f170ULL || rel >= 0x144f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f190 size=48 callers=0 calls=0
*/
void sub_144f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f190ULL || rel >= 0x144f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f1c0 size=112 callers=2 calls=4
   calls: sub_136b550, sub_136b580, sub_136b590, sub_136b690
*/
void sub_144f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f1c0ULL || rel >= 0x144f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f230 size=160 callers=2 calls=6
   calls: sub_67c270, sub_767680, sub_7676d0, sub_767d90, sub_7692e0, sub_769330
*/
void sub_144f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f230ULL || rel >= 0x144f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f2d0 size=144 callers=3 calls=1
   calls: sub_144f360
*/
void sub_144f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f2d0ULL || rel >= 0x144f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f360 size=288 callers=2 calls=3
   calls: sub_1451d90, sub_c38350, sub_e9db40
*/
void sub_144f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f360ULL || rel >= 0x144f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f480 size=384 callers=0 calls=2
   calls: sub_13a1100, sub_eac9a0
*/
void sub_144f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f480ULL || rel >= 0x144f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f600 size=16 callers=0 calls=0
*/
void sub_144f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f600ULL || rel >= 0x144f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f610 size=16 callers=0 calls=0
*/
void sub_144f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f610ULL || rel >= 0x144f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f620 size=16 callers=0 calls=0
*/
void sub_144f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f620ULL || rel >= 0x144f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f630 size=16 callers=0 calls=0
*/
void sub_144f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f630ULL || rel >= 0x144f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f640 size=16 callers=0 calls=0
*/
void sub_144f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f640ULL || rel >= 0x144f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f650 size=16 callers=0 calls=0
*/
void sub_144f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f650ULL || rel >= 0x144f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144f660 size=1184 callers=0 calls=4
   calls: MEET_BY_TRADE_3, sub_136e8b0, sub_144fe00, sub_c3b970
*/
void sub_144f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f660ULL || rel >= 0x144fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144fb00 size=768 callers=4 calls=5
   calls: sub_1045040, sub_1045110, sub_12fac60, sub_1350010, sub_1350770
   ref: MEET_BY_TRADE
*/
void MEET_BY_TRADE_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144fb00ULL || rel >= 0x144fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0144fe00 size=608 callers=2 calls=2
   calls: sub_1045040, sub_1045110
*/
void sub_144fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144fe00ULL || rel >= 0x1450060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01450060 size=3552 callers=0 calls=35
   calls: sub_102d1c0, sub_105c390, sub_12f9ef0, sub_1307dd0, sub_1308340, sub_13a10f0, sub_13a1100, sub_13a1150, sub_13a11f0, sub_13a4c20, sub_13a4f20, sub_1450e40
   ... +23 more
   ref: common/trade_demo.dat
   ref: sd9130_trade
*/
void sd9130_trade(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1450060ULL || rel >= 0x1450e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01450e40 size=1664 callers=1 calls=9
   calls: sub_13118e0, sub_1311c60, sub_1313580, sub_1314a80, sub_136b5e0, sub_144f230, sub_67b7e0, sub_67b990, sub_67d450
*/
void sub_1450e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1450e40ULL || rel >= 0x14514c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014514c0 size=336 callers=1 calls=3
   calls: sub_136b5e0, sub_144f230, sub_767950
*/
void sub_14514c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14514c0ULL || rel >= 0x1451610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451610 size=624 callers=1 calls=9
   calls: sub_102ddb0, sub_12fa500, sub_13000b0, sub_1379a10, sub_1451f50, sub_762930, sub_767950, sub_76f440, sub_76f6c0
*/
void sub_1451610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451610ULL || rel >= 0x1451880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451880 size=448 callers=1 calls=5
   calls: sub_102dde0, sub_1451f50, sub_767eb0, sub_76f440, sub_76f6c0
*/
void sub_1451880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451880ULL || rel >= 0x1451a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451a40 size=496 callers=1 calls=3
   calls: sub_1350010, sub_1350770, sub_1451f50
*/
void sub_1451a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451a40ULL || rel >= 0x1451c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451c30 size=16 callers=0 calls=0
*/
void sub_1451c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451c30ULL || rel >= 0x1451c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451c40 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_1451c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451c40ULL || rel >= 0x1451cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451cb0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_1451cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451cb0ULL || rel >= 0x1451d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451d20 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_1451d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451d20ULL || rel >= 0x1451d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451d90 size=448 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_1451d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451d90ULL || rel >= 0x1451f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01451f50 size=464 callers=4 calls=0
*/
void sub_1451f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1451f50ULL || rel >= 0x1452120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01452120 size=96 callers=0 calls=2
   calls: sub_13a1150, sub_13a11f0
*/
void sub_1452120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452120ULL || rel >= 0x1452180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01452180 size=64 callers=0 calls=0
*/
void sub_1452180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452180ULL || rel >= 0x14521c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014521c0 size=48 callers=0 calls=0
*/
void sub_14521c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14521c0ULL || rel >= 0x14521f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014521f0 size=48 callers=0 calls=0
*/
void sub_14521f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14521f0ULL || rel >= 0x1452220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01452220 size=128 callers=0 calls=0
*/
void sub_1452220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452220ULL || rel >= 0x14522a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014522a0 size=528 callers=5 calls=6
   calls: sub_1453960, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76d0d0
   ref: bin/trainer/trainer_data/trainer_data_%03d.bin
*/
void trainer_data__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14522a0ULL || rel >= 0x14524b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014524b0 size=304 callers=2 calls=3
   calls: sub_1453960, sub_5dd790, sub_76d0d0
   ref: bin/trainer/trainer_data/trainer_data_%03d.bin
*/
void trainer_data__03d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14524b0ULL || rel >= 0x14525e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014525e0 size=272 callers=1 calls=5
   calls: sub_1453960, sub_7ce070, sub_7ce150, sub_7ce180, trainer_data__03d
*/
void sub_14525e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14525e0ULL || rel >= 0x14526f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014526f0 size=976 callers=1 calls=12
   calls: sub_1452ac0, sub_1453960, sub_1453a90, sub_1453cb0, sub_67b990, sub_767690, sub_7676e0, sub_7847d0, trainer_data__03d, trainer_poke__03d, trainer_type__03d_2, trname_2
*/
void sub_14526f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14526f0ULL || rel >= 0x1452ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01452ac0 size=352 callers=1 calls=3
   calls: sub_1452c20, sub_1452db0, sub_76f5d0
*/
void sub_1452ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452ac0ULL || rel >= 0x1452c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01452c20 size=400 callers=1 calls=3
   calls: sub_1453cb0, sub_76bc60, sub_76bc80
*/
void sub_1452c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452c20ULL || rel >= 0x1452db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01452db0 size=304 callers=1 calls=7
   calls: sub_1453ce0, sub_762d90, sub_763010, sub_763dd0, sub_763e00, sub_764df0, sub_7664a0
*/
void sub_1452db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452db0ULL || rel >= 0x1452ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01452ee0 size=976 callers=1 calls=10
   calls: sub_130be10, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_67c970, sub_67d370, sub_67d450, sub_e98170, trmsg__03d, unnamed_47
   ref: common/trmsg.tbl
   ref: common/trmsg.dat
*/
void trmsg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452ee0ULL || rel >= 0x14532b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014532b0 size=512 callers=3 calls=5
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76d0d0
   ref: bin/trainer_msg/trmsg_%03d.bin
*/
void trmsg__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14532b0ULL || rel >= 0x14534b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014534b0 size=96 callers=0 calls=1
   calls: trmsg__03d
*/
void sub_14534b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14534b0ULL || rel >= 0x1453510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453510 size=96 callers=0 calls=1
   calls: trmsg__03d
*/
void sub_1453510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453510ULL || rel >= 0x1453570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453570 size=480 callers=2 calls=3
   calls: sub_67c970, sub_67d080, unnamed_47
   ref: common/trname.dat
*/
void trname_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453570ULL || rel >= 0x1453750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453750 size=528 callers=1 calls=6
   calls: sub_1453960, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76d0d0
   ref: bin/trainer/trainer_poke/trainer_poke_%03d.bin
*/
void trainer_poke__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453750ULL || rel >= 0x1453960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453960 size=16 callers=5 calls=0
*/
void sub_1453960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453960ULL || rel >= 0x1453970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453970 size=288 callers=3 calls=0
*/
void sub_1453970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453970ULL || rel >= 0x1453a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453a90 size=32 callers=4 calls=0
*/
void sub_1453a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453a90ULL || rel >= 0x1453ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453ab0 size=512 callers=4 calls=5
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76d0d0
   ref: bin/trainer/trainer_type/trainer_type_%03d.bin
*/
void trainer_type__03d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453ab0ULL || rel >= 0x1453cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453cb0 size=16 callers=4 calls=0
*/
void sub_1453cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453cb0ULL || rel >= 0x1453cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453cc0 size=16 callers=1 calls=0
*/
void sub_1453cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453cc0ULL || rel >= 0x1453cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453cd0 size=16 callers=1 calls=0
*/
void sub_1453cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453cd0ULL || rel >= 0x1453ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453ce0 size=16 callers=2 calls=0
*/
void sub_1453ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453ce0ULL || rel >= 0x1453cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453cf0 size=16 callers=1 calls=0
*/
void sub_1453cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453cf0ULL || rel >= 0x1453d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453d00 size=128 callers=1 calls=0
*/
void sub_1453d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453d00ULL || rel >= 0x1453d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453d80 size=128 callers=1 calls=0
*/
void sub_1453d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453d80ULL || rel >= 0x1453e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453e00 size=16 callers=1 calls=0
*/
void sub_1453e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453e00ULL || rel >= 0x1453e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453e10 size=16 callers=1 calls=0
*/
void sub_1453e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453e10ULL || rel >= 0x1453e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453e20 size=16 callers=1 calls=0
*/
void sub_1453e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453e20ULL || rel >= 0x1453e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01453e30 size=480 callers=0 calls=3
   calls: sub_67c970, sub_67d080, unnamed_47
   ref: common/trtype.dat
*/
void trtype_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1453e30ULL || rel >= 0x1454010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454010 size=112 callers=1 calls=1
   calls: sub_1454080
*/
void sub_1454010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454010ULL || rel >= 0x1454080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454080 size=288 callers=1 calls=3
   calls: sub_1454a30, sub_c38350, sub_e9db40
*/
void sub_1454080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454080ULL || rel >= 0x14541a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014541a0 size=16 callers=0 calls=0
*/
void sub_14541a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14541a0ULL || rel >= 0x14541b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014541b0 size=16 callers=0 calls=0
*/
void sub_14541b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14541b0ULL || rel >= 0x14541c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014541c0 size=112 callers=0 calls=1
   calls: sub_1454230
*/
void sub_14541c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14541c0ULL || rel >= 0x1454230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454230 size=400 callers=1 calls=2
   calls: sub_14543d0, sub_14553b0
*/
void sub_1454230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454230ULL || rel >= 0x14543c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014543c0 size=16 callers=0 calls=0
*/
void sub_14543c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14543c0ULL || rel >= 0x14543d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014543d0 size=272 callers=1 calls=3
   calls: sub_1454bf0, sub_672c10, sub_c386f0
*/
void sub_14543d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14543d0ULL || rel >= 0x14544e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014544e0 size=144 callers=1 calls=0
*/
void sub_14544e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14544e0ULL || rel >= 0x1454570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454570 size=144 callers=0 calls=0
*/
void sub_1454570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454570ULL || rel >= 0x1454600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454600 size=144 callers=0 calls=0
*/
void sub_1454600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454600ULL || rel >= 0x1454690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454690 size=16 callers=0 calls=0
*/
void sub_1454690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454690ULL || rel >= 0x14546a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014546a0 size=144 callers=0 calls=0
*/
void sub_14546a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14546a0ULL || rel >= 0x1454730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454730 size=144 callers=0 calls=0
*/
void sub_1454730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454730ULL || rel >= 0x14547c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014547c0 size=16 callers=0 calls=0
*/
void sub_14547c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14547c0ULL || rel >= 0x14547d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014547d0 size=16 callers=0 calls=0
*/
void sub_14547d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14547d0ULL || rel >= 0x14547e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014547e0 size=144 callers=0 calls=0
*/
void sub_14547e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14547e0ULL || rel >= 0x1454870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454870 size=144 callers=0 calls=0
*/
void sub_1454870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454870ULL || rel >= 0x1454900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454900 size=304 callers=0 calls=0
*/
void sub_1454900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454900ULL || rel >= 0x1454a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454a30 size=448 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_1454a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454a30ULL || rel >= 0x1454bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454bf0 size=256 callers=1 calls=2
   calls: sub_1454cf0, sub_e7b660
*/
void sub_1454bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454bf0ULL || rel >= 0x1454cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454cf0 size=224 callers=1 calls=3
   calls: sub_1454dd0, sub_7c2da0, sub_e7b5e0
*/
void sub_1454cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454cf0ULL || rel >= 0x1454dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454dd0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1454dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454dd0ULL || rel >= 0x1454ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454ec0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1454ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454ec0ULL || rel >= 0x1454f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01454f40 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1454f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1454f40ULL || rel >= 0x14550b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014550b0 size=96 callers=0 calls=1
   calls: sub_14552d0
*/
void sub_14550b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14550b0ULL || rel >= 0x1455110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01455110 size=16 callers=0 calls=0
*/
void sub_1455110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455110ULL || rel >= 0x1455120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01455120 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1455120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455120ULL || rel >= 0x14551c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014551c0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14551c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14551c0ULL || rel >= 0x1455280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01455280 size=16 callers=0 calls=0
*/
void sub_1455280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455280ULL || rel >= 0x1455290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01455290 size=16 callers=0 calls=0
*/
void sub_1455290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455290ULL || rel >= 0x14552a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014552a0 size=16 callers=0 calls=0
*/
void sub_14552a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14552a0ULL || rel >= 0x14552b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014552b0 size=32 callers=0 calls=0
*/
void sub_14552b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14552b0ULL || rel >= 0x14552d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014552d0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_14552d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14552d0ULL || rel >= 0x14553b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014553b0 size=240 callers=1 calls=1
   calls: sub_c39c40
*/
void sub_14553b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14553b0ULL || rel >= 0x14554a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014554a0 size=128 callers=0 calls=0
*/
void sub_14554a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14554a0ULL || rel >= 0x1455520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01455520 size=1744 callers=0 calls=17
   calls: font_fs_150_bold_00, sub_1455bf0, sub_1456d00, sub_1457050, sub_14573a0, sub_1457f30, sub_14beec0, sub_14bfa90, sub_14cace0, sub_78f150, sub_78f240, sub_794e80
   ... +5 more
   ref: CommonOptionBar
   ref: ViewBg
   ref: ViewMsg
   ref: common/trainer_license.dat
   ref: ViewCamp
   ref: ViewCard
*/
void ViewCamp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455520ULL || rel >= 0x1455bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01455bf0 size=432 callers=1 calls=3
   calls: sub_1456b90, sub_e7c160, sub_e7c210
*/
void sub_1455bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455bf0ULL || rel >= 0x1455da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01455da0 size=64 callers=0 calls=2
   calls: sub_14bf040, sub_14cae50
*/
void sub_1455da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455da0ULL || rel >= 0x1455de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01455de0 size=608 callers=0 calls=11
   calls: L_card_00, sub_1345e70, sub_1345eb0, sub_1457720, sub_1457870, sub_1458300, sub_1458350, sub_145ecd0, sub_14bf750, sub_795bc0, sub_e7eb10
   ref: CommonOptionBar
   ref: ViewCamp
   ref: ViewCard
*/
void ViewCamp_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1455de0ULL || rel >= 0x1456040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456040 size=144 callers=0 calls=6
   calls: sub_14bf2f0, sub_14bfb60, sub_14bfba0, sub_14cae60, sub_14cc350, sub_682dd0
*/
void sub_1456040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456040ULL || rel >= 0x14560d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014560d0 size=208 callers=0 calls=3
   calls: sub_1458260, sub_14bf490, sub_14caf00
*/
void sub_14560d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14560d0ULL || rel >= 0x14561a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014561a0 size=672 callers=0 calls=6
   calls: sub_1345d20, sub_14579c0, sub_1457b00, sub_1457c40, sub_1457d70, sub_e7c160
*/
void sub_14561a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14561a0ULL || rel >= 0x1456440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456440 size=544 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1456440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456440ULL || rel >= 0x1456660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456660 size=16 callers=0 calls=0
*/
void sub_1456660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456660ULL || rel >= 0x1456670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456670 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1456670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456670ULL || rel >= 0x1456720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456720 size=16 callers=0 calls=0
*/
void sub_1456720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456720ULL || rel >= 0x1456730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456730 size=16 callers=0 calls=0
*/
void sub_1456730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456730ULL || rel >= 0x1456740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456740 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1456740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456740ULL || rel >= 0x14567f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014567f0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14567f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14567f0ULL || rel >= 0x14568a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014568a0 size=16 callers=0 calls=0
*/
void sub_14568a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14568a0ULL || rel >= 0x14568b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014568b0 size=16 callers=0 calls=0
*/
void sub_14568b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14568b0ULL || rel >= 0x14568c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014568c0 size=112 callers=0 calls=0
*/
void sub_14568c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14568c0ULL || rel >= 0x1456930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456930 size=112 callers=0 calls=0
*/
void sub_1456930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456930ULL || rel >= 0x14569a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014569a0 size=16 callers=0 calls=0
*/
void sub_14569a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14569a0ULL || rel >= 0x14569b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014569b0 size=112 callers=0 calls=0
*/
void sub_14569b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14569b0ULL || rel >= 0x1456a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456a20 size=112 callers=0 calls=0
*/
void sub_1456a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456a20ULL || rel >= 0x1456a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456a90 size=16 callers=0 calls=0
*/
void sub_1456a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456a90ULL || rel >= 0x1456aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456aa0 size=16 callers=0 calls=0
*/
void sub_1456aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456aa0ULL || rel >= 0x1456ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456ab0 size=112 callers=0 calls=0
*/
void sub_1456ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456ab0ULL || rel >= 0x1456b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456b20 size=112 callers=0 calls=0
*/
void sub_1456b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456b20ULL || rel >= 0x1456b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456b90 size=304 callers=4 calls=0
*/
void sub_1456b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456b90ULL || rel >= 0x1456cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456cc0 size=16 callers=0 calls=0
*/
void sub_1456cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456cc0ULL || rel >= 0x1456cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456cd0 size=16 callers=0 calls=0
*/
void sub_1456cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456cd0ULL || rel >= 0x1456ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456ce0 size=16 callers=0 calls=0
*/
void sub_1456ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456ce0ULL || rel >= 0x1456cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456cf0 size=16 callers=0 calls=0
*/
void sub_1456cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456cf0ULL || rel >= 0x1456d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456d00 size=288 callers=3 calls=2
   calls: sub_1456e20, sub_e809c0
*/
void sub_1456d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456d00ULL || rel >= 0x1456e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01456e20 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1456e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1456e20ULL || rel >= 0x1457050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457050 size=288 callers=3 calls=2
   calls: sub_1457170, sub_e809c0
*/
void sub_1457050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457050ULL || rel >= 0x1457170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457170 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1457170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457170ULL || rel >= 0x14573a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014573a0 size=288 callers=1 calls=2
   calls: sub_14574c0, sub_e809c0
*/
void sub_14573a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14573a0ULL || rel >= 0x14574c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014574c0 size=608 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_14574c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14574c0ULL || rel >= 0x1457720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457720 size=336 callers=12 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1457720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457720ULL || rel >= 0x1457870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457870 size=336 callers=4 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1457870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457870ULL || rel >= 0x14579c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014579c0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_14579c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14579c0ULL || rel >= 0x1457b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457b00 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1457b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457b00ULL || rel >= 0x1457c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457c40 size=304 callers=1 calls=0
*/
void sub_1457c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457c40ULL || rel >= 0x1457d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457d70 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1457d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457d70ULL || rel >= 0x1457eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457eb0 size=128 callers=0 calls=0
*/
void sub_1457eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457eb0ULL || rel >= 0x1457f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01457f30 size=496 callers=3 calls=1
   calls: sub_14595a0
*/
void sub_1457f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1457f30ULL || rel >= 0x1458120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458120 size=16 callers=1 calls=0
*/
void sub_1458120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458120ULL || rel >= 0x1458130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458130 size=304 callers=0 calls=8
   calls: sub_14588a0, sub_1458ab0, sub_1458c50, sub_1459ac0, sub_1459d20, sub_1459e00, sub_1459e50, sub_eb75e0
*/
void sub_1458130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458130ULL || rel >= 0x1458260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458260 size=160 callers=3 calls=0
*/
void sub_1458260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458260ULL || rel >= 0x1458300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458300 size=16 callers=3 calls=0
*/
void sub_1458300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458300ULL || rel >= 0x1458310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458310 size=64 callers=26 calls=2
   calls: sub_14585a0, sub_1459340
*/
void sub_1458310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458310ULL || rel >= 0x1458350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458350 size=144 callers=3 calls=0
*/
void sub_1458350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458350ULL || rel >= 0x14583e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014583e0 size=144 callers=1 calls=0
*/
void sub_14583e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14583e0ULL || rel >= 0x1458470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458470 size=16 callers=4 calls=0
*/
void sub_1458470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458470ULL || rel >= 0x1458480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458480 size=240 callers=0 calls=0
*/
void sub_1458480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458480ULL || rel >= 0x1458570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458570 size=16 callers=0 calls=0
*/
void sub_1458570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458570ULL || rel >= 0x1458580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458580 size=16 callers=0 calls=0
*/
void sub_1458580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458580ULL || rel >= 0x1458590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458590 size=16 callers=0 calls=0
*/
void sub_1458590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458590ULL || rel >= 0x14585a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014585a0 size=400 callers=1 calls=3
   calls: sub_67d450, sub_eb7570, sub_eb75e0
*/
void sub_14585a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14585a0ULL || rel >= 0x1458730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458730 size=368 callers=0 calls=2
   calls: sub_67d450, sub_eb7570
*/
void sub_1458730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458730ULL || rel >= 0x14588a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014588a0 size=528 callers=1 calls=3
   calls: sub_1459e00, sub_67d450, sub_eb7570
*/
void sub_14588a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14588a0ULL || rel >= 0x1458ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458ab0 size=416 callers=1 calls=3
   calls: sub_1459e00, sub_67d450, sub_eb7570
*/
void sub_1458ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458ab0ULL || rel >= 0x1458c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458c50 size=864 callers=1 calls=5
   calls: sub_1459ac0, sub_1459d20, sub_1459e50, sub_67d450, sub_eb7570
*/
void sub_1458c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458c50ULL || rel >= 0x1458fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01458fb0 size=272 callers=0 calls=2
   calls: sub_67d450, sub_eb7570
*/
void sub_1458fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1458fb0ULL || rel >= 0x14590c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014590c0 size=368 callers=0 calls=2
   calls: sub_67d450, sub_eb7570
*/
void sub_14590c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14590c0ULL || rel >= 0x1459230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459230 size=272 callers=0 calls=2
   calls: sub_67d450, sub_eb7570
*/
void sub_1459230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459230ULL || rel >= 0x1459340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459340 size=256 callers=1 calls=6
   calls: sub_1311c60, sub_1315b90, sub_1459e00, sub_67d450, sub_eb7640, sub_eb76a0
*/
void sub_1459340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459340ULL || rel >= 0x1459440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459440 size=176 callers=0 calls=0
*/
void sub_1459440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459440ULL || rel >= 0x14594f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014594f0 size=176 callers=0 calls=0
*/
void sub_14594f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14594f0ULL || rel >= 0x14595a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014595a0 size=656 callers=1 calls=2
   calls: sub_13118e0, sub_67b990
*/
void sub_14595a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14595a0ULL || rel >= 0x1459830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459830 size=320 callers=2 calls=2
   calls: sub_1459970, sub_145cd90
*/
void sub_1459830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459830ULL || rel >= 0x1459970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459970 size=336 callers=1 calls=11
   calls: sub_145a5d0, sub_145a6d0, sub_145a820, sub_145a970, sub_145ab10, sub_145ac90, sub_145ae10, sub_145af90, sub_145b110, sub_145b290, sub_145d050
*/
void sub_1459970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459970ULL || rel >= 0x1459ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459ac0 size=16 callers=8 calls=0
*/
void sub_1459ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459ac0ULL || rel >= 0x1459ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459ad0 size=592 callers=6 calls=3
   calls: sub_1345d10, sub_14beb30, sub_b6f8c0
*/
void sub_1459ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459ad0ULL || rel >= 0x1459d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459d20 size=64 callers=6 calls=1
   calls: sub_1345c90
*/
void sub_1459d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459d20ULL || rel >= 0x1459d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459d60 size=112 callers=2 calls=10
   calls: sub_145a440, sub_145a5d0, sub_145a6d0, sub_145a820, sub_145a970, sub_145ab10, sub_145ac90, sub_145ae10, sub_145af90, sub_145b110
*/
void sub_1459d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459d60ULL || rel >= 0x1459dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459dd0 size=48 callers=0 calls=0
*/
void sub_1459dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459dd0ULL || rel >= 0x1459e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459e00 size=32 callers=12 calls=0
*/
void sub_1459e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459e00ULL || rel >= 0x1459e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459e20 size=48 callers=1 calls=0
*/
void sub_1459e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459e20ULL || rel >= 0x1459e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459e50 size=48 callers=12 calls=0
*/
void sub_1459e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459e50ULL || rel >= 0x1459e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459e80 size=208 callers=2 calls=3
   calls: sub_1345c90, sub_1345d10, sub_145b3f0
*/
void sub_1459e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459e80ULL || rel >= 0x1459f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459f50 size=16 callers=2 calls=0
*/
void sub_1459f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459f50ULL || rel >= 0x1459f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01459f60 size=352 callers=0 calls=0
*/
void sub_1459f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1459f60ULL || rel >= 0x145a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a0c0 size=48 callers=1 calls=0
*/
void sub_145a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a0c0ULL || rel >= 0x145a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a0f0 size=304 callers=2 calls=12
   calls: sub_1345e40, sub_145a440, sub_145a5d0, sub_145a6d0, sub_145a820, sub_145a970, sub_145ab10, sub_145ac90, sub_145ae10, sub_145af90, sub_145b110, sub_145b290
*/
void sub_145a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a0f0ULL || rel >= 0x145a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a220 size=96 callers=4 calls=0
*/
void sub_145a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a220ULL || rel >= 0x145a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a280 size=112 callers=0 calls=1
   calls: sub_145cd90
*/
void sub_145a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a280ULL || rel >= 0x145a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a2f0 size=112 callers=0 calls=1
   calls: sub_145cd90
*/
void sub_145a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a2f0ULL || rel >= 0x145a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a360 size=112 callers=0 calls=1
   calls: sub_145cd90
*/
void sub_145a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a360ULL || rel >= 0x145a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a3d0 size=112 callers=0 calls=1
   calls: sub_145cd90
*/
void sub_145a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a3d0ULL || rel >= 0x145a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a440 size=400 callers=3 calls=0
*/
void sub_145a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a440ULL || rel >= 0x145a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a5d0 size=256 callers=3 calls=3
   calls: sub_1345bd0, sub_1345d10, sub_145b3f0
*/
void sub_145a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a5d0ULL || rel >= 0x145a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a6d0 size=336 callers=3 calls=2
   calls: sub_145b3f0, sub_145b7b0
*/
void sub_145a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a6d0ULL || rel >= 0x145a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a820 size=336 callers=3 calls=2
   calls: sub_145b3f0, sub_145b7b0
*/
void sub_145a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a820ULL || rel >= 0x145a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145a970 size=416 callers=3 calls=4
   calls: sub_1345c90, sub_1459ad0, sub_145b3f0, sub_145b7b0
*/
void sub_145a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145a970ULL || rel >= 0x145ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ab10 size=384 callers=3 calls=3
   calls: sub_1459ad0, sub_145b3f0, sub_145b7b0
*/
void sub_145ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ab10ULL || rel >= 0x145ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ac90 size=384 callers=3 calls=3
   calls: sub_1459ad0, sub_145b3f0, sub_145b7b0
*/
void sub_145ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ac90ULL || rel >= 0x145ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ae10 size=384 callers=3 calls=3
   calls: sub_1459ad0, sub_145b3f0, sub_145b7b0
*/
void sub_145ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ae10ULL || rel >= 0x145af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145af90 size=384 callers=3 calls=3
   calls: sub_1459ad0, sub_145b3f0, sub_145b7b0
*/
void sub_145af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145af90ULL || rel >= 0x145b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b110 size=384 callers=3 calls=3
   calls: sub_1459ad0, sub_145b3f0, sub_145b7b0
*/
void sub_145b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b110ULL || rel >= 0x145b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b290 size=352 callers=2 calls=2
   calls: sub_145b3f0, sub_145b7b0
*/
void sub_145b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b290ULL || rel >= 0x145b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b3f0 size=544 callers=12 calls=0
*/
void sub_145b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b3f0ULL || rel >= 0x145b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b610 size=16 callers=0 calls=0
*/
void sub_145b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b610ULL || rel >= 0x145b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b620 size=288 callers=0 calls=2
   calls: sub_1345c90, sub_1345d10
*/
void sub_145b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b620ULL || rel >= 0x145b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b740 size=32 callers=0 calls=0
*/
void sub_145b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b740ULL || rel >= 0x145b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b760 size=16 callers=0 calls=0
*/
void sub_145b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b760ULL || rel >= 0x145b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b770 size=32 callers=0 calls=0
*/
void sub_145b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b770ULL || rel >= 0x145b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b790 size=32 callers=0 calls=0
*/
void sub_145b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b790ULL || rel >= 0x145b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145b7b0 size=2016 callers=11 calls=5
   calls: sub_145b7b0, sub_145bf90, sub_145c270, sub_145c460, sub_145c6c0
*/
void sub_145b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145b7b0ULL || rel >= 0x145bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145bf90 size=736 callers=3 calls=0
*/
void sub_145bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145bf90ULL || rel >= 0x145c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145c270 size=496 callers=3 calls=1
   calls: sub_145bf90
*/
void sub_145c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145c270ULL || rel >= 0x145c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145c460 size=608 callers=1 calls=0
*/
void sub_145c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145c460ULL || rel >= 0x145c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145c6c0 size=1264 callers=2 calls=2
   calls: sub_145bf90, sub_145c270
*/
void sub_145c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145c6c0ULL || rel >= 0x145cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145cbb0 size=288 callers=0 calls=2
   calls: sub_1345c90, sub_1345d10
*/
void sub_145cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145cbb0ULL || rel >= 0x145ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145ccd0 size=192 callers=0 calls=0
*/
void sub_145ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ccd0ULL || rel >= 0x145cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0145cd90 size=352 callers=7 calls=2
   calls: sub_145a440, sub_145cef0
*/
void sub_145cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145cd90ULL || rel >= 0x145cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

