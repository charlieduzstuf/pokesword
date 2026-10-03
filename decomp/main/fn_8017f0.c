/* main functions 008017f0..00812a50 (57 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 008017f0 size=32 callers=1 calls=0
*/
void sub_8017f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8017f0ULL || rel >= 0x801810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801810 size=32 callers=1 calls=0
*/
void sub_801810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801810ULL || rel >= 0x801830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801830 size=48 callers=1 calls=0
*/
void sub_801830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801830ULL || rel >= 0x801860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801860 size=16 callers=1 calls=0
*/
void sub_801860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801860ULL || rel >= 0x801870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801870 size=32 callers=0 calls=0
*/
void sub_801870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801870ULL || rel >= 0x801890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801890 size=16 callers=2 calls=0
*/
void sub_801890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801890ULL || rel >= 0x8018a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008018a0 size=32 callers=5 calls=0
*/
void sub_8018a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8018a0ULL || rel >= 0x8018c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008018c0 size=48 callers=0 calls=0
*/
void sub_8018c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8018c0ULL || rel >= 0x8018f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008018f0 size=32 callers=0 calls=0
*/
void sub_8018f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8018f0ULL || rel >= 0x801910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801910 size=16 callers=0 calls=0
*/
void sub_801910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801910ULL || rel >= 0x801920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801920 size=16 callers=1 calls=0
*/
void sub_801920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801920ULL || rel >= 0x801930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801930 size=80 callers=1 calls=0
*/
void sub_801930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801930ULL || rel >= 0x801980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801980 size=528 callers=0 calls=1
   calls: sub_802310
*/
void sub_801980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801980ULL || rel >= 0x801b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801b90 size=288 callers=1 calls=0
*/
void sub_801b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801b90ULL || rel >= 0x801cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801cb0 size=48 callers=0 calls=1
   calls: sub_801b90
*/
void sub_801cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801cb0ULL || rel >= 0x801ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801ce0 size=336 callers=1 calls=1
   calls: sub_802350
*/
void sub_801ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801ce0ULL || rel >= 0x801e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00801e30 size=928 callers=1 calls=2
   calls: sub_7fa9c0, sub_802430
*/
void sub_801e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x801e30ULL || rel >= 0x8021d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008021d0 size=224 callers=1 calls=3
   calls: sub_7fa9c0, sub_802370, sub_802460
*/
void sub_8021d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8021d0ULL || rel >= 0x8022b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008022b0 size=96 callers=0 calls=1
   calls: sub_7fa9c0
*/
void sub_8022b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8022b0ULL || rel >= 0x802310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802310 size=32 callers=2 calls=0
*/
void sub_802310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802310ULL || rel >= 0x802330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802330 size=16 callers=0 calls=0
*/
void sub_802330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802330ULL || rel >= 0x802340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802340 size=16 callers=0 calls=0
*/
void sub_802340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802340ULL || rel >= 0x802350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802350 size=32 callers=22 calls=0
*/
void sub_802350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802350ULL || rel >= 0x802370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802370 size=64 callers=1 calls=0
*/
void sub_802370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802370ULL || rel >= 0x8023b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008023b0 size=128 callers=2 calls=1
   calls: sub_802530
*/
void sub_8023b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8023b0ULL || rel >= 0x802430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802430 size=48 callers=45 calls=0
*/
void sub_802430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802430ULL || rel >= 0x802460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802460 size=16 callers=26 calls=0
*/
void sub_802460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802460ULL || rel >= 0x802470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802470 size=16 callers=7 calls=0
*/
void sub_802470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802470ULL || rel >= 0x802480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802480 size=16 callers=2 calls=0
*/
void sub_802480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802480ULL || rel >= 0x802490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802490 size=16 callers=2 calls=0
*/
void sub_802490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802490ULL || rel >= 0x8024a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008024a0 size=32 callers=1 calls=0
*/
void sub_8024a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8024a0ULL || rel >= 0x8024c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008024c0 size=32 callers=1 calls=1
   calls: sub_7f89e0
*/
void sub_8024c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8024c0ULL || rel >= 0x8024e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008024e0 size=16 callers=2 calls=0
*/
void sub_8024e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8024e0ULL || rel >= 0x8024f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008024f0 size=16 callers=1 calls=0
*/
void sub_8024f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8024f0ULL || rel >= 0x802500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802500 size=16 callers=2 calls=0
*/
void sub_802500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802500ULL || rel >= 0x802510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802510 size=32 callers=2 calls=0
*/
void sub_802510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802510ULL || rel >= 0x802530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802530 size=48 callers=1 calls=0
*/
void sub_802530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802530ULL || rel >= 0x802560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802560 size=32 callers=1 calls=0
*/
void sub_802560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802560ULL || rel >= 0x802580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802580 size=16 callers=1 calls=0
*/
void sub_802580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802580ULL || rel >= 0x802590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802590 size=16 callers=1 calls=0
*/
void sub_802590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802590ULL || rel >= 0x8025a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008025a0 size=48 callers=6 calls=0
*/
void sub_8025a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8025a0ULL || rel >= 0x8025d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008025d0 size=16 callers=0 calls=0
*/
void sub_8025d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8025d0ULL || rel >= 0x8025e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008025e0 size=16 callers=0 calls=0
*/
void sub_8025e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8025e0ULL || rel >= 0x8025f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008025f0 size=16 callers=5 calls=0
*/
void sub_8025f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8025f0ULL || rel >= 0x802600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802600 size=16 callers=5 calls=0
*/
void sub_802600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802600ULL || rel >= 0x802610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802610 size=16 callers=5 calls=0
*/
void sub_802610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802610ULL || rel >= 0x802620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802620 size=16 callers=1 calls=0
*/
void sub_802620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802620ULL || rel >= 0x802630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802630 size=32 callers=0 calls=0
*/
void sub_802630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802630ULL || rel >= 0x802650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802650 size=16 callers=0 calls=0
*/
void sub_802650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802650ULL || rel >= 0x802660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802660 size=16 callers=1 calls=0
*/
void sub_802660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802660ULL || rel >= 0x802670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802670 size=272 callers=1 calls=3
   calls: sub_7ed1e0, sub_7ed1f0, sub_7ef2b0
*/
void sub_802670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802670ULL || rel >= 0x802780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802780 size=240 callers=1 calls=0
*/
void sub_802780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802780ULL || rel >= 0x802870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802870 size=96 callers=1 calls=0
*/
void sub_802870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802870ULL || rel >= 0x8028d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008028d0 size=112 callers=1 calls=1
   calls: sub_802940
*/
void sub_8028d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8028d0ULL || rel >= 0x802940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802940 size=384 callers=1 calls=0
*/
void sub_802940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802940ULL || rel >= 0x802ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802ac0 size=48 callers=1 calls=0
*/
void sub_802ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802ac0ULL || rel >= 0x802af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802af0 size=96 callers=1 calls=1
   calls: sub_7cb490
*/
void sub_802af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802af0ULL || rel >= 0x802b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802b50 size=64 callers=1 calls=0
*/
void sub_802b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802b50ULL || rel >= 0x802b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802b90 size=48 callers=5 calls=0
*/
void sub_802b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802b90ULL || rel >= 0x802bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802bc0 size=80 callers=2 calls=0
*/
void sub_802bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802bc0ULL || rel >= 0x802c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802c10 size=80 callers=1 calls=0
*/
void sub_802c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802c10ULL || rel >= 0x802c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802c60 size=96 callers=1 calls=0
*/
void sub_802c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802c60ULL || rel >= 0x802cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802cc0 size=144 callers=1 calls=2
   calls: sub_7cb490, sub_8034a0
*/
void sub_802cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802cc0ULL || rel >= 0x802d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802d50 size=128 callers=0 calls=0
*/
void sub_802d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802d50ULL || rel >= 0x802dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802dd0 size=32 callers=1 calls=0
*/
void sub_802dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802dd0ULL || rel >= 0x802df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802df0 size=64 callers=1 calls=0
*/
void sub_802df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802df0ULL || rel >= 0x802e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802e30 size=448 callers=1 calls=7
   calls: sub_7cac30, sub_7cad30, sub_7cae30, sub_7cb660, sub_7ed1c0, sub_7ee6b0, sub_7ef2b0
*/
void sub_802e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802e30ULL || rel >= 0x802ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00802ff0 size=144 callers=0 calls=0
*/
void sub_802ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x802ff0ULL || rel >= 0x803080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803080 size=80 callers=0 calls=0
*/
void sub_803080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803080ULL || rel >= 0x8030d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008030d0 size=512 callers=0 calls=3
   calls: sub_7cbf80, sub_7ecc90, sub_7ef380
*/
void sub_8030d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8030d0ULL || rel >= 0x8032d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008032d0 size=192 callers=0 calls=0
*/
void sub_8032d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8032d0ULL || rel >= 0x803390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803390 size=272 callers=5 calls=0
*/
void sub_803390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803390ULL || rel >= 0x8034a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008034a0 size=192 callers=1 calls=0
*/
void sub_8034a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8034a0ULL || rel >= 0x803560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803560 size=160 callers=28 calls=0
*/
void sub_803560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803560ULL || rel >= 0x803600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803600 size=160 callers=11 calls=0
*/
void sub_803600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803600ULL || rel >= 0x8036a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008036a0 size=192 callers=2 calls=0
*/
void sub_8036a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8036a0ULL || rel >= 0x803760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803760 size=48 callers=1 calls=0
*/
void sub_803760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803760ULL || rel >= 0x803790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803790 size=32 callers=6 calls=0
*/
void sub_803790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803790ULL || rel >= 0x8037b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008037b0 size=128 callers=0 calls=0
*/
void sub_8037b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8037b0ULL || rel >= 0x803830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803830 size=48 callers=1 calls=0
*/
void sub_803830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803830ULL || rel >= 0x803860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803860 size=48 callers=1 calls=0
*/
void sub_803860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803860ULL || rel >= 0x803890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803890 size=48 callers=1 calls=0
*/
void sub_803890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803890ULL || rel >= 0x8038c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008038c0 size=112 callers=1 calls=0
*/
void sub_8038c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8038c0ULL || rel >= 0x803930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803930 size=112 callers=2 calls=0
*/
void sub_803930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803930ULL || rel >= 0x8039a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008039a0 size=112 callers=1 calls=0
*/
void sub_8039a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8039a0ULL || rel >= 0x803a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803a10 size=16 callers=1 calls=0
*/
void sub_803a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803a10ULL || rel >= 0x803a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803a20 size=16 callers=1 calls=0
*/
void sub_803a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803a20ULL || rel >= 0x803a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803a30 size=32 callers=1 calls=0
*/
void sub_803a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803a30ULL || rel >= 0x803a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803a50 size=32 callers=20 calls=0
*/
void sub_803a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803a50ULL || rel >= 0x803a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803a70 size=32 callers=12 calls=0
*/
void sub_803a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803a70ULL || rel >= 0x803a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803a90 size=256 callers=2 calls=4
   calls: sub_7ee6b0, sub_7f89e0, sub_803d20, sub_803d60
*/
void sub_803a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803a90ULL || rel >= 0x803b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803b90 size=112 callers=1 calls=2
   calls: sub_7eb420, sub_7eef50
*/
void sub_803b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803b90ULL || rel >= 0x803c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803c00 size=96 callers=2 calls=0
*/
void sub_803c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803c00ULL || rel >= 0x803c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803c60 size=16 callers=638 calls=0
*/
void sub_803c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803c60ULL || rel >= 0x803c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803c70 size=16 callers=13 calls=0
*/
void sub_803c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803c70ULL || rel >= 0x803c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803c80 size=48 callers=1 calls=0
*/
void sub_803c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803c80ULL || rel >= 0x803cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803cb0 size=48 callers=9 calls=0
*/
void sub_803cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803cb0ULL || rel >= 0x803ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803ce0 size=48 callers=2 calls=0
*/
void sub_803ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803ce0ULL || rel >= 0x803d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803d10 size=16 callers=11 calls=0
*/
void sub_803d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803d10ULL || rel >= 0x803d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803d20 size=32 callers=322 calls=0
*/
void sub_803d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803d20ULL || rel >= 0x803d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803d40 size=16 callers=3 calls=0
*/
void sub_803d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803d40ULL || rel >= 0x803d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803d50 size=16 callers=7 calls=0
*/
void sub_803d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803d50ULL || rel >= 0x803d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803d60 size=48 callers=376 calls=0
*/
void sub_803d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803d60ULL || rel >= 0x803d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803d90 size=32 callers=1 calls=0
*/
void sub_803d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803d90ULL || rel >= 0x803db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803db0 size=16 callers=2 calls=0
*/
void sub_803db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803db0ULL || rel >= 0x803dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803dc0 size=16 callers=4 calls=0
*/
void sub_803dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803dc0ULL || rel >= 0x803dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803dd0 size=32 callers=2 calls=0
*/
void sub_803dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803dd0ULL || rel >= 0x803df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803df0 size=16 callers=1 calls=0
*/
void sub_803df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803df0ULL || rel >= 0x803e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803e00 size=16 callers=1 calls=0
*/
void sub_803e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803e00ULL || rel >= 0x803e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803e10 size=16 callers=4 calls=0
*/
void sub_803e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803e10ULL || rel >= 0x803e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803e20 size=16 callers=1 calls=0
*/
void sub_803e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803e20ULL || rel >= 0x803e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803e30 size=16 callers=2 calls=0
*/
void sub_803e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803e30ULL || rel >= 0x803e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803e40 size=176 callers=1 calls=5
   calls: sub_7cb490, sub_7ee6b0, sub_7ee6c0, sub_804200, sub_804480
*/
void sub_803e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803e40ULL || rel >= 0x803ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00803ef0 size=368 callers=5 calls=18
   calls: sub_136b730, sub_7c56e0, sub_7ca170, sub_7ca190, sub_7cac80, sub_7cb490, sub_7ee6b0, sub_7ee6c0, sub_7fe2c0, sub_7fe2e0, sub_7fe340, sub_7ff540
   ... +6 more
*/
void sub_803ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x803ef0ULL || rel >= 0x804060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804060 size=256 callers=1 calls=12
   calls: sub_136b730, sub_7c56e0, sub_7ca170, sub_7ca190, sub_7cac80, sub_7cb490, sub_7ee6b0, sub_7ee6c0, sub_7fe340, sub_7ff540, sub_804200, sub_804480
*/
void sub_804060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804060ULL || rel >= 0x804160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804160 size=32 callers=3 calls=1
   calls: sub_8047c0
*/
void sub_804160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804160ULL || rel >= 0x804180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804180 size=128 callers=0 calls=0
*/
void sub_804180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804180ULL || rel >= 0x804200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804200 size=48 callers=34 calls=0
*/
void sub_804200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804200ULL || rel >= 0x804230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804230 size=592 callers=0 calls=6
   calls: sub_7c5910, sub_7cb2c0, sub_7ed1b0, sub_7ef2b0, sub_7fc450, sub_7fe1d0
*/
void sub_804230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804230ULL || rel >= 0x804480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804480 size=272 callers=52 calls=7
   calls: sub_7cb2c0, sub_7ed1a0, sub_7ed1b0, sub_7ef2b0, sub_7fc430, sub_7fc450, sub_7fe1d0
*/
void sub_804480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804480ULL || rel >= 0x804590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804590 size=16 callers=0 calls=0
*/
void sub_804590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804590ULL || rel >= 0x8045a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008045a0 size=16 callers=0 calls=0
*/
void sub_8045a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8045a0ULL || rel >= 0x8045b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008045b0 size=128 callers=0 calls=0
*/
void sub_8045b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8045b0ULL || rel >= 0x804630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804630 size=208 callers=1 calls=3
   calls: sub_780d40, sub_7eef40, sub_7f3350
*/
void sub_804630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804630ULL || rel >= 0x804700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804700 size=192 callers=2 calls=2
   calls: sub_780d40, sub_780ec0
*/
void sub_804700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804700ULL || rel >= 0x8047c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008047c0 size=80 callers=1 calls=0
*/
void sub_8047c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8047c0ULL || rel >= 0x804810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804810 size=16 callers=2 calls=0
*/
void sub_804810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804810ULL || rel >= 0x804820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804820 size=32 callers=4 calls=0
*/
void sub_804820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804820ULL || rel >= 0x804840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804840 size=128 callers=2 calls=0
*/
void sub_804840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804840ULL || rel >= 0x8048c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008048c0 size=96 callers=15 calls=0
*/
void sub_8048c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8048c0ULL || rel >= 0x804920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804920 size=96 callers=1 calls=0
*/
void sub_804920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804920ULL || rel >= 0x804980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804980 size=48 callers=1 calls=0
*/
void sub_804980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804980ULL || rel >= 0x8049b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008049b0 size=16 callers=0 calls=0
*/
void sub_8049b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8049b0ULL || rel >= 0x8049c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008049c0 size=16 callers=0 calls=0
*/
void sub_8049c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8049c0ULL || rel >= 0x8049d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008049d0 size=256 callers=1 calls=13
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7eb290, sub_7ee6b0, sub_7ef4c0, sub_7ef750, sub_7f89e0, sub_82d990
   ... +1 more
*/
void sub_8049d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8049d0ULL || rel >= 0x804ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804ad0 size=736 callers=12 calls=22
   calls: sub_780c60, sub_780d10, sub_780d40, sub_780d70, sub_7811e0, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e96f0
   ... +10 more
*/
void sub_804ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804ad0ULL || rel >= 0x804db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804db0 size=224 callers=7 calls=8
   calls: sub_780c60, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_804db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804db0ULL || rel >= 0x804e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00804e90 size=368 callers=1 calls=13
   calls: sub_780f00, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7f12d0, sub_7f7a80, sub_7f8040
   ... +1 more
*/
void sub_804e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x804e90ULL || rel >= 0x805000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805000 size=1344 callers=2 calls=25
   calls: sub_7ca1c0, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9720, sub_7e9830, sub_7ee6b0, sub_7ee6c0, sub_7ee810
   ... +13 more
*/
void sub_805000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805000ULL || rel >= 0x805540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805540 size=192 callers=2 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_805540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805540ULL || rel >= 0x805600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805600 size=352 callers=1 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9720, sub_7e9830, sub_7ee6b0, sub_7f7700
*/
void sub_805600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805600ULL || rel >= 0x805760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805760 size=752 callers=1 calls=14
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9720, sub_7e9830, sub_7ecc90, sub_7ee6b0, sub_7eef50, sub_7ef3d0
   ... +2 more
*/
void sub_805760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805760ULL || rel >= 0x805a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805a50 size=656 callers=1 calls=15
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9720, sub_7e9830, sub_7ee6b0, sub_7eef50, sub_7ef3d0, sub_7f0670
   ... +3 more
*/
void sub_805a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805a50ULL || rel >= 0x805ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805ce0 size=224 callers=1 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7f0670
*/
void sub_805ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805ce0ULL || rel >= 0x805dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805dc0 size=128 callers=2 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9680, sub_7e9830, sub_7fe1e0
*/
void sub_805dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805dc0ULL || rel >= 0x805e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805e40 size=160 callers=1 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9680, sub_7e9830
*/
void sub_805e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805e40ULL || rel >= 0x805ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00805ee0 size=336 callers=1 calls=3
   calls: sub_7f05d0, sub_7f7140, sub_806030
*/
void sub_805ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805ee0ULL || rel >= 0x806030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806030 size=640 callers=3 calls=14
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e97b0, sub_7e9830, sub_7ee6b0, sub_7ef4c0, sub_7ef750, sub_7f7130, sub_7f7140
   ... +2 more
*/
void sub_806030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806030ULL || rel >= 0x8062b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008062b0 size=208 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_8062b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8062b0ULL || rel >= 0x806380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806380 size=352 callers=2 calls=10
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e97b0, sub_7e9830, sub_7ee6b0, sub_7ef4c0, sub_7f0670
*/
void sub_806380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806380ULL || rel >= 0x8064e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008064e0 size=176 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_8064e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8064e0ULL || rel >= 0x806590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806590 size=480 callers=1 calls=14
   calls: sub_780da0, sub_781240, sub_781270, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7eef50
   ... +2 more
*/
void sub_806590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806590ULL || rel >= 0x806770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806770 size=160 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_806770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806770ULL || rel >= 0x806810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806810 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_806810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806810ULL || rel >= 0x806880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806880 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_806880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806880ULL || rel >= 0x8068f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008068f0 size=400 callers=1 calls=13
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7eef50, sub_7f7690, sub_7fe250, sub_806a80
   ... +1 more
*/
void sub_8068f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8068f0ULL || rel >= 0x806a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806a80 size=288 callers=2 calls=9
   calls: sub_780e00, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9720, sub_7e9830, sub_7ee6b0
*/
void sub_806a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806a80ULL || rel >= 0x806ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806ba0 size=208 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0
*/
void sub_806ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806ba0ULL || rel >= 0x806c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806c70 size=128 callers=0 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e9680, sub_7ee6b0
*/
void sub_806c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806c70ULL || rel >= 0x806cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806cf0 size=160 callers=1 calls=8
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7ef2b0
*/
void sub_806cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806cf0ULL || rel >= 0x806d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806d90 size=96 callers=2 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_806d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806d90ULL || rel >= 0x806df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806df0 size=80 callers=2 calls=3
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610
*/
void sub_806df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806df0ULL || rel >= 0x806e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806e40 size=208 callers=1 calls=3
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610
*/
void sub_806e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806e40ULL || rel >= 0x806f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00806f10 size=304 callers=2 calls=8
   calls: sub_7810b0, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0
*/
void sub_806f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x806f10ULL || rel >= 0x807040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807040 size=160 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807040ULL || rel >= 0x8070e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008070e0 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_8070e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8070e0ULL || rel >= 0x807150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807150 size=256 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_807150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807150ULL || rel >= 0x807250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807250 size=176 callers=2 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_807250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807250ULL || rel >= 0x807300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807300 size=160 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807300ULL || rel >= 0x8073a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008073a0 size=240 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_8073a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8073a0ULL || rel >= 0x807490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807490 size=160 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807490ULL || rel >= 0x807530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807530 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807530ULL || rel >= 0x8075a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008075a0 size=64 callers=1 calls=2
   calls: sub_7e8f60, sub_7e94d0
*/
void sub_8075a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8075a0ULL || rel >= 0x8075e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008075e0 size=208 callers=0 calls=9
   calls: sub_780d40, sub_780dd0, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0
*/
void sub_8075e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8075e0ULL || rel >= 0x8076b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008076b0 size=352 callers=3 calls=11
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9720, sub_7e9830, sub_7ee6b0, sub_7eef50, sub_7ef6a0, sub_7f7700
*/
void sub_8076b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8076b0ULL || rel >= 0x807810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807810 size=144 callers=1 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0, sub_82d7e0
*/
void sub_807810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807810ULL || rel >= 0x8078a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008078a0 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_8078a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8078a0ULL || rel >= 0x807910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807910 size=128 callers=0 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0, sub_82d7e0
*/
void sub_807910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807910ULL || rel >= 0x807990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807990 size=144 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_807990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807990ULL || rel >= 0x807a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807a20 size=96 callers=2 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0, sub_7ee6b0
*/
void sub_807a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807a20ULL || rel >= 0x807a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807a80 size=192 callers=1 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e97b0, sub_7e9830, sub_7ee6b0, sub_7ef4c0
*/
void sub_807a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807a80ULL || rel >= 0x807b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807b40 size=144 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_807b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807b40ULL || rel >= 0x807bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807bd0 size=96 callers=5 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807bd0ULL || rel >= 0x807c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807c30 size=96 callers=1 calls=4
   calls: sub_7e9050, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807c30ULL || rel >= 0x807c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807c90 size=64 callers=0 calls=2
   calls: sub_7e8f60, sub_7e94d0
*/
void sub_807c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807c90ULL || rel >= 0x807cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807cd0 size=64 callers=4 calls=2
   calls: sub_7e8f60, sub_7e94d0
*/
void sub_807cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807cd0ULL || rel >= 0x807d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807d10 size=96 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807d10ULL || rel >= 0x807d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807d70 size=144 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807d70ULL || rel >= 0x807e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807e00 size=160 callers=1 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_807e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807e00ULL || rel >= 0x807ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807ea0 size=144 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807ea0ULL || rel >= 0x807f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807f30 size=144 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_807f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807f30ULL || rel >= 0x807fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00807fc0 size=240 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_807fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x807fc0ULL || rel >= 0x8080b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008080b0 size=96 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_8080b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8080b0ULL || rel >= 0x808110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808110 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_808110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808110ULL || rel >= 0x808180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808180 size=176 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_808180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808180ULL || rel >= 0x808230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808230 size=160 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_808230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808230ULL || rel >= 0x8082d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008082d0 size=176 callers=1 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e9680, sub_7ee6b0
*/
void sub_8082d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8082d0ULL || rel >= 0x808380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808380 size=320 callers=1 calls=10
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_813110, sub_813270
*/
void sub_808380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808380ULL || rel >= 0x8084c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008084c0 size=160 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_8084c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8084c0ULL || rel >= 0x808560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808560 size=176 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_808560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808560ULL || rel >= 0x808610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808610 size=224 callers=1 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0, sub_813110, sub_813270
*/
void sub_808610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808610ULL || rel >= 0x8086f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008086f0 size=224 callers=1 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0, sub_813110, sub_813270
*/
void sub_8086f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8086f0ULL || rel >= 0x8087d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008087d0 size=176 callers=0 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_8087d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8087d0ULL || rel >= 0x808880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808880 size=528 callers=1 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7e98a0, sub_7ee6b0, sub_803c70, sub_832f10
*/
void sub_808880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808880ULL || rel >= 0x808a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808a90 size=208 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_808a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808a90ULL || rel >= 0x808b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808b60 size=656 callers=2 calls=22
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9720, sub_7e97f0, sub_7e9830, sub_7ee6b0, sub_7eef50, sub_7ef4c0
   ... +10 more
*/
void sub_808b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808b60ULL || rel >= 0x808df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808df0 size=192 callers=1 calls=8
   calls: sub_780e30, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_808df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808df0ULL || rel >= 0x808eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808eb0 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_808eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808eb0ULL || rel >= 0x808f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808f20 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_808f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808f20ULL || rel >= 0x808f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00808f90 size=192 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_808f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808f90ULL || rel >= 0x809050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809050 size=384 callers=3 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_813110, sub_813270
*/
void sub_809050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809050ULL || rel >= 0x8091d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008091d0 size=160 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_8091d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8091d0ULL || rel >= 0x809270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809270 size=304 callers=1 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0, sub_813110, sub_813270
*/
void sub_809270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809270ULL || rel >= 0x8093a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008093a0 size=160 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_8093a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8093a0ULL || rel >= 0x809440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809440 size=176 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_809440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809440ULL || rel >= 0x8094f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008094f0 size=352 callers=3 calls=10
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7eef50, sub_7f7ff0, sub_80d940
*/
void sub_8094f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8094f0ULL || rel >= 0x809650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809650 size=96 callers=0 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_809650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809650ULL || rel >= 0x8096b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008096b0 size=160 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_8096b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8096b0ULL || rel >= 0x809750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809750 size=112 callers=0 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_809750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809750ULL || rel >= 0x8097c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008097c0 size=240 callers=1 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0, sub_813110, sub_813270
*/
void sub_8097c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8097c0ULL || rel >= 0x8098b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008098b0 size=592 callers=6 calls=11
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_813110, sub_813170, sub_8131d0, sub_813270
*/
void sub_8098b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8098b0ULL || rel >= 0x809b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809b00 size=144 callers=0 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_809b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809b00ULL || rel >= 0x809b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809b90 size=144 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_809b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809b90ULL || rel >= 0x809c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809c20 size=160 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_809c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809c20ULL || rel >= 0x809cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809cc0 size=144 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_809cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809cc0ULL || rel >= 0x809d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809d50 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_809d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809d50ULL || rel >= 0x809dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809dc0 size=432 callers=1 calls=14
   calls: sub_780f80, sub_780fb0, sub_780fe0, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7e98a0, sub_7ee6b0
   ... +2 more
*/
void sub_809dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809dc0ULL || rel >= 0x809f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00809f70 size=176 callers=1 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e98a0, sub_7ee6b0
*/
void sub_809f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x809f70ULL || rel >= 0x80a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a020 size=176 callers=1 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e98a0, sub_7ee6b0
*/
void sub_80a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a020ULL || rel >= 0x80a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a0d0 size=176 callers=2 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e98a0, sub_7ee6b0
*/
void sub_80a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a0d0ULL || rel >= 0x80a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a180 size=240 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a180ULL || rel >= 0x80a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a270 size=288 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a270ULL || rel >= 0x80a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a390 size=224 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a390ULL || rel >= 0x80a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a470 size=192 callers=0 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e98a0, sub_7ee6b0
*/
void sub_80a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a470ULL || rel >= 0x80a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a530 size=160 callers=0 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a530ULL || rel >= 0x80a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a5d0 size=144 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a5d0ULL || rel >= 0x80a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a660 size=96 callers=2 calls=4
   calls: sub_7e9050, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a660ULL || rel >= 0x80a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a6c0 size=288 callers=1 calls=10
   calls: sub_781130, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7f7690
*/
void sub_80a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a6c0ULL || rel >= 0x80a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a7e0 size=144 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a7e0ULL || rel >= 0x80a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a870 size=224 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a870ULL || rel >= 0x80a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a950 size=160 callers=2 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0
*/
void sub_80a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a950ULL || rel >= 0x80a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080a9f0 size=176 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7f8990, sub_7f8ab0
*/
void sub_80a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80a9f0ULL || rel >= 0x80aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080aaa0 size=112 callers=1 calls=3
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610
*/
void sub_80aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80aaa0ULL || rel >= 0x80ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ab10 size=160 callers=1 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9830, sub_7ee6b0
*/
void sub_80ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ab10ULL || rel >= 0x80abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080abb0 size=112 callers=1 calls=3
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610
*/
void sub_80abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80abb0ULL || rel >= 0x80ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ac20 size=368 callers=0 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e9680, sub_7ee6b0
*/
void sub_80ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ac20ULL || rel >= 0x80ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ad90 size=384 callers=1 calls=11
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_813110, sub_813270, sub_813280
*/
void sub_80ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ad90ULL || rel >= 0x80af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080af10 size=96 callers=2 calls=3
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610
*/
void sub_80af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80af10ULL || rel >= 0x80af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080af70 size=176 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0
*/
void sub_80af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80af70ULL || rel >= 0x80b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b020 size=208 callers=1 calls=8
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b020ULL || rel >= 0x80b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b0f0 size=80 callers=1 calls=3
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0
*/
void sub_80b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b0f0ULL || rel >= 0x80b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b140 size=80 callers=1 calls=3
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0
*/
void sub_80b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b140ULL || rel >= 0x80b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b190 size=96 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0, sub_7ee6b0
*/
void sub_80b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b190ULL || rel >= 0x80b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b1f0 size=160 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b1f0ULL || rel >= 0x80b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b290 size=256 callers=1 calls=8
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b290ULL || rel >= 0x80b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b390 size=160 callers=1 calls=8
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7ef300
*/
void sub_80b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b390ULL || rel >= 0x80b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b430 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0, sub_7ee6b0
*/
void sub_80b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b430ULL || rel >= 0x80b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b4a0 size=240 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0
*/
void sub_80b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b4a0ULL || rel >= 0x80b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b590 size=128 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b590ULL || rel >= 0x80b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b610 size=208 callers=1 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7e98a0, sub_7ee6b0, sub_803c70
*/
void sub_80b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b610ULL || rel >= 0x80b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b6e0 size=144 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b6e0ULL || rel >= 0x80b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b770 size=416 callers=1 calls=10
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_812dc0, sub_813110, sub_813270
*/
void sub_80b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b770ULL || rel >= 0x80b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b910 size=208 callers=1 calls=8
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_813110
*/
void sub_80b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b910ULL || rel >= 0x80b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080b9e0 size=160 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80b9e0ULL || rel >= 0x80ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ba80 size=400 callers=1 calls=10
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7e98a0, sub_7ee6b0, sub_813110, sub_813270
*/
void sub_80ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ba80ULL || rel >= 0x80bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080bc10 size=96 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80bc10ULL || rel >= 0x80bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080bc70 size=96 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80bc70ULL || rel >= 0x80bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080bcd0 size=272 callers=1 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_813110, sub_813270
*/
void sub_80bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80bcd0ULL || rel >= 0x80bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080bde0 size=288 callers=1 calls=8
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7f0b30
*/
void sub_80bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80bde0ULL || rel >= 0x80bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080bf00 size=208 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80bf00ULL || rel >= 0x80bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080bfd0 size=128 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80bfd0ULL || rel >= 0x80c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c050 size=176 callers=1 calls=8
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_805540
*/
void sub_80c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c050ULL || rel >= 0x80c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c100 size=208 callers=1 calls=8
   calls: sub_7e9050, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_805540
*/
void sub_80c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c100ULL || rel >= 0x80c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c1d0 size=144 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c1d0ULL || rel >= 0x80c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c260 size=160 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c260ULL || rel >= 0x80c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c300 size=448 callers=1 calls=9
   calls: sub_780e60, sub_7e8f60, sub_7e94d0, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7f7f30
*/
void sub_80c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c300ULL || rel >= 0x80c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c4c0 size=288 callers=1 calls=9
   calls: sub_780e90, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c4c0ULL || rel >= 0x80c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c5e0 size=208 callers=1 calls=9
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0, sub_7f7690
*/
void sub_80c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c5e0ULL || rel >= 0x80c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c6b0 size=96 callers=0 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e95a0, sub_7ee6b0
*/
void sub_80c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c6b0ULL || rel >= 0x80c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c710 size=304 callers=1 calls=10
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9720, sub_7e97b0, sub_7e9830, sub_7ee6b0, sub_7f7720
*/
void sub_80c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c710ULL || rel >= 0x80c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c840 size=144 callers=0 calls=5
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e9680, sub_7e9830
*/
void sub_80c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c840ULL || rel >= 0x80c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c8d0 size=272 callers=1 calls=11
   calls: sub_7811b0, sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0, sub_7eef50, sub_7f7700, sub_7f7740
*/
void sub_80c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c8d0ULL || rel >= 0x80c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080c9e0 size=160 callers=2 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c9e0ULL || rel >= 0x80ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ca80 size=96 callers=0 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ca80ULL || rel >= 0x80cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080cae0 size=112 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80cae0ULL || rel >= 0x80cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080cb50 size=96 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80cb50ULL || rel >= 0x80cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080cbb0 size=208 callers=3 calls=5
   calls: sub_7e8f60, sub_7e9050, sub_7e94d0, sub_7e9510, sub_7e9610
*/
void sub_80cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80cbb0ULL || rel >= 0x80cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080cc80 size=160 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7e98a0
*/
void sub_80cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80cc80ULL || rel >= 0x80cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080cd20 size=64 callers=1 calls=2
   calls: sub_7e8f60, sub_7e94d0
*/
void sub_80cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80cd20ULL || rel >= 0x80cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080cd60 size=176 callers=2 calls=6
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830
*/
void sub_80cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80cd60ULL || rel >= 0x80ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ce10 size=128 callers=1 calls=3
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610
*/
void sub_80ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ce10ULL || rel >= 0x80ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ce90 size=192 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ce90ULL || rel >= 0x80cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080cf50 size=144 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80cf50ULL || rel >= 0x80cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080cfe0 size=256 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e95a0, sub_7e9610, sub_7e9830, sub_7ee6b0
*/
void sub_80cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80cfe0ULL || rel >= 0x80d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d0e0 size=176 callers=1 calls=4
   calls: sub_7e8f60, sub_7e94d0, sub_7e9610, sub_7ee6b0
*/
void sub_80d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d0e0ULL || rel >= 0x80d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d190 size=144 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9720, sub_7e9830, sub_7ee6b0
*/
void sub_80d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d190ULL || rel >= 0x80d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d220 size=160 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d220ULL || rel >= 0x80d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d2c0 size=224 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d2c0ULL || rel >= 0x80d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d3a0 size=144 callers=1 calls=7
   calls: sub_7e8f60, sub_7e94d0, sub_7e9510, sub_7e9610, sub_7e9680, sub_7e9830, sub_7ee6b0
*/
void sub_80d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d3a0ULL || rel >= 0x80d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d430 size=128 callers=0 calls=0
*/
void sub_80d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d430ULL || rel >= 0x80d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d4b0 size=144 callers=2 calls=5
   calls: sub_7c56e0, sub_7ca1c0, sub_7ed1b0, sub_7fc2f0, sub_7fe1d0
*/
void sub_80d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d4b0ULL || rel >= 0x80d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d540 size=144 callers=0 calls=8
   calls: sub_7e7b50, sub_7ed1b0, sub_7ed5e0, sub_7ef2b0, sub_7fc2f0, sub_7fe1d0, sub_7fe300, sub_801890
*/
void sub_80d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d540ULL || rel >= 0x80d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d5d0 size=304 callers=0 calls=3
   calls: sub_7c5910, sub_7cac80, sub_80d700
*/
void sub_80d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d5d0ULL || rel >= 0x80d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d700 size=496 callers=5 calls=5
   calls: sub_7c5910, sub_7cac80, sub_7ed1b0, sub_7fc2f0, sub_7fe1d0
*/
void sub_80d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d700ULL || rel >= 0x80d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d8f0 size=32 callers=0 calls=1
   calls: sub_7ca1c0
*/
void sub_80d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d8f0ULL || rel >= 0x80d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d910 size=48 callers=0 calls=0
*/
void sub_80d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d910ULL || rel >= 0x80d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d940 size=16 callers=5 calls=0
*/
void sub_80d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d940ULL || rel >= 0x80d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d950 size=48 callers=0 calls=1
   calls: sub_7ee6b0
*/
void sub_80d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d950ULL || rel >= 0x80d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d980 size=64 callers=0 calls=3
   calls: sub_7cb490, sub_7cb850, sub_7ee6b0
*/
void sub_80d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d980ULL || rel >= 0x80d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080d9c0 size=304 callers=2 calls=5
   calls: sub_7ee6b0, sub_7eef50, sub_7ef4c0, sub_7ef710, sub_8036a0
*/
void sub_80d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d9c0ULL || rel >= 0x80daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080daf0 size=64 callers=0 calls=1
   calls: sub_780c60
*/
void sub_80daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80daf0ULL || rel >= 0x80db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080db30 size=160 callers=0 calls=4
   calls: sub_7ef4c0, sub_7ef750, sub_7f0160, sub_7f89e0
*/
void sub_80db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80db30ULL || rel >= 0x80dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080dbd0 size=208 callers=10 calls=4
   calls: sub_7c56e0, sub_7fe320, sub_7feb80, sub_80d4b0
*/
void sub_80dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80dbd0ULL || rel >= 0x80dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080dca0 size=128 callers=0 calls=0
*/
void sub_80dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80dca0ULL || rel >= 0x80dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080dd20 size=64 callers=1 calls=0
*/
void sub_80dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80dd20ULL || rel >= 0x80dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080dd60 size=272 callers=43 calls=10
   calls: sub_803d40, sub_803d50, sub_803db0, sub_803dc0, sub_803df0, sub_803e00, sub_80de70, sub_80df50, sub_80e030, sub_80e0e0
*/
void sub_80dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80dd60ULL || rel >= 0x80de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080de70 size=224 callers=2 calls=1
   calls: sub_816320
*/
void sub_80de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80de70ULL || rel >= 0x80df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080df50 size=224 callers=1 calls=1
   calls: sub_816320
*/
void sub_80df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80df50ULL || rel >= 0x80e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e030 size=176 callers=1 calls=0
*/
void sub_80e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e030ULL || rel >= 0x80e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e0e0 size=176 callers=1 calls=0
*/
void sub_80e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e0e0ULL || rel >= 0x80e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e190 size=32 callers=8 calls=0
*/
void sub_80e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e190ULL || rel >= 0x80e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e1b0 size=32 callers=15 calls=0
*/
void sub_80e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e1b0ULL || rel >= 0x80e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e1d0 size=32 callers=2 calls=0
*/
void sub_80e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e1d0ULL || rel >= 0x80e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e1f0 size=64 callers=9 calls=1
   calls: sub_7ee6b0
*/
void sub_80e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e1f0ULL || rel >= 0x80e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e230 size=32 callers=12 calls=0
*/
void sub_80e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e230ULL || rel >= 0x80e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e250 size=32 callers=5 calls=0
*/
void sub_80e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e250ULL || rel >= 0x80e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e270 size=48 callers=3 calls=0
*/
void sub_80e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e270ULL || rel >= 0x80e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e2a0 size=48 callers=1 calls=0
*/
void sub_80e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e2a0ULL || rel >= 0x80e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e2d0 size=64 callers=1 calls=0
*/
void sub_80e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e2d0ULL || rel >= 0x80e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e310 size=1296 callers=2 calls=7
   calls: sub_7ee6b0, sub_80d940, sub_812bd0, sub_812bf0, sub_812c50, sub_8150c0, sub_816320
*/
void sub_80e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e310ULL || rel >= 0x80e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e820 size=32 callers=13 calls=0
*/
void sub_80e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e820ULL || rel >= 0x80e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e840 size=64 callers=2 calls=1
   calls: sub_7ee6b0
*/
void sub_80e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e840ULL || rel >= 0x80e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e880 size=96 callers=1 calls=3
   calls: sub_7cb490, sub_7ee6b0, sub_816320
*/
void sub_80e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e880ULL || rel >= 0x80e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e8e0 size=64 callers=1 calls=1
   calls: sub_7ee6b0
*/
void sub_80e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e8e0ULL || rel >= 0x80e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080e920 size=912 callers=3 calls=6
   calls: sub_7cc1b0, sub_7ee6b0, sub_7ef5d0, sub_7f7690, sub_8150c0, sub_816320
*/
void sub_80e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e920ULL || rel >= 0x80ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ecb0 size=64 callers=1 calls=2
   calls: sub_7cb490, sub_7ee6b0
*/
void sub_80ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ecb0ULL || rel >= 0x80ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ecf0 size=416 callers=1 calls=2
   calls: sub_7ee6b0, sub_803c00
*/
void sub_80ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ecf0ULL || rel >= 0x80ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ee90 size=64 callers=24 calls=0
*/
void sub_80ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ee90ULL || rel >= 0x80eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080eed0 size=128 callers=1 calls=3
   calls: sub_7f8ba0, sub_8150c0, sub_8170d0
*/
void sub_80eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80eed0ULL || rel >= 0x80ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ef50 size=96 callers=1 calls=3
   calls: sub_7f8ba0, sub_8150c0, sub_817100
*/
void sub_80ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ef50ULL || rel >= 0x80efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080efb0 size=80 callers=0 calls=2
   calls: sub_8150c0, sub_817130
*/
void sub_80efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80efb0ULL || rel >= 0x80f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f000 size=80 callers=9 calls=2
   calls: sub_8150c0, sub_817160
*/
void sub_80f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f000ULL || rel >= 0x80f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f050 size=80 callers=1 calls=1
   calls: sub_817190
*/
void sub_80f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f050ULL || rel >= 0x80f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f0a0 size=96 callers=0 calls=3
   calls: sub_7ee6b0, sub_8150c0, sub_8171c0
*/
void sub_80f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f0a0ULL || rel >= 0x80f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f100 size=160 callers=2 calls=5
   calls: sub_7f8ba0, sub_7fa9c0, sub_7fe210, sub_8023b0, sub_8150c0
*/
void sub_80f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f100ULL || rel >= 0x80f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f1a0 size=144 callers=3 calls=4
   calls: sub_7fa9c0, sub_7fe210, sub_802430, sub_8150c0
*/
void sub_80f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f1a0ULL || rel >= 0x80f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f230 size=80 callers=2 calls=2
   calls: sub_7fe210, sub_802500
*/
void sub_80f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f230ULL || rel >= 0x80f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f280 size=112 callers=22 calls=2
   calls: sub_8150c0, sub_8171f0
*/
void sub_80f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f280ULL || rel >= 0x80f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f2f0 size=128 callers=1 calls=3
   calls: sub_7fe230, sub_801780, sub_8150c0
*/
void sub_80f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f2f0ULL || rel >= 0x80f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f370 size=112 callers=7 calls=3
   calls: sub_7ee6b0, sub_7fe250, sub_803600
*/
void sub_80f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f370ULL || rel >= 0x80f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f3e0 size=48 callers=1 calls=0
*/
void sub_80f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f3e0ULL || rel >= 0x80f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f410 size=96 callers=6 calls=1
   calls: sub_7c9b60
*/
void sub_80f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f410ULL || rel >= 0x80f470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f470 size=32 callers=3 calls=0
*/
void sub_80f470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f470ULL || rel >= 0x80f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f490 size=144 callers=1 calls=4
   calls: sub_7ee6b0, sub_7fe250, sub_803600, sub_8150c0
*/
void sub_80f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f490ULL || rel >= 0x80f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f520 size=160 callers=1 calls=5
   calls: sub_7ee6b0, sub_7ef710, sub_7fe250, sub_803600, sub_8150c0
*/
void sub_80f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f520ULL || rel >= 0x80f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f5c0 size=96 callers=1 calls=3
   calls: sub_786d90, sub_7ee6b0, sub_7f09c0
*/
void sub_80f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f5c0ULL || rel >= 0x80f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f620 size=64 callers=0 calls=1
   calls: sub_7ee6b0
*/
void sub_80f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f620ULL || rel >= 0x80f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f660 size=96 callers=1 calls=1
   calls: sub_816ff0
*/
void sub_80f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f660ULL || rel >= 0x80f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f6c0 size=112 callers=5 calls=2
   calls: sub_7ee6b0, sub_816960
*/
void sub_80f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f6c0ULL || rel >= 0x80f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f730 size=112 callers=5 calls=2
   calls: sub_7ee6b0, sub_8169e0
*/
void sub_80f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f730ULL || rel >= 0x80f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f7a0 size=112 callers=5 calls=2
   calls: sub_7ee6b0, sub_816a20
*/
void sub_80f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f7a0ULL || rel >= 0x80f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f810 size=112 callers=2 calls=2
   calls: sub_7ee6b0, sub_816a60
*/
void sub_80f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f810ULL || rel >= 0x80f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f880 size=128 callers=3 calls=2
   calls: sub_7ee6b0, sub_816aa0
*/
void sub_80f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f880ULL || rel >= 0x80f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f900 size=112 callers=1 calls=3
   calls: sub_7ee6b0, sub_7f0ba0, sub_7f26e0
*/
void sub_80f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f900ULL || rel >= 0x80f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f970 size=80 callers=1 calls=1
   calls: sub_816b40
*/
void sub_80f970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f970ULL || rel >= 0x80f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080f9c0 size=80 callers=2 calls=1
   calls: sub_816b40
*/
void sub_80f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f9c0ULL || rel >= 0x80fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080fa10 size=64 callers=1 calls=1
   calls: sub_816b90
*/
void sub_80fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fa10ULL || rel >= 0x80fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080fa50 size=64 callers=1 calls=1
   calls: sub_816bc0
*/
void sub_80fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fa50ULL || rel >= 0x80fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080fa90 size=96 callers=1 calls=2
   calls: sub_7ee6b0, sub_816e00
*/
void sub_80fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fa90ULL || rel >= 0x80faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080faf0 size=96 callers=1 calls=2
   calls: sub_7ee6b0, sub_816e40
*/
void sub_80faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80faf0ULL || rel >= 0x80fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080fb50 size=64 callers=2 calls=1
   calls: sub_816e80
*/
void sub_80fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fb50ULL || rel >= 0x80fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080fb90 size=288 callers=4 calls=6
   calls: sub_7ee6b0, sub_7f13e0, sub_7fe250, sub_803600, sub_8150c0, sub_816c00
*/
void sub_80fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fb90ULL || rel >= 0x80fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080fcb0 size=160 callers=2 calls=2
   calls: sub_7ee6b0, sub_816c00
*/
void sub_80fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fcb0ULL || rel >= 0x80fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080fd50 size=176 callers=1 calls=6
   calls: sub_7ee6b0, sub_7ef750, sub_7f8b70, sub_80fb90, sub_8150c0, sub_816320
*/
void sub_80fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fd50ULL || rel >= 0x80fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080fe00 size=176 callers=1 calls=4
   calls: sub_7ee6b0, sub_7ef2b0, sub_7f13d0, sub_8150c0
*/
void sub_80fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fe00ULL || rel >= 0x80feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080feb0 size=96 callers=1 calls=2
   calls: sub_7ee6b0, sub_816cb0
*/
void sub_80feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80feb0ULL || rel >= 0x80ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ff10 size=144 callers=1 calls=3
   calls: sub_7ee6b0, sub_7f02d0, sub_7f0320
*/
void sub_80ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ff10ULL || rel >= 0x80ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0080ffa0 size=208 callers=3 calls=5
   calls: sub_7ee6b0, sub_7f1490, sub_7f88c0, sub_7f8ba0, sub_8150c0
*/
void sub_80ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ffa0ULL || rel >= 0x810070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810070 size=256 callers=1 calls=7
   calls: sub_7ee6b0, sub_7ef750, sub_7fe250, sub_803600, sub_8150c0, sub_816eb0, sub_816ee0
*/
void sub_810070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810070ULL || rel >= 0x810170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810170 size=144 callers=1 calls=2
   calls: sub_7ee6b0, sub_816f20
*/
void sub_810170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810170ULL || rel >= 0x810200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810200 size=592 callers=1 calls=5
   calls: sub_7ee6b0, sub_7f0e50, sub_7f0f30, sub_8150c0, sub_817b70
*/
void sub_810200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810200ULL || rel >= 0x810450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810450 size=112 callers=2 calls=2
   calls: sub_7ee6b0, sub_817bb0
*/
void sub_810450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810450ULL || rel >= 0x8104c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008104c0 size=16 callers=2 calls=0
*/
void sub_8104c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8104c0ULL || rel >= 0x8104d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008104d0 size=80 callers=4 calls=1
   calls: sub_8174f0
*/
void sub_8104d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8104d0ULL || rel >= 0x810520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810520 size=224 callers=0 calls=3
   calls: sub_7ee6b0, sub_8150c0, sub_816f90
*/
void sub_810520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810520ULL || rel >= 0x810600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810600 size=80 callers=1 calls=1
   calls: sub_8173b0
*/
void sub_810600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810600ULL || rel >= 0x810650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810650 size=96 callers=1 calls=2
   calls: sub_8150c0, sub_817410
*/
void sub_810650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810650ULL || rel >= 0x8106b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008106b0 size=80 callers=1 calls=1
   calls: sub_817460
*/
void sub_8106b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8106b0ULL || rel >= 0x810700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810700 size=80 callers=1 calls=1
   calls: sub_8174b0
*/
void sub_810700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810700ULL || rel >= 0x810750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810750 size=80 callers=5 calls=1
   calls: sub_8175a0
*/
void sub_810750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810750ULL || rel >= 0x8107a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008107a0 size=80 callers=1 calls=1
   calls: sub_8175f0
*/
void sub_8107a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8107a0ULL || rel >= 0x8107f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008107f0 size=64 callers=1 calls=1
   calls: sub_817770
*/
void sub_8107f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8107f0ULL || rel >= 0x810830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810830 size=64 callers=1 calls=1
   calls: sub_8177b0
*/
void sub_810830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810830ULL || rel >= 0x810870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810870 size=80 callers=1 calls=1
   calls: sub_8177f0
*/
void sub_810870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810870ULL || rel >= 0x8108c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008108c0 size=64 callers=1 calls=1
   calls: sub_817830
*/
void sub_8108c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8108c0ULL || rel >= 0x810900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810900 size=80 callers=1 calls=1
   calls: sub_817860
*/
void sub_810900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810900ULL || rel >= 0x810950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810950 size=64 callers=1 calls=1
   calls: sub_8178c0
*/
void sub_810950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810950ULL || rel >= 0x810990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810990 size=80 callers=1 calls=1
   calls: sub_817910
*/
void sub_810990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810990ULL || rel >= 0x8109e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008109e0 size=144 callers=1 calls=2
   calls: sub_8150c0, sub_817980
*/
void sub_8109e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8109e0ULL || rel >= 0x810a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810a70 size=32 callers=6 calls=0
*/
void sub_810a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810a70ULL || rel >= 0x810a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810a90 size=80 callers=14 calls=1
   calls: sub_7ee6b0
*/
void sub_810a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810a90ULL || rel >= 0x810ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810ae0 size=32 callers=7 calls=0
*/
void sub_810ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810ae0ULL || rel >= 0x810b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810b00 size=80 callers=12 calls=1
   calls: sub_7ee6b0
*/
void sub_810b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810b00ULL || rel >= 0x810b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810b50 size=80 callers=2 calls=3
   calls: sub_7ee6b0, sub_7f29c0, sub_7f29d0
*/
void sub_810b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810b50ULL || rel >= 0x810ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810ba0 size=64 callers=1 calls=1
   calls: sub_7ee6b0
*/
void sub_810ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810ba0ULL || rel >= 0x810be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810be0 size=304 callers=0 calls=6
   calls: sub_812cf0, sub_812dd0, sub_812e90, sub_8150c0, sub_816500, sub_831030
*/
void sub_810be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810be0ULL || rel >= 0x810d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810d10 size=112 callers=2 calls=1
   calls: sub_8150c0
*/
void sub_810d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810d10ULL || rel >= 0x810d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810d80 size=160 callers=1 calls=5
   calls: sub_780d40, sub_7cb420, sub_7ee6b0, sub_7fe1d0, sub_8150c0
*/
void sub_810d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810d80ULL || rel >= 0x810e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810e20 size=400 callers=1 calls=5
   calls: sub_7ee6b0, sub_8150c0, sub_8168e0, sub_816910, sub_816c00
*/
void sub_810e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810e20ULL || rel >= 0x810fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00810fb0 size=192 callers=1 calls=5
   calls: sub_7ecc90, sub_7ee6b0, sub_7fe1d0, sub_80dd60, sub_8150c0
*/
void sub_810fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810fb0ULL || rel >= 0x811070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811070 size=64 callers=1 calls=1
   calls: sub_817c80
*/
void sub_811070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811070ULL || rel >= 0x8110b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008110b0 size=64 callers=1 calls=1
   calls: sub_817ce0
*/
void sub_8110b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8110b0ULL || rel >= 0x8110f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008110f0 size=80 callers=1 calls=1
   calls: sub_817d10
*/
void sub_8110f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8110f0ULL || rel >= 0x811140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811140 size=80 callers=1 calls=1
   calls: sub_817d40
*/
void sub_811140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811140ULL || rel >= 0x811190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811190 size=80 callers=5 calls=1
   calls: sub_816f60
*/
void sub_811190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811190ULL || rel >= 0x8111e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008111e0 size=96 callers=1 calls=1
   calls: sub_7ee6b0
*/
void sub_8111e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8111e0ULL || rel >= 0x811240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811240 size=144 callers=1 calls=2
   calls: sub_8150c0, sub_8172b0
*/
void sub_811240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811240ULL || rel >= 0x8112d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008112d0 size=80 callers=1 calls=1
   calls: sub_817370
*/
void sub_8112d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8112d0ULL || rel >= 0x811320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811320 size=80 callers=1 calls=2
   calls: sub_8150c0, sub_8179f0
*/
void sub_811320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811320ULL || rel >= 0x811370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811370 size=80 callers=1 calls=2
   calls: sub_8150c0, sub_817a20
*/
void sub_811370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811370ULL || rel >= 0x8113c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008113c0 size=64 callers=1 calls=1
   calls: sub_817a50
*/
void sub_8113c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8113c0ULL || rel >= 0x811400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811400 size=176 callers=1 calls=2
   calls: sub_8150c0, sub_817a80
*/
void sub_811400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811400ULL || rel >= 0x8114b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008114b0 size=112 callers=1 calls=1
   calls: sub_817bf0
*/
void sub_8114b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8114b0ULL || rel >= 0x811520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811520 size=48 callers=2 calls=1
   calls: sub_817c40
*/
void sub_811520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811520ULL || rel >= 0x811550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811550 size=16 callers=2 calls=0
*/
void sub_811550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811550ULL || rel >= 0x811560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811560 size=64 callers=1 calls=2
   calls: sub_8150c0, sub_817c60
*/
void sub_811560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811560ULL || rel >= 0x8115a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008115a0 size=320 callers=2 calls=3
   calls: sub_7c5910, sub_8150c0, sub_817d70
*/
void sub_8115a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8115a0ULL || rel >= 0x8116e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008116e0 size=80 callers=1 calls=2
   calls: sub_7c5910, sub_817d70
*/
void sub_8116e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8116e0ULL || rel >= 0x811730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811730 size=64 callers=1 calls=1
   calls: sub_817db0
*/
void sub_811730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811730ULL || rel >= 0x811770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811770 size=16 callers=1 calls=0
*/
void sub_811770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811770ULL || rel >= 0x811780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811780 size=80 callers=1 calls=1
   calls: sub_817630
*/
void sub_811780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811780ULL || rel >= 0x8117d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008117d0 size=32 callers=1 calls=0
*/
void sub_8117d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8117d0ULL || rel >= 0x8117f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008117f0 size=112 callers=0 calls=1
   calls: sub_817710
*/
void sub_8117f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8117f0ULL || rel >= 0x811860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811860 size=80 callers=1 calls=1
   calls: sub_816d40
*/
void sub_811860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811860ULL || rel >= 0x8118b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008118b0 size=80 callers=1 calls=1
   calls: sub_816da0
*/
void sub_8118b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8118b0ULL || rel >= 0x811900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811900 size=80 callers=1 calls=1
   calls: sub_816d00
*/
void sub_811900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811900ULL || rel >= 0x811950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811950 size=64 callers=1 calls=1
   calls: sub_817e60
*/
void sub_811950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811950ULL || rel >= 0x811990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811990 size=80 callers=1 calls=1
   calls: sub_817e90
*/
void sub_811990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811990ULL || rel >= 0x8119e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008119e0 size=64 callers=1 calls=1
   calls: sub_817ed0
*/
void sub_8119e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8119e0ULL || rel >= 0x811a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811a20 size=64 callers=0 calls=1
   calls: sub_817f00
*/
void sub_811a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811a20ULL || rel >= 0x811a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811a60 size=64 callers=1 calls=1
   calls: sub_817f30
*/
void sub_811a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811a60ULL || rel >= 0x811aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811aa0 size=80 callers=0 calls=1
   calls: sub_817f60
*/
void sub_811aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811aa0ULL || rel >= 0x811af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811af0 size=80 callers=0 calls=1
   calls: sub_8150c0
*/
void sub_811af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811af0ULL || rel >= 0x811b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811b40 size=64 callers=1 calls=1
   calls: sub_817fa0
*/
void sub_811b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811b40ULL || rel >= 0x811b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811b80 size=80 callers=1 calls=1
   calls: sub_818040
*/
void sub_811b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811b80ULL || rel >= 0x811bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811bd0 size=64 callers=1 calls=1
   calls: sub_818080
*/
void sub_811bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811bd0ULL || rel >= 0x811c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811c10 size=64 callers=1 calls=1
   calls: sub_8180c0
*/
void sub_811c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811c10ULL || rel >= 0x811c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811c50 size=64 callers=2 calls=1
   calls: sub_818100
*/
void sub_811c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811c50ULL || rel >= 0x811c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811c90 size=48 callers=1 calls=1
   calls: sub_817de0
*/
void sub_811c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811c90ULL || rel >= 0x811cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811cc0 size=64 callers=5 calls=1
   calls: sub_817e00
*/
void sub_811cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811cc0ULL || rel >= 0x811d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811d00 size=64 callers=1 calls=1
   calls: sub_817e30
*/
void sub_811d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811d00ULL || rel >= 0x811d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811d40 size=16 callers=0 calls=0
*/
void sub_811d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811d40ULL || rel >= 0x811d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811d50 size=64 callers=1 calls=1
   calls: sub_818140
*/
void sub_811d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811d50ULL || rel >= 0x811d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811d90 size=64 callers=3 calls=1
   calls: sub_818170
*/
void sub_811d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811d90ULL || rel >= 0x811dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811dd0 size=64 callers=1 calls=1
   calls: sub_8181a0
*/
void sub_811dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811dd0ULL || rel >= 0x811e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811e10 size=64 callers=1 calls=1
   calls: sub_8181d0
*/
void sub_811e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811e10ULL || rel >= 0x811e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811e50 size=64 callers=1 calls=1
   calls: sub_8181f0
*/
void sub_811e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811e50ULL || rel >= 0x811e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811e90 size=80 callers=1 calls=2
   calls: sub_8150c0, sub_818210
*/
void sub_811e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811e90ULL || rel >= 0x811ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811ee0 size=64 callers=0 calls=1
   calls: sub_818240
*/
void sub_811ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811ee0ULL || rel >= 0x811f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811f20 size=32 callers=0 calls=0
*/
void sub_811f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811f20ULL || rel >= 0x811f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811f40 size=80 callers=0 calls=1
   calls: sub_8182e0
*/
void sub_811f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811f40ULL || rel >= 0x811f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811f90 size=16 callers=1 calls=0
*/
void sub_811f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811f90ULL || rel >= 0x811fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811fa0 size=16 callers=0 calls=0
*/
void sub_811fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811fa0ULL || rel >= 0x811fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811fb0 size=16 callers=1 calls=0
*/
void sub_811fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811fb0ULL || rel >= 0x811fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811fc0 size=32 callers=1 calls=0
*/
void sub_811fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811fc0ULL || rel >= 0x811fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00811fe0 size=32 callers=6 calls=0
*/
void sub_811fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811fe0ULL || rel >= 0x812000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812000 size=16 callers=1 calls=0
*/
void sub_812000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812000ULL || rel >= 0x812010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812010 size=16 callers=3 calls=0
*/
void sub_812010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812010ULL || rel >= 0x812020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812020 size=32 callers=2 calls=0
*/
void sub_812020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812020ULL || rel >= 0x812040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812040 size=64 callers=1 calls=0
*/
void sub_812040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812040ULL || rel >= 0x812080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812080 size=16 callers=1 calls=0
*/
void sub_812080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812080ULL || rel >= 0x812090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812090 size=16 callers=2 calls=0
*/
void sub_812090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812090ULL || rel >= 0x8120a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008120a0 size=32 callers=4 calls=0
*/
void sub_8120a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8120a0ULL || rel >= 0x8120c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008120c0 size=16 callers=3 calls=0
*/
void sub_8120c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8120c0ULL || rel >= 0x8120d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008120d0 size=32 callers=0 calls=0
*/
void sub_8120d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8120d0ULL || rel >= 0x8120f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008120f0 size=32 callers=1 calls=0
*/
void sub_8120f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8120f0ULL || rel >= 0x812110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812110 size=80 callers=1 calls=1
   calls: sub_817540
*/
void sub_812110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812110ULL || rel >= 0x812160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812160 size=48 callers=1 calls=0
*/
void sub_812160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812160ULL || rel >= 0x812190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812190 size=32 callers=1 calls=0
*/
void sub_812190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812190ULL || rel >= 0x8121b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008121b0 size=32 callers=1 calls=0
*/
void sub_8121b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8121b0ULL || rel >= 0x8121d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008121d0 size=16 callers=0 calls=0
*/
void sub_8121d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8121d0ULL || rel >= 0x8121e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008121e0 size=96 callers=1 calls=1
   calls: sub_8150c0
*/
void sub_8121e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8121e0ULL || rel >= 0x812240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812240 size=32 callers=2 calls=0
*/
void sub_812240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812240ULL || rel >= 0x812260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812260 size=32 callers=1 calls=0
*/
void sub_812260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812260ULL || rel >= 0x812280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812280 size=48 callers=1 calls=0
*/
void sub_812280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812280ULL || rel >= 0x8122b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008122b0 size=32 callers=1 calls=0
*/
void sub_8122b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8122b0ULL || rel >= 0x8122d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008122d0 size=16 callers=1 calls=0
*/
void sub_8122d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8122d0ULL || rel >= 0x8122e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008122e0 size=80 callers=1 calls=1
   calls: sub_8150c0
*/
void sub_8122e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8122e0ULL || rel >= 0x812330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812330 size=16 callers=1 calls=0
*/
void sub_812330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812330ULL || rel >= 0x812340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812340 size=80 callers=2 calls=1
   calls: sub_817270
*/
void sub_812340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812340ULL || rel >= 0x812390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812390 size=64 callers=2 calls=1
   calls: sub_818310
*/
void sub_812390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812390ULL || rel >= 0x8123d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008123d0 size=80 callers=2 calls=1
   calls: sub_816460
*/
void sub_8123d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8123d0ULL || rel >= 0x812420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812420 size=144 callers=2 calls=2
   calls: sub_786d90, sub_816500
*/
void sub_812420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812420ULL || rel >= 0x8124b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008124b0 size=112 callers=8 calls=2
   calls: sub_8150c0, sub_818340
*/
void sub_8124b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8124b0ULL || rel >= 0x812520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812520 size=80 callers=4 calls=1
   calls: sub_818390
*/
void sub_812520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812520ULL || rel >= 0x812570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812570 size=80 callers=3 calls=1
   calls: sub_8183e0
*/
void sub_812570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812570ULL || rel >= 0x8125c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008125c0 size=64 callers=1 calls=1
   calls: sub_818430
*/
void sub_8125c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8125c0ULL || rel >= 0x812600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812600 size=64 callers=5 calls=1
   calls: sub_818470
*/
void sub_812600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812600ULL || rel >= 0x812640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812640 size=64 callers=4 calls=1
   calls: sub_8184b0
*/
void sub_812640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812640ULL || rel >= 0x812680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812680 size=80 callers=1 calls=1
   calls: sub_8184f0
*/
void sub_812680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812680ULL || rel >= 0x8126d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008126d0 size=64 callers=3 calls=1
   calls: sub_818550
*/
void sub_8126d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8126d0ULL || rel >= 0x812710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812710 size=64 callers=2 calls=1
   calls: sub_818590
*/
void sub_812710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812710ULL || rel >= 0x812750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812750 size=128 callers=1 calls=2
   calls: sub_8150c0, sub_8185d0
*/
void sub_812750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812750ULL || rel >= 0x8127d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008127d0 size=80 callers=1 calls=1
   calls: sub_8185e0
*/
void sub_8127d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8127d0ULL || rel >= 0x812820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812820 size=112 callers=2 calls=3
   calls: sub_7f8ba0, sub_8150c0, sub_8185f0
*/
void sub_812820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812820ULL || rel >= 0x812890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812890 size=80 callers=3 calls=1
   calls: sub_818600
*/
void sub_812890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812890ULL || rel >= 0x8128e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008128e0 size=80 callers=1 calls=2
   calls: sub_8150c0, sub_818610
*/
void sub_8128e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8128e0ULL || rel >= 0x812930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812930 size=80 callers=1 calls=2
   calls: sub_8150c0, sub_818620
*/
void sub_812930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812930ULL || rel >= 0x812980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812980 size=80 callers=3 calls=2
   calls: sub_8150c0, sub_818630
*/
void sub_812980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812980ULL || rel >= 0x8129d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008129d0 size=64 callers=5 calls=1
   calls: sub_818640
*/
void sub_8129d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8129d0ULL || rel >= 0x812a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812a10 size=64 callers=1 calls=1
   calls: sub_818650
*/
void sub_812a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812a10ULL || rel >= 0x812a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812a50 size=64 callers=1 calls=1
   calls: sub_818690
*/
void sub_812a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812a50ULL || rel >= 0x812a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

