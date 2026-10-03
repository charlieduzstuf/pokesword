/* subsdk1 functions 0003e550..0006eb40 (3 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0003e550 size=96 callers=1 calls=0
*/
void sub_3e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e550ULL || rel >= 0x3e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003e5b0 size=96 callers=6 calls=1
   calls: sub_35f0
*/
void sub_3e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5b0ULL || rel >= 0x3e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003e610 size=96 callers=0 calls=1
   calls: sub_35f0
*/
void sub_3e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e610ULL || rel >= 0x3e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003e670 size=176 callers=0 calls=1
   calls: sub_35f0
*/
void sub_3e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e670ULL || rel >= 0x3e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003e720 size=48 callers=4 calls=0
*/
void sub_3e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e720ULL || rel >= 0x3e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003e750 size=176 callers=0 calls=0
*/
void sub_3e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e750ULL || rel >= 0x3e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003e800 size=400 callers=1 calls=3
   calls: sub_37c80, sub_f220, sub_f270
*/
void sub_3e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e800ULL || rel >= 0x3e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003e990 size=1344 callers=2 calls=9
   calls: sub_1630, sub_29b0, sub_2ebc0, sub_314f0, sub_35a0, sub_35f0, sub_3770, sub_39560, sub_3fa0
   ref: internal-sym%d
*/
void internal_sym_d_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e990ULL || rel >= 0x3eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003eed0 size=752 callers=1 calls=0
*/
void sub_3eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eed0ULL || rel >= 0x3f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003f1c0 size=352 callers=3 calls=0
*/
void sub_3f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1c0ULL || rel >= 0x3f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003f320 size=304 callers=1 calls=1
   calls: sub_3f1c0
*/
void sub_3f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f320ULL || rel >= 0x3f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003f450 size=864 callers=2 calls=10
   calls: sub_1630, sub_1cd0, sub_29b0, sub_2ebc0, sub_314f0, sub_35a0, sub_35f0, sub_3770, sub_39560, sub_3fa0
   ref: internal-sym%d
*/
void internal_sym_d_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f450ULL || rel >= 0x3f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003f7b0 size=416 callers=6 calls=1
   calls: internal_sym_d_2
*/
void sub_3f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7b0ULL || rel >= 0x3f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0003f950 size=1968 callers=0 calls=13
   calls: sub_1630, sub_1cd0, sub_29b0, sub_2ebc0, sub_313f0, sub_314f0, sub_35330, sub_35a0, sub_35f0, sub_3770, sub_39560, sub_3c7d0
   ... +1 more
   ref: internal-sym%d
*/
void internal_sym_d_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f950ULL || rel >= 0x40100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040100 size=112 callers=6 calls=1
   calls: sub_40100
*/
void sub_40100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40100ULL || rel >= 0x40170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040170 size=128 callers=11 calls=1
   calls: sub_40170
*/
void sub_40170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40170ULL || rel >= 0x401f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000401f0 size=736 callers=6 calls=5
   calls: sub_1630, sub_2060, sub_35f0, sub_3670, sub_401f0
*/
void sub_401f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401f0ULL || rel >= 0x404d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000404d0 size=144 callers=1 calls=0
*/
void sub_404d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404d0ULL || rel >= 0x40560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040560 size=16 callers=1 calls=0
*/
void sub_40560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40560ULL || rel >= 0x40570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040570 size=1040 callers=4 calls=1
   calls: sub_35330
*/
void sub_40570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40570ULL || rel >= 0x40980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040980 size=368 callers=4 calls=1
   calls: sub_35330
*/
void sub_40980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40980ULL || rel >= 0x40af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040af0 size=112 callers=4 calls=0
*/
void sub_40af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40af0ULL || rel >= 0x40b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040b60 size=80 callers=0 calls=0
*/
void sub_40b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b60ULL || rel >= 0x40bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040bb0 size=16 callers=0 calls=0
*/
void sub_40bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb0ULL || rel >= 0x40bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040bc0 size=64 callers=0 calls=0
*/
void sub_40bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bc0ULL || rel >= 0x40c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040c00 size=16 callers=6 calls=0
*/
void sub_40c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c00ULL || rel >= 0x40c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040c10 size=32 callers=48 calls=0
*/
void sub_40c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c10ULL || rel >= 0x40c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00040c30 size=1200 callers=6 calls=3
   calls: sub_31140, sub_f220, sub_f270
*/
void sub_40c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c30ULL || rel >= 0x410e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000410e0 size=64 callers=1 calls=0
*/
void sub_410e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410e0ULL || rel >= 0x41120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041120 size=592 callers=1 calls=2
   calls: sub_31140, sub_41370
*/
void sub_41120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41120ULL || rel >= 0x41370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041370 size=416 callers=4 calls=0
*/
void sub_41370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41370ULL || rel >= 0x41510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041510 size=384 callers=2 calls=2
   calls: sub_40c30, sub_41120
*/
void sub_41510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41510ULL || rel >= 0x41690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041690 size=944 callers=1 calls=5
   calls: sub_2ebf0, sub_31140, sub_312e0, sub_35a0, sub_35f0
*/
void sub_41690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41690ULL || rel >= 0x41a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041a40 size=96 callers=4 calls=0
*/
void sub_41a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a40ULL || rel >= 0x41aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041aa0 size=96 callers=1 calls=0
*/
void sub_41aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41aa0ULL || rel >= 0x41b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041b00 size=160 callers=4 calls=1
   calls: sub_31140
*/
void sub_41b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b00ULL || rel >= 0x41ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041ba0 size=176 callers=1 calls=4
   calls: sub_2ebc0, sub_31030, sub_35f0, sub_39670
   ref: bb-controlflow
*/
void bb_controlflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ba0ULL || rel >= 0x41c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041c50 size=64 callers=1 calls=0
*/
void sub_41c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c50ULL || rel >= 0x41c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041c90 size=176 callers=1 calls=0
*/
void sub_41c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41c90ULL || rel >= 0x41d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041d40 size=96 callers=4 calls=0
*/
void sub_41d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41d40ULL || rel >= 0x41da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041da0 size=48 callers=1 calls=0
*/
void sub_41da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41da0ULL || rel >= 0x41dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041dd0 size=96 callers=1 calls=0
*/
void sub_41dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41dd0ULL || rel >= 0x41e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00041e30 size=1952 callers=2 calls=3
   calls: sub_29b0, sub_2f230, sub_3770
*/
void sub_41e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41e30ULL || rel >= 0x425d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000425d0 size=352 callers=2 calls=1
   calls: sub_17640
*/
void sub_425d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425d0ULL || rel >= 0x42730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042730 size=144 callers=1 calls=1
   calls: sub_17640
*/
void sub_42730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42730ULL || rel >= 0x427c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000427c0 size=32 callers=4 calls=0
*/
void sub_427c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427c0ULL || rel >= 0x427e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000427e0 size=80 callers=3 calls=0
*/
void sub_427e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427e0ULL || rel >= 0x42830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042830 size=16 callers=1 calls=0
*/
void sub_42830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42830ULL || rel >= 0x42840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042840 size=96 callers=284 calls=0
*/
void sub_42840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42840ULL || rel >= 0x428a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000428a0 size=64 callers=51 calls=0
*/
void sub_428a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428a0ULL || rel >= 0x428e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000428e0 size=32 callers=1 calls=0
*/
void sub_428e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428e0ULL || rel >= 0x42900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042900 size=16 callers=0 calls=0
*/
void sub_42900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42900ULL || rel >= 0x42910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042910 size=16 callers=0 calls=0
*/
void sub_42910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42910ULL || rel >= 0x42920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042920 size=16 callers=0 calls=0
*/
void sub_42920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42920ULL || rel >= 0x42930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042930 size=16 callers=0 calls=0
*/
void sub_42930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42930ULL || rel >= 0x42940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042940 size=16 callers=0 calls=0
*/
void sub_42940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42940ULL || rel >= 0x42950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042950 size=16 callers=0 calls=0
*/
void sub_42950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42950ULL || rel >= 0x42960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042960 size=16 callers=0 calls=0
*/
void sub_42960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42960ULL || rel >= 0x42970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042970 size=16 callers=0 calls=0
*/
void sub_42970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42970ULL || rel >= 0x42980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042980 size=16 callers=0 calls=0
*/
void sub_42980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42980ULL || rel >= 0x42990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042990 size=64 callers=1 calls=1
   calls: sub_1df30
*/
void sub_42990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42990ULL || rel >= 0x429d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000429d0 size=1216 callers=0 calls=0
   ref: ENDPRIM
   ref: MUL.HI
   ref: ENDLOOP
*/
void ENDPRIM(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429d0ULL || rel >= 0x42e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00042e90 size=640 callers=0 calls=0
*/
void sub_42e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42e90ULL || rel >= 0x43110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043110 size=240 callers=0 calls=0
*/
void sub_43110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43110ULL || rel >= 0x43200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043200 size=208 callers=0 calls=1
   calls: sub_1e40
   ref: <<VAR:NotReg>>
   ref: <<VARYING>>
*/
void VARYING_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43200ULL || rel >= 0x432d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000432d0 size=560 callers=0 calls=4
   calls: sub_1e40, sub_3fa0, sub_40100, sub_404d0
   ref: <<COLOR=ZERO>>
   ref: <<BadChild>>
*/
void BadChild(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432d0ULL || rel >= 0x43500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043500 size=16 callers=0 calls=0
*/
void sub_43500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43500ULL || rel >= 0x43510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043510 size=128 callers=0 calls=0
   ref: <<COLOR=ZERO>>
*/
void COLOR_ZERO(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43510ULL || rel >= 0x43590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00043590 size=4128 callers=1 calls=5
   calls: sub_1e040, sub_1e060, sub_3fa0, sub_40570, vr_dcc
   ref: %-5s %s, %s;
   ref: # %s  %s
   ref: %-5s BB%d (%s);
   ref: %-5s (TR);
   ref: %-5s %s, %s, %s, %s, %s, %s;
   ref: %-5s BB%d;
   ref: %-5s %s, %s, %s, %s;
   ref: %s %s;
*/
void unnamed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43590ULL || rel >= 0x445b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000445b0 size=48 callers=1 calls=1
   calls: sub_f2d0
*/
void sub_445b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445b0ULL || rel >= 0x445e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000445e0 size=48 callers=0 calls=0
*/
void sub_445e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445e0ULL || rel >= 0x44610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044610 size=96 callers=1 calls=1
   calls: sub_19740
*/
void sub_44610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44610ULL || rel >= 0x44670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044670 size=416 callers=0 calls=1
   calls: sub_36040
*/
void sub_44670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44670ULL || rel >= 0x44810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044810 size=16 callers=0 calls=0
*/
void sub_44810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44810ULL || rel >= 0x44820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044820 size=144 callers=4 calls=2
   calls: sub_318a0, sub_35d0
*/
void sub_44820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44820ULL || rel >= 0x448b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000448b0 size=16 callers=1 calls=0
*/
void sub_448b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448b0ULL || rel >= 0x448c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000448c0 size=16 callers=1 calls=0
*/
void sub_448c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448c0ULL || rel >= 0x448d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000448d0 size=32 callers=1 calls=0
*/
void sub_448d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448d0ULL || rel >= 0x448f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000448f0 size=96 callers=1 calls=2
   calls: sub_2670, sub_29b0
*/
void sub_448f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448f0ULL || rel >= 0x44950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044950 size=48 callers=1 calls=1
   calls: sub_29b0
*/
void sub_44950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44950ULL || rel >= 0x44980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044980 size=64 callers=29 calls=0
*/
void sub_44980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44980ULL || rel >= 0x449c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000449c0 size=864 callers=1 calls=0
*/
void sub_449c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449c0ULL || rel >= 0x44d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044d20 size=160 callers=8 calls=0
*/
void sub_44d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d20ULL || rel >= 0x44dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044dc0 size=112 callers=14 calls=0
*/
void sub_44dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dc0ULL || rel >= 0x44e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044e30 size=64 callers=2 calls=0
*/
void sub_44e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e30ULL || rel >= 0x44e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044e70 size=272 callers=6 calls=1
   calls: sub_40c10
*/
void sub_44e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e70ULL || rel >= 0x44f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00044f80 size=256 callers=11 calls=4
   calls: sub_31700, sub_35a0, sub_35ec0, sub_44820
*/
void sub_44f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f80ULL || rel >= 0x45080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00045080 size=208 callers=11 calls=4
   calls: sub_31700, sub_35a0, sub_36040, sub_44820
*/
void sub_45080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45080ULL || rel >= 0x45150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00045150 size=144 callers=1 calls=2
   calls: sub_34be0, sub_38be0
*/
void sub_45150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45150ULL || rel >= 0x451e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000451e0 size=512 callers=9 calls=1
   calls: sub_451e0
*/
void sub_451e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451e0ULL || rel >= 0x453e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000453e0 size=544 callers=0 calls=3
   calls: sub_35ec0, sub_39cb0, sub_45600
*/
void sub_453e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x453e0ULL || rel >= 0x45600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00045600 size=304 callers=1 calls=2
   calls: sub_31b90, sub_35a0
*/
void sub_45600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45600ULL || rel >= 0x45730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00045730 size=1616 callers=0 calls=10
   calls: sub_310a0, sub_314f0, sub_31b90, sub_35a0, sub_35ec0, sub_37660, sub_39920, sub_3cb30, sub_45d80, sub_f120
*/
void sub_45730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45730ULL || rel >= 0x45d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00045d80 size=832 callers=2 calls=4
   calls: sub_310d0, sub_37780, sub_39040, sub_4bdd0
*/
void sub_45d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45d80ULL || rel >= 0x460c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000460c0 size=336 callers=0 calls=4
   calls: sub_17170, sub_17210, sub_175d0, sub_3ab80
*/
void sub_460c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x460c0ULL || rel >= 0x46210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046210 size=144 callers=1 calls=2
   calls: sub_34be0, sub_38be0
*/
void sub_46210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46210ULL || rel >= 0x462a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000462a0 size=96 callers=0 calls=1
   calls: sub_1e40
*/
void sub_462a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x462a0ULL || rel >= 0x46300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046300 size=224 callers=0 calls=0
*/
void sub_46300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46300ULL || rel >= 0x463e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000463e0 size=64 callers=0 calls=0
*/
void sub_463e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463e0ULL || rel >= 0x46420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046420 size=64 callers=0 calls=0
*/
void sub_46420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46420ULL || rel >= 0x46460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046460 size=480 callers=0 calls=1
   calls: sub_37660
*/
void sub_46460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46460ULL || rel >= 0x46640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046640 size=208 callers=0 calls=4
   calls: sub_31700, sub_35a0, sub_36040, sub_40c10
*/
void sub_46640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46640ULL || rel >= 0x46710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046710 size=1024 callers=0 calls=7
   calls: sub_310a0, sub_31700, sub_31b90, sub_35a0, sub_35ec0, sub_37830, sub_37be0
*/
void sub_46710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46710ULL || rel >= 0x46b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046b10 size=272 callers=0 calls=3
   calls: sub_31b90, sub_35a0, sub_37be0
*/
void sub_46b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46b10ULL || rel >= 0x46c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046c20 size=624 callers=4 calls=1
   calls: sub_310a0
*/
void sub_46c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46c20ULL || rel >= 0x46e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00046e90 size=1008 callers=0 calls=8
   calls: sub_31b90, sub_351c0, sub_35a0, sub_36040, sub_36310, sub_3ae70, sub_3b1f0, sub_40c10
*/
void sub_46e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e90ULL || rel >= 0x47280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00047280 size=224 callers=0 calls=4
   calls: sub_37660, sub_391e0, sub_3af50, sub_3c7d0
*/
void sub_47280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47280ULL || rel >= 0x47360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00047360 size=464 callers=0 calls=5
   calls: sub_31700, sub_31b90, sub_35a0, sub_3af50, sub_47530
*/
void sub_47360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47360ULL || rel >= 0x47530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00047530 size=720 callers=1 calls=3
   calls: sub_31700, sub_31b90, sub_35a0
*/
void sub_47530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47530ULL || rel >= 0x47800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00047800 size=1024 callers=0 calls=7
   calls: sub_310a0, sub_36020, sub_36040, sub_376f0, sub_3b1f0, sub_40c10, sub_45080
*/
void sub_47800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47800ULL || rel >= 0x47c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00047c00 size=1328 callers=0 calls=9
   calls: sub_31700, sub_31b90, sub_31fa0, sub_35320, sub_35a0, sub_37780, sub_37be0, sub_391e0, sub_3af80
*/
void sub_47c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c00ULL || rel >= 0x48130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048130 size=224 callers=0 calls=4
   calls: sub_31700, sub_35320, sub_35a0, sub_40c10
*/
void sub_48130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48130ULL || rel >= 0x48210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048210 size=112 callers=3 calls=2
   calls: sub_35320, sub_48210
*/
void sub_48210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48210ULL || rel >= 0x48280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048280 size=96 callers=1 calls=1
   calls: sub_48210
*/
void sub_48280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48280ULL || rel >= 0x482e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000482e0 size=592 callers=2 calls=5
   calls: sub_310a0, sub_310d0, sub_31b90, sub_35a0, sub_45080
*/
void sub_482e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482e0ULL || rel >= 0x48530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048530 size=352 callers=1 calls=1
   calls: sub_13d40
*/
void sub_48530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48530ULL || rel >= 0x48690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048690 size=544 callers=2 calls=3
   calls: sub_13d40, sub_36040, sub_48530
*/
void sub_48690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48690ULL || rel >= 0x488b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000488b0 size=880 callers=0 calls=8
   calls: sub_310a0, sub_31700, sub_35a0, sub_36040, sub_36310, sub_3ae70, sub_3cb30, sub_48690
*/
void sub_488b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488b0ULL || rel >= 0x48c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048c20 size=160 callers=1 calls=3
   calls: sub_34be0, sub_34d70, sub_388c0
*/
void sub_48c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c20ULL || rel >= 0x48cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048cc0 size=256 callers=0 calls=6
   calls: sub_13d40, sub_35ec0, sub_35f40, sub_36310, sub_39cb0, sub_3ae70
*/
void sub_48cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48cc0ULL || rel >= 0x48dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048dc0 size=112 callers=0 calls=0
*/
void sub_48dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48dc0ULL || rel >= 0x48e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048e30 size=144 callers=2 calls=4
   calls: sub_34be0, sub_34d70, sub_388c0, sub_38f80
*/
void sub_48e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e30ULL || rel >= 0x48ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00048ec0 size=2400 callers=0 calls=10
   calls: sub_31700, sub_35a0, sub_36040, sub_36310, sub_37a80, sub_37be0, sub_39e30, sub_3cb30, sub_482e0, sub_f120
*/
void sub_48ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ec0ULL || rel >= 0x49820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049820 size=1856 callers=0 calls=7
   calls: sub_310a0, sub_35330, sub_35e70, sub_36310, sub_391e0, sub_3af50, sub_3cad0
*/
void sub_49820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49820ULL || rel >= 0x49f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00049f60 size=1456 callers=0 calls=8
   calls: internal_sym_d_4, sub_351c0, sub_36310, sub_39040, sub_3b6b0, sub_3f7b0, sub_40c10, sub_46c20
*/
void sub_49f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f60ULL || rel >= 0x4a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a510 size=768 callers=1 calls=7
   calls: sub_310a0, sub_351c0, sub_36310, sub_3f7b0, sub_40c10, sub_46c20, sub_4a510
*/
void sub_4a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a510ULL || rel >= 0x4a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004a810 size=4096 callers=0 calls=16
   calls: sub_310a0, sub_31700, sub_351c0, sub_35a0, sub_36040, sub_37660, sub_37830, sub_37be0, sub_3b1f0, sub_3cb50, sub_40c10, sub_44e70
   ... +4 more
*/
void sub_4a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a810ULL || rel >= 0x4b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004b810 size=464 callers=2 calls=4
   calls: sub_36310, sub_3ae70, sub_40c00, sub_40c10
*/
void sub_4b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b810ULL || rel >= 0x4b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004b9e0 size=1008 callers=0 calls=10
   calls: sub_310a0, sub_314f0, sub_35320, sub_35330, sub_35a0, sub_37660, sub_376f0, sub_39920, sub_45d80, sub_4bdd0
*/
void sub_4b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9e0ULL || rel >= 0x4bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004bdd0 size=224 callers=2 calls=1
   calls: sub_451e0
*/
void sub_4bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bdd0ULL || rel >= 0x4beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004beb0 size=2608 callers=0 calls=13
   calls: sub_1e30, sub_1e40, sub_310a0, sub_310d0, sub_37660, sub_376f0, sub_37830, sub_39040, sub_3af80, sub_40100, sub_40980, sub_40c10
   ... +1 more
*/
void sub_4beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4beb0ULL || rel >= 0x4c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004c8e0 size=240 callers=0 calls=3
   calls: sub_310a0, sub_379b0, sub_4c9d0
*/
void sub_4c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8e0ULL || rel >= 0x4c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004c9d0 size=288 callers=2 calls=1
   calls: sub_40c10
*/
void sub_4c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9d0ULL || rel >= 0x4caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004caf0 size=224 callers=4 calls=2
   calls: sub_35330, sub_3af50
*/
void sub_4caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4caf0ULL || rel >= 0x4cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004cbd0 size=1104 callers=0 calls=8
   calls: sub_310a0, sub_31b90, sub_35a0, sub_36040, sub_3af40, sub_3b1f0, sub_40c10, sub_4caf0
*/
void sub_4cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbd0ULL || rel >= 0x4d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d020 size=896 callers=1 calls=3
   calls: sub_351c0, sub_36020, sub_40c00
*/
void sub_4d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d020ULL || rel >= 0x4d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004d3a0 size=2304 callers=0 calls=9
   calls: sub_310a0, sub_31700, sub_31b90, sub_35a0, sub_36020, sub_39040, sub_3af50, sub_44820, sub_4d020
*/
void sub_4d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3a0ULL || rel >= 0x4dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004dca0 size=400 callers=0 calls=4
   calls: sub_31700, sub_31b90, sub_35a0, sub_3af50
*/
void sub_4dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dca0ULL || rel >= 0x4de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0004de30 size=13632 callers=0 calls=24
   calls: internal_sym_d_2, internal_sym_d_4, sub_310a0, sub_31b90, sub_31fa0, sub_350e0, sub_351c0, sub_35a0, sub_36040, sub_36310, sub_376f0, sub_37780
   ... +12 more
*/
void sub_4de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de30ULL || rel >= 0x51370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051370 size=128 callers=1 calls=2
   calls: sub_34be0, sub_f120
*/
void sub_51370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51370ULL || rel >= 0x513f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000513f0 size=192 callers=0 calls=2
   calls: sub_38d60, sub_546e0
*/
void sub_513f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513f0ULL || rel >= 0x514b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000514b0 size=624 callers=0 calls=5
   calls: sub_31fa0, sub_35a0, sub_36310, sub_3b630, sub_3b680
*/
void sub_514b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514b0ULL || rel >= 0x51720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051720 size=400 callers=0 calls=4
   calls: sub_31b90, sub_35a0, sub_3b630, sub_3b680
*/
void sub_51720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51720ULL || rel >= 0x518b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000518b0 size=416 callers=0 calls=3
   calls: sub_310a0, sub_36310, sub_45080
*/
void sub_518b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x518b0ULL || rel >= 0x51a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051a50 size=304 callers=2 calls=2
   calls: sub_350e0, sub_351c0
*/
void sub_51a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a50ULL || rel >= 0x51b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051b80 size=1104 callers=0 calls=4
   calls: sub_310a0, sub_351c0, sub_36310, sub_40c10
*/
void sub_51b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51b80ULL || rel >= 0x51fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00051fd0 size=1504 callers=0 calls=5
   calls: sub_31700, sub_35a0, sub_35e70, sub_54810, sub_54940
*/
void sub_51fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51fd0ULL || rel >= 0x525b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000525b0 size=944 callers=2 calls=5
   calls: sub_36310, sub_37660, sub_37780, sub_40c10, sub_525b0
*/
void sub_525b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x525b0ULL || rel >= 0x52960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052960 size=208 callers=0 calls=2
   calls: sub_31b90, sub_35a0
*/
void sub_52960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52960ULL || rel >= 0x52a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052a30 size=176 callers=0 calls=1
   calls: sub_119d0
*/
void sub_52a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52a30ULL || rel >= 0x52ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052ae0 size=448 callers=0 calls=0
*/
void sub_52ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ae0ULL || rel >= 0x52ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052ca0 size=160 callers=0 calls=2
   calls: sub_31700, sub_35a0
*/
void sub_52ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ca0ULL || rel >= 0x52d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052d40 size=672 callers=0 calls=5
   calls: sub_310a0, sub_36310, sub_3b1f0, sub_40c10, sub_427c0
*/
void sub_52d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52d40ULL || rel >= 0x52fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00052fe0 size=672 callers=0 calls=3
   calls: sub_351c0, sub_39040, sub_53280
*/
void sub_52fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52fe0ULL || rel >= 0x53280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053280 size=624 callers=4 calls=4
   calls: sub_351c0, sub_39d80, sub_3af50, sub_53280
*/
void sub_53280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53280ULL || rel >= 0x534f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000534f0 size=320 callers=0 calls=0
*/
void sub_534f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534f0ULL || rel >= 0x53630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053630 size=608 callers=3 calls=8
   calls: sub_310a0, sub_35f0, sub_36310, sub_3b600, sub_3b630, sub_3cb30, sub_3e4d0, sub_53630
*/
void sub_53630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53630ULL || rel >= 0x53890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053890 size=1312 callers=0 calls=9
   calls: sub_310a0, sub_31b90, sub_35a0, sub_35f0, sub_39040, sub_3a330, sub_3e4c0, sub_53630, sub_53db0
*/
void sub_53890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53890ULL || rel >= 0x53db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00053db0 size=720 callers=2 calls=5
   calls: sub_310a0, sub_351c0, sub_35f0, sub_39040, sub_3e550
*/
void sub_53db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x53db0ULL || rel >= 0x54080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054080 size=224 callers=0 calls=2
   calls: sub_310a0, sub_45080
*/
void sub_54080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54080ULL || rel >= 0x54160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054160 size=336 callers=0 calls=5
   calls: sub_13d80, sub_310a0, sub_35ec0, sub_37660, sub_3ae70
*/
void sub_54160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54160ULL || rel >= 0x542b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000542b0 size=208 callers=1 calls=4
   calls: sub_13d30, sub_34be0, sub_34d70, sub_388c0
*/
void sub_542b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x542b0ULL || rel >= 0x54380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054380 size=864 callers=2 calls=6
   calls: sub_310a0, sub_31fa0, sub_351c0, sub_35a0, sub_36310, sub_40c10
*/
void sub_54380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54380ULL || rel >= 0x546e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000546e0 size=304 callers=2 calls=1
   calls: sub_3b630
*/
void sub_546e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x546e0ULL || rel >= 0x54810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054810 size=304 callers=11 calls=1
   calls: sub_351c0
*/
void sub_54810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54810ULL || rel >= 0x54940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054940 size=464 callers=8 calls=2
   calls: sub_351c0, sub_35e70
*/
void sub_54940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54940ULL || rel >= 0x54b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054b10 size=16 callers=2 calls=0
*/
void sub_54b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54b10ULL || rel >= 0x54b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054b20 size=16 callers=2 calls=0
*/
void sub_54b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54b20ULL || rel >= 0x54b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054b30 size=16 callers=1 calls=0
*/
void sub_54b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54b30ULL || rel >= 0x54b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054b40 size=848 callers=4 calls=7
   calls: s_d_s, sub_2ebc0, sub_31030, sub_314f0, sub_31b90, sub_35a0, sub_35f0
   ref: gl_ClipCoord
   ref: gl_ClipVertex
   ref: gl_ClipPlane
   ref: state.clip[].plane
*/
void gl_ClipVertex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54b40ULL || rel >= 0x54e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00054e90 size=560 callers=2 calls=4
   calls: sub_1630, sub_2880, sub_3670, sub_3fa0
   ref: %.*s%d%s
*/
void s_d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x54e90ULL || rel >= 0x550c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000550c0 size=128 callers=2 calls=0
*/
void sub_550c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x550c0ULL || rel >= 0x55140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055140 size=80 callers=20 calls=0
*/
void sub_55140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55140ULL || rel >= 0x55190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055190 size=112 callers=30 calls=2
   calls: sub_35f0, sub_3620
*/
void sub_55190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55190ULL || rel >= 0x55200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055200 size=112 callers=27 calls=1
   calls: sub_3870
*/
void sub_55200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55200ULL || rel >= 0x55270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055270 size=112 callers=4 calls=2
   calls: sub_3690, sub_3770
*/
void sub_55270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55270ULL || rel >= 0x552e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000552e0 size=64 callers=7 calls=1
   calls: sub_29b0
*/
void sub_552e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x552e0ULL || rel >= 0x55320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055320 size=224 callers=10 calls=0
*/
void sub_55320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55320ULL || rel >= 0x55400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055400 size=224 callers=6 calls=0
*/
void sub_55400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55400ULL || rel >= 0x554e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000554e0 size=144 callers=1 calls=0
*/
void sub_554e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554e0ULL || rel >= 0x55570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055570 size=80 callers=3 calls=0
*/
void sub_55570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55570ULL || rel >= 0x555c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000555c0 size=176 callers=1 calls=0
*/
void sub_555c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c0ULL || rel >= 0x55670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055670 size=256 callers=2 calls=0
*/
void sub_55670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55670ULL || rel >= 0x55770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055770 size=256 callers=1 calls=0
*/
void sub_55770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55770ULL || rel >= 0x55870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055870 size=224 callers=4 calls=0
*/
void sub_55870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55870ULL || rel >= 0x55950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055950 size=352 callers=31 calls=0
*/
void sub_55950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55950ULL || rel >= 0x55ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055ab0 size=368 callers=1 calls=0
*/
void sub_55ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ab0ULL || rel >= 0x55c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055c20 size=288 callers=1 calls=0
*/
void sub_55c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c20ULL || rel >= 0x55d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055d40 size=192 callers=6 calls=0
*/
void sub_55d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d40ULL || rel >= 0x55e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055e00 size=240 callers=2 calls=0
*/
void sub_55e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55e00ULL || rel >= 0x55ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055ef0 size=144 callers=6 calls=0
*/
void sub_55ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ef0ULL || rel >= 0x55f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055f80 size=112 callers=3 calls=0
*/
void sub_55f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f80ULL || rel >= 0x55ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00055ff0 size=272 callers=1 calls=2
   calls: sub_1e40, sub_40100
*/
void sub_55ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ff0ULL || rel >= 0x56100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056100 size=256 callers=1 calls=0
*/
void sub_56100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56100ULL || rel >= 0x56200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056200 size=16 callers=0 calls=0
*/
void sub_56200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56200ULL || rel >= 0x56210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056210 size=768 callers=0 calls=5
   calls: sub_1840, sub_1e30, sub_1e40, sub_3af40, sub_427e0
*/
void sub_56210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56210ULL || rel >= 0x56510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00056510 size=3664 callers=0 calls=9
   calls: sub_1840, sub_1e30, sub_1e40, sub_35f0, sub_3af40, sub_3f320, sub_46c20, sub_55ff0, sub_56100
*/
void sub_56510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56510ULL || rel >= 0x57360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057360 size=256 callers=0 calls=0
*/
void sub_57360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57360ULL || rel >= 0x57460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057460 size=64 callers=0 calls=0
*/
void sub_57460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57460ULL || rel >= 0x574a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000574a0 size=416 callers=1 calls=3
   calls: sub_34780, sub_34be0, sub_3620
*/
void sub_574a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574a0ULL || rel >= 0x57640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057640 size=16 callers=0 calls=0
*/
void sub_57640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57640ULL || rel >= 0x57650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057650 size=32 callers=0 calls=0
*/
void sub_57650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57650ULL || rel >= 0x57670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057670 size=240 callers=0 calls=0
*/
void sub_57670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57670ULL || rel >= 0x57760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057760 size=16 callers=0 calls=0
*/
void sub_57760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57760ULL || rel >= 0x57770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00057770 size=2752 callers=5 calls=22
   calls: sub_14740, sub_1e40, sub_2220, sub_2ece0, sub_2f070, sub_2f350, sub_30930, sub_34be0, sub_35f0, sub_3620, sub_388c0, sub_38be0
   ... +10 more
*/
void sub_57770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57770ULL || rel >= 0x58230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058230 size=704 callers=2 calls=2
   calls: sub_29b0, sub_3770
*/
void sub_58230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58230ULL || rel >= 0x584f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000584f0 size=48 callers=0 calls=0
*/
void sub_584f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x584f0ULL || rel >= 0x58520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058520 size=16 callers=0 calls=0
*/
void sub_58520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58520ULL || rel >= 0x58530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058530 size=848 callers=0 calls=9
   calls: sub_31700, sub_318a0, sub_31b90, sub_31da0, sub_31fa0, sub_321e0, sub_323f0, sub_32690, sub_35a0
*/
void sub_58530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58530ULL || rel >= 0x58880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058880 size=1360 callers=3 calls=19
   calls: sub_38be0, sub_3d120, sub_3d2f0, sub_3d570, sub_3d620, sub_3d720, sub_3d780, sub_3d850, sub_3e080, sub_3e330, sub_410e0, sub_41370
   ... +7 more
*/
void sub_58880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58880ULL || rel >= 0x58dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058dd0 size=160 callers=0 calls=0
*/
void sub_58dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58dd0ULL || rel >= 0x58e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058e70 size=192 callers=0 calls=2
   calls: sub_2220, sub_3e1e0
*/
void sub_58e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58e70ULL || rel >= 0x58f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00058f30 size=464 callers=0 calls=1
   calls: sub_2220
*/
void sub_58f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x58f30ULL || rel >= 0x59100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059100 size=16 callers=0 calls=0
*/
void sub_59100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59100ULL || rel >= 0x59110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059110 size=176 callers=2 calls=3
   calls: sub_3d850, sub_3e330, sub_41e30
*/
void sub_59110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59110ULL || rel >= 0x591c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000591c0 size=48 callers=0 calls=0
*/
void sub_591c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x591c0ULL || rel >= 0x591f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000591f0 size=96 callers=0 calls=0
*/
void sub_591f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x591f0ULL || rel >= 0x59250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00059250 size=4368 callers=1 calls=19
   calls: sub_15020, sub_1a4b0, sub_29b0, sub_34be0, sub_34d90, sub_35ec0, sub_3770, sub_37c80, sub_448b0, sub_448c0, sub_448d0, sub_448f0
   ... +7 more
*/
void sub_59250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x59250ULL || rel >= 0x5a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005a360 size=144 callers=2 calls=1
   calls: sub_5a360
*/
void sub_5a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a360ULL || rel >= 0x5a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005a3f0 size=32 callers=0 calls=0
*/
void sub_5a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a3f0ULL || rel >= 0x5a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005a410 size=144 callers=0 calls=0
*/
void sub_5a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a410ULL || rel >= 0x5a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005a4a0 size=496 callers=0 calls=1
   calls: sub_35ec0
*/
void sub_5a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a4a0ULL || rel >= 0x5a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005a690 size=704 callers=0 calls=3
   calls: sub_44980, sub_5ae50, sub_5af80
*/
void sub_5a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a690ULL || rel >= 0x5a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005a950 size=640 callers=2 calls=2
   calls: sub_44980, sub_5a950
*/
void sub_5a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5a950ULL || rel >= 0x5abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005abd0 size=192 callers=0 calls=0
*/
void sub_5abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5abd0ULL || rel >= 0x5ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005ac90 size=192 callers=0 calls=0
*/
void sub_5ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ac90ULL || rel >= 0x5ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005ad50 size=256 callers=2 calls=2
   calls: sub_1a4b0, sub_5ad50
*/
void sub_5ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ad50ULL || rel >= 0x5ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005ae50 size=304 callers=2 calls=2
   calls: sub_44980, sub_5ae50
*/
void sub_5ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ae50ULL || rel >= 0x5af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005af80 size=496 callers=2 calls=4
   calls: sub_31100, sub_35ec0, sub_44980, sub_5af80
*/
void sub_5af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5af80ULL || rel >= 0x5b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b170 size=16 callers=2 calls=0
*/
void sub_5b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b170ULL || rel >= 0x5b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b180 size=16 callers=0 calls=0
*/
void sub_5b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b180ULL || rel >= 0x5b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b190 size=16 callers=0 calls=0
*/
void sub_5b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b190ULL || rel >= 0x5b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b1a0 size=16 callers=0 calls=0
*/
void sub_5b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1a0ULL || rel >= 0x5b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b1b0 size=752 callers=2 calls=0
*/
void sub_5b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b1b0ULL || rel >= 0x5b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b4a0 size=640 callers=2 calls=0
*/
void sub_5b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b4a0ULL || rel >= 0x5b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b720 size=80 callers=1 calls=0
*/
void sub_5b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b720ULL || rel >= 0x5b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005b770 size=1792 callers=1 calls=15
   calls: sub_5be70, sub_61f80, sub_62240, sub_66f90, sub_67330, sub_673d0, sub_67470, sub_9a740, sub_9b3e0, sub_9bed0, sub_a86a0, sub_a8780
   ... +3 more
*/
void sub_5b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5b770ULL || rel >= 0x5be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005be70 size=256 callers=15 calls=0
*/
void sub_5be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5be70ULL || rel >= 0x5bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005bf70 size=416 callers=1 calls=0
*/
void sub_5bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5bf70ULL || rel >= 0x5c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c110 size=352 callers=1 calls=2
   calls: sub_38b0, sub_5c270
*/
void sub_5c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c110ULL || rel >= 0x5c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c270 size=624 callers=1 calls=1
   calls: sub_60c20
*/
void sub_5c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c270ULL || rel >= 0x5c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c4e0 size=352 callers=1 calls=2
   calls: sub_38b0, sub_5c640
*/
void sub_5c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c4e0ULL || rel >= 0x5c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c640 size=624 callers=1 calls=1
   calls: sub_612d0
*/
void sub_5c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c640ULL || rel >= 0x5c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005c8b0 size=352 callers=1 calls=3
   calls: sub_5c4e0, sub_66d40, sub_69350
*/
void sub_5c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5c8b0ULL || rel >= 0x5ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005ca10 size=432 callers=1 calls=2
   calls: sub_62240, sub_66d40
*/
void sub_5ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ca10ULL || rel >= 0x5cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005cbc0 size=656 callers=1 calls=4
   calls: sub_5bf70, sub_5c110, sub_5c8b0, sub_5ca10
*/
void sub_5cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5cbc0ULL || rel >= 0x5ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005ce50 size=864 callers=2 calls=3
   calls: sub_38b0, sub_679f0, sub_69b70
*/
void sub_5ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ce50ULL || rel >= 0x5d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005d1b0 size=32 callers=0 calls=0
*/
void sub_5d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1b0ULL || rel >= 0x5d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005d1d0 size=896 callers=2 calls=2
   calls: sub_5be70, sub_67ab0
*/
void sub_5d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d1d0ULL || rel >= 0x5d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005d550 size=5600 callers=1 calls=33
   calls: sub_35320, sub_3550, sub_38d0, sub_3d090, sub_5cbc0, sub_5ce50, sub_5d1d0, sub_5eb60, sub_64060, sub_66820, sub_66bc0, sub_66c30
   ... +21 more
*/
void sub_5d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5d550ULL || rel >= 0x5eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005eb30 size=48 callers=0 calls=0
*/
void sub_5eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb30ULL || rel >= 0x5eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005eb60 size=608 callers=1 calls=1
   calls: sub_3870
*/
void sub_5eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb60ULL || rel >= 0x5edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0005edc0 size=4976 callers=1 calls=26
   calls: sub_3550, sub_38b0, sub_3ceb0, sub_3cf40, sub_3cf60, sub_3d090, sub_3d140, sub_3d2f0, sub_3d850, sub_5d1d0, sub_64990, sub_66d40
   ... +14 more
*/
void sub_5edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edc0ULL || rel >= 0x60130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060130 size=320 callers=2 calls=9
   calls: sub_3550, sub_5b770, sub_5d550, sub_5edc0, sub_64060, sub_66820, sub_b8aa0, sub_bdaa0, sub_ffa40
*/
void sub_60130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60130ULL || rel >= 0x60270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060270 size=64 callers=0 calls=0
*/
void sub_60270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60270ULL || rel >= 0x602b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000602b0 size=48 callers=0 calls=0
*/
void sub_602b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602b0ULL || rel >= 0x602e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000602e0 size=16 callers=0 calls=0
*/
void sub_602e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602e0ULL || rel >= 0x602f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000602f0 size=64 callers=0 calls=0
*/
void sub_602f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x602f0ULL || rel >= 0x60330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060330 size=96 callers=0 calls=0
*/
void sub_60330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60330ULL || rel >= 0x60390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060390 size=80 callers=0 calls=0
*/
void sub_60390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60390ULL || rel >= 0x603e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000603e0 size=64 callers=0 calls=0
*/
void sub_603e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x603e0ULL || rel >= 0x60420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060420 size=96 callers=0 calls=0
*/
void sub_60420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60420ULL || rel >= 0x60480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060480 size=176 callers=0 calls=0
*/
void sub_60480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60480ULL || rel >= 0x60530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060530 size=192 callers=0 calls=0
*/
void sub_60530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60530ULL || rel >= 0x605f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000605f0 size=64 callers=0 calls=0
*/
void sub_605f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x605f0ULL || rel >= 0x60630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060630 size=64 callers=0 calls=0
*/
void sub_60630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60630ULL || rel >= 0x60670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060670 size=48 callers=0 calls=0
*/
void sub_60670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60670ULL || rel >= 0x606a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000606a0 size=16 callers=0 calls=0
*/
void sub_606a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606a0ULL || rel >= 0x606b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000606b0 size=64 callers=0 calls=0
*/
void sub_606b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606b0ULL || rel >= 0x606f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000606f0 size=96 callers=0 calls=0
*/
void sub_606f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x606f0ULL || rel >= 0x60750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060750 size=80 callers=0 calls=0
*/
void sub_60750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60750ULL || rel >= 0x607a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000607a0 size=64 callers=0 calls=0
*/
void sub_607a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x607a0ULL || rel >= 0x607e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000607e0 size=96 callers=0 calls=0
*/
void sub_607e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x607e0ULL || rel >= 0x60840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060840 size=176 callers=0 calls=0
*/
void sub_60840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60840ULL || rel >= 0x608f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000608f0 size=192 callers=0 calls=0
*/
void sub_608f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x608f0ULL || rel >= 0x609b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000609b0 size=64 callers=0 calls=0
*/
void sub_609b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609b0ULL || rel >= 0x609f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000609f0 size=16 callers=0 calls=0
*/
void sub_609f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x609f0ULL || rel >= 0x60a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060a00 size=16 callers=0 calls=0
*/
void sub_60a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a00ULL || rel >= 0x60a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060a10 size=64 callers=0 calls=0
*/
void sub_60a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a10ULL || rel >= 0x60a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060a50 size=16 callers=0 calls=0
*/
void sub_60a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a50ULL || rel >= 0x60a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060a60 size=48 callers=0 calls=0
*/
void sub_60a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a60ULL || rel >= 0x60a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060a90 size=80 callers=0 calls=0
*/
void sub_60a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60a90ULL || rel >= 0x60ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060ae0 size=160 callers=0 calls=0
*/
void sub_60ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ae0ULL || rel >= 0x60b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060b80 size=160 callers=0 calls=0
*/
void sub_60b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60b80ULL || rel >= 0x60c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060c20 size=592 callers=1 calls=0
*/
void sub_60c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60c20ULL || rel >= 0x60e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060e70 size=80 callers=0 calls=0
*/
void sub_60e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60e70ULL || rel >= 0x60ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060ec0 size=96 callers=0 calls=0
*/
void sub_60ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60ec0ULL || rel >= 0x60f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060f20 size=112 callers=0 calls=0
*/
void sub_60f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f20ULL || rel >= 0x60f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00060f90 size=128 callers=0 calls=0
*/
void sub_60f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x60f90ULL || rel >= 0x61010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061010 size=80 callers=0 calls=0
*/
void sub_61010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61010ULL || rel >= 0x61060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061060 size=80 callers=0 calls=0
*/
void sub_61060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61060ULL || rel >= 0x610b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000610b0 size=80 callers=0 calls=0
*/
void sub_610b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x610b0ULL || rel >= 0x61100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061100 size=192 callers=0 calls=0
*/
void sub_61100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61100ULL || rel >= 0x611c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000611c0 size=192 callers=0 calls=0
*/
void sub_611c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x611c0ULL || rel >= 0x61280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061280 size=80 callers=0 calls=0
*/
void sub_61280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61280ULL || rel >= 0x612d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000612d0 size=592 callers=1 calls=0
*/
void sub_612d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x612d0ULL || rel >= 0x61520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061520 size=80 callers=0 calls=0
*/
void sub_61520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61520ULL || rel >= 0x61570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061570 size=96 callers=0 calls=0
*/
void sub_61570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61570ULL || rel >= 0x615d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000615d0 size=112 callers=0 calls=0
*/
void sub_615d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x615d0ULL || rel >= 0x61640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061640 size=128 callers=0 calls=0
*/
void sub_61640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61640ULL || rel >= 0x616c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000616c0 size=80 callers=0 calls=0
*/
void sub_616c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x616c0ULL || rel >= 0x61710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061710 size=80 callers=0 calls=0
*/
void sub_61710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61710ULL || rel >= 0x61760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061760 size=80 callers=0 calls=0
*/
void sub_61760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61760ULL || rel >= 0x617b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000617b0 size=192 callers=0 calls=0
*/
void sub_617b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x617b0ULL || rel >= 0x61870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061870 size=192 callers=0 calls=0
*/
void sub_61870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61870ULL || rel >= 0x61930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061930 size=80 callers=0 calls=0
*/
void sub_61930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61930ULL || rel >= 0x61980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061980 size=48 callers=0 calls=0
*/
void sub_61980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61980ULL || rel >= 0x619b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000619b0 size=16 callers=0 calls=0
*/
void sub_619b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619b0ULL || rel >= 0x619c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000619c0 size=64 callers=0 calls=0
*/
void sub_619c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x619c0ULL || rel >= 0x61a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061a00 size=64 callers=0 calls=0
*/
void sub_61a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a00ULL || rel >= 0x61a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061a40 size=96 callers=0 calls=0
*/
void sub_61a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61a40ULL || rel >= 0x61aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061aa0 size=80 callers=0 calls=0
*/
void sub_61aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61aa0ULL || rel >= 0x61af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061af0 size=64 callers=0 calls=0
*/
void sub_61af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61af0ULL || rel >= 0x61b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061b30 size=96 callers=0 calls=0
*/
void sub_61b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b30ULL || rel >= 0x61b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061b90 size=176 callers=0 calls=0
*/
void sub_61b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61b90ULL || rel >= 0x61c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061c40 size=192 callers=0 calls=0
*/
void sub_61c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61c40ULL || rel >= 0x61d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061d00 size=64 callers=0 calls=0
*/
void sub_61d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d00ULL || rel >= 0x61d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061d40 size=48 callers=13 calls=0
*/
void sub_61d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d40ULL || rel >= 0x61d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061d70 size=48 callers=1 calls=0
*/
void sub_61d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61d70ULL || rel >= 0x61da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061da0 size=48 callers=13 calls=0
*/
void sub_61da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61da0ULL || rel >= 0x61dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061dd0 size=32 callers=1 calls=0
*/
void sub_61dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61dd0ULL || rel >= 0x61df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061df0 size=32 callers=37 calls=0
*/
void sub_61df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61df0ULL || rel >= 0x61e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061e10 size=48 callers=10 calls=0
*/
void sub_61e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e10ULL || rel >= 0x61e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061e40 size=32 callers=2 calls=0
*/
void sub_61e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e40ULL || rel >= 0x61e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061e60 size=32 callers=12 calls=0
*/
void sub_61e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e60ULL || rel >= 0x61e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061e80 size=144 callers=28 calls=2
   calls: sub_9b3e0, sub_9b4d0
*/
void sub_61e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61e80ULL || rel >= 0x61f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061f10 size=112 callers=40 calls=3
   calls: sub_9b510, sub_9b920, sub_9ba40
*/
void sub_61f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f10ULL || rel >= 0x61f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00061f80 size=208 callers=36 calls=1
   calls: sub_9b3d0
*/
void sub_61f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x61f80ULL || rel >= 0x62050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062050 size=128 callers=35 calls=1
   calls: sub_9ba20
*/
void sub_62050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62050ULL || rel >= 0x620d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000620d0 size=144 callers=43 calls=4
   calls: sub_3af50, sub_3b000, sub_9b3e0, sub_9b4d0
*/
void sub_620d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x620d0ULL || rel >= 0x62160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062160 size=144 callers=4 calls=4
   calls: sub_3af50, sub_3b000, sub_9b3e0, sub_9b4d0
*/
void sub_62160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62160ULL || rel >= 0x621f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000621f0 size=80 callers=7 calls=2
   calls: sub_9b3d0, sub_9b500
*/
void sub_621f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x621f0ULL || rel >= 0x62240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062240 size=144 callers=56 calls=2
   calls: sub_9b3d0, sub_9b500
*/
void sub_62240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62240ULL || rel >= 0x622d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000622d0 size=80 callers=1 calls=2
   calls: sub_9b3d0, sub_9b500
*/
void sub_622d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x622d0ULL || rel >= 0x62320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062320 size=160 callers=2 calls=4
   calls: sub_3af50, sub_62050, sub_9b3d0, sub_9b500
*/
void sub_62320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62320ULL || rel >= 0x623c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000623c0 size=176 callers=2 calls=2
   calls: sub_9b3d0, sub_9b500
*/
void sub_623c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x623c0ULL || rel >= 0x62470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062470 size=32 callers=3 calls=0
*/
void sub_62470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62470ULL || rel >= 0x62490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062490 size=64 callers=0 calls=0
*/
void sub_62490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62490ULL || rel >= 0x624d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000624d0 size=1264 callers=15 calls=0
*/
void sub_624d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x624d0ULL || rel >= 0x629c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000629c0 size=176 callers=4 calls=0
*/
void sub_629c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x629c0ULL || rel >= 0x62a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00062a70 size=1888 callers=23 calls=0
*/
void sub_62a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x62a70ULL || rel >= 0x631d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000631d0 size=64 callers=1 calls=0
*/
void sub_631d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x631d0ULL || rel >= 0x63210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063210 size=304 callers=1 calls=1
   calls: sub_9a050
*/
void sub_63210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63210ULL || rel >= 0x63340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063340 size=272 callers=0 calls=1
   calls: sub_a9a30
*/
void sub_63340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63340ULL || rel >= 0x63450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063450 size=64 callers=0 calls=0
*/
void sub_63450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63450ULL || rel >= 0x63490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063490 size=32 callers=0 calls=0
*/
void sub_63490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63490ULL || rel >= 0x634b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000634b0 size=128 callers=1 calls=2
   calls: sub_3870, sub_3890
*/
void sub_634b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x634b0ULL || rel >= 0x63530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063530 size=32 callers=0 calls=0
*/
void sub_63530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63530ULL || rel >= 0x63550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063550 size=16 callers=0 calls=0
*/
void sub_63550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63550ULL || rel >= 0x63560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063560 size=32 callers=11 calls=0
*/
void sub_63560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63560ULL || rel >= 0x63580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063580 size=48 callers=7 calls=0
*/
void sub_63580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63580ULL || rel >= 0x635b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000635b0 size=32 callers=4 calls=0
*/
void sub_635b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635b0ULL || rel >= 0x635d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000635d0 size=32 callers=4 calls=0
*/
void sub_635d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635d0ULL || rel >= 0x635f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000635f0 size=32 callers=9 calls=0
*/
void sub_635f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x635f0ULL || rel >= 0x63610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063610 size=48 callers=6 calls=0
*/
void sub_63610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63610ULL || rel >= 0x63640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063640 size=48 callers=5 calls=0
*/
void sub_63640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63640ULL || rel >= 0x63670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063670 size=48 callers=4 calls=0
*/
void sub_63670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63670ULL || rel >= 0x636a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000636a0 size=80 callers=6 calls=0
*/
void sub_636a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636a0ULL || rel >= 0x636f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000636f0 size=32 callers=22 calls=0
*/
void sub_636f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x636f0ULL || rel >= 0x63710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063710 size=288 callers=0 calls=0
*/
void sub_63710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63710ULL || rel >= 0x63830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063830 size=48 callers=0 calls=0
*/
void sub_63830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63830ULL || rel >= 0x63860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063860 size=128 callers=0 calls=0
*/
void sub_63860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63860ULL || rel >= 0x638e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000638e0 size=48 callers=0 calls=0
*/
void sub_638e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x638e0ULL || rel >= 0x63910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063910 size=800 callers=0 calls=2
   calls: sub_9a740, sub_9b3d0
*/
void sub_63910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63910ULL || rel >= 0x63c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063c30 size=80 callers=35 calls=0
*/
void sub_63c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63c30ULL || rel >= 0x63c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063c80 size=400 callers=0 calls=1
   calls: sub_9a740
*/
void sub_63c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63c80ULL || rel >= 0x63e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063e10 size=48 callers=1 calls=0
*/
void sub_63e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e10ULL || rel >= 0x63e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00063e40 size=544 callers=0 calls=4
   calls: sub_64060, sub_64490, sub_645d0, sub_9d2f0
*/
void sub_63e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x63e40ULL || rel >= 0x64060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064060 size=1072 callers=47 calls=1
   calls: sub_92590
*/
void sub_64060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64060ULL || rel >= 0x64490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064490 size=320 callers=3 calls=1
   calls: sub_9d2f0
*/
void sub_64490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64490ULL || rel >= 0x645d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000645d0 size=736 callers=2 calls=1
   calls: sub_6ed20
*/
void sub_645d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x645d0ULL || rel >= 0x648b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000648b0 size=224 callers=0 calls=0
*/
void sub_648b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x648b0ULL || rel >= 0x64990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064990 size=128 callers=4 calls=0
*/
void sub_64990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64990ULL || rel >= 0x64a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064a10 size=240 callers=0 calls=0
*/
void sub_64a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64a10ULL || rel >= 0x64b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064b00 size=96 callers=0 calls=1
   calls: sub_62050
*/
void sub_64b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b00ULL || rel >= 0x64b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064b60 size=96 callers=0 calls=1
   calls: sub_62050
*/
void sub_64b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64b60ULL || rel >= 0x64bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064bc0 size=80 callers=2 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_64bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64bc0ULL || rel >= 0x64c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064c10 size=80 callers=1 calls=2
   calls: sub_b7e20, sub_b8b90
*/
void sub_64c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c10ULL || rel >= 0x64c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064c60 size=272 callers=0 calls=0
*/
void sub_64c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64c60ULL || rel >= 0x64d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064d70 size=128 callers=3 calls=0
*/
void sub_64d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64d70ULL || rel >= 0x64df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064df0 size=48 callers=0 calls=0
*/
void sub_64df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64df0ULL || rel >= 0x64e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00064e20 size=688 callers=2 calls=1
   calls: sub_3890
*/
void sub_64e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x64e20ULL || rel >= 0x650d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000650d0 size=16 callers=14 calls=0
*/
void sub_650d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650d0ULL || rel >= 0x650e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000650e0 size=144 callers=1 calls=2
   calls: sub_3870, sub_99a80
*/
void sub_650e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x650e0ULL || rel >= 0x65170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065170 size=96 callers=1 calls=2
   calls: sub_3870, sub_99a80
*/
void sub_65170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65170ULL || rel >= 0x651d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000651d0 size=224 callers=21 calls=2
   calls: sub_3870, sub_99a80
*/
void sub_651d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x651d0ULL || rel >= 0x652b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000652b0 size=160 callers=6 calls=2
   calls: sub_3870, sub_99a80
*/
void sub_652b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x652b0ULL || rel >= 0x65350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065350 size=128 callers=1 calls=2
   calls: sub_3870, sub_99a80
*/
void sub_65350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65350ULL || rel >= 0x653d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000653d0 size=80 callers=1 calls=0
*/
void sub_653d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x653d0ULL || rel >= 0x65420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065420 size=800 callers=47 calls=1
   calls: sub_9a050
*/
void sub_65420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65420ULL || rel >= 0x65740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00065740 size=4224 callers=1 calls=4
   calls: sub_3670, sub_3870, sub_3890, sub_64e20
*/
void sub_65740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x65740ULL || rel >= 0x667c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000667c0 size=96 callers=2 calls=3
   calls: EvoOriStats_SignatureHash_llx, sub_3870, sub_b89a0
*/
void sub_667c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x667c0ULL || rel >= 0x66820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066820 size=64 callers=78 calls=1
   calls: sub_b8aa0
*/
void sub_66820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66820ULL || rel >= 0x66860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066860 size=160 callers=19 calls=1
   calls: sub_99f50
*/
void sub_66860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66860ULL || rel >= 0x66900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066900 size=48 callers=1 calls=0
*/
void sub_66900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66900ULL || rel >= 0x66930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066930 size=48 callers=1 calls=0
*/
void sub_66930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66930ULL || rel >= 0x66960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066960 size=96 callers=1 calls=0
*/
void sub_66960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66960ULL || rel >= 0x669c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000669c0 size=48 callers=4 calls=0
*/
void sub_669c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669c0ULL || rel >= 0x669f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000669f0 size=80 callers=10 calls=0
*/
void sub_669f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x669f0ULL || rel >= 0x66a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066a40 size=64 callers=1 calls=0
*/
void sub_66a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a40ULL || rel >= 0x66a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066a80 size=224 callers=5 calls=0
*/
void sub_66a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66a80ULL || rel >= 0x66b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066b60 size=96 callers=4 calls=0
*/
void sub_66b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66b60ULL || rel >= 0x66bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066bc0 size=64 callers=30 calls=0
*/
void sub_66bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66bc0ULL || rel >= 0x66c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066c00 size=48 callers=15 calls=0
*/
void sub_66c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c00ULL || rel >= 0x66c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066c30 size=64 callers=8 calls=0
*/
void sub_66c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c30ULL || rel >= 0x66c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066c70 size=96 callers=3 calls=0
*/
void sub_66c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66c70ULL || rel >= 0x66cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066cd0 size=112 callers=20 calls=0
*/
void sub_66cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66cd0ULL || rel >= 0x66d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066d40 size=112 callers=73 calls=0
*/
void sub_66d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66d40ULL || rel >= 0x66db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066db0 size=96 callers=1 calls=0
*/
void sub_66db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66db0ULL || rel >= 0x66e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066e10 size=112 callers=2 calls=0
*/
void sub_66e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66e10ULL || rel >= 0x66e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066e80 size=128 callers=3 calls=0
*/
void sub_66e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66e80ULL || rel >= 0x66f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066f00 size=64 callers=1 calls=0
*/
void sub_66f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f00ULL || rel >= 0x66f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066f40 size=80 callers=4 calls=0
*/
void sub_66f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f40ULL || rel >= 0x66f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00066f90 size=128 callers=11 calls=1
   calls: sub_9b0a0
*/
void sub_66f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x66f90ULL || rel >= 0x67010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067010 size=416 callers=21 calls=1
   calls: sub_9b0a0
*/
void sub_67010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67010ULL || rel >= 0x671b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000671b0 size=224 callers=4 calls=0
*/
void sub_671b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x671b0ULL || rel >= 0x67290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067290 size=160 callers=6 calls=1
   calls: sub_9a740
*/
void sub_67290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67290ULL || rel >= 0x67330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067330 size=160 callers=5 calls=0
*/
void sub_67330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67330ULL || rel >= 0x673d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000673d0 size=160 callers=6 calls=0
*/
void sub_673d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x673d0ULL || rel >= 0x67470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067470 size=448 callers=16 calls=0
*/
void sub_67470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67470ULL || rel >= 0x67630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067630 size=288 callers=12 calls=0
*/
void sub_67630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67630ULL || rel >= 0x67750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067750 size=128 callers=5 calls=0
*/
void sub_67750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67750ULL || rel >= 0x677d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000677d0 size=144 callers=1 calls=0
*/
void sub_677d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x677d0ULL || rel >= 0x67860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067860 size=48 callers=2 calls=0
*/
void sub_67860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67860ULL || rel >= 0x67890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067890 size=176 callers=11 calls=0
*/
void sub_67890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67890ULL || rel >= 0x67940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067940 size=48 callers=7 calls=0
*/
void sub_67940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67940ULL || rel >= 0x67970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067970 size=128 callers=2 calls=0
*/
void sub_67970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67970ULL || rel >= 0x679f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000679f0 size=128 callers=14 calls=0
*/
void sub_679f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x679f0ULL || rel >= 0x67a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067a70 size=64 callers=2 calls=0
*/
void sub_67a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67a70ULL || rel >= 0x67ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067ab0 size=64 callers=12 calls=0
*/
void sub_67ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67ab0ULL || rel >= 0x67af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067af0 size=80 callers=2 calls=0
*/
void sub_67af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67af0ULL || rel >= 0x67b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067b40 size=64 callers=1 calls=0
*/
void sub_67b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67b40ULL || rel >= 0x67b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067b80 size=64 callers=2 calls=0
*/
void sub_67b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67b80ULL || rel >= 0x67bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067bc0 size=176 callers=2 calls=0
*/
void sub_67bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67bc0ULL || rel >= 0x67c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067c70 size=96 callers=3 calls=0
*/
void sub_67c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67c70ULL || rel >= 0x67cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067cd0 size=608 callers=62 calls=1
   calls: sub_9d2f0
*/
void sub_67cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67cd0ULL || rel >= 0x67f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067f30 size=192 callers=2 calls=0
*/
void sub_67f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67f30ULL || rel >= 0x67ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00067ff0 size=32 callers=6 calls=0
*/
void sub_67ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x67ff0ULL || rel >= 0x68010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068010 size=80 callers=1 calls=0
*/
void sub_68010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68010ULL || rel >= 0x68060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068060 size=48 callers=38 calls=0
*/
void sub_68060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68060ULL || rel >= 0x68090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068090 size=80 callers=16 calls=0
*/
void sub_68090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68090ULL || rel >= 0x680e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000680e0 size=48 callers=2 calls=0
*/
void sub_680e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x680e0ULL || rel >= 0x68110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068110 size=80 callers=6 calls=0
*/
void sub_68110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68110ULL || rel >= 0x68160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068160 size=48 callers=7 calls=0
*/
void sub_68160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68160ULL || rel >= 0x68190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068190 size=48 callers=0 calls=0
*/
void sub_68190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68190ULL || rel >= 0x681c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000681c0 size=48 callers=1 calls=0
*/
void sub_681c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x681c0ULL || rel >= 0x681f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000681f0 size=32 callers=15 calls=0
*/
void sub_681f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x681f0ULL || rel >= 0x68210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068210 size=32 callers=1 calls=0
*/
void sub_68210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68210ULL || rel >= 0x68230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068230 size=48 callers=4 calls=0
*/
void sub_68230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68230ULL || rel >= 0x68260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068260 size=48 callers=2 calls=0
*/
void sub_68260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68260ULL || rel >= 0x68290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068290 size=512 callers=4 calls=3
   calls: sub_67010, sub_9b3e0, sub_9b500
*/
void sub_68290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68290ULL || rel >= 0x68490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068490 size=64 callers=19 calls=0
*/
void sub_68490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68490ULL || rel >= 0x684d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000684d0 size=192 callers=9 calls=1
   calls: sub_a7110
*/
void sub_684d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x684d0ULL || rel >= 0x68590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068590 size=272 callers=7 calls=2
   calls: sub_68290, sub_a7110
*/
void sub_68590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68590ULL || rel >= 0x686a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000686a0 size=128 callers=1 calls=1
   calls: sub_a7890
*/
void sub_686a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x686a0ULL || rel >= 0x68720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068720 size=144 callers=1 calls=1
   calls: sub_a7110
*/
void sub_68720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68720ULL || rel >= 0x687b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000687b0 size=64 callers=16 calls=0
*/
void sub_687b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x687b0ULL || rel >= 0x687f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000687f0 size=144 callers=2 calls=1
   calls: sub_a70d0
*/
void sub_687f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x687f0ULL || rel >= 0x68880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068880 size=64 callers=2 calls=0
*/
void sub_68880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68880ULL || rel >= 0x688c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000688c0 size=160 callers=3 calls=1
   calls: sub_9a050
*/
void sub_688c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x688c0ULL || rel >= 0x68960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068960 size=208 callers=18 calls=1
   calls: sub_9a050
*/
void sub_68960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68960ULL || rel >= 0x68a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068a30 size=688 callers=2 calls=4
   calls: sub_9a1e0, sub_9ca30, sub_a7370, sub_a73d0
*/
void sub_68a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68a30ULL || rel >= 0x68ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068ce0 size=160 callers=28 calls=0
*/
void sub_68ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ce0ULL || rel >= 0x68d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068d80 size=48 callers=0 calls=0
*/
void sub_68d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68d80ULL || rel >= 0x68db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068db0 size=48 callers=13 calls=0
*/
void sub_68db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68db0ULL || rel >= 0x68de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068de0 size=32 callers=0 calls=0
*/
void sub_68de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68de0ULL || rel >= 0x68e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068e00 size=16 callers=0 calls=0
*/
void sub_68e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e00ULL || rel >= 0x68e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068e10 size=32 callers=7 calls=0
*/
void sub_68e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e10ULL || rel >= 0x68e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068e30 size=96 callers=1 calls=0
*/
void sub_68e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e30ULL || rel >= 0x68e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068e90 size=96 callers=2 calls=0
*/
void sub_68e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68e90ULL || rel >= 0x68ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00068ef0 size=320 callers=1 calls=2
   calls: sub_9a050, sub_a78d0
*/
void sub_68ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x68ef0ULL || rel >= 0x69030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069030 size=336 callers=1 calls=3
   calls: sub_61f10, sub_9a050, sub_a7850
*/
void sub_69030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69030ULL || rel >= 0x69180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069180 size=160 callers=1 calls=4
   calls: sub_9bed0, sub_a7090, sub_a70d0, sub_a7800
*/
void sub_69180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69180ULL || rel >= 0x69220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069220 size=304 callers=1 calls=3
   calls: sub_9bed0, sub_a7310, sub_a7800
*/
void sub_69220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69220ULL || rel >= 0x69350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069350 size=160 callers=7 calls=0
*/
void sub_69350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69350ULL || rel >= 0x693f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000693f0 size=160 callers=2 calls=0
*/
void sub_693f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x693f0ULL || rel >= 0x69490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069490 size=176 callers=1 calls=0
*/
void sub_69490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69490ULL || rel >= 0x69540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069540 size=208 callers=9 calls=0
*/
void sub_69540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69540ULL || rel >= 0x69610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069610 size=208 callers=1 calls=0
*/
void sub_69610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69610ULL || rel >= 0x696e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000696e0 size=256 callers=5 calls=1
   calls: sub_9bed0
*/
void sub_696e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x696e0ULL || rel >= 0x697e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000697e0 size=288 callers=3 calls=0
*/
void sub_697e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x697e0ULL || rel >= 0x69900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069900 size=288 callers=1 calls=0
*/
void sub_69900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69900ULL || rel >= 0x69a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069a20 size=160 callers=4 calls=0
*/
void sub_69a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69a20ULL || rel >= 0x69ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069ac0 size=176 callers=1 calls=1
   calls: sub_e7a30
*/
void sub_69ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ac0ULL || rel >= 0x69b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069b70 size=768 callers=8 calls=1
   calls: sub_9a9a0
*/
void sub_69b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69b70ULL || rel >= 0x69e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069e70 size=48 callers=3 calls=0
*/
void sub_69e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69e70ULL || rel >= 0x69ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069ea0 size=48 callers=1 calls=0
*/
void sub_69ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ea0ULL || rel >= 0x69ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069ed0 size=288 callers=1 calls=2
   calls: sub_697e0, sub_9bed0
*/
void sub_69ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ed0ULL || rel >= 0x69ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00069ff0 size=112 callers=2 calls=1
   calls: sub_9d2f0
*/
void sub_69ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x69ff0ULL || rel >= 0x6a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006a060 size=208 callers=2 calls=1
   calls: sub_9d2f0
*/
void sub_6a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a060ULL || rel >= 0x6a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006a130 size=1904 callers=1 calls=4
   calls: sub_64060, sub_6a8a0, sub_9bed0, sub_b8aa0
*/
void sub_6a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a130ULL || rel >= 0x6a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006a8a0 size=592 callers=2 calls=0
*/
void sub_6a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6a8a0ULL || rel >= 0x6aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006aaf0 size=1728 callers=1 calls=8
   calls: sub_64060, sub_645d0, sub_6b1b0, sub_9a050, sub_9ca30, sub_9d2f0, sub_a7110, sub_b8aa0
*/
void sub_6aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6aaf0ULL || rel >= 0x6b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006b1b0 size=976 callers=4 calls=8
   calls: sub_9a050, sub_9bed0, sub_9ca30, sub_9d2f0, sub_a70d0, sub_a7800, sub_a8030, sub_a8110
*/
void sub_6b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b1b0ULL || rel >= 0x6b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006b580 size=1680 callers=1 calls=0
*/
void sub_6b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6b580ULL || rel >= 0x6bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006bc10 size=240 callers=9 calls=1
   calls: sub_38d0
*/
void sub_6bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc10ULL || rel >= 0x6bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006bd00 size=208 callers=3 calls=2
   calls: sub_67010, sub_a7a30
*/
void sub_6bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd00ULL || rel >= 0x6bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006bdd0 size=576 callers=1 calls=1
   calls: sub_e7860
*/
void sub_6bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdd0ULL || rel >= 0x6c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006c010 size=784 callers=6 calls=2
   calls: sub_6bc10, sub_9a9a0
*/
void sub_6c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c010ULL || rel >= 0x6c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006c320 size=272 callers=0 calls=0
*/
void sub_6c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c320ULL || rel >= 0x6c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006c430 size=304 callers=2 calls=0
*/
void sub_6c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c430ULL || rel >= 0x6c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006c560 size=496 callers=4 calls=3
   calls: sub_38b0, sub_6bc10, sub_6c430
*/
void sub_6c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c560ULL || rel >= 0x6c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006c750 size=4512 callers=1 calls=27
   calls: sub_35320, sub_3550, sub_38b0, sub_3afa0, sub_3b000, sub_61e80, sub_64060, sub_67010, sub_6bc10, sub_6bd00, sub_6bdd0, sub_6c010
   ... +15 more
*/
void sub_6c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c750ULL || rel >= 0x6d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d8f0 size=64 callers=1 calls=1
   calls: Register_usage_info_for_s_max_abi_regs_d_max_custom_abi
*/
void sub_6d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8f0ULL || rel >= 0x6d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006d930 size=1888 callers=1 calls=55
   calls: EvoOriStats_SignatureHash_llx, HoistInvariants, LoopMakeSingleEntry, LoopUnrolling, MidExpansion, Pipelining, Predication, SinkCodeIntoBlock, TexNodep, sub_3870, sub_54b10, sub_54b20
   ... +43 more
*/
void sub_6d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d930ULL || rel >= 0x6e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e090 size=1056 callers=1 calls=4
   calls: sub_9b0a0, sub_9b3d0, sub_a7a30, sub_a7b70
*/
void sub_6e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e090ULL || rel >= 0x6e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e4b0 size=352 callers=1 calls=0
*/
void sub_6e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e4b0ULL || rel >= 0x6e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e610 size=352 callers=1 calls=3
   calls: sub_9a050, sub_a7310, sub_a73d0
*/
void sub_6e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e610ULL || rel >= 0x6e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e770 size=496 callers=1 calls=4
   calls: sub_6e610, sub_9b820, sub_9b920, sub_a73d0
*/
void sub_6e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e770ULL || rel >= 0x6e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006e960 size=336 callers=2 calls=2
   calls: sub_6e4b0, sub_6e770
*/
void sub_6e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e960ULL || rel >= 0x6eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006eab0 size=144 callers=1 calls=3
   calls: sub_6d930, sub_b7e20, sub_b89a0
*/
void sub_6eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eab0ULL || rel >= 0x6eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006eb40 size=16 callers=0 calls=0
*/
void sub_6eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eb40ULL || rel >= 0x6eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

