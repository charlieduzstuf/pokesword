/* main functions 008363b0..0084a420 (60 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 008363b0 size=176 callers=1 calls=9
   calls: sub_7ee6b0, sub_7f0540, sub_7f2540, sub_80e230, sub_8286f0, sub_82a9e0, sub_82aa80, sub_838420, sub_8388d0
*/
void sub_8363b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8363b0ULL || rel >= 0x836460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836460 size=16 callers=0 calls=0
*/
void sub_836460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836460ULL || rel >= 0x836470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836470 size=128 callers=0 calls=0
*/
void sub_836470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836470ULL || rel >= 0x8364f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008364f0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8364f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8364f0ULL || rel >= 0x836520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836520 size=416 callers=4 calls=14
   calls: sub_7ef2b0, sub_7fe250, sub_803560, sub_803d10, sub_810a90, sub_810b00, sub_828410, sub_828420, sub_82a9c0, sub_82a9e0, sub_82aa80, sub_82ab10
   ... +2 more
*/
void sub_836520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836520ULL || rel >= 0x8366c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008366c0 size=16 callers=0 calls=0
*/
void sub_8366c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8366c0ULL || rel >= 0x8366d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008366d0 size=128 callers=0 calls=0
*/
void sub_8366d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8366d0ULL || rel >= 0x836750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836750 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_836750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836750ULL || rel >= 0x836780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836780 size=288 callers=2 calls=12
   calls: sub_7ee6b0, sub_803c60, sub_80dd60, sub_80ffa0, sub_828570, sub_82a9e0, sub_82aa80, sub_82c210, sub_8368a0, sub_836990, sub_836ab0, sub_836ba0
*/
void sub_836780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836780ULL || rel >= 0x8368a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008368a0 size=240 callers=1 calls=1
   calls: sub_82a9e0
*/
void sub_8368a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8368a0ULL || rel >= 0x836990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836990 size=288 callers=1 calls=10
   calls: sub_7ee6b0, sub_7eef40, sub_7f2380, sub_806d90, sub_8104c0, sub_8104d0, sub_812600, sub_812640, sub_82a9e0, sub_82aa10
*/
void sub_836990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836990ULL || rel >= 0x836ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836ab0 size=240 callers=1 calls=7
   calls: sub_7eef50, sub_7ef4e0, sub_7f7c40, sub_829080, sub_82aa10, sub_82aa80, sub_82bf50
*/
void sub_836ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836ab0ULL || rel >= 0x836ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836ba0 size=320 callers=1 calls=6
   calls: sub_7ee6b0, sub_7f88c0, sub_7f89e0, sub_803c70, sub_803d20, sub_803d60
*/
void sub_836ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836ba0ULL || rel >= 0x836ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836ce0 size=16 callers=0 calls=0
*/
void sub_836ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836ce0ULL || rel >= 0x836cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836cf0 size=128 callers=0 calls=0
*/
void sub_836cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836cf0ULL || rel >= 0x836d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836d70 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_836d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836d70ULL || rel >= 0x836da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836da0 size=368 callers=4 calls=7
   calls: sub_80a270, sub_80a390, sub_80ecf0, sub_82a9e0, sub_82aa10, sub_82aa30, sub_836f10
*/
void sub_836da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836da0ULL || rel >= 0x836f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00836f10 size=336 callers=1 calls=8
   calls: sub_7ee800, sub_7ee810, sub_7ef4c0, sub_7ef6a0, sub_7f36f0, sub_7fc800, sub_80a180, sub_82aa10
*/
void sub_836f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836f10ULL || rel >= 0x837060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00837060 size=608 callers=0 calls=12
   calls: sub_7eb420, sub_7ee6b0, sub_7ee6c0, sub_7eef50, sub_7ef6a0, sub_7f05d0, sub_7f7db0, sub_7f89e0, sub_828a60, sub_82aa80, sub_82d990, sub_8341a0
*/
void sub_837060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837060ULL || rel >= 0x8372c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008372c0 size=16 callers=0 calls=0
*/
void sub_8372c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8372c0ULL || rel >= 0x8372d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008372d0 size=128 callers=0 calls=0
*/
void sub_8372d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8372d0ULL || rel >= 0x837350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00837350 size=16 callers=1 calls=0
*/
void sub_837350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837350ULL || rel >= 0x837360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00837360 size=64 callers=1 calls=1
   calls: sub_816460
*/
void sub_837360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837360ULL || rel >= 0x8373a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008373a0 size=272 callers=1 calls=4
   calls: sub_816500, sub_8384e0, sub_8384f0, sub_838620
*/
void sub_8373a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8373a0ULL || rel >= 0x8374b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008374b0 size=528 callers=0 calls=7
   calls: sub_803c60, sub_803d40, sub_803d50, sub_803db0, sub_803dc0, sub_816680, sub_838300
*/
void sub_8374b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8374b0ULL || rel >= 0x8376c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008376c0 size=336 callers=1 calls=3
   calls: sub_8384e0, sub_8384f0, sub_8385e0
*/
void sub_8376c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8376c0ULL || rel >= 0x837810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00837810 size=288 callers=0 calls=5
   calls: sub_803d20, sub_803d60, sub_8376c0, sub_8384e0, sub_838510
*/
void sub_837810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837810ULL || rel >= 0x837930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00837930 size=992 callers=1 calls=2
   calls: sub_8384f0, sub_8385e0
*/
void sub_837930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837930ULL || rel >= 0x837d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00837d10 size=384 callers=0 calls=3
   calls: sub_803d20, sub_803d60, sub_837930
*/
void sub_837d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837d10ULL || rel >= 0x837e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00837e90 size=400 callers=1 calls=3
   calls: sub_8385c0, sub_8385e0, sub_838600
*/
void sub_837e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837e90ULL || rel >= 0x838020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838020 size=224 callers=0 calls=3
   calls: sub_803d20, sub_803d60, sub_837e90
*/
void sub_838020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838020ULL || rel >= 0x838100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838100 size=272 callers=1 calls=2
   calls: sub_8385e0, sub_838600
*/
void sub_838100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838100ULL || rel >= 0x838210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838210 size=240 callers=0 calls=4
   calls: sub_803d20, sub_803d60, sub_838100, sub_8384e0
*/
void sub_838210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838210ULL || rel >= 0x838300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838300 size=176 callers=1 calls=2
   calls: sub_803c70, sub_8384e0
*/
void sub_838300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838300ULL || rel >= 0x8383b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008383b0 size=112 callers=1 calls=0
*/
void sub_8383b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8383b0ULL || rel >= 0x838420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838420 size=144 callers=8 calls=2
   calls: sub_7ca1c0, sub_7ee800
*/
void sub_838420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838420ULL || rel >= 0x8384b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008384b0 size=16 callers=1 calls=0
*/
void sub_8384b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8384b0ULL || rel >= 0x8384c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008384c0 size=16 callers=35 calls=0
*/
void sub_8384c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8384c0ULL || rel >= 0x8384d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008384d0 size=16 callers=4 calls=0
*/
void sub_8384d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8384d0ULL || rel >= 0x8384e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008384e0 size=16 callers=6 calls=0
*/
void sub_8384e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8384e0ULL || rel >= 0x8384f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008384f0 size=32 callers=25 calls=0
*/
void sub_8384f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8384f0ULL || rel >= 0x838510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838510 size=176 callers=1 calls=0
*/
void sub_838510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838510ULL || rel >= 0x8385c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008385c0 size=32 callers=5 calls=0
*/
void sub_8385c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8385c0ULL || rel >= 0x8385e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008385e0 size=32 callers=4 calls=0
*/
void sub_8385e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8385e0ULL || rel >= 0x838600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838600 size=32 callers=13 calls=0
*/
void sub_838600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838600ULL || rel >= 0x838620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838620 size=48 callers=1 calls=0
*/
void sub_838620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838620ULL || rel >= 0x838650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838650 size=80 callers=2 calls=2
   calls: sub_7fe250, sub_803790
*/
void sub_838650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838650ULL || rel >= 0x8386a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008386a0 size=112 callers=1 calls=2
   calls: sub_7fe250, sub_803790
*/
void sub_8386a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8386a0ULL || rel >= 0x838710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838710 size=176 callers=1 calls=2
   calls: sub_7fe250, sub_803790
*/
void sub_838710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838710ULL || rel >= 0x8387c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008387c0 size=96 callers=1 calls=2
   calls: sub_7fe250, sub_803790
*/
void sub_8387c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8387c0ULL || rel >= 0x838820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838820 size=128 callers=0 calls=0
*/
void sub_838820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838820ULL || rel >= 0x8388a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008388a0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8388a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8388a0ULL || rel >= 0x8388d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008388d0 size=144 callers=3 calls=4
   calls: sub_7ee800, sub_7f0130, sub_80feb0, sub_82a9e0
*/
void sub_8388d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8388d0ULL || rel >= 0x838960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838960 size=16 callers=0 calls=0
*/
void sub_838960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838960ULL || rel >= 0x838970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838970 size=128 callers=0 calls=0
*/
void sub_838970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838970ULL || rel >= 0x8389f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008389f0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8389f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8389f0ULL || rel >= 0x838a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838a20 size=144 callers=5 calls=5
   calls: sub_828500, sub_828510, sub_82aa80, sub_838b70, sub_838e00
*/
void sub_838a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838a20ULL || rel >= 0x838ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838ab0 size=16 callers=0 calls=0
*/
void sub_838ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838ab0ULL || rel >= 0x838ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838ac0 size=128 callers=0 calls=0
*/
void sub_838ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838ac0ULL || rel >= 0x838b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838b40 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_838b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838b40ULL || rel >= 0x838b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838b70 size=224 callers=3 calls=10
   calls: sub_80dbd0, sub_8114b0, sub_812980, sub_8129d0, sub_8284f0, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa80, sub_838d10
*/
void sub_838b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838b70ULL || rel >= 0x838c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838c50 size=16 callers=0 calls=0
*/
void sub_838c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838c50ULL || rel >= 0x838c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838c60 size=128 callers=0 calls=0
*/
void sub_838c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838c60ULL || rel >= 0x838ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838ce0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_838ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838ce0ULL || rel >= 0x838d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838d10 size=48 callers=3 calls=1
   calls: sub_82aa10
*/
void sub_838d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838d10ULL || rel >= 0x838d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838d40 size=16 callers=0 calls=0
*/
void sub_838d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838d40ULL || rel >= 0x838d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838d50 size=128 callers=0 calls=0
*/
void sub_838d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838d50ULL || rel >= 0x838dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838dd0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_838dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838dd0ULL || rel >= 0x838e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838e00 size=208 callers=2 calls=4
   calls: sub_7fe1e0, sub_7ffaa0, sub_7ffac0, sub_82a9c0
*/
void sub_838e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838e00ULL || rel >= 0x838ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838ed0 size=16 callers=0 calls=0
*/
void sub_838ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838ed0ULL || rel >= 0x838ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838ee0 size=128 callers=0 calls=0
*/
void sub_838ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838ee0ULL || rel >= 0x838f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838f60 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_838f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838f60ULL || rel >= 0x838f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00838f90 size=416 callers=2 calls=16
   calls: sub_7ee6b0, sub_7f09c0, sub_809cc0, sub_80c9e0, sub_80dd60, sub_80fb50, sub_810a70, sub_810ae0, sub_8284d0, sub_828570, sub_82a9e0, sub_82aa10
   ... +4 more
*/
void sub_838f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x838f90ULL || rel >= 0x839130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839130 size=16 callers=0 calls=0
*/
void sub_839130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839130ULL || rel >= 0x839140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839140 size=128 callers=0 calls=0
*/
void sub_839140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839140ULL || rel >= 0x8391c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008391c0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8391c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8391c0ULL || rel >= 0x8391f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008391f0 size=320 callers=5 calls=14
   calls: sub_7ee6b0, sub_7f09c0, sub_80cae0, sub_80cb50, sub_80f6c0, sub_80f730, sub_80fa90, sub_80faf0, sub_810ba0, sub_8126d0, sub_812710, sub_82a9e0
   ... +2 more
*/
void sub_8391f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8391f0ULL || rel >= 0x839330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839330 size=16 callers=0 calls=0
*/
void sub_839330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839330ULL || rel >= 0x839340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839340 size=128 callers=0 calls=0
*/
void sub_839340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839340ULL || rel >= 0x8393c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008393c0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8393c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8393c0ULL || rel >= 0x8393f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008393f0 size=368 callers=2 calls=0
*/
void sub_8393f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8393f0ULL || rel >= 0x839560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839560 size=1040 callers=3 calls=9
   calls: sub_7cb360, sub_80ee90, sub_80f1a0, sub_810a70, sub_810ae0, sub_812890, sub_82a9b0, sub_82a9e0, sub_8393f0
*/
void sub_839560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839560ULL || rel >= 0x839970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839970 size=16 callers=0 calls=0
*/
void sub_839970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839970ULL || rel >= 0x839980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839980 size=128 callers=0 calls=0
*/
void sub_839980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839980ULL || rel >= 0x839a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839a00 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_839a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839a00ULL || rel >= 0x839a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839a30 size=432 callers=1 calls=7
   calls: sub_7ee6b0, sub_809440, sub_80f970, sub_80f9c0, sub_82a9e0, sub_82aa10, sub_82ab10
*/
void sub_839a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839a30ULL || rel >= 0x839be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839be0 size=16 callers=0 calls=0
*/
void sub_839be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839be0ULL || rel >= 0x839bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839bf0 size=128 callers=0 calls=0
*/
void sub_839bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839bf0ULL || rel >= 0x839c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839c70 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_839c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839c70ULL || rel >= 0x839ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839ca0 size=240 callers=1 calls=1
   calls: sub_82ab10
*/
void sub_839ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839ca0ULL || rel >= 0x839d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839d90 size=16 callers=0 calls=0
*/
void sub_839d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839d90ULL || rel >= 0x839da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839da0 size=128 callers=0 calls=0
*/
void sub_839da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839da0ULL || rel >= 0x839e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839e20 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_839e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839e20ULL || rel >= 0x839e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839e50 size=208 callers=1 calls=5
   calls: sub_7f1400, sub_812f80, sub_828430, sub_82aa80, sub_832970
*/
void sub_839e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839e50ULL || rel >= 0x839f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839f20 size=16 callers=0 calls=0
*/
void sub_839f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839f20ULL || rel >= 0x839f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839f30 size=128 callers=0 calls=0
*/
void sub_839f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839f30ULL || rel >= 0x839fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839fb0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_839fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839fb0ULL || rel >= 0x839fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00839fe0 size=112 callers=2 calls=5
   calls: sub_8093a0, sub_828600, sub_8294b0, sub_82aa10, sub_82aa80
*/
void sub_839fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839fe0ULL || rel >= 0x83a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a050 size=16 callers=0 calls=0
*/
void sub_83a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a050ULL || rel >= 0x83a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a060 size=128 callers=0 calls=0
*/
void sub_83a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a060ULL || rel >= 0x83a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a0e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a0e0ULL || rel >= 0x83a110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a110 size=320 callers=1 calls=9
   calls: sub_7ee6b0, sub_80dbd0, sub_80e310, sub_8286b0, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa80, sub_83a310
*/
void sub_83a110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a110ULL || rel >= 0x83a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a250 size=16 callers=0 calls=0
*/
void sub_83a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a250ULL || rel >= 0x83a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a260 size=128 callers=0 calls=0
*/
void sub_83a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a260ULL || rel >= 0x83a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a2e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a2e0ULL || rel >= 0x83a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a310 size=240 callers=2 calls=8
   calls: sub_7ee6b0, sub_80b1f0, sub_80dbd0, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa10, sub_83a400
*/
void sub_83a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a310ULL || rel >= 0x83a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a400 size=160 callers=1 calls=3
   calls: sub_7ee6b0, sub_80f370, sub_82a9e0
*/
void sub_83a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a400ULL || rel >= 0x83a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a4a0 size=16 callers=0 calls=0
*/
void sub_83a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a4a0ULL || rel >= 0x83a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a4b0 size=128 callers=0 calls=0
*/
void sub_83a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a4b0ULL || rel >= 0x83a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a530 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a530ULL || rel >= 0x83a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a560 size=320 callers=1 calls=11
   calls: sub_80c4c0, sub_8286d0, sub_829000, sub_829140, sub_829150, sub_82aa10, sub_82aa80, sub_83a760, sub_83a8e0, sub_83abe0, sub_83b2f0
*/
void sub_83a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a560ULL || rel >= 0x83a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a6a0 size=16 callers=0 calls=0
*/
void sub_83a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a6a0ULL || rel >= 0x83a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a6b0 size=128 callers=0 calls=0
*/
void sub_83a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a6b0ULL || rel >= 0x83a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a730 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a730ULL || rel >= 0x83a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a760 size=192 callers=2 calls=6
   calls: sub_7ee6c0, sub_7ee800, sub_7f0aa0, sub_7f1400, sub_80c5e0, sub_82aa10
*/
void sub_83a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a760ULL || rel >= 0x83a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a820 size=16 callers=0 calls=0
*/
void sub_83a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a820ULL || rel >= 0x83a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a830 size=128 callers=0 calls=0
*/
void sub_83a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a830ULL || rel >= 0x83a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a8b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a8b0ULL || rel >= 0x83a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a8e0 size=176 callers=2 calls=8
   calls: sub_780da0, sub_781180, sub_7f7740, sub_80e1f0, sub_8286e0, sub_82a9e0, sub_82aa80, sub_83aa50
*/
void sub_83a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a8e0ULL || rel >= 0x83a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a990 size=16 callers=0 calls=0
*/
void sub_83a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a990ULL || rel >= 0x83a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083a9a0 size=128 callers=0 calls=0
*/
void sub_83a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83a9a0ULL || rel >= 0x83aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083aa20 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83aa20ULL || rel >= 0x83aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083aa50 size=208 callers=2 calls=7
   calls: sub_7ee6b0, sub_803c60, sub_80c710, sub_828f40, sub_82aa10, sub_82aa80, sub_82ec20
*/
void sub_83aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83aa50ULL || rel >= 0x83ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ab20 size=16 callers=0 calls=0
*/
void sub_83ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ab20ULL || rel >= 0x83ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ab30 size=128 callers=0 calls=0
*/
void sub_83ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ab30ULL || rel >= 0x83abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083abb0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83abb0ULL || rel >= 0x83abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083abe0 size=112 callers=2 calls=4
   calls: sub_780da0, sub_828780, sub_82aa80, sub_83ad10
*/
void sub_83abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83abe0ULL || rel >= 0x83ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ac50 size=16 callers=0 calls=0
*/
void sub_83ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ac50ULL || rel >= 0x83ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ac60 size=128 callers=0 calls=0
*/
void sub_83ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ac60ULL || rel >= 0x83ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ace0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ace0ULL || rel >= 0x83ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ad10 size=160 callers=2 calls=6
   calls: sub_7ef2b0, sub_80a6c0, sub_829260, sub_82aa10, sub_82aa80, sub_83ae70
*/
void sub_83ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ad10ULL || rel >= 0x83adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083adb0 size=16 callers=0 calls=0
*/
void sub_83adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83adb0ULL || rel >= 0x83adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083adc0 size=128 callers=0 calls=0
*/
void sub_83adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83adc0ULL || rel >= 0x83ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ae40 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ae40ULL || rel >= 0x83ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ae70 size=336 callers=4 calls=10
   calls: sub_781040, sub_7ee6b0, sub_804db0, sub_806f10, sub_807040, sub_82aa10, sub_82f7f0, sub_82f800, sub_82f840, sub_83afc0
*/
void sub_83ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ae70ULL || rel >= 0x83afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083afc0 size=624 callers=1 calls=3
   calls: sub_828f10, sub_82aa80, sub_82f210
*/
void sub_83afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83afc0ULL || rel >= 0x83b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b230 size=16 callers=0 calls=0
*/
void sub_83b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b230ULL || rel >= 0x83b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b240 size=128 callers=0 calls=0
*/
void sub_83b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b240ULL || rel >= 0x83b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b2c0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b2c0ULL || rel >= 0x83b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b2f0 size=160 callers=2 calls=4
   calls: sub_780da0, sub_828780, sub_82aa80, sub_83ad10
*/
void sub_83b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b2f0ULL || rel >= 0x83b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b390 size=160 callers=0 calls=6
   calls: sub_7ef2b0, sub_809dc0, sub_828830, sub_82aa10, sub_82aa80, sub_83b4f0
*/
void sub_83b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b390ULL || rel >= 0x83b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b430 size=16 callers=0 calls=0
*/
void sub_83b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b430ULL || rel >= 0x83b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b440 size=128 callers=0 calls=0
*/
void sub_83b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b440ULL || rel >= 0x83b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b4c0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b4c0ULL || rel >= 0x83b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b4f0 size=304 callers=3 calls=10
   calls: sub_803c60, sub_803d10, sub_80a020, sub_80a0d0, sub_828410, sub_828420, sub_82aa10, sub_82aa80, sub_836780, sub_836da0
*/
void sub_83b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b4f0ULL || rel >= 0x83b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b620 size=16 callers=0 calls=0
*/
void sub_83b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b620ULL || rel >= 0x83b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b630 size=128 callers=0 calls=0
*/
void sub_83b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b630ULL || rel >= 0x83b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b6b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b6b0ULL || rel >= 0x83b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b6e0 size=224 callers=1 calls=5
   calls: sub_828530, sub_828600, sub_8294b0, sub_82aa80, sub_839fe0
*/
void sub_83b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b6e0ULL || rel >= 0x83b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b7c0 size=16 callers=0 calls=0
*/
void sub_83b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b7c0ULL || rel >= 0x83b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b7d0 size=128 callers=0 calls=0
*/
void sub_83b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b7d0ULL || rel >= 0x83b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b850 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b850ULL || rel >= 0x83b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b880 size=336 callers=1 calls=6
   calls: sub_7f2e70, sub_812f80, sub_828e30, sub_82aa80, sub_82ab10, sub_83ba90
*/
void sub_83b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b880ULL || rel >= 0x83b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b9d0 size=16 callers=0 calls=0
*/
void sub_83b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b9d0ULL || rel >= 0x83b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083b9e0 size=128 callers=0 calls=0
*/
void sub_83b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83b9e0ULL || rel >= 0x83ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ba60 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ba60ULL || rel >= 0x83ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ba90 size=352 callers=1 calls=13
   calls: sub_7f2e90, sub_8286d0, sub_828e40, sub_829140, sub_829150, sub_829170, sub_82aa80, sub_832730, sub_832870, sub_83a8e0, sub_83abe0, sub_83b2f0
   ... +1 more
*/
void sub_83ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ba90ULL || rel >= 0x83bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083bbf0 size=240 callers=1 calls=8
   calls: sub_7ee6b0, sub_80e1f0, sub_80e310, sub_8121b0, sub_8286b0, sub_82a9e0, sub_82aa80, sub_83a310
*/
void sub_83bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83bbf0ULL || rel >= 0x83bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083bce0 size=16 callers=0 calls=0
*/
void sub_83bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83bce0ULL || rel >= 0x83bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083bcf0 size=128 callers=0 calls=0
*/
void sub_83bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83bcf0ULL || rel >= 0x83bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083bd70 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83bd70ULL || rel >= 0x83bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083bda0 size=912 callers=1 calls=18
   calls: sub_7c5070, sub_812ec0, sub_813270, sub_813280, sub_813480, sub_8135c0, sub_816420, sub_8284a0, sub_828890, sub_828f00, sub_82a9b0, sub_82a9d0
   ... +6 more
*/
void sub_83bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83bda0ULL || rel >= 0x83c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c130 size=16 callers=0 calls=0
*/
void sub_83c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c130ULL || rel >= 0x83c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c140 size=128 callers=0 calls=0
*/
void sub_83c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c140ULL || rel >= 0x83c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c1c0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c1c0ULL || rel >= 0x83c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c1f0 size=16 callers=0 calls=0
*/
void sub_83c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c1f0ULL || rel >= 0x83c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c200 size=128 callers=0 calls=0
*/
void sub_83c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c200ULL || rel >= 0x83c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c280 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c280ULL || rel >= 0x83c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c2b0 size=432 callers=3 calls=7
   calls: sub_8076b0, sub_82aa10, sub_82abe0, sub_82ac70, sub_82aca0, sub_82d930, sub_83c460
*/
void sub_83c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c2b0ULL || rel >= 0x83c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c460 size=208 callers=1 calls=8
   calls: sub_7cac80, sub_7fe2d0, sub_800990, sub_800ba0, sub_82a9b0, sub_82a9c0, sub_82aa10, sub_82d7e0
*/
void sub_83c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c460ULL || rel >= 0x83c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c530 size=16 callers=0 calls=0
*/
void sub_83c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c530ULL || rel >= 0x83c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c540 size=128 callers=0 calls=0
*/
void sub_83c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c540ULL || rel >= 0x83c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c5c0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c5c0ULL || rel >= 0x83c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c5f0 size=256 callers=1 calls=12
   calls: sub_7ee6b0, sub_80a7e0, sub_80e820, sub_812de0, sub_813130, sub_813140, sub_8287c0, sub_82a9e0, sub_82aa10, sub_82aa30, sub_82aa80, sub_83c7b0
*/
void sub_83c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c5f0ULL || rel >= 0x83c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c6f0 size=16 callers=0 calls=0
*/
void sub_83c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c6f0ULL || rel >= 0x83c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c700 size=128 callers=0 calls=0
*/
void sub_83c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c700ULL || rel >= 0x83c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c780 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c780ULL || rel >= 0x83c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c7b0 size=288 callers=2 calls=8
   calls: sub_82aa20, sub_82ab10, sub_82ac50, sub_82ac70, sub_82b500, sub_83c8d0, sub_83ca20, sub_83cba0
*/
void sub_83c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c7b0ULL || rel >= 0x83c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083c8d0 size=336 callers=1 calls=15
   calls: sub_7cb420, sub_7ee6b0, sub_7ee6c0, sub_7ee800, sub_7ef2b0, sub_7ef4c0, sub_7f0b80, sub_7fe1d0, sub_80a870, sub_80e190, sub_80e230, sub_82a9b0
   ... +3 more
*/
void sub_83c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83c8d0ULL || rel >= 0x83ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ca20 size=384 callers=1 calls=20
   calls: sub_7cae30, sub_7cb420, sub_7ee6b0, sub_7fe1d0, sub_80dd60, sub_80e230, sub_812bd0, sub_812c50, sub_828450, sub_828de0, sub_828e10, sub_82a9b0
   ... +8 more
*/
void sub_83ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ca20ULL || rel >= 0x83cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083cba0 size=320 callers=1 calls=14
   calls: sub_7cae30, sub_7cb420, sub_7cb490, sub_7ee6b0, sub_7eef50, sub_7fe1d0, sub_812390, sub_828e10, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa80
   ... +2 more
*/
void sub_83cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83cba0ULL || rel >= 0x83cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083cce0 size=176 callers=1 calls=7
   calls: sub_7cbf50, sub_7ef580, sub_7f7690, sub_7fc2e0, sub_7fc450, sub_82a9b0, sub_82ac20
*/
void sub_83cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83cce0ULL || rel >= 0x83cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083cd90 size=16 callers=0 calls=0
*/
void sub_83cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83cd90ULL || rel >= 0x83cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083cda0 size=128 callers=0 calls=0
*/
void sub_83cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83cda0ULL || rel >= 0x83ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ce20 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ce20ULL || rel >= 0x83ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ce50 size=272 callers=3 calls=12
   calls: sub_7fe330, sub_7ff880, sub_80dbd0, sub_80f6c0, sub_812160, sub_828df0, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa80, sub_82ab40, sub_83d020
*/
void sub_83ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ce50ULL || rel >= 0x83cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083cf60 size=16 callers=0 calls=0
*/
void sub_83cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83cf60ULL || rel >= 0x83cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083cf70 size=128 callers=0 calls=0
*/
void sub_83cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83cf70ULL || rel >= 0x83cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083cff0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83cff0ULL || rel >= 0x83d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d020 size=416 callers=2 calls=18
   calls: sub_7cb080, sub_7ee6b0, sub_7fc450, sub_80dbd0, sub_80f660, sub_810b50, sub_8116e0, sub_812600, sub_8126d0, sub_812a10, sub_82a9b0, sub_82a9c0
   ... +6 more
*/
void sub_83d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d020ULL || rel >= 0x83d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d1c0 size=16 callers=0 calls=0
*/
void sub_83d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d1c0ULL || rel >= 0x83d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d1d0 size=128 callers=0 calls=0
*/
void sub_83d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d1d0ULL || rel >= 0x83d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d250 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d250ULL || rel >= 0x83d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d280 size=256 callers=6 calls=10
   calls: sub_807bd0, sub_812ec0, sub_813130, sub_813140, sub_829030, sub_82a790, sub_82aa10, sub_82aa80, sub_83d380, sub_83d410
*/
void sub_83d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d280ULL || rel >= 0x83d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d380 size=144 callers=1 calls=7
   calls: sub_7ee6b0, sub_804200, sub_804480, sub_812c10, sub_812f00, sub_82a9b0, sub_82a9c0
*/
void sub_83d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d380ULL || rel >= 0x83d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d410 size=304 callers=1 calls=5
   calls: sub_807bd0, sub_807c30, sub_813130, sub_813140, sub_82aa10
*/
void sub_83d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d410ULL || rel >= 0x83d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d540 size=16 callers=0 calls=0
*/
void sub_83d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d540ULL || rel >= 0x83d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d550 size=128 callers=0 calls=0
*/
void sub_83d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d550ULL || rel >= 0x83d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d5d0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d5d0ULL || rel >= 0x83d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d600 size=288 callers=3 calls=17
   calls: sub_7cb420, sub_7ee6b0, sub_7ee6c0, sub_7fe1d0, sub_807d10, sub_8107f0, sub_811d90, sub_812190, sub_828680, sub_829e50, sub_82a9b0, sub_82a9c0
   ... +5 more
*/
void sub_83d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d600ULL || rel >= 0x83d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d720 size=16 callers=0 calls=0
*/
void sub_83d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d720ULL || rel >= 0x83d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d730 size=128 callers=0 calls=0
*/
void sub_83d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d730ULL || rel >= 0x83d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d7b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d7b0ULL || rel >= 0x83d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d7e0 size=320 callers=1 calls=12
   calls: sub_780f80, sub_780fe0, sub_7f7df0, sub_812de0, sub_813130, sub_813140, sub_828830, sub_829260, sub_82aa30, sub_82aa80, sub_83ae70, sub_83b4f0
*/
void sub_83d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d7e0ULL || rel >= 0x83d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d920 size=16 callers=0 calls=0
*/
void sub_83d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d920ULL || rel >= 0x83d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d930 size=128 callers=0 calls=0
*/
void sub_83d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d930ULL || rel >= 0x83d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d9b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d9b0ULL || rel >= 0x83d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083d9e0 size=336 callers=1 calls=13
   calls: sub_780f80, sub_780fe0, sub_7f7df0, sub_80e820, sub_812de0, sub_813130, sub_813140, sub_813270, sub_828830, sub_82a9e0, sub_82aa30, sub_82aa80
   ... +1 more
*/
void sub_83d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83d9e0ULL || rel >= 0x83db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083db30 size=16 callers=0 calls=0
*/
void sub_83db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83db30ULL || rel >= 0x83db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083db40 size=128 callers=0 calls=0
*/
void sub_83db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83db40ULL || rel >= 0x83dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083dbc0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83dbc0ULL || rel >= 0x83dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083dbf0 size=272 callers=1 calls=11
   calls: sub_80ad90, sub_80e820, sub_812de0, sub_828820, sub_828e20, sub_82a9e0, sub_82aa10, sub_82aa30, sub_82aa80, sub_83ddc0, sub_83e400
*/
void sub_83dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83dbf0ULL || rel >= 0x83dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083dd00 size=16 callers=0 calls=0
*/
void sub_83dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83dd00ULL || rel >= 0x83dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083dd10 size=128 callers=0 calls=0
*/
void sub_83dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83dd10ULL || rel >= 0x83dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083dd90 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83dd90ULL || rel >= 0x83ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ddc0 size=496 callers=2 calls=18
   calls: sub_7ee6b0, sub_7eef50, sub_7f2370, sub_80cbb0, sub_80e1f0, sub_812280, sub_812680, sub_812de0, sub_813110, sub_828460, sub_828470, sub_82a9e0
   ... +6 more
*/
void sub_83ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ddc0ULL || rel >= 0x83dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083dfb0 size=288 callers=1 calls=9
   calls: sub_7eb4b0, sub_7ee6b0, sub_7ee6c0, sub_7eef50, sub_7fe250, sub_803560, sub_80cd60, sub_82a9c0, sub_82aa10
*/
void sub_83dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83dfb0ULL || rel >= 0x83e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e0d0 size=16 callers=0 calls=0
*/
void sub_83e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e0d0ULL || rel >= 0x83e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e0e0 size=128 callers=0 calls=0
*/
void sub_83e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e0e0ULL || rel >= 0x83e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e160 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e160ULL || rel >= 0x83e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e190 size=176 callers=4 calls=7
   calls: sub_7ee6b0, sub_7ef4c0, sub_828570, sub_828d90, sub_82aa80, sub_82c080, sub_82c210
*/
void sub_83e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e190ULL || rel >= 0x83e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e240 size=16 callers=0 calls=0
*/
void sub_83e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e240ULL || rel >= 0x83e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e250 size=128 callers=0 calls=0
*/
void sub_83e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e250ULL || rel >= 0x83e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e2d0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e2d0ULL || rel >= 0x83e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e300 size=64 callers=3 calls=2
   calls: sub_7ee6b0, sub_82aa10
*/
void sub_83e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e300ULL || rel >= 0x83e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e340 size=16 callers=0 calls=0
*/
void sub_83e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e340ULL || rel >= 0x83e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e350 size=128 callers=0 calls=0
*/
void sub_83e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e350ULL || rel >= 0x83e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e3d0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e3d0ULL || rel >= 0x83e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e400 size=464 callers=1 calls=14
   calls: sub_7ee6b0, sub_7ee800, sub_7eef50, sub_7f2e70, sub_7f79e0, sub_80e230, sub_80fb90, sub_810870, sub_812000, sub_828570, sub_82a9e0, sub_82aa80
   ... +2 more
*/
void sub_83e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e400ULL || rel >= 0x83e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e5d0 size=16 callers=0 calls=0
*/
void sub_83e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e5d0ULL || rel >= 0x83e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e5e0 size=128 callers=0 calls=0
*/
void sub_83e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e5e0ULL || rel >= 0x83e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e660 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e660ULL || rel >= 0x83e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e690 size=160 callers=1 calls=5
   calls: sub_780f30, sub_80ab10, sub_82a9e0, sub_82aa10, sub_82aa30
*/
void sub_83e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e690ULL || rel >= 0x83e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e730 size=192 callers=0 calls=11
   calls: sub_7ee6b0, sub_80a950, sub_80e820, sub_812de0, sub_8284e0, sub_82a9e0, sub_82aa10, sub_82aa30, sub_82aa80, sub_838a20, sub_83e7f0
*/
void sub_83e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e730ULL || rel >= 0x83e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e7f0 size=144 callers=1 calls=7
   calls: sub_7fe1e0, sub_7ffaa0, sub_803c60, sub_803d20, sub_80dd60, sub_82a9c0, sub_82a9e0
*/
void sub_83e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e7f0ULL || rel >= 0x83e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e880 size=16 callers=0 calls=0
*/
void sub_83e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e880ULL || rel >= 0x83e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e890 size=128 callers=0 calls=0
*/
void sub_83e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e890ULL || rel >= 0x83e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e910 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e910ULL || rel >= 0x83e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083e940 size=208 callers=1 calls=9
   calls: sub_80e820, sub_812de0, sub_813130, sub_813140, sub_829260, sub_82a9e0, sub_82aa30, sub_82aa80, sub_83ae70
*/
void sub_83e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e940ULL || rel >= 0x83ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ea10 size=16 callers=0 calls=0
*/
void sub_83ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ea10ULL || rel >= 0x83ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ea20 size=128 callers=0 calls=0
*/
void sub_83ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ea20ULL || rel >= 0x83eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083eaa0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83eaa0ULL || rel >= 0x83ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ead0 size=368 callers=1 calls=15
   calls: sub_7ee6b0, sub_803c60, sub_803cb0, sub_803d20, sub_803d60, sub_809f70, sub_80c8d0, sub_812de0, sub_813130, sub_813140, sub_828f40, sub_82aa10
   ... +3 more
*/
void sub_83ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ead0ULL || rel >= 0x83ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ec40 size=16 callers=0 calls=0
*/
void sub_83ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ec40ULL || rel >= 0x83ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ec50 size=128 callers=0 calls=0
*/
void sub_83ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ec50ULL || rel >= 0x83ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ecd0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ecd0ULL || rel >= 0x83ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083ed00 size=416 callers=1 calls=19
   calls: sub_7ee6b0, sub_7ee800, sub_7ef4c0, sub_7f1400, sub_7f87c0, sub_80b910, sub_80b9e0, sub_80bc70, sub_80bcd0, sub_80e820, sub_80ffa0, sub_812e30
   ... +7 more
*/
void sub_83ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ed00ULL || rel >= 0x83eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083eea0 size=304 callers=1 calls=10
   calls: sub_7ee6b0, sub_7ee800, sub_7f0b70, sub_80ba80, sub_80bc10, sub_80e820, sub_811fe0, sub_82a9e0, sub_82aa10, sub_83efd0
*/
void sub_83eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83eea0ULL || rel >= 0x83efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083efd0 size=240 callers=1 calls=12
   calls: sub_7cb420, sub_7ee6b0, sub_7fe1d0, sub_813110, sub_813270, sub_82a9b0, sub_82a9c0, sub_82a9f0, sub_82aa30, sub_82abb0, sub_830fa0, sub_831020
*/
void sub_83efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83efd0ULL || rel >= 0x83f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f0c0 size=16 callers=0 calls=0
*/
void sub_83f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f0c0ULL || rel >= 0x83f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f0d0 size=128 callers=0 calls=0
*/
void sub_83f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f0d0ULL || rel >= 0x83f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f150 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f150ULL || rel >= 0x83f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f180 size=112 callers=2 calls=4
   calls: sub_7f0b30, sub_80f7a0, sub_82a9e0, sub_83f1f0
*/
void sub_83f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f180ULL || rel >= 0x83f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f1f0 size=192 callers=1 calls=7
   calls: sub_7ee6b0, sub_7ef4c0, sub_7f1400, sub_803c60, sub_8289a0, sub_82aa80, sub_82c6b0
*/
void sub_83f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f1f0ULL || rel >= 0x83f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f2b0 size=16 callers=0 calls=0
*/
void sub_83f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f2b0ULL || rel >= 0x83f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f2c0 size=128 callers=0 calls=0
*/
void sub_83f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f2c0ULL || rel >= 0x83f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f340 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f340ULL || rel >= 0x83f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f370 size=944 callers=2 calls=35
   calls: sub_780da0, sub_7ee6b0, sub_7fe250, sub_808560, sub_80e820, sub_813700, sub_828520, sub_828590, sub_8285a0, sub_8285c0, sub_8285d0, sub_8285e0
   ... +23 more
*/
void sub_83f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f370ULL || rel >= 0x83f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f720 size=208 callers=1 calls=5
   calls: sub_780da0, sub_7ee6b0, sub_7f0aa0, sub_813110, sub_813280
*/
void sub_83f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f720ULL || rel >= 0x83f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f7f0 size=224 callers=1 calls=8
   calls: sub_780c60, sub_780da0, sub_7f2e70, sub_804db0, sub_8130b0, sub_813130, sub_813140, sub_82aa10
*/
void sub_83f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f7f0ULL || rel >= 0x83f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083f8d0 size=416 callers=1 calls=19
   calls: sub_7ee6b0, sub_7ee6c0, sub_7ee800, sub_7ee810, sub_7eef50, sub_7f36f0, sub_7fc800, sub_8068f0, sub_80e1f0, sub_811190, sub_8130b0, sub_813110
   ... +7 more
*/
void sub_83f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83f8d0ULL || rel >= 0x83fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fa70 size=16 callers=0 calls=0
*/
void sub_83fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fa70ULL || rel >= 0x83fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fa80 size=128 callers=0 calls=0
*/
void sub_83fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fa80ULL || rel >= 0x83fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fb00 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fb00ULL || rel >= 0x83fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fb30 size=384 callers=1 calls=16
   calls: sub_7ee6b0, sub_808a90, sub_808b60, sub_808eb0, sub_80e840, sub_80e880, sub_811190, sub_8130b0, sub_813110, sub_813130, sub_813140, sub_813270
   ... +4 more
*/
void sub_83fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fb30ULL || rel >= 0x83fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fcb0 size=16 callers=0 calls=0
*/
void sub_83fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fcb0ULL || rel >= 0x83fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fcc0 size=128 callers=0 calls=0
*/
void sub_83fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fcc0ULL || rel >= 0x83fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fd40 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fd40ULL || rel >= 0x83fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fd70 size=192 callers=1 calls=8
   calls: sub_7ee6b0, sub_813130, sub_813140, sub_828650, sub_82aa80, sub_832db0, sub_832eb0, sub_83fef0
*/
void sub_83fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fd70ULL || rel >= 0x83fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fe30 size=16 callers=0 calls=0
*/
void sub_83fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fe30ULL || rel >= 0x83fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fe40 size=128 callers=0 calls=0
*/
void sub_83fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fe40ULL || rel >= 0x83fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fec0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_83fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fec0ULL || rel >= 0x83fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fef0 size=256 callers=2 calls=6
   calls: sub_7870a0, sub_7ef4c0, sub_805ee0, sub_8062b0, sub_82aa10, sub_83fff0
*/
void sub_83fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fef0ULL || rel >= 0x83fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0083fff0 size=240 callers=1 calls=5
   calls: sub_8064e0, sub_828560, sub_82aa10, sub_82aa80, sub_8401a0
*/
void sub_83fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83fff0ULL || rel >= 0x8400e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008400e0 size=16 callers=0 calls=0
*/
void sub_8400e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8400e0ULL || rel >= 0x8400f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008400f0 size=128 callers=0 calls=0
*/
void sub_8400f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8400f0ULL || rel >= 0x840170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840170 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_840170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840170ULL || rel >= 0x8401a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008401a0 size=112 callers=3 calls=5
   calls: sub_7fe1e0, sub_7ffe20, sub_806380, sub_82a9c0, sub_82aa10
*/
void sub_8401a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8401a0ULL || rel >= 0x840210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840210 size=16 callers=0 calls=0
*/
void sub_840210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840210ULL || rel >= 0x840220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840220 size=128 callers=0 calls=0
*/
void sub_840220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840220ULL || rel >= 0x8402a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008402a0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8402a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8402a0ULL || rel >= 0x8402d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008402d0 size=352 callers=1 calls=11
   calls: sub_7ee6b0, sub_808610, sub_8086f0, sub_811190, sub_813330, sub_8285b0, sub_82a9e0, sub_82aa10, sub_82aa80, sub_840430, sub_840790
*/
void sub_8402d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8402d0ULL || rel >= 0x840430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840430 size=368 callers=1 calls=13
   calls: sub_780c60, sub_780ec0, sub_7f0aa0, sub_8130b0, sub_813130, sub_813140, sub_813270, sub_828580, sub_828dc0, sub_82aa30, sub_82aa80, sub_840660
   ... +1 more
*/
void sub_840430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840430ULL || rel >= 0x8405a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008405a0 size=16 callers=0 calls=0
*/
void sub_8405a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8405a0ULL || rel >= 0x8405b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008405b0 size=128 callers=0 calls=0
*/
void sub_8405b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8405b0ULL || rel >= 0x840630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840630 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_840630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840630ULL || rel >= 0x840660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840660 size=112 callers=1 calls=5
   calls: sub_7ee6b0, sub_80e230, sub_80f370, sub_82a9e0, sub_82aa10
*/
void sub_840660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840660ULL || rel >= 0x8406d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008406d0 size=16 callers=0 calls=0
*/
void sub_8406d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8406d0ULL || rel >= 0x8406e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008406e0 size=128 callers=0 calls=0
*/
void sub_8406e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8406e0ULL || rel >= 0x840760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840760 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_840760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840760ULL || rel >= 0x840790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840790 size=240 callers=6 calls=8
   calls: sub_8130b0, sub_813130, sub_813140, sub_813270, sub_828580, sub_82aa80, sub_82adc0, sub_840940
*/
void sub_840790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840790ULL || rel >= 0x840880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840880 size=16 callers=0 calls=0
*/
void sub_840880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840880ULL || rel >= 0x840890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840890 size=128 callers=0 calls=0
*/
void sub_840890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840890ULL || rel >= 0x840910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840910 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_840910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840910ULL || rel >= 0x840940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840940 size=336 callers=2 calls=12
   calls: sub_7ee6b0, sub_803c60, sub_803cb0, sub_803d10, sub_808880, sub_80e230, sub_828ae0, sub_82a9e0, sub_82aa10, sub_82aa30, sub_82aa80, sub_840b50
*/
void sub_840940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840940ULL || rel >= 0x840a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840a90 size=16 callers=0 calls=0
*/
void sub_840a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840a90ULL || rel >= 0x840aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840aa0 size=128 callers=0 calls=0
*/
void sub_840aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840aa0ULL || rel >= 0x840b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840b20 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_840b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840b20ULL || rel >= 0x840b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840b50 size=208 callers=8 calls=7
   calls: sub_803e20, sub_80dd60, sub_810a90, sub_810b00, sub_82a9e0, sub_82aa30, sub_82ab10
*/
void sub_840b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840b50ULL || rel >= 0x840c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840c20 size=16 callers=0 calls=0
*/
void sub_840c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840c20ULL || rel >= 0x840c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840c30 size=128 callers=0 calls=0
*/
void sub_840c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840c30ULL || rel >= 0x840cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840cb0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_840cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840cb0ULL || rel >= 0x840ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840ce0 size=96 callers=3 calls=3
   calls: sub_8084c0, sub_813330, sub_82aa10
*/
void sub_840ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840ce0ULL || rel >= 0x840d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840d40 size=16 callers=0 calls=0
*/
void sub_840d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840d40ULL || rel >= 0x840d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840d50 size=128 callers=0 calls=0
*/
void sub_840d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840d50ULL || rel >= 0x840dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840dd0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_840dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840dd0ULL || rel >= 0x840e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840e00 size=240 callers=1 calls=9
   calls: sub_80bde0, sub_80e840, sub_8130b0, sub_813130, sub_813140, sub_813270, sub_82a9e0, sub_82aa10, sub_82adc0
*/
void sub_840e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840e00ULL || rel >= 0x840ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840ef0 size=16 callers=0 calls=0
*/
void sub_840ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840ef0ULL || rel >= 0x840f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840f00 size=128 callers=0 calls=0
*/
void sub_840f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840f00ULL || rel >= 0x840f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840f80 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_840f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840f80ULL || rel >= 0x840fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00840fb0 size=160 callers=1 calls=8
   calls: sub_7ee6b0, sub_811190, sub_813270, sub_813330, sub_8285b0, sub_82a9e0, sub_82aa80, sub_840790
*/
void sub_840fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x840fb0ULL || rel >= 0x841050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841050 size=16 callers=0 calls=0
*/
void sub_841050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841050ULL || rel >= 0x841060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841060 size=128 callers=0 calls=0
*/
void sub_841060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841060ULL || rel >= 0x8410e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008410e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8410e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8410e0ULL || rel >= 0x841110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841110 size=160 callers=1 calls=4
   calls: sub_8285b0, sub_82aa80, sub_840790, sub_8411b0
*/
void sub_841110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841110ULL || rel >= 0x8411b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008411b0 size=192 callers=1 calls=7
   calls: sub_7ee6b0, sub_80e230, sub_8130b0, sub_813130, sub_813140, sub_82a9e0, sub_841270
*/
void sub_8411b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8411b0ULL || rel >= 0x841270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841270 size=240 callers=1 calls=4
   calls: sub_7ebab0, sub_7ee6b0, sub_7f0670, sub_82ad00
*/
void sub_841270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841270ULL || rel >= 0x841360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841360 size=16 callers=0 calls=0
*/
void sub_841360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841360ULL || rel >= 0x841370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841370 size=128 callers=0 calls=0
*/
void sub_841370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841370ULL || rel >= 0x8413f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008413f0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8413f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8413f0ULL || rel >= 0x841420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841420 size=112 callers=1 calls=3
   calls: sub_82a9e0, sub_82aa30, sub_841490
*/
void sub_841420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841420ULL || rel >= 0x841490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841490 size=288 callers=1 calls=9
   calls: sub_780f80, sub_780fe0, sub_7f7df0, sub_8130b0, sub_813130, sub_813140, sub_828420, sub_82aa80, sub_836da0
*/
void sub_841490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841490ULL || rel >= 0x8415b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008415b0 size=16 callers=0 calls=0
*/
void sub_8415b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8415b0ULL || rel >= 0x8415c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008415c0 size=128 callers=0 calls=0
*/
void sub_8415c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8415c0ULL || rel >= 0x841640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841640 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_841640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841640ULL || rel >= 0x841670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841670 size=128 callers=1 calls=6
   calls: sub_80e820, sub_813270, sub_813330, sub_82a9e0, sub_82aa30, sub_8416f0
*/
void sub_841670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841670ULL || rel >= 0x8416f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008416f0 size=336 callers=1 calls=8
   calls: sub_8130b0, sub_813130, sub_813140, sub_813270, sub_829270, sub_82aa80, sub_841840, sub_8419c0
*/
void sub_8416f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8416f0ULL || rel >= 0x841840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841840 size=192 callers=1 calls=8
   calls: sub_7ee6b0, sub_80e230, sub_80e820, sub_829260, sub_82a9e0, sub_82aa30, sub_82aa80, sub_83ae70
*/
void sub_841840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841840ULL || rel >= 0x841900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841900 size=16 callers=0 calls=0
*/
void sub_841900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841900ULL || rel >= 0x841910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841910 size=128 callers=0 calls=0
*/
void sub_841910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841910ULL || rel >= 0x841990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841990 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_841990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841990ULL || rel >= 0x8419c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008419c0 size=352 callers=2 calls=12
   calls: sub_781040, sub_7ee6b0, sub_804db0, sub_806f10, sub_82aa10, sub_82f7f0, sub_82f800, sub_82f810, sub_82f830, sub_82f840, sub_82f870, sub_841b20
*/
void sub_8419c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8419c0ULL || rel >= 0x841b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841b20 size=560 callers=1 calls=4
   calls: sub_7ee6b0, sub_828f20, sub_82aa80, sub_82f450
*/
void sub_841b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841b20ULL || rel >= 0x841d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841d50 size=16 callers=0 calls=0
*/
void sub_841d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841d50ULL || rel >= 0x841d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841d60 size=128 callers=0 calls=0
*/
void sub_841d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841d60ULL || rel >= 0x841de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841de0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_841de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841de0ULL || rel >= 0x841e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841e10 size=304 callers=1 calls=10
   calls: sub_7ee6b0, sub_8130b0, sub_813130, sub_813140, sub_813270, sub_813330, sub_82a9e0, sub_832f10, sub_841f40, sub_841ff0
*/
void sub_841e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841e10ULL || rel >= 0x841f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841f40 size=176 callers=1 calls=8
   calls: sub_7ee6b0, sub_80c1d0, sub_80e8e0, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa10, sub_832f40
*/
void sub_841f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841f40ULL || rel >= 0x841ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00841ff0 size=160 callers=1 calls=7
   calls: sub_7cb490, sub_7cb850, sub_7ee6b0, sub_7fe280, sub_7fe870, sub_82a9b0, sub_82a9c0
*/
void sub_841ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x841ff0ULL || rel >= 0x842090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842090 size=16 callers=0 calls=0
*/
void sub_842090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842090ULL || rel >= 0x8420a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008420a0 size=128 callers=0 calls=0
*/
void sub_8420a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8420a0ULL || rel >= 0x842120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842120 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_842120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842120ULL || rel >= 0x842150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842150 size=704 callers=4 calls=28
   calls: sub_7ca1c0, sub_7ee6b0, sub_7fe250, sub_80ce90, sub_80cf50, sub_80cfe0, sub_80d0e0, sub_80d220, sub_812ec0, sub_812ee0, sub_812f00, sub_813110
   ... +16 more
*/
void sub_842150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842150ULL || rel >= 0x842410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842410 size=224 callers=1 calls=10
   calls: sub_7ee6b0, sub_804200, sub_804480, sub_80d2c0, sub_812f00, sub_813110, sub_813270, sub_82a9b0, sub_82a9c0, sub_82aa10
*/
void sub_842410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842410ULL || rel >= 0x8424f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008424f0 size=368 callers=1 calls=17
   calls: sub_7cacb0, sub_7cb490, sub_7ee6b0, sub_7ee800, sub_7ef2b0, sub_7f7120, sub_7fc940, sub_812f00, sub_8130b0, sub_813110, sub_813270, sub_82a9b0
   ... +5 more
*/
void sub_8424f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8424f0ULL || rel >= 0x842660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842660 size=336 callers=1 calls=12
   calls: sub_780c60, sub_7cb420, sub_7ee6b0, sub_7ef2b0, sub_7f8cf0, sub_7f8d20, sub_7fe1d0, sub_82a9b0, sub_82a9c0, sub_82aae0, sub_82ac50, sub_82ac60
*/
void sub_842660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842660ULL || rel >= 0x8427b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008427b0 size=368 callers=1 calls=8
   calls: sub_7cae30, sub_7cb3b0, sub_7cb420, sub_7ecc90, sub_7ed6f0, sub_7ee6b0, sub_7fe1d0, sub_812f00
*/
void sub_8427b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8427b0ULL || rel >= 0x842920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842920 size=768 callers=1 calls=13
   calls: sub_7cae30, sub_7cb3b0, sub_7cb3d0, sub_7cb420, sub_7ecc90, sub_7ed560, sub_7ed6f0, sub_7ee6b0, sub_7ef2b0, sub_7f7690, sub_7f80f0, sub_7fe1d0
   ... +1 more
*/
void sub_842920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842920ULL || rel >= 0x842c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842c20 size=912 callers=1 calls=17
   calls: sub_7cacb0, sub_7cae30, sub_7cb3b0, sub_7cb420, sub_7cb490, sub_7ecc90, sub_7ed560, sub_7ed6f0, sub_7ee6b0, sub_7ef2b0, sub_7f7690, sub_7f80f0
   ... +5 more
*/
void sub_842c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842c20ULL || rel >= 0x842fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842fb0 size=16 callers=0 calls=0
*/
void sub_842fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842fb0ULL || rel >= 0x842fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00842fc0 size=128 callers=0 calls=0
*/
void sub_842fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842fc0ULL || rel >= 0x843040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843040 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_843040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843040ULL || rel >= 0x843070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843070 size=160 callers=1 calls=2
   calls: sub_82aa30, sub_843110
*/
void sub_843070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843070ULL || rel >= 0x843110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843110 size=256 callers=1 calls=10
   calls: sub_7ef580, sub_804ad0, sub_8082d0, sub_812ec0, sub_828f80, sub_82aa10, sub_82aa80, sub_82ab10, sub_842150, sub_843210
*/
void sub_843110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843110ULL || rel >= 0x843210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843210 size=320 callers=1 calls=16
   calls: sub_7e8e10, sub_7e8e90, sub_7ee6b0, sub_7eef50, sub_7fe2a0, sub_8025a0, sub_803c60, sub_8124b0, sub_812570, sub_829180, sub_82a9c0, sub_82a9e0
   ... +4 more
*/
void sub_843210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843210ULL || rel >= 0x843350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843350 size=16 callers=0 calls=0
*/
void sub_843350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843350ULL || rel >= 0x843360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843360 size=128 callers=0 calls=0
*/
void sub_843360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843360ULL || rel >= 0x8433e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008433e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8433e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8433e0ULL || rel >= 0x843410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843410 size=592 callers=1 calls=19
   calls: sub_7ee6b0, sub_7ef670, sub_7f0aa0, sub_7f0b30, sub_7f0ba0, sub_7f1400, sub_808180, sub_80f880, sub_8109e0, sub_811190, sub_811fe0, sub_812520
   ... +7 more
*/
void sub_843410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843410ULL || rel >= 0x843660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843660 size=16 callers=0 calls=0
*/
void sub_843660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843660ULL || rel >= 0x843670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843670 size=128 callers=0 calls=0
*/
void sub_843670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843670ULL || rel >= 0x8436f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008436f0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8436f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8436f0ULL || rel >= 0x843720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00843720 size=2544 callers=1 calls=61
   calls: sub_7811e0, sub_7cb3b0, sub_7ee6b0, sub_7ee6c0, sub_7ef4c0, sub_7f1400, sub_7f80f0, sub_7fe1d0, sub_7fe270, sub_7fe380, sub_803860, sub_803c60
   ... +49 more
*/
void sub_843720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x843720ULL || rel >= 0x844110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844110 size=256 callers=3 calls=11
   calls: sub_7ee6b0, sub_7ee800, sub_7f0540, sub_809270, sub_811900, sub_8286f0, sub_82a9e0, sub_82aa10, sub_82aa80, sub_82d990, sub_8388d0
*/
void sub_844110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844110ULL || rel >= 0x844210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844210 size=272 callers=1 calls=7
   calls: sub_780c60, sub_7ef4c0, sub_7fe1e0, sub_7ffe20, sub_82a9c0, sub_82ae00, sub_82ae20
*/
void sub_844210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844210ULL || rel >= 0x844320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844320 size=144 callers=1 calls=8
   calls: sub_803c60, sub_80b610, sub_80dd60, sub_82a9e0, sub_82a9f0, sub_82aa10, sub_82aa30, sub_830df0
*/
void sub_844320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844320ULL || rel >= 0x8443b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008443b0 size=16 callers=0 calls=0
*/
void sub_8443b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8443b0ULL || rel >= 0x8443c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008443c0 size=128 callers=0 calls=0
*/
void sub_8443c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8443c0ULL || rel >= 0x844440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844440 size=96 callers=1 calls=3
   calls: sub_7cb490, sub_7cb850, sub_7ee6b0
*/
void sub_844440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844440ULL || rel >= 0x8444a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008444a0 size=16 callers=1 calls=0
*/
void sub_8444a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8444a0ULL || rel >= 0x8444b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008444b0 size=80 callers=1 calls=1
   calls: sub_7f7ae0
*/
void sub_8444b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8444b0ULL || rel >= 0x844500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844500 size=16 callers=1 calls=0
*/
void sub_844500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844500ULL || rel >= 0x844510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844510 size=96 callers=1 calls=1
   calls: sub_7caa70
*/
void sub_844510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844510ULL || rel >= 0x844570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844570 size=128 callers=0 calls=0
*/
void sub_844570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844570ULL || rel >= 0x8445f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008445f0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8445f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8445f0ULL || rel >= 0x844620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844620 size=224 callers=5 calls=10
   calls: sub_80b6e0, sub_828600, sub_828690, sub_8294b0, sub_82aa10, sub_82aa80, sub_82ad10, sub_82ad30, sub_844700, sub_844960
*/
void sub_844620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844620ULL || rel >= 0x844700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844700 size=416 callers=1 calls=10
   calls: sub_7ee6b0, sub_7f78c0, sub_80e920, sub_80f370, sub_80ffa0, sub_811fe0, sub_82a9e0, sub_82a9f0, sub_82aa30, sub_830f40
*/
void sub_844700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844700ULL || rel >= 0x8448a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008448a0 size=16 callers=0 calls=0
*/
void sub_8448a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8448a0ULL || rel >= 0x8448b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008448b0 size=128 callers=0 calls=0
*/
void sub_8448b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8448b0ULL || rel >= 0x844930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844930 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_844930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844930ULL || rel >= 0x844960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844960 size=368 callers=1 calls=12
   calls: sub_7eef50, sub_7f7590, sub_7f7690, sub_8094f0, sub_80b4a0, sub_80b590, sub_80fd50, sub_828da0, sub_82a9e0, sub_82aa10, sub_82aa80, sub_832590
*/
void sub_844960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844960ULL || rel >= 0x844ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844ad0 size=16 callers=0 calls=0
*/
void sub_844ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844ad0ULL || rel >= 0x844ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844ae0 size=128 callers=0 calls=0
*/
void sub_844ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844ae0ULL || rel >= 0x844b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844b60 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_844b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844b60ULL || rel >= 0x844b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844b90 size=160 callers=1 calls=4
   calls: sub_8291f0, sub_82aa80, sub_844620, sub_844c30
*/
void sub_844b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844b90ULL || rel >= 0x844c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00844c30 size=1184 callers=1 calls=34
   calls: sub_780c60, sub_780ec0, sub_7c56e0, sub_7ee6c0, sub_7ee800, sub_7ef4c0, sub_7ef6a0, sub_7ef750, sub_7f0130, sub_7f0540, sub_7f0aa0, sub_7f2520
   ... +22 more
*/
void sub_844c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x844c30ULL || rel >= 0x8450d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008450d0 size=176 callers=0 calls=4
   calls: sub_780c60, sub_7ef6a0, sub_80e920, sub_82a9e0
*/
void sub_8450d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8450d0ULL || rel >= 0x845180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845180 size=192 callers=1 calls=7
   calls: sub_7ee6b0, sub_7ef6a0, sub_7f1710, sub_803c60, sub_8289a0, sub_82aa80, sub_82c6b0
*/
void sub_845180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845180ULL || rel >= 0x845240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845240 size=256 callers=1 calls=10
   calls: sub_780c60, sub_7ee6b0, sub_7ef6a0, sub_7f7ff0, sub_803c60, sub_8091d0, sub_8289a0, sub_82aa10, sub_82aa80, sub_82c6b0
*/
void sub_845240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845240ULL || rel >= 0x845340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845340 size=208 callers=1 calls=6
   calls: sub_7ee6c0, sub_7ef4c0, sub_7ef8d0, sub_7fe1e0, sub_7ffe20, sub_82a9c0
*/
void sub_845340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845340ULL || rel >= 0x845410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845410 size=336 callers=1 calls=13
   calls: sub_7ee6b0, sub_7ef4c0, sub_7f17c0, sub_7f7ff0, sub_803c60, sub_803d20, sub_803d60, sub_80e1b0, sub_80f490, sub_8289a0, sub_82a9e0, sub_82aa80
   ... +1 more
*/
void sub_845410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845410ULL || rel >= 0x845560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845560 size=176 callers=1 calls=8
   calls: sub_136b5e0, sub_7caa70, sub_7cafa0, sub_7cb490, sub_7cb850, sub_7ee6b0, sub_7ef330, sub_82a9b0
*/
void sub_845560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845560ULL || rel >= 0x845610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845610 size=272 callers=1 calls=7
   calls: sub_7ca9f0, sub_7eef50, sub_7ef5d0, sub_7f7690, sub_807990, sub_82a9b0, sub_82aa10
*/
void sub_845610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845610ULL || rel >= 0x845720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845720 size=224 callers=0 calls=7
   calls: sub_7ee6b0, sub_803c60, sub_803d20, sub_803d60, sub_8289a0, sub_82aa80, sub_82c6b0
*/
void sub_845720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845720ULL || rel >= 0x845800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845800 size=16 callers=0 calls=0
*/
void sub_845800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845800ULL || rel >= 0x845810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845810 size=128 callers=0 calls=0
*/
void sub_845810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845810ULL || rel >= 0x845890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845890 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_845890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845890ULL || rel >= 0x8458c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008458c0 size=176 callers=1 calls=5
   calls: sub_809050, sub_8291f0, sub_82aa10, sub_82aa80, sub_844620
*/
void sub_8458c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8458c0ULL || rel >= 0x845970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845970 size=16 callers=0 calls=0
*/
void sub_845970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845970ULL || rel >= 0x845980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845980 size=128 callers=0 calls=0
*/
void sub_845980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845980ULL || rel >= 0x845a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845a00 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_845a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845a00ULL || rel >= 0x845a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845a30 size=176 callers=1 calls=5
   calls: sub_809050, sub_8291f0, sub_82aa10, sub_82aa80, sub_844620
*/
void sub_845a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845a30ULL || rel >= 0x845ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845ae0 size=16 callers=0 calls=0
*/
void sub_845ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845ae0ULL || rel >= 0x845af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845af0 size=128 callers=0 calls=0
*/
void sub_845af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845af0ULL || rel >= 0x845b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845b70 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_845b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845b70ULL || rel >= 0x845ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845ba0 size=368 callers=1 calls=11
   calls: sub_7ee6b0, sub_7f0aa0, sub_7f1400, sub_7f2f80, sub_7f2fc0, sub_80e250, sub_82a9e0, sub_82aa50, sub_82ccc0, sub_82d2e0, sub_845d10
*/
void sub_845ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845ba0ULL || rel >= 0x845d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845d10 size=336 callers=1 calls=3
   calls: sub_82a9b0, sub_82aa50, sub_82d0a0
*/
void sub_845d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845d10ULL || rel >= 0x845e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845e60 size=16 callers=0 calls=0
*/
void sub_845e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845e60ULL || rel >= 0x845e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845e70 size=128 callers=0 calls=0
*/
void sub_845e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845e70ULL || rel >= 0x845ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845ef0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_845ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845ef0ULL || rel >= 0x845f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00845f20 size=304 callers=1 calls=14
   calls: sub_7cb420, sub_7ee6b0, sub_7fe1d0, sub_807fc0, sub_8080b0, sub_80e820, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82a9f0, sub_82aa10, sub_82aa30
   ... +2 more
*/
void sub_845f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x845f20ULL || rel >= 0x846050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846050 size=16 callers=0 calls=0
*/
void sub_846050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846050ULL || rel >= 0x846060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846060 size=128 callers=0 calls=0
*/
void sub_846060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846060ULL || rel >= 0x8460e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008460e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8460e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8460e0ULL || rel >= 0x846110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846110 size=352 callers=1 calls=16
   calls: sub_7eef50, sub_7ef4c0, sub_7ef750, sub_7f7740, sub_7f8030, sub_7f8b70, sub_80e1b0, sub_80f370, sub_828600, sub_829010, sub_829020, sub_8294b0
   ... +4 more
*/
void sub_846110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846110ULL || rel >= 0x846270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846270 size=16 callers=0 calls=0
*/
void sub_846270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846270ULL || rel >= 0x846280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846280 size=128 callers=0 calls=0
*/
void sub_846280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846280ULL || rel >= 0x846300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846300 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_846300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846300ULL || rel >= 0x846330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846330 size=112 callers=2 calls=4
   calls: sub_828730, sub_82aa80, sub_8463a0, sub_846500
*/
void sub_846330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846330ULL || rel >= 0x8463a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008463a0 size=160 callers=1 calls=7
   calls: sub_7c5070, sub_7cb490, sub_7cb850, sub_7ee6b0, sub_80e190, sub_82a9b0, sub_82a9e0
*/
void sub_8463a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8463a0ULL || rel >= 0x846440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846440 size=16 callers=0 calls=0
*/
void sub_846440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846440ULL || rel >= 0x846450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846450 size=128 callers=0 calls=0
*/
void sub_846450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846450ULL || rel >= 0x8464d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008464d0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8464d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8464d0ULL || rel >= 0x846500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846500 size=288 callers=2 calls=8
   calls: sub_7ef3d0, sub_7f7690, sub_828710, sub_82aa80, sub_82ab40, sub_82ae40, sub_846620, sub_8467b0
*/
void sub_846500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846500ULL || rel >= 0x846620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846620 size=208 callers=1 calls=8
   calls: sub_7cab80, sub_7cb490, sub_7cb850, sub_7ee6b0, sub_828700, sub_82a9b0, sub_82aa80, sub_846a60
*/
void sub_846620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846620ULL || rel >= 0x8466f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008466f0 size=16 callers=0 calls=0
*/
void sub_8466f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8466f0ULL || rel >= 0x846700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846700 size=128 callers=0 calls=0
*/
void sub_846700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846700ULL || rel >= 0x846780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846780 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_846780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846780ULL || rel >= 0x8467b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008467b0 size=288 callers=2 calls=16
   calls: sub_7cab80, sub_7cb490, sub_7ee6b0, sub_7ef2b0, sub_807a80, sub_807b40, sub_80e190, sub_812390, sub_82a9b0, sub_82a9e0, sub_82aa10, sub_82aa20
   ... +4 more
*/
void sub_8467b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8467b0ULL || rel >= 0x8468d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008468d0 size=208 callers=1 calls=8
   calls: sub_7cb490, sub_7cb850, sub_7cce80, sub_7ee6b0, sub_80de70, sub_82a9b0, sub_82a9e0, sub_82ac70
*/
void sub_8468d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8468d0ULL || rel >= 0x8469a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008469a0 size=16 callers=0 calls=0
*/
void sub_8469a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8469a0ULL || rel >= 0x8469b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008469b0 size=128 callers=0 calls=0
*/
void sub_8469b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8469b0ULL || rel >= 0x846a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846a30 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_846a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846a30ULL || rel >= 0x846a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846a60 size=96 callers=2 calls=3
   calls: sub_7f0670, sub_806cf0, sub_82aa10
*/
void sub_846a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846a60ULL || rel >= 0x846ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846ac0 size=16 callers=0 calls=0
*/
void sub_846ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846ac0ULL || rel >= 0x846ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846ad0 size=128 callers=0 calls=0
*/
void sub_846ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846ad0ULL || rel >= 0x846b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846b50 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_846b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846b50ULL || rel >= 0x846b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846b80 size=304 callers=2 calls=11
   calls: sub_7eef50, sub_7ef580, sub_7fc2e0, sub_7fc430, sub_8122d0, sub_812330, sub_82a9e0, sub_846cb0, sub_846dc0, sub_846eb0, sub_846f60
*/
void sub_846b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846b80ULL || rel >= 0x846cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846cb0 size=272 callers=1 calls=9
   calls: sub_7cc160, sub_7ee6b0, sub_7eef50, sub_7ef580, sub_7fc2e0, sub_7fc430, sub_812340, sub_82a9b0, sub_82a9e0
*/
void sub_846cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846cb0ULL || rel >= 0x846dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846dc0 size=240 callers=1 calls=7
   calls: sub_7ee6b0, sub_7eef50, sub_7ef580, sub_7fc2e0, sub_7fc430, sub_812340, sub_82a9e0
*/
void sub_846dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846dc0ULL || rel >= 0x846eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846eb0 size=176 callers=1 calls=5
   calls: sub_7ee6b0, sub_7fc2e0, sub_7fc430, sub_8122e0, sub_82a9e0
*/
void sub_846eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846eb0ULL || rel >= 0x846f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00846f60 size=176 callers=1 calls=5
   calls: sub_7ee6b0, sub_7ef530, sub_811240, sub_8112d0, sub_82a9e0
*/
void sub_846f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x846f60ULL || rel >= 0x847010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847010 size=16 callers=0 calls=0
*/
void sub_847010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847010ULL || rel >= 0x847020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847020 size=128 callers=0 calls=0
*/
void sub_847020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847020ULL || rel >= 0x8470a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008470a0 size=16 callers=0 calls=0
*/
void sub_8470a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8470a0ULL || rel >= 0x8470b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008470b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8470b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8470b0ULL || rel >= 0x8470e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008470e0 size=576 callers=1 calls=30
   calls: sub_7cb080, sub_7cb1e0, sub_7cb490, sub_7ee6b0, sub_7ee6c0, sub_7eef40, sub_7f2e70, sub_7f31a0, sub_7f3350, sub_803c60, sub_80dbd0, sub_8104d0
   ... +18 more
*/
void sub_8470e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8470e0ULL || rel >= 0x847320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847320 size=176 callers=1 calls=7
   calls: CHANGE_DAIMAX, sub_7ee6b0, sub_804200, sub_804480, sub_82a9b0, sub_82a9c0, sub_82ad00
*/
void sub_847320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847320ULL || rel >= 0x8473d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008473d0 size=144 callers=1 calls=6
   calls: BATTLE_DAIMAX, sub_804200, sub_804480, sub_82a9b0, sub_82a9c0, sub_82ad60
*/
void sub_8473d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8473d0ULL || rel >= 0x847460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847460 size=16 callers=0 calls=0
*/
void sub_847460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847460ULL || rel >= 0x847470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847470 size=128 callers=0 calls=0
*/
void sub_847470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847470ULL || rel >= 0x8474f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008474f0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8474f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8474f0ULL || rel >= 0x847520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847520 size=224 callers=2 calls=13
   calls: sub_7ee6b0, sub_7f29c0, sub_7fe250, sub_803560, sub_803d10, sub_80dd60, sub_80e230, sub_810b50, sub_811730, sub_811770, sub_82a9c0, sub_82a9e0
   ... +1 more
*/
void sub_847520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847520ULL || rel >= 0x847600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847600 size=16 callers=0 calls=0
*/
void sub_847600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847600ULL || rel >= 0x847610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847610 size=128 callers=0 calls=0
*/
void sub_847610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847610ULL || rel >= 0x847690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847690 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_847690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847690ULL || rel >= 0x8476c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008476c0 size=640 callers=4 calls=40
   calls: sub_7c56e0, sub_7caf80, sub_7e8d70, sub_7ee6b0, sub_7ee810, sub_7f3700, sub_7fc830, sub_7fe310, sub_801920, sub_8075a0, sub_80dbd0, sub_80f470
   ... +28 more
*/
void sub_8476c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8476c0ULL || rel >= 0x847940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847940 size=208 callers=1 calls=8
   calls: sub_7ee6b0, sub_7ee810, sub_7f3770, sub_7f7690, sub_82a9e0, sub_82aae0, sub_82ac50, sub_82ae40
*/
void sub_847940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847940ULL || rel >= 0x847a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847a10 size=128 callers=1 calls=7
   calls: sub_812ec0, sub_813130, sub_813140, sub_828d40, sub_82aa80, sub_82de70, sub_848180
*/
void sub_847a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847a10ULL || rel >= 0x847a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847a90 size=896 callers=1 calls=17
   calls: sub_7c5910, sub_7e7b40, sub_7e7b50, sub_7fc2f0, sub_7fe310, sub_8018a0, sub_80e1b0, sub_80f410, sub_811cc0, sub_82a9b0, sub_82a9c0, sub_82a9e0
   ... +5 more
*/
void sub_847a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847a90ULL || rel >= 0x847e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847e10 size=176 callers=1 calls=9
   calls: sub_7c56e0, sub_7cb350, sub_82a9b0, sub_82aa20, sub_82ad10, sub_82b500, sub_82b7b0, sub_847fd0, sub_848340
*/
void sub_847e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847e10ULL || rel >= 0x847ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847ec0 size=160 callers=1 calls=9
   calls: sub_7ee6b0, sub_810950, sub_812ec0, sub_813130, sub_813140, sub_828d40, sub_82a9e0, sub_82aa80, sub_82de70
*/
void sub_847ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847ec0ULL || rel >= 0x847f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847f60 size=112 callers=1 calls=5
   calls: sub_80fa10, sub_82a9e0, sub_82aa20, sub_82b520, sub_82b850
*/
void sub_847f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847f60ULL || rel >= 0x847fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00847fd0 size=160 callers=3 calls=6
   calls: sub_82aa20, sub_82ac50, sub_82aca0, sub_82ae40, sub_82b500, sub_82b7c0
*/
void sub_847fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x847fd0ULL || rel >= 0x848070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848070 size=272 callers=1 calls=5
   calls: sub_7ee6b0, sub_7eef40, sub_8104d0, sub_82a9e0, sub_82ab40
*/
void sub_848070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848070ULL || rel >= 0x848180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848180 size=224 callers=1 calls=11
   calls: sub_7cd4a0, sub_7ee6b0, sub_7ee6c0, sub_7ee800, sub_7f34f0, sub_803e30, sub_811d90, sub_811dd0, sub_82a9b0, sub_82a9e0, sub_82ad10
*/
void sub_848180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848180ULL || rel >= 0x848260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848260 size=224 callers=4 calls=11
   calls: sub_7ee6b0, sub_7eef50, sub_7fc2e0, sub_7fc450, sub_803c60, sub_811d00, sub_81c460, sub_828b90, sub_82a9e0, sub_82aa80, sub_82ac20
*/
void sub_848260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848260ULL || rel >= 0x848340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848340 size=208 callers=1 calls=10
   calls: sub_7cac90, sub_7cb380, sub_7ee6c0, sub_7fe2d0, sub_800990, sub_800ae0, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aae0
*/
void sub_848340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848340ULL || rel >= 0x848410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848410 size=160 callers=0 calls=8
   calls: sub_7fe2d0, sub_800990, sub_800c00, sub_803ef0, sub_811e90, sub_82a9b0, sub_82a9c0, sub_82a9e0
*/
void sub_848410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848410ULL || rel >= 0x8484b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008484b0 size=16 callers=0 calls=0
*/
void sub_8484b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8484b0ULL || rel >= 0x8484c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008484c0 size=128 callers=0 calls=0
*/
void sub_8484c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8484c0ULL || rel >= 0x848540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848540 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_848540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848540ULL || rel >= 0x848570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848570 size=448 callers=1 calls=23
   calls: sub_7cb490, sub_7cb8f0, sub_7e89f0, sub_7e8a10, sub_7ee6b0, sub_7fe390, sub_812260, sub_828710, sub_828d70, sub_82a9b0, sub_82a9c0, sub_82a9e0
   ... +11 more
*/
void sub_848570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848570ULL || rel >= 0x848730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848730 size=352 callers=1 calls=10
   calls: sub_7cabc0, sub_7cafa0, sub_828740, sub_82a9b0, sub_82aa80, sub_82aae0, sub_82ac20, sub_846b80, sub_848910, sub_848a60
*/
void sub_848730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848730ULL || rel >= 0x848890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848890 size=128 callers=1 calls=6
   calls: sub_7cb490, sub_7cb850, sub_7cce80, sub_7ee6b0, sub_82a9b0, sub_82aae0
*/
void sub_848890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848890ULL || rel >= 0x848910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848910 size=192 callers=1 calls=9
   calls: sub_7cb490, sub_7ee6b0, sub_804200, sub_804480, sub_812020, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82ad50
*/
void sub_848910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848910ULL || rel >= 0x8489d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008489d0 size=16 callers=0 calls=0
*/
void sub_8489d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8489d0ULL || rel >= 0x8489e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008489e0 size=128 callers=0 calls=0
*/
void sub_8489e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8489e0ULL || rel >= 0x848a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848a60 size=496 callers=2 calls=6
   calls: sub_7fc2e0, sub_7fc450, sub_848c50, sub_848d20, sub_848ec0, sub_8490d0
*/
void sub_848a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848a60ULL || rel >= 0x848c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848c50 size=208 callers=1 calls=0
*/
void sub_848c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848c50ULL || rel >= 0x848d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848d20 size=416 callers=1 calls=17
   calls: sub_136b590, sub_136b5e0, sub_762fd0, sub_7c58b0, sub_7caa20, sub_7cc1b0, sub_7cd130, sub_7ee6b0, sub_7eef40, sub_7eef50, sub_7ef2b0, sub_7ef330
   ... +5 more
*/
void sub_848d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848d20ULL || rel >= 0x848ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00848ec0 size=528 callers=1 calls=5
   calls: sub_7eef40, sub_7f09c0, sub_7f2fd0, sub_7f7ae0, sub_7f7b60
*/
void sub_848ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x848ec0ULL || rel >= 0x8490d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008490d0 size=240 callers=1 calls=3
   calls: sub_7eef40, sub_7f2fd0, sub_7f7b60
*/
void sub_8490d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8490d0ULL || rel >= 0x8491c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008491c0 size=128 callers=0 calls=0
*/
void sub_8491c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8491c0ULL || rel >= 0x849240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849240 size=448 callers=1 calls=1
   calls: sub_7f7700
*/
void sub_849240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849240ULL || rel >= 0x849400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849400 size=16 callers=0 calls=0
*/
void sub_849400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849400ULL || rel >= 0x849410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849410 size=16 callers=0 calls=0
*/
void sub_849410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849410ULL || rel >= 0x849420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849420 size=16 callers=0 calls=0
*/
void sub_849420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849420ULL || rel >= 0x849430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849430 size=16 callers=0 calls=0
*/
void sub_849430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849430ULL || rel >= 0x849440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849440 size=16 callers=0 calls=0
*/
void sub_849440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849440ULL || rel >= 0x849450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849450 size=16 callers=0 calls=0
*/
void sub_849450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849450ULL || rel >= 0x849460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849460 size=16 callers=0 calls=0
*/
void sub_849460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849460ULL || rel >= 0x849470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849470 size=224 callers=0 calls=11
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_80f100, sub_812820, sub_828ae0, sub_82a9e0, sub_82aa80, sub_82abe0, sub_840b50
*/
void sub_849470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849470ULL || rel >= 0x849550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849550 size=272 callers=0 calls=11
   calls: sub_7ee6b0, sub_7eef50, sub_7ef2b0, sub_7f79e0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_81c460, sub_828b90, sub_82aa80
*/
void sub_849550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849550ULL || rel >= 0x849660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849660 size=16 callers=0 calls=0
*/
void sub_849660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849660ULL || rel >= 0x849670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849670 size=16 callers=0 calls=0
*/
void sub_849670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849670ULL || rel >= 0x849680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849680 size=16 callers=0 calls=0
*/
void sub_849680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849680ULL || rel >= 0x849690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849690 size=16 callers=0 calls=0
*/
void sub_849690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849690ULL || rel >= 0x8496a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008496a0 size=16 callers=0 calls=0
*/
void sub_8496a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8496a0ULL || rel >= 0x8496b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008496b0 size=16 callers=0 calls=0
*/
void sub_8496b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8496b0ULL || rel >= 0x8496c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008496c0 size=128 callers=0 calls=5
   calls: sub_7ee6b0, sub_7f05a0, sub_80e230, sub_80f730, sub_82a9e0
*/
void sub_8496c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8496c0ULL || rel >= 0x849740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849740 size=288 callers=0 calls=11
   calls: sub_7ee6b0, sub_7efe10, sub_7eff10, sub_7f0110, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_828b80, sub_82aa80, sub_84a7a0
*/
void sub_849740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849740ULL || rel >= 0x849860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849860 size=80 callers=0 calls=2
   calls: sub_7f7ae0, sub_84a520
*/
void sub_849860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849860ULL || rel >= 0x8498b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008498b0 size=448 callers=0 calls=16
   calls: sub_7cb490, sub_7ee6b0, sub_7eef50, sub_7ef2b0, sub_7ef540, sub_7f79e0, sub_7f7ae0, sub_803c60, sub_803d20, sub_803d60, sub_828a50, sub_828f40
   ... +4 more
*/
void sub_8498b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8498b0ULL || rel >= 0x849a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849a70 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_849a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849a70ULL || rel >= 0x849aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849aa0 size=688 callers=1 calls=21
   calls: sub_7cb490, sub_7cbf20, sub_7cc300, sub_7ee6b0, sub_7f7ae0, sub_7f7b00, sub_7fc550, sub_80e190, sub_80e1d0, sub_816460, sub_816500, sub_82a9b0
   ... +9 more
*/
void sub_849aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849aa0ULL || rel >= 0x849d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849d50 size=544 callers=1 calls=14
   calls: sub_7caa00, sub_7caa10, sub_7cafe0, sub_7eef50, sub_7f2f20, sub_8121e0, sub_812240, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82ab70, sub_82ac70
   ... +2 more
*/
void sub_849d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849d50ULL || rel >= 0x849f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00849f70 size=256 callers=1 calls=3
   calls: sub_7c56e0, sub_82a9b0, sub_82ac50
*/
void sub_849f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x849f70ULL || rel >= 0x84a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a070 size=464 callers=1 calls=1
   calls: sub_7f7ae0
*/
void sub_84a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a070ULL || rel >= 0x84a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a240 size=272 callers=1 calls=11
   calls: sub_7cb420, sub_7ee6b0, sub_7ef2b0, sub_7f8cf0, sub_7f8d20, sub_7fe1d0, sub_82a9b0, sub_82a9c0, sub_82aae0, sub_82ac50, sub_82ac60
*/
void sub_84a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a240ULL || rel >= 0x84a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a350 size=208 callers=0 calls=7
   calls: sub_7ee6b0, sub_7ef2b0, sub_7ef4c0, sub_803c60, sub_8289a0, sub_82aa80, sub_82c6b0
*/
void sub_84a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a350ULL || rel >= 0x84a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a420 size=256 callers=0 calls=8
   calls: sub_7ee6b0, sub_7ef2b0, sub_7f0c00, sub_803c60, sub_828b30, sub_82aa80, sub_82abb0, sub_84a910
*/
void sub_84a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a420ULL || rel >= 0x84a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

