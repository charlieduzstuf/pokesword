/* main functions 00874100..008853e0 (64 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00874100 size=192 callers=0 calls=8
   calls: sub_819640, sub_8197a0, sub_819930, sub_819940, sub_8199a0, sub_819a20, sub_81c3a0, sub_874240
*/
void sub_874100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874100ULL || rel >= 0x8741c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008741c0 size=128 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819640, sub_81a030
*/
void sub_8741c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8741c0ULL || rel >= 0x874240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874240 size=208 callers=1 calls=6
   calls: sub_7ef4c0, sub_8196d0, sub_819790, sub_819930, sub_819970, sub_81ac50
*/
void sub_874240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874240ULL || rel >= 0x874310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874310 size=144 callers=0 calls=6
   calls: sub_7f09c0, sub_7f7ae0, sub_819600, sub_8196d0, sub_81b040, sub_81bfc0
*/
void sub_874310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874310ULL || rel >= 0x8743a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008743a0 size=96 callers=0 calls=4
   calls: sub_7f09c0, sub_7f7ae0, sub_819600, sub_8196d0
*/
void sub_8743a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8743a0ULL || rel >= 0x874400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874400 size=208 callers=0 calls=8
   calls: sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a030, sub_81a060
*/
void sub_874400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874400ULL || rel >= 0x8744d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008744d0 size=256 callers=0 calls=8
   calls: sub_7f09c0, sub_7f7ae0, sub_803c60, sub_819600, sub_8196b0, sub_8196d0, sub_81a600, sub_81a640
*/
void sub_8744d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8744d0ULL || rel >= 0x8745d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008745d0 size=144 callers=0 calls=6
   calls: sub_7f09c0, sub_803c60, sub_819600, sub_8196a0, sub_8196d0, sub_81a640
*/
void sub_8745d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8745d0ULL || rel >= 0x874660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874660 size=160 callers=0 calls=4
   calls: sub_7ef4c0, sub_819600, sub_8196d0, sub_819970
*/
void sub_874660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874660ULL || rel >= 0x874700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874700 size=208 callers=0 calls=7
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819d00
*/
void sub_874700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874700ULL || rel >= 0x8747d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008747d0 size=288 callers=0 calls=13
   calls: sub_7cac40, sub_7cb490, sub_7ef2b0, sub_7f0aa0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196b0, sub_8196d0, sub_819a70
   ... +1 more
*/
void sub_8747d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8747d0ULL || rel >= 0x8748f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008748f0 size=96 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8748f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8748f0ULL || rel >= 0x874950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874950 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_874950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874950ULL || rel >= 0x874990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874990 size=992 callers=0 calls=8
   calls: sub_7ee6b0, sub_7ef580, sub_7ef6a0, sub_7fc2e0, sub_7fc450, sub_819600, sub_819640, sub_81bed0
*/
void sub_874990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874990ULL || rel >= 0x874d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874d70 size=336 callers=0 calls=11
   calls: sub_7ee6b0, sub_7eef50, sub_7ef580, sub_7ef6a0, sub_7fc2e0, sub_7fc450, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0, sub_81bed0
*/
void sub_874d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874d70ULL || rel >= 0x874ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874ec0 size=96 callers=0 calls=2
   calls: sub_819600, sub_81aed0
*/
void sub_874ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874ec0ULL || rel >= 0x874f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874f20 size=96 callers=0 calls=2
   calls: sub_819600, sub_81aed0
*/
void sub_874f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874f20ULL || rel >= 0x874f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00874f80 size=128 callers=0 calls=2
   calls: sub_819600, sub_81a350
*/
void sub_874f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x874f80ULL || rel >= 0x875000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875000 size=112 callers=0 calls=2
   calls: sub_819600, sub_81a350
*/
void sub_875000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875000ULL || rel >= 0x875070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875070 size=96 callers=0 calls=2
   calls: sub_819600, sub_819810
*/
void sub_875070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875070ULL || rel >= 0x8750d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008750d0 size=160 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030, sub_81a0e0
*/
void sub_8750d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8750d0ULL || rel >= 0x875170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875170 size=160 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030, sub_81a0e0
*/
void sub_875170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875170ULL || rel >= 0x875210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875210 size=160 callers=0 calls=4
   calls: sub_7f0aa0, sub_819600, sub_8196d0, sub_86ff60
*/
void sub_875210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875210ULL || rel >= 0x8752b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008752b0 size=160 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030, sub_81a0e0
*/
void sub_8752b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8752b0ULL || rel >= 0x875350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875350 size=160 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030, sub_81a0e0
*/
void sub_875350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875350ULL || rel >= 0x8753f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008753f0 size=160 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030, sub_81a0e0
*/
void sub_8753f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8753f0ULL || rel >= 0x875490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875490 size=96 callers=0 calls=3
   calls: sub_7f7db0, sub_819600, sub_81a350
*/
void sub_875490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875490ULL || rel >= 0x8754f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008754f0 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030
*/
void sub_8754f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8754f0ULL || rel >= 0x875580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875580 size=112 callers=0 calls=3
   calls: sub_7f7dd0, sub_819600, sub_81a350
*/
void sub_875580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875580ULL || rel >= 0x8755f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008755f0 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030
*/
void sub_8755f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8755f0ULL || rel >= 0x875680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875680 size=240 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819df0, sub_81a030
*/
void sub_875680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875680ULL || rel >= 0x875770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875770 size=256 callers=0 calls=9
   calls: sub_786d90, sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a510, sub_81a600
*/
void sub_875770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875770ULL || rel >= 0x875870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875870 size=96 callers=0 calls=4
   calls: sub_786d90, sub_7f09c0, sub_819600, sub_8196d0
*/
void sub_875870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875870ULL || rel >= 0x8758d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008758d0 size=192 callers=0 calls=6
   calls: sub_7f09c0, sub_803c60, sub_819600, sub_8196d0, sub_81a510, sub_81a600
*/
void sub_8758d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8758d0ULL || rel >= 0x875990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875990 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030
*/
void sub_875990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875990ULL || rel >= 0x875a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875a20 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_875a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875a20ULL || rel >= 0x875a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875a70 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_875a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875a70ULL || rel >= 0x875ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875ac0 size=160 callers=0 calls=5
   calls: sub_7e9830, sub_7e9ba0, sub_7f2510, sub_7f2520, sub_8196d0
*/
void sub_875ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875ac0ULL || rel >= 0x875b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875b60 size=224 callers=0 calls=9
   calls: sub_7e9830, sub_7e9ba0, sub_803c60, sub_803d20, sub_803d60, sub_819640, sub_8196b0, sub_81a030, sub_81a0e0
*/
void sub_875b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875b60ULL || rel >= 0x875c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875c40 size=112 callers=0 calls=3
   calls: sub_819600, sub_8196c0, sub_81a120
*/
void sub_875c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875c40ULL || rel >= 0x875cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875cb0 size=432 callers=0 calls=14
   calls: sub_7eb230, sub_7ee6c0, sub_7ef2b0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196c0, sub_8196d0, sub_8197f0, sub_819a70
   ... +2 more
*/
void sub_875cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875cb0ULL || rel >= 0x875e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875e60 size=240 callers=0 calls=9
   calls: sub_7e9830, sub_7e9ba0, sub_803c60, sub_803d20, sub_803d60, sub_819640, sub_8196b0, sub_81a030, sub_81a0e0
*/
void sub_875e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875e60ULL || rel >= 0x875f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00875f50 size=352 callers=0 calls=12
   calls: sub_7eb230, sub_7ef2b0, sub_7f0130, sub_7f0540, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196c0, sub_8196d0, sub_819c40, sub_81a120
*/
void sub_875f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x875f50ULL || rel >= 0x8760b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008760b0 size=112 callers=0 calls=3
   calls: sub_819600, sub_8196c0, sub_81a120
*/
void sub_8760b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8760b0ULL || rel >= 0x876120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876120 size=80 callers=0 calls=2
   calls: sub_819600, sub_81a0e0
*/
void sub_876120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876120ULL || rel >= 0x876170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876170 size=80 callers=0 calls=2
   calls: sub_819600, sub_81a0e0
*/
void sub_876170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876170ULL || rel >= 0x8761c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008761c0 size=176 callers=0 calls=5
   calls: sub_7f87c0, sub_7f8a20, sub_803c60, sub_819600, sub_819d00
*/
void sub_8761c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8761c0ULL || rel >= 0x876270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876270 size=256 callers=0 calls=10
   calls: sub_7f0b70, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_8198c0, sub_81a030, sub_81a060, sub_81aa40
*/
void sub_876270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876270ULL || rel >= 0x876370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876370 size=144 callers=0 calls=5
   calls: sub_7eba90, sub_7f7690, sub_819600, sub_819640, sub_81ab90
*/
void sub_876370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876370ULL || rel >= 0x876400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876400 size=144 callers=0 calls=4
   calls: sub_803d20, sub_803d60, sub_819600, sub_819680
*/
void sub_876400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876400ULL || rel >= 0x876490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876490 size=208 callers=0 calls=5
   calls: sub_819600, sub_819640, sub_819810, sub_819830, sub_81ab90
*/
void sub_876490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876490ULL || rel >= 0x876560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876560 size=128 callers=0 calls=4
   calls: sub_803d20, sub_803d60, sub_819600, sub_819680
*/
void sub_876560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876560ULL || rel >= 0x8765e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008765e0 size=320 callers=0 calls=11
   calls: sub_780c30, sub_780c60, sub_7eb780, sub_7ef5d0, sub_7efe00, sub_7efef0, sub_7f7690, sub_819600, sub_819640, sub_8196d0, sub_81ab90
*/
void sub_8765e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8765e0ULL || rel >= 0x876720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876720 size=176 callers=0 calls=6
   calls: sub_7eb890, sub_7fe370, sub_819600, sub_819640, sub_81ab90, sub_82d990
*/
void sub_876720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876720ULL || rel >= 0x8767d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008767d0 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_8767d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8767d0ULL || rel >= 0x876840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876840 size=112 callers=0 calls=3
   calls: sub_7ef4c0, sub_819600, sub_8196d0
*/
void sub_876840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876840ULL || rel >= 0x8768b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008768b0 size=128 callers=0 calls=4
   calls: sub_7ef5d0, sub_7ef6a0, sub_819600, sub_8196d0
*/
void sub_8768b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8768b0ULL || rel >= 0x876930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876930 size=96 callers=0 calls=3
   calls: sub_7f09c0, sub_819600, sub_8196d0
*/
void sub_876930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876930ULL || rel >= 0x876990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876990 size=288 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_876990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876990ULL || rel >= 0x876ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876ab0 size=176 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_81ac10
*/
void sub_876ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876ab0ULL || rel >= 0x876b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876b60 size=240 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_8196d0, sub_81ab50
*/
void sub_876b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876b60ULL || rel >= 0x876c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876c50 size=224 callers=0 calls=5
   calls: sub_8038c0, sub_819600, sub_819690, sub_8198f0, sub_819920
*/
void sub_876c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876c50ULL || rel >= 0x876d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876d30 size=192 callers=0 calls=5
   calls: sub_7fe260, sub_802b90, sub_802bc0, sub_819600, sub_8197f0
*/
void sub_876d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876d30ULL || rel >= 0x876df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876df0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_876df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876df0ULL || rel >= 0x876e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876e50 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_876e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876e50ULL || rel >= 0x876ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876ea0 size=256 callers=0 calls=6
   calls: sub_7ee800, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819fb0
*/
void sub_876ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876ea0ULL || rel >= 0x876fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00876fa0 size=256 callers=0 calls=6
   calls: sub_7ee800, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819fb0
*/
void sub_876fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x876fa0ULL || rel >= 0x8770a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008770a0 size=304 callers=0 calls=8
   calls: sub_7eef50, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_81a4a0
*/
void sub_8770a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8770a0ULL || rel >= 0x8771d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008771d0 size=352 callers=0 calls=11
   calls: sub_7eb470, sub_7ee6c0, sub_7ee800, sub_7eef50, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_81a4a0
*/
void sub_8771d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8771d0ULL || rel >= 0x877330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877330 size=208 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819e70, sub_81a030
*/
void sub_877330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877330ULL || rel >= 0x877400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877400 size=240 callers=0 calls=9
   calls: sub_786d90, sub_786e70, sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a510
*/
void sub_877400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877400ULL || rel >= 0x8774f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008774f0 size=128 callers=0 calls=3
   calls: sub_819600, sub_819690, sub_81a840
*/
void sub_8774f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8774f0ULL || rel >= 0x877570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877570 size=96 callers=0 calls=2
   calls: sub_819600, sub_819690
*/
void sub_877570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877570ULL || rel >= 0x8775d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008775d0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_8775d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8775d0ULL || rel >= 0x877630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877630 size=240 callers=1 calls=8
   calls: sub_7f05a0, sub_803c60, sub_803d20, sub_803d60, sub_8196d0, sub_81aa00, sub_81be10, sub_877720
*/
void sub_877630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877630ULL || rel >= 0x877720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877720 size=432 callers=1 calls=8
   calls: sub_7ef4c0, sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819c80, sub_819d00, sub_81abd0
*/
void sub_877720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877720ULL || rel >= 0x8778d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008778d0 size=528 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819640, sub_819df0
*/
void sub_8778d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8778d0ULL || rel >= 0x877ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877ae0 size=304 callers=0 calls=10
   calls: sub_7f05d0, sub_7f2360, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819fb0, sub_81a030
*/
void sub_877ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877ae0ULL || rel >= 0x877c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877c10 size=224 callers=0 calls=8
   calls: sub_7f2580, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a0e0, sub_81a810
*/
void sub_877c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877c10ULL || rel >= 0x877cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877cf0 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_877cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877cf0ULL || rel >= 0x877d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877d60 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_877d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877d60ULL || rel >= 0x877db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877db0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_877db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877db0ULL || rel >= 0x877e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877e00 size=240 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_819600, sub_819640, sub_819970, sub_81a290, sub_81a2d0
*/
void sub_877e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877e00ULL || rel >= 0x877ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877ef0 size=240 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_819600, sub_819640, sub_819970, sub_81a290, sub_81a2d0
*/
void sub_877ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877ef0ULL || rel >= 0x877fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00877fe0 size=112 callers=0 calls=4
   calls: sub_7eef50, sub_819600, sub_819640, sub_8196d0
*/
void sub_877fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x877fe0ULL || rel >= 0x878050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878050 size=144 callers=0 calls=4
   calls: sub_803c60, sub_819600, sub_819640, sub_819f70
*/
void sub_878050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878050ULL || rel >= 0x8780e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008780e0 size=176 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a880
*/
void sub_8780e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8780e0ULL || rel >= 0x878190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878190 size=176 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a900
*/
void sub_878190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878190ULL || rel >= 0x878240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878240 size=128 callers=0 calls=6
   calls: sub_803930, sub_819600, sub_819690, sub_8198f0, sub_819920, sub_81a8c0
*/
void sub_878240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878240ULL || rel >= 0x8782c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008782c0 size=144 callers=0 calls=5
   calls: sub_803930, sub_819600, sub_819690, sub_8198f0, sub_819920
*/
void sub_8782c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8782c0ULL || rel >= 0x878350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878350 size=320 callers=0 calls=11
   calls: sub_7f0ba0, sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_8197a0, sub_81a190, sub_81a6b0
*/
void sub_878350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878350ULL || rel >= 0x878490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878490 size=304 callers=0 calls=11
   calls: sub_7cb490, sub_7cb890, sub_803c60, sub_803d20, sub_803d60, sub_819640, sub_819790, sub_819890, sub_8198c0, sub_81a940, sub_81bf10
*/
void sub_878490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878490ULL || rel >= 0x8785c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008785c0 size=224 callers=0 calls=9
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_8197e0, sub_81a030, sub_81a250
*/
void sub_8785c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8785c0ULL || rel >= 0x8786a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008786a0 size=224 callers=0 calls=8
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81aa70
*/
void sub_8786a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8786a0ULL || rel >= 0x878780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878780 size=112 callers=0 calls=3
   calls: sub_7f7db0, sub_819600, sub_81a350
*/
void sub_878780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878780ULL || rel >= 0x8787f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008787f0 size=176 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_81a030
*/
void sub_8787f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8787f0ULL || rel >= 0x8788a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008788a0 size=176 callers=0 calls=7
   calls: sub_8039a0, sub_819600, sub_819660, sub_819690, sub_8198f0, sub_819920, sub_81aab0
*/
void sub_8788a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8788a0ULL || rel >= 0x878950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878950 size=400 callers=0 calls=6
   calls: sub_7f2f90, sub_819600, sub_819640, sub_819690, sub_8196b0, sub_8196d0
*/
void sub_878950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878950ULL || rel >= 0x878ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878ae0 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_819600, sub_8196a0, sub_81a030
*/
void sub_878ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878ae0ULL || rel >= 0x878b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878b70 size=96 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_878b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878b70ULL || rel >= 0x878bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878bd0 size=96 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_878bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878bd0ULL || rel >= 0x878c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878c30 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_878c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878c30ULL || rel >= 0x878ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878ca0 size=448 callers=0 calls=10
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8197a0, sub_819860, sub_81a190, sub_81aa40
*/
void sub_878ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878ca0ULL || rel >= 0x878e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878e60 size=176 callers=0 calls=6
   calls: sub_7ee800, sub_7f0670, sub_819600, sub_819640, sub_8196d0, sub_819ff0
*/
void sub_878e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878e60ULL || rel >= 0x878f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878f10 size=176 callers=0 calls=6
   calls: sub_7ee800, sub_7f0670, sub_819600, sub_819640, sub_8196d0, sub_819ff0
*/
void sub_878f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878f10ULL || rel >= 0x878fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00878fc0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_878fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x878fc0ULL || rel >= 0x879010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879010 size=96 callers=0 calls=2
   calls: sub_819600, sub_879070
*/
void sub_879010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879010ULL || rel >= 0x879070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879070 size=272 callers=1 calls=5
   calls: sub_7f0670, sub_803c60, sub_819600, sub_8196d0, sub_819df0
*/
void sub_879070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879070ULL || rel >= 0x879180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879180 size=128 callers=0 calls=3
   calls: sub_803c60, sub_819df0, sub_81b610
*/
void sub_879180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879180ULL || rel >= 0x879200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879200 size=464 callers=0 calls=10
   calls: sub_7eef50, sub_7f1310, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819e30, sub_81a030
*/
void sub_879200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879200ULL || rel >= 0x8793d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008793d0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8793d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8793d0ULL || rel >= 0x879420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879420 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_879420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879420ULL || rel >= 0x879480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879480 size=256 callers=0 calls=9
   calls: sub_7f0aa0, sub_7f87c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819d00
*/
void sub_879480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879480ULL || rel >= 0x879580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879580 size=16 callers=0 calls=0
*/
void sub_879580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879580ULL || rel >= 0x879590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879590 size=208 callers=0 calls=6
   calls: sub_7f87a0, sub_803c60, sub_819600, sub_819640, sub_819810, sub_81a290
*/
void sub_879590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879590ULL || rel >= 0x879660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879660 size=16 callers=0 calls=0
*/
void sub_879660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879660ULL || rel >= 0x879670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879670 size=16 callers=0 calls=0
*/
void sub_879670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879670ULL || rel >= 0x879680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879680 size=16 callers=0 calls=0
*/
void sub_879680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879680ULL || rel >= 0x879690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879690 size=128 callers=0 calls=5
   calls: sub_819600, sub_819640, sub_8196b0, sub_81a060, sub_86f640
*/
void sub_879690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879690ULL || rel >= 0x879710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879710 size=176 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819df0
*/
void sub_879710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879710ULL || rel >= 0x8797c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008797c0 size=48 callers=0 calls=1
   calls: sub_86f720
*/
void sub_8797c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8797c0ULL || rel >= 0x8797f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008797f0 size=208 callers=0 calls=5
   calls: sub_803c60, sub_819600, sub_8196a0, sub_8196b0, sub_819df0
*/
void sub_8797f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8797f0ULL || rel >= 0x8798c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008798c0 size=192 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819df0
*/
void sub_8798c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8798c0ULL || rel >= 0x879980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879980 size=224 callers=0 calls=5
   calls: sub_803c60, sub_819600, sub_8196a0, sub_8196b0, sub_819df0
*/
void sub_879980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879980ULL || rel >= 0x879a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879a60 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_879a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879a60ULL || rel >= 0x879ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879ab0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_879ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879ab0ULL || rel >= 0x879b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879b00 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_879b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879b00ULL || rel >= 0x879b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879b70 size=128 callers=0 calls=2
   calls: sub_819600, sub_877630
*/
void sub_879b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879b70ULL || rel >= 0x879bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879bf0 size=160 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_819600, sub_819640, sub_81a030, sub_81c300
*/
void sub_879bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879bf0ULL || rel >= 0x879c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879c90 size=128 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_879c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879c90ULL || rel >= 0x879d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879d10 size=112 callers=0 calls=3
   calls: sub_7ef4c0, sub_819600, sub_8196d0
*/
void sub_879d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879d10ULL || rel >= 0x879d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879d80 size=176 callers=0 calls=5
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_819600, sub_81a290
*/
void sub_879d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879d80ULL || rel >= 0x879e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879e30 size=192 callers=0 calls=6
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_819600, sub_819640, sub_81a290
*/
void sub_879e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879e30ULL || rel >= 0x879ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00879ef0 size=288 callers=0 calls=7
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819d00
*/
void sub_879ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x879ef0ULL || rel >= 0x87a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a010 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030
*/
void sub_87a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a010ULL || rel >= 0x87a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a0a0 size=272 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_81a190
*/
void sub_87a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a0a0ULL || rel >= 0x87a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a1b0 size=16 callers=0 calls=0
*/
void sub_87a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a1b0ULL || rel >= 0x87a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a1c0 size=80 callers=0 calls=2
   calls: sub_8196a0, sub_87a210
*/
void sub_87a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a1c0ULL || rel >= 0x87a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a210 size=256 callers=1 calls=7
   calls: sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819b80
*/
void sub_87a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a210ULL || rel >= 0x87a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a310 size=288 callers=0 calls=8
   calls: sub_7ef4c0, sub_7f7940, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819d00
*/
void sub_87a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a310ULL || rel >= 0x87a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a430 size=144 callers=0 calls=3
   calls: sub_7ef200, sub_819600, sub_8196d0
*/
void sub_87a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a430ULL || rel >= 0x87a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a4c0 size=160 callers=0 calls=4
   calls: sub_7f0aa0, sub_819600, sub_8196d0, sub_86ff60
*/
void sub_87a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a4c0ULL || rel >= 0x87a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a560 size=96 callers=0 calls=3
   calls: sub_7ef200, sub_819600, sub_8196d0
*/
void sub_87a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a560ULL || rel >= 0x87a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a5c0 size=128 callers=0 calls=3
   calls: sub_7ef200, sub_819600, sub_8196d0
*/
void sub_87a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a5c0ULL || rel >= 0x87a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a640 size=176 callers=0 calls=5
   calls: sub_7ef200, sub_819600, sub_819690, sub_8196d0, sub_82da30
*/
void sub_87a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a640ULL || rel >= 0x87a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a6f0 size=96 callers=0 calls=3
   calls: sub_7ef200, sub_819600, sub_8196d0
*/
void sub_87a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a6f0ULL || rel >= 0x87a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a750 size=16 callers=0 calls=0
*/
void sub_87a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a750ULL || rel >= 0x87a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a760 size=80 callers=0 calls=2
   calls: sub_8196a0, sub_87a7b0
*/
void sub_87a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a760ULL || rel >= 0x87a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a7b0 size=176 callers=1 calls=4
   calls: sub_7f78c0, sub_803c60, sub_819600, sub_819d00
*/
void sub_87a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a7b0ULL || rel >= 0x87a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a860 size=112 callers=0 calls=3
   calls: sub_7f05d0, sub_819600, sub_8196d0
*/
void sub_87a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a860ULL || rel >= 0x87a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a8d0 size=144 callers=0 calls=4
   calls: sub_7ef4c0, sub_819600, sub_8196d0, sub_8197f0
*/
void sub_87a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a8d0ULL || rel >= 0x87a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087a960 size=160 callers=0 calls=6
   calls: sub_819600, sub_819640, sub_8196a0, sub_8196b0, sub_8197f0, sub_81aab0
*/
void sub_87a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87a960ULL || rel >= 0x87aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087aa00 size=304 callers=0 calls=10
   calls: sub_7ef540, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_819b00, sub_81a030
*/
void sub_87aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87aa00ULL || rel >= 0x87ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ab30 size=112 callers=0 calls=2
   calls: sub_819600, sub_8197f0
*/
void sub_87ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ab30ULL || rel >= 0x87aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087aba0 size=272 callers=0 calls=10
   calls: sub_7eef50, sub_7ef4c0, sub_7f0aa0, sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819d00
*/
void sub_87aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87aba0ULL || rel >= 0x87acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087acb0 size=336 callers=0 calls=9
   calls: sub_7ef4c0, sub_7f0670, sub_7f7940, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819d00
*/
void sub_87acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87acb0ULL || rel >= 0x87ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ae00 size=496 callers=0 calls=11
   calls: sub_7ee6b0, sub_7f0670, sub_7f7940, sub_803c60, sub_803d20, sub_819600, sub_8196d0, sub_819a30, sub_819cc0, sub_819d00, sub_81a030
*/
void sub_87ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ae00ULL || rel >= 0x87aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087aff0 size=112 callers=0 calls=3
   calls: sub_7f0670, sub_819600, sub_8196d0
*/
void sub_87aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87aff0ULL || rel >= 0x87b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b060 size=368 callers=0 calls=10
   calls: sub_7ef4c0, sub_7f0670, sub_7f7940, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819d00
*/
void sub_87b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b060ULL || rel >= 0x87b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b1d0 size=416 callers=0 calls=10
   calls: sub_7ef6a0, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819b00, sub_819c80
*/
void sub_87b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b1d0ULL || rel >= 0x87b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b370 size=336 callers=0 calls=10
   calls: sub_7eef50, sub_7f0c00, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819b40, sub_819df0
*/
void sub_87b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b370ULL || rel >= 0x87b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b4c0 size=240 callers=0 calls=7
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819d00
*/
void sub_87b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b4c0ULL || rel >= 0x87b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b5b0 size=336 callers=0 calls=9
   calls: sub_7ef3d0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819f30, sub_81a030
*/
void sub_87b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b5b0ULL || rel >= 0x87b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b700 size=96 callers=0 calls=3
   calls: sub_7f0670, sub_819600, sub_8196d0
*/
void sub_87b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b700ULL || rel >= 0x87b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b760 size=96 callers=0 calls=3
   calls: sub_7f0670, sub_819600, sub_8196d0
*/
void sub_87b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b760ULL || rel >= 0x87b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b7c0 size=336 callers=0 calls=10
   calls: sub_7f05d0, sub_7f2360, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819fb0, sub_81a030, sub_81a0e0
*/
void sub_87b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b7c0ULL || rel >= 0x87b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087b910 size=272 callers=0 calls=11
   calls: sub_7f0b70, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196b0, sub_8196d0, sub_8198c0, sub_81a030, sub_81aa40, sub_81be10
*/
void sub_87b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87b910ULL || rel >= 0x87ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ba20 size=208 callers=0 calls=4
   calls: sub_7f78c0, sub_803c60, sub_819600, sub_819d00
*/
void sub_87ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ba20ULL || rel >= 0x87baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087baf0 size=112 callers=0 calls=2
   calls: sub_7e9830, sub_7e9ba0
*/
void sub_87baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87baf0ULL || rel >= 0x87bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087bb60 size=112 callers=0 calls=3
   calls: sub_819600, sub_819690, sub_8196b0
*/
void sub_87bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87bb60ULL || rel >= 0x87bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087bbd0 size=128 callers=0 calls=3
   calls: sub_7e9830, sub_7e9ba0, sub_8196b0
*/
void sub_87bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87bbd0ULL || rel >= 0x87bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087bc50 size=144 callers=0 calls=4
   calls: sub_7e9830, sub_7e9ba0, sub_819610, sub_8196a0
*/
void sub_87bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87bc50ULL || rel >= 0x87bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087bce0 size=320 callers=0 calls=13
   calls: sub_7e9830, sub_7e9ba0, sub_7f0b70, sub_803c60, sub_803d20, sub_803d60, sub_8196b0, sub_8196d0, sub_8198c0, sub_81a030, sub_81a060, sub_81aa40
   ... +1 more
*/
void sub_87bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87bce0ULL || rel >= 0x87be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087be20 size=240 callers=0 calls=6
   calls: sub_803c60, sub_819600, sub_819630, sub_8196b0, sub_8197f0, sub_81a880
*/
void sub_87be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87be20ULL || rel >= 0x87bf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087bf10 size=192 callers=0 calls=5
   calls: sub_7e9830, sub_7e9ba0, sub_819610, sub_819650, sub_8196a0
*/
void sub_87bf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87bf10ULL || rel >= 0x87bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087bfd0 size=144 callers=0 calls=4
   calls: sub_7e9830, sub_7e9ba0, sub_8196b0, sub_81a0a0
*/
void sub_87bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87bfd0ULL || rel >= 0x87c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087c060 size=144 callers=0 calls=3
   calls: sub_7fe290, sub_800680, sub_819600
*/
void sub_87c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87c060ULL || rel >= 0x87c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087c0f0 size=112 callers=0 calls=3
   calls: sub_819600, sub_819610, sub_81a310
*/
void sub_87c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87c0f0ULL || rel >= 0x87c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087c160 size=256 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_81a190
*/
void sub_87c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87c160ULL || rel >= 0x87c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087c260 size=464 callers=0 calls=19
   calls: sub_780c60, sub_7eba10, sub_7ee6c0, sub_7f0160, sub_7f05a0, sub_7f0aa0, sub_7f2520, sub_7f2540, sub_7f2550, sub_803c60, sub_803d20, sub_803d60
   ... +7 more
*/
void sub_87c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87c260ULL || rel >= 0x87c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087c430 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87c430ULL || rel >= 0x87c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087c480 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_87c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87c480ULL || rel >= 0x87c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087c4c0 size=1232 callers=0 calls=12
   calls: sub_7eef50, sub_7f0b70, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_8198c0, sub_819df0, sub_819ef0, sub_81a030, sub_81aa40
*/
void sub_87c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87c4c0ULL || rel >= 0x87c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087c990 size=144 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_87c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87c990ULL || rel >= 0x87ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ca20 size=208 callers=0 calls=8
   calls: sub_7eef50, sub_7f7740, sub_803c60, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0, sub_819b80
*/
void sub_87ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ca20ULL || rel >= 0x87caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087caf0 size=192 callers=0 calls=7
   calls: sub_7eef50, sub_7f7740, sub_803c60, sub_819600, sub_8196b0, sub_8196d0, sub_819b80
*/
void sub_87caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87caf0ULL || rel >= 0x87cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087cbb0 size=144 callers=0 calls=6
   calls: sub_7f0ba0, sub_819600, sub_819640, sub_8196b0, sub_8196d0, sub_81a6b0
*/
void sub_87cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87cbb0ULL || rel >= 0x87cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087cc40 size=256 callers=0 calls=9
   calls: sub_7ebcb0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819680, sub_8198c0, sub_81aa40
*/
void sub_87cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87cc40ULL || rel >= 0x87cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087cd40 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87cd40ULL || rel >= 0x87cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087cd90 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87cd90ULL || rel >= 0x87cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087cde0 size=96 callers=0 calls=3
   calls: sub_7f05a0, sub_819600, sub_8196d0
*/
void sub_87cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87cde0ULL || rel >= 0x87ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ce40 size=240 callers=0 calls=9
   calls: sub_7ef4c0, sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819d00, sub_81a0e0
*/
void sub_87ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ce40ULL || rel >= 0x87cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087cf30 size=144 callers=0 calls=4
   calls: sub_7eef50, sub_7f79e0, sub_819600, sub_8196d0
*/
void sub_87cf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87cf30ULL || rel >= 0x87cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087cfc0 size=128 callers=0 calls=4
   calls: sub_7f79e0, sub_819600, sub_8196d0, sub_819bc0
*/
void sub_87cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87cfc0ULL || rel >= 0x87d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d040 size=288 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_819600, sub_819640, sub_81a030, sub_87d160
*/
void sub_87d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d040ULL || rel >= 0x87d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d160 size=176 callers=1 calls=6
   calls: sub_786d90, sub_7f09c0, sub_803c60, sub_8196d0, sub_81a510, sub_81a600
*/
void sub_87d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d160ULL || rel >= 0x87d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d210 size=112 callers=0 calls=3
   calls: sub_7f0aa0, sub_819600, sub_8196d0
*/
void sub_87d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d210ULL || rel >= 0x87d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d280 size=160 callers=0 calls=4
   calls: sub_803d20, sub_803d60, sub_819600, sub_819680
*/
void sub_87d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d280ULL || rel >= 0x87d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d320 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d320ULL || rel >= 0x87d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d370 size=160 callers=0 calls=2
   calls: sub_819600, sub_8197f0
*/
void sub_87d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d370ULL || rel >= 0x87d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d410 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d410ULL || rel >= 0x87d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d460 size=128 callers=0 calls=4
   calls: sub_7e9830, sub_7e9ba0, sub_819680, sub_819790
*/
void sub_87d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d460ULL || rel >= 0x87d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d4e0 size=96 callers=0 calls=2
   calls: sub_819600, sub_819970
*/
void sub_87d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d4e0ULL || rel >= 0x87d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d540 size=128 callers=0 calls=0
*/
void sub_87d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d540ULL || rel >= 0x87d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d5c0 size=80 callers=0 calls=0
*/
void sub_87d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d5c0ULL || rel >= 0x87d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d610 size=32 callers=0 calls=0
*/
void sub_87d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d610ULL || rel >= 0x87d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d630 size=32 callers=0 calls=0
*/
void sub_87d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d630ULL || rel >= 0x87d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d650 size=32 callers=0 calls=0
*/
void sub_87d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d650ULL || rel >= 0x87d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d670 size=32 callers=0 calls=0
*/
void sub_87d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d670ULL || rel >= 0x87d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d690 size=32 callers=0 calls=0
*/
void sub_87d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d690ULL || rel >= 0x87d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d6b0 size=32 callers=0 calls=0
*/
void sub_87d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d6b0ULL || rel >= 0x87d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d6d0 size=32 callers=0 calls=0
*/
void sub_87d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d6d0ULL || rel >= 0x87d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d6f0 size=80 callers=0 calls=0
*/
void sub_87d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d6f0ULL || rel >= 0x87d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d740 size=32 callers=0 calls=0
*/
void sub_87d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d740ULL || rel >= 0x87d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d760 size=144 callers=0 calls=1
   calls: sub_7e8c70
*/
void sub_87d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d760ULL || rel >= 0x87d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d7f0 size=144 callers=0 calls=5
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eaf50, sub_7eb050
*/
void sub_87d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d7f0ULL || rel >= 0x87d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d880 size=128 callers=0 calls=2
   calls: sub_819600, sub_81a310
*/
void sub_87d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d880ULL || rel >= 0x87d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d900 size=128 callers=0 calls=2
   calls: sub_819600, sub_81a310
*/
void sub_87d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d900ULL || rel >= 0x87d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087d980 size=128 callers=0 calls=3
   calls: sub_7f7130, sub_819600, sub_81a310
*/
void sub_87d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87d980ULL || rel >= 0x87da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087da00 size=208 callers=0 calls=8
   calls: sub_7f0670, sub_7f7130, sub_803c60, sub_803d20, sub_819600, sub_8196d0, sub_81a030, sub_81a310
*/
void sub_87da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87da00ULL || rel >= 0x87dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087dad0 size=16 callers=0 calls=0
*/
void sub_87dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87dad0ULL || rel >= 0x87dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087dae0 size=16 callers=0 calls=0
*/
void sub_87dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87dae0ULL || rel >= 0x87daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087daf0 size=16 callers=0 calls=0
*/
void sub_87daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87daf0ULL || rel >= 0x87db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087db00 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87db00ULL || rel >= 0x87db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087db50 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_87db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87db50ULL || rel >= 0x87db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087db90 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_87db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87db90ULL || rel >= 0x87dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087dbd0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87dbd0ULL || rel >= 0x87dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087dc20 size=272 callers=0 calls=5
   calls: sub_819600, sub_819660, sub_8196d0, sub_81abd0, sub_81b200
*/
void sub_87dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87dc20ULL || rel >= 0x87dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087dd30 size=288 callers=0 calls=11
   calls: sub_7f79e0, sub_803c60, sub_803c70, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819790, sub_819b00, sub_81abd0, sub_81b200
*/
void sub_87dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87dd30ULL || rel >= 0x87de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087de50 size=144 callers=0 calls=5
   calls: sub_819600, sub_819660, sub_8196d0, sub_81abd0, sub_81b200
*/
void sub_87de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87de50ULL || rel >= 0x87dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087dee0 size=192 callers=0 calls=7
   calls: sub_7f7c40, sub_819600, sub_819640, sub_8196d0, sub_81a0e0, sub_81abd0, sub_81b200
*/
void sub_87dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87dee0ULL || rel >= 0x87dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087dfa0 size=16 callers=0 calls=0
*/
void sub_87dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87dfa0ULL || rel >= 0x87dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087dfb0 size=144 callers=0 calls=5
   calls: sub_819600, sub_819660, sub_8196d0, sub_81abd0, sub_81b200
*/
void sub_87dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87dfb0ULL || rel >= 0x87e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e040 size=176 callers=0 calls=6
   calls: sub_819600, sub_8196d0, sub_81a0e0, sub_81abd0, sub_81b200, sub_81b7e0
*/
void sub_87e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e040ULL || rel >= 0x87e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e0f0 size=16 callers=0 calls=0
*/
void sub_87e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e0f0ULL || rel >= 0x87e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e100 size=144 callers=0 calls=5
   calls: sub_819600, sub_819660, sub_8196d0, sub_81abd0, sub_81b200
*/
void sub_87e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e100ULL || rel >= 0x87e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e190 size=240 callers=0 calls=9
   calls: sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819680, sub_8196d0, sub_8197f0, sub_81abd0, sub_81b200
*/
void sub_87e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e190ULL || rel >= 0x87e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e280 size=176 callers=0 calls=8
   calls: sub_7f05a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a030, sub_81a120
*/
void sub_87e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e280ULL || rel >= 0x87e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e330 size=128 callers=0 calls=0
*/
void sub_87e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e330ULL || rel >= 0x87e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e3b0 size=256 callers=1 calls=4
   calls: sub_7e8c70, sub_7ee6b0, sub_7eef50, sub_7ef3d0
*/
void sub_87e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e3b0ULL || rel >= 0x87e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e4b0 size=144 callers=0 calls=5
   calls: sub_7e8c60, sub_7e8d00, sub_7e9a00, sub_7eafc0, sub_7ee6b0
*/
void sub_87e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e4b0ULL || rel >= 0x87e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e540 size=176 callers=0 calls=5
   calls: sub_7e8c60, sub_7e8d00, sub_7eafc0, sub_7ee6b0, sub_87e3b0
*/
void sub_87e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e540ULL || rel >= 0x87e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e5f0 size=192 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_803e10, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_87e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e5f0ULL || rel >= 0x87e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e6b0 size=32 callers=0 calls=0
*/
void sub_87e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e6b0ULL || rel >= 0x87e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e6d0 size=240 callers=0 calls=8
   calls: sub_7f8cf0, sub_803c60, sub_819600, sub_819a80, sub_819ac0, sub_819df0, sub_81bf40, sub_81c1b0
*/
void sub_87e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e6d0ULL || rel >= 0x87e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e7c0 size=32 callers=0 calls=0
*/
void sub_87e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e7c0ULL || rel >= 0x87e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e7e0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e7e0ULL || rel >= 0x87e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e830 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_87e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e830ULL || rel >= 0x87e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e8a0 size=16 callers=0 calls=0
*/
void sub_87e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e8a0ULL || rel >= 0x87e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e8b0 size=32 callers=0 calls=0
*/
void sub_87e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e8b0ULL || rel >= 0x87e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e8d0 size=176 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819df0
*/
void sub_87e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e8d0ULL || rel >= 0x87e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e980 size=32 callers=0 calls=0
*/
void sub_87e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e980ULL || rel >= 0x87e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087e9a0 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_87e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87e9a0ULL || rel >= 0x87ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ea10 size=32 callers=0 calls=0
*/
void sub_87ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ea10ULL || rel >= 0x87ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ea30 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_87ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ea30ULL || rel >= 0x87ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ea90 size=32 callers=0 calls=0
*/
void sub_87ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ea90ULL || rel >= 0x87eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087eab0 size=96 callers=0 calls=3
   calls: sub_7f7dd0, sub_819600, sub_81a350
*/
void sub_87eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87eab0ULL || rel >= 0x87eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087eb10 size=32 callers=0 calls=0
*/
void sub_87eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87eb10ULL || rel >= 0x87eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087eb30 size=96 callers=0 calls=3
   calls: sub_7f7db0, sub_819600, sub_81a350
*/
void sub_87eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87eb30ULL || rel >= 0x87eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087eb90 size=32 callers=0 calls=0
*/
void sub_87eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87eb90ULL || rel >= 0x87ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ebb0 size=112 callers=0 calls=4
   calls: sub_7ef6a0, sub_819600, sub_819660, sub_8196d0
*/
void sub_87ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ebb0ULL || rel >= 0x87ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ec20 size=32 callers=0 calls=0
*/
void sub_87ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ec20ULL || rel >= 0x87ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ec40 size=96 callers=0 calls=3
   calls: sub_7ef4c0, sub_819600, sub_8196d0
*/
void sub_87ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ec40ULL || rel >= 0x87eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087eca0 size=32 callers=0 calls=0
*/
void sub_87eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87eca0ULL || rel >= 0x87ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ecc0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_87ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ecc0ULL || rel >= 0x87ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ed20 size=128 callers=0 calls=2
   calls: sub_7f7700, sub_819600
*/
void sub_87ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ed20ULL || rel >= 0x87eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087eda0 size=32 callers=0 calls=0
*/
void sub_87eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87eda0ULL || rel >= 0x87edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087edc0 size=112 callers=0 calls=2
   calls: sub_819600, sub_819a60
*/
void sub_87edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87edc0ULL || rel >= 0x87ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ee30 size=32 callers=0 calls=0
*/
void sub_87ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ee30ULL || rel >= 0x87ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ee50 size=224 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196b0, sub_81a030
*/
void sub_87ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ee50ULL || rel >= 0x87ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ef30 size=96 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_87ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ef30ULL || rel >= 0x87ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ef90 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_87ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ef90ULL || rel >= 0x87f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f000 size=272 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_81a030, sub_82cff0
*/
void sub_87f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f000ULL || rel >= 0x87f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f110 size=32 callers=0 calls=0
*/
void sub_87f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f110ULL || rel >= 0x87f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f130 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f130ULL || rel >= 0x87f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f180 size=32 callers=0 calls=0
*/
void sub_87f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f180ULL || rel >= 0x87f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f1a0 size=96 callers=0 calls=2
   calls: sub_819600, sub_81a310
*/
void sub_87f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f1a0ULL || rel >= 0x87f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f200 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_87f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f200ULL || rel >= 0x87f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f270 size=32 callers=0 calls=0
*/
void sub_87f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f270ULL || rel >= 0x87f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f290 size=96 callers=0 calls=2
   calls: sub_819600, sub_81a310
*/
void sub_87f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f290ULL || rel >= 0x87f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f2f0 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_87f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f2f0ULL || rel >= 0x87f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f360 size=32 callers=0 calls=0
*/
void sub_87f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f360ULL || rel >= 0x87f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f380 size=96 callers=0 calls=2
   calls: sub_7f7fe0, sub_819600
*/
void sub_87f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f380ULL || rel >= 0x87f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f3e0 size=32 callers=0 calls=0
*/
void sub_87f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f3e0ULL || rel >= 0x87f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f400 size=96 callers=0 calls=2
   calls: sub_7f7fe0, sub_819600
*/
void sub_87f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f400ULL || rel >= 0x87f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f460 size=32 callers=0 calls=0
*/
void sub_87f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f460ULL || rel >= 0x87f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f480 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_87f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f480ULL || rel >= 0x87f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f4e0 size=32 callers=0 calls=0
*/
void sub_87f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f4e0ULL || rel >= 0x87f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f500 size=176 callers=0 calls=5
   calls: sub_7f05a0, sub_803c60, sub_819600, sub_8196d0, sub_819df0
*/
void sub_87f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f500ULL || rel >= 0x87f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f5b0 size=32 callers=0 calls=0
*/
void sub_87f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f5b0ULL || rel >= 0x87f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f5d0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_87f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f5d0ULL || rel >= 0x87f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f630 size=32 callers=0 calls=0
*/
void sub_87f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f630ULL || rel >= 0x87f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f650 size=160 callers=0 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_87f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f650ULL || rel >= 0x87f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f6f0 size=32 callers=0 calls=0
*/
void sub_87f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f6f0ULL || rel >= 0x87f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f710 size=160 callers=0 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_87f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f710ULL || rel >= 0x87f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f7b0 size=32 callers=0 calls=0
*/
void sub_87f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f7b0ULL || rel >= 0x87f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f7d0 size=160 callers=0 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_87f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f7d0ULL || rel >= 0x87f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f870 size=32 callers=0 calls=0
*/
void sub_87f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f870ULL || rel >= 0x87f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f890 size=160 callers=0 calls=4
   calls: sub_7eef50, sub_7f7990, sub_819600, sub_8196d0
*/
void sub_87f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f890ULL || rel >= 0x87f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f930 size=32 callers=0 calls=0
*/
void sub_87f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f930ULL || rel >= 0x87f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f950 size=144 callers=0 calls=4
   calls: sub_7ef6a0, sub_819600, sub_819660, sub_8196d0
*/
void sub_87f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f950ULL || rel >= 0x87f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087f9e0 size=32 callers=0 calls=0
*/
void sub_87f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87f9e0ULL || rel >= 0x87fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087fa00 size=368 callers=0 calls=7
   calls: sub_7eef50, sub_7f8cf0, sub_819600, sub_819660, sub_8196d0, sub_8198c0, sub_81c1b0
*/
void sub_87fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87fa00ULL || rel >= 0x87fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087fb70 size=32 callers=0 calls=0
*/
void sub_87fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87fb70ULL || rel >= 0x87fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087fb90 size=240 callers=0 calls=10
   calls: sub_7eef40, sub_7ef220, sub_7f7db0, sub_803c60, sub_803d20, sub_803d60, sub_8196b0, sub_8196d0, sub_81a350, sub_81aa70
*/
void sub_87fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87fb90ULL || rel >= 0x87fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087fc80 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_87fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87fc80ULL || rel >= 0x87fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087fcd0 size=256 callers=0 calls=10
   calls: sub_7eef40, sub_7ef220, sub_7f7db0, sub_803c60, sub_803d20, sub_803d60, sub_8196a0, sub_8196d0, sub_81a350, sub_81aa70
*/
void sub_87fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87fcd0ULL || rel >= 0x87fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087fdd0 size=240 callers=0 calls=9
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_81aa70
*/
void sub_87fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87fdd0ULL || rel >= 0x87fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087fec0 size=224 callers=0 calls=8
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_8196a0, sub_8196d0, sub_81aa70
*/
void sub_87fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87fec0ULL || rel >= 0x87ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0087ffa0 size=272 callers=0 calls=10
   calls: sub_7eef40, sub_7ef220, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196a0, sub_8196d0, sub_81aa70
*/
void sub_87ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87ffa0ULL || rel >= 0x8800b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008800b0 size=176 callers=0 calls=8
   calls: sub_7eef40, sub_7ef220, sub_7f7db0, sub_819600, sub_819630, sub_8196d0, sub_8197f0, sub_81a350
*/
void sub_8800b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8800b0ULL || rel >= 0x880160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880160 size=176 callers=0 calls=8
   calls: sub_7eef40, sub_7ef220, sub_7f7db0, sub_819600, sub_819630, sub_8196d0, sub_8197f0, sub_81a350
*/
void sub_880160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880160ULL || rel >= 0x880210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880210 size=32 callers=0 calls=0
*/
void sub_880210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880210ULL || rel >= 0x880230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880230 size=208 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_880230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880230ULL || rel >= 0x880300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880300 size=32 callers=0 calls=0
*/
void sub_880300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880300ULL || rel >= 0x880320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880320 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_880320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880320ULL || rel >= 0x880380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880380 size=32 callers=0 calls=0
*/
void sub_880380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880380ULL || rel >= 0x8803a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008803a0 size=96 callers=0 calls=2
   calls: sub_780c60, sub_819600
*/
void sub_8803a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8803a0ULL || rel >= 0x880400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880400 size=32 callers=0 calls=0
*/
void sub_880400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880400ULL || rel >= 0x880420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880420 size=128 callers=0 calls=2
   calls: sub_781240, sub_819600
*/
void sub_880420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880420ULL || rel >= 0x8804a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008804a0 size=32 callers=0 calls=0
*/
void sub_8804a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8804a0ULL || rel >= 0x8804c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008804c0 size=128 callers=0 calls=3
   calls: sub_7ef6a0, sub_819600, sub_8196d0
*/
void sub_8804c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8804c0ULL || rel >= 0x880540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880540 size=32 callers=0 calls=0
*/
void sub_880540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880540ULL || rel >= 0x880560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880560 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_880560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880560ULL || rel >= 0x8805b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008805b0 size=32 callers=0 calls=0
*/
void sub_8805b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8805b0ULL || rel >= 0x8805d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008805d0 size=16 callers=0 calls=0
*/
void sub_8805d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8805d0ULL || rel >= 0x8805e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008805e0 size=16 callers=0 calls=0
*/
void sub_8805e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8805e0ULL || rel >= 0x8805f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008805f0 size=192 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_8805f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8805f0ULL || rel >= 0x8806b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008806b0 size=256 callers=1 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_803e10, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_8806b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8806b0ULL || rel >= 0x8807b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008807b0 size=32 callers=0 calls=0
*/
void sub_8807b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8807b0ULL || rel >= 0x8807d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008807d0 size=16 callers=0 calls=0
*/
void sub_8807d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8807d0ULL || rel >= 0x8807e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008807e0 size=16 callers=0 calls=0
*/
void sub_8807e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8807e0ULL || rel >= 0x8807f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008807f0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8807f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8807f0ULL || rel >= 0x880840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880840 size=32 callers=0 calls=0
*/
void sub_880840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880840ULL || rel >= 0x880860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880860 size=16 callers=0 calls=0
*/
void sub_880860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880860ULL || rel >= 0x880870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880870 size=16 callers=0 calls=0
*/
void sub_880870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880870ULL || rel >= 0x880880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880880 size=32 callers=0 calls=0
*/
void sub_880880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880880ULL || rel >= 0x8808a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008808a0 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_8808a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8808a0ULL || rel >= 0x880910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880910 size=32 callers=0 calls=0
*/
void sub_880910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880910ULL || rel >= 0x880930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880930 size=144 callers=0 calls=5
   calls: sub_7f7c40, sub_7f7db0, sub_819600, sub_819640, sub_81a350
*/
void sub_880930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880930ULL || rel >= 0x8809c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008809c0 size=112 callers=0 calls=2
   calls: sub_803c00, sub_819600
*/
void sub_8809c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8809c0ULL || rel >= 0x880a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880a30 size=96 callers=0 calls=3
   calls: sub_7f7db0, sub_819600, sub_81a350
*/
void sub_880a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880a30ULL || rel >= 0x880a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880a90 size=32 callers=0 calls=0
*/
void sub_880a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880a90ULL || rel >= 0x880ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880ab0 size=48 callers=0 calls=1
   calls: sub_81b7e0
*/
void sub_880ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880ab0ULL || rel >= 0x880ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880ae0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_880ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880ae0ULL || rel >= 0x880b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880b30 size=16 callers=0 calls=0
*/
void sub_880b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880b30ULL || rel >= 0x880b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880b40 size=176 callers=2 calls=6
   calls: sub_7ef4c0, sub_803c60, sub_8196d0, sub_819a80, sub_819ac0, sub_819c80
*/
void sub_880b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880b40ULL || rel >= 0x880bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880bf0 size=32 callers=0 calls=0
*/
void sub_880bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880bf0ULL || rel >= 0x880c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880c10 size=112 callers=0 calls=3
   calls: sub_8196a0, sub_8196b0, sub_81b7e0
*/
void sub_880c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880c10ULL || rel >= 0x880c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880c80 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_880c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880c80ULL || rel >= 0x880cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880cd0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_880cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880cd0ULL || rel >= 0x880d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880d20 size=16 callers=0 calls=0
*/
void sub_880d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880d20ULL || rel >= 0x880d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880d30 size=32 callers=0 calls=0
*/
void sub_880d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880d30ULL || rel >= 0x880d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880d50 size=48 callers=0 calls=1
   calls: sub_81b7e0
*/
void sub_880d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880d50ULL || rel >= 0x880d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880d80 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_880d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880d80ULL || rel >= 0x880dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880dd0 size=16 callers=0 calls=0
*/
void sub_880dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880dd0ULL || rel >= 0x880de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880de0 size=32 callers=0 calls=0
*/
void sub_880de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880de0ULL || rel >= 0x880e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880e00 size=48 callers=0 calls=1
   calls: sub_81b7e0
*/
void sub_880e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880e00ULL || rel >= 0x880e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880e30 size=128 callers=0 calls=2
   calls: sub_803c60, sub_819c80
*/
void sub_880e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880e30ULL || rel >= 0x880eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880eb0 size=16 callers=0 calls=0
*/
void sub_880eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880eb0ULL || rel >= 0x880ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880ec0 size=32 callers=0 calls=0
*/
void sub_880ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880ec0ULL || rel >= 0x880ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880ee0 size=48 callers=0 calls=1
   calls: sub_81b7e0
*/
void sub_880ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880ee0ULL || rel >= 0x880f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880f10 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_880f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880f10ULL || rel >= 0x880f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880f60 size=16 callers=0 calls=0
*/
void sub_880f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880f60ULL || rel >= 0x880f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880f70 size=32 callers=0 calls=0
*/
void sub_880f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880f70ULL || rel >= 0x880f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880f90 size=48 callers=0 calls=1
   calls: sub_81b7e0
*/
void sub_880f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880f90ULL || rel >= 0x880fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880fc0 size=16 callers=0 calls=0
*/
void sub_880fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880fc0ULL || rel >= 0x880fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00880fd0 size=128 callers=0 calls=2
   calls: sub_803c60, sub_819c80
*/
void sub_880fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x880fd0ULL || rel >= 0x881050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881050 size=16 callers=0 calls=0
*/
void sub_881050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881050ULL || rel >= 0x881060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881060 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_881060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881060ULL || rel >= 0x8810d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008810d0 size=16 callers=0 calls=0
*/
void sub_8810d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8810d0ULL || rel >= 0x8810e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008810e0 size=208 callers=0 calls=9
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_8810e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8810e0ULL || rel >= 0x8811b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008811b0 size=32 callers=0 calls=0
*/
void sub_8811b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8811b0ULL || rel >= 0x8811d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008811d0 size=128 callers=0 calls=2
   calls: sub_8196b0, sub_81b7e0
*/
void sub_8811d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8811d0ULL || rel >= 0x881250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881250 size=128 callers=0 calls=2
   calls: sub_819600, sub_880b40
*/
void sub_881250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881250ULL || rel >= 0x8812d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008812d0 size=224 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_8812d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8812d0ULL || rel >= 0x8813b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008813b0 size=64 callers=0 calls=1
   calls: sub_880b40
*/
void sub_8813b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8813b0ULL || rel >= 0x8813f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008813f0 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_8813f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8813f0ULL || rel >= 0x881460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881460 size=16 callers=0 calls=0
*/
void sub_881460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881460ULL || rel >= 0x881470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881470 size=32 callers=0 calls=0
*/
void sub_881470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881470ULL || rel >= 0x881490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881490 size=128 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8197f0
*/
void sub_881490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881490ULL || rel >= 0x881510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881510 size=128 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_8815b0
*/
void sub_881510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881510ULL || rel >= 0x881590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881590 size=16 callers=0 calls=0
*/
void sub_881590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881590ULL || rel >= 0x8815a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008815a0 size=16 callers=0 calls=0
*/
void sub_8815a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8815a0ULL || rel >= 0x8815b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008815b0 size=224 callers=2 calls=10
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_8197f0, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_8815b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8815b0ULL || rel >= 0x881690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881690 size=272 callers=0 calls=7
   calls: sub_7ef4c0, sub_7f8cf0, sub_803c60, sub_8196d0, sub_819c80, sub_81bf40, sub_81c1b0
*/
void sub_881690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881690ULL || rel >= 0x8817a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008817a0 size=32 callers=0 calls=0
*/
void sub_8817a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8817a0ULL || rel >= 0x8817c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008817c0 size=208 callers=0 calls=7
   calls: sub_7f09c0, sub_7f7ae0, sub_803c60, sub_819600, sub_8196d0, sub_81a3c0, sub_81bfc0
*/
void sub_8817c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8817c0ULL || rel >= 0x881890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881890 size=32 callers=0 calls=0
*/
void sub_881890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881890ULL || rel >= 0x8818b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008818b0 size=208 callers=0 calls=7
   calls: sub_7f09c0, sub_7f7ae0, sub_803c60, sub_819600, sub_8196d0, sub_81a3c0, sub_81bfc0
*/
void sub_8818b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8818b0ULL || rel >= 0x881980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881980 size=32 callers=0 calls=0
*/
void sub_881980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881980ULL || rel >= 0x8819a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008819a0 size=208 callers=0 calls=7
   calls: sub_7f09c0, sub_7f7ae0, sub_803c60, sub_819600, sub_8196d0, sub_81a3c0, sub_81bfc0
*/
void sub_8819a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8819a0ULL || rel >= 0x881a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881a70 size=32 callers=0 calls=0
*/
void sub_881a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881a70ULL || rel >= 0x881a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881a90 size=224 callers=0 calls=7
   calls: sub_7f09c0, sub_7f7ae0, sub_803c60, sub_819600, sub_8196d0, sub_81a3c0, sub_81bfc0
*/
void sub_881a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881a90ULL || rel >= 0x881b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881b70 size=32 callers=0 calls=0
*/
void sub_881b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881b70ULL || rel >= 0x881b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881b90 size=208 callers=0 calls=7
   calls: sub_7f09c0, sub_7f7ae0, sub_803c60, sub_819600, sub_8196d0, sub_81a3c0, sub_81bfc0
*/
void sub_881b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881b90ULL || rel >= 0x881c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881c60 size=32 callers=0 calls=0
*/
void sub_881c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881c60ULL || rel >= 0x881c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881c80 size=128 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_81a3c0
*/
void sub_881c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881c80ULL || rel >= 0x881d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881d00 size=320 callers=0 calls=10
   calls: sub_7eef50, sub_7f8cf0, sub_803c60, sub_819600, sub_8196d0, sub_81a390, sub_81a3b0, sub_81a3c0, sub_81bf40, sub_81c1b0
*/
void sub_881d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881d00ULL || rel >= 0x881e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881e40 size=32 callers=0 calls=0
*/
void sub_881e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881e40ULL || rel >= 0x881e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881e60 size=128 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_81a3c0
*/
void sub_881e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881e60ULL || rel >= 0x881ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00881ee0 size=320 callers=0 calls=10
   calls: sub_7eef50, sub_7f8cf0, sub_803c60, sub_819600, sub_8196d0, sub_81a390, sub_81a3b0, sub_81a3c0, sub_81bf40, sub_81c1b0
*/
void sub_881ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x881ee0ULL || rel >= 0x882020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882020 size=32 callers=0 calls=0
*/
void sub_882020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882020ULL || rel >= 0x882040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882040 size=128 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_81a3c0
*/
void sub_882040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882040ULL || rel >= 0x8820c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008820c0 size=320 callers=0 calls=10
   calls: sub_7eef50, sub_7f8cf0, sub_803c60, sub_819600, sub_8196d0, sub_81a390, sub_81a3b0, sub_81a3c0, sub_81bf40, sub_81c1b0
*/
void sub_8820c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8820c0ULL || rel >= 0x882200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882200 size=32 callers=0 calls=0
*/
void sub_882200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882200ULL || rel >= 0x882220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882220 size=144 callers=0 calls=4
   calls: sub_803c60, sub_803d20, sub_819600, sub_81a3c0
*/
void sub_882220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882220ULL || rel >= 0x8822b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008822b0 size=16 callers=0 calls=0
*/
void sub_8822b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8822b0ULL || rel >= 0x8822c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008822c0 size=32 callers=0 calls=0
*/
void sub_8822c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8822c0ULL || rel >= 0x8822e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008822e0 size=16 callers=0 calls=0
*/
void sub_8822e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8822e0ULL || rel >= 0x8822f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008822f0 size=272 callers=0 calls=9
   calls: sub_7f79e0, sub_7f7db0, sub_7f7dd0, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819b00, sub_81a350
*/
void sub_8822f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8822f0ULL || rel >= 0x882400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882400 size=32 callers=0 calls=0
*/
void sub_882400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882400ULL || rel >= 0x882420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882420 size=16 callers=0 calls=0
*/
void sub_882420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882420ULL || rel >= 0x882430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882430 size=32 callers=0 calls=0
*/
void sub_882430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882430ULL || rel >= 0x882450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882450 size=224 callers=0 calls=10
   calls: sub_7f79e0, sub_7f7db0, sub_803c60, sub_819600, sub_8196d0, sub_819770, sub_819a80, sub_819ac0, sub_819b80, sub_81a350
*/
void sub_882450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882450ULL || rel >= 0x882530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882530 size=112 callers=0 calls=3
   calls: sub_7f7db0, sub_819600, sub_81a350
*/
void sub_882530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882530ULL || rel >= 0x8825a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008825a0 size=32 callers=0 calls=0
*/
void sub_8825a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8825a0ULL || rel >= 0x8825c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008825c0 size=144 callers=0 calls=1
   calls: sub_819600
*/
void sub_8825c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8825c0ULL || rel >= 0x882650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882650 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_882650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882650ULL || rel >= 0x8826c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008826c0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8826c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8826c0ULL || rel >= 0x882710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882710 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_882710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882710ULL || rel >= 0x882760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882760 size=80 callers=0 calls=2
   calls: sub_819600, sub_81acc0
*/
void sub_882760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882760ULL || rel >= 0x8827b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008827b0 size=32 callers=0 calls=0
*/
void sub_8827b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8827b0ULL || rel >= 0x8827d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008827d0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_8827d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8827d0ULL || rel >= 0x882830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882830 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_882830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882830ULL || rel >= 0x882880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882880 size=32 callers=0 calls=0
*/
void sub_882880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882880ULL || rel >= 0x8828a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008828a0 size=208 callers=0 calls=9
   calls: sub_7ef6a0, sub_7f7dd0, sub_803c60, sub_819600, sub_8196d0, sub_819a80, sub_819ac0, sub_819c80, sub_81a350
*/
void sub_8828a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8828a0ULL || rel >= 0x882970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882970 size=32 callers=0 calls=0
*/
void sub_882970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882970ULL || rel >= 0x882990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882990 size=176 callers=0 calls=6
   calls: sub_7ef6a0, sub_7f7ff0, sub_803c60, sub_819600, sub_8196d0, sub_819c80
*/
void sub_882990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882990ULL || rel >= 0x882a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882a40 size=32 callers=0 calls=0
*/
void sub_882a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882a40ULL || rel >= 0x882a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882a60 size=208 callers=0 calls=6
   calls: sub_7f79e0, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819b00
*/
void sub_882a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882a60ULL || rel >= 0x882b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882b30 size=32 callers=0 calls=0
*/
void sub_882b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882b30ULL || rel >= 0x882b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882b50 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_882b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882b50ULL || rel >= 0x882ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882ba0 size=32 callers=0 calls=0
*/
void sub_882ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882ba0ULL || rel >= 0x882bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882bc0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_882bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882bc0ULL || rel >= 0x882c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882c20 size=32 callers=0 calls=0
*/
void sub_882c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882c20ULL || rel >= 0x882c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882c40 size=272 callers=0 calls=7
   calls: sub_7f0c80, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819df0
*/
void sub_882c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882c40ULL || rel >= 0x882d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882d50 size=32 callers=0 calls=0
*/
void sub_882d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882d50ULL || rel >= 0x882d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882d70 size=80 callers=0 calls=2
   calls: sub_7f78c0, sub_882dc0
*/
void sub_882d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882d70ULL || rel >= 0x882dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882dc0 size=224 callers=5 calls=4
   calls: sub_7f7ff0, sub_803c60, sub_819600, sub_819d00
*/
void sub_882dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882dc0ULL || rel >= 0x882ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882ea0 size=32 callers=0 calls=0
*/
void sub_882ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882ea0ULL || rel >= 0x882ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882ec0 size=80 callers=0 calls=2
   calls: sub_7f78c0, sub_882dc0
*/
void sub_882ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882ec0ULL || rel >= 0x882f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882f10 size=32 callers=0 calls=0
*/
void sub_882f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882f10ULL || rel >= 0x882f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882f30 size=80 callers=0 calls=2
   calls: sub_7f78c0, sub_882dc0
*/
void sub_882f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882f30ULL || rel >= 0x882f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882f80 size=32 callers=0 calls=0
*/
void sub_882f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882f80ULL || rel >= 0x882fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00882fa0 size=256 callers=0 calls=6
   calls: sub_7eef50, sub_7f7770, sub_819600, sub_8196d0, sub_81be40, sub_882dc0
*/
void sub_882fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x882fa0ULL || rel >= 0x8830a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008830a0 size=32 callers=0 calls=0
*/
void sub_8830a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8830a0ULL || rel >= 0x8830c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008830c0 size=240 callers=0 calls=8
   calls: sub_7eef50, sub_7f0670, sub_7f7690, sub_7f78c0, sub_819600, sub_8196d0, sub_81c060, sub_882dc0
*/
void sub_8830c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8830c0ULL || rel >= 0x8831b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008831b0 size=32 callers=0 calls=0
*/
void sub_8831b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8831b0ULL || rel >= 0x8831d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008831d0 size=320 callers=0 calls=9
   calls: sub_7ef2b0, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196d0, sub_819b80
*/
void sub_8831d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8831d0ULL || rel >= 0x883310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883310 size=32 callers=0 calls=0
*/
void sub_883310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883310ULL || rel >= 0x883330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883330 size=288 callers=0 calls=8
   calls: sub_7ef2b0, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819b80
*/
void sub_883330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883330ULL || rel >= 0x883450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883450 size=32 callers=0 calls=0
*/
void sub_883450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883450ULL || rel >= 0x883470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883470 size=464 callers=0 calls=10
   calls: sub_7ee6b0, sub_7ee800, sub_7ef4c0, sub_7f87a0, sub_803c60, sub_803d20, sub_819600, sub_8196d0, sub_819d00, sub_81a030
*/
void sub_883470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883470ULL || rel >= 0x883640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883640 size=32 callers=0 calls=0
*/
void sub_883640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883640ULL || rel >= 0x883660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883660 size=240 callers=0 calls=10
   calls: sub_7ef2b0, sub_7f0670, sub_803c60, sub_819600, sub_8196d0, sub_819a80, sub_819ac0, sub_819fb0, sub_81acc0, sub_81be40
*/
void sub_883660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883660ULL || rel >= 0x883750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883750 size=32 callers=0 calls=0
*/
void sub_883750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883750ULL || rel >= 0x883770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883770 size=336 callers=0 calls=8
   calls: sub_7f7770, sub_7f88c0, sub_7f8b80, sub_803c60, sub_819600, sub_819680, sub_8196d0, sub_819d00
*/
void sub_883770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883770ULL || rel >= 0x8838c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008838c0 size=32 callers=0 calls=0
*/
void sub_8838c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8838c0ULL || rel >= 0x8838e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008838e0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8838e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8838e0ULL || rel >= 0x883930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883930 size=32 callers=0 calls=0
*/
void sub_883930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883930ULL || rel >= 0x883950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883950 size=112 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8196b0
*/
void sub_883950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883950ULL || rel >= 0x8839c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008839c0 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_8839c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8839c0ULL || rel >= 0x883a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883a30 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_883a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883a30ULL || rel >= 0x883a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883a80 size=32 callers=0 calls=0
*/
void sub_883a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883a80ULL || rel >= 0x883aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883aa0 size=560 callers=0 calls=17
   calls: sub_7eb490, sub_7ee6b0, sub_7eef50, sub_7f7690, sub_7f8cf0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_8196d0
   ... +5 more
*/
void sub_883aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883aa0ULL || rel >= 0x883cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883cd0 size=32 callers=0 calls=0
*/
void sub_883cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883cd0ULL || rel >= 0x883cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883cf0 size=144 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819c80
*/
void sub_883cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883cf0ULL || rel >= 0x883d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883d80 size=32 callers=0 calls=0
*/
void sub_883d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883d80ULL || rel >= 0x883da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883da0 size=288 callers=0 calls=6
   calls: sub_7eef50, sub_803c60, sub_819600, sub_8196d0, sub_819df0, sub_81c100
*/
void sub_883da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883da0ULL || rel >= 0x883ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883ec0 size=32 callers=0 calls=0
*/
void sub_883ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883ec0ULL || rel >= 0x883ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00883ee0 size=544 callers=0 calls=16
   calls: sub_780d10, sub_780d70, sub_780da0, sub_7ee6b0, sub_7efe00, sub_7efef0, sub_7f7690, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0
   ... +4 more
*/
void sub_883ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x883ee0ULL || rel >= 0x884100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884100 size=32 callers=0 calls=0
*/
void sub_884100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884100ULL || rel >= 0x884120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884120 size=288 callers=0 calls=10
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819a80, sub_819ac0, sub_81a030, sub_81c100, sub_884240
*/
void sub_884120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884120ULL || rel >= 0x884240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884240 size=224 callers=1 calls=9
   calls: sub_780d40, sub_780da0, sub_780ec0, sub_7ee6b0, sub_7efe00, sub_7efef0, sub_7f05d0, sub_7f7150, sub_81b7a0
*/
void sub_884240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884240ULL || rel >= 0x884320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884320 size=32 callers=0 calls=0
*/
void sub_884320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884320ULL || rel >= 0x884340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884340 size=384 callers=0 calls=10
   calls: sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819a80, sub_819ac0, sub_81a030, sub_81c100
*/
void sub_884340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884340ULL || rel >= 0x8844c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008844c0 size=32 callers=0 calls=0
*/
void sub_8844c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8844c0ULL || rel >= 0x8844e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008844e0 size=208 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_8844e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8844e0ULL || rel >= 0x8845b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008845b0 size=128 callers=0 calls=4
   calls: sub_7ef540, sub_819600, sub_819640, sub_8196d0
*/
void sub_8845b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8845b0ULL || rel >= 0x884630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884630 size=192 callers=0 calls=9
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_884630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884630ULL || rel >= 0x8846f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008846f0 size=32 callers=0 calls=0
*/
void sub_8846f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8846f0ULL || rel >= 0x884710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884710 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_884710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884710ULL || rel >= 0x884780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884780 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_884780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884780ULL || rel >= 0x8847d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008847d0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8847d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8847d0ULL || rel >= 0x884820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884820 size=32 callers=0 calls=0
*/
void sub_884820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884820ULL || rel >= 0x884840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884840 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_884840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884840ULL || rel >= 0x8848a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008848a0 size=128 callers=0 calls=2
   calls: sub_7f8030, sub_819600
*/
void sub_8848a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8848a0ULL || rel >= 0x884920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884920 size=304 callers=0 calls=9
   calls: sub_7ef540, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819640, sub_8196d0, sub_819b00, sub_81a030
*/
void sub_884920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884920ULL || rel >= 0x884a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884a50 size=256 callers=4 calls=8
   calls: sub_7f0c00, sub_803c60, sub_803d20, sub_803d60, sub_819640, sub_8196d0, sub_819df0, sub_81a030
*/
void sub_884a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884a50ULL || rel >= 0x884b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884b50 size=32 callers=0 calls=0
*/
void sub_884b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884b50ULL || rel >= 0x884b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884b70 size=320 callers=0 calls=12
   calls: sub_7f79e0, sub_7f7db0, sub_7f7dd0, sub_803c60, sub_819600, sub_8196d0, sub_819770, sub_819a80, sub_819ac0, sub_819b00, sub_819b80, sub_81a350
*/
void sub_884b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884b70ULL || rel >= 0x884cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884cb0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_884cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884cb0ULL || rel >= 0x884d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884d10 size=176 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_81bba0
*/
void sub_884d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884d10ULL || rel >= 0x884dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884dc0 size=32 callers=0 calls=0
*/
void sub_884dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884dc0ULL || rel >= 0x884de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884de0 size=96 callers=0 calls=2
   calls: sub_780c60, sub_819600
*/
void sub_884de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884de0ULL || rel >= 0x884e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884e40 size=96 callers=0 calls=2
   calls: sub_780c60, sub_819600
*/
void sub_884e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884e40ULL || rel >= 0x884ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884ea0 size=32 callers=0 calls=0
*/
void sub_884ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884ea0ULL || rel >= 0x884ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884ec0 size=176 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_81bba0
*/
void sub_884ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884ec0ULL || rel >= 0x884f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884f70 size=32 callers=0 calls=0
*/
void sub_884f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884f70ULL || rel >= 0x884f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00884f90 size=176 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_81bba0
*/
void sub_884f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x884f90ULL || rel >= 0x885040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885040 size=32 callers=0 calls=0
*/
void sub_885040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885040ULL || rel >= 0x885060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885060 size=192 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_81bba0, sub_884a50
*/
void sub_885060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885060ULL || rel >= 0x885120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885120 size=32 callers=0 calls=0
*/
void sub_885120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885120ULL || rel >= 0x885140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885140 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_885140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885140ULL || rel >= 0x8851a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008851a0 size=112 callers=0 calls=1
   calls: sub_819600
*/
void sub_8851a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8851a0ULL || rel >= 0x885210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885210 size=64 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_885210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885210ULL || rel >= 0x885250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00885250 size=112 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_885250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x885250ULL || rel >= 0x8852c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008852c0 size=16 callers=0 calls=0
*/
void sub_8852c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8852c0ULL || rel >= 0x8852d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008852d0 size=32 callers=0 calls=0
*/
void sub_8852d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8852d0ULL || rel >= 0x8852f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008852f0 size=240 callers=0 calls=9
   calls: sub_780c60, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819a80, sub_819ac0, sub_81a030
*/
void sub_8852f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8852f0ULL || rel >= 0x8853e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008853e0 size=32 callers=0 calls=0
*/
void sub_8853e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8853e0ULL || rel >= 0x885400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

