/* main functions 005dfce0..005faf20 (38 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 005dfce0 size=16 callers=0 calls=0
*/
void sub_5dfce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfce0ULL || rel >= 0x5dfcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfcf0 size=48 callers=0 calls=0
*/
void sub_5dfcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfcf0ULL || rel >= 0x5dfd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfd20 size=128 callers=1 calls=2
   calls: sub_5d7c50, sub_5dd490
*/
void sub_5dfd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfd20ULL || rel >= 0x5dfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfda0 size=112 callers=0 calls=2
   calls: sub_5d42e0, sub_5d4370
*/
void sub_5dfda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfda0ULL || rel >= 0x5dfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfe10 size=16 callers=0 calls=0
*/
void sub_5dfe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfe10ULL || rel >= 0x5dfe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfe20 size=336 callers=0 calls=0
*/
void sub_5dfe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfe20ULL || rel >= 0x5dff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dff70 size=112 callers=0 calls=0
*/
void sub_5dff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dff70ULL || rel >= 0x5dffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dffe0 size=16 callers=0 calls=0
*/
void sub_5dffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dffe0ULL || rel >= 0x5dfff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005dfff0 size=16 callers=0 calls=0
*/
void sub_5dfff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5dfff0ULL || rel >= 0x5e0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0000 size=16 callers=0 calls=0
*/
void sub_5e0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0000ULL || rel >= 0x5e0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0010 size=32 callers=0 calls=0
*/
void sub_5e0010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0010ULL || rel >= 0x5e0030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0030 size=16 callers=0 calls=0
*/
void sub_5e0030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0030ULL || rel >= 0x5e0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0040 size=32 callers=0 calls=0
*/
void sub_5e0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0040ULL || rel >= 0x5e0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0060 size=16 callers=0 calls=0
*/
void sub_5e0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0060ULL || rel >= 0x5e0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0070 size=16 callers=0 calls=0
*/
void sub_5e0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0070ULL || rel >= 0x5e0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0080 size=224 callers=1 calls=1
   calls: GenericWorkerService
*/
void sub_5e0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0080ULL || rel >= 0x5e0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0160 size=224 callers=1 calls=1
   calls: sub_5d7ec0
*/
void sub_5e0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0160ULL || rel >= 0x5e0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0240 size=256 callers=1 calls=1
   calls: sub_5e0340
*/
void sub_5e0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0240ULL || rel >= 0x5e0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0340 size=304 callers=2 calls=1
   calls: sub_65d700
*/
void sub_5e0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0340ULL || rel >= 0x5e0470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0470 size=400 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_5e0470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0470ULL || rel >= 0x5e0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0600 size=16 callers=0 calls=0
*/
void sub_5e0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0600ULL || rel >= 0x5e0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0610 size=16 callers=0 calls=0
*/
void sub_5e0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0610ULL || rel >= 0x5e0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0620 size=112 callers=0 calls=0
*/
void sub_5e0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0620ULL || rel >= 0x5e0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0690 size=16 callers=0 calls=0
*/
void sub_5e0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0690ULL || rel >= 0x5e06a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e06a0 size=112 callers=0 calls=0
*/
void sub_5e06a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e06a0ULL || rel >= 0x5e0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0710 size=352 callers=1 calls=4
   calls: sub_596d20, sub_596d40, sub_597950, sub_597970
*/
void sub_5e0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0710ULL || rel >= 0x5e0870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0870 size=64 callers=0 calls=1
   calls: sub_5e09f0
*/
void sub_5e0870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0870ULL || rel >= 0x5e08b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e08b0 size=64 callers=0 calls=1
   calls: sub_5e09f0
*/
void sub_5e08b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e08b0ULL || rel >= 0x5e08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e08f0 size=16 callers=0 calls=0
*/
void sub_5e08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e08f0ULL || rel >= 0x5e0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0900 size=112 callers=0 calls=0
*/
void sub_5e0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0900ULL || rel >= 0x5e0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0970 size=16 callers=0 calls=0
*/
void sub_5e0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0970ULL || rel >= 0x5e0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0980 size=112 callers=0 calls=0
*/
void sub_5e0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0980ULL || rel >= 0x5e09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e09f0 size=480 callers=4 calls=0
*/
void sub_5e09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e09f0ULL || rel >= 0x5e0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0bd0 size=448 callers=7 calls=1
   calls: sub_5e09f0
*/
void sub_5e0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0bd0ULL || rel >= 0x5e0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0d90 size=32 callers=1 calls=0
*/
void sub_5e0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0d90ULL || rel >= 0x5e0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0db0 size=512 callers=0 calls=7
   calls: sub_5cf8c0, sub_5e1bc0, sub_5f8c10, sub_5f8c90, sub_5f8cc0, sub_602030, sub_65d700
*/
void sub_5e0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0db0ULL || rel >= 0x5e0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e0fb0 size=352 callers=0 calls=6
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5e1dc0, sub_5f3730, sub_5f7540
*/
void sub_5e0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e0fb0ULL || rel >= 0x5e1110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1110 size=864 callers=0 calls=3
   calls: sub_5e1470, sub_5f8bc0, sub_5f8c40
*/
void sub_5e1110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1110ULL || rel >= 0x5e1470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1470 size=224 callers=1 calls=5
   calls: sub_5f7110, sub_5f7120, sub_5f7320, sub_5f8bc0, sub_5f8c40
*/
void sub_5e1470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1470ULL || rel >= 0x5e1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1550 size=480 callers=0 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e1f80, sub_5f8bc0, sub_5f8c40
*/
void sub_5e1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1550ULL || rel >= 0x5e1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1730 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5e1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1730ULL || rel >= 0x5e17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e17b0 size=128 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5e17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e17b0ULL || rel >= 0x5e1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1830 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_5e1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1830ULL || rel >= 0x5e18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e18a0 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5e18a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e18a0ULL || rel >= 0x5e1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1930 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5e1930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1930ULL || rel >= 0x5e19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e19c0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_5e19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e19c0ULL || rel >= 0x5e1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1a30 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_5e1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1a30ULL || rel >= 0x5e1aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1aa0 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5e1aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1aa0ULL || rel >= 0x5e1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1b30 size=144 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5e1b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1b30ULL || rel >= 0x5e1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1bc0 size=272 callers=2 calls=2
   calls: sub_5f6f50, sub_5f6fe0
*/
void sub_5e1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1bc0ULL || rel >= 0x5e1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1cd0 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5e1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1cd0ULL || rel >= 0x5e1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1d20 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5e1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1d20ULL || rel >= 0x5e1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1d70 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5e1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1d70ULL || rel >= 0x5e1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1dc0 size=384 callers=1 calls=7
   calls: sub_17876e0, sub_1788b60, sub_1789270, sub_17892a0, sub_5f3260, sub_5f8bc0, sub_5f8c40
*/
void sub_5e1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1dc0ULL || rel >= 0x5e1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1f40 size=16 callers=0 calls=0
*/
void sub_5e1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1f40ULL || rel >= 0x5e1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1f50 size=16 callers=0 calls=0
*/
void sub_5e1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1f50ULL || rel >= 0x5e1f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1f60 size=16 callers=0 calls=0
*/
void sub_5e1f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1f60ULL || rel >= 0x5e1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1f70 size=16 callers=0 calls=0
*/
void sub_5e1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1f70ULL || rel >= 0x5e1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e1f80 size=512 callers=1 calls=0
*/
void sub_5e1f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e1f80ULL || rel >= 0x5e2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2180 size=464 callers=24 calls=2
   calls: sub_5e2350, sub_65d700
*/
void sub_5e2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2180ULL || rel >= 0x5e2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2350 size=432 callers=636 calls=0
*/
void sub_5e2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2350ULL || rel >= 0x5e2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2500 size=192 callers=44 calls=0
*/
void sub_5e2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2500ULL || rel >= 0x5e25c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e25c0 size=48 callers=6 calls=1
   calls: sub_5e3aa0
*/
void sub_5e25c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e25c0ULL || rel >= 0x5e25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e25f0 size=176 callers=0 calls=1
   calls: sub_5e5020
*/
void sub_5e25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e25f0ULL || rel >= 0x5e26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e26a0 size=96 callers=171 calls=0
*/
void sub_5e26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e26a0ULL || rel >= 0x5e2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2700 size=80 callers=0 calls=0
*/
void sub_5e2700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2700ULL || rel >= 0x5e2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2750 size=224 callers=22 calls=3
   calls: sub_5e3980, sub_5e3bd0, sub_5e6040
*/
void sub_5e2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2750ULL || rel >= 0x5e2830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2830 size=32 callers=22 calls=0
*/
void sub_5e2830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2830ULL || rel >= 0x5e2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2850 size=224 callers=4 calls=4
   calls: sub_5e3980, sub_5e3ad0, sub_5e3bd0, sub_5e60a0
*/
void sub_5e2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2850ULL || rel >= 0x5e2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2930 size=656 callers=435 calls=1
   calls: sub_5e36b0
*/
void sub_5e2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2930ULL || rel >= 0x5e2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2bc0 size=448 callers=859 calls=1
   calls: sub_5e36b0
*/
void sub_5e2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2bc0ULL || rel >= 0x5e2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2d80 size=352 callers=2 calls=0
*/
void sub_5e2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2d80ULL || rel >= 0x5e2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e2ee0 size=352 callers=0 calls=0
*/
void sub_5e2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e2ee0ULL || rel >= 0x5e3040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3040 size=16 callers=0 calls=0
*/
void sub_5e3040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3040ULL || rel >= 0x5e3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3050 size=32 callers=0 calls=0
*/
void sub_5e3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3050ULL || rel >= 0x5e3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3070 size=80 callers=0 calls=0
*/
void sub_5e3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3070ULL || rel >= 0x5e30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e30c0 size=48 callers=0 calls=0
*/
void sub_5e30c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e30c0ULL || rel >= 0x5e30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e30f0 size=240 callers=0 calls=0
*/
void sub_5e30f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e30f0ULL || rel >= 0x5e31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e31e0 size=16 callers=0 calls=0
*/
void sub_5e31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e31e0ULL || rel >= 0x5e31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e31f0 size=16 callers=0 calls=0
*/
void sub_5e31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e31f0ULL || rel >= 0x5e3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3200 size=80 callers=0 calls=0
*/
void sub_5e3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3200ULL || rel >= 0x5e3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3250 size=64 callers=0 calls=0
*/
void sub_5e3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3250ULL || rel >= 0x5e3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3290 size=32 callers=0 calls=0
*/
void sub_5e3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3290ULL || rel >= 0x5e32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e32b0 size=16 callers=0 calls=0
*/
void sub_5e32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e32b0ULL || rel >= 0x5e32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e32c0 size=16 callers=0 calls=0
*/
void sub_5e32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e32c0ULL || rel >= 0x5e32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e32d0 size=16 callers=0 calls=0
*/
void sub_5e32d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e32d0ULL || rel >= 0x5e32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e32e0 size=16 callers=0 calls=0
*/
void sub_5e32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e32e0ULL || rel >= 0x5e32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e32f0 size=80 callers=0 calls=0
*/
void sub_5e32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e32f0ULL || rel >= 0x5e3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3340 size=80 callers=0 calls=0
*/
void sub_5e3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3340ULL || rel >= 0x5e3390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3390 size=80 callers=0 calls=0
*/
void sub_5e3390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3390ULL || rel >= 0x5e33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e33e0 size=80 callers=0 calls=0
*/
void sub_5e33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e33e0ULL || rel >= 0x5e3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3430 size=176 callers=0 calls=0
*/
void sub_5e3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3430ULL || rel >= 0x5e34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e34e0 size=176 callers=0 calls=0
*/
void sub_5e34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e34e0ULL || rel >= 0x5e3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3590 size=80 callers=0 calls=0
*/
void sub_5e3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3590ULL || rel >= 0x5e35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e35e0 size=80 callers=0 calls=0
*/
void sub_5e35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e35e0ULL || rel >= 0x5e3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3630 size=16 callers=0 calls=0
*/
void sub_5e3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3630ULL || rel >= 0x5e3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3640 size=80 callers=0 calls=0
*/
void sub_5e3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3640ULL || rel >= 0x5e3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3690 size=16 callers=0 calls=0
*/
void sub_5e3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3690ULL || rel >= 0x5e36a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e36a0 size=16 callers=0 calls=0
*/
void sub_5e36a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e36a0ULL || rel >= 0x5e36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e36b0 size=448 callers=2 calls=0
*/
void sub_5e36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e36b0ULL || rel >= 0x5e3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3870 size=272 callers=50 calls=0
*/
void sub_5e3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3870ULL || rel >= 0x5e3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3980 size=96 callers=12 calls=0
*/
void sub_5e3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3980ULL || rel >= 0x5e39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e39e0 size=112 callers=2 calls=0
*/
void sub_5e39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e39e0ULL || rel >= 0x5e3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3a50 size=32 callers=4 calls=0
*/
void sub_5e3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3a50ULL || rel >= 0x5e3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3a70 size=48 callers=2 calls=0
*/
void sub_5e3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3a70ULL || rel >= 0x5e3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3aa0 size=48 callers=8 calls=0
*/
void sub_5e3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3aa0ULL || rel >= 0x5e3ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3ad0 size=256 callers=1 calls=1
   calls: sub_17506d0
*/
void sub_5e3ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3ad0ULL || rel >= 0x5e3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3bd0 size=32 callers=2 calls=0
*/
void sub_5e3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3bd0ULL || rel >= 0x5e3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3bf0 size=32 callers=0 calls=0
*/
void sub_5e3bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3bf0ULL || rel >= 0x5e3c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3c10 size=32 callers=0 calls=0
*/
void sub_5e3c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3c10ULL || rel >= 0x5e3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3c30 size=352 callers=2 calls=4
   calls: sub_5cf8c0, sub_5d12c0, sub_5e3d90, sub_65d700
*/
void sub_5e3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3c30ULL || rel >= 0x5e3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3d90 size=240 callers=1 calls=1
   calls: sub_65d700
*/
void sub_5e3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3d90ULL || rel >= 0x5e3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3e80 size=48 callers=2 calls=1
   calls: FileManagerParallel
*/
void sub_5e3e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3e80ULL || rel >= 0x5e3eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e3eb0 size=816 callers=1 calls=5
   calls: sub_5d0f90, sub_5e41e0, sub_5e4310, sub_5e5560, sub_5e6890
   ref: FileManagerParallel
   ref: system_resource/
   ref: FileManager
*/
void FileManagerParallel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e3eb0ULL || rel >= 0x5e41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e41e0 size=304 callers=2 calls=3
   calls: sub_5e56a0, sub_5e6180, sub_d0c0
*/
void sub_5e41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e41e0ULL || rel >= 0x5e4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e4310 size=784 callers=1 calls=1
   calls: sub_5e5c70
*/
void sub_5e4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e4310ULL || rel >= 0x5e4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e4620 size=1312 callers=0 calls=2
   calls: sub_5cf8d0, sub_5e5560
   ref: save%d
*/
void save_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e4620ULL || rel >= 0x5e4b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e4b40 size=16 callers=0 calls=0
*/
void sub_5e4b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e4b40ULL || rel >= 0x5e4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e4b50 size=96 callers=0 calls=0
*/
void sub_5e4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e4b50ULL || rel >= 0x5e4bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e4bb0 size=96 callers=0 calls=0
*/
void sub_5e4bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e4bb0ULL || rel >= 0x5e4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e4c10 size=304 callers=2 calls=1
   calls: sub_5cf8f0
*/
void sub_5e4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e4c10ULL || rel >= 0x5e4d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e4d40 size=576 callers=1 calls=7
   calls: save_d_2, sub_5cf8e0, sub_5cf8f0, sub_5e4c10, sub_5e65b0, sub_5e6720, sub_5e6760
*/
void sub_5e4d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e4d40ULL || rel >= 0x5e4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e4f80 size=160 callers=2 calls=3
   calls: sub_5e4c10, sub_5e65a0, sub_5e65b0
*/
void sub_5e4f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e4f80ULL || rel >= 0x5e5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e5020 size=1120 callers=1 calls=5
   calls: sub_5cf830, sub_5cf840, sub_5cf8e0, sub_5cf8f0, sub_5e5720
*/
void sub_5e5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e5020ULL || rel >= 0x5e5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e5480 size=112 callers=0 calls=0
*/
void sub_5e5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e5480ULL || rel >= 0x5e54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e54f0 size=112 callers=0 calls=0
*/
void sub_5e54f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e54f0ULL || rel >= 0x5e5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e5560 size=320 callers=34 calls=0
*/
void sub_5e5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e5560ULL || rel >= 0x5e56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e56a0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_5e56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e56a0ULL || rel >= 0x5e5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e5720 size=288 callers=1 calls=2
   calls: sub_5e5840, sub_5e5a90
*/
void sub_5e5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e5720ULL || rel >= 0x5e5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e5840 size=592 callers=1 calls=0
*/
void sub_5e5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e5840ULL || rel >= 0x5e5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e5a90 size=480 callers=2 calls=0
*/
void sub_5e5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e5a90ULL || rel >= 0x5e5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e5c70 size=272 callers=2 calls=0
*/
void sub_5e5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e5c70ULL || rel >= 0x5e5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e5d80 size=704 callers=0 calls=0
*/
void sub_5e5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e5d80ULL || rel >= 0x5e6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6040 size=80 callers=1 calls=0
*/
void sub_5e6040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6040ULL || rel >= 0x5e6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6090 size=16 callers=0 calls=0
*/
void sub_5e6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6090ULL || rel >= 0x5e60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e60a0 size=96 callers=1 calls=0
*/
void sub_5e60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e60a0ULL || rel >= 0x5e6100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6100 size=128 callers=0 calls=0
*/
void sub_5e6100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6100ULL || rel >= 0x5e6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6180 size=224 callers=150 calls=0
*/
void sub_5e6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6180ULL || rel >= 0x5e6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6260 size=32 callers=0 calls=0
*/
void sub_5e6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6260ULL || rel >= 0x5e6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6280 size=128 callers=13 calls=0
*/
void sub_5e6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6280ULL || rel >= 0x5e6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6300 size=80 callers=0 calls=0
*/
void sub_5e6300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6300ULL || rel >= 0x5e6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6350 size=528 callers=2 calls=4
   calls: sub_1c0, sub_5cfaf0, sub_5cff50, sub_5e6770
   ref: save%d
*/
void save_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6350ULL || rel >= 0x5e6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6560 size=64 callers=0 calls=0
*/
void sub_5e6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6560ULL || rel >= 0x5e65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e65a0 size=16 callers=7 calls=0
*/
void sub_5e65a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e65a0ULL || rel >= 0x5e65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e65b0 size=48 callers=2 calls=0
*/
void sub_5e65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e65b0ULL || rel >= 0x5e65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e65e0 size=208 callers=1 calls=0
*/
void sub_5e65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e65e0ULL || rel >= 0x5e66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e66b0 size=112 callers=1 calls=0
*/
void sub_5e66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e66b0ULL || rel >= 0x5e6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6720 size=64 callers=4 calls=1
   calls: save_d_2
*/
void sub_5e6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6720ULL || rel >= 0x5e6760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6760 size=16 callers=2 calls=0
*/
void sub_5e6760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6760ULL || rel >= 0x5e6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6770 size=288 callers=78 calls=0
*/
void sub_5e6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6770ULL || rel >= 0x5e6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6890 size=224 callers=2 calls=2
   calls: sub_5d0b10, sub_65d700
*/
void sub_5e6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6890ULL || rel >= 0x5e6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6970 size=1392 callers=23 calls=3
   calls: sub_5d0f40, sub_5e2d80, sub_5e7430
*/
void sub_5e6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6970ULL || rel >= 0x5e6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e6ee0 size=560 callers=0 calls=1
   calls: sub_5e2d80
*/
void sub_5e6ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e6ee0ULL || rel >= 0x5e7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7110 size=64 callers=0 calls=1
   calls: sub_5d1080
*/
void sub_5e7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7110ULL || rel >= 0x5e7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7150 size=320 callers=0 calls=0
*/
void sub_5e7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7150ULL || rel >= 0x5e7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7290 size=16 callers=0 calls=0
*/
void sub_5e7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7290ULL || rel >= 0x5e72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e72a0 size=16 callers=0 calls=0
*/
void sub_5e72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e72a0ULL || rel >= 0x5e72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e72b0 size=16 callers=0 calls=0
*/
void sub_5e72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e72b0ULL || rel >= 0x5e72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e72c0 size=16 callers=0 calls=0
*/
void sub_5e72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e72c0ULL || rel >= 0x5e72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e72d0 size=16 callers=0 calls=0
*/
void sub_5e72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e72d0ULL || rel >= 0x5e72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e72e0 size=16 callers=0 calls=0
*/
void sub_5e72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e72e0ULL || rel >= 0x5e72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e72f0 size=16 callers=0 calls=0
*/
void sub_5e72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e72f0ULL || rel >= 0x5e7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7300 size=304 callers=0 calls=0
*/
void sub_5e7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7300ULL || rel >= 0x5e7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7430 size=528 callers=1 calls=0
*/
void sub_5e7430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7430ULL || rel >= 0x5e7640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7640 size=128 callers=2 calls=2
   calls: sub_5e2180, sub_65d700
*/
void sub_5e7640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7640ULL || rel >= 0x5e76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e76c0 size=448 callers=0 calls=6
   calls: sub_5cff50, sub_5e2750, sub_5e2830, sub_5e6770, sub_5e7880, sub_5e83e0
*/
void sub_5e76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e76c0ULL || rel >= 0x5e7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7880 size=432 callers=1 calls=0
*/
void sub_5e7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7880ULL || rel >= 0x5e7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7a30 size=256 callers=29 calls=2
   calls: sub_1c0, sub_5e6770
*/
void sub_5e7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7a30ULL || rel >= 0x5e7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7b30 size=96 callers=27 calls=0
*/
void sub_5e7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7b30ULL || rel >= 0x5e7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7b90 size=32 callers=1 calls=0
*/
void sub_5e7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7b90ULL || rel >= 0x5e7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7bb0 size=16 callers=25 calls=0
*/
void sub_5e7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7bb0ULL || rel >= 0x5e7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7bc0 size=240 callers=0 calls=0
*/
void sub_5e7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7bc0ULL || rel >= 0x5e7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7cb0 size=240 callers=0 calls=0
*/
void sub_5e7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7cb0ULL || rel >= 0x5e7da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7da0 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5e7da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7da0ULL || rel >= 0x5e7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7e10 size=240 callers=0 calls=0
*/
void sub_5e7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7e10ULL || rel >= 0x5e7f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7f00 size=240 callers=0 calls=0
*/
void sub_5e7f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7f00ULL || rel >= 0x5e7ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e7ff0 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5e7ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e7ff0ULL || rel >= 0x5e8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8060 size=112 callers=0 calls=1
   calls: sub_5e82b0
*/
void sub_5e8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8060ULL || rel >= 0x5e80d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e80d0 size=240 callers=0 calls=0
*/
void sub_5e80d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e80d0ULL || rel >= 0x5e81c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e81c0 size=240 callers=0 calls=0
*/
void sub_5e81c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e81c0ULL || rel >= 0x5e82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e82b0 size=304 callers=21 calls=0
*/
void sub_5e82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e82b0ULL || rel >= 0x5e83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e83e0 size=528 callers=1 calls=0
*/
void sub_5e83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e83e0ULL || rel >= 0x5e85f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e85f0 size=320 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_5e85f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e85f0ULL || rel >= 0x5e8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8730 size=560 callers=1 calls=1
   calls: sub_5e8960
*/
void sub_5e8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8730ULL || rel >= 0x5e8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8960 size=320 callers=1 calls=0
*/
void sub_5e8960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8960ULL || rel >= 0x5e8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8aa0 size=144 callers=1 calls=0
*/
void sub_5e8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8aa0ULL || rel >= 0x5e8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8b30 size=240 callers=0 calls=0
*/
void sub_5e8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8b30ULL || rel >= 0x5e8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8c20 size=16 callers=0 calls=0
*/
void sub_5e8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8c20ULL || rel >= 0x5e8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8c30 size=240 callers=0 calls=0
*/
void sub_5e8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8c30ULL || rel >= 0x5e8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8d20 size=16 callers=0 calls=0
*/
void sub_5e8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8d20ULL || rel >= 0x5e8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8d30 size=16 callers=0 calls=0
*/
void sub_5e8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8d30ULL || rel >= 0x5e8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8d40 size=16 callers=0 calls=0
*/
void sub_5e8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8d40ULL || rel >= 0x5e8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8d50 size=16 callers=0 calls=0
*/
void sub_5e8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8d50ULL || rel >= 0x5e8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8d60 size=16 callers=0 calls=0
*/
void sub_5e8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8d60ULL || rel >= 0x5e8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8d70 size=16 callers=0 calls=0
*/
void sub_5e8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8d70ULL || rel >= 0x5e8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8d80 size=368 callers=0 calls=2
   calls: sub_5cf8f0, sub_65f110
*/
void sub_5e8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8d80ULL || rel >= 0x5e8ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8ef0 size=144 callers=2 calls=0
*/
void sub_5e8ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8ef0ULL || rel >= 0x5e8f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e8f80 size=672 callers=2 calls=5
   calls: sub_178df70, sub_17908a0, sub_5cf8c0, sub_5eb570, sub_65d700
*/
void sub_5e8f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e8f80ULL || rel >= 0x5e9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e9220 size=896 callers=0 calls=6
   calls: sub_178df90, sub_17908c0, sub_1791020, sub_5cf8d0, sub_5e95a0, sub_5f3490
*/
void sub_5e9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e9220ULL || rel >= 0x5e95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e95a0 size=336 callers=4 calls=1
   calls: sub_5eb880
*/
void sub_5e95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e95a0ULL || rel >= 0x5e96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e96f0 size=16 callers=0 calls=0
*/
void sub_5e96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e96f0ULL || rel >= 0x5e9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e9700 size=128 callers=0 calls=1
   calls: sub_8c0
*/
void sub_5e9700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e9700ULL || rel >= 0x5e9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e9780 size=176 callers=0 calls=1
   calls: sub_1790910
*/
void sub_5e9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e9780ULL || rel >= 0x5e9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e9830 size=176 callers=0 calls=1
   calls: sub_1790910
*/
void sub_5e9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e9830ULL || rel >= 0x5e98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e98e0 size=1536 callers=2 calls=16
   calls: sub_17875f0, sub_17908d0, sub_5cf9c0, sub_5d1b50, sub_5d7c40, sub_5e9ee0, sub_5ea320, sub_5eb970, sub_5eba50, sub_5ec050, sub_5ec350, sub_5ecb70
   ... +4 more
*/
void sub_5e98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e98e0ULL || rel >= 0x5e9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005e9ee0 size=1088 callers=1 calls=7
   calls: sub_1791010, sub_5ea6e0, sub_5ee0f0, sub_5eeb80, sub_5f3440, sub_65f1c0, sub_c10
*/
void sub_5e9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5e9ee0ULL || rel >= 0x5ea320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ea320 size=592 callers=1 calls=2
   calls: sub_1787710, sub_5f34e0
*/
void sub_5ea320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ea320ULL || rel >= 0x5ea570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ea570 size=128 callers=0 calls=0
*/
void sub_5ea570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ea570ULL || rel >= 0x5ea5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ea5f0 size=64 callers=0 calls=0
*/
void sub_5ea5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ea5f0ULL || rel >= 0x5ea630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ea630 size=176 callers=0 calls=3
   calls: gflib3_reallocatable_resource, sub_8c0, sub_c10
*/
void sub_5ea630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ea630ULL || rel >= 0x5ea6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ea6e0 size=320 callers=2 calls=1
   calls: sub_5f23c0
*/
void sub_5ea6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ea6e0ULL || rel >= 0x5ea820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ea820 size=512 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_5ef250
*/
void sub_5ea820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ea820ULL || rel >= 0x5eaa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eaa20 size=816 callers=0 calls=12
   calls: sub_1787ca0, sub_1787cb0, sub_178e010, sub_1790950, sub_5ead50, sub_5eaea0, sub_5efba0, sub_5f22e0, sub_5f7110, sub_5f7120, sub_5f7320, sub_5f7ae0
*/
void sub_5eaa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eaa20ULL || rel >= 0x5ead50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ead50 size=336 callers=1 calls=2
   calls: sub_5cf8f0, sub_5ef460
*/
void sub_5ead50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ead50ULL || rel >= 0x5eaea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eaea0 size=336 callers=1 calls=2
   calls: sub_5cf8f0, sub_5ef800
*/
void sub_5eaea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eaea0ULL || rel >= 0x5eaff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eaff0 size=64 callers=0 calls=0
*/
void sub_5eaff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eaff0ULL || rel >= 0x5eb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb030 size=400 callers=1 calls=7
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_178dfa0, sub_5efcd0, sub_5f3730, sub_5f7540
*/
void sub_5eb030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb030ULL || rel >= 0x5eb1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb1c0 size=112 callers=0 calls=0
*/
void sub_5eb1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb1c0ULL || rel >= 0x5eb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb230 size=112 callers=0 calls=0
*/
void sub_5eb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb230ULL || rel >= 0x5eb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb2a0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5eb2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb2a0ULL || rel >= 0x5eb2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb2f0 size=96 callers=0 calls=0
*/
void sub_5eb2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb2f0ULL || rel >= 0x5eb350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb350 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5eb350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb350ULL || rel >= 0x5eb3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb3a0 size=96 callers=0 calls=0
*/
void sub_5eb3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb3a0ULL || rel >= 0x5eb400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb400 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5eb400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb400ULL || rel >= 0x5eb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb450 size=96 callers=0 calls=0
*/
void sub_5eb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb450ULL || rel >= 0x5eb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb4b0 size=80 callers=0 calls=0
*/
void sub_5eb4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb4b0ULL || rel >= 0x5eb500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb500 size=32 callers=0 calls=0
*/
void sub_5eb500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb500ULL || rel >= 0x5eb520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb520 size=16 callers=0 calls=0
*/
void sub_5eb520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb520ULL || rel >= 0x5eb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb530 size=16 callers=0 calls=0
*/
void sub_5eb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb530ULL || rel >= 0x5eb540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb540 size=16 callers=0 calls=0
*/
void sub_5eb540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb540ULL || rel >= 0x5eb550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb550 size=32 callers=0 calls=0
*/
void sub_5eb550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb550ULL || rel >= 0x5eb570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb570 size=288 callers=1 calls=3
   calls: sub_1c0, sub_5cf8c0, sub_5cf8f0
*/
void sub_5eb570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb570ULL || rel >= 0x5eb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb690 size=16 callers=0 calls=0
*/
void sub_5eb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb690ULL || rel >= 0x5eb6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb6a0 size=32 callers=0 calls=0
*/
void sub_5eb6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb6a0ULL || rel >= 0x5eb6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb6c0 size=64 callers=0 calls=0
*/
void sub_5eb6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb6c0ULL || rel >= 0x5eb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb700 size=384 callers=0 calls=3
   calls: sub_1c0, sub_5cf8c0, sub_5cf8f0
*/
void sub_5eb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb700ULL || rel >= 0x5eb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb880 size=240 callers=4 calls=0
*/
void sub_5eb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb880ULL || rel >= 0x5eb970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eb970 size=224 callers=1 calls=1
   calls: sub_5f8d20
*/
void sub_5eb970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eb970ULL || rel >= 0x5eba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eba50 size=256 callers=1 calls=1
   calls: sub_5ebb50
*/
void sub_5eba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eba50ULL || rel >= 0x5ebb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ebb50 size=1280 callers=2 calls=2
   calls: sub_5cf8c0, sub_65d700
*/
void sub_5ebb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ebb50ULL || rel >= 0x5ec050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec050 size=352 callers=1 calls=0
*/
void sub_5ec050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec050ULL || rel >= 0x5ec1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec1b0 size=80 callers=0 calls=0
*/
void sub_5ec1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec1b0ULL || rel >= 0x5ec200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec200 size=80 callers=0 calls=0
*/
void sub_5ec200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec200ULL || rel >= 0x5ec250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec250 size=16 callers=0 calls=0
*/
void sub_5ec250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec250ULL || rel >= 0x5ec260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec260 size=112 callers=0 calls=0
*/
void sub_5ec260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec260ULL || rel >= 0x5ec2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec2d0 size=16 callers=0 calls=0
*/
void sub_5ec2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec2d0ULL || rel >= 0x5ec2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec2e0 size=112 callers=0 calls=0
*/
void sub_5ec2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec2e0ULL || rel >= 0x5ec350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec350 size=272 callers=1 calls=2
   calls: sub_5d1b50, sub_5ec460
*/
void sub_5ec350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec350ULL || rel >= 0x5ec460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec460 size=432 callers=1 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1d30, sub_5d76c0
*/
void sub_5ec460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec460ULL || rel >= 0x5ec610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec610 size=96 callers=0 calls=0
*/
void sub_5ec610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec610ULL || rel >= 0x5ec670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec670 size=96 callers=0 calls=0
*/
void sub_5ec670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec670ULL || rel >= 0x5ec6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec6d0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5ec6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec6d0ULL || rel >= 0x5ec740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec740 size=48 callers=0 calls=1
   calls: sub_5eb030
*/
void sub_5ec740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec740ULL || rel >= 0x5ec770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec770 size=96 callers=0 calls=0
*/
void sub_5ec770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec770ULL || rel >= 0x5ec7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec7d0 size=96 callers=0 calls=0
*/
void sub_5ec7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec7d0ULL || rel >= 0x5ec830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec830 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5ec830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec830ULL || rel >= 0x5ec8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec8a0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_5ec8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec8a0ULL || rel >= 0x5ec910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec910 size=96 callers=0 calls=0
*/
void sub_5ec910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec910ULL || rel >= 0x5ec970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec970 size=96 callers=0 calls=0
*/
void sub_5ec970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec970ULL || rel >= 0x5ec9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ec9d0 size=64 callers=0 calls=1
   calls: sub_5f21d0
*/
void sub_5ec9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ec9d0ULL || rel >= 0x5eca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eca10 size=16 callers=0 calls=0
*/
void sub_5eca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eca10ULL || rel >= 0x5eca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eca20 size=16 callers=0 calls=0
*/
void sub_5eca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eca20ULL || rel >= 0x5eca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eca30 size=16 callers=0 calls=0
*/
void sub_5eca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eca30ULL || rel >= 0x5eca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eca40 size=304 callers=36 calls=0
*/
void sub_5eca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eca40ULL || rel >= 0x5ecb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ecb70 size=224 callers=13 calls=1
   calls: sub_5d12d0
*/
void sub_5ecb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ecb70ULL || rel >= 0x5ecc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ecc50 size=272 callers=1 calls=2
   calls: sub_5f6f50, sub_5f6fe0
*/
void sub_5ecc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ecc50ULL || rel >= 0x5ecd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ecd60 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5ecd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ecd60ULL || rel >= 0x5ecdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ecdb0 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5ecdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ecdb0ULL || rel >= 0x5ece00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ece00 size=16 callers=0 calls=0
*/
void sub_5ece00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ece00ULL || rel >= 0x5ece10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ece10 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5ece10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ece10ULL || rel >= 0x5ece60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ece60 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5ece60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ece60ULL || rel >= 0x5eceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eceb0 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5eceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eceb0ULL || rel >= 0x5ecf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ecf00 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5ecf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ecf00ULL || rel >= 0x5ecf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ecf50 size=80 callers=0 calls=1
   calls: sub_5f6f80
*/
void sub_5ecf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ecf50ULL || rel >= 0x5ecfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ecfa0 size=496 callers=10 calls=3
   calls: sub_5cf8c0, sub_5ed190, sub_65d700
*/
void sub_5ecfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ecfa0ULL || rel >= 0x5ed190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed190 size=432 callers=2 calls=0
*/
void sub_5ed190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed190ULL || rel >= 0x5ed340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed340 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5ed340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed340ULL || rel >= 0x5ed3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed3e0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5ed3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed3e0ULL || rel >= 0x5ed480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed480 size=32 callers=0 calls=0
*/
void sub_5ed480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed480ULL || rel >= 0x5ed4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed4a0 size=80 callers=0 calls=0
*/
void sub_5ed4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed4a0ULL || rel >= 0x5ed4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed4f0 size=80 callers=0 calls=0
*/
void sub_5ed4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed4f0ULL || rel >= 0x5ed540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed540 size=48 callers=0 calls=0
*/
void sub_5ed540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed540ULL || rel >= 0x5ed570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed570 size=112 callers=0 calls=1
   calls: sub_5eb880
*/
void sub_5ed570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed570ULL || rel >= 0x5ed5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed5e0 size=352 callers=5 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5edec0
*/
void sub_5ed5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed5e0ULL || rel >= 0x5ed740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed740 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_5ed740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed740ULL || rel >= 0x5ed830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed830 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5ed830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed830ULL || rel >= 0x5ed8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed8d0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5ed8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed8d0ULL || rel >= 0x5ed970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed970 size=80 callers=0 calls=0
*/
void sub_5ed970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed970ULL || rel >= 0x5ed9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ed9c0 size=64 callers=0 calls=0
*/
void sub_5ed9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ed9c0ULL || rel >= 0x5eda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eda00 size=32 callers=0 calls=0
*/
void sub_5eda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eda00ULL || rel >= 0x5eda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eda20 size=112 callers=0 calls=1
   calls: sub_5eb880
*/
void sub_5eda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eda20ULL || rel >= 0x5eda90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eda90 size=16 callers=0 calls=0
*/
void sub_5eda90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eda90ULL || rel >= 0x5edaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edaa0 size=240 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_5edaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edaa0ULL || rel >= 0x5edb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edb90 size=64 callers=0 calls=0
*/
void sub_5edb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edb90ULL || rel >= 0x5edbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edbd0 size=112 callers=0 calls=1
   calls: sub_5eb880
*/
void sub_5edbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edbd0ULL || rel >= 0x5edc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edc40 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5edc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edc40ULL || rel >= 0x5edce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edce0 size=160 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5edce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edce0ULL || rel >= 0x5edd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edd80 size=80 callers=0 calls=0
*/
void sub_5edd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edd80ULL || rel >= 0x5eddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eddd0 size=16 callers=0 calls=0
*/
void sub_5eddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eddd0ULL || rel >= 0x5edde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edde0 size=80 callers=0 calls=0
*/
void sub_5edde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edde0ULL || rel >= 0x5ede30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ede30 size=16 callers=0 calls=0
*/
void sub_5ede30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ede30ULL || rel >= 0x5ede40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ede40 size=16 callers=0 calls=0
*/
void sub_5ede40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ede40ULL || rel >= 0x5ede50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ede50 size=16 callers=0 calls=0
*/
void sub_5ede50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ede50ULL || rel >= 0x5ede60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ede60 size=80 callers=0 calls=0
*/
void sub_5ede60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ede60ULL || rel >= 0x5edeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edeb0 size=16 callers=0 calls=0
*/
void sub_5edeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edeb0ULL || rel >= 0x5edec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005edec0 size=448 callers=1 calls=0
*/
void sub_5edec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5edec0ULL || rel >= 0x5ee080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee080 size=64 callers=0 calls=0
*/
void sub_5ee080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee080ULL || rel >= 0x5ee0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee0c0 size=16 callers=0 calls=0
*/
void sub_5ee0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee0c0ULL || rel >= 0x5ee0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee0d0 size=16 callers=0 calls=0
*/
void sub_5ee0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee0d0ULL || rel >= 0x5ee0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee0e0 size=16 callers=0 calls=0
*/
void sub_5ee0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee0e0ULL || rel >= 0x5ee0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee0f0 size=416 callers=2 calls=6
   calls: sub_1787360, sub_1789bc0, sub_1789be0, sub_1789c10, sub_5f46d0, sub_5f48c0
*/
void sub_5ee0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee0f0ULL || rel >= 0x5ee290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee290 size=160 callers=0 calls=2
   calls: sub_1789c00, sub_1789ca0
*/
void sub_5ee290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee290ULL || rel >= 0x5ee330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee330 size=160 callers=0 calls=2
   calls: sub_1789c00, sub_1789ca0
*/
void sub_5ee330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee330ULL || rel >= 0x5ee3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee3d0 size=128 callers=0 calls=2
   calls: sub_5f4a00, sub_5f5780
*/
void sub_5ee3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee3d0ULL || rel >= 0x5ee450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee450 size=32 callers=0 calls=0
*/
void sub_5ee450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee450ULL || rel >= 0x5ee470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee470 size=16 callers=0 calls=0
*/
void sub_5ee470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee470ULL || rel >= 0x5ee480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee480 size=16 callers=0 calls=0
*/
void sub_5ee480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee480ULL || rel >= 0x5ee490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee490 size=16 callers=0 calls=0
*/
void sub_5ee490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee490ULL || rel >= 0x5ee4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee4a0 size=16 callers=0 calls=0
*/
void sub_5ee4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee4a0ULL || rel >= 0x5ee4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee4b0 size=16 callers=0 calls=0
*/
void sub_5ee4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee4b0ULL || rel >= 0x5ee4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee4c0 size=16 callers=0 calls=0
*/
void sub_5ee4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee4c0ULL || rel >= 0x5ee4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee4d0 size=112 callers=0 calls=1
   calls: sub_5eead0
*/
void sub_5ee4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee4d0ULL || rel >= 0x5ee540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee540 size=160 callers=0 calls=2
   calls: sub_1789c00, sub_1789ca0
*/
void sub_5ee540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee540ULL || rel >= 0x5ee5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee5e0 size=160 callers=0 calls=2
   calls: sub_1789c00, sub_1789ca0
*/
void sub_5ee5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee5e0ULL || rel >= 0x5ee680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee680 size=240 callers=0 calls=0
*/
void sub_5ee680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee680ULL || rel >= 0x5ee770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee770 size=160 callers=0 calls=2
   calls: sub_1789c00, sub_1789ca0
*/
void sub_5ee770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee770ULL || rel >= 0x5ee810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee810 size=160 callers=0 calls=2
   calls: sub_1789c00, sub_1789ca0
*/
void sub_5ee810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee810ULL || rel >= 0x5ee8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee8b0 size=48 callers=0 calls=0
*/
void sub_5ee8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee8b0ULL || rel >= 0x5ee8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee8e0 size=16 callers=0 calls=0
*/
void sub_5ee8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee8e0ULL || rel >= 0x5ee8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee8f0 size=176 callers=0 calls=0
*/
void sub_5ee8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee8f0ULL || rel >= 0x5ee9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee9a0 size=48 callers=0 calls=0
*/
void sub_5ee9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee9a0ULL || rel >= 0x5ee9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee9d0 size=16 callers=0 calls=0
*/
void sub_5ee9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee9d0ULL || rel >= 0x5ee9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ee9e0 size=176 callers=0 calls=0
*/
void sub_5ee9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ee9e0ULL || rel >= 0x5eea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eea90 size=48 callers=0 calls=0
*/
void sub_5eea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eea90ULL || rel >= 0x5eeac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eeac0 size=16 callers=0 calls=0
*/
void sub_5eeac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eeac0ULL || rel >= 0x5eead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eead0 size=176 callers=2 calls=0
*/
void sub_5eead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eead0ULL || rel >= 0x5eeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eeb80 size=416 callers=1 calls=3
   calls: sub_5f46d0, sub_5f48c0, sub_5f7130
*/
void sub_5eeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eeb80ULL || rel >= 0x5eed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eed20 size=160 callers=0 calls=1
   calls: sub_5f7130
*/
void sub_5eed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eed20ULL || rel >= 0x5eedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eedc0 size=160 callers=0 calls=1
   calls: sub_5f7130
*/
void sub_5eedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eedc0ULL || rel >= 0x5eee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eee60 size=16 callers=0 calls=0
*/
void sub_5eee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eee60ULL || rel >= 0x5eee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eee70 size=112 callers=0 calls=1
   calls: sub_5eead0
*/
void sub_5eee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eee70ULL || rel >= 0x5eeee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eeee0 size=160 callers=0 calls=1
   calls: sub_5f7130
*/
void sub_5eeee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eeee0ULL || rel >= 0x5eef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005eef80 size=160 callers=0 calls=1
   calls: sub_5f7130
*/
void sub_5eef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5eef80ULL || rel >= 0x5ef020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ef020 size=240 callers=0 calls=0
*/
void sub_5ef020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ef020ULL || rel >= 0x5ef110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ef110 size=160 callers=0 calls=1
   calls: sub_5f7130
*/
void sub_5ef110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ef110ULL || rel >= 0x5ef1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ef1b0 size=160 callers=0 calls=1
   calls: sub_5f7130
*/
void sub_5ef1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ef1b0ULL || rel >= 0x5ef250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ef250 size=528 callers=1 calls=0
*/
void sub_5ef250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ef250ULL || rel >= 0x5ef460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ef460 size=480 callers=1 calls=1
   calls: sub_5ef640
*/
void sub_5ef460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ef460ULL || rel >= 0x5ef640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ef640 size=448 callers=2 calls=0
*/
void sub_5ef640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ef640ULL || rel >= 0x5ef800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ef800 size=480 callers=1 calls=1
   calls: sub_5ef9e0
*/
void sub_5ef800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ef800ULL || rel >= 0x5ef9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005ef9e0 size=448 callers=2 calls=0
*/
void sub_5ef9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5ef9e0ULL || rel >= 0x5efba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005efba0 size=304 callers=1 calls=0
*/
void sub_5efba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5efba0ULL || rel >= 0x5efcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005efcd0 size=928 callers=1 calls=11
   calls: sub_1788f20, sub_1789130, sub_17892f0, sub_1789330, sub_1789380, sub_5f0070, sub_5f19d0, sub_5f2190, sub_5f21c0, sub_5f7100, sub_5f7770
*/
void sub_5efcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5efcd0ULL || rel >= 0x5f0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f0070 size=3088 callers=3 calls=5
   calls: sub_5f0070, sub_5f0c80, sub_5f1290, sub_5f15f0, sub_5f19d0
*/
void sub_5f0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f0070ULL || rel >= 0x5f0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f0c80 size=896 callers=5 calls=1
   calls: sub_5f19d0
*/
void sub_5f0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f0c80ULL || rel >= 0x5f1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1000 size=656 callers=2 calls=2
   calls: sub_5f0c80, sub_5f19d0
*/
void sub_5f1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1000ULL || rel >= 0x5f1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1290 size=864 callers=2 calls=2
   calls: sub_5f1000, sub_5f19d0
*/
void sub_5f1290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1290ULL || rel >= 0x5f15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f15f0 size=992 callers=2 calls=4
   calls: sub_5f0c80, sub_5f1000, sub_5f1290, sub_5f19d0
*/
void sub_5f15f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f15f0ULL || rel >= 0x5f19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f19d0 size=304 callers=193 calls=0
*/
void sub_5f19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f19d0ULL || rel >= 0x5f1b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1b00 size=16 callers=0 calls=0
*/
void sub_5f1b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1b00ULL || rel >= 0x5f1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1b10 size=16 callers=0 calls=0
*/
void sub_5f1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1b10ULL || rel >= 0x5f1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1b20 size=16 callers=0 calls=0
*/
void sub_5f1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1b20ULL || rel >= 0x5f1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1b30 size=16 callers=0 calls=0
*/
void sub_5f1b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1b30ULL || rel >= 0x5f1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1b40 size=288 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_5f1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1b40ULL || rel >= 0x5f1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1c60 size=896 callers=1 calls=18
   calls: sub_17875c0, sub_17875f0, sub_1787600, sub_1790300, sub_1790350, sub_17903f0, sub_1790420, sub_17906e0, sub_1790780, sub_17908a0, sub_17908d0, sub_17909a0
   ... +6 more
*/
void sub_5f1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1c60ULL || rel >= 0x5f1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f1fe0 size=304 callers=0 calls=7
   calls: sub_1790410, sub_1790640, sub_17908c0, sub_1790910, sub_17909c0, sub_1790a10, sub_5f7130
*/
void sub_5f1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f1fe0ULL || rel >= 0x5f2110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2110 size=16 callers=0 calls=0
*/
void sub_5f2110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2110ULL || rel >= 0x5f2120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2120 size=16 callers=0 calls=0
*/
void sub_5f2120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2120ULL || rel >= 0x5f2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2130 size=16 callers=0 calls=0
*/
void sub_5f2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2130ULL || rel >= 0x5f2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2140 size=64 callers=0 calls=0
*/
void sub_5f2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2140ULL || rel >= 0x5f2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2180 size=16 callers=0 calls=0
*/
void sub_5f2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2180ULL || rel >= 0x5f2190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2190 size=16 callers=1 calls=0
*/
void sub_5f2190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2190ULL || rel >= 0x5f21a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f21a0 size=16 callers=0 calls=0
*/
void sub_5f21a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f21a0ULL || rel >= 0x5f21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f21b0 size=16 callers=0 calls=0
*/
void sub_5f21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f21b0ULL || rel >= 0x5f21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f21c0 size=16 callers=1 calls=0
*/
void sub_5f21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f21c0ULL || rel >= 0x5f21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f21d0 size=256 callers=1 calls=3
   calls: sub_1790820, sub_5f8c10, sub_5f8c90
*/
void sub_5f21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f21d0ULL || rel >= 0x5f22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f22d0 size=16 callers=0 calls=0
*/
void sub_5f22d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f22d0ULL || rel >= 0x5f22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f22e0 size=112 callers=1 calls=1
   calls: sub_178e050
*/
void sub_5f22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f22e0ULL || rel >= 0x5f2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2350 size=64 callers=2 calls=1
   calls: sub_5f8b10
*/
void sub_5f2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2350ULL || rel >= 0x5f2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2390 size=16 callers=0 calls=0
*/
void sub_5f2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2390ULL || rel >= 0x5f23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f23a0 size=16 callers=0 calls=0
*/
void sub_5f23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f23a0ULL || rel >= 0x5f23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f23b0 size=16 callers=0 calls=0
*/
void sub_5f23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f23b0ULL || rel >= 0x5f23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f23c0 size=192 callers=1 calls=0
*/
void sub_5f23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f23c0ULL || rel >= 0x5f2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2480 size=48 callers=10 calls=0
*/
void sub_5f2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2480ULL || rel >= 0x5f24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f24b0 size=2448 callers=11 calls=17
   calls: sub_1787610, sub_1787640, sub_1787690, sub_1790a50, sub_1790ab0, sub_1790b10, sub_1790b60, sub_1790c70, sub_1790ca0, sub_1790f10, sub_1790f30, sub_1790f40
   ... +5 more
*/
void sub_5f24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f24b0ULL || rel >= 0x5f2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f2e40 size=1008 callers=0 calls=7
   calls: sub_1790b50, sub_1790c30, sub_1790c90, sub_1790de0, sub_1790f30, sub_1791000, sub_5f7130
*/
void sub_5f2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f2e40ULL || rel >= 0x5f3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3230 size=16 callers=0 calls=0
*/
void sub_5f3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3230ULL || rel >= 0x5f3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3240 size=16 callers=0 calls=0
*/
void sub_5f3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3240ULL || rel >= 0x5f3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3250 size=16 callers=0 calls=0
*/
void sub_5f3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3250ULL || rel >= 0x5f3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3260 size=32 callers=12 calls=0
*/
void sub_5f3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3260ULL || rel >= 0x5f3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3280 size=48 callers=3 calls=0
*/
void sub_5f3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3280ULL || rel >= 0x5f32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f32b0 size=400 callers=8 calls=3
   calls: sub_5f8c10, sub_5f8c90, sub_5fc870
*/
void sub_5f32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f32b0ULL || rel >= 0x5f3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3440 size=80 callers=1 calls=2
   calls: nvnDeviceGetProcAddress_2, sub_1787350
*/
void sub_5f3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3440ULL || rel >= 0x5f3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3490 size=16 callers=1 calls=0
*/
void sub_5f3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3490ULL || rel >= 0x5f34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f34a0 size=64 callers=0 calls=1
   calls: sub_1791050
*/
void sub_5f34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f34a0ULL || rel >= 0x5f34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f34e0 size=528 callers=2 calls=2
   calls: sub_5f3bc0, sub_5f3d80
*/
void sub_5f34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f34e0ULL || rel >= 0x5f36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f36f0 size=64 callers=0 calls=1
   calls: sub_5f71c0
*/
void sub_5f36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f36f0ULL || rel >= 0x5f3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3730 size=96 callers=13 calls=1
   calls: sub_5f3d40
*/
void sub_5f3730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3730ULL || rel >= 0x5f3790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3790 size=208 callers=4 calls=4
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5f3d40
*/
void sub_5f3790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3790ULL || rel >= 0x5f3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3860 size=208 callers=0 calls=1
   calls: sub_5f3d80
*/
void sub_5f3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3860ULL || rel >= 0x5f3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3930 size=208 callers=0 calls=1
   calls: sub_5f3d80
*/
void sub_5f3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3930ULL || rel >= 0x5f3a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3a00 size=224 callers=0 calls=1
   calls: sub_5f3d80
*/
void sub_5f3a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3a00ULL || rel >= 0x5f3ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3ae0 size=224 callers=0 calls=1
   calls: sub_5f3d80
*/
void sub_5f3ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3ae0ULL || rel >= 0x5f3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3bc0 size=352 callers=2 calls=11
   calls: sub_1787330, sub_1787d40, sub_1787d90, sub_1787f40, sub_1787f50, sub_1787f60, sub_1787f70, sub_1787fd0, sub_5f3e90, sub_5f4030, sub_65d700
*/
void sub_5f3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3bc0ULL || rel >= 0x5f3d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3d20 size=16 callers=0 calls=0
*/
void sub_5f3d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3d20ULL || rel >= 0x5f3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3d30 size=16 callers=0 calls=0
*/
void sub_5f3d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3d30ULL || rel >= 0x5f3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3d40 size=64 callers=2 calls=2
   calls: sub_1787f60, sub_5f3e90
*/
void sub_5f3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3d40ULL || rel >= 0x5f3d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3d80 size=272 callers=5 calls=2
   calls: sub_1787ea0, sub_5f7130
*/
void sub_5f3d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3d80ULL || rel >= 0x5f3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f3e90 size=416 callers=2 calls=6
   calls: sub_1787cc0, sub_1787f00, sub_5f2480, sub_5f41d0, sub_5f7130, sub_5f7190
*/
void sub_5f3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f3e90ULL || rel >= 0x5f4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f4030 size=352 callers=1 calls=3
   calls: sub_1787d00, sub_1787f20, sub_5f44b0
*/
void sub_5f4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f4030ULL || rel >= 0x5f4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f4190 size=32 callers=1 calls=0
*/
void sub_5f4190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f4190ULL || rel >= 0x5f41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f41b0 size=32 callers=1 calls=0
*/
void sub_5f41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f41b0ULL || rel >= 0x5f41d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f41d0 size=432 callers=1 calls=2
   calls: sub_5f4380, sub_5f7130
*/
void sub_5f41d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f41d0ULL || rel >= 0x5f4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f4380 size=304 callers=2 calls=0
*/
void sub_5f4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f4380ULL || rel >= 0x5f44b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f44b0 size=544 callers=1 calls=0
*/
void sub_5f44b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f44b0ULL || rel >= 0x5f46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f46d0 size=192 callers=2 calls=2
   calls: sub_5cf8c0, sub_5f5890
*/
void sub_5f46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f46d0ULL || rel >= 0x5f4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f4790 size=304 callers=0 calls=1
   calls: sub_5f5890
*/
void sub_5f4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f4790ULL || rel >= 0x5f48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f48c0 size=320 callers=2 calls=2
   calls: sub_5f5a50, sub_5f5c00
*/
void sub_5f48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f48c0ULL || rel >= 0x5f4a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f4a00 size=1456 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5f5a50, sub_5f5c00, sub_5f6a20, sub_5f6ba0, sub_65d800
*/
void sub_5f4a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f4a00ULL || rel >= 0x5f4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f4fb0 size=1472 callers=0 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5f5a50, sub_5f5c00, sub_5f6a20, sub_5f6ba0, sub_65d800
*/
void sub_5f4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f4fb0ULL || rel >= 0x5f5570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5570 size=240 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_5f5570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5570ULL || rel >= 0x5f5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5660 size=256 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_5f5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5660ULL || rel >= 0x5f5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5760 size=16 callers=0 calls=0
*/
void sub_5f5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5760ULL || rel >= 0x5f5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5770 size=16 callers=0 calls=0
*/
void sub_5f5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5770ULL || rel >= 0x5f5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5780 size=272 callers=1 calls=2
   calls: sub_5cf8f0, sub_65d800
*/
void sub_5f5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5780ULL || rel >= 0x5f5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5890 size=448 callers=2 calls=0
*/
void sub_5f5890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5890ULL || rel >= 0x5f5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5a50 size=432 callers=3 calls=0
*/
void sub_5f5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5a50ULL || rel >= 0x5f5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5c00 size=288 callers=3 calls=1
   calls: sub_5f5d20
*/
void sub_5f5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5c00ULL || rel >= 0x5f5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f5d20 size=1248 callers=1 calls=4
   calls: sub_5f6200, sub_5f6400, sub_5f6600, sub_5f6810
*/
void sub_5f5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f5d20ULL || rel >= 0x5f6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6200 size=512 callers=1 calls=0
*/
void sub_5f6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6200ULL || rel >= 0x5f6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6400 size=512 callers=1 calls=0
*/
void sub_5f6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6400ULL || rel >= 0x5f6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6600 size=528 callers=1 calls=0
*/
void sub_5f6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6600ULL || rel >= 0x5f6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6810 size=528 callers=1 calls=0
*/
void sub_5f6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6810ULL || rel >= 0x5f6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6a20 size=384 callers=4 calls=0
*/
void sub_5f6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6a20ULL || rel >= 0x5f6ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6ba0 size=944 callers=4 calls=0
*/
void sub_5f6ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6ba0ULL || rel >= 0x5f6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6f50 size=48 callers=15 calls=1
   calls: sub_1787a90
*/
void sub_5f6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6f50ULL || rel >= 0x5f6f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6f80 size=96 callers=57 calls=2
   calls: sub_1787bb0, sub_5f7130
*/
void sub_5f6f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6f80ULL || rel >= 0x5f6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f6fe0 size=288 callers=14 calls=6
   calls: sub_1787320, sub_1787960, sub_1787ac0, sub_5f2480, sub_5f7130, sub_5f7190
*/
void sub_5f6fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f6fe0ULL || rel >= 0x5f7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7100 size=16 callers=13 calls=0
*/
void sub_5f7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7100ULL || rel >= 0x5f7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7110 size=16 callers=53 calls=0
*/
void sub_5f7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7110ULL || rel >= 0x5f7120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7120 size=16 callers=51 calls=0
*/
void sub_5f7120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7120ULL || rel >= 0x5f7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7130 size=96 callers=32 calls=0
*/
void sub_5f7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7130ULL || rel >= 0x5f7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7190 size=32 callers=14 calls=0
*/
void sub_5f7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7190ULL || rel >= 0x5f71b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f71b0 size=16 callers=9 calls=0
*/
void sub_5f71b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f71b0ULL || rel >= 0x5f71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f71c0 size=64 callers=2 calls=0
*/
void sub_5f71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f71c0ULL || rel >= 0x5f7200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7200 size=288 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5f83e0
*/
void sub_5f7200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7200ULL || rel >= 0x5f7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7320 size=544 callers=34 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5f83e0
*/
void sub_5f7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7320ULL || rel >= 0x5f7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7540 size=560 callers=13 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5f85a0
*/
void sub_5f7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7540ULL || rel >= 0x5f7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7770 size=448 callers=1 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_5f7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7770ULL || rel >= 0x5f7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7930 size=432 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5f3790
*/
void sub_5f7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7930ULL || rel >= 0x5f7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7ae0 size=752 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5f8760
*/
void sub_5f7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7ae0ULL || rel >= 0x5f7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7dd0 size=496 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_5f7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7dd0ULL || rel >= 0x5f7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7fc0 size=16 callers=0 calls=0
*/
void sub_5f7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7fc0ULL || rel >= 0x5f7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f7fd0 size=816 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_5f7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f7fd0ULL || rel >= 0x5f8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8300 size=16 callers=0 calls=0
*/
void sub_5f8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8300ULL || rel >= 0x5f8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8310 size=16 callers=0 calls=0
*/
void sub_5f8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8310ULL || rel >= 0x5f8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8320 size=16 callers=0 calls=0
*/
void sub_5f8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8320ULL || rel >= 0x5f8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8330 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_5f8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8330ULL || rel >= 0x5f8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8380 size=96 callers=0 calls=0
*/
void sub_5f8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8380ULL || rel >= 0x5f83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f83e0 size=448 callers=3 calls=0
*/
void sub_5f83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f83e0ULL || rel >= 0x5f85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f85a0 size=448 callers=2 calls=0
*/
void sub_5f85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f85a0ULL || rel >= 0x5f8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8760 size=688 callers=2 calls=0
*/
void sub_5f8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8760ULL || rel >= 0x5f8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8a10 size=176 callers=0 calls=0
*/
void sub_5f8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8a10ULL || rel >= 0x5f8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8ac0 size=16 callers=0 calls=0
*/
void sub_5f8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8ac0ULL || rel >= 0x5f8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8ad0 size=32 callers=0 calls=0
*/
void sub_5f8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8ad0ULL || rel >= 0x5f8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8af0 size=32 callers=0 calls=0
*/
void sub_5f8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8af0ULL || rel >= 0x5f8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8b10 size=176 callers=2 calls=0
*/
void sub_5f8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8b10ULL || rel >= 0x5f8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8bc0 size=80 callers=43 calls=0
*/
void sub_5f8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8bc0ULL || rel >= 0x5f8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8c10 size=48 callers=11 calls=0
*/
void sub_5f8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8c10ULL || rel >= 0x5f8c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8c40 size=80 callers=42 calls=0
*/
void sub_5f8c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8c40ULL || rel >= 0x5f8c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8c90 size=48 callers=11 calls=0
*/
void sub_5f8c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8c90ULL || rel >= 0x5f8cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8cc0 size=48 callers=1 calls=0
*/
void sub_5f8cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8cc0ULL || rel >= 0x5f8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8cf0 size=16 callers=0 calls=0
*/
void sub_5f8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8cf0ULL || rel >= 0x5f8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8d00 size=16 callers=0 calls=0
*/
void sub_5f8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8d00ULL || rel >= 0x5f8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8d10 size=16 callers=0 calls=0
*/
void sub_5f8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8d10ULL || rel >= 0x5f8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f8d20 size=864 callers=2 calls=8
   calls: sub_1787340, sub_17873f0, sub_5f9080, sub_5f91b0, sub_5f9550, sub_5f9690, sub_5facd0, sub_65d700
*/
void sub_5f8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f8d20ULL || rel >= 0x5f9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9080 size=304 callers=1 calls=3
   calls: sub_1789910, sub_5cf8c0, sub_65d700
*/
void sub_5f9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9080ULL || rel >= 0x5f91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f91b0 size=272 callers=1 calls=6
   calls: sub_1789770, sub_1789860, sub_1789940, sub_5f2480, sub_5f7130, sub_5f7190
*/
void sub_5f91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f91b0ULL || rel >= 0x5f92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f92c0 size=80 callers=1 calls=2
   calls: sub_5f9550, sub_5f9690
*/
void sub_5f92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f92c0ULL || rel >= 0x5f9310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9310 size=144 callers=0 calls=0
*/
void sub_5f9310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9310ULL || rel >= 0x5f93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f93a0 size=112 callers=0 calls=0
*/
void sub_5f93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f93a0ULL || rel >= 0x5f9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9410 size=144 callers=0 calls=0
*/
void sub_5f9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9410ULL || rel >= 0x5f94a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f94a0 size=176 callers=1 calls=2
   calls: sub_5f9550, sub_5f9f50
*/
void sub_5f94a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f94a0ULL || rel >= 0x5f9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9550 size=320 callers=3 calls=1
   calls: sub_5fad50
*/
void sub_5f9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9550ULL || rel >= 0x5f9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9690 size=672 callers=2 calls=1
   calls: sub_5fa110
*/
void sub_5f9690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9690ULL || rel >= 0x5f9930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9930 size=240 callers=1 calls=0
*/
void sub_5f9930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9930ULL || rel >= 0x5f9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9a20 size=560 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5fa4e0, sub_5fa710
*/
void sub_5f9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9a20ULL || rel >= 0x5f9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9c50 size=208 callers=0 calls=0
*/
void sub_5f9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9c50ULL || rel >= 0x5f9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9d20 size=16 callers=0 calls=0
*/
void sub_5f9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9d20ULL || rel >= 0x5f9d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9d30 size=16 callers=0 calls=0
*/
void sub_5f9d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9d30ULL || rel >= 0x5f9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9d40 size=16 callers=0 calls=0
*/
void sub_5f9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9d40ULL || rel >= 0x5f9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9d50 size=384 callers=0 calls=3
   calls: sub_1789a60, sub_5cf8d0, sub_5f7130
*/
void sub_5f9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9d50ULL || rel >= 0x5f9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9ed0 size=16 callers=0 calls=0
*/
void sub_5f9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9ed0ULL || rel >= 0x5f9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9ee0 size=112 callers=0 calls=0
*/
void sub_5f9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9ee0ULL || rel >= 0x5f9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005f9f50 size=448 callers=1 calls=0
*/
void sub_5f9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5f9f50ULL || rel >= 0x5fa110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fa110 size=272 callers=1 calls=0
*/
void sub_5fa110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fa110ULL || rel >= 0x5fa220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fa220 size=704 callers=0 calls=0
*/
void sub_5fa220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fa220ULL || rel >= 0x5fa4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fa4e0 size=560 callers=1 calls=0
*/
void sub_5fa4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fa4e0ULL || rel >= 0x5fa710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fa710 size=448 callers=1 calls=0
*/
void sub_5fa710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fa710ULL || rel >= 0x5fa8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fa8d0 size=16 callers=2 calls=0
*/
void sub_5fa8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fa8d0ULL || rel >= 0x5fa8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fa8e0 size=736 callers=0 calls=9
   calls: sub_1789ac0, sub_1789ad0, sub_1789b30, sub_1789b70, sub_178e500, sub_5cf8e0, sub_5cf8f0, sub_5f92c0, sub_5f9930
*/
void sub_5fa8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fa8e0ULL || rel >= 0x5fabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fabc0 size=16 callers=3 calls=0
*/
void sub_5fabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fabc0ULL || rel >= 0x5fabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fabd0 size=256 callers=0 calls=6
   calls: sub_1789ac0, sub_1789ad0, sub_1789b30, sub_1789b70, sub_5cf8f0, sub_5f94a0
*/
void sub_5fabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fabd0ULL || rel >= 0x5facd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005facd0 size=128 callers=1 calls=5
   calls: sub_1789ac0, sub_1789ad0, sub_1789b30, sub_1789b70, sub_178e500
*/
void sub_5facd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5facd0ULL || rel >= 0x5fad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fad50 size=160 callers=1 calls=1
   calls: sub_178e4c0
*/
void sub_5fad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fad50ULL || rel >= 0x5fadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fadf0 size=80 callers=0 calls=1
   calls: sub_178e5b0
*/
void sub_5fadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fadf0ULL || rel >= 0x5fae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fae40 size=32 callers=0 calls=0
*/
void sub_5fae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fae40ULL || rel >= 0x5fae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fae60 size=32 callers=0 calls=0
*/
void sub_5fae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fae60ULL || rel >= 0x5fae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005fae80 size=32 callers=0 calls=0
*/
void sub_5fae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5fae80ULL || rel >= 0x5faea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005faea0 size=32 callers=0 calls=0
*/
void sub_5faea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5faea0ULL || rel >= 0x5faec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005faec0 size=96 callers=2 calls=1
   calls: sub_5e2180
*/
void sub_5faec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5faec0ULL || rel >= 0x5faf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005faf20 size=80 callers=4 calls=1
   calls: sub_5e2180
*/
void sub_5faf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5faf20ULL || rel >= 0x5faf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

