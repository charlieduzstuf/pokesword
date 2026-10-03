/* main functions 00885400..00894f90 (65 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00885400 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_885400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885400ULL || rel >= 0x885470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885470 size=192 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_885470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885470ULL || rel >= 0x885530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885530 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_885530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885530ULL || rel >= 0x885580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885580 size=32 callers=0 calls=0
*/
void sub_885580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885580ULL || rel >= 0x8855a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008855a0 size=224 callers=0 calls=5
   calls: sub_780ec0, sub_803d20, sub_819600, sub_819640, sub_819680
*/
void sub_8855a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8855a0ULL || rel >= 0x885680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885680 size=32 callers=0 calls=0
*/
void sub_885680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885680ULL || rel >= 0x8856a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008856a0 size=144 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_8196a0, sub_8196b0
*/
void sub_8856a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8856a0ULL || rel >= 0x885730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885730 size=96 callers=0 calls=3
   calls: sub_7f0aa0, sub_819600, sub_8196d0
*/
void sub_885730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885730ULL || rel >= 0x885790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885790 size=192 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_885790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885790ULL || rel >= 0x885850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885850 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_885850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885850ULL || rel >= 0x8858b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008858b0 size=96 callers=0 calls=2
   calls: sub_819600, sub_8196b0
*/
void sub_8858b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8858b0ULL || rel >= 0x885910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885910 size=32 callers=0 calls=0
*/
void sub_885910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885910ULL || rel >= 0x885930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885930 size=160 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_885930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885930ULL || rel >= 0x8859d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008859d0 size=192 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_8859d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8859d0ULL || rel >= 0x885a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885a90 size=16 callers=0 calls=0
*/
void sub_885a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885a90ULL || rel >= 0x885aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885aa0 size=16 callers=0 calls=0
*/
void sub_885aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885aa0ULL || rel >= 0x885ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885ab0 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_885ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885ab0ULL || rel >= 0x885af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885af0 size=48 callers=0 calls=0
*/
void sub_885af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885af0ULL || rel >= 0x885b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885b20 size=32 callers=0 calls=0
*/
void sub_885b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885b20ULL || rel >= 0x885b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885b40 size=384 callers=0 calls=12
   calls: sub_7f05a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819a80, sub_819ac0, sub_81a030, sub_81a0e0, sub_81bba0
*/
void sub_885b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885b40ULL || rel >= 0x885cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885cc0 size=128 callers=0 calls=3
   calls: sub_7f05a0, sub_819600, sub_8196d0
*/
void sub_885cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885cc0ULL || rel >= 0x885d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885d40 size=112 callers=0 calls=4
   calls: sub_7f05a0, sub_819600, sub_8196d0, sub_81a120
*/
void sub_885d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885d40ULL || rel >= 0x885db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885db0 size=32 callers=0 calls=0
*/
void sub_885db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885db0ULL || rel >= 0x885dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885dd0 size=384 callers=0 calls=13
   calls: sub_7ef5d0, sub_7f79e0, sub_7f8cf0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819a80, sub_819ac0, sub_819b80, sub_81bf40
   ... +1 more
*/
void sub_885dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885dd0ULL || rel >= 0x885f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885f50 size=32 callers=0 calls=0
*/
void sub_885f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885f50ULL || rel >= 0x885f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885f70 size=16 callers=0 calls=0
*/
void sub_885f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885f70ULL || rel >= 0x885f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885f80 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803dd0, sub_81a030, sub_81b5b0
*/
void sub_885f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885f80ULL || rel >= 0x886010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886010 size=32 callers=0 calls=0
*/
void sub_886010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886010ULL || rel >= 0x886030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886030 size=208 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_886030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886030ULL || rel >= 0x886100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886100 size=112 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_819840
*/
void sub_886100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886100ULL || rel >= 0x886170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886170 size=96 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_819850
*/
void sub_886170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886170ULL || rel >= 0x8861d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008861d0 size=96 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_819850
*/
void sub_8861d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8861d0ULL || rel >= 0x886230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886230 size=32 callers=0 calls=0
*/
void sub_886230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886230ULL || rel >= 0x886250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886250 size=48 callers=0 calls=1
   calls: sub_886420
*/
void sub_886250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886250ULL || rel >= 0x886280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886280 size=96 callers=0 calls=2
   calls: sub_819600, sub_886420
*/
void sub_886280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886280ULL || rel >= 0x8862e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008862e0 size=112 callers=0 calls=2
   calls: sub_819600, sub_819690
*/
void sub_8862e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8862e0ULL || rel >= 0x886350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886350 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_886350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886350ULL || rel >= 0x8863a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008863a0 size=64 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_8863a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8863a0ULL || rel >= 0x8863e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008863e0 size=64 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_8863e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8863e0ULL || rel >= 0x886420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886420 size=256 callers=2 calls=8
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_81a350, sub_81aa70
*/
void sub_886420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886420ULL || rel >= 0x886520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886520 size=176 callers=0 calls=7
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_81aa70
*/
void sub_886520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886520ULL || rel >= 0x8865d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008865d0 size=32 callers=0 calls=0
*/
void sub_8865d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8865d0ULL || rel >= 0x8865f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008865f0 size=144 callers=0 calls=2
   calls: sub_7eb330, sub_819600
*/
void sub_8865f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8865f0ULL || rel >= 0x886680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886680 size=128 callers=0 calls=1
   calls: sub_819600
*/
void sub_886680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886680ULL || rel >= 0x886700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886700 size=176 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_8196a0, sub_8196b0, sub_81a030, sub_81acc0
*/
void sub_886700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886700ULL || rel >= 0x8867b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008867b0 size=192 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_81bba0, sub_884a50
*/
void sub_8867b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8867b0ULL || rel >= 0x886870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886870 size=32 callers=0 calls=0
*/
void sub_886870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886870ULL || rel >= 0x886890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886890 size=144 callers=0 calls=2
   calls: sub_7eb330, sub_819600
*/
void sub_886890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886890ULL || rel >= 0x886920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886920 size=128 callers=0 calls=1
   calls: sub_819600
*/
void sub_886920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886920ULL || rel >= 0x8869a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008869a0 size=192 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_81bba0, sub_884a50
*/
void sub_8869a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8869a0ULL || rel >= 0x886a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886a60 size=32 callers=0 calls=0
*/
void sub_886a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886a60ULL || rel >= 0x886a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886a80 size=192 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a030
*/
void sub_886a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886a80ULL || rel >= 0x886b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886b40 size=32 callers=0 calls=0
*/
void sub_886b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886b40ULL || rel >= 0x886b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886b60 size=256 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819b80
*/
void sub_886b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886b60ULL || rel >= 0x886c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886c60 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_886c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886c60ULL || rel >= 0x886ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886ca0 size=32 callers=0 calls=0
*/
void sub_886ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886ca0ULL || rel >= 0x886cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886cc0 size=112 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_819840
*/
void sub_886cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886cc0ULL || rel >= 0x886d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886d30 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_886d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886d30ULL || rel >= 0x886d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886d70 size=112 callers=0 calls=4
   calls: sub_7f09c0, sub_819600, sub_8196d0, sub_81a590
*/
void sub_886d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886d70ULL || rel >= 0x886de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886de0 size=128 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_886de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886de0ULL || rel >= 0x886e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886e60 size=208 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_886e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886e60ULL || rel >= 0x886f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00886f30 size=240 callers=0 calls=4
   calls: sub_7e9a60, sub_7ecc90, sub_7ef4c0, sub_7fe1d0
*/
void sub_886f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x886f30ULL || rel >= 0x887020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887020 size=32 callers=0 calls=0
*/
void sub_887020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887020ULL || rel >= 0x887040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887040 size=224 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a030
*/
void sub_887040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887040ULL || rel >= 0x887120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887120 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_887120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887120ULL || rel >= 0x887190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887190 size=176 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_887190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887190ULL || rel >= 0x887240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887240 size=32 callers=0 calls=0
*/
void sub_887240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887240ULL || rel >= 0x887260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887260 size=16 callers=0 calls=0
*/
void sub_887260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887260ULL || rel >= 0x887270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887270 size=160 callers=0 calls=5
   calls: sub_780da0, sub_7eb2b0, sub_819600, sub_8197f0, sub_81acc0
*/
void sub_887270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887270ULL || rel >= 0x887310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887310 size=176 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_887310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887310ULL || rel >= 0x8873c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008873c0 size=32 callers=0 calls=0
*/
void sub_8873c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8873c0ULL || rel >= 0x8873e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008873e0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8873e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8873e0ULL || rel >= 0x887430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887430 size=32 callers=0 calls=0
*/
void sub_887430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887430ULL || rel >= 0x887450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887450 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_887450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887450ULL || rel >= 0x8874b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008874b0 size=32 callers=0 calls=0
*/
void sub_8874b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8874b0ULL || rel >= 0x8874d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008874d0 size=208 callers=0 calls=8
   calls: sub_7eef50, sub_7f8cf0, sub_819600, sub_819640, sub_8196d0, sub_8197f0, sub_81bf40, sub_81c1b0
*/
void sub_8874d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8874d0ULL || rel >= 0x8875a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008875a0 size=32 callers=0 calls=0
*/
void sub_8875a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8875a0ULL || rel >= 0x8875c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008875c0 size=224 callers=0 calls=8
   calls: sub_7f8cf0, sub_819600, sub_819640, sub_8196d0, sub_8197f0, sub_81abd0, sub_81bf40, sub_81c1b0
*/
void sub_8875c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8875c0ULL || rel >= 0x8876a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008876a0 size=32 callers=0 calls=0
*/
void sub_8876a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8876a0ULL || rel >= 0x8876c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008876c0 size=192 callers=0 calls=8
   calls: sub_7f0670, sub_7f8cf0, sub_819600, sub_819640, sub_8196d0, sub_8197f0, sub_81bf40, sub_81c1b0
*/
void sub_8876c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8876c0ULL || rel >= 0x887780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887780 size=32 callers=0 calls=0
*/
void sub_887780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887780ULL || rel >= 0x8877a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008877a0 size=112 callers=0 calls=3
   calls: sub_7f09c0, sub_819600, sub_8196d0
*/
void sub_8877a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8877a0ULL || rel >= 0x887810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887810 size=128 callers=0 calls=4
   calls: sub_7f09c0, sub_819600, sub_8196a0, sub_8196d0
*/
void sub_887810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887810ULL || rel >= 0x887890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887890 size=32 callers=0 calls=0
*/
void sub_887890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887890ULL || rel >= 0x8878b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008878b0 size=304 callers=0 calls=11
   calls: sub_7eef40, sub_7f09c0, sub_7f24b0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a510, sub_81af00, sub_8879e0
*/
void sub_8878b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8878b0ULL || rel >= 0x8879e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008879e0 size=256 callers=1 calls=8
   calls: sub_7ee6b0, sub_7f0aa0, sub_7f24b0, sub_7f7690, sub_7f8cf0, sub_8196d0, sub_81bf40, sub_81c1b0
*/
void sub_8879e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8879e0ULL || rel >= 0x887ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887ae0 size=32 callers=0 calls=0
*/
void sub_887ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887ae0ULL || rel >= 0x887b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887b00 size=240 callers=0 calls=8
   calls: sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a510, sub_81a670
*/
void sub_887b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887b00ULL || rel >= 0x887bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887bf0 size=32 callers=0 calls=0
*/
void sub_887bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887bf0ULL || rel >= 0x887c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887c10 size=320 callers=0 calls=10
   calls: sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819790, sub_81a550, sub_81acc0, sub_81b100
*/
void sub_887c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887c10ULL || rel >= 0x887d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887d50 size=32 callers=0 calls=0
*/
void sub_887d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887d50ULL || rel >= 0x887d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887d70 size=336 callers=0 calls=11
   calls: sub_7eb230, sub_7ef4c0, sub_7f0aa0, sub_7f7ff0, sub_7f87c0, sub_803c60, sub_819600, sub_8196d0, sub_819d00, sub_81be40, sub_82d990
*/
void sub_887d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887d70ULL || rel >= 0x887ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887ec0 size=32 callers=0 calls=0
*/
void sub_887ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887ec0ULL || rel >= 0x887ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00887ee0 size=368 callers=0 calls=8
   calls: sub_7ef2b0, sub_7f0c00, sub_803c60, sub_819600, sub_8196d0, sub_819a80, sub_819ac0, sub_819df0
*/
void sub_887ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x887ee0ULL || rel >= 0x888050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888050 size=32 callers=0 calls=0
*/
void sub_888050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888050ULL || rel >= 0x888070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888070 size=96 callers=0 calls=2
   calls: sub_819600, sub_8881e0
*/
void sub_888070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888070ULL || rel >= 0x8880d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008880d0 size=96 callers=0 calls=2
   calls: sub_819600, sub_8881e0
*/
void sub_8880d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8880d0ULL || rel >= 0x888130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888130 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_888130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888130ULL || rel >= 0x888180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888180 size=96 callers=0 calls=2
   calls: sub_819600, sub_8881e0
*/
void sub_888180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888180ULL || rel >= 0x8881e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008881e0 size=272 callers=3 calls=5
   calls: sub_780da0, sub_780e90, sub_780f80, sub_781040, sub_7810b0
*/
void sub_8881e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8881e0ULL || rel >= 0x8882f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008882f0 size=32 callers=0 calls=0
*/
void sub_8882f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8882f0ULL || rel >= 0x888310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888310 size=208 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_8197f0, sub_819df0
*/
void sub_888310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888310ULL || rel >= 0x8883e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008883e0 size=32 callers=0 calls=0
*/
void sub_8883e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8883e0ULL || rel >= 0x888400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888400 size=224 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_8197f0, sub_819df0
*/
void sub_888400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888400ULL || rel >= 0x8884e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008884e0 size=32 callers=0 calls=0
*/
void sub_8884e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8884e0ULL || rel >= 0x888500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888500 size=144 callers=0 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_888500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888500ULL || rel >= 0x888590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888590 size=32 callers=0 calls=0
*/
void sub_888590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888590ULL || rel >= 0x8885b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008885b0 size=96 callers=0 calls=3
   calls: sub_7ef540, sub_819600, sub_8196d0
*/
void sub_8885b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8885b0ULL || rel >= 0x888610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888610 size=32 callers=0 calls=0
*/
void sub_888610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888610ULL || rel >= 0x888630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888630 size=96 callers=0 calls=2
   calls: sub_819600, sub_8197f0
*/
void sub_888630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888630ULL || rel >= 0x888690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888690 size=32 callers=0 calls=0
*/
void sub_888690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888690ULL || rel >= 0x8886b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008886b0 size=304 callers=0 calls=9
   calls: sub_7ef6a0, sub_7f7ff0, sub_7f8cf0, sub_803c60, sub_819600, sub_8196d0, sub_8198c0, sub_819c80, sub_81c1b0
*/
void sub_8886b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8886b0ULL || rel >= 0x8887e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008887e0 size=32 callers=0 calls=0
*/
void sub_8887e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8887e0ULL || rel >= 0x888800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888800 size=128 callers=0 calls=3
   calls: sub_7ef4c0, sub_819600, sub_8196d0
*/
void sub_888800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888800ULL || rel >= 0x888880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888880 size=32 callers=0 calls=0
*/
void sub_888880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888880ULL || rel >= 0x8888a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008888a0 size=128 callers=0 calls=3
   calls: sub_7ef4c0, sub_819600, sub_8196d0
*/
void sub_8888a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8888a0ULL || rel >= 0x888920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888920 size=32 callers=0 calls=0
*/
void sub_888920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888920ULL || rel >= 0x888940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888940 size=256 callers=0 calls=8
   calls: sub_780ec0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197f0, sub_81a030
*/
void sub_888940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888940ULL || rel >= 0x888a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888a40 size=32 callers=0 calls=0
*/
void sub_888a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888a40ULL || rel >= 0x888a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888a60 size=1152 callers=0 calls=8
   calls: sub_7f0c00, sub_7f7690, sub_803c60, sub_819600, sub_8196d0, sub_819a80, sub_819ac0, sub_819df0
*/
void sub_888a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888a60ULL || rel >= 0x888ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888ee0 size=32 callers=0 calls=0
*/
void sub_888ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888ee0ULL || rel >= 0x888f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888f00 size=16 callers=0 calls=0
*/
void sub_888f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888f00ULL || rel >= 0x888f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888f10 size=192 callers=0 calls=9
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819a80, sub_819ac0, sub_81a030, sub_81b750
*/
void sub_888f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888f10ULL || rel >= 0x888fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888fd0 size=32 callers=0 calls=0
*/
void sub_888fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888fd0ULL || rel >= 0x888ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00888ff0 size=272 callers=0 calls=7
   calls: sub_7f78c0, sub_7f7ff0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819d00
*/
void sub_888ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x888ff0ULL || rel >= 0x889100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889100 size=32 callers=0 calls=0
*/
void sub_889100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889100ULL || rel >= 0x889120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889120 size=208 callers=0 calls=7
   calls: sub_7eef50, sub_7ef2b0, sub_7ef540, sub_7f79e0, sub_819600, sub_8196d0, sub_819bc0
*/
void sub_889120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889120ULL || rel >= 0x8891f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008891f0 size=32 callers=0 calls=0
*/
void sub_8891f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8891f0ULL || rel >= 0x889210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889210 size=16 callers=0 calls=0
*/
void sub_889210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889210ULL || rel >= 0x889220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889220 size=16 callers=0 calls=0
*/
void sub_889220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889220ULL || rel >= 0x889230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889230 size=32 callers=0 calls=0
*/
void sub_889230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889230ULL || rel >= 0x889250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889250 size=96 callers=0 calls=2
   calls: sub_819600, sub_81a310
*/
void sub_889250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889250ULL || rel >= 0x8892b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008892b0 size=32 callers=0 calls=0
*/
void sub_8892b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8892b0ULL || rel >= 0x8892d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008892d0 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_8892d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8892d0ULL || rel >= 0x889340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889340 size=32 callers=0 calls=0
*/
void sub_889340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889340ULL || rel >= 0x889360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889360 size=112 callers=0 calls=3
   calls: sub_7eb230, sub_819600, sub_81ae20
*/
void sub_889360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889360ULL || rel >= 0x8893d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008893d0 size=32 callers=0 calls=0
*/
void sub_8893d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8893d0ULL || rel >= 0x8893f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008893f0 size=144 callers=0 calls=2
   calls: sub_819600, sub_81a310
*/
void sub_8893f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8893f0ULL || rel >= 0x889480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889480 size=32 callers=0 calls=0
*/
void sub_889480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889480ULL || rel >= 0x8894a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008894a0 size=336 callers=0 calls=8
   calls: sub_7eef40, sub_7eef50, sub_7ef220, sub_7f7990, sub_803c60, sub_803d20, sub_8196d0, sub_81aa70
*/
void sub_8894a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8894a0ULL || rel >= 0x8895f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008895f0 size=208 callers=0 calls=7
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_819600, sub_8196d0, sub_81aa70
*/
void sub_8895f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8895f0ULL || rel >= 0x8896c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008896c0 size=32 callers=0 calls=0
*/
void sub_8896c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8896c0ULL || rel >= 0x8896e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008896e0 size=176 callers=0 calls=6
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_819600, sub_8196d0, sub_81aa70
*/
void sub_8896e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8896e0ULL || rel >= 0x889790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889790 size=32 callers=0 calls=0
*/
void sub_889790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889790ULL || rel >= 0x8897b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008897b0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8897b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8897b0ULL || rel >= 0x889800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889800 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_889800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889800ULL || rel >= 0x889840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889840 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_889840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889840ULL || rel >= 0x889890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889890 size=128 callers=0 calls=2
   calls: sub_7cc000, sub_7e9a60
*/
void sub_889890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889890ULL || rel >= 0x889910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889910 size=32 callers=0 calls=0
*/
void sub_889910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889910ULL || rel >= 0x889930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889930 size=112 callers=0 calls=2
   calls: sub_819600, sub_81a1d0
*/
void sub_889930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889930ULL || rel >= 0x8899a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008899a0 size=32 callers=0 calls=0
*/
void sub_8899a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8899a0ULL || rel >= 0x8899c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008899c0 size=160 callers=0 calls=4
   calls: sub_803c60, sub_819df0, sub_81b610, sub_81be40
*/
void sub_8899c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8899c0ULL || rel >= 0x889a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889a60 size=32 callers=0 calls=0
*/
void sub_889a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889a60ULL || rel >= 0x889a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889a80 size=304 callers=0 calls=6
   calls: sub_7ef3d0, sub_803c60, sub_8196d0, sub_819df0, sub_81b610, sub_81be40
*/
void sub_889a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889a80ULL || rel >= 0x889bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889bb0 size=32 callers=0 calls=0
*/
void sub_889bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889bb0ULL || rel >= 0x889bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889bd0 size=176 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819df0
*/
void sub_889bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889bd0ULL || rel >= 0x889c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889c80 size=32 callers=0 calls=0
*/
void sub_889c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889c80ULL || rel >= 0x889ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889ca0 size=208 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819df0
*/
void sub_889ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889ca0ULL || rel >= 0x889d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889d70 size=128 callers=0 calls=1
   calls: sub_819600
*/
void sub_889d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889d70ULL || rel >= 0x889df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889df0 size=176 callers=0 calls=5
   calls: sub_803c60, sub_819600, sub_8196a0, sub_8196b0, sub_819df0
*/
void sub_889df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889df0ULL || rel >= 0x889ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889ea0 size=32 callers=0 calls=0
*/
void sub_889ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889ea0ULL || rel >= 0x889ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889ec0 size=192 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819df0
*/
void sub_889ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889ec0ULL || rel >= 0x889f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889f80 size=32 callers=0 calls=0
*/
void sub_889f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889f80ULL || rel >= 0x889fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00889fa0 size=352 callers=0 calls=10
   calls: sub_7ee6b0, sub_7f0b30, sub_7f2e70, sub_7f8cf0, sub_803c60, sub_819600, sub_8196d0, sub_819df0, sub_81bf40, sub_81c1b0
*/
void sub_889fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x889fa0ULL || rel >= 0x88a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a100 size=32 callers=0 calls=0
*/
void sub_88a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a100ULL || rel >= 0x88a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a120 size=288 callers=0 calls=9
   calls: sub_7eef50, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_8197f0, sub_81a4a0, sub_81be40
*/
void sub_88a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a120ULL || rel >= 0x88a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a240 size=32 callers=0 calls=0
*/
void sub_88a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a240ULL || rel >= 0x88a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a260 size=224 callers=0 calls=7
   calls: sub_812ec0, sub_812f00, sub_813320, sub_819600, sub_8196d0, sub_81a4e0, sub_81be40
*/
void sub_88a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a260ULL || rel >= 0x88a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a340 size=32 callers=0 calls=0
*/
void sub_88a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a340ULL || rel >= 0x88a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a360 size=192 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_81bba0, sub_884a50
*/
void sub_88a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a360ULL || rel >= 0x88a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a420 size=32 callers=0 calls=0
*/
void sub_88a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a420ULL || rel >= 0x88a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a440 size=144 callers=0 calls=4
   calls: sub_780d70, sub_819600, sub_819640, sub_8196b0
*/
void sub_88a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a440ULL || rel >= 0x88a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a4d0 size=96 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_88a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a4d0ULL || rel >= 0x88a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a530 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a530ULL || rel >= 0x88a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a580 size=16 callers=0 calls=0
*/
void sub_88a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a580ULL || rel >= 0x88a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a590 size=16 callers=0 calls=0
*/
void sub_88a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a590ULL || rel >= 0x88a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a5a0 size=112 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_819a80, sub_81b430
*/
void sub_88a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a5a0ULL || rel >= 0x88a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a610 size=32 callers=0 calls=0
*/
void sub_88a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a610ULL || rel >= 0x88a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a630 size=32 callers=0 calls=0
*/
void sub_88a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a630ULL || rel >= 0x88a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a650 size=272 callers=0 calls=12
   calls: sub_786d90, sub_7f09c0, sub_7f24b0, sub_7f7db0, sub_7f7ff0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a350, sub_81a510
*/
void sub_88a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a650ULL || rel >= 0x88a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a760 size=32 callers=0 calls=0
*/
void sub_88a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a760ULL || rel >= 0x88a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a780 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a780ULL || rel >= 0x88a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a7d0 size=32 callers=0 calls=0
*/
void sub_88a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a7d0ULL || rel >= 0x88a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a7f0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a7f0ULL || rel >= 0x88a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a840 size=32 callers=0 calls=0
*/
void sub_88a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a840ULL || rel >= 0x88a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a860 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_88a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a860ULL || rel >= 0x88a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a8d0 size=32 callers=0 calls=0
*/
void sub_88a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a8d0ULL || rel >= 0x88a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a8f0 size=224 callers=0 calls=11
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_8197e0, sub_819840, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_88a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a8f0ULL || rel >= 0x88a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088a9d0 size=96 callers=0 calls=2
   calls: sub_7e9a60, sub_819800
*/
void sub_88a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a9d0ULL || rel >= 0x88aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088aa30 size=32 callers=0 calls=0
*/
void sub_88aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88aa30ULL || rel >= 0x88aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088aa50 size=208 callers=0 calls=6
   calls: sub_7f87f0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a290
*/
void sub_88aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88aa50ULL || rel >= 0x88ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ab20 size=96 callers=0 calls=3
   calls: sub_819600, sub_8196d0, sub_81a2d0
*/
void sub_88ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ab20ULL || rel >= 0x88ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ab80 size=32 callers=0 calls=0
*/
void sub_88ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ab80ULL || rel >= 0x88aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088aba0 size=96 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_88aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88aba0ULL || rel >= 0x88ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ac00 size=32 callers=0 calls=0
*/
void sub_88ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ac00ULL || rel >= 0x88ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ac20 size=272 callers=0 calls=10
   calls: sub_7ef2b0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819890, sub_8198c0, sub_81a980, sub_81bf30
*/
void sub_88ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ac20ULL || rel >= 0x88ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ad30 size=32 callers=0 calls=0
*/
void sub_88ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ad30ULL || rel >= 0x88ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ad50 size=144 callers=0 calls=5
   calls: sub_7f29c0, sub_803c60, sub_819600, sub_8196d0, sub_81a9c0
*/
void sub_88ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ad50ULL || rel >= 0x88ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ade0 size=112 callers=0 calls=5
   calls: sub_7f29c0, sub_803c60, sub_819600, sub_8196d0, sub_81a9c0
*/
void sub_88ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ade0ULL || rel >= 0x88ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ae50 size=160 callers=0 calls=6
   calls: sub_7f29c0, sub_803c60, sub_819600, sub_819690, sub_8196d0, sub_81a9c0
*/
void sub_88ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ae50ULL || rel >= 0x88aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088aef0 size=32 callers=0 calls=0
*/
void sub_88aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88aef0ULL || rel >= 0x88af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088af10 size=96 callers=0 calls=2
   calls: sub_819600, sub_8197f0
*/
void sub_88af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88af10ULL || rel >= 0x88af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088af70 size=32 callers=0 calls=0
*/
void sub_88af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88af70ULL || rel >= 0x88af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088af90 size=176 callers=0 calls=5
   calls: sub_7eb680, sub_819600, sub_819640, sub_8196b0, sub_8197f0
*/
void sub_88af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88af90ULL || rel >= 0x88b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b040 size=16 callers=0 calls=0
*/
void sub_88b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b040ULL || rel >= 0x88b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b050 size=32 callers=0 calls=0
*/
void sub_88b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b050ULL || rel >= 0x88b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b070 size=128 callers=0 calls=4
   calls: sub_7f0670, sub_819600, sub_8196d0, sub_8197f0
*/
void sub_88b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b070ULL || rel >= 0x88b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b0f0 size=144 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_8806b0
*/
void sub_88b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b0f0ULL || rel >= 0x88b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b180 size=192 callers=0 calls=5
   calls: sub_7f0670, sub_819600, sub_819640, sub_8196d0, sub_8197f0
*/
void sub_88b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b180ULL || rel >= 0x88b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b240 size=128 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_8815b0
*/
void sub_88b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b240ULL || rel >= 0x88b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b2c0 size=128 callers=0 calls=4
   calls: sub_7f0670, sub_819600, sub_8196d0, sub_8197f0
*/
void sub_88b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b2c0ULL || rel >= 0x88b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b340 size=32 callers=0 calls=0
*/
void sub_88b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b340ULL || rel >= 0x88b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b360 size=160 callers=0 calls=4
   calls: sub_819600, sub_8196b0, sub_8197f0, sub_81b7e0
*/
void sub_88b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b360ULL || rel >= 0x88b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b400 size=16 callers=0 calls=0
*/
void sub_88b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b400ULL || rel >= 0x88b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b410 size=96 callers=0 calls=2
   calls: sub_819600, sub_8197f0
*/
void sub_88b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b410ULL || rel >= 0x88b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b470 size=32 callers=0 calls=0
*/
void sub_88b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b470ULL || rel >= 0x88b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b490 size=176 callers=0 calls=1
   calls: sub_819600
*/
void sub_88b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b490ULL || rel >= 0x88b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b540 size=224 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819df0
*/
void sub_88b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b540ULL || rel >= 0x88b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b620 size=32 callers=0 calls=0
*/
void sub_88b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b620ULL || rel >= 0x88b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b640 size=272 callers=0 calls=9
   calls: sub_786d90, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196d0, sub_819b00
*/
void sub_88b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b640ULL || rel >= 0x88b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b750 size=32 callers=0 calls=0
*/
void sub_88b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b750ULL || rel >= 0x88b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b770 size=176 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819fb0
*/
void sub_88b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b770ULL || rel >= 0x88b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b820 size=32 callers=0 calls=0
*/
void sub_88b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b820ULL || rel >= 0x88b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b840 size=272 callers=0 calls=8
   calls: sub_780ec0, sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_819600, sub_8196d0, sub_81aa70
*/
void sub_88b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b840ULL || rel >= 0x88b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b950 size=32 callers=0 calls=0
*/
void sub_88b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b950ULL || rel >= 0x88b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b970 size=16 callers=0 calls=0
*/
void sub_88b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b970ULL || rel >= 0x88b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b980 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_88b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b980ULL || rel >= 0x88b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088b9f0 size=32 callers=0 calls=0
*/
void sub_88b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b9f0ULL || rel >= 0x88ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ba10 size=16 callers=0 calls=0
*/
void sub_88ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ba10ULL || rel >= 0x88ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ba20 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_88ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ba20ULL || rel >= 0x88ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ba90 size=32 callers=0 calls=0
*/
void sub_88ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ba90ULL || rel >= 0x88bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bab0 size=16 callers=0 calls=0
*/
void sub_88bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bab0ULL || rel >= 0x88bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bac0 size=16 callers=0 calls=0
*/
void sub_88bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bac0ULL || rel >= 0x88bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bad0 size=32 callers=0 calls=0
*/
void sub_88bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bad0ULL || rel >= 0x88baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088baf0 size=96 callers=0 calls=2
   calls: sub_7ebb10, sub_819600
*/
void sub_88baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88baf0ULL || rel >= 0x88bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bb50 size=32 callers=0 calls=0
*/
void sub_88bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bb50ULL || rel >= 0x88bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bb70 size=144 callers=0 calls=2
   calls: sub_819600, sub_819d40
*/
void sub_88bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bb70ULL || rel >= 0x88bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bc00 size=112 callers=0 calls=4
   calls: sub_7ee6c0, sub_819600, sub_819630, sub_8196d0
*/
void sub_88bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bc00ULL || rel >= 0x88bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bc70 size=160 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_8196b0, sub_819c80
*/
void sub_88bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bc70ULL || rel >= 0x88bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bd10 size=96 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_88bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bd10ULL || rel >= 0x88bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bd70 size=32 callers=0 calls=0
*/
void sub_88bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bd70ULL || rel >= 0x88bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bd90 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_88bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bd90ULL || rel >= 0x88bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bdf0 size=32 callers=0 calls=0
*/
void sub_88bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bdf0ULL || rel >= 0x88be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088be10 size=112 callers=0 calls=2
   calls: sub_819600, sub_819810
*/
void sub_88be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88be10ULL || rel >= 0x88be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088be80 size=32 callers=0 calls=0
*/
void sub_88be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88be80ULL || rel >= 0x88bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bea0 size=256 callers=0 calls=6
   calls: sub_7ef2b0, sub_803c60, sub_819600, sub_8196d0, sub_819df0, sub_81be40
*/
void sub_88bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bea0ULL || rel >= 0x88bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bfa0 size=32 callers=0 calls=0
*/
void sub_88bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bfa0ULL || rel >= 0x88bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088bfc0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_88bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88bfc0ULL || rel >= 0x88c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c020 size=32 callers=0 calls=0
*/
void sub_88c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c020ULL || rel >= 0x88c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c040 size=128 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_88c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c040ULL || rel >= 0x88c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c0c0 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_88c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c0c0ULL || rel >= 0x88c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c130 size=16 callers=0 calls=0
*/
void sub_88c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c130ULL || rel >= 0x88c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c140 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_88c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c140ULL || rel >= 0x88c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c1a0 size=32 callers=0 calls=0
*/
void sub_88c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c1a0ULL || rel >= 0x88c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c1c0 size=128 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_88c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c1c0ULL || rel >= 0x88c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c240 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_88c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c240ULL || rel >= 0x88c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c2b0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_88c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c2b0ULL || rel >= 0x88c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c310 size=32 callers=0 calls=0
*/
void sub_88c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c310ULL || rel >= 0x88c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c330 size=128 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_88c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c330ULL || rel >= 0x88c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c3b0 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_88c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c3b0ULL || rel >= 0x88c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c420 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_88c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c420ULL || rel >= 0x88c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c480 size=32 callers=0 calls=0
*/
void sub_88c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c480ULL || rel >= 0x88c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c4a0 size=144 callers=0 calls=1
   calls: sub_819600
*/
void sub_88c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c4a0ULL || rel >= 0x88c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c530 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_88c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c530ULL || rel >= 0x88c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c590 size=32 callers=0 calls=0
*/
void sub_88c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c590ULL || rel >= 0x88c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c5b0 size=128 callers=0 calls=3
   calls: sub_7ef540, sub_819600, sub_8196d0
*/
void sub_88c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c5b0ULL || rel >= 0x88c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c630 size=32 callers=0 calls=0
*/
void sub_88c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c630ULL || rel >= 0x88c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c650 size=224 callers=0 calls=9
   calls: sub_7ebb80, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_88c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c650ULL || rel >= 0x88c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c730 size=32 callers=0 calls=0
*/
void sub_88c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c730ULL || rel >= 0x88c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c750 size=160 callers=0 calls=3
   calls: sub_780c60, sub_7ebdb0, sub_819600
*/
void sub_88c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c750ULL || rel >= 0x88c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c7f0 size=32 callers=0 calls=0
*/
void sub_88c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c7f0ULL || rel >= 0x88c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c810 size=16 callers=0 calls=0
*/
void sub_88c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c810ULL || rel >= 0x88c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c820 size=288 callers=0 calls=6
   calls: sub_7e99f0, sub_819600, sub_819790, sub_81b8d0, sub_81b930, sub_88c940
*/
void sub_88c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c820ULL || rel >= 0x88c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088c940 size=240 callers=1 calls=7
   calls: sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_81a550, sub_81b100
*/
void sub_88c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88c940ULL || rel >= 0x88ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ca30 size=32 callers=0 calls=0
*/
void sub_88ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ca30ULL || rel >= 0x88ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ca50 size=64 callers=0 calls=1
   calls: sub_8196b0
*/
void sub_88ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ca50ULL || rel >= 0x88ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ca90 size=128 callers=0 calls=3
   calls: sub_8196a0, sub_8196b0, sub_88cc10
*/
void sub_88ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ca90ULL || rel >= 0x88cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cb10 size=256 callers=0 calls=6
   calls: sub_7f09c0, sub_7f0aa0, sub_819600, sub_8196a0, sub_8196d0, sub_8197f0
*/
void sub_88cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cb10ULL || rel >= 0x88cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cc10 size=352 callers=1 calls=11
   calls: sub_7eef40, sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_819790, sub_8197f0, sub_81a550, sub_81af00, sub_81bf40
*/
void sub_88cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cc10ULL || rel >= 0x88cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cd70 size=32 callers=0 calls=0
*/
void sub_88cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cd70ULL || rel >= 0x88cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cd90 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cd90ULL || rel >= 0x88cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cde0 size=16 callers=0 calls=0
*/
void sub_88cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cde0ULL || rel >= 0x88cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cdf0 size=208 callers=0 calls=8
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81aa70
*/
void sub_88cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cdf0ULL || rel >= 0x88cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cec0 size=224 callers=0 calls=8
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_81aa70, sub_890870
*/
void sub_88cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cec0ULL || rel >= 0x88cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cfa0 size=32 callers=0 calls=0
*/
void sub_88cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cfa0ULL || rel >= 0x88cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088cfc0 size=192 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819df0, sub_81be40
*/
void sub_88cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88cfc0ULL || rel >= 0x88d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d080 size=32 callers=0 calls=0
*/
void sub_88d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d080ULL || rel >= 0x88d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d0a0 size=176 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819df0
*/
void sub_88d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d0a0ULL || rel >= 0x88d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d150 size=32 callers=0 calls=0
*/
void sub_88d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d150ULL || rel >= 0x88d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d170 size=160 callers=0 calls=2
   calls: sub_819600, sub_819660
*/
void sub_88d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d170ULL || rel >= 0x88d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d210 size=32 callers=0 calls=0
*/
void sub_88d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d210ULL || rel >= 0x88d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d230 size=96 callers=0 calls=2
   calls: sub_819600, sub_81a310
*/
void sub_88d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d230ULL || rel >= 0x88d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d290 size=32 callers=0 calls=0
*/
void sub_88d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d290ULL || rel >= 0x88d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d2b0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_88d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d2b0ULL || rel >= 0x88d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d310 size=32 callers=0 calls=0
*/
void sub_88d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d310ULL || rel >= 0x88d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d330 size=112 callers=0 calls=2
   calls: sub_819600, sub_8197f0
*/
void sub_88d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d330ULL || rel >= 0x88d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d3a0 size=32 callers=0 calls=0
*/
void sub_88d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d3a0ULL || rel >= 0x88d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d3c0 size=96 callers=0 calls=2
   calls: sub_780c60, sub_819600
*/
void sub_88d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d3c0ULL || rel >= 0x88d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d420 size=32 callers=0 calls=0
*/
void sub_88d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d420ULL || rel >= 0x88d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d440 size=112 callers=0 calls=2
   calls: sub_780c60, sub_819600
*/
void sub_88d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d440ULL || rel >= 0x88d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d4b0 size=32 callers=0 calls=0
*/
void sub_88d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d4b0ULL || rel >= 0x88d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d4d0 size=128 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_88d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d4d0ULL || rel >= 0x88d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d550 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_88d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d550ULL || rel >= 0x88d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d5c0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_88d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d5c0ULL || rel >= 0x88d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d620 size=32 callers=0 calls=0
*/
void sub_88d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d620ULL || rel >= 0x88d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d640 size=96 callers=0 calls=2
   calls: sub_819600, sub_819810
*/
void sub_88d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d640ULL || rel >= 0x88d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d6a0 size=32 callers=0 calls=0
*/
void sub_88d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d6a0ULL || rel >= 0x88d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d6c0 size=112 callers=0 calls=3
   calls: sub_7ef4c0, sub_819600, sub_8196d0
*/
void sub_88d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d6c0ULL || rel >= 0x88d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d730 size=32 callers=0 calls=0
*/
void sub_88d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d730ULL || rel >= 0x88d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d750 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d750ULL || rel >= 0x88d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d7a0 size=32 callers=0 calls=0
*/
void sub_88d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d7a0ULL || rel >= 0x88d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d7c0 size=256 callers=0 calls=9
   calls: sub_7cbf80, sub_7cc000, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a030, sub_81ad70
*/
void sub_88d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d7c0ULL || rel >= 0x88d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d8c0 size=32 callers=0 calls=0
*/
void sub_88d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d8c0ULL || rel >= 0x88d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d8e0 size=128 callers=0 calls=2
   calls: sub_819600, sub_819660
*/
void sub_88d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d8e0ULL || rel >= 0x88d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d960 size=32 callers=0 calls=0
*/
void sub_88d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d960ULL || rel >= 0x88d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d980 size=96 callers=0 calls=2
   calls: sub_819600, sub_819630
*/
void sub_88d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d980ULL || rel >= 0x88d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088d9e0 size=32 callers=0 calls=0
*/
void sub_88d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88d9e0ULL || rel >= 0x88da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088da00 size=128 callers=0 calls=2
   calls: sub_819600, sub_8197f0
*/
void sub_88da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88da00ULL || rel >= 0x88da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088da80 size=32 callers=0 calls=0
*/
void sub_88da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88da80ULL || rel >= 0x88daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088daa0 size=96 callers=0 calls=2
   calls: sub_819600, sub_8197f0
*/
void sub_88daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88daa0ULL || rel >= 0x88db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088db00 size=32 callers=0 calls=0
*/
void sub_88db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88db00ULL || rel >= 0x88db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088db20 size=240 callers=0 calls=9
   calls: sub_7eb460, sub_7eef50, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_8197f0, sub_81a4a0
*/
void sub_88db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88db20ULL || rel >= 0x88dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088dc10 size=32 callers=0 calls=0
*/
void sub_88dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88dc10ULL || rel >= 0x88dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088dc30 size=96 callers=0 calls=3
   calls: sub_7eef50, sub_8196d0, sub_81acc0
*/
void sub_88dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88dc30ULL || rel >= 0x88dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088dc90 size=96 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_88dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88dc90ULL || rel >= 0x88dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088dcf0 size=320 callers=0 calls=9
   calls: sub_7ef2b0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0, sub_819b80
*/
void sub_88dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88dcf0ULL || rel >= 0x88de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088de30 size=32 callers=0 calls=0
*/
void sub_88de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88de30ULL || rel >= 0x88de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088de50 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88de50ULL || rel >= 0x88dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088dea0 size=16 callers=0 calls=0
*/
void sub_88dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88dea0ULL || rel >= 0x88deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088deb0 size=192 callers=0 calls=6
   calls: sub_76c010, sub_7eef40, sub_7ef220, sub_819600, sub_819640, sub_8196d0
*/
void sub_88deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88deb0ULL || rel >= 0x88df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088df70 size=224 callers=0 calls=8
   calls: sub_76c010, sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_8196d0, sub_81aa70, sub_8908e0
*/
void sub_88df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88df70ULL || rel >= 0x88e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e050 size=32 callers=0 calls=0
*/
void sub_88e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e050ULL || rel >= 0x88e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e070 size=304 callers=0 calls=10
   calls: sub_7eef40, sub_7eef50, sub_7ef220, sub_7f7990, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_81a030, sub_81aa70
*/
void sub_88e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e070ULL || rel >= 0x88e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e1a0 size=32 callers=0 calls=0
*/
void sub_88e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e1a0ULL || rel >= 0x88e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e1c0 size=192 callers=0 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_88e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e1c0ULL || rel >= 0x88e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e280 size=144 callers=0 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_88e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e280ULL || rel >= 0x88e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e310 size=304 callers=0 calls=9
   calls: sub_7eef50, sub_7f7990, sub_803c60, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0, sub_819df0, sub_81be40
*/
void sub_88e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e310ULL || rel >= 0x88e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e440 size=32 callers=0 calls=0
*/
void sub_88e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e440ULL || rel >= 0x88e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e460 size=224 callers=0 calls=5
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196b0, sub_8196d0
*/
void sub_88e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e460ULL || rel >= 0x88e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e540 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e540ULL || rel >= 0x88e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e590 size=224 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_88e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e590ULL || rel >= 0x88e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e670 size=176 callers=0 calls=5
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196b0, sub_8196d0
*/
void sub_88e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e670ULL || rel >= 0x88e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e720 size=144 callers=0 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_88e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e720ULL || rel >= 0x88e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e7b0 size=256 callers=0 calls=8
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0, sub_81bd20, sub_81be40
*/
void sub_88e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e7b0ULL || rel >= 0x88e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e8b0 size=192 callers=0 calls=7
   calls: sub_803c60, sub_819790, sub_819930, sub_81a720, sub_81a760, sub_81c220, sub_81c3a0
*/
void sub_88e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e8b0ULL || rel >= 0x88e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088e970 size=176 callers=0 calls=7
   calls: sub_7eef50, sub_7f7990, sub_8196a0, sub_8196b0, sub_8196d0, sub_81bd20, sub_81be40
*/
void sub_88e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e970ULL || rel >= 0x88ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ea20 size=32 callers=0 calls=0
*/
void sub_88ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ea20ULL || rel >= 0x88ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ea40 size=144 callers=0 calls=3
   calls: sub_803c60, sub_819df0, sub_81be40
*/
void sub_88ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ea40ULL || rel >= 0x88ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ead0 size=32 callers=0 calls=0
*/
void sub_88ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ead0ULL || rel >= 0x88eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088eaf0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88eaf0ULL || rel >= 0x88eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088eb40 size=224 callers=0 calls=6
   calls: sub_780c60, sub_7f0b70, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0
*/
void sub_88eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88eb40ULL || rel >= 0x88ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ec20 size=336 callers=0 calls=11
   calls: sub_7f2550, sub_803c60, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0, sub_8197f0, sub_819860, sub_81ab10, sub_81bf40, sub_82d670
*/
void sub_88ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ec20ULL || rel >= 0x88ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ed70 size=32 callers=0 calls=0
*/
void sub_88ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ed70ULL || rel >= 0x88ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ed90 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_88ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ed90ULL || rel >= 0x88ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ee00 size=32 callers=0 calls=0
*/
void sub_88ee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ee00ULL || rel >= 0x88ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ee20 size=192 callers=0 calls=5
   calls: sub_7f87a0, sub_803c60, sub_819600, sub_819810, sub_81a290
*/
void sub_88ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ee20ULL || rel >= 0x88eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088eee0 size=32 callers=0 calls=0
*/
void sub_88eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88eee0ULL || rel >= 0x88ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ef00 size=192 callers=0 calls=5
   calls: sub_7f87a0, sub_803c60, sub_819600, sub_819810, sub_81a290
*/
void sub_88ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ef00ULL || rel >= 0x88efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088efc0 size=32 callers=0 calls=0
*/
void sub_88efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88efc0ULL || rel >= 0x88efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088efe0 size=192 callers=0 calls=5
   calls: sub_7f87a0, sub_803c60, sub_819600, sub_819810, sub_81a290
*/
void sub_88efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88efe0ULL || rel >= 0x88f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f0a0 size=32 callers=0 calls=0
*/
void sub_88f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f0a0ULL || rel >= 0x88f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f0c0 size=192 callers=0 calls=5
   calls: sub_7f87a0, sub_803c60, sub_819600, sub_819810, sub_81a290
*/
void sub_88f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f0c0ULL || rel >= 0x88f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f180 size=32 callers=0 calls=0
*/
void sub_88f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f180ULL || rel >= 0x88f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f1a0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f1a0ULL || rel >= 0x88f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f1f0 size=320 callers=0 calls=10
   calls: sub_7ee7e0, sub_7ee7f0, sub_7f2340, sub_7f2360, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_819810, sub_819fb0
*/
void sub_88f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f1f0ULL || rel >= 0x88f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f330 size=32 callers=0 calls=0
*/
void sub_88f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f330ULL || rel >= 0x88f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f350 size=112 callers=0 calls=3
   calls: sub_7f0aa0, sub_819600, sub_8196d0
*/
void sub_88f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f350ULL || rel >= 0x88f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f3c0 size=32 callers=0 calls=0
*/
void sub_88f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f3c0ULL || rel >= 0x88f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f3e0 size=368 callers=0 calls=13
   calls: sub_7eef40, sub_7ef220, sub_7f0ad0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a030, sub_81a160, sub_81aa70, sub_81b610
   ... +1 more
*/
void sub_88f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f3e0ULL || rel >= 0x88f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f550 size=160 callers=0 calls=4
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_8196d0
*/
void sub_88f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f550ULL || rel >= 0x88f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f5f0 size=160 callers=0 calls=4
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_8196d0
*/
void sub_88f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f5f0ULL || rel >= 0x88f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f690 size=32 callers=0 calls=0
*/
void sub_88f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f690ULL || rel >= 0x88f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f6b0 size=160 callers=0 calls=6
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_819640, sub_8196a0, sub_8196d0
*/
void sub_88f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f6b0ULL || rel >= 0x88f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f750 size=176 callers=0 calls=6
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_819640, sub_8196a0, sub_8196d0
*/
void sub_88f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f750ULL || rel >= 0x88f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f800 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_88f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f800ULL || rel >= 0x88f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f870 size=160 callers=0 calls=6
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_819640, sub_8196a0, sub_8196d0
*/
void sub_88f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f870ULL || rel >= 0x88f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f910 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f910ULL || rel >= 0x88f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088f960 size=400 callers=0 calls=14
   calls: sub_7eef40, sub_7ef220, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_8196a0, sub_8196b0, sub_8196d0, sub_819a80, sub_819ac0, sub_819b80
   ... +2 more
*/
void sub_88f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88f960ULL || rel >= 0x88faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088faf0 size=32 callers=0 calls=0
*/
void sub_88faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88faf0ULL || rel >= 0x88fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088fb10 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_88fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88fb10ULL || rel >= 0x88fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088fb60 size=112 callers=0 calls=3
   calls: sub_8196a0, sub_8196b0, sub_81a310
*/
void sub_88fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88fb60ULL || rel >= 0x88fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088fbd0 size=80 callers=0 calls=1
   calls: sub_81a310
*/
void sub_88fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88fbd0ULL || rel >= 0x88fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088fc20 size=176 callers=0 calls=7
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_819630, sub_8196a0, sub_8196b0, sub_8196d0
*/
void sub_88fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88fc20ULL || rel >= 0x88fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088fcd0 size=192 callers=0 calls=7
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_819630, sub_8196a0, sub_8196b0, sub_8196d0
*/
void sub_88fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88fcd0ULL || rel >= 0x88fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088fd90 size=128 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_8196b0
*/
void sub_88fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88fd90ULL || rel >= 0x88fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088fe10 size=160 callers=0 calls=6
   calls: sub_7eef40, sub_7ef220, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0
*/
void sub_88fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88fe10ULL || rel >= 0x88feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088feb0 size=112 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_8196b0
*/
void sub_88feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88feb0ULL || rel >= 0x88ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088ff20 size=208 callers=0 calls=7
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_81aa70
*/
void sub_88ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88ff20ULL || rel >= 0x88fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0088fff0 size=32 callers=0 calls=0
*/
void sub_88fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88fff0ULL || rel >= 0x890010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890010 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_890010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890010ULL || rel >= 0x890070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890070 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_890070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890070ULL || rel >= 0x8900d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008900d0 size=608 callers=0 calls=15
   calls: sub_7eef40, sub_7ef220, sub_7ef2b0, sub_7f0b70, sub_7f78c0, sub_7f79e0, sub_803c60, sub_819600, sub_8196d0, sub_819a30, sub_819b80, sub_819d00
   ... +3 more
*/
void sub_8900d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8900d0ULL || rel >= 0x890330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890330 size=208 callers=0 calls=9
   calls: sub_7ee6b0, sub_7eef40, sub_7eef50, sub_7ef220, sub_7f7990, sub_803c60, sub_8196d0, sub_819960, sub_81aa70
*/
void sub_890330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890330ULL || rel >= 0x890400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890400 size=32 callers=0 calls=0
*/
void sub_890400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890400ULL || rel >= 0x890420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890420 size=160 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_890420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890420ULL || rel >= 0x8904c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008904c0 size=112 callers=0 calls=2
   calls: sub_8196b0, sub_81b7e0
*/
void sub_8904c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8904c0ULL || rel >= 0x890530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890530 size=32 callers=0 calls=0
*/
void sub_890530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890530ULL || rel >= 0x890550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890550 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_890550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890550ULL || rel >= 0x8905b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008905b0 size=32 callers=0 calls=0
*/
void sub_8905b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8905b0ULL || rel >= 0x8905d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008905d0 size=160 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819950, sub_819df0
*/
void sub_8905d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8905d0ULL || rel >= 0x890670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890670 size=32 callers=0 calls=0
*/
void sub_890670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890670ULL || rel >= 0x890690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890690 size=160 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819950, sub_819df0
*/
void sub_890690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890690ULL || rel >= 0x890730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890730 size=32 callers=0 calls=0
*/
void sub_890730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890730ULL || rel >= 0x890750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890750 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_890750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890750ULL || rel >= 0x8907a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008907a0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8907a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8907a0ULL || rel >= 0x8907f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008907f0 size=128 callers=0 calls=0
*/
void sub_8907f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8907f0ULL || rel >= 0x890870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890870 size=112 callers=1 calls=1
   calls: sub_7eef50
*/
void sub_890870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890870ULL || rel >= 0x8908e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008908e0 size=112 callers=1 calls=3
   calls: sub_76c020, sub_76c060, sub_7eef50
*/
void sub_8908e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8908e0ULL || rel >= 0x890950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890950 size=208 callers=0 calls=6
   calls: sub_7e8c60, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_7ee6b0, sub_7ef3d0
*/
void sub_890950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890950ULL || rel >= 0x890a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890a20 size=160 callers=0 calls=5
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eafc0, sub_7ee6b0
*/
void sub_890a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890a20ULL || rel >= 0x890ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890ac0 size=112 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_819840
*/
void sub_890ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890ac0ULL || rel >= 0x890b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890b30 size=96 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_819850
*/
void sub_890b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890b30ULL || rel >= 0x890b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890b90 size=128 callers=0 calls=0
*/
void sub_890b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890b90ULL || rel >= 0x890c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890c10 size=48 callers=1 calls=0
*/
void sub_890c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890c10ULL || rel >= 0x890c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890c40 size=80 callers=1 calls=3
   calls: sub_8139d0, sub_828fb0, sub_853a40
*/
void sub_890c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890c40ULL || rel >= 0x890c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890c90 size=80 callers=1 calls=2
   calls: sub_828fd0, sub_8648a0
*/
void sub_890c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890c90ULL || rel >= 0x890ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890ce0 size=80 callers=1 calls=2
   calls: sub_828fe0, sub_8552b0
*/
void sub_890ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890ce0ULL || rel >= 0x890d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890d30 size=80 callers=1 calls=2
   calls: sub_828fc0, sub_8631b0
*/
void sub_890d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890d30ULL || rel >= 0x890d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890d80 size=80 callers=1 calls=2
   calls: sub_828f90, sub_84fbe0
*/
void sub_890d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890d80ULL || rel >= 0x890dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890dd0 size=80 callers=1 calls=3
   calls: sub_8139d0, sub_828fa0, sub_850e50
*/
void sub_890dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890dd0ULL || rel >= 0x890e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890e20 size=64 callers=1 calls=3
   calls: sub_8139d0, sub_828ff0, sub_852ff0
*/
void sub_890e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890e20ULL || rel >= 0x890e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890e60 size=128 callers=0 calls=0
*/
void sub_890e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890e60ULL || rel >= 0x890ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890ee0 size=96 callers=4 calls=3
   calls: sub_7cac80, sub_7cb850, sub_890f40
*/
void sub_890ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890ee0ULL || rel >= 0x890f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00890f40 size=896 callers=1 calls=10
   calls: sub_7c56e0, sub_7cb350, sub_7cc000, sub_7cc3a0, sub_7cc3d0, sub_7ed1b0, sub_7fc2f0, sub_802c60, sub_8912c0, sub_891670
*/
void sub_890f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x890f40ULL || rel >= 0x8912c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008912c0 size=944 callers=1 calls=7
   calls: sub_7c5910, sub_7cac80, sub_7cc3d0, sub_7ed1b0, sub_7fc2e0, sub_7fc2f0, sub_803a50
*/
void sub_8912c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8912c0ULL || rel >= 0x891670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891670 size=816 callers=2 calls=7
   calls: sub_7c5910, sub_7cac80, sub_7cb350, sub_7ed1b0, sub_7eef50, sub_7fc2e0, sub_7fc450
*/
void sub_891670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891670ULL || rel >= 0x8919a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008919a0 size=128 callers=0 calls=0
*/
void sub_8919a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8919a0ULL || rel >= 0x891a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891a20 size=464 callers=3 calls=5
   calls: sub_8920d0, sub_892360, sub_892380, sub_892390, sub_8923e0
*/
void sub_891a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891a20ULL || rel >= 0x891bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891bf0 size=352 callers=0 calls=0
*/
void sub_891bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891bf0ULL || rel >= 0x891d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891d50 size=16 callers=0 calls=0
*/
void sub_891d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891d50ULL || rel >= 0x891d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891d60 size=16 callers=0 calls=0
*/
void sub_891d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891d60ULL || rel >= 0x891d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891d70 size=16 callers=0 calls=0
*/
void sub_891d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891d70ULL || rel >= 0x891d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891d80 size=128 callers=1 calls=1
   calls: sub_892400
*/
void sub_891d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891d80ULL || rel >= 0x891e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891e00 size=224 callers=3 calls=2
   calls: sub_892400, sub_892490
*/
void sub_891e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891e00ULL || rel >= 0x891ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891ee0 size=160 callers=4 calls=1
   calls: sub_892490
*/
void sub_891ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891ee0ULL || rel >= 0x891f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00891f80 size=160 callers=2 calls=1
   calls: sub_892490
*/
void sub_891f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891f80ULL || rel >= 0x892020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892020 size=176 callers=1 calls=1
   calls: sub_892490
*/
void sub_892020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892020ULL || rel >= 0x8920d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008920d0 size=576 callers=1 calls=1
   calls: sub_892390
*/
void sub_8920d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8920d0ULL || rel >= 0x892310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892310 size=16 callers=1 calls=0
*/
void sub_892310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892310ULL || rel >= 0x892320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892320 size=16 callers=1 calls=0
*/
void sub_892320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892320ULL || rel >= 0x892330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892330 size=16 callers=1 calls=0
*/
void sub_892330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892330ULL || rel >= 0x892340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892340 size=16 callers=1 calls=0
*/
void sub_892340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892340ULL || rel >= 0x892350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892350 size=16 callers=1 calls=0
*/
void sub_892350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892350ULL || rel >= 0x892360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892360 size=32 callers=6 calls=0
*/
void sub_892360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892360ULL || rel >= 0x892380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892380 size=16 callers=2 calls=0
*/
void sub_892380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892380ULL || rel >= 0x892390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892390 size=64 callers=3 calls=0
*/
void sub_892390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892390ULL || rel >= 0x8923d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008923d0 size=16 callers=2 calls=0
*/
void sub_8923d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8923d0ULL || rel >= 0x8923e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008923e0 size=16 callers=6 calls=0
*/
void sub_8923e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8923e0ULL || rel >= 0x8923f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008923f0 size=16 callers=0 calls=0
*/
void sub_8923f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8923f0ULL || rel >= 0x892400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892400 size=48 callers=3 calls=0
*/
void sub_892400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892400ULL || rel >= 0x892430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892430 size=48 callers=4 calls=0
*/
void sub_892430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892430ULL || rel >= 0x892460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892460 size=48 callers=1 calls=0
*/
void sub_892460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892460ULL || rel >= 0x892490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892490 size=16 callers=16 calls=0
*/
void sub_892490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892490ULL || rel >= 0x8924a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008924a0 size=16 callers=8 calls=0
*/
void sub_8924a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8924a0ULL || rel >= 0x8924b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008924b0 size=16 callers=3 calls=0
*/
void sub_8924b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8924b0ULL || rel >= 0x8924c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008924c0 size=16 callers=21 calls=0
*/
void sub_8924c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8924c0ULL || rel >= 0x8924d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008924d0 size=16 callers=3 calls=0
*/
void sub_8924d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8924d0ULL || rel >= 0x8924e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008924e0 size=16 callers=2 calls=0
*/
void sub_8924e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8924e0ULL || rel >= 0x8924f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008924f0 size=176 callers=1 calls=0
*/
void sub_8924f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8924f0ULL || rel >= 0x8925a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008925a0 size=16 callers=5 calls=0
*/
void sub_8925a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8925a0ULL || rel >= 0x8925b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008925b0 size=16 callers=1 calls=0
*/
void sub_8925b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8925b0ULL || rel >= 0x8925c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008925c0 size=16 callers=1 calls=0
*/
void sub_8925c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8925c0ULL || rel >= 0x8925d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008925d0 size=48 callers=1 calls=0
*/
void sub_8925d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8925d0ULL || rel >= 0x892600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892600 size=160 callers=2 calls=4
   calls: sub_891ee0, sub_891f80, sub_8924c0, sub_8924d0
*/
void sub_892600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892600ULL || rel >= 0x8926a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008926a0 size=880 callers=0 calls=16
   calls: sub_803a50, sub_813a20, sub_813a30, sub_84f560, sub_84f570, sub_890c40, sub_890c90, sub_890ce0, sub_890d30, sub_890d80, sub_890dd0, sub_890e20
   ... +4 more
*/
void sub_8926a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8926a0ULL || rel >= 0x892a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892a10 size=224 callers=0 calls=3
   calls: sub_892f20, sub_892fa0, sub_893060
*/
void sub_892a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892a10ULL || rel >= 0x892af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892af0 size=16 callers=0 calls=0
*/
void sub_892af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892af0ULL || rel >= 0x892b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892b00 size=16 callers=0 calls=0
*/
void sub_892b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892b00ULL || rel >= 0x892b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892b10 size=16 callers=1 calls=0
*/
void sub_892b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892b10ULL || rel >= 0x892b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892b20 size=16 callers=4 calls=0
*/
void sub_892b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892b20ULL || rel >= 0x892b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892b30 size=128 callers=1 calls=0
*/
void sub_892b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892b30ULL || rel >= 0x892bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892bb0 size=16 callers=1 calls=0
*/
void sub_892bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892bb0ULL || rel >= 0x892bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892bc0 size=16 callers=0 calls=0
*/
void sub_892bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892bc0ULL || rel >= 0x892bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892bd0 size=16 callers=2 calls=0
*/
void sub_892bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892bd0ULL || rel >= 0x892be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892be0 size=16 callers=2 calls=0
*/
void sub_892be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892be0ULL || rel >= 0x892bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892bf0 size=32 callers=6 calls=0
*/
void sub_892bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892bf0ULL || rel >= 0x892c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892c10 size=16 callers=1 calls=0
*/
void sub_892c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892c10ULL || rel >= 0x892c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892c20 size=64 callers=2 calls=0
*/
void sub_892c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892c20ULL || rel >= 0x892c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892c60 size=512 callers=1 calls=2
   calls: sub_8505a0, sub_8505c0
*/
void sub_892c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892c60ULL || rel >= 0x892e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892e60 size=144 callers=8 calls=0
*/
void sub_892e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892e60ULL || rel >= 0x892ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892ef0 size=48 callers=6 calls=0
*/
void sub_892ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892ef0ULL || rel >= 0x892f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892f20 size=64 callers=3 calls=0
*/
void sub_892f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892f20ULL || rel >= 0x892f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892f60 size=32 callers=1 calls=0
*/
void sub_892f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892f60ULL || rel >= 0x892f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892f80 size=32 callers=1 calls=0
*/
void sub_892f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892f80ULL || rel >= 0x892fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00892fa0 size=192 callers=5 calls=0
*/
void sub_892fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x892fa0ULL || rel >= 0x893060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00893060 size=64 callers=1 calls=0
*/
void sub_893060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x893060ULL || rel >= 0x8930a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008930a0 size=32 callers=1 calls=0
*/
void sub_8930a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8930a0ULL || rel >= 0x8930c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008930c0 size=64 callers=1 calls=0
*/
void sub_8930c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8930c0ULL || rel >= 0x893100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00893100 size=160 callers=2 calls=0
*/
void sub_893100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x893100ULL || rel >= 0x8931a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008931a0 size=368 callers=3 calls=3
   calls: sub_10619f0, sub_6ae890, sub_6ae9d0
*/
void sub_8931a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8931a0ULL || rel >= 0x893310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00893310 size=720 callers=1 calls=2
   calls: sub_5e2350, sub_8990d0
*/
void sub_893310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x893310ULL || rel >= 0x8935e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008935e0 size=944 callers=0 calls=2
   calls: sub_6b90e0, sub_899000
*/
void sub_8935e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8935e0ULL || rel >= 0x893990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00893990 size=16 callers=0 calls=0
*/
void sub_893990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x893990ULL || rel >= 0x8939a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008939a0 size=16 callers=0 calls=0
*/
void sub_8939a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8939a0ULL || rel >= 0x8939b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008939b0 size=16 callers=0 calls=0
*/
void sub_8939b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8939b0ULL || rel >= 0x8939c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008939c0 size=16 callers=0 calls=0
*/
void sub_8939c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8939c0ULL || rel >= 0x8939d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008939d0 size=16 callers=0 calls=0
*/
void sub_8939d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8939d0ULL || rel >= 0x8939e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008939e0 size=1568 callers=1 calls=8
   calls: sub_6ae890, sub_6d7610, sub_894000, sub_89ad30, sub_89ae20, sub_89b690, sub_8a6d00, sub_8a6d10
*/
void sub_8939e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8939e0ULL || rel >= 0x894000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894000 size=1264 callers=1 calls=8
   calls: sub_5e2350, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_894000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894000ULL || rel >= 0x8944f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008944f0 size=16 callers=1 calls=0
*/
void sub_8944f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8944f0ULL || rel >= 0x894500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894500 size=16 callers=1 calls=0
*/
void sub_894500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894500ULL || rel >= 0x894510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894510 size=96 callers=1 calls=2
   calls: sub_6d1070, sub_8a6ea0
*/
void sub_894510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894510ULL || rel >= 0x894570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894570 size=320 callers=0 calls=4
   calls: sub_6d1530, sub_6d7910, sub_89a0f0, sub_89a1c0
*/
void sub_894570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894570ULL || rel >= 0x8946b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008946b0 size=64 callers=1 calls=1
   calls: sub_6d1070
*/
void sub_8946b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8946b0ULL || rel >= 0x8946f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008946f0 size=224 callers=1 calls=4
   calls: sub_6b9560, sub_8947d0, sub_8985d0, sub_8a6520
*/
void sub_8946f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8946f0ULL || rel >= 0x8947d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008947d0 size=1120 callers=1 calls=16
   calls: sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490, sub_6d14f0, sub_6d7d80, sub_6d7e60
   ... +4 more
*/
void sub_8947d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8947d0ULL || rel >= 0x894c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894c30 size=112 callers=1 calls=2
   calls: sub_8931a0, sub_8a6be0
*/
void sub_894c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894c30ULL || rel >= 0x894ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894ca0 size=16 callers=6 calls=0
*/
void sub_894ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894ca0ULL || rel >= 0x894cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894cb0 size=96 callers=0 calls=1
   calls: sub_8a6f70
*/
void sub_894cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894cb0ULL || rel >= 0x894d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894d10 size=160 callers=1 calls=5
   calls: sub_1061810, sub_6d1070, sub_894db0, sub_8a1ae0, sub_8a1b50
*/
void sub_894d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894d10ULL || rel >= 0x894db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894db0 size=480 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_89a1c0, sub_89d0e0
*/
void sub_894db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894db0ULL || rel >= 0x894f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00894f90 size=16 callers=1 calls=0
*/
void sub_894f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x894f90ULL || rel >= 0x894fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

