/* main functions 01251860..01267bb0 (154 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01251860 size=16 callers=0 calls=0
*/
void sub_1251860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251860ULL || rel >= 0x1251870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251870 size=16 callers=0 calls=0
*/
void sub_1251870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251870ULL || rel >= 0x1251880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251880 size=256 callers=0 calls=2
   calls: sub_7a3810, sub_eb8a30
*/
void sub_1251880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251880ULL || rel >= 0x1251980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251980 size=16 callers=0 calls=0
*/
void sub_1251980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251980ULL || rel >= 0x1251990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251990 size=16 callers=0 calls=0
*/
void sub_1251990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251990ULL || rel >= 0x12519a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012519a0 size=16 callers=0 calls=0
*/
void sub_12519a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12519a0ULL || rel >= 0x12519b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012519b0 size=16 callers=0 calls=0
*/
void sub_12519b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12519b0ULL || rel >= 0x12519c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012519c0 size=16 callers=0 calls=0
*/
void sub_12519c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12519c0ULL || rel >= 0x12519d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012519d0 size=16 callers=0 calls=0
*/
void sub_12519d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12519d0ULL || rel >= 0x12519e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012519e0 size=16 callers=0 calls=0
*/
void sub_12519e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12519e0ULL || rel >= 0x12519f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012519f0 size=160 callers=0 calls=2
   calls: sub_7a3810, sub_e807f0
*/
void sub_12519f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12519f0ULL || rel >= 0x1251a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251a90 size=16 callers=0 calls=0
*/
void sub_1251a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251a90ULL || rel >= 0x1251aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251aa0 size=16 callers=0 calls=0
*/
void sub_1251aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251aa0ULL || rel >= 0x1251ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251ab0 size=16 callers=0 calls=0
*/
void sub_1251ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251ab0ULL || rel >= 0x1251ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251ac0 size=448 callers=0 calls=5
   calls: sub_7a2550, sub_7a27c0, sub_7a28c0, sub_7a3810, sub_e807f0
*/
void sub_1251ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251ac0ULL || rel >= 0x1251c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251c80 size=16 callers=0 calls=0
*/
void sub_1251c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251c80ULL || rel >= 0x1251c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251c90 size=16 callers=0 calls=0
*/
void sub_1251c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251c90ULL || rel >= 0x1251ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251ca0 size=16 callers=0 calls=0
*/
void sub_1251ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251ca0ULL || rel >= 0x1251cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251cb0 size=144 callers=0 calls=1
   calls: sub_124d760
*/
void sub_1251cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251cb0ULL || rel >= 0x1251d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251d40 size=16 callers=0 calls=0
*/
void sub_1251d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251d40ULL || rel >= 0x1251d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251d50 size=16 callers=0 calls=0
*/
void sub_1251d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251d50ULL || rel >= 0x1251d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251d60 size=16 callers=0 calls=0
*/
void sub_1251d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251d60ULL || rel >= 0x1251d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251d70 size=432 callers=0 calls=5
   calls: sub_7a2550, sub_7a27c0, sub_7a28c0, sub_7a3810, sub_e807f0
*/
void sub_1251d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251d70ULL || rel >= 0x1251f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251f20 size=16 callers=0 calls=0
*/
void sub_1251f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251f20ULL || rel >= 0x1251f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01251f30 size=240 callers=0 calls=3
   calls: anime_out_5, sub_12470e0, sub_7a3810
*/
void sub_1251f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1251f30ULL || rel >= 0x1252020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252020 size=16 callers=0 calls=0
*/
void sub_1252020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252020ULL || rel >= 0x1252030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252030 size=16 callers=0 calls=0
*/
void sub_1252030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252030ULL || rel >= 0x1252040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252040 size=16 callers=0 calls=0
*/
void sub_1252040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252040ULL || rel >= 0x1252050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252050 size=48 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_1252050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252050ULL || rel >= 0x1252080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252080 size=16 callers=0 calls=0
*/
void sub_1252080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252080ULL || rel >= 0x1252090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252090 size=16 callers=0 calls=0
*/
void sub_1252090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252090ULL || rel >= 0x12520a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012520a0 size=16 callers=0 calls=0
*/
void sub_12520a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12520a0ULL || rel >= 0x12520b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012520b0 size=16 callers=0 calls=0
*/
void sub_12520b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12520b0ULL || rel >= 0x12520c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012520c0 size=16 callers=0 calls=0
*/
void sub_12520c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12520c0ULL || rel >= 0x12520d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012520d0 size=448 callers=0 calls=5
   calls: sub_7a2550, sub_7a27c0, sub_7a28c0, sub_7a3810, sub_e807f0
*/
void sub_12520d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12520d0ULL || rel >= 0x1252290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252290 size=16 callers=0 calls=0
*/
void sub_1252290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252290ULL || rel >= 0x12522a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012522a0 size=48 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_12522a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12522a0ULL || rel >= 0x12522d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012522d0 size=16 callers=0 calls=0
*/
void sub_12522d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12522d0ULL || rel >= 0x12522e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012522e0 size=16 callers=0 calls=0
*/
void sub_12522e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12522e0ULL || rel >= 0x12522f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012522f0 size=16 callers=0 calls=0
*/
void sub_12522f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12522f0ULL || rel >= 0x1252300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252300 size=16 callers=0 calls=0
*/
void sub_1252300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252300ULL || rel >= 0x1252310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252310 size=16 callers=0 calls=0
*/
void sub_1252310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252310ULL || rel >= 0x1252320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252320 size=448 callers=0 calls=5
   calls: sub_7a2550, sub_7a27c0, sub_7a28c0, sub_7a3810, sub_e807f0
*/
void sub_1252320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252320ULL || rel >= 0x12524e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012524e0 size=16 callers=0 calls=0
*/
void sub_12524e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12524e0ULL || rel >= 0x12524f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012524f0 size=464 callers=0 calls=3
   calls: sub_1367100, sub_7a3810, sub_eb8a30
*/
void sub_12524f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12524f0ULL || rel >= 0x12526c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012526c0 size=16 callers=0 calls=0
*/
void sub_12526c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12526c0ULL || rel >= 0x12526d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012526d0 size=16 callers=0 calls=0
*/
void sub_12526d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12526d0ULL || rel >= 0x12526e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012526e0 size=16 callers=0 calls=0
*/
void sub_12526e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12526e0ULL || rel >= 0x12526f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012526f0 size=16 callers=0 calls=0
*/
void sub_12526f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12526f0ULL || rel >= 0x1252700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252700 size=16 callers=0 calls=0
*/
void sub_1252700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252700ULL || rel >= 0x1252710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252710 size=448 callers=0 calls=5
   calls: sub_7a2550, sub_7a27c0, sub_7a28c0, sub_7a3810, sub_e807f0
*/
void sub_1252710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252710ULL || rel >= 0x12528d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012528d0 size=16 callers=0 calls=0
*/
void sub_12528d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12528d0ULL || rel >= 0x12528e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012528e0 size=48 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_12528e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12528e0ULL || rel >= 0x1252910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252910 size=16 callers=0 calls=0
*/
void sub_1252910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252910ULL || rel >= 0x1252920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252920 size=16 callers=0 calls=0
*/
void sub_1252920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252920ULL || rel >= 0x1252930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252930 size=16 callers=0 calls=0
*/
void sub_1252930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252930ULL || rel >= 0x1252940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252940 size=16 callers=0 calls=0
*/
void sub_1252940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252940ULL || rel >= 0x1252950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252950 size=16 callers=0 calls=0
*/
void sub_1252950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252950ULL || rel >= 0x1252960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252960 size=16 callers=0 calls=0
*/
void sub_1252960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252960ULL || rel >= 0x1252970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252970 size=16 callers=0 calls=0
*/
void sub_1252970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252970ULL || rel >= 0x1252980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252980 size=16 callers=0 calls=0
*/
void sub_1252980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252980ULL || rel >= 0x1252990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252990 size=16 callers=0 calls=0
*/
void sub_1252990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252990ULL || rel >= 0x12529a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012529a0 size=16 callers=0 calls=0
*/
void sub_12529a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12529a0ULL || rel >= 0x12529b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012529b0 size=16 callers=0 calls=0
*/
void sub_12529b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12529b0ULL || rel >= 0x12529c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012529c0 size=16 callers=0 calls=0
*/
void sub_12529c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12529c0ULL || rel >= 0x12529d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012529d0 size=16 callers=0 calls=0
*/
void sub_12529d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12529d0ULL || rel >= 0x12529e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012529e0 size=448 callers=2 calls=0
*/
void sub_12529e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12529e0ULL || rel >= 0x1252ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252ba0 size=224 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_1252ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252ba0ULL || rel >= 0x1252c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252c80 size=16 callers=0 calls=0
*/
void sub_1252c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252c80ULL || rel >= 0x1252c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252c90 size=352 callers=0 calls=3
   calls: anime_out_5, sub_1367100, sub_7a3810
*/
void sub_1252c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252c90ULL || rel >= 0x1252df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252df0 size=16 callers=0 calls=0
*/
void sub_1252df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252df0ULL || rel >= 0x1252e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252e00 size=16 callers=0 calls=0
*/
void sub_1252e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252e00ULL || rel >= 0x1252e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252e10 size=16 callers=0 calls=0
*/
void sub_1252e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252e10ULL || rel >= 0x1252e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252e20 size=16 callers=0 calls=0
*/
void sub_1252e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252e20ULL || rel >= 0x1252e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252e30 size=16 callers=0 calls=0
*/
void sub_1252e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252e30ULL || rel >= 0x1252e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252e40 size=48 callers=0 calls=0
*/
void sub_1252e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252e40ULL || rel >= 0x1252e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252e70 size=16 callers=0 calls=0
*/
void sub_1252e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252e70ULL || rel >= 0x1252e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252e80 size=16 callers=0 calls=0
*/
void sub_1252e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252e80ULL || rel >= 0x1252e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252e90 size=16 callers=0 calls=0
*/
void sub_1252e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252e90ULL || rel >= 0x1252ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252ea0 size=16 callers=0 calls=0
*/
void sub_1252ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252ea0ULL || rel >= 0x1252eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252eb0 size=16 callers=0 calls=0
*/
void sub_1252eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252eb0ULL || rel >= 0x1252ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252ec0 size=16 callers=0 calls=0
*/
void sub_1252ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252ec0ULL || rel >= 0x1252ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252ed0 size=16 callers=0 calls=0
*/
void sub_1252ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252ed0ULL || rel >= 0x1252ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252ee0 size=96 callers=0 calls=1
   calls: sub_eb8c60
*/
void sub_1252ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252ee0ULL || rel >= 0x1252f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252f40 size=16 callers=0 calls=0
*/
void sub_1252f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252f40ULL || rel >= 0x1252f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252f50 size=16 callers=0 calls=0
*/
void sub_1252f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252f50ULL || rel >= 0x1252f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252f60 size=16 callers=0 calls=0
*/
void sub_1252f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252f60ULL || rel >= 0x1252f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252f70 size=96 callers=0 calls=1
   calls: sub_eb8e80
*/
void sub_1252f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252f70ULL || rel >= 0x1252fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252fd0 size=16 callers=0 calls=0
*/
void sub_1252fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252fd0ULL || rel >= 0x1252fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252fe0 size=16 callers=0 calls=0
*/
void sub_1252fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252fe0ULL || rel >= 0x1252ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01252ff0 size=16 callers=0 calls=0
*/
void sub_1252ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1252ff0ULL || rel >= 0x1253000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253000 size=16 callers=0 calls=0
*/
void sub_1253000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253000ULL || rel >= 0x1253010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253010 size=16 callers=0 calls=0
*/
void sub_1253010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253010ULL || rel >= 0x1253020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253020 size=16 callers=0 calls=0
*/
void sub_1253020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253020ULL || rel >= 0x1253030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253030 size=16 callers=0 calls=0
*/
void sub_1253030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253030ULL || rel >= 0x1253040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253040 size=112 callers=0 calls=0
*/
void sub_1253040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253040ULL || rel >= 0x12530b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012530b0 size=16 callers=0 calls=0
*/
void sub_12530b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12530b0ULL || rel >= 0x12530c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012530c0 size=16 callers=0 calls=0
*/
void sub_12530c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12530c0ULL || rel >= 0x12530d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012530d0 size=16 callers=0 calls=0
*/
void sub_12530d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12530d0ULL || rel >= 0x12530e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012530e0 size=128 callers=0 calls=6
   calls: msg_ui_pokecamp_cooking_31_02, sub_124f370, sub_124f4a0, sub_7a9f80, sub_7aab50, sub_eb8a30
*/
void sub_12530e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12530e0ULL || rel >= 0x1253160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253160 size=16 callers=0 calls=0
*/
void sub_1253160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253160ULL || rel >= 0x1253170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253170 size=16 callers=0 calls=0
*/
void sub_1253170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253170ULL || rel >= 0x1253180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253180 size=16 callers=0 calls=0
*/
void sub_1253180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253180ULL || rel >= 0x1253190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253190 size=112 callers=0 calls=0
*/
void sub_1253190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253190ULL || rel >= 0x1253200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253200 size=16 callers=0 calls=0
*/
void sub_1253200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253200ULL || rel >= 0x1253210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253210 size=16 callers=0 calls=0
*/
void sub_1253210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253210ULL || rel >= 0x1253220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253220 size=16 callers=0 calls=0
*/
void sub_1253220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253220ULL || rel >= 0x1253230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253230 size=16 callers=0 calls=0
*/
void sub_1253230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253230ULL || rel >= 0x1253240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253240 size=16 callers=0 calls=0
*/
void sub_1253240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253240ULL || rel >= 0x1253250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253250 size=16 callers=0 calls=0
*/
void sub_1253250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253250ULL || rel >= 0x1253260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253260 size=16 callers=0 calls=0
*/
void sub_1253260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253260ULL || rel >= 0x1253270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253270 size=16 callers=0 calls=0
*/
void sub_1253270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253270ULL || rel >= 0x1253280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253280 size=16 callers=0 calls=0
*/
void sub_1253280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253280ULL || rel >= 0x1253290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253290 size=16 callers=0 calls=0
*/
void sub_1253290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253290ULL || rel >= 0x12532a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012532a0 size=16 callers=0 calls=0
*/
void sub_12532a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12532a0ULL || rel >= 0x12532b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012532b0 size=16 callers=0 calls=0
*/
void sub_12532b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12532b0ULL || rel >= 0x12532c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012532c0 size=16 callers=0 calls=0
*/
void sub_12532c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12532c0ULL || rel >= 0x12532d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012532d0 size=16 callers=0 calls=0
*/
void sub_12532d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12532d0ULL || rel >= 0x12532e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012532e0 size=16 callers=0 calls=0
*/
void sub_12532e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12532e0ULL || rel >= 0x12532f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012532f0 size=128 callers=0 calls=0
*/
void sub_12532f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12532f0ULL || rel >= 0x1253370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253370 size=16 callers=0 calls=0
*/
void sub_1253370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253370ULL || rel >= 0x1253380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253380 size=48 callers=0 calls=2
   calls: rare_grade_3, sub_1250440
*/
void sub_1253380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253380ULL || rel >= 0x12533b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012533b0 size=16 callers=0 calls=0
*/
void sub_12533b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12533b0ULL || rel >= 0x12533c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012533c0 size=16 callers=0 calls=0
*/
void sub_12533c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12533c0ULL || rel >= 0x12533d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012533d0 size=16 callers=0 calls=0
*/
void sub_12533d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12533d0ULL || rel >= 0x12533e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012533e0 size=16 callers=0 calls=0
*/
void sub_12533e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12533e0ULL || rel >= 0x12533f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012533f0 size=16 callers=0 calls=0
*/
void sub_12533f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12533f0ULL || rel >= 0x1253400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253400 size=48 callers=0 calls=2
   calls: rare_grade_3, sub_1250440
*/
void sub_1253400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253400ULL || rel >= 0x1253430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253430 size=16 callers=0 calls=0
*/
void sub_1253430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253430ULL || rel >= 0x1253440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253440 size=16 callers=0 calls=0
*/
void sub_1253440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253440ULL || rel >= 0x1253450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253450 size=16 callers=0 calls=0
*/
void sub_1253450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253450ULL || rel >= 0x1253460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253460 size=144 callers=0 calls=0
*/
void sub_1253460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253460ULL || rel >= 0x12534f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012534f0 size=16 callers=0 calls=0
*/
void sub_12534f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12534f0ULL || rel >= 0x1253500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253500 size=16 callers=0 calls=0
*/
void sub_1253500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253500ULL || rel >= 0x1253510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253510 size=16 callers=0 calls=0
*/
void sub_1253510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253510ULL || rel >= 0x1253520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253520 size=16 callers=0 calls=0
*/
void sub_1253520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253520ULL || rel >= 0x1253530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253530 size=16 callers=0 calls=0
*/
void sub_1253530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253530ULL || rel >= 0x1253540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253540 size=16 callers=0 calls=0
*/
void sub_1253540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253540ULL || rel >= 0x1253550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253550 size=16 callers=0 calls=0
*/
void sub_1253550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253550ULL || rel >= 0x1253560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253560 size=16 callers=0 calls=0
*/
void sub_1253560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253560ULL || rel >= 0x1253570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253570 size=16 callers=0 calls=0
*/
void sub_1253570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253570ULL || rel >= 0x1253580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253580 size=16 callers=0 calls=0
*/
void sub_1253580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253580ULL || rel >= 0x1253590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253590 size=16 callers=0 calls=0
*/
void sub_1253590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253590ULL || rel >= 0x12535a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012535a0 size=16 callers=0 calls=0
*/
void sub_12535a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12535a0ULL || rel >= 0x12535b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012535b0 size=16 callers=0 calls=0
*/
void sub_12535b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12535b0ULL || rel >= 0x12535c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012535c0 size=16 callers=0 calls=0
*/
void sub_12535c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12535c0ULL || rel >= 0x12535d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012535d0 size=16 callers=0 calls=0
*/
void sub_12535d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12535d0ULL || rel >= 0x12535e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012535e0 size=208 callers=0 calls=0
*/
void sub_12535e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12535e0ULL || rel >= 0x12536b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012536b0 size=224 callers=1 calls=2
   calls: sub_1253790, sub_1253eb0
*/
void sub_12536b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12536b0ULL || rel >= 0x1253790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253790 size=288 callers=2 calls=3
   calls: sub_1253fe0, sub_c38350, sub_e9db40
*/
void sub_1253790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253790ULL || rel >= 0x12538b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012538b0 size=16 callers=0 calls=0
*/
void sub_12538b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12538b0ULL || rel >= 0x12538c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012538c0 size=16 callers=0 calls=0
*/
void sub_12538c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12538c0ULL || rel >= 0x12538d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012538d0 size=576 callers=0 calls=2
   calls: sub_1253b10, sub_c39c40
*/
void sub_12538d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12538d0ULL || rel >= 0x1253b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253b10 size=272 callers=1 calls=3
   calls: sub_12540c0, sub_672c10, sub_c386f0
*/
void sub_1253b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253b10ULL || rel >= 0x1253c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253c20 size=32 callers=0 calls=0
*/
void sub_1253c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253c20ULL || rel >= 0x1253c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253c40 size=96 callers=0 calls=0
*/
void sub_1253c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253c40ULL || rel >= 0x1253ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253ca0 size=96 callers=0 calls=0
*/
void sub_1253ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253ca0ULL || rel >= 0x1253d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253d00 size=16 callers=0 calls=0
*/
void sub_1253d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253d00ULL || rel >= 0x1253d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253d10 size=96 callers=0 calls=0
*/
void sub_1253d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253d10ULL || rel >= 0x1253d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253d70 size=96 callers=0 calls=0
*/
void sub_1253d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253d70ULL || rel >= 0x1253dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253dd0 size=16 callers=0 calls=0
*/
void sub_1253dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253dd0ULL || rel >= 0x1253de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253de0 size=16 callers=0 calls=0
*/
void sub_1253de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253de0ULL || rel >= 0x1253df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253df0 size=96 callers=0 calls=0
*/
void sub_1253df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253df0ULL || rel >= 0x1253e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253e50 size=96 callers=0 calls=0
*/
void sub_1253e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253e50ULL || rel >= 0x1253eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253eb0 size=304 callers=1 calls=0
*/
void sub_1253eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253eb0ULL || rel >= 0x1253fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01253fe0 size=224 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_1253fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1253fe0ULL || rel >= 0x12540c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012540c0 size=240 callers=1 calls=2
   calls: sub_12541b0, sub_e7b660
*/
void sub_12540c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12540c0ULL || rel >= 0x12541b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012541b0 size=224 callers=1 calls=3
   calls: sub_1254290, sub_7c2da0, sub_e7b5e0
*/
void sub_12541b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12541b0ULL || rel >= 0x1254290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254290 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1254290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254290ULL || rel >= 0x1254380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254380 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1254380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254380ULL || rel >= 0x1254400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254400 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1254400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254400ULL || rel >= 0x1254570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254570 size=96 callers=0 calls=1
   calls: sub_1254790
*/
void sub_1254570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254570ULL || rel >= 0x12545d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012545d0 size=16 callers=0 calls=0
*/
void sub_12545d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12545d0ULL || rel >= 0x12545e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012545e0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_12545e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12545e0ULL || rel >= 0x1254680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254680 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1254680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254680ULL || rel >= 0x1254740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254740 size=16 callers=0 calls=0
*/
void sub_1254740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254740ULL || rel >= 0x1254750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254750 size=16 callers=0 calls=0
*/
void sub_1254750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254750ULL || rel >= 0x1254760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254760 size=16 callers=0 calls=0
*/
void sub_1254760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254760ULL || rel >= 0x1254770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254770 size=32 callers=0 calls=0
*/
void sub_1254770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254770ULL || rel >= 0x1254790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254790 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1254790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254790ULL || rel >= 0x1254870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254870 size=128 callers=0 calls=0
*/
void sub_1254870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254870ULL || rel >= 0x12548f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012548f0 size=1120 callers=0 calls=10
   calls: sub_1254d50, sub_1255960, sub_1255a90, sub_5cfad0, sub_78f150, sub_78f240, sub_794e80, sub_79b250, sub_e7c0f0, sub_e7e890
   ref: optionbar
*/
void optionbar_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12548f0ULL || rel >= 0x1254d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254d50 size=448 callers=1 calls=3
   calls: sub_1255960, sub_e7c160, sub_e7c210
*/
void sub_1254d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254d50ULL || rel >= 0x1254f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01254f10 size=448 callers=0 calls=8
   calls: msg_ui_pokecamp_cooking_30_11, sub_1255ec0, sub_1258180, sub_795bc0, sub_e7ea20, sub_e7f200, sub_e806b0, sub_eb7730
   ref: optionbar
*/
void optionbar_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1254f10ULL || rel >= 0x12550d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012550d0 size=16 callers=0 calls=0
*/
void sub_12550d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12550d0ULL || rel >= 0x12550e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012550e0 size=384 callers=0 calls=3
   calls: sub_1255960, sub_1256010, sub_e7c160
*/
void sub_12550e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12550e0ULL || rel >= 0x1255260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255260 size=16 callers=0 calls=0
*/
void sub_1255260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255260ULL || rel >= 0x1255270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255270 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1255270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255270ULL || rel >= 0x1255430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255430 size=16 callers=0 calls=0
*/
void sub_1255430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255430ULL || rel >= 0x1255440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255440 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1255440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255440ULL || rel >= 0x12554f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012554f0 size=16 callers=0 calls=0
*/
void sub_12554f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12554f0ULL || rel >= 0x1255500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255500 size=16 callers=0 calls=0
*/
void sub_1255500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255500ULL || rel >= 0x1255510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255510 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1255510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255510ULL || rel >= 0x12555c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012555c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12555c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12555c0ULL || rel >= 0x1255670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255670 size=16 callers=0 calls=0
*/
void sub_1255670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255670ULL || rel >= 0x1255680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255680 size=16 callers=0 calls=0
*/
void sub_1255680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255680ULL || rel >= 0x1255690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255690 size=112 callers=0 calls=0
*/
void sub_1255690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255690ULL || rel >= 0x1255700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255700 size=112 callers=0 calls=0
*/
void sub_1255700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255700ULL || rel >= 0x1255770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255770 size=16 callers=0 calls=0
*/
void sub_1255770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255770ULL || rel >= 0x1255780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255780 size=112 callers=0 calls=0
*/
void sub_1255780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255780ULL || rel >= 0x12557f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012557f0 size=112 callers=0 calls=0
*/
void sub_12557f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12557f0ULL || rel >= 0x1255860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255860 size=16 callers=0 calls=0
*/
void sub_1255860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255860ULL || rel >= 0x1255870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255870 size=16 callers=0 calls=0
*/
void sub_1255870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255870ULL || rel >= 0x1255880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255880 size=112 callers=0 calls=0
*/
void sub_1255880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255880ULL || rel >= 0x12558f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012558f0 size=112 callers=0 calls=0
*/
void sub_12558f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12558f0ULL || rel >= 0x1255960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255960 size=304 callers=9 calls=0
*/
void sub_1255960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255960ULL || rel >= 0x1255a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255a90 size=288 callers=1 calls=2
   calls: sub_1255bb0, sub_e809c0
*/
void sub_1255a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255a90ULL || rel >= 0x1255bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255bb0 size=384 callers=1 calls=3
   calls: sub_1255d30, sub_790490, sub_e7fe20
*/
void sub_1255bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255bb0ULL || rel >= 0x1255d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255d30 size=400 callers=1 calls=2
   calls: anonymous_2, sub_14ba3b0
*/
void sub_1255d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255d30ULL || rel >= 0x1255ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01255ec0 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1255ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1255ec0ULL || rel >= 0x1256010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01256010 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1256010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1256010ULL || rel >= 0x1256150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01256150 size=128 callers=0 calls=0
*/
void sub_1256150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1256150ULL || rel >= 0x12561d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012561d0 size=1840 callers=0 calls=19
   calls: pane_L_curry_00_P_curry, sub_1256900, sub_12586f0, sub_1258d80, sub_1315b90, sub_1370690, sub_13706d0, sub_14aad40, sub_14ba7b0, sub_14edac0, sub_14f1840, sub_14f1850
   ... +7 more
*/
void sub_12561d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12561d0ULL || rel >= 0x1256900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01256900 size=272 callers=21 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_1256900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1256900ULL || rel >= 0x1256a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01256a10 size=336 callers=1 calls=7
   calls: msg_ui_pokecamp_cooking_30_11, sub_5cfaf0, sub_794330, sub_d0c0, sub_e806b0, sub_e83450, sub_e836a0
   ref: anime_in
   ref: Play_Camp_Curry_OpenBook
   ref: anime_L_curry_00_f_in_zukan
*/
void anime_L_curry_00_f_in_zukan(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1256a10ULL || rel >= 0x1256b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01256b60 size=944 callers=3 calls=5
   calls: sub_1370870, sub_67d450, sub_e7eb10, sub_eb7570, sub_eb75e0
   ref: msg_ui_pokecamp_cooking_30_10
   ref: msg_ui_pokecamp_cooking_30_01
   ref: msg_ui_pokecamp_cooking_30_11
*/
void msg_ui_pokecamp_cooking_30_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1256b60ULL || rel >= 0x1256f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01256f10 size=336 callers=0 calls=5
   calls: sub_5cfaf0, sub_794330, sub_d0c0, sub_e80580, sub_e83450
   ref: anime_out
   ref: Play_Camp_Curry_CloseBook
*/
void Play_Camp_Curry_CloseBook(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1256f10ULL || rel >= 0x1257060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01257060 size=176 callers=2 calls=4
   calls: sub_5cfaf0, sub_794330, sub_d0c0, sub_e836a0
   ref: anime_change_in
   ref: Play_Camp_Curry_Page
   ref: anime_change_out
*/
void Play_Camp_Curry_Page(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1257060ULL || rel >= 0x1257110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01257110 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp_cooking/bin/pokecamp_cooking_book_top_00_lyt.bin
   ref: bin/appli/pokecamp_cooking/bin/uikit_pokecamp_cooking_book_top.bin
*/
void uikit_pokecamp_cooking_book_top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1257110ULL || rel >= 0x12572f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012572f0 size=192 callers=2 calls=3
   calls: sub_7863b0, sub_786410, sub_786420
*/
void sub_12572f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12572f0ULL || rel >= 0x12573b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012573b0 size=432 callers=1 calls=6
   calls: anime_curry_ef_change, sub_1370720, sub_1370870, sub_5cfaf0, sub_794330, sub_d0c0
   ref: Play_Camp_Curry_Page
*/
void Play_Camp_Curry_Page_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12573b0ULL || rel >= 0x1257560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01257560 size=3104 callers=1 calls=14
   calls: anime_curry_ef_change, place_name_6, sub_1256900, sub_12689a0, sub_13131d0, sub_1313ca0, sub_1315b90, sub_1370810, sub_1370830, sub_67be60, sub_8f3180, sub_e7eb10
   ... +2 more
   ref: msg_ui_pokecamp_cookinfo_01_%02d
   ref: anime_pattern_lv_medal
*/
void anime_pattern_lv_medal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1257560ULL || rel >= 0x1258180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258180 size=80 callers=2 calls=2
   calls: anime_curry_ef_change_2, sub_14bacd0
*/
void sub_1258180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258180ULL || rel >= 0x12581d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012581d0 size=160 callers=0 calls=2
   calls: sub_12683d0, sub_1268710
*/
void sub_12581d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12581d0ULL || rel >= 0x1258270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258270 size=160 callers=0 calls=2
   calls: sub_12683d0, sub_1268710
*/
void sub_1258270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258270ULL || rel >= 0x1258310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258310 size=16 callers=0 calls=0
*/
void sub_1258310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258310ULL || rel >= 0x1258320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258320 size=160 callers=0 calls=2
   calls: sub_12683d0, sub_1268710
*/
void sub_1258320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258320ULL || rel >= 0x12583c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012583c0 size=160 callers=0 calls=2
   calls: sub_12683d0, sub_1268710
*/
void sub_12583c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12583c0ULL || rel >= 0x1258460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258460 size=16 callers=0 calls=0
*/
void sub_1258460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258460ULL || rel >= 0x1258470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258470 size=16 callers=0 calls=0
*/
void sub_1258470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258470ULL || rel >= 0x1258480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258480 size=160 callers=0 calls=2
   calls: sub_12683d0, sub_1268710
*/
void sub_1258480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258480ULL || rel >= 0x1258520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258520 size=160 callers=0 calls=2
   calls: sub_12683d0, sub_1268710
*/
void sub_1258520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258520ULL || rel >= 0x12585c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012585c0 size=304 callers=0 calls=0
*/
void sub_12585c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12585c0ULL || rel >= 0x12586f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012586f0 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_12586f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12586f0ULL || rel >= 0x12588c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012588c0 size=16 callers=0 calls=0
*/
void sub_12588c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12588c0ULL || rel >= 0x12588d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012588d0 size=16 callers=0 calls=0
*/
void sub_12588d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12588d0ULL || rel >= 0x12588e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012588e0 size=16 callers=0 calls=0
*/
void sub_12588e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12588e0ULL || rel >= 0x12588f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012588f0 size=16 callers=0 calls=0
*/
void sub_12588f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12588f0ULL || rel >= 0x1258900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258900 size=672 callers=0 calls=5
   calls: sub_1256900, sub_13131d0, sub_1370830, sub_14aad40, sub_e7eb10
*/
void sub_1258900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258900ULL || rel >= 0x1258ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258ba0 size=16 callers=0 calls=0
*/
void sub_1258ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258ba0ULL || rel >= 0x1258bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258bb0 size=16 callers=0 calls=0
*/
void sub_1258bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258bb0ULL || rel >= 0x1258bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258bc0 size=16 callers=0 calls=0
*/
void sub_1258bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258bc0ULL || rel >= 0x1258bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258bd0 size=384 callers=0 calls=7
   calls: anime_pattern_lv_medal, msg_ui_pokecamp_cooking_30_11, sub_12572f0, sub_1370720, sub_1370850, sub_14aad40, sub_14f1f00
*/
void sub_1258bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258bd0ULL || rel >= 0x1258d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258d50 size=16 callers=0 calls=0
*/
void sub_1258d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258d50ULL || rel >= 0x1258d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258d60 size=16 callers=0 calls=0
*/
void sub_1258d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258d60ULL || rel >= 0x1258d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258d70 size=16 callers=0 calls=0
*/
void sub_1258d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258d70ULL || rel >= 0x1258d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258d80 size=304 callers=4 calls=2
   calls: sub_1258d80, sub_143d390
*/
void sub_1258d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258d80ULL || rel >= 0x1258eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258eb0 size=160 callers=0 calls=3
   calls: sub_14aad40, sub_14ab2b0, sub_e807f0
*/
void sub_1258eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258eb0ULL || rel >= 0x1258f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258f50 size=16 callers=0 calls=0
*/
void sub_1258f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258f50ULL || rel >= 0x1258f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258f60 size=16 callers=0 calls=0
*/
void sub_1258f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258f60ULL || rel >= 0x1258f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258f70 size=16 callers=0 calls=0
*/
void sub_1258f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258f70ULL || rel >= 0x1258f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258f80 size=112 callers=0 calls=2
   calls: sub_14ab2b0, sub_e806b0
*/
void sub_1258f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258f80ULL || rel >= 0x1258ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01258ff0 size=16 callers=0 calls=0
*/
void sub_1258ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1258ff0ULL || rel >= 0x1259000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259000 size=16 callers=0 calls=0
*/
void sub_1259000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259000ULL || rel >= 0x1259010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259010 size=16 callers=0 calls=0
*/
void sub_1259010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259010ULL || rel >= 0x1259020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259020 size=416 callers=1 calls=3
   calls: sub_12591c0, sub_14ba7b0, sub_8f3180
   ref: pane_L_curry_00_P_curry_
*/
void pane_L_curry_00_P_curry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259020ULL || rel >= 0x12591c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012591c0 size=128 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_12591c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12591c0ULL || rel >= 0x1259240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259240 size=16 callers=0 calls=0
*/
void sub_1259240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259240ULL || rel >= 0x1259250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259250 size=464 callers=2 calls=4
   calls: sub_12572f0, sub_12685c0, sub_14aad40, sub_e83870
   ref: anime_curry_ef_change
   ref: anime_pattern_curry
   ref: anime_L_curry_00_curry_change
*/
void anime_curry_ef_change(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259250ULL || rel >= 0x1259420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259420 size=544 callers=1 calls=4
   calls: sub_1370720, sub_14aad40, sub_14bacd0, sub_e83870
   ref: anime_curry_ef_change
   ref: anime_pattern_curry
   ref: anime_L_curry_00_curry_change
   ref: anime_L_curry_00_size
*/
void anime_curry_ef_change_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259420ULL || rel >= 0x1259640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259640 size=464 callers=0 calls=5
   calls: Play_Camp_Curry_Page, anime_L_curry_00_f_in_zukan, sub_1255960, sub_1255ec0, sub_c39c40
*/
void sub_1259640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259640ULL || rel >= 0x1259810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259810 size=16 callers=0 calls=0
*/
void sub_1259810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259810ULL || rel >= 0x1259820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259820 size=432 callers=0 calls=7
   calls: Play_Camp_Curry_Page, Play_Camp_Curry_Page_2, sub_1128340, sub_1255960, sub_1258180, sub_ea3d10, sub_ea4760
*/
void sub_1259820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259820ULL || rel >= 0x12599d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012599d0 size=16 callers=0 calls=0
*/
void sub_12599d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12599d0ULL || rel >= 0x12599e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012599e0 size=16 callers=0 calls=0
*/
void sub_12599e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12599e0ULL || rel >= 0x12599f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012599f0 size=16 callers=0 calls=0
*/
void sub_12599f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12599f0ULL || rel >= 0x1259a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259a00 size=16 callers=0 calls=0
*/
void sub_1259a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259a00ULL || rel >= 0x1259a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259a10 size=16 callers=0 calls=0
*/
void sub_1259a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259a10ULL || rel >= 0x1259a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259a20 size=16 callers=0 calls=0
*/
void sub_1259a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259a20ULL || rel >= 0x1259a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259a30 size=16 callers=0 calls=0
*/
void sub_1259a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259a30ULL || rel >= 0x1259a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259a40 size=16 callers=0 calls=0
*/
void sub_1259a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259a40ULL || rel >= 0x1259a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259a50 size=16 callers=0 calls=0
*/
void sub_1259a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259a50ULL || rel >= 0x1259a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259a60 size=304 callers=0 calls=0
*/
void sub_1259a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259a60ULL || rel >= 0x1259b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259b90 size=32 callers=0 calls=0
*/
void sub_1259b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259b90ULL || rel >= 0x1259bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259bb0 size=16 callers=0 calls=0
*/
void sub_1259bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259bb0ULL || rel >= 0x1259bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259bc0 size=32 callers=0 calls=0
*/
void sub_1259bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259bc0ULL || rel >= 0x1259be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259be0 size=32 callers=0 calls=0
*/
void sub_1259be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259be0ULL || rel >= 0x1259c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259c00 size=128 callers=0 calls=0
*/
void sub_1259c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259c00ULL || rel >= 0x1259c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01259c80 size=1136 callers=1 calls=10
   calls: sub_125d8f0, sub_125da40, sub_1262d90, sub_1263050, sub_1263060, sub_130be10, sub_5cfad0, sub_5e2930, sub_67b990, sub_e98170
   ref: talk_msgwin
   ref: system_msgwin
*/
void system_msgwin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1259c80ULL || rel >= 0x125a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125a0f0 size=16 callers=38 calls=0
*/
void sub_125a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125a0f0ULL || rel >= 0x125a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125a100 size=3216 callers=1 calls=6
   calls: msg_pokecamp_optionbar_zoom, sub_67d450, sub_795bc0, sub_e7eb10, sub_eb7570, sub_eb75e0
   ref: msg_pokecamp_optionbar_talk_02
   ref: msg_pokecamp_optionbar_shake
   ref: msg_pokecamp_optionbar_stop
   ref: msg_pokecamp_optionbar_receive
   ref: msg_pokecamp_optionbar_put_out
   ref: msg_pokecamp_optionbar_throw
   ref: msg_pokecamp_optionbar_menu
   ref: optionbar
*/
void msg_pokecamp_optionbar_throw(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125a100ULL || rel >= 0x125ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125ad90 size=1472 callers=1 calls=4
   calls: sub_67d450, sub_795bc0, sub_e7eb10, sub_eb7570
   ref: msg_pokecamp_optionbar_zoom
   ref: optionbar
   ref: msg_pokecamp_optionbar_change
*/
void msg_pokecamp_optionbar_zoom(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125ad90ULL || rel >= 0x125b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125b350 size=1248 callers=9 calls=7
   calls: sub_67d450, sub_795bc0, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_eb7730, sub_eb77f0
   ref: msg_pokecamp_optionbar_decide
   ref: msg_pokecamp_optionbar_back
   ref: optionbar
   ref: msg_pokecamp_optionbar_change
*/
void msg_pokecamp_optionbar_decide(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125b350ULL || rel >= 0x125b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125b830 size=16 callers=5 calls=0
*/
void sub_125b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125b830ULL || rel >= 0x125b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125b840 size=32 callers=7 calls=0
*/
void sub_125b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125b840ULL || rel >= 0x125b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125b860 size=400 callers=1 calls=3
   calls: sub_67d450, sub_786a40, sub_e7eb10
   ref: msg_ui_pokecamp_cookname_01_%02d
*/
void msg_ui_pokecamp_cookname_01__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125b860ULL || rel >= 0x125b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125b9f0 size=16 callers=1 calls=0
*/
void sub_125b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125b9f0ULL || rel >= 0x125ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125ba00 size=32 callers=1 calls=0
*/
void sub_125ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125ba00ULL || rel >= 0x125ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125ba20 size=2384 callers=0 calls=22
   calls: sub_1179ed0, sub_125c370, sub_125de00, sub_125df30, sub_125e290, sub_125e5f0, sub_125e940, sub_125ecd0, sub_125f030, sub_125f390, sub_125f910, sub_125fd70
   ... +10 more
   ref: cooking_dining
   ref: matching_status
   ref: notice
   ref: cooking_result
   ref: talk_msgwin
   ref: optionbar
   ref: cooking_order
   ref: system_msgwin
*/
void matching_status(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125ba20ULL || rel >= 0x125c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125c370 size=272 callers=1 calls=3
   calls: sub_125dc40, sub_125de00, sub_e7c160
*/
void sub_125c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125c370ULL || rel >= 0x125c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125c480 size=656 callers=0 calls=6
   calls: sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0, sub_e7ea20, sub_e7f200
*/
void sub_125c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125c480ULL || rel >= 0x125c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125c710 size=208 callers=0 calls=3
   calls: notice, sub_125de00, sub_12637e0
*/
void sub_125c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125c710ULL || rel >= 0x125c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125c7e0 size=944 callers=1 calls=11
   calls: anime_L_notice__02d_icon_change, anime_L_notice__02d_in, anime_in_4, anime_out_6, pane_L_notice__02d_T_notice_00, pane_L_notice__02d_T_notice_01, sub_125de00, sub_1261c60, sub_1261db0, sub_1262a70, sub_e7eb10
   ref: notice
*/
void notice(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125c7e0ULL || rel >= 0x125cb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125cb90 size=1792 callers=0 calls=18
   calls: sub_125de00, sub_1260850, sub_1260990, sub_1260ae0, sub_1260c20, sub_1260d60, sub_1260ea0, sub_1260fe0, sub_1261120, sub_1261270, sub_12613d0, sub_1261520
   ... +6 more
*/
void sub_125cb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125cb90ULL || rel >= 0x125d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d290 size=16 callers=0 calls=0
*/
void sub_125d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d290ULL || rel >= 0x125d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d2a0 size=96 callers=1 calls=0
*/
void sub_125d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d2a0ULL || rel >= 0x125d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d300 size=96 callers=1 calls=0
*/
void sub_125d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d300ULL || rel >= 0x125d360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d360 size=464 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_125d360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d360ULL || rel >= 0x125d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d530 size=16 callers=0 calls=0
*/
void sub_125d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d530ULL || rel >= 0x125d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d540 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_125d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d540ULL || rel >= 0x125d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d5f0 size=16 callers=0 calls=0
*/
void sub_125d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d5f0ULL || rel >= 0x125d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d600 size=16 callers=0 calls=0
*/
void sub_125d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d600ULL || rel >= 0x125d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d610 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_125d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d610ULL || rel >= 0x125d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d6c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_125d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d6c0ULL || rel >= 0x125d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d770 size=16 callers=0 calls=0
*/
void sub_125d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d770ULL || rel >= 0x125d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d780 size=16 callers=0 calls=0
*/
void sub_125d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d780ULL || rel >= 0x125d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d790 size=224 callers=0 calls=1
   calls: sub_1261f10
*/
void sub_125d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d790ULL || rel >= 0x125d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d870 size=16 callers=0 calls=0
*/
void sub_125d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d870ULL || rel >= 0x125d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d880 size=16 callers=0 calls=0
*/
void sub_125d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d880ULL || rel >= 0x125d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d890 size=16 callers=0 calls=0
*/
void sub_125d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d890ULL || rel >= 0x125d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d8a0 size=16 callers=0 calls=0
*/
void sub_125d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d8a0ULL || rel >= 0x125d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d8b0 size=16 callers=0 calls=0
*/
void sub_125d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d8b0ULL || rel >= 0x125d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d8c0 size=16 callers=0 calls=0
*/
void sub_125d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d8c0ULL || rel >= 0x125d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d8d0 size=16 callers=0 calls=0
*/
void sub_125d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d8d0ULL || rel >= 0x125d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d8e0 size=16 callers=0 calls=0
*/
void sub_125d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d8e0ULL || rel >= 0x125d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125d8f0 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_125d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125d8f0ULL || rel >= 0x125da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125da40 size=272 callers=1 calls=2
   calls: sub_125db50, sub_5cfaf0
*/
void sub_125da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125da40ULL || rel >= 0x125db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125db50 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_125db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125db50ULL || rel >= 0x125dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125dc40 size=448 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_125dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125dc40ULL || rel >= 0x125de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125de00 size=304 callers=138 calls=0
*/
void sub_125de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125de00ULL || rel >= 0x125df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125df30 size=288 callers=1 calls=2
   calls: sub_125e050, sub_e809c0
*/
void sub_125df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125df30ULL || rel >= 0x125e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125e050 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_125e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125e050ULL || rel >= 0x125e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125e290 size=288 callers=1 calls=2
   calls: sub_125e3b0, sub_e809c0
*/
void sub_125e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125e290ULL || rel >= 0x125e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125e3b0 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_125e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125e3b0ULL || rel >= 0x125e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125e5f0 size=288 callers=1 calls=2
   calls: sub_125e710, sub_e809c0
*/
void sub_125e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125e5f0ULL || rel >= 0x125e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125e710 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_125e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125e710ULL || rel >= 0x125e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125e940 size=288 callers=1 calls=2
   calls: sub_125ea60, sub_e809c0
*/
void sub_125e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125e940ULL || rel >= 0x125ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125ea60 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_125ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125ea60ULL || rel >= 0x125ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125ecd0 size=288 callers=1 calls=2
   calls: sub_125edf0, sub_e809c0
*/
void sub_125ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125ecd0ULL || rel >= 0x125edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125edf0 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_125edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125edf0ULL || rel >= 0x125f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f030 size=288 callers=1 calls=2
   calls: sub_125f150, sub_e809c0
*/
void sub_125f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f030ULL || rel >= 0x125f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f150 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_125f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f150ULL || rel >= 0x125f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f390 size=288 callers=1 calls=2
   calls: sub_125f4b0, sub_e809c0
*/
void sub_125f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f390ULL || rel >= 0x125f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f4b0 size=384 callers=1 calls=3
   calls: sub_125f630, sub_790490, sub_e7fe20
*/
void sub_125f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f4b0ULL || rel >= 0x125f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f630 size=320 callers=1 calls=2
   calls: anonymous_2, sub_ea46c0
*/
void sub_125f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f630ULL || rel >= 0x125f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f770 size=16 callers=0 calls=0
*/
void sub_125f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f770ULL || rel >= 0x125f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f780 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_125f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f780ULL || rel >= 0x125f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f7f0 size=16 callers=0 calls=0
*/
void sub_125f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f7f0ULL || rel >= 0x125f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f800 size=16 callers=0 calls=0
*/
void sub_125f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f800ULL || rel >= 0x125f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f810 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_125f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f810ULL || rel >= 0x125f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f880 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_125f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f880ULL || rel >= 0x125f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f8f0 size=16 callers=0 calls=0
*/
void sub_125f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f8f0ULL || rel >= 0x125f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f900 size=16 callers=0 calls=0
*/
void sub_125f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f900ULL || rel >= 0x125f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125f910 size=288 callers=1 calls=2
   calls: sub_125fa30, sub_e809c0
*/
void sub_125f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125f910ULL || rel >= 0x125fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fa30 size=384 callers=1 calls=3
   calls: sub_125fbb0, sub_790490, sub_e7fe20
*/
void sub_125fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fa30ULL || rel >= 0x125fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fbb0 size=320 callers=1 calls=2
   calls: anonymous_2, sub_ea46c0
*/
void sub_125fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fbb0ULL || rel >= 0x125fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fcf0 size=16 callers=0 calls=0
*/
void sub_125fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fcf0ULL || rel >= 0x125fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fd00 size=16 callers=0 calls=0
*/
void sub_125fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fd00ULL || rel >= 0x125fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fd10 size=16 callers=0 calls=0
*/
void sub_125fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fd10ULL || rel >= 0x125fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fd20 size=16 callers=0 calls=0
*/
void sub_125fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fd20ULL || rel >= 0x125fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fd30 size=16 callers=0 calls=0
*/
void sub_125fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fd30ULL || rel >= 0x125fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fd40 size=16 callers=0 calls=0
*/
void sub_125fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fd40ULL || rel >= 0x125fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fd50 size=16 callers=0 calls=0
*/
void sub_125fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fd50ULL || rel >= 0x125fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fd60 size=16 callers=0 calls=0
*/
void sub_125fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fd60ULL || rel >= 0x125fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fd70 size=288 callers=1 calls=2
   calls: sub_125fe90, sub_e809c0
*/
void sub_125fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fd70ULL || rel >= 0x125fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0125fe90 size=384 callers=1 calls=3
   calls: sub_1260010, sub_790490, sub_e7fe20
*/
void sub_125fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125fe90ULL || rel >= 0x1260010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260010 size=352 callers=1 calls=1
   calls: anonymous_2
*/
void sub_1260010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260010ULL || rel >= 0x1260170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260170 size=288 callers=1 calls=2
   calls: sub_1260290, sub_e809c0
*/
void sub_1260170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260170ULL || rel >= 0x1260290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260290 size=528 callers=1 calls=3
   calls: sub_1266d90, sub_790490, sub_e7fe20
*/
void sub_1260290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260290ULL || rel >= 0x12604a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012604a0 size=288 callers=1 calls=2
   calls: sub_12605c0, sub_e809c0
*/
void sub_12604a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12604a0ULL || rel >= 0x12605c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012605c0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12605c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12605c0ULL || rel >= 0x1260810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260810 size=16 callers=0 calls=0
*/
void sub_1260810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260810ULL || rel >= 0x1260820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260820 size=16 callers=0 calls=0
*/
void sub_1260820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260820ULL || rel >= 0x1260830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260830 size=16 callers=0 calls=0
*/
void sub_1260830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260830ULL || rel >= 0x1260840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260840 size=16 callers=0 calls=0
*/
void sub_1260840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260840ULL || rel >= 0x1260850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260850 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1260850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260850ULL || rel >= 0x1260990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260990 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1260990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260990ULL || rel >= 0x1260ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260ae0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1260ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260ae0ULL || rel >= 0x1260c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260c20 size=320 callers=1 calls=1
   calls: sub_1269010
*/
void sub_1260c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260c20ULL || rel >= 0x1260d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260d60 size=320 callers=1 calls=1
   calls: sub_1269010
*/
void sub_1260d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260d60ULL || rel >= 0x1260ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260ea0 size=320 callers=1 calls=1
   calls: sub_1269010
*/
void sub_1260ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260ea0ULL || rel >= 0x1260fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01260fe0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1260fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1260fe0ULL || rel >= 0x1261120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261120 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1261120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261120ULL || rel >= 0x1261270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261270 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_1261270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261270ULL || rel >= 0x12613d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012613d0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_12613d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12613d0ULL || rel >= 0x1261520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261520 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1261520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261520ULL || rel >= 0x1261660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261660 size=288 callers=1 calls=1
   calls: sub_12648f0
*/
void sub_1261660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261660ULL || rel >= 0x1261780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261780 size=288 callers=1 calls=1
   calls: sub_1263db0
*/
void sub_1261780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261780ULL || rel >= 0x12618a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012618a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_12618a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12618a0ULL || rel >= 0x12619e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012619e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_12619e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12619e0ULL || rel >= 0x1261b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261b20 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1261b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261b20ULL || rel >= 0x1261c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261c60 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1261c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261c60ULL || rel >= 0x1261db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261db0 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1261db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261db0ULL || rel >= 0x1261f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01261f10 size=768 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_1261f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1261f10ULL || rel >= 0x1262210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262210 size=208 callers=0 calls=0
*/
void sub_1262210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262210ULL || rel >= 0x12622e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012622e0 size=368 callers=0 calls=5
   calls: pane_L_notice__02d_P_player_00, sub_14aad40, sub_e806b0, sub_e836a0, sub_e83870
   ref: anime_L_notice_%02d_out
   ref: pane_L_notice_%02d
   ref: anime_L_notice_%02d_icon_change
*/
void pane_L_notice__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12622e0ULL || rel >= 0x1262450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262450 size=96 callers=1 calls=1
   calls: sub_e83870
   ref: anime_L_notice_%02d_icon_change
*/
void anime_L_notice__02d_icon_change(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262450ULL || rel >= 0x12624b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012624b0 size=240 callers=1 calls=2
   calls: sub_14ba7b0, sub_8f3180
   ref: pane_L_notice_%02d_P_player_00
*/
void pane_L_notice__02d_P_player_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12624b0ULL || rel >= 0x12625a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012625a0 size=240 callers=1 calls=1
   calls: sub_e833a0
   ref: anime_out
*/
void anime_out_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12625a0ULL || rel >= 0x1262690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262690 size=96 callers=1 calls=1
   calls: sub_e833a0
   ref: anime_out
*/
void anime_out_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262690ULL || rel >= 0x12626f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012626f0 size=128 callers=2 calls=2
   calls: sub_e806b0, sub_e833a0
   ref: anime_in
*/
void anime_in_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12626f0ULL || rel >= 0x1262770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262770 size=112 callers=1 calls=1
   calls: sub_e833a0
   ref: anime_L_notice_%02d_in
*/
void anime_L_notice__02d_in(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262770ULL || rel >= 0x12627e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012627e0 size=128 callers=1 calls=2
   calls: sub_136b530, sub_e83ac0
   ref: pane_L_notice_%02d_T_notice_00
*/
void pane_L_notice__02d_T_notice_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12627e0ULL || rel >= 0x1262860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262860 size=240 callers=1 calls=1
   calls: sub_8f19b0
   ref: pane_L_notice_%02d_T_notice_01
*/
void pane_L_notice__02d_T_notice_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262860ULL || rel >= 0x1262950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262950 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp/bin/pokecamp_notice_00_lyt.bin
*/
void pokecamp_notice_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262950ULL || rel >= 0x1262a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262a60 size=16 callers=0 calls=0
*/
void sub_1262a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262a60ULL || rel >= 0x1262a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262a70 size=208 callers=1 calls=2
   calls: player_icon_table_3, sub_136b770
*/
void sub_1262a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262a70ULL || rel >= 0x1262b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262b40 size=16 callers=0 calls=0
*/
void sub_1262b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262b40ULL || rel >= 0x1262b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262b50 size=16 callers=0 calls=0
*/
void sub_1262b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262b50ULL || rel >= 0x1262b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262b60 size=16 callers=0 calls=0
*/
void sub_1262b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262b60ULL || rel >= 0x1262b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262b70 size=16 callers=0 calls=0
*/
void sub_1262b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262b70ULL || rel >= 0x1262b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262b80 size=16 callers=0 calls=0
*/
void sub_1262b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262b80ULL || rel >= 0x1262b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262b90 size=16 callers=0 calls=0
*/
void sub_1262b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262b90ULL || rel >= 0x1262ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262ba0 size=16 callers=0 calls=0
*/
void sub_1262ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262ba0ULL || rel >= 0x1262bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262bb0 size=16 callers=0 calls=0
*/
void sub_1262bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262bb0ULL || rel >= 0x1262bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262bc0 size=304 callers=0 calls=0
*/
void sub_1262bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262bc0ULL || rel >= 0x1262cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262cf0 size=160 callers=0 calls=0
*/
void sub_1262cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262cf0ULL || rel >= 0x1262d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262d90 size=528 callers=1 calls=1
   calls: sub_67b990
*/
void sub_1262d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262d90ULL || rel >= 0x1262fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262fa0 size=16 callers=1 calls=0
*/
void sub_1262fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262fa0ULL || rel >= 0x1262fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01262fb0 size=160 callers=4 calls=1
   calls: sub_e80810
*/
void sub_1262fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1262fb0ULL || rel >= 0x1263050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263050 size=16 callers=1 calls=0
*/
void sub_1263050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263050ULL || rel >= 0x1263060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263060 size=16 callers=1 calls=0
*/
void sub_1263060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263060ULL || rel >= 0x1263070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263070 size=96 callers=14 calls=0
*/
void sub_1263070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263070ULL || rel >= 0x12630d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012630d0 size=144 callers=15 calls=1
   calls: sub_67d450
*/
void sub_12630d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12630d0ULL || rel >= 0x1263160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263160 size=320 callers=1 calls=2
   calls: T_name_00, sub_67b7e0
*/
void sub_1263160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263160ULL || rel >= 0x12632a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012632a0 size=64 callers=1 calls=2
   calls: sub_1263160, sub_136b530
*/
void sub_12632a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12632a0ULL || rel >= 0x12632e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012632e0 size=32 callers=1 calls=0
*/
void sub_12632e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12632e0ULL || rel >= 0x1263300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263300 size=64 callers=21 calls=0
*/
void sub_1263300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263300ULL || rel >= 0x1263340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263340 size=176 callers=16 calls=1
   calls: sub_67d450
*/
void sub_1263340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263340ULL || rel >= 0x12633f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012633f0 size=144 callers=5 calls=1
   calls: sub_14aad40
*/
void sub_12633f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12633f0ULL || rel >= 0x1263480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263480 size=304 callers=6 calls=1
   calls: sub_93c570
*/
void sub_1263480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263480ULL || rel >= 0x12635b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012635b0 size=64 callers=3 calls=2
   calls: sub_1263480, sub_14e3680
*/
void sub_12635b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12635b0ULL || rel >= 0x12635f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012635f0 size=16 callers=6 calls=0
*/
void sub_12635f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12635f0ULL || rel >= 0x1263600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263600 size=32 callers=2 calls=1
   calls: sub_1263480
*/
void sub_1263600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263600ULL || rel >= 0x1263620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263620 size=32 callers=2 calls=1
   calls: sub_1263480
*/
void sub_1263620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263620ULL || rel >= 0x1263640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263640 size=336 callers=11 calls=3
   calls: sub_e807f0, sub_eb8930, sub_eb8990
*/
void sub_1263640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263640ULL || rel >= 0x1263790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263790 size=64 callers=1 calls=0
*/
void sub_1263790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263790ULL || rel >= 0x12637d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012637d0 size=16 callers=2 calls=0
*/
void sub_12637d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12637d0ULL || rel >= 0x12637e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012637e0 size=336 callers=1 calls=4
   calls: Play_UI_common_decide_5, sub_1263480, sub_eb8e80, sub_eb8ea0
*/
void sub_12637e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12637e0ULL || rel >= 0x1263930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263930 size=96 callers=2 calls=1
   calls: sub_14a9440
*/
void sub_1263930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263930ULL || rel >= 0x1263990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263990 size=16 callers=2 calls=0
*/
void sub_1263990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263990ULL || rel >= 0x12639a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012639a0 size=160 callers=10 calls=4
   calls: sub_1263480, sub_14e4110, sub_14e4120, sub_eb8a30
*/
void sub_12639a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12639a0ULL || rel >= 0x1263a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263a40 size=160 callers=12 calls=0
*/
void sub_1263a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263a40ULL || rel >= 0x1263ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263ae0 size=160 callers=0 calls=1
   calls: sub_1263cd0
*/
void sub_1263ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263ae0ULL || rel >= 0x1263b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263b80 size=336 callers=0 calls=0
*/
void sub_1263b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263b80ULL || rel >= 0x1263cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263cd0 size=224 callers=1 calls=0
*/
void sub_1263cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263cd0ULL || rel >= 0x1263db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263db0 size=192 callers=1 calls=1
   calls: anonymous
*/
void sub_1263db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263db0ULL || rel >= 0x1263e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01263e70 size=448 callers=0 calls=9
   calls: sub_125a0f0, sub_125de00, sub_1263300, sub_1263a40, sub_1264560, sub_12646c0, sub_1313580, sub_13149a0, sub_1315270
*/
void sub_1263e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1263e70ULL || rel >= 0x1264030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264030 size=736 callers=0 calls=10
   calls: sub_1127d00, sub_125a0f0, sub_125de00, sub_1263070, sub_12630d0, sub_1263640, sub_5cf8e0, sub_5cf8f0, sub_c39c40, sub_e7eb10
*/
void sub_1264030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264030ULL || rel >= 0x1264310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264310 size=160 callers=0 calls=3
   calls: sub_125a0f0, sub_125de00, sub_1263a40
*/
void sub_1264310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264310ULL || rel >= 0x12643b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012643b0 size=16 callers=0 calls=0
*/
void sub_12643b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12643b0ULL || rel >= 0x12643c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012643c0 size=16 callers=0 calls=0
*/
void sub_12643c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12643c0ULL || rel >= 0x12643d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012643d0 size=16 callers=0 calls=0
*/
void sub_12643d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12643d0ULL || rel >= 0x12643e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012643e0 size=16 callers=0 calls=0
*/
void sub_12643e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12643e0ULL || rel >= 0x12643f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012643f0 size=16 callers=0 calls=0
*/
void sub_12643f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12643f0ULL || rel >= 0x1264400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264400 size=16 callers=0 calls=0
*/
void sub_1264400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264400ULL || rel >= 0x1264410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264410 size=16 callers=0 calls=0
*/
void sub_1264410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264410ULL || rel >= 0x1264420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264420 size=16 callers=0 calls=0
*/
void sub_1264420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264420ULL || rel >= 0x1264430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264430 size=304 callers=0 calls=0
*/
void sub_1264430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264430ULL || rel >= 0x1264560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264560 size=352 callers=3 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1264560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264560ULL || rel >= 0x12646c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012646c0 size=352 callers=2 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12646c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12646c0ULL || rel >= 0x1264820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264820 size=32 callers=0 calls=0
*/
void sub_1264820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264820ULL || rel >= 0x1264840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264840 size=16 callers=0 calls=0
*/
void sub_1264840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264840ULL || rel >= 0x1264850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264850 size=16 callers=0 calls=0
*/
void sub_1264850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264850ULL || rel >= 0x1264860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264860 size=16 callers=0 calls=0
*/
void sub_1264860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264860ULL || rel >= 0x1264870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264870 size=128 callers=0 calls=0
*/
void sub_1264870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264870ULL || rel >= 0x12648f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012648f0 size=224 callers=1 calls=2
   calls: anonymous, sub_10466c0
*/
void sub_12648f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12648f0ULL || rel >= 0x12649d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012649d0 size=864 callers=0 calls=9
   calls: msg_pokecamp_optionbar_decide, sub_125a0f0, sub_125de00, sub_1262fa0, sub_1262fb0, sub_12665c0, sub_8f19b0, sub_c39c40, sub_e7eb10
   ref: comm_player
*/
void comm_player(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12649d0ULL || rel >= 0x1264d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01264d30 size=1024 callers=0 calls=20
   calls: Play_UI_Camp_Licence, anime_in_5, anime_out_8, msg_pokecamp_bl_03, sub_1047180, sub_1127d00, sub_1127fc0, sub_1128340, sub_1179ed0, sub_125a0f0, sub_125b840, sub_125de00
   ... +8 more
*/
void sub_1264d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1264d30ULL || rel >= 0x1265130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01265130 size=1888 callers=1 calls=18
   calls: seikaku, sub_110c6a0, sub_1148c40, sub_125a0f0, sub_125de00, sub_1262fb0, sub_1263070, sub_12630d0, sub_12632a0, sub_1263300, sub_1263640, sub_1265cc0
   ... +6 more
*/
void sub_1265130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1265130ULL || rel >= 0x1265890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01265890 size=656 callers=1 calls=8
   calls: sub_1128e40, sub_1179f60, sub_125b840, sub_125de00, sub_1266170, sub_13a5bb0, sub_1454010, sub_14544e0
   ref: Play_UI_Camp_Licence
*/
void Play_UI_Camp_Licence(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1265890ULL || rel >= 0x1265b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01265b20 size=288 callers=2 calls=5
   calls: sub_125a0f0, sub_125de00, sub_1262fb0, sub_1265dc0, sub_1266030
   ref: msg_pokecamp_bl_02
   ref: msg_pokecamp_bl_03
   ref: msg_pokecamp_bl_00
   ref: msg_pokecamp_bl_01
*/
void msg_pokecamp_bl_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1265b20ULL || rel >= 0x1265c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01265c40 size=128 callers=0 calls=3
   calls: sub_125a0f0, sub_125de00, sub_12632e0
*/
void sub_1265c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1265c40ULL || rel >= 0x1265cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01265cc0 size=256 callers=3 calls=2
   calls: sub_125b830, sub_5e7b30
*/
void sub_1265cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1265cc0ULL || rel >= 0x1265dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01265dc0 size=624 callers=3 calls=11
   calls: sub_1263070, sub_12630d0, sub_1263300, sub_1263340, sub_12633f0, sub_12635b0, sub_1263640, sub_1263a40, sub_13149a0, sub_c39c40, sub_e7eb10
*/
void sub_1265dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1265dc0ULL || rel >= 0x1266030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266030 size=320 callers=1 calls=8
   calls: sub_1046880, sub_136b530, sub_136b580, sub_136b590, sub_136b770, sub_7c2280, sub_eadb10, sub_eadcf0
*/
void sub_1266030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266030ULL || rel >= 0x1266170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266170 size=416 callers=24 calls=1
   calls: sub_13a5bb0
*/
void sub_1266170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266170ULL || rel >= 0x1266310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266310 size=16 callers=0 calls=0
*/
void sub_1266310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266310ULL || rel >= 0x1266320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266320 size=16 callers=0 calls=0
*/
void sub_1266320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266320ULL || rel >= 0x1266330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266330 size=16 callers=0 calls=0
*/
void sub_1266330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266330ULL || rel >= 0x1266340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266340 size=16 callers=0 calls=0
*/
void sub_1266340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266340ULL || rel >= 0x1266350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266350 size=16 callers=0 calls=0
*/
void sub_1266350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266350ULL || rel >= 0x1266360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266360 size=16 callers=0 calls=0
*/
void sub_1266360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266360ULL || rel >= 0x1266370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266370 size=16 callers=0 calls=0
*/
void sub_1266370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266370ULL || rel >= 0x1266380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266380 size=16 callers=0 calls=0
*/
void sub_1266380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266380ULL || rel >= 0x1266390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266390 size=176 callers=0 calls=5
   calls: msg_pokecamp_bl_03, sub_125a0f0, sub_125de00, sub_1262fb0, sub_12635f0
*/
void sub_1266390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266390ULL || rel >= 0x1266440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266440 size=16 callers=0 calls=0
*/
void sub_1266440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266440ULL || rel >= 0x1266450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266450 size=32 callers=0 calls=0
*/
void sub_1266450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266450ULL || rel >= 0x1266470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266470 size=32 callers=0 calls=0
*/
void sub_1266470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266470ULL || rel >= 0x1266490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266490 size=304 callers=0 calls=0
*/
void sub_1266490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266490ULL || rel >= 0x12665c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012665c0 size=272 callers=1 calls=2
   calls: sub_12666d0, sub_5cfaf0
*/
void sub_12665c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12665c0ULL || rel >= 0x12666d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012666d0 size=304 callers=1 calls=0
*/
void sub_12666d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12666d0ULL || rel >= 0x1266800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266800 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1266800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266800ULL || rel >= 0x1266960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266960 size=208 callers=0 calls=0
*/
void sub_1266960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266960ULL || rel >= 0x1266a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266a30 size=16 callers=0 calls=0
*/
void sub_1266a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266a30ULL || rel >= 0x1266a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266a40 size=64 callers=1 calls=1
   calls: sub_e806b0
   ref: anime_in
*/
void anime_in_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266a40ULL || rel >= 0x1266a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266a80 size=224 callers=2 calls=2
   calls: sub_e80580, sub_e83450
   ref: anime_out
*/
void anime_out_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266a80ULL || rel >= 0x1266b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266b60 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp/bin/pokecamp_comm_player_00_lyt.bin
*/
void pokecamp_comm_player_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266b60ULL || rel >= 0x1266c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266c70 size=16 callers=0 calls=0
*/
void sub_1266c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266c70ULL || rel >= 0x1266c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266c80 size=16 callers=0 calls=0
*/
void sub_1266c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266c80ULL || rel >= 0x1266c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266c90 size=16 callers=0 calls=0
*/
void sub_1266c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266c90ULL || rel >= 0x1266ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266ca0 size=16 callers=0 calls=0
*/
void sub_1266ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266ca0ULL || rel >= 0x1266cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266cb0 size=16 callers=0 calls=0
*/
void sub_1266cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266cb0ULL || rel >= 0x1266cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266cc0 size=16 callers=0 calls=0
*/
void sub_1266cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266cc0ULL || rel >= 0x1266cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266cd0 size=16 callers=0 calls=0
*/
void sub_1266cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266cd0ULL || rel >= 0x1266ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266ce0 size=16 callers=0 calls=0
*/
void sub_1266ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266ce0ULL || rel >= 0x1266cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266cf0 size=112 callers=0 calls=2
   calls: sub_14ab2b0, sub_e806b0
*/
void sub_1266cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266cf0ULL || rel >= 0x1266d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266d60 size=16 callers=0 calls=0
*/
void sub_1266d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266d60ULL || rel >= 0x1266d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266d70 size=16 callers=0 calls=0
*/
void sub_1266d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266d70ULL || rel >= 0x1266d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266d80 size=16 callers=0 calls=0
*/
void sub_1266d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266d80ULL || rel >= 0x1266d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266d90 size=96 callers=1 calls=1
   calls: anonymous_2
*/
void sub_1266d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266d90ULL || rel >= 0x1266df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266df0 size=16 callers=0 calls=0
*/
void sub_1266df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266df0ULL || rel >= 0x1266e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266e00 size=384 callers=1 calls=3
   calls: sub_e806b0, sub_e833a0, sub_e83450
   ref: anime_keep
   ref: anime_f_in
*/
void anime_keep_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266e00ULL || rel >= 0x1266f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266f80 size=112 callers=1 calls=2
   calls: sub_14aad40, sub_e83870
   ref: anime_g_text
*/
void anime_g_text(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266f80ULL || rel >= 0x1266ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01266ff0 size=192 callers=1 calls=2
   calls: sub_8f19b0, sub_e7eb10
*/
void sub_1266ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1266ff0ULL || rel >= 0x12670b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012670b0 size=304 callers=3 calls=2
   calls: sub_8f19b0, sub_e7eb10
*/
void sub_12670b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12670b0ULL || rel >= 0x12671e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012671e0 size=304 callers=1 calls=2
   calls: sub_8f19b0, sub_e7eb10
   ref: msg_ui_pokecamp_cooking_05_08
*/
void msg_ui_pokecamp_cooking_05_08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12671e0ULL || rel >= 0x1267310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267310 size=1392 callers=2 calls=9
   calls: sub_115ab80, sub_1311c60, sub_1312f50, sub_13149a0, sub_67bdb0, sub_67d450, sub_bf0820, sub_e7eb10, sub_e83ac0
   ref: pane_T_text_02
   ref: msg_ui_pokecamp_cooking_05_11
*/
void msg_ui_pokecamp_cooking_05_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267310ULL || rel >= 0x1267880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267880 size=528 callers=1 calls=5
   calls: sub_111b250, sub_1268ee0, sub_14ba3b0, sub_14ba7b0, sub_8f3180
*/
void sub_1267880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267880ULL || rel >= 0x1267a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267a90 size=16 callers=1 calls=0
*/
void sub_1267a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267a90ULL || rel >= 0x1267aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267aa0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokecamp_dining/bin/pokecamp_d_result_00_lyt.bin
*/
void pokecamp_d_result_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267aa0ULL || rel >= 0x1267bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01267bb0 size=160 callers=2 calls=1
   calls: sub_14ab040
*/
void sub_1267bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1267bb0ULL || rel >= 0x1267c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

