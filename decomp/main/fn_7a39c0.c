/* main functions 007a39c0..007be350 (53 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 007a39c0 size=16 callers=0 calls=0
*/
void sub_7a39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a39c0ULL || rel >= 0x7a39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a39d0 size=16 callers=0 calls=0
*/
void sub_7a39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a39d0ULL || rel >= 0x7a39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a39e0 size=16 callers=0 calls=0
*/
void sub_7a39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a39e0ULL || rel >= 0x7a39f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a39f0 size=16 callers=0 calls=0
*/
void sub_7a39f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a39f0ULL || rel >= 0x7a3a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3a00 size=16 callers=0 calls=0
*/
void sub_7a3a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3a00ULL || rel >= 0x7a3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3a10 size=224 callers=36 calls=1
   calls: sub_14aad40
*/
void sub_7a3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3a10ULL || rel >= 0x7a3af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3af0 size=304 callers=0 calls=0
*/
void sub_7a3af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3af0ULL || rel >= 0x7a3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3c20 size=224 callers=101 calls=1
   calls: sub_14ec620
*/
void sub_7a3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3c20ULL || rel >= 0x7a3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3d00 size=224 callers=0 calls=4
   calls: sub_1500c40, sub_1502120, sub_5cfad0, sub_e833a0
   ref: anime_L_tab_left_00_key_select
*/
void anime_L_tab_left_00_key_select(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3d00ULL || rel >= 0x7a3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3de0 size=16 callers=0 calls=0
*/
void sub_7a3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3de0ULL || rel >= 0x7a3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3df0 size=16 callers=0 calls=0
*/
void sub_7a3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3df0ULL || rel >= 0x7a3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3e00 size=16 callers=0 calls=0
*/
void sub_7a3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3e00ULL || rel >= 0x7a3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3e10 size=208 callers=0 calls=4
   calls: sub_1500c40, sub_1502120, sub_5cfad0, sub_e833a0
   ref: anime_L_tab_right_00_key_select
*/
void anime_L_tab_right_00_key_select(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3e10ULL || rel >= 0x7a3ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3ee0 size=16 callers=0 calls=0
*/
void sub_7a3ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3ee0ULL || rel >= 0x7a3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3ef0 size=16 callers=0 calls=0
*/
void sub_7a3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3ef0ULL || rel >= 0x7a3f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3f00 size=16 callers=0 calls=0
*/
void sub_7a3f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3f00ULL || rel >= 0x7a3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3f10 size=368 callers=21 calls=0
*/
void sub_7a3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3f10ULL || rel >= 0x7a4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4080 size=48 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_7a4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4080ULL || rel >= 0x7a40b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a40b0 size=128 callers=0 calls=0
*/
void sub_7a40b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a40b0ULL || rel >= 0x7a4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4130 size=128 callers=0 calls=0
*/
void sub_7a4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4130ULL || rel >= 0x7a41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a41b0 size=464 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_7a41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a41b0ULL || rel >= 0x7a4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4380 size=240 callers=0 calls=0
*/
void sub_7a4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4380ULL || rel >= 0x7a4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4470 size=240 callers=0 calls=0
*/
void sub_7a4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4470ULL || rel >= 0x7a4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4560 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_7a4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4560ULL || rel >= 0x7a45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a45d0 size=16 callers=0 calls=0
*/
void sub_7a45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a45d0ULL || rel >= 0x7a45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a45e0 size=48 callers=0 calls=0
*/
void sub_7a45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a45e0ULL || rel >= 0x7a4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4610 size=240 callers=0 calls=0
*/
void sub_7a4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4610ULL || rel >= 0x7a4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4700 size=240 callers=0 calls=0
*/
void sub_7a4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4700ULL || rel >= 0x7a47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a47f0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_7a47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a47f0ULL || rel >= 0x7a4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4860 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_7a4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4860ULL || rel >= 0x7a48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a48d0 size=240 callers=0 calls=0
*/
void sub_7a48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a48d0ULL || rel >= 0x7a49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a49c0 size=240 callers=0 calls=0
*/
void sub_7a49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a49c0ULL || rel >= 0x7a4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4ab0 size=240 callers=33 calls=0
*/
void sub_7a4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4ab0ULL || rel >= 0x7a4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4ba0 size=480 callers=17 calls=0
*/
void sub_7a4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4ba0ULL || rel >= 0x7a4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a4d80 size=3968 callers=0 calls=35
   calls: sub_12b86e0, sub_12b8870, sub_12ffe00, sub_1313c10, sub_1315270, sub_1315b90, sub_1366a40, sub_14aad40, sub_14d6920, sub_14eebd0, sub_14eebe0, sub_767e40
   ... +23 more
   ref: anime_pattern_comment
*/
void anime_pattern_comment(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a4d80ULL || rel >= 0x7a5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a5d00 size=16 callers=0 calls=0
*/
void sub_7a5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5d00ULL || rel >= 0x7a5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a5d10 size=16 callers=0 calls=0
*/
void sub_7a5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5d10ULL || rel >= 0x7a5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a5d20 size=16 callers=0 calls=0
*/
void sub_7a5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5d20ULL || rel >= 0x7a5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a5d30 size=32 callers=0 calls=0
*/
void sub_7a5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5d30ULL || rel >= 0x7a5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a5d50 size=16 callers=0 calls=0
*/
void sub_7a5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5d50ULL || rel >= 0x7a5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a5d60 size=16 callers=0 calls=0
*/
void sub_7a5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5d60ULL || rel >= 0x7a5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a5d70 size=16 callers=0 calls=0
*/
void sub_7a5d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5d70ULL || rel >= 0x7a5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a5d80 size=2640 callers=0 calls=21
   calls: sub_1315270, sub_1315b90, sub_1366a40, sub_14aad40, sub_14ab040, sub_14bb830, sub_765e60, sub_766940, sub_766990, sub_7863b0, sub_786410, sub_786b80
   ... +9 more
*/
void sub_7a5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a5d80ULL || rel >= 0x7a67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a67d0 size=16 callers=0 calls=0
*/
void sub_7a67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a67d0ULL || rel >= 0x7a67e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a67e0 size=16 callers=0 calls=0
*/
void sub_7a67e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a67e0ULL || rel >= 0x7a67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a67f0 size=16 callers=0 calls=0
*/
void sub_7a67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a67f0ULL || rel >= 0x7a6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6800 size=48 callers=0 calls=0
*/
void sub_7a6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6800ULL || rel >= 0x7a6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6830 size=16 callers=0 calls=0
*/
void sub_7a6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6830ULL || rel >= 0x7a6840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6840 size=16 callers=0 calls=0
*/
void sub_7a6840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6840ULL || rel >= 0x7a6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6850 size=16 callers=0 calls=0
*/
void sub_7a6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6850ULL || rel >= 0x7a6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6860 size=176 callers=0 calls=2
   calls: sub_1500c40, sub_e83430
*/
void sub_7a6860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6860ULL || rel >= 0x7a6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6910 size=16 callers=0 calls=0
*/
void sub_7a6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6910ULL || rel >= 0x7a6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6920 size=16 callers=0 calls=0
*/
void sub_7a6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6920ULL || rel >= 0x7a6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6930 size=16 callers=0 calls=0
*/
void sub_7a6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6930ULL || rel >= 0x7a6940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6940 size=528 callers=0 calls=1
   calls: sub_7a3a10
*/
void sub_7a6940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6940ULL || rel >= 0x7a6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6b50 size=16 callers=0 calls=0
*/
void sub_7a6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6b50ULL || rel >= 0x7a6b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6b60 size=16 callers=0 calls=0
*/
void sub_7a6b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6b60ULL || rel >= 0x7a6b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6b70 size=16 callers=0 calls=0
*/
void sub_7a6b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6b70ULL || rel >= 0x7a6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6b80 size=16 callers=0 calls=0
*/
void sub_7a6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6b80ULL || rel >= 0x7a6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6b90 size=16 callers=0 calls=0
*/
void sub_7a6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6b90ULL || rel >= 0x7a6ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6ba0 size=16 callers=0 calls=0
*/
void sub_7a6ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6ba0ULL || rel >= 0x7a6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6bb0 size=16 callers=0 calls=0
*/
void sub_7a6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6bb0ULL || rel >= 0x7a6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6bc0 size=64 callers=0 calls=0
*/
void sub_7a6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6bc0ULL || rel >= 0x7a6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6c00 size=16 callers=0 calls=0
*/
void sub_7a6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6c00ULL || rel >= 0x7a6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6c10 size=16 callers=0 calls=0
*/
void sub_7a6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6c10ULL || rel >= 0x7a6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6c20 size=16 callers=0 calls=0
*/
void sub_7a6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6c20ULL || rel >= 0x7a6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6c30 size=64 callers=0 calls=0
*/
void sub_7a6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6c30ULL || rel >= 0x7a6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6c70 size=16 callers=0 calls=0
*/
void sub_7a6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6c70ULL || rel >= 0x7a6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6c80 size=16 callers=0 calls=0
*/
void sub_7a6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6c80ULL || rel >= 0x7a6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6c90 size=16 callers=0 calls=0
*/
void sub_7a6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6c90ULL || rel >= 0x7a6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6ca0 size=32 callers=0 calls=0
*/
void sub_7a6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6ca0ULL || rel >= 0x7a6cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6cc0 size=16 callers=0 calls=0
*/
void sub_7a6cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6cc0ULL || rel >= 0x7a6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6cd0 size=16 callers=0 calls=0
*/
void sub_7a6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6cd0ULL || rel >= 0x7a6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6ce0 size=16 callers=0 calls=0
*/
void sub_7a6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6ce0ULL || rel >= 0x7a6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6cf0 size=32 callers=0 calls=0
*/
void sub_7a6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6cf0ULL || rel >= 0x7a6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6d10 size=16 callers=0 calls=0
*/
void sub_7a6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6d10ULL || rel >= 0x7a6d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6d20 size=16 callers=0 calls=0
*/
void sub_7a6d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6d20ULL || rel >= 0x7a6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6d30 size=16 callers=0 calls=0
*/
void sub_7a6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6d30ULL || rel >= 0x7a6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6d40 size=32 callers=0 calls=0
*/
void sub_7a6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6d40ULL || rel >= 0x7a6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6d60 size=16 callers=0 calls=0
*/
void sub_7a6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6d60ULL || rel >= 0x7a6d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6d70 size=16 callers=0 calls=0
*/
void sub_7a6d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6d70ULL || rel >= 0x7a6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6d80 size=16 callers=0 calls=0
*/
void sub_7a6d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6d80ULL || rel >= 0x7a6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a6d90 size=1232 callers=1 calls=14
   calls: dummy, item_sort_table, sub_142a1c0, sub_14b9710, sub_14ba010, sub_14d4cf0, sub_14d4d20, sub_14d5270, sub_14d5790, sub_14d6130, sub_6323a0, sub_7a7260
   ... +2 more
*/
void sub_7a6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a6d90ULL || rel >= 0x7a7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7260 size=1488 callers=1 calls=3
   calls: sub_1306f20, sub_14d4e80, sub_14d5190
*/
void sub_7a7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7260ULL || rel >= 0x7a7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7830 size=144 callers=1 calls=4
   calls: sub_14b9450, sub_14d5250, sub_14d5a10, sub_14d6820
*/
void sub_7a7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7830ULL || rel >= 0x7a78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a78c0 size=48 callers=1 calls=1
   calls: sub_14d5a90
*/
void sub_7a78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a78c0ULL || rel >= 0x7a78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a78f0 size=64 callers=1 calls=3
   calls: sub_14b9510, sub_14d5a30, sub_14d6840
*/
void sub_7a78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a78f0ULL || rel >= 0x7a7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7930 size=80 callers=1 calls=3
   calls: sub_14b95d0, sub_14d5a80, sub_14d6890
*/
void sub_7a7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7930ULL || rel >= 0x7a7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7980 size=80 callers=1 calls=2
   calls: sub_142a480, sub_14d5280
*/
void sub_7a7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7980ULL || rel >= 0x7a79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a79d0 size=32 callers=8 calls=0
*/
void sub_7a79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a79d0ULL || rel >= 0x7a79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a79f0 size=208 callers=1 calls=0
*/
void sub_7a79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a79f0ULL || rel >= 0x7a7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7ac0 size=128 callers=68 calls=3
   calls: sub_1311c60, sub_67d450, sub_eb8930
*/
void sub_7a7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7ac0ULL || rel >= 0x7a7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7b40 size=448 callers=5 calls=3
   calls: sub_1311c60, sub_67b990, sub_67d450
*/
void sub_7a7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7b40ULL || rel >= 0x7a7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7d00 size=352 callers=13 calls=4
   calls: sub_12fad80, sub_14db420, sub_7651c0, sub_765520
   ref: USE_ITEM
   ref: USE_ITEM_FOR_PINCH
*/
void USE_ITEM_FOR_PINCH(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7d00ULL || rel >= 0x7a7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7e60 size=16 callers=4 calls=0
*/
void sub_7a7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7e60ULL || rel >= 0x7a7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7e70 size=16 callers=2 calls=0
*/
void sub_7a7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7e70ULL || rel >= 0x7a7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a7e80 size=2144 callers=0 calls=21
   calls: sub_1366cd0, sub_14d6840, sub_1502120, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_799dd0, sub_79b5a0, sub_79b6f0, sub_79b840, sub_79b990, sub_79eb80
   ... +9 more
   ref: BagViewShop
   ref: BagViewTop
   ref: BagViewFade
   ref: BagStateEnd
   ref: BagViewSkillSelect
*/
void BagViewShop_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a7e80ULL || rel >= 0x7a86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a86e0 size=272 callers=0 calls=6
   calls: sub_14d6890, sub_799dd0, sub_7a7930, sub_c44310, sub_eb6530, sub_eb7830
*/
void sub_7a86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a86e0ULL || rel >= 0x7a87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a87f0 size=16 callers=0 calls=0
*/
void sub_7a87f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a87f0ULL || rel >= 0x7a8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8800 size=16 callers=0 calls=0
*/
void sub_7a8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8800ULL || rel >= 0x7a8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8810 size=16 callers=0 calls=0
*/
void sub_7a8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8810ULL || rel >= 0x7a8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8820 size=16 callers=0 calls=0
*/
void sub_7a8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8820ULL || rel >= 0x7a8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8830 size=16 callers=0 calls=0
*/
void sub_7a8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8830ULL || rel >= 0x7a8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8840 size=16 callers=0 calls=0
*/
void sub_7a8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8840ULL || rel >= 0x7a8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8850 size=16 callers=0 calls=0
*/
void sub_7a8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8850ULL || rel >= 0x7a8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8860 size=16 callers=0 calls=0
*/
void sub_7a8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8860ULL || rel >= 0x7a8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8870 size=16 callers=0 calls=0
*/
void sub_7a8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8870ULL || rel >= 0x7a8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8880 size=304 callers=0 calls=0
*/
void sub_7a8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8880ULL || rel >= 0x7a89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a89b0 size=336 callers=4 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_7a89b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a89b0ULL || rel >= 0x7a8b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8b00 size=128 callers=0 calls=0
*/
void sub_7a8b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8b00ULL || rel >= 0x7a8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8b80 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_7a8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8b80ULL || rel >= 0x7a8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8bd0 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_7a8bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8bd0ULL || rel >= 0x7a8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8c20 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/bag/bin/bag_top_itemlist_00_lyt.bin
*/
void bag_top_itemlist_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8c20ULL || rel >= 0x7a8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8d30 size=16 callers=0 calls=0
*/
void sub_7a8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8d30ULL || rel >= 0x7a8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8d40 size=16 callers=0 calls=0
*/
void sub_7a8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8d40ULL || rel >= 0x7a8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8d50 size=16 callers=0 calls=0
*/
void sub_7a8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8d50ULL || rel >= 0x7a8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8d60 size=16 callers=0 calls=0
*/
void sub_7a8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8d60ULL || rel >= 0x7a8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8d70 size=16 callers=0 calls=0
*/
void sub_7a8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8d70ULL || rel >= 0x7a8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8d80 size=16 callers=0 calls=0
*/
void sub_7a8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8d80ULL || rel >= 0x7a8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8d90 size=16 callers=0 calls=0
*/
void sub_7a8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8d90ULL || rel >= 0x7a8da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8da0 size=16 callers=0 calls=0
*/
void sub_7a8da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8da0ULL || rel >= 0x7a8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8db0 size=304 callers=0 calls=0
*/
void sub_7a8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8db0ULL || rel >= 0x7a8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a8ee0 size=3984 callers=0 calls=9
   calls: sub_14aad40, sub_14e1a30, sub_5cfad0, sub_7a3c20, sub_7a9e70, sub_e7eb10, sub_e806b0, sub_e83430, sub_e84310
*/
void sub_7a8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a8ee0ULL || rel >= 0x7a9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a9e70 size=272 callers=10 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_7a9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a9e70ULL || rel >= 0x7a9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a9f80 size=80 callers=2 calls=1
   calls: sub_14aad40
*/
void sub_7a9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a9f80ULL || rel >= 0x7a9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a9fd0 size=448 callers=1 calls=3
   calls: sub_1315b90, sub_7a9e70, sub_e7eb10
*/
void sub_7a9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a9fd0ULL || rel >= 0x7aa190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aa190 size=16 callers=1 calls=0
*/
void sub_7aa190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aa190ULL || rel >= 0x7aa1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aa1a0 size=144 callers=1 calls=1
   calls: sub_137b8e0
*/
void sub_7aa1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aa1a0ULL || rel >= 0x7aa230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aa230 size=16 callers=0 calls=0
*/
void sub_7aa230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aa230ULL || rel >= 0x7aa240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aa240 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/bag/bin/bag_shop_00_lyt.bin
   ref: bin/appli/bag/bin/uikit_bag_shop.bin
*/
void uikit_bag_shop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aa240ULL || rel >= 0x7aa420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aa420 size=768 callers=1 calls=6
   calls: sub_14ea4f0, sub_14ea9a0, sub_67b990, sub_67d450, sub_e7eb10, sub_eb7b00
*/
void sub_7aa420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aa420ULL || rel >= 0x7aa720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aa720 size=688 callers=4 calls=3
   calls: sub_1315b90, sub_7a9e70, sub_e7eb10
*/
void sub_7aa720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aa720ULL || rel >= 0x7aa9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aa9d0 size=128 callers=3 calls=1
   calls: sub_14aad40
*/
void sub_7aa9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aa9d0ULL || rel >= 0x7aaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aaa50 size=16 callers=2 calls=0
*/
void sub_7aaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aaa50ULL || rel >= 0x7aaa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aaa60 size=240 callers=3 calls=3
   calls: sub_14aad40, sub_14e1a00, sub_1500c40
*/
void sub_7aaa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aaa60ULL || rel >= 0x7aab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aab50 size=80 callers=7 calls=1
   calls: sub_14aad40
*/
void sub_7aab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aab50ULL || rel >= 0x7aaba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aaba0 size=320 callers=8 calls=3
   calls: sub_14e1a00, sub_7aa720, sub_e83430
*/
void sub_7aaba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aaba0ULL || rel >= 0x7aace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aace0 size=96 callers=0 calls=0
*/
void sub_7aace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aace0ULL || rel >= 0x7aad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aad40 size=96 callers=0 calls=0
*/
void sub_7aad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aad40ULL || rel >= 0x7aada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aada0 size=16 callers=0 calls=0
*/
void sub_7aada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aada0ULL || rel >= 0x7aadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aadb0 size=96 callers=0 calls=0
*/
void sub_7aadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aadb0ULL || rel >= 0x7aae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aae10 size=96 callers=0 calls=0
*/
void sub_7aae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aae10ULL || rel >= 0x7aae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aae70 size=16 callers=0 calls=0
*/
void sub_7aae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aae70ULL || rel >= 0x7aae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aae80 size=16 callers=0 calls=0
*/
void sub_7aae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aae80ULL || rel >= 0x7aae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aae90 size=96 callers=0 calls=0
*/
void sub_7aae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aae90ULL || rel >= 0x7aaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aaef0 size=96 callers=0 calls=0
*/
void sub_7aaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aaef0ULL || rel >= 0x7aaf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aaf50 size=304 callers=0 calls=0
*/
void sub_7aaf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aaf50ULL || rel >= 0x7ab080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab080 size=64 callers=0 calls=1
   calls: sub_7aaba0
*/
void sub_7ab080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab080ULL || rel >= 0x7ab0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab0c0 size=16 callers=0 calls=0
*/
void sub_7ab0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab0c0ULL || rel >= 0x7ab0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab0d0 size=16 callers=0 calls=0
*/
void sub_7ab0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab0d0ULL || rel >= 0x7ab0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab0e0 size=16 callers=0 calls=0
*/
void sub_7ab0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab0e0ULL || rel >= 0x7ab0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab0f0 size=64 callers=0 calls=1
   calls: sub_7aaba0
*/
void sub_7ab0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab0f0ULL || rel >= 0x7ab130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab130 size=16 callers=0 calls=0
*/
void sub_7ab130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab130ULL || rel >= 0x7ab140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab140 size=16 callers=0 calls=0
*/
void sub_7ab140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab140ULL || rel >= 0x7ab150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab150 size=16 callers=0 calls=0
*/
void sub_7ab150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab150ULL || rel >= 0x7ab160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab160 size=64 callers=0 calls=1
   calls: sub_7aaba0
*/
void sub_7ab160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab160ULL || rel >= 0x7ab1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab1a0 size=16 callers=0 calls=0
*/
void sub_7ab1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab1a0ULL || rel >= 0x7ab1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab1b0 size=16 callers=0 calls=0
*/
void sub_7ab1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab1b0ULL || rel >= 0x7ab1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab1c0 size=16 callers=0 calls=0
*/
void sub_7ab1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab1c0ULL || rel >= 0x7ab1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab1d0 size=64 callers=0 calls=1
   calls: sub_7aaba0
*/
void sub_7ab1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab1d0ULL || rel >= 0x7ab210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab210 size=16 callers=0 calls=0
*/
void sub_7ab210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab210ULL || rel >= 0x7ab220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab220 size=16 callers=0 calls=0
*/
void sub_7ab220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab220ULL || rel >= 0x7ab230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab230 size=16 callers=0 calls=0
*/
void sub_7ab230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab230ULL || rel >= 0x7ab240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab240 size=64 callers=0 calls=1
   calls: sub_7aaba0
*/
void sub_7ab240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab240ULL || rel >= 0x7ab280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab280 size=16 callers=0 calls=0
*/
void sub_7ab280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab280ULL || rel >= 0x7ab290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab290 size=16 callers=0 calls=0
*/
void sub_7ab290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab290ULL || rel >= 0x7ab2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab2a0 size=16 callers=0 calls=0
*/
void sub_7ab2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab2a0ULL || rel >= 0x7ab2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab2b0 size=64 callers=0 calls=1
   calls: sub_7aaba0
*/
void sub_7ab2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab2b0ULL || rel >= 0x7ab2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab2f0 size=16 callers=0 calls=0
*/
void sub_7ab2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab2f0ULL || rel >= 0x7ab300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab300 size=16 callers=0 calls=0
*/
void sub_7ab300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab300ULL || rel >= 0x7ab310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab310 size=16 callers=0 calls=0
*/
void sub_7ab310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab310ULL || rel >= 0x7ab320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab320 size=64 callers=0 calls=1
   calls: sub_7aaba0
*/
void sub_7ab320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab320ULL || rel >= 0x7ab360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab360 size=16 callers=0 calls=0
*/
void sub_7ab360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab360ULL || rel >= 0x7ab370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab370 size=16 callers=0 calls=0
*/
void sub_7ab370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab370ULL || rel >= 0x7ab380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab380 size=16 callers=0 calls=0
*/
void sub_7ab380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab380ULL || rel >= 0x7ab390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab390 size=64 callers=0 calls=1
   calls: sub_7aaba0
*/
void sub_7ab390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab390ULL || rel >= 0x7ab3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab3d0 size=16 callers=0 calls=0
*/
void sub_7ab3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab3d0ULL || rel >= 0x7ab3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab3e0 size=16 callers=0 calls=0
*/
void sub_7ab3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab3e0ULL || rel >= 0x7ab3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab3f0 size=16 callers=0 calls=0
*/
void sub_7ab3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab3f0ULL || rel >= 0x7ab400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab400 size=16 callers=0 calls=0
*/
void sub_7ab400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab400ULL || rel >= 0x7ab410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab410 size=16 callers=0 calls=0
*/
void sub_7ab410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab410ULL || rel >= 0x7ab420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab420 size=16 callers=0 calls=0
*/
void sub_7ab420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab420ULL || rel >= 0x7ab430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab430 size=16 callers=0 calls=0
*/
void sub_7ab430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab430ULL || rel >= 0x7ab440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab440 size=16 callers=0 calls=0
*/
void sub_7ab440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab440ULL || rel >= 0x7ab450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab450 size=16 callers=0 calls=0
*/
void sub_7ab450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab450ULL || rel >= 0x7ab460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab460 size=16 callers=0 calls=0
*/
void sub_7ab460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab460ULL || rel >= 0x7ab470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab470 size=16 callers=0 calls=0
*/
void sub_7ab470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab470ULL || rel >= 0x7ab480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab480 size=752 callers=0 calls=10
   calls: USE_ITEM_FOR_PINCH, sub_1367510, sub_1367a30, sub_799dd0, sub_79b6f0, sub_79b840, sub_7a21c0, sub_7a7e60, sub_c39c40, sub_d0c0
   ref: BagViewShop
   ref: BagStateLvup
   ref: BagViewTop
*/
void BagViewShop_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab480ULL || rel >= 0x7ab770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab770 size=544 callers=0 calls=9
   calls: sub_12ffe00, sub_1367a30, sub_764b40, sub_767dd0, sub_799dd0, sub_7a21c0, sub_7a3180, sub_7a33c0, sub_d63270
*/
void sub_7ab770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab770ULL || rel >= 0x7ab990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab990 size=16 callers=0 calls=0
*/
void sub_7ab990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab990ULL || rel >= 0x7ab9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab9a0 size=16 callers=0 calls=0
*/
void sub_7ab9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab9a0ULL || rel >= 0x7ab9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab9b0 size=16 callers=0 calls=0
*/
void sub_7ab9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab9b0ULL || rel >= 0x7ab9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab9c0 size=16 callers=0 calls=0
*/
void sub_7ab9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab9c0ULL || rel >= 0x7ab9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab9d0 size=16 callers=0 calls=0
*/
void sub_7ab9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab9d0ULL || rel >= 0x7ab9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab9e0 size=16 callers=0 calls=0
*/
void sub_7ab9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab9e0ULL || rel >= 0x7ab9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ab9f0 size=16 callers=0 calls=0
*/
void sub_7ab9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ab9f0ULL || rel >= 0x7aba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aba00 size=16 callers=0 calls=0
*/
void sub_7aba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aba00ULL || rel >= 0x7aba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aba10 size=16 callers=0 calls=0
*/
void sub_7aba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aba10ULL || rel >= 0x7aba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aba20 size=304 callers=0 calls=0
*/
void sub_7aba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aba20ULL || rel >= 0x7abb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007abb50 size=1696 callers=0 calls=30
   calls: sub_14aad40, sub_1502120, sub_5cfad0, sub_7863b0, sub_786410, sub_786420, sub_786ca0, sub_786d60, sub_795bc0, sub_799dd0, sub_79b6f0, sub_79b840
   ... +18 more
   ref: BagViewShop
   ref: BagStateStart
   ref: BagViewTop
   ref: BagViewFade
*/
void BagViewShop_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7abb50ULL || rel >= 0x7ac1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac1f0 size=112 callers=0 calls=3
   calls: sub_c44310, sub_eb6530, sub_eb7790
*/
void sub_7ac1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac1f0ULL || rel >= 0x7ac260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac260 size=16 callers=0 calls=0
*/
void sub_7ac260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac260ULL || rel >= 0x7ac270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac270 size=16 callers=0 calls=0
*/
void sub_7ac270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac270ULL || rel >= 0x7ac280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac280 size=16 callers=0 calls=0
*/
void sub_7ac280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac280ULL || rel >= 0x7ac290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac290 size=16 callers=0 calls=0
*/
void sub_7ac290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac290ULL || rel >= 0x7ac2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac2a0 size=16 callers=0 calls=0
*/
void sub_7ac2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac2a0ULL || rel >= 0x7ac2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac2b0 size=16 callers=0 calls=0
*/
void sub_7ac2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac2b0ULL || rel >= 0x7ac2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac2c0 size=16 callers=0 calls=0
*/
void sub_7ac2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac2c0ULL || rel >= 0x7ac2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac2d0 size=16 callers=0 calls=0
*/
void sub_7ac2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac2d0ULL || rel >= 0x7ac2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac2e0 size=16 callers=0 calls=0
*/
void sub_7ac2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac2e0ULL || rel >= 0x7ac2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac2f0 size=304 callers=0 calls=0
*/
void sub_7ac2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac2f0ULL || rel >= 0x7ac420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac420 size=128 callers=0 calls=0
*/
void sub_7ac420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac420ULL || rel >= 0x7ac4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ac4a0 size=2208 callers=0 calls=29
   calls: sub_1313580, sub_1502120, sub_5cfad0, sub_5cfaf0, sub_762930, sub_762940, sub_765520, sub_767950, sub_7847d0, sub_799dd0, sub_79b6f0, sub_79b990
   ... +17 more
   ref: BagViewTop
   ref: BagStateCombine
*/
void BagStateCombine(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ac4a0ULL || rel >= 0x7acd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007acd40 size=256 callers=1 calls=4
   calls: sub_762930, sub_762940, sub_799dd0, sub_7a21c0
*/
void sub_7acd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7acd40ULL || rel >= 0x7ace40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ace40 size=304 callers=1 calls=4
   calls: sub_762930, sub_762940, sub_799dd0, sub_7a21c0
*/
void sub_7ace40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ace40ULL || rel >= 0x7acf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007acf70 size=336 callers=2 calls=5
   calls: sub_14d56d0, sub_762930, sub_799dd0, sub_7a2ac0, sub_7a79d0
*/
void sub_7acf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7acf70ULL || rel >= 0x7ad0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ad0c0 size=1040 callers=0 calls=19
   calls: sub_762930, sub_799dd0, sub_79eb80, sub_7a12a0, sub_7a1e20, sub_7a2140, sub_7a3460, sub_7a7ac0, sub_7ad4d0, sub_7ad880, sub_7ae030, sub_7ae130
   ... +7 more
*/
void sub_7ad0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ad0c0ULL || rel >= 0x7ad4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ad4d0 size=944 callers=1 calls=15
   calls: sub_1502120, sub_5cfad0, sub_762930, sub_765520, sub_767950, sub_799dd0, sub_79eb80, sub_7a12a0, sub_7a2140, sub_7a21c0, sub_7a3460, sub_7a7ac0
   ... +3 more
*/
void sub_7ad4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ad4d0ULL || rel >= 0x7ad880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ad880 size=1968 callers=1 calls=18
   calls: Play_PV_EV__03d__02d__02d, USE_ITEM_FOR_PINCH, sub_13931c0, sub_13931e0, sub_1393200, sub_762930, sub_762940, sub_76f440, sub_7847d0, sub_799dd0, sub_7a12a0, sub_7a21c0
   ... +6 more
*/
void sub_7ad880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ad880ULL || rel >= 0x7ae030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ae030 size=256 callers=1 calls=5
   calls: sub_1313580, sub_1502160, sub_762930, sub_799dd0, sub_7a7ac0
*/
void sub_7ae030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ae030ULL || rel >= 0x7ae130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ae130 size=480 callers=1 calls=8
   calls: LEARN_SKILL, sub_1313580, sub_799dd0, sub_7a21c0, sub_7a7ac0, sub_7a7b40, sub_eb8c60, wazaname
*/
void sub_7ae130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ae130ULL || rel >= 0x7ae310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ae310 size=400 callers=1 calls=7
   calls: LEARN_SKILL_2, sub_1313580, sub_799dd0, sub_7a21c0, sub_7a7ac0, sub_eb8c60, wazaname
*/
void sub_7ae310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ae310ULL || rel >= 0x7ae4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ae4a0 size=272 callers=1 calls=5
   calls: sub_1313580, sub_799dd0, sub_7a7ac0, sub_eb8c60, wazaname
*/
void sub_7ae4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ae4a0ULL || rel >= 0x7ae5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ae5b0 size=288 callers=1 calls=4
   calls: sub_1313580, sub_799dd0, sub_7a7ac0, wazaname
*/
void sub_7ae5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ae5b0ULL || rel >= 0x7ae6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ae6d0 size=16 callers=0 calls=0
*/
void sub_7ae6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ae6d0ULL || rel >= 0x7ae6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ae6e0 size=320 callers=2 calls=3
   calls: sub_762930, sub_799dd0, sub_7a21c0
*/
void sub_7ae6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ae6e0ULL || rel >= 0x7ae820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ae820 size=480 callers=1 calls=7
   calls: sub_1366a40, sub_1366fa0, sub_1367100, sub_1367510, sub_1367bc0, sub_7a1f90, sub_7a21c0
*/
void sub_7ae820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ae820ULL || rel >= 0x7aea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aea00 size=336 callers=1 calls=4
   calls: sub_14d5120, sub_14d5750, sub_799dd0, sub_7a79d0
*/
void sub_7aea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aea00ULL || rel >= 0x7aeb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aeb50 size=432 callers=1 calls=4
   calls: sub_12fafe0, sub_766090, sub_799dd0, sub_7a21c0
   ref: LEARN_SKILL
*/
void LEARN_SKILL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aeb50ULL || rel >= 0x7aed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aed00 size=544 callers=1 calls=8
   calls: sub_12fafe0, sub_765dd0, sub_765de0, sub_7661c0, sub_7664a0, sub_766860, sub_799dd0, sub_7a21c0
   ref: LEARN_SKILL
*/
void LEARN_SKILL_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aed00ULL || rel >= 0x7aef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aef20 size=16 callers=0 calls=0
*/
void sub_7aef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aef20ULL || rel >= 0x7aef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aef30 size=16 callers=0 calls=0
*/
void sub_7aef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aef30ULL || rel >= 0x7aef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aef40 size=16 callers=0 calls=0
*/
void sub_7aef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aef40ULL || rel >= 0x7aef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aef50 size=16 callers=0 calls=0
*/
void sub_7aef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aef50ULL || rel >= 0x7aef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aef60 size=16 callers=0 calls=0
*/
void sub_7aef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aef60ULL || rel >= 0x7aef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aef70 size=16 callers=0 calls=0
*/
void sub_7aef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aef70ULL || rel >= 0x7aef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aef80 size=16 callers=0 calls=0
*/
void sub_7aef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aef80ULL || rel >= 0x7aef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aef90 size=16 callers=0 calls=0
*/
void sub_7aef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aef90ULL || rel >= 0x7aefa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aefa0 size=304 callers=0 calls=0
*/
void sub_7aefa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aefa0ULL || rel >= 0x7af0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007af0d0 size=656 callers=0 calls=7
   calls: sub_5cfaf0, sub_79b6f0, sub_79b990, sub_7af360, sub_c39c40, sub_d0c0, sub_e807f0
   ref: BagViewTop
   ref: BagStatePossess
*/
void BagStatePossess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7af0d0ULL || rel >= 0x7af360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007af360 size=832 callers=1 calls=8
   calls: sub_1315270, sub_1367350, sub_762d70, sub_767950, sub_799dd0, sub_7a21c0, sub_7a7ac0, sub_7a7b40
*/
void sub_7af360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7af360ULL || rel >= 0x7af6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007af6a0 size=208 callers=0 calls=4
   calls: sub_7a1e20, sub_7af770, sub_e80580, sub_e807f0
*/
void sub_7af6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7af6a0ULL || rel >= 0x7af770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007af770 size=336 callers=1 calls=8
   calls: HOLD_ITEM, sub_762d70, sub_799dd0, sub_7a33c0, sub_7a7ac0, sub_eb8a30, sub_eb8c60, sub_eb8ea0
*/
void sub_7af770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7af770ULL || rel >= 0x7af8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007af8c0 size=16 callers=0 calls=0
*/
void sub_7af8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7af8c0ULL || rel >= 0x7af8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007af8d0 size=528 callers=2 calls=12
   calls: sub_12fad80, sub_1367100, sub_1367510, sub_1379aa0, sub_762930, sub_762940, sub_762d70, sub_762d90, sub_768270, sub_768a10, sub_799dd0, sub_7a21c0
   ref: HOLD_ITEM
*/
void HOLD_ITEM(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7af8d0ULL || rel >= 0x7afae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afae0 size=16 callers=0 calls=0
*/
void sub_7afae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afae0ULL || rel >= 0x7afaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afaf0 size=16 callers=0 calls=0
*/
void sub_7afaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afaf0ULL || rel >= 0x7afb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afb00 size=16 callers=0 calls=0
*/
void sub_7afb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afb00ULL || rel >= 0x7afb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afb10 size=16 callers=0 calls=0
*/
void sub_7afb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afb10ULL || rel >= 0x7afb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afb20 size=16 callers=0 calls=0
*/
void sub_7afb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afb20ULL || rel >= 0x7afb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afb30 size=16 callers=0 calls=0
*/
void sub_7afb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afb30ULL || rel >= 0x7afb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afb40 size=16 callers=0 calls=0
*/
void sub_7afb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afb40ULL || rel >= 0x7afb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afb50 size=16 callers=0 calls=0
*/
void sub_7afb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afb50ULL || rel >= 0x7afb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afb60 size=304 callers=0 calls=0
*/
void sub_7afb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afb60ULL || rel >= 0x7afc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007afc90 size=640 callers=0 calls=6
   calls: sub_5cfaf0, sub_79b6f0, sub_79b990, sub_7aff10, sub_c39c40, sub_d0c0
   ref: BagViewTop
   ref: BagStateUsePoke
*/
void BagStateUsePoke(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7afc90ULL || rel >= 0x7aff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007aff10 size=1424 callers=1 calls=21
   calls: USE_ITEM_FOR_PINCH, sub_1302210, sub_1302df0, sub_1313580, sub_1367510, sub_1502120, sub_5cfad0, sub_765670, sub_765dd0, sub_7863b0, sub_786410, sub_7867e0
   ... +9 more
*/
void sub_7aff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7aff10ULL || rel >= 0x7b04a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b04a0 size=320 callers=0 calls=5
   calls: sub_799dd0, sub_7a1e20, sub_7a21c0, sub_7b05e0, sub_7b0780
*/
void sub_7b04a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b04a0ULL || rel >= 0x7b05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b05e0 size=416 callers=1 calls=4
   calls: sub_1313580, sub_1315b90, sub_799dd0, sub_7a3500
*/
void sub_7b05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b05e0ULL || rel >= 0x7b0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0780 size=224 callers=1 calls=4
   calls: sub_14eea30, sub_799dd0, sub_eb8a30, sub_eb8c60
*/
void sub_7b0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0780ULL || rel >= 0x7b0860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0860 size=16 callers=0 calls=0
*/
void sub_7b0860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0860ULL || rel >= 0x7b0870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0870 size=240 callers=3 calls=3
   calls: sub_1367890, sub_799dd0, sub_7a21c0
*/
void sub_7b0870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0870ULL || rel >= 0x7b0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0960 size=16 callers=0 calls=0
*/
void sub_7b0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0960ULL || rel >= 0x7b0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0970 size=16 callers=0 calls=0
*/
void sub_7b0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0970ULL || rel >= 0x7b0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0980 size=16 callers=0 calls=0
*/
void sub_7b0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0980ULL || rel >= 0x7b0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0990 size=16 callers=0 calls=0
*/
void sub_7b0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0990ULL || rel >= 0x7b09a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b09a0 size=16 callers=0 calls=0
*/
void sub_7b09a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b09a0ULL || rel >= 0x7b09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b09b0 size=16 callers=0 calls=0
*/
void sub_7b09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b09b0ULL || rel >= 0x7b09c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b09c0 size=16 callers=0 calls=0
*/
void sub_7b09c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b09c0ULL || rel >= 0x7b09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b09d0 size=16 callers=0 calls=0
*/
void sub_7b09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b09d0ULL || rel >= 0x7b09e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b09e0 size=304 callers=0 calls=0
*/
void sub_7b09e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b09e0ULL || rel >= 0x7b0b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0b10 size=640 callers=0 calls=6
   calls: sub_5cfaf0, sub_79b6f0, sub_79b990, sub_7b0d90, sub_c39c40, sub_d0c0
   ref: BagViewTop
   ref: BagStateEvolution
*/
void BagStateEvolution(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0b10ULL || rel >= 0x7b0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0d90 size=416 callers=1 calls=7
   calls: sub_12ffe00, sub_767e40, sub_799dd0, sub_7a2140, sub_7a21c0, sub_7a7ac0, sub_e807f0
*/
void sub_7b0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0d90ULL || rel >= 0x7b0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0f30 size=160 callers=0 calls=2
   calls: sub_7a1e20, sub_7b0fd0
*/
void sub_7b0f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0f30ULL || rel >= 0x7b0fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b0fd0 size=352 callers=1 calls=7
   calls: USE_ITEM_FOR_PINCH, sub_1367510, sub_799dd0, sub_7a21c0, sub_e807f0, sub_eb8a30, sub_eb8c60
*/
void sub_7b0fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b0fd0ULL || rel >= 0x7b1130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1130 size=16 callers=0 calls=0
*/
void sub_7b1130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1130ULL || rel >= 0x7b1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1140 size=16 callers=0 calls=0
*/
void sub_7b1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1140ULL || rel >= 0x7b1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1150 size=16 callers=0 calls=0
*/
void sub_7b1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1150ULL || rel >= 0x7b1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1160 size=16 callers=0 calls=0
*/
void sub_7b1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1160ULL || rel >= 0x7b1170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1170 size=16 callers=0 calls=0
*/
void sub_7b1170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1170ULL || rel >= 0x7b1180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1180 size=16 callers=0 calls=0
*/
void sub_7b1180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1180ULL || rel >= 0x7b1190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1190 size=16 callers=0 calls=0
*/
void sub_7b1190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1190ULL || rel >= 0x7b11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b11a0 size=16 callers=0 calls=0
*/
void sub_7b11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b11a0ULL || rel >= 0x7b11b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b11b0 size=16 callers=0 calls=0
*/
void sub_7b11b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b11b0ULL || rel >= 0x7b11c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b11c0 size=304 callers=0 calls=0
*/
void sub_7b11c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b11c0ULL || rel >= 0x7b12f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b12f0 size=768 callers=0 calls=10
   calls: USE_SPRAY, sub_5cfaf0, sub_799dd0, sub_79b6f0, sub_79b990, sub_7a2140, sub_7a7ac0, sub_c39c40, sub_d0c0, sub_e807f0
   ref: BagStateUsePlayer
   ref: BagViewTop
*/
void BagStateUsePlayer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b12f0ULL || rel >= 0x7b15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b15f0 size=688 callers=1 calls=15
   calls: sub_12fac60, sub_1367510, sub_1502120, sub_5cfad0, sub_799dd0, sub_7a2140, sub_7a21c0, sub_7a7ac0, sub_7b1a40, sub_7b1b50, sub_7b1c40, sub_d62b60
   ... +3 more
   ref: USE_SPRAY
*/
void USE_SPRAY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b15f0ULL || rel >= 0x7b18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b18a0 size=160 callers=0 calls=2
   calls: sub_7a1e20, sub_7b1940
*/
void sub_7b18a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b18a0ULL || rel >= 0x7b1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1940 size=240 callers=1 calls=3
   calls: sub_799dd0, sub_eb8a30, sub_eb8c60
*/
void sub_7b1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1940ULL || rel >= 0x7b1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1a30 size=16 callers=0 calls=0
*/
void sub_7b1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1a30ULL || rel >= 0x7b1a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1a40 size=272 callers=2 calls=3
   calls: sub_13149a0, sub_1315270, sub_799dd0
*/
void sub_7b1a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1a40ULL || rel >= 0x7b1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1b50 size=240 callers=2 calls=2
   calls: sub_13149a0, sub_799dd0
*/
void sub_7b1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1b50ULL || rel >= 0x7b1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1c40 size=512 callers=1 calls=9
   calls: sub_1313c10, sub_1367510, sub_136c8a0, sub_799dd0, sub_7a3140, sub_7a3150, sub_7a7ac0, sub_7b1b50, sub_e807f0
*/
void sub_7b1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1c40ULL || rel >= 0x7b1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1e40 size=16 callers=0 calls=0
*/
void sub_7b1e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1e40ULL || rel >= 0x7b1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1e50 size=16 callers=0 calls=0
*/
void sub_7b1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1e50ULL || rel >= 0x7b1e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1e60 size=16 callers=0 calls=0
*/
void sub_7b1e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1e60ULL || rel >= 0x7b1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1e70 size=16 callers=0 calls=0
*/
void sub_7b1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1e70ULL || rel >= 0x7b1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1e80 size=16 callers=0 calls=0
*/
void sub_7b1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1e80ULL || rel >= 0x7b1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1e90 size=16 callers=0 calls=0
*/
void sub_7b1e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1e90ULL || rel >= 0x7b1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1ea0 size=16 callers=0 calls=0
*/
void sub_7b1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1ea0ULL || rel >= 0x7b1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1eb0 size=16 callers=0 calls=0
*/
void sub_7b1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1eb0ULL || rel >= 0x7b1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1ec0 size=304 callers=0 calls=0
*/
void sub_7b1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1ec0ULL || rel >= 0x7b1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b1ff0 size=752 callers=0 calls=10
   calls: sub_5cfaf0, sub_799dd0, sub_79b6f0, sub_79b990, sub_7a0060, sub_7a0ff0, sub_7a2010, sub_c39c40, sub_d0c0, sub_e80580
   ref: BagViewTop
   ref: BagStateItemSelect
*/
void BagStateItemSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b1ff0ULL || rel >= 0x7b22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b22e0 size=560 callers=0 calls=12
   calls: sub_14aad40, sub_14e1a00, sub_79eb80, sub_7a1e20, sub_7b2510, sub_7b25c0, sub_7b2970, sub_7b2d60, sub_7b3230, sub_eb6530, sub_eb8a30, sub_eb8c60
*/
void sub_7b22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b22e0ULL || rel >= 0x7b2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b2510 size=176 callers=1 calls=4
   calls: sub_14e1a00, sub_799dd0, sub_79eb80, sub_7a2140
*/
void sub_7b2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b2510ULL || rel >= 0x7b25c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b25c0 size=944 callers=1 calls=15
   calls: sub_13149a0, sub_14aad40, sub_799dd0, sub_79eb80, sub_7a0060, sub_7a0940, sub_7a1ba0, sub_7a21c0, sub_7a22e0, sub_7a3830, sub_7a7ac0, sub_7b32f0
   ... +3 more
*/
void sub_7b25c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b25c0ULL || rel >= 0x7b2970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b2970 size=1008 callers=1 calls=17
   calls: sub_13149a0, sub_7847d0, sub_7863b0, sub_786410, sub_786420, sub_786ca0, sub_799dd0, sub_79eb80, sub_7a0940, sub_7a0ff0, sub_7a2140, sub_7a21c0
   ... +5 more
*/
void sub_7b2970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b2970ULL || rel >= 0x7b2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b2d60 size=1232 callers=1 calls=18
   calls: sub_1367de0, sub_13682d0, sub_13687b0, sub_1368850, sub_13688f0, sub_13689d0, sub_14eea30, sub_1502120, sub_5cfad0, sub_799dd0, sub_79eb80, sub_7a0ff0
   ... +6 more
*/
void sub_7b2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b2d60ULL || rel >= 0x7b3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3230 size=176 callers=1 calls=8
   calls: sub_14e1a00, sub_79eb80, sub_7a0060, sub_7a0ff0, sub_7a2010, sub_7a2140, sub_e80580, sub_eb8e80
*/
void sub_7b3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3230ULL || rel >= 0x7b32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b32e0 size=16 callers=0 calls=0
*/
void sub_7b32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b32e0ULL || rel >= 0x7b32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b32f0 size=416 callers=1 calls=8
   calls: sub_137b960, sub_79eb80, sub_7a21c0, sub_7a2550, sub_7a27c0, sub_7a28c0, sub_7b3780, sub_7b38d0
*/
void sub_7b32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b32f0ULL || rel >= 0x7b3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3490 size=336 callers=1 calls=5
   calls: sub_7a1ae0, sub_7a1af0, sub_7a2550, sub_7a27c0, sub_7a28c0
*/
void sub_7b3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3490ULL || rel >= 0x7b35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b35e0 size=208 callers=1 calls=5
   calls: sub_7863b0, sub_786410, sub_786420, sub_799dd0, sub_7a21c0
*/
void sub_7b35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b35e0ULL || rel >= 0x7b36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b36b0 size=208 callers=1 calls=5
   calls: sub_14e1a00, sub_799dd0, sub_7a2140, sub_7a7ac0, sub_e807f0
*/
void sub_7b36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b36b0ULL || rel >= 0x7b3780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3780 size=336 callers=1 calls=5
   calls: sub_7863b0, sub_786410, sub_786420, sub_799dd0, sub_7a21c0
*/
void sub_7b3780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3780ULL || rel >= 0x7b38d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b38d0 size=272 callers=1 calls=5
   calls: sub_7863b0, sub_786410, sub_786fb0, sub_799dd0, sub_7a21c0
*/
void sub_7b38d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b38d0ULL || rel >= 0x7b39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b39e0 size=16 callers=0 calls=0
*/
void sub_7b39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b39e0ULL || rel >= 0x7b39f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b39f0 size=16 callers=0 calls=0
*/
void sub_7b39f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b39f0ULL || rel >= 0x7b3a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3a00 size=16 callers=0 calls=0
*/
void sub_7b3a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3a00ULL || rel >= 0x7b3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3a10 size=16 callers=0 calls=0
*/
void sub_7b3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3a10ULL || rel >= 0x7b3a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3a20 size=16 callers=0 calls=0
*/
void sub_7b3a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3a20ULL || rel >= 0x7b3a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3a30 size=16 callers=0 calls=0
*/
void sub_7b3a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3a30ULL || rel >= 0x7b3a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3a40 size=16 callers=0 calls=0
*/
void sub_7b3a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3a40ULL || rel >= 0x7b3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3a50 size=16 callers=0 calls=0
*/
void sub_7b3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3a50ULL || rel >= 0x7b3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3a60 size=304 callers=0 calls=0
*/
void sub_7b3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3a60ULL || rel >= 0x7b3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3b90 size=1088 callers=0 calls=16
   calls: sub_14e1a00, sub_5cfaf0, sub_799dd0, sub_79b6f0, sub_79b990, sub_79eb80, sub_7a20c0, sub_7a2140, sub_7a23b0, sub_7a3570, sub_7a7ac0, sub_7b3fd0
   ... +4 more
   ref: BagViewTop
   ref: BagStatePokeSelect
*/
void BagStatePokeSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3b90ULL || rel >= 0x7b3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b3fd0 size=192 callers=1 calls=5
   calls: sub_7863b0, sub_786410, sub_786420, sub_799dd0, sub_7a21c0
*/
void sub_7b3fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b3fd0ULL || rel >= 0x7b4090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4090 size=256 callers=0 calls=6
   calls: sub_79eb80, sub_7a1e20, sub_7a2140, sub_7b4190, sub_7b4310, sub_7b4430
*/
void sub_7b4090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4090ULL || rel >= 0x7b4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4190 size=384 callers=1 calls=8
   calls: sub_767950, sub_799dd0, sub_79eb80, sub_7a2140, sub_7a7ac0, sub_7b4580, sub_e807f0, sub_eb8a30
*/
void sub_7b4190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4190ULL || rel >= 0x7b4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4310 size=288 callers=1 calls=5
   calls: sub_767950, sub_799dd0, sub_7a7ac0, sub_7b4580, sub_e807f0
*/
void sub_7b4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4310ULL || rel >= 0x7b4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4430 size=320 callers=1 calls=6
   calls: sub_799dd0, sub_7a20c0, sub_7a7ac0, sub_e80580, sub_e807f0, sub_eb8c60
*/
void sub_7b4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4430ULL || rel >= 0x7b4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4570 size=16 callers=0 calls=0
*/
void sub_7b4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4570ULL || rel >= 0x7b4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4580 size=528 callers=2 calls=8
   calls: sub_7863b0, sub_786410, sub_786420, sub_7869b0, sub_786ca0, sub_799dd0, sub_79eb80, sub_7a21c0
*/
void sub_7b4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4580ULL || rel >= 0x7b4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4790 size=16 callers=0 calls=0
*/
void sub_7b4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4790ULL || rel >= 0x7b47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b47a0 size=16 callers=0 calls=0
*/
void sub_7b47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b47a0ULL || rel >= 0x7b47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b47b0 size=16 callers=0 calls=0
*/
void sub_7b47b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b47b0ULL || rel >= 0x7b47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b47c0 size=16 callers=0 calls=0
*/
void sub_7b47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b47c0ULL || rel >= 0x7b47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b47d0 size=16 callers=0 calls=0
*/
void sub_7b47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b47d0ULL || rel >= 0x7b47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b47e0 size=16 callers=0 calls=0
*/
void sub_7b47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b47e0ULL || rel >= 0x7b47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b47f0 size=16 callers=0 calls=0
*/
void sub_7b47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b47f0ULL || rel >= 0x7b4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4800 size=16 callers=0 calls=0
*/
void sub_7b4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4800ULL || rel >= 0x7b4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4810 size=304 callers=0 calls=0
*/
void sub_7b4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4810ULL || rel >= 0x7b4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4940 size=320 callers=0 calls=4
   calls: sub_14aad40, sub_14e1a00, sub_e83d70, sub_e840a0
   ref: grid_01
   ref: skill_button_cancel
*/
void skill_button_cancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4940ULL || rel >= 0x7b4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4a80 size=128 callers=2 calls=2
   calls: sub_14aad40, sub_e833a0
   ref: anime_f_out
   ref: anime_f_in
*/
void anime_f_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4a80ULL || rel >= 0x7b4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4b00 size=176 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_7b4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4b00ULL || rel >= 0x7b4bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4bb0 size=80 callers=1 calls=1
   calls: sub_14e6550
*/
void sub_7b4bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4bb0ULL || rel >= 0x7b4c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4c00 size=272 callers=0 calls=1
   calls: sub_1500c40
*/
void sub_7b4c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4c00ULL || rel >= 0x7b4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4d10 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/bag/bin/bag_poke_skill_00_lyt.bin
   ref: bin/appli/bag/bin/uikit_bag_skill_select.bin
*/
void uikit_bag_skill_select(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4d10ULL || rel >= 0x7b4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b4ef0 size=2240 callers=1 calls=9
   calls: sub_14aad40, sub_14da630, sub_14da810, sub_14e1a00, sub_14e1a30, sub_14e6550, sub_14e6d90, sub_765de0, sub_e7eb10
*/
void sub_7b4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b4ef0ULL || rel >= 0x7b57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b57b0 size=192 callers=0 calls=0
*/
void sub_7b57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b57b0ULL || rel >= 0x7b5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5870 size=192 callers=0 calls=0
*/
void sub_7b5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5870ULL || rel >= 0x7b5930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5930 size=16 callers=0 calls=0
*/
void sub_7b5930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5930ULL || rel >= 0x7b5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5940 size=192 callers=0 calls=0
*/
void sub_7b5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5940ULL || rel >= 0x7b5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5a00 size=192 callers=0 calls=0
*/
void sub_7b5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5a00ULL || rel >= 0x7b5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5ac0 size=16 callers=0 calls=0
*/
void sub_7b5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5ac0ULL || rel >= 0x7b5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5ad0 size=16 callers=0 calls=0
*/
void sub_7b5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5ad0ULL || rel >= 0x7b5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5ae0 size=192 callers=0 calls=0
*/
void sub_7b5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5ae0ULL || rel >= 0x7b5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5ba0 size=192 callers=0 calls=0
*/
void sub_7b5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5ba0ULL || rel >= 0x7b5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5c60 size=304 callers=0 calls=0
*/
void sub_7b5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5c60ULL || rel >= 0x7b5d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5d90 size=32 callers=0 calls=0
*/
void sub_7b5d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5d90ULL || rel >= 0x7b5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5db0 size=16 callers=0 calls=0
*/
void sub_7b5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5db0ULL || rel >= 0x7b5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5dc0 size=16 callers=0 calls=0
*/
void sub_7b5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5dc0ULL || rel >= 0x7b5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5dd0 size=16 callers=0 calls=0
*/
void sub_7b5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5dd0ULL || rel >= 0x7b5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b5de0 size=1056 callers=0 calls=17
   calls: anime_f_out, sub_5cfaf0, sub_7863b0, sub_786410, sub_7867e0, sub_799dd0, sub_79b5a0, sub_79b6f0, sub_79b990, sub_7a21c0, sub_7a23b0, sub_7a7ac0
   ... +5 more
   ref: BagViewTop
   ref: BagViewSkillSelect
   ref: BagStateSkillSelect
*/
void BagStateSkillSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b5de0ULL || rel >= 0x7b6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6200 size=224 callers=0 calls=5
   calls: sub_14e1a00, sub_7a1e20, sub_7b4b00, sub_7b4bb0, sub_7b62e0
*/
void sub_7b6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6200ULL || rel >= 0x7b62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b62e0 size=208 callers=1 calls=3
   calls: anime_f_out, sub_799dd0, sub_eb8a30
*/
void sub_7b62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b62e0ULL || rel >= 0x7b63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b63b0 size=16 callers=0 calls=0
*/
void sub_7b63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b63b0ULL || rel >= 0x7b63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b63c0 size=16 callers=0 calls=0
*/
void sub_7b63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b63c0ULL || rel >= 0x7b63d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b63d0 size=16 callers=0 calls=0
*/
void sub_7b63d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b63d0ULL || rel >= 0x7b63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b63e0 size=16 callers=0 calls=0
*/
void sub_7b63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b63e0ULL || rel >= 0x7b63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b63f0 size=16 callers=0 calls=0
*/
void sub_7b63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b63f0ULL || rel >= 0x7b6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6400 size=16 callers=0 calls=0
*/
void sub_7b6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6400ULL || rel >= 0x7b6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6410 size=16 callers=0 calls=0
*/
void sub_7b6410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6410ULL || rel >= 0x7b6420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6420 size=16 callers=0 calls=0
*/
void sub_7b6420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6420ULL || rel >= 0x7b6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6430 size=16 callers=0 calls=0
*/
void sub_7b6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6430ULL || rel >= 0x7b6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6440 size=304 callers=0 calls=0
*/
void sub_7b6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6440ULL || rel >= 0x7b6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6570 size=1120 callers=0 calls=18
   calls: sub_1313580, sub_5cfaf0, sub_762930, sub_767950, sub_799dd0, sub_79b6f0, sub_79b990, sub_79eb80, sub_7a20c0, sub_7a2550, sub_7a27c0, sub_7a28c0
   ... +6 more
   ref: BagViewTop
   ref: BagStateRotomCatalog
*/
void BagStateRotomCatalog(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6570ULL || rel >= 0x7b69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b69d0 size=272 callers=2 calls=6
   calls: sub_1313580, sub_762940, sub_799dd0, sub_7a7b40, sub_e807f0, wazaname
*/
void sub_7b69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b69d0ULL || rel >= 0x7b6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6ae0 size=592 callers=0 calls=14
   calls: LEARN_SKILL_3, sub_7a1e20, sub_7b69d0, sub_7b6d30, sub_7b6ed0, sub_7b6fd0, sub_7b70f0, sub_7b71c0, sub_7b7300, sub_e80580, sub_e807f0, sub_eb8a30
   ... +2 more
*/
void sub_7b6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6ae0ULL || rel >= 0x7b6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6d30 size=416 callers=1 calls=9
   calls: USE_ITEM_FOR_PINCH, sub_1379aa0, sub_762940, sub_768270, sub_799dd0, sub_7a21c0, sub_7a7ac0, sub_e807f0, sub_eb8a30
*/
void sub_7b6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6d30ULL || rel >= 0x7b6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6ed0 size=256 callers=1 calls=7
   calls: sub_14d56d0, sub_1502120, sub_5cfad0, sub_799dd0, sub_7a2ac0, sub_7a79d0, sub_eb8e80
*/
void sub_7b6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6ed0ULL || rel >= 0x7b6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b6fd0 size=288 callers=1 calls=6
   calls: Play_PV_EV__03d__02d__02d, sub_14d5750, sub_762930, sub_762940, sub_799dd0, sub_7a79d0
*/
void sub_7b6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b6fd0ULL || rel >= 0x7b70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b70f0 size=208 callers=1 calls=5
   calls: sub_1313580, sub_1502160, sub_799dd0, sub_7a7ac0, sub_e807f0
*/
void sub_7b70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b70f0ULL || rel >= 0x7b71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b71c0 size=304 callers=1 calls=9
   calls: sub_1313580, sub_762940, sub_799dd0, sub_7a7ac0, sub_e807f0, sub_eb8a30, sub_eb8c60, sub_eb8ea0, wazaname
*/
void sub_7b71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b71c0ULL || rel >= 0x7b72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b72f0 size=16 callers=0 calls=0
*/
void sub_7b72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b72f0ULL || rel >= 0x7b7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7300 size=416 callers=1 calls=8
   calls: sub_1313580, sub_765dd0, sub_766860, sub_768a70, sub_799dd0, sub_7a7ac0, sub_e807f0, wazaname
*/
void sub_7b7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7300ULL || rel >= 0x7b74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b74a0 size=432 callers=2 calls=10
   calls: sub_12fafe0, sub_1313580, sub_762940, sub_765dd0, sub_765de0, sub_768c60, sub_799dd0, sub_7a7ac0, sub_e807f0, wazaname
   ref: LEARN_SKILL
*/
void LEARN_SKILL_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b74a0ULL || rel >= 0x7b7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7650 size=16 callers=0 calls=0
*/
void sub_7b7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7650ULL || rel >= 0x7b7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7660 size=16 callers=0 calls=0
*/
void sub_7b7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7660ULL || rel >= 0x7b7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7670 size=16 callers=0 calls=0
*/
void sub_7b7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7670ULL || rel >= 0x7b7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7680 size=16 callers=0 calls=0
*/
void sub_7b7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7680ULL || rel >= 0x7b7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7690 size=16 callers=0 calls=0
*/
void sub_7b7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7690ULL || rel >= 0x7b76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b76a0 size=16 callers=0 calls=0
*/
void sub_7b76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b76a0ULL || rel >= 0x7b76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b76b0 size=16 callers=0 calls=0
*/
void sub_7b76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b76b0ULL || rel >= 0x7b76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b76c0 size=16 callers=0 calls=0
*/
void sub_7b76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b76c0ULL || rel >= 0x7b76d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b76d0 size=304 callers=0 calls=0
*/
void sub_7b76d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b76d0ULL || rel >= 0x7b7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7800 size=816 callers=0 calls=10
   calls: sub_1313580, sub_5cfaf0, sub_799dd0, sub_79b6f0, sub_79b990, sub_7a21c0, sub_7a7b40, sub_c39c40, sub_d0c0, sub_e807f0
   ref: BagStateChangeSeikaku
   ref: BagViewTop
*/
void BagStateChangeSeikaku(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7800ULL || rel >= 0x7b7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7b30 size=800 callers=0 calls=16
   calls: USE_ITEM_FOR_PINCH, sub_1313580, sub_1315270, sub_1367510, sub_1367a30, sub_799dd0, sub_7a0060, sub_7a1e20, sub_7a21c0, sub_7a3180, sub_7a7ac0, sub_7b7e50
   ... +4 more
*/
void sub_7b7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7b30ULL || rel >= 0x7b7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b7e50 size=432 callers=1 calls=5
   calls: sub_136e8b0, sub_764c90, sub_767100, sub_799dd0, sub_7a21c0
*/
void sub_7b7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b7e50ULL || rel >= 0x7b8000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8000 size=16 callers=0 calls=0
*/
void sub_7b8000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8000ULL || rel >= 0x7b8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8010 size=16 callers=0 calls=0
*/
void sub_7b8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8010ULL || rel >= 0x7b8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8020 size=16 callers=0 calls=0
*/
void sub_7b8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8020ULL || rel >= 0x7b8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8030 size=16 callers=0 calls=0
*/
void sub_7b8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8030ULL || rel >= 0x7b8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8040 size=16 callers=0 calls=0
*/
void sub_7b8040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8040ULL || rel >= 0x7b8050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8050 size=16 callers=0 calls=0
*/
void sub_7b8050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8050ULL || rel >= 0x7b8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8060 size=16 callers=0 calls=0
*/
void sub_7b8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8060ULL || rel >= 0x7b8070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8070 size=16 callers=0 calls=0
*/
void sub_7b8070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8070ULL || rel >= 0x7b8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8080 size=16 callers=0 calls=0
*/
void sub_7b8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8080ULL || rel >= 0x7b8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8090 size=304 callers=0 calls=0
*/
void sub_7b8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8090ULL || rel >= 0x7b81c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b81c0 size=768 callers=0 calls=11
   calls: sub_5cfaf0, sub_786c10, sub_799dd0, sub_79b6f0, sub_79b990, sub_7a21c0, sub_7a30a0, sub_7b84c0, sub_c39c40, sub_d0c0, sub_e807f0
   ref: BagViewTop
   ref: BagStateSkillLearning
*/
void BagStateSkillLearning(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b81c0ULL || rel >= 0x7b84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b84c0 size=720 callers=1 calls=16
   calls: LEARN_SKILL_4, sub_1313580, sub_1502120, sub_5cfad0, sub_765de0, sub_765e60, sub_766090, sub_766940, sub_766990, sub_786c50, sub_786cf0, sub_799dd0
   ... +4 more
*/
void sub_7b84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b84c0ULL || rel >= 0x7b8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8790 size=768 callers=0 calls=10
   calls: sub_799dd0, sub_7a1e20, sub_7a7ac0, sub_7b8a90, sub_7b8c10, sub_7b8d50, sub_7b8e00, sub_7b8ef0, sub_eb8a30, sub_eb8c60
*/
void sub_7b8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8790ULL || rel >= 0x7b8a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8a90 size=384 callers=1 calls=5
   calls: LEARN_SKILL_4, sub_1313580, sub_799dd0, sub_7a7ac0, wazaname
*/
void sub_7b8a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8a90ULL || rel >= 0x7b8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8c10 size=320 callers=1 calls=4
   calls: sub_1313580, sub_799dd0, sub_eb8c60, wazaname
*/
void sub_7b8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8c10ULL || rel >= 0x7b8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8d50 size=176 callers=1 calls=6
   calls: sub_7a2550, sub_7a27c0, sub_7a28c0, sub_e80580, sub_e807f0, sub_eb8c60
*/
void sub_7b8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8d50ULL || rel >= 0x7b8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8e00 size=240 callers=1 calls=5
   calls: LEARN_SKILL_4, sub_766090, sub_799dd0, sub_e807f0, sub_eb8a30
*/
void sub_7b8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8e00ULL || rel >= 0x7b8ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8ef0 size=240 callers=1 calls=5
   calls: sub_799dd0, sub_7a7ac0, sub_eb8a30, sub_eb8c60, wazaname
*/
void sub_7b8ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8ef0ULL || rel >= 0x7b8fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8fe0 size=16 callers=0 calls=0
*/
void sub_7b8fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8fe0ULL || rel >= 0x7b8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b8ff0 size=464 callers=3 calls=7
   calls: USE_ITEM_FOR_PINCH, sub_12fafe0, sub_1367510, sub_136e8b0, sub_767090, sub_799dd0, sub_7a21c0
   ref: LEARN_SKILL
*/
void LEARN_SKILL_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b8ff0ULL || rel >= 0x7b91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b91c0 size=16 callers=0 calls=0
*/
void sub_7b91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b91c0ULL || rel >= 0x7b91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b91d0 size=16 callers=0 calls=0
*/
void sub_7b91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b91d0ULL || rel >= 0x7b91e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b91e0 size=16 callers=0 calls=0
*/
void sub_7b91e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b91e0ULL || rel >= 0x7b91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b91f0 size=16 callers=0 calls=0
*/
void sub_7b91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b91f0ULL || rel >= 0x7b9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9200 size=16 callers=0 calls=0
*/
void sub_7b9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9200ULL || rel >= 0x7b9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9210 size=16 callers=0 calls=0
*/
void sub_7b9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9210ULL || rel >= 0x7b9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9220 size=16 callers=0 calls=0
*/
void sub_7b9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9220ULL || rel >= 0x7b9230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9230 size=16 callers=0 calls=0
*/
void sub_7b9230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9230ULL || rel >= 0x7b9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9240 size=304 callers=0 calls=0
*/
void sub_7b9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9240ULL || rel >= 0x7b9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9370 size=816 callers=0 calls=10
   calls: sub_1313580, sub_5cfaf0, sub_799dd0, sub_79b6f0, sub_79b990, sub_7a21c0, sub_7a7b40, sub_c39c40, sub_d0c0, sub_e807f0
   ref: BagViewTop
   ref: BagStateCharacteristic
*/
void BagStateCharacteristic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9370ULL || rel >= 0x7b96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b96a0 size=192 callers=0 calls=3
   calls: sub_7a1e20, sub_7b9760, sub_7b9980
*/
void sub_7b96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b96a0ULL || rel >= 0x7b9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9760 size=544 callers=1 calls=13
   calls: USE_ITEM_FOR_PINCH, sub_1313580, sub_1367510, sub_767160, sub_7672d0, sub_799dd0, sub_7a2140, sub_7a7ac0, sub_7b9a60, sub_eb8a30, sub_eb8c60, sub_eb8ea0
   ... +1 more
*/
void sub_7b9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9760ULL || rel >= 0x7b9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9980 size=208 callers=1 calls=4
   calls: sub_1367a30, sub_7a0060, sub_7a3180, sub_eb8c60
*/
void sub_7b9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9980ULL || rel >= 0x7b9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9a50 size=16 callers=0 calls=0
*/
void sub_7b9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9a50ULL || rel >= 0x7b9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9a60 size=192 callers=1 calls=6
   calls: sub_762930, sub_762940, sub_767170, sub_76bc60, sub_76bcf0, sub_799dd0
*/
void sub_7b9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9a60ULL || rel >= 0x7b9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9b20 size=16 callers=0 calls=0
*/
void sub_7b9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9b20ULL || rel >= 0x7b9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9b30 size=16 callers=0 calls=0
*/
void sub_7b9b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9b30ULL || rel >= 0x7b9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9b40 size=16 callers=0 calls=0
*/
void sub_7b9b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9b40ULL || rel >= 0x7b9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9b50 size=16 callers=0 calls=0
*/
void sub_7b9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9b50ULL || rel >= 0x7b9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9b60 size=16 callers=0 calls=0
*/
void sub_7b9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9b60ULL || rel >= 0x7b9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9b70 size=16 callers=0 calls=0
*/
void sub_7b9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9b70ULL || rel >= 0x7b9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9b80 size=16 callers=0 calls=0
*/
void sub_7b9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9b80ULL || rel >= 0x7b9b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9b90 size=16 callers=0 calls=0
*/
void sub_7b9b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9b90ULL || rel >= 0x7b9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9ba0 size=304 callers=0 calls=0
*/
void sub_7b9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9ba0ULL || rel >= 0x7b9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007b9cd0 size=1040 callers=0 calls=10
   calls: sub_5cfaf0, sub_79b6f0, sub_79b840, sub_79b990, sub_7a0060, sub_7a2010, sub_c39c40, sub_d0c0, sub_e80580, sub_e807f0
   ref: BagViewShop
   ref: BagViewTop
   ref: BagStateShopItemSelect
*/
void BagStateShopItemSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7b9cd0ULL || rel >= 0x7ba0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ba0e0 size=496 callers=0 calls=16
   calls: sub_14e1a00, sub_79eb80, sub_7a1e20, sub_7a2140, sub_7a2550, sub_7a27c0, sub_7a28c0, sub_7ba2d0, sub_7ba670, sub_7ba790, sub_7ba920, sub_7baa60
   ... +4 more
*/
void sub_7ba0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ba0e0ULL || rel >= 0x7ba2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ba2d0 size=928 callers=1 calls=21
   calls: sub_1315270, sub_1315b90, sub_1367a30, sub_14e1a00, sub_7863b0, sub_786410, sub_786420, sub_786bd0, sub_786d60, sub_799dd0, sub_79eb80, sub_7a0060
   ... +9 more
*/
void sub_7ba2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ba2d0ULL || rel >= 0x7ba670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ba670 size=288 callers=1 calls=7
   calls: sub_1315b90, sub_799dd0, sub_7a7ac0, sub_7aab50, sub_7bab20, sub_e807f0, sub_eb8a30
*/
void sub_7ba670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ba670ULL || rel >= 0x7ba790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ba790 size=400 callers=1 calls=11
   calls: sub_1315270, sub_1315b90, sub_1502120, sub_5cfad0, sub_799dd0, sub_7a21c0, sub_7a7ac0, sub_7aab50, sub_7bab20, sub_e807f0, sub_eb8a30
*/
void sub_7ba790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ba790ULL || rel >= 0x7ba920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ba920 size=320 callers=1 calls=15
   calls: sub_1367510, sub_14e1a00, sub_7a0060, sub_7a1c30, sub_7a2010, sub_7a2140, sub_7a21c0, sub_7a2250, sub_7aa190, sub_7aa1a0, sub_7aab50, sub_e80580
   ... +3 more
*/
void sub_7ba920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ba920ULL || rel >= 0x7baa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007baa60 size=176 callers=1 calls=7
   calls: sub_14e1a00, sub_7a0060, sub_7a2010, sub_7a2140, sub_e80580, sub_e807f0, sub_eb8e80
*/
void sub_7baa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7baa60ULL || rel >= 0x7bab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bab10 size=16 callers=0 calls=0
*/
void sub_7bab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bab10ULL || rel >= 0x7bab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bab20 size=176 callers=2 calls=8
   calls: sub_14e1a00, sub_79eb80, sub_7a0060, sub_7a0940, sub_7a2010, sub_7a2140, sub_7a3830, sub_e80580
*/
void sub_7bab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bab20ULL || rel >= 0x7babd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007babd0 size=16 callers=0 calls=0
*/
void sub_7babd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7babd0ULL || rel >= 0x7babe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007babe0 size=16 callers=0 calls=0
*/
void sub_7babe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7babe0ULL || rel >= 0x7babf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007babf0 size=16 callers=0 calls=0
*/
void sub_7babf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7babf0ULL || rel >= 0x7bac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bac00 size=16 callers=0 calls=0
*/
void sub_7bac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bac00ULL || rel >= 0x7bac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bac10 size=16 callers=0 calls=0
*/
void sub_7bac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bac10ULL || rel >= 0x7bac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bac20 size=16 callers=0 calls=0
*/
void sub_7bac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bac20ULL || rel >= 0x7bac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bac30 size=16 callers=0 calls=0
*/
void sub_7bac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bac30ULL || rel >= 0x7bac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bac40 size=16 callers=0 calls=0
*/
void sub_7bac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bac40ULL || rel >= 0x7bac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bac50 size=304 callers=0 calls=0
*/
void sub_7bac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bac50ULL || rel >= 0x7bad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bad80 size=32 callers=0 calls=0
*/
void sub_7bad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bad80ULL || rel >= 0x7bada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bada0 size=16 callers=0 calls=0
*/
void sub_7bada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bada0ULL || rel >= 0x7badb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007badb0 size=16 callers=0 calls=0
*/
void sub_7badb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7badb0ULL || rel >= 0x7badc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007badc0 size=16 callers=0 calls=0
*/
void sub_7badc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7badc0ULL || rel >= 0x7badd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007badd0 size=1440 callers=0 calls=18
   calls: sub_1313580, sub_1315270, sub_1367a30, sub_5cfaf0, sub_799dd0, sub_79b6f0, sub_79b840, sub_79b990, sub_7a21c0, sub_7a7ac0, sub_7a7e70, sub_7aa720
   ... +6 more
   ref: BagViewShop
   ref: BagViewTop
   ref: BagStateUsePokeNumSelect
*/
void BagViewShop_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7badd0ULL || rel >= 0x7bb370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bb370 size=448 callers=1 calls=10
   calls: sub_12ffe00, sub_1302f40, sub_13031a0, sub_762930, sub_763de0, sub_764b40, sub_767dd0, sub_799dd0, sub_7a21c0, sub_d63270
*/
void sub_7bb370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bb370ULL || rel >= 0x7bb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bb530 size=480 callers=1 calls=12
   calls: sub_1302f40, sub_13031a0, sub_762930, sub_762940, sub_763de0, sub_764b40, sub_7658a0, sub_76bd60, sub_76bdf0, sub_799dd0, sub_7a21c0, sub_7bc370
*/
void sub_7bb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bb530ULL || rel >= 0x7bb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bb710 size=656 callers=0 calls=15
   calls: sub_1367a30, sub_1502120, sub_5cfad0, sub_799dd0, sub_7a21c0, sub_7a3180, sub_7a33c0, sub_7a7e70, sub_7aab50, sub_7bb9a0, sub_7bbc10, sub_e807f0
   ... +3 more
*/
void sub_7bb710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bb710ULL || rel >= 0x7bb9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bb9a0 size=624 callers=1 calls=11
   calls: USE_ITEM_FOR_PINCH, sub_1315b90, sub_1367510, sub_1367a30, sub_763de0, sub_763e20, sub_799dd0, sub_7a21c0, sub_7a7ac0, sub_7a7e60, sub_e807f0
*/
void sub_7bb9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bb9a0ULL || rel >= 0x7bbc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bbc10 size=1872 callers=1 calls=20
   calls: USE_ITEM_FOR_PINCH, sub_1302df0, sub_1313270, sub_1313580, sub_1367510, sub_1367a30, sub_136e8b0, sub_764c30, sub_767720, sub_7863b0, sub_786410, sub_7867e0
   ... +8 more
*/
void sub_7bbc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bbc10ULL || rel >= 0x7bc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc360 size=16 callers=0 calls=0
*/
void sub_7bc360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc360ULL || rel >= 0x7bc370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc370 size=304 callers=2 calls=7
   calls: sub_762930, sub_762940, sub_764b40, sub_7658a0, sub_76bd60, sub_76bdf0, sub_799dd0
*/
void sub_7bc370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc370ULL || rel >= 0x7bc4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc4a0 size=16 callers=0 calls=0
*/
void sub_7bc4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc4a0ULL || rel >= 0x7bc4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc4b0 size=16 callers=0 calls=0
*/
void sub_7bc4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc4b0ULL || rel >= 0x7bc4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc4c0 size=16 callers=0 calls=0
*/
void sub_7bc4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc4c0ULL || rel >= 0x7bc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc4d0 size=16 callers=0 calls=0
*/
void sub_7bc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc4d0ULL || rel >= 0x7bc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc4e0 size=16 callers=0 calls=0
*/
void sub_7bc4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc4e0ULL || rel >= 0x7bc4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc4f0 size=16 callers=0 calls=0
*/
void sub_7bc4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc4f0ULL || rel >= 0x7bc500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc500 size=16 callers=0 calls=0
*/
void sub_7bc500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc500ULL || rel >= 0x7bc510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc510 size=16 callers=0 calls=0
*/
void sub_7bc510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc510ULL || rel >= 0x7bc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc520 size=304 callers=0 calls=0
*/
void sub_7bc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc520ULL || rel >= 0x7bc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc650 size=336 callers=4 calls=2
   calls: sub_13a5bb0, sub_7bc7a0
*/
void sub_7bc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc650ULL || rel >= 0x7bc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc7a0 size=288 callers=2 calls=3
   calls: sub_7bdab0, sub_c38350, sub_e9db40
*/
void sub_7bc7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc7a0ULL || rel >= 0x7bc8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc8c0 size=16 callers=0 calls=0
*/
void sub_7bc8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc8c0ULL || rel >= 0x7bc8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc8d0 size=144 callers=0 calls=2
   calls: sub_14e0350, sub_14e0550
*/
void sub_7bc8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc8d0ULL || rel >= 0x7bc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bc960 size=2240 callers=0 calls=11
   calls: sub_12ffe00, sub_13a5bb0, sub_15066f0, sub_767e40, sub_7bd220, sub_7bd340, sub_7bdc00, sub_a75d10, sub_c39c40, sub_c3d6e0, sub_d25c50
*/
void sub_7bc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bc960ULL || rel >= 0x7bd220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd220 size=288 callers=2 calls=3
   calls: sub_7bed00, sub_c38350, sub_e9da70
*/
void sub_7bd220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd220ULL || rel >= 0x7bd340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd340 size=272 callers=1 calls=3
   calls: sub_672c10, sub_7bede0, sub_c386f0
*/
void sub_7bd340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd340ULL || rel >= 0x7bd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd450 size=144 callers=0 calls=0
*/
void sub_7bd450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd450ULL || rel >= 0x7bd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd4e0 size=192 callers=0 calls=0
*/
void sub_7bd4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd4e0ULL || rel >= 0x7bd5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd5a0 size=192 callers=0 calls=0
*/
void sub_7bd5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd5a0ULL || rel >= 0x7bd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd660 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_7bd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd660ULL || rel >= 0x7bd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd6d0 size=192 callers=0 calls=0
*/
void sub_7bd6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd6d0ULL || rel >= 0x7bd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd790 size=192 callers=0 calls=0
*/
void sub_7bd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd790ULL || rel >= 0x7bd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd850 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_7bd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd850ULL || rel >= 0x7bd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd8c0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_7bd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd8c0ULL || rel >= 0x7bd930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd930 size=192 callers=0 calls=0
*/
void sub_7bd930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd930ULL || rel >= 0x7bd9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bd9f0 size=192 callers=0 calls=0
*/
void sub_7bd9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bd9f0ULL || rel >= 0x7bdab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bdab0 size=336 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_7bdab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bdab0ULL || rel >= 0x7bdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bdc00 size=272 callers=1 calls=3
   calls: sub_672c10, sub_7bdd10, sub_c386f0
*/
void sub_7bdc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bdc00ULL || rel >= 0x7bdd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bdd10 size=448 callers=1 calls=1
   calls: sub_ea03d0
*/
void sub_7bdd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bdd10ULL || rel >= 0x7bded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bded0 size=96 callers=0 calls=0
*/
void sub_7bded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bded0ULL || rel >= 0x7bdf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bdf30 size=96 callers=0 calls=0
*/
void sub_7bdf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bdf30ULL || rel >= 0x7bdf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bdf90 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_7bdf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bdf90ULL || rel >= 0x7be000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be000 size=16 callers=0 calls=0
*/
void sub_7be000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be000ULL || rel >= 0x7be010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be010 size=384 callers=0 calls=3
   calls: sub_7be410, sub_c3f160, sub_c3fab0
*/
void sub_7be010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be010ULL || rel >= 0x7be190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be190 size=32 callers=0 calls=0
*/
void sub_7be190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be190ULL || rel >= 0x7be1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be1b0 size=96 callers=0 calls=0
*/
void sub_7be1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be1b0ULL || rel >= 0x7be210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be210 size=96 callers=0 calls=0
*/
void sub_7be210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be210ULL || rel >= 0x7be270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be270 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_7be270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be270ULL || rel >= 0x7be2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be2e0 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_7be2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be2e0ULL || rel >= 0x7be350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be350 size=96 callers=0 calls=0
*/
void sub_7be350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be350ULL || rel >= 0x7be3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

