/* main functions 00a42bc0..00a64550 (77 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00a42bc0 size=64 callers=0 calls=1
   calls: sub_140bc80
*/
void sub_a42bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42bc0ULL || rel >= 0xa42c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42c00 size=64 callers=0 calls=1
   calls: sub_140bca0
*/
void sub_a42c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42c00ULL || rel >= 0xa42c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42c40 size=64 callers=0 calls=2
   calls: sub_140bc80, sub_9a7680
*/
void sub_a42c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42c40ULL || rel >= 0xa42c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42c80 size=64 callers=0 calls=1
   calls: sub_140bd40
*/
void sub_a42c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42c80ULL || rel >= 0xa42cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42cc0 size=16 callers=0 calls=0
*/
void sub_a42cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42cc0ULL || rel >= 0xa42cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42cd0 size=16 callers=0 calls=0
*/
void sub_a42cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42cd0ULL || rel >= 0xa42ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42ce0 size=2320 callers=0 calls=16
   calls: eb_03d_capture, sub_140b690, sub_140bd40, sub_140bd70, sub_142a660, sub_947d00, sub_952670, sub_974a00, sub_981b70, sub_98e1d0, sub_98e220, sub_98f180
   ... +4 more
*/
void sub_a42ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42ce0ULL || rel >= 0xa435f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a435f0 size=752 callers=1 calls=2
   calls: sub_a663e0, sub_a66b70
*/
void sub_a435f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa435f0ULL || rel >= 0xa438e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a438e0 size=992 callers=0 calls=8
   calls: sub_140b690, sub_140bd40, sub_140bd70, sub_68d950, sub_68daa0, sub_962420, sub_962440, sub_962450
*/
void sub_a438e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa438e0ULL || rel >= 0xa43cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a43cc0 size=512 callers=0 calls=1
   calls: sub_68d9b0
*/
void sub_a43cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa43cc0ULL || rel >= 0xa43ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a43ec0 size=816 callers=0 calls=2
   calls: sub_142a660, sub_98f180
*/
void sub_a43ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa43ec0ULL || rel >= 0xa441f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a441f0 size=1008 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a441f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa441f0ULL || rel >= 0xa445e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a445e0 size=704 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9606c0, sub_961180
*/
void sub_a445e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa445e0ULL || rel >= 0xa448a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a448a0 size=992 callers=0 calls=10
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_142a660, sub_612f70, sub_961f10, sub_971650, sub_976120, sub_a65660
*/
void sub_a448a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa448a0ULL || rel >= 0xa44c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a44c80 size=416 callers=0 calls=4
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_961750
*/
void sub_a44c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa44c80ULL || rel >= 0xa44e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a44e20 size=1024 callers=0 calls=5
   calls: sub_140b690, sub_140bcf0, sub_142a660, sub_989260, sub_a654d0
*/
void sub_a44e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa44e20ULL || rel >= 0xa45220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a45220 size=1152 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a45220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa45220ULL || rel >= 0xa456a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a456a0 size=752 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a456a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa456a0ULL || rel >= 0xa45990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a45990 size=720 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a45990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa45990ULL || rel >= 0xa45c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a45c60 size=784 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_952670, sub_961fd0, sub_a654d0
*/
void sub_a45c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa45c60ULL || rel >= 0xa45f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a45f70 size=1040 callers=0 calls=11
   calls: sub_140b690, sub_140bc80, sub_140bcf0, sub_140bd40, sub_142a660, sub_612f70, sub_961f10, sub_962150, sub_971650, sub_976120, sub_a654d0
*/
void sub_a45f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa45f70ULL || rel >= 0xa46380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a46380 size=752 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a46380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa46380ULL || rel >= 0xa46670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a46670 size=976 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_952670, sub_970390, sub_972af0, sub_a654d0
*/
void sub_a46670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa46670ULL || rel >= 0xa46a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a46a40 size=800 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_972670, sub_974bd0
*/
void sub_a46a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa46a40ULL || rel >= 0xa46d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a46d60 size=608 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_972bc0, sub_974fd0
*/
void sub_a46d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa46d60ULL || rel >= 0xa46fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a46fc0 size=624 callers=0 calls=7
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_952670, sub_972bc0, sub_9751e0
*/
void sub_a46fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa46fc0ULL || rel >= 0xa47230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a47230 size=688 callers=0 calls=7
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_961f10, sub_974da0, sub_974f60
*/
void sub_a47230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa47230ULL || rel >= 0xa474e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a474e0 size=368 callers=0 calls=1
   calls: sub_140bd40
*/
void sub_a474e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa474e0ULL || rel >= 0xa47650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a47650 size=736 callers=0 calls=5
   calls: sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_a67370
*/
void sub_a47650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa47650ULL || rel >= 0xa47930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a47930 size=224 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_960610, sub_9606c0, sub_ee3bb0, sub_ee3bd0
*/
void sub_a47930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa47930ULL || rel >= 0xa47a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a47a10 size=576 callers=0 calls=2
   calls: sub_142a660, sub_a65df0
*/
void sub_a47a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa47a10ULL || rel >= 0xa47c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a47c50 size=880 callers=0 calls=4
   calls: sub_140b690, sub_140bc80, sub_142a660, sub_a66000
*/
void sub_a47c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa47c50ULL || rel >= 0xa47fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a47fc0 size=16 callers=0 calls=0
*/
void sub_a47fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa47fc0ULL || rel >= 0xa47fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a47fd0 size=1584 callers=0 calls=17
   calls: sub_140b690, sub_140bd40, sub_140bd70, sub_142a660, sub_618d90, sub_947d00, sub_9526f0, sub_962420, sub_962440, sub_962450, sub_987ee0, sub_987fa0
   ... +5 more
*/
void sub_a47fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa47fd0ULL || rel >= 0xa48600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a48600 size=752 callers=3 calls=2
   calls: sub_a67630, sub_a67dc0
*/
void sub_a48600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa48600ULL || rel >= 0xa488f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a488f0 size=16 callers=0 calls=0
*/
void sub_a488f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa488f0ULL || rel >= 0xa48900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a48900 size=1808 callers=0 calls=23
   calls: ob0226_00_gfbmdl, sub_11061e0, sub_11063e0, sub_1106bc0, sub_140b690, sub_140bd40, sub_142a660, sub_618d90, sub_947d00, sub_961f10, sub_962420, sub_962440
   ... +11 more
   ref: ballMotion
   ref: bin/chara/data/ob/ob0204_00_monsterball/anm/ob0204_00_ee400.gfbanmcfg
*/
void ballMotion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa48900ULL || rel >= 0xa49010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a49010 size=304 callers=2 calls=3
   calls: sub_5e6180, sub_a68200, sub_d0c0
*/
void sub_a49010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa49010ULL || rel >= 0xa49140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a49140 size=16 callers=0 calls=0
*/
void sub_a49140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa49140ULL || rel >= 0xa49150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a49150 size=1680 callers=0 calls=22
   calls: sub_11061e0, sub_11063e0, sub_1106bc0, sub_140b690, sub_140bd40, sub_142a660, sub_618d90, sub_947d00, sub_956260, sub_961f10, sub_962420, sub_962440
   ... +10 more
   ref: gballThrowEnd
   ref: bin/chara/data/ob/ob0304_00_gmonsterball/mdl/ob0304_00.gfbmdl
*/
void gballThrowEnd_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa49150ULL || rel >= 0xa497e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a497e0 size=16 callers=0 calls=0
*/
void sub_a497e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa497e0ULL || rel >= 0xa497f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a497f0 size=816 callers=0 calls=2
   calls: sub_142a660, sub_98efb0
*/
void sub_a497f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa497f0ULL || rel >= 0xa49b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a49b20 size=832 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a49b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa49b20ULL || rel >= 0xa49e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a49e60 size=704 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9606c0, sub_961180
*/
void sub_a49e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa49e60ULL || rel >= 0xa4a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4a120 size=992 callers=0 calls=10
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_142a660, sub_612f70, sub_961f10, sub_971650, sub_976120, sub_a65660
*/
void sub_a4a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4a120ULL || rel >= 0xa4a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4a500 size=416 callers=0 calls=4
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_961750
*/
void sub_a4a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4a500ULL || rel >= 0xa4a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4a6a0 size=752 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a4a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4a6a0ULL || rel >= 0xa4a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4a990 size=720 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a4a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4a990ULL || rel >= 0xa4ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ac60 size=784 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_952670, sub_961fd0, sub_a654d0
*/
void sub_a4ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ac60ULL || rel >= 0xa4af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4af70 size=1040 callers=0 calls=11
   calls: sub_140b690, sub_140bc80, sub_140bcf0, sub_140bd40, sub_142a660, sub_612f70, sub_961f10, sub_962150, sub_971650, sub_976120, sub_a654d0
*/
void sub_a4af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4af70ULL || rel >= 0xa4b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4b380 size=752 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a4b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4b380ULL || rel >= 0xa4b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4b670 size=976 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_952670, sub_970390, sub_972af0, sub_a654d0
*/
void sub_a4b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4b670ULL || rel >= 0xa4ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ba40 size=272 callers=0 calls=1
   calls: sub_140bd40
*/
void sub_a4ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ba40ULL || rel >= 0xa4bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4bb50 size=768 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_972670, sub_974bd0
*/
void sub_a4bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4bb50ULL || rel >= 0xa4be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4be50 size=608 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_972bc0, sub_974fd0
*/
void sub_a4be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4be50ULL || rel >= 0xa4c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4c0b0 size=608 callers=0 calls=7
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_952670, sub_972bc0, sub_9751e0
*/
void sub_a4c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4c0b0ULL || rel >= 0xa4c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4c310 size=16 callers=0 calls=0
*/
void sub_a4c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4c310ULL || rel >= 0xa4c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4c320 size=560 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_961f10, sub_974da0, sub_974f60
*/
void sub_a4c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4c320ULL || rel >= 0xa4c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4c550 size=368 callers=0 calls=1
   calls: sub_140bd40
*/
void sub_a4c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4c550ULL || rel >= 0xa4c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4c6c0 size=736 callers=0 calls=5
   calls: sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_a67370
*/
void sub_a4c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4c6c0ULL || rel >= 0xa4c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4c9a0 size=16 callers=0 calls=0
*/
void sub_a4c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4c9a0ULL || rel >= 0xa4c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4c9b0 size=384 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9537b0, sub_953810, sub_960610, sub_9606c0
*/
void sub_a4c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4c9b0ULL || rel >= 0xa4cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4cb30 size=1200 callers=0 calls=6
   calls: sub_140bca0, sub_140bcf0, sub_142a660, sub_9890a0, sub_9891e0, sub_a654d0
*/
void sub_a4cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4cb30ULL || rel >= 0xa4cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4cfe0 size=1232 callers=0 calls=6
   calls: sub_140bc80, sub_140bcf0, sub_142a660, sub_9890a0, sub_989160, sub_a65340
*/
void sub_a4cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4cfe0ULL || rel >= 0xa4d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4d4b0 size=720 callers=0 calls=4
   calls: sub_140bcf0, sub_140bd40, sub_9890a0, sub_9890c0
*/
void sub_a4d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4d4b0ULL || rel >= 0xa4d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4d780 size=192 callers=0 calls=3
   calls: sub_140b690, sub_140bd40, sub_140bd70
*/
void sub_a4d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4d780ULL || rel >= 0xa4d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4d840 size=416 callers=0 calls=3
   calls: sub_140bd70, sub_9889b0, sub_c1f550
*/
void sub_a4d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4d840ULL || rel >= 0xa4d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4d9e0 size=256 callers=0 calls=2
   calls: sub_140b690, sub_988980
*/
void sub_a4d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4d9e0ULL || rel >= 0xa4dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4dae0 size=288 callers=0 calls=3
   calls: sub_140b690, sub_140bc80, sub_9889a0
*/
void sub_a4dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4dae0ULL || rel >= 0xa4dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4dc00 size=432 callers=0 calls=3
   calls: sub_140bcf0, sub_5cfad0, sub_988e80
*/
void sub_a4dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4dc00ULL || rel >= 0xa4ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ddb0 size=16 callers=0 calls=0
*/
void sub_a4ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ddb0ULL || rel >= 0xa4ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ddc0 size=16 callers=0 calls=0
*/
void sub_a4ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ddc0ULL || rel >= 0xa4ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ddd0 size=576 callers=0 calls=2
   calls: sub_142a660, sub_a65df0
*/
void sub_a4ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ddd0ULL || rel >= 0xa4e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4e010 size=880 callers=0 calls=4
   calls: sub_140b690, sub_140bc80, sub_142a660, sub_a66000
*/
void sub_a4e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4e010ULL || rel >= 0xa4e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4e380 size=16 callers=0 calls=0
*/
void sub_a4e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4e380ULL || rel >= 0xa4e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4e390 size=816 callers=0 calls=5
   calls: sub_140bcf0, sub_5cfaf0, sub_794330, sub_9693c0, sub_d0c0
*/
void sub_a4e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4e390ULL || rel >= 0xa4e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4e6c0 size=256 callers=0 calls=4
   calls: sub_140bcf0, sub_5cfaf0, sub_794490, sub_d0c0
*/
void sub_a4e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4e6c0ULL || rel >= 0xa4e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4e7c0 size=160 callers=0 calls=4
   calls: sub_140bcf0, sub_5cfaf0, sub_794470, sub_d0c0
*/
void sub_a4e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4e7c0ULL || rel >= 0xa4e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4e860 size=256 callers=0 calls=4
   calls: sub_140bcf0, sub_5cfaf0, sub_794220, sub_d0c0
*/
void sub_a4e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4e860ULL || rel >= 0xa4e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4e960 size=192 callers=0 calls=6
   calls: sub_140b690, sub_140bc80, sub_140bcf0, sub_5cfaf0, sub_794310, sub_d0c0
*/
void sub_a4e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4e960ULL || rel >= 0xa4ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ea20 size=16 callers=0 calls=0
*/
void sub_a4ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ea20ULL || rel >= 0xa4ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ea30 size=48 callers=0 calls=1
   calls: sub_140bd40
*/
void sub_a4ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ea30ULL || rel >= 0xa4ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ea60 size=400 callers=0 calls=3
   calls: sub_140bd40, sub_142a660, sub_a662c0
*/
void sub_a4ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ea60ULL || rel >= 0xa4ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ebf0 size=16 callers=0 calls=0
*/
void sub_a4ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ebf0ULL || rel >= 0xa4ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ec00 size=880 callers=0 calls=10
   calls: sub_140bcf0, sub_142a660, sub_5cfaf0, sub_947d00, sub_98f350, sub_9b0350, sub_9b08d0, sub_a4ef70, sub_a68f40, sub_d0c0
*/
void sub_a4ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ec00ULL || rel >= 0xa4ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ef70 size=752 callers=1 calls=2
   calls: sub_969790, sub_a687b0
*/
void sub_a4ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ef70ULL || rel >= 0xa4f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4f260 size=16 callers=0 calls=0
*/
void sub_a4f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4f260ULL || rel >= 0xa4f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4f270 size=816 callers=0 calls=2
   calls: sub_142a660, sub_98f350
*/
void sub_a4f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4f270ULL || rel >= 0xa4f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4f5a0 size=352 callers=0 calls=4
   calls: sub_140bcf0, sub_5cfaf0, sub_9b0a40, sub_d0c0
*/
void sub_a4f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4f5a0ULL || rel >= 0xa4f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4f700 size=352 callers=0 calls=4
   calls: sub_140bcf0, sub_5cfaf0, sub_9b0a80, sub_d0c0
*/
void sub_a4f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4f700ULL || rel >= 0xa4f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4f860 size=464 callers=0 calls=4
   calls: sub_140bcf0, sub_5cfaf0, sub_9b0a90, sub_d0c0
*/
void sub_a4f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4f860ULL || rel >= 0xa4fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4fa30 size=400 callers=0 calls=6
   calls: sub_140b690, sub_140bc80, sub_140bcf0, sub_5cfaf0, sub_9b0aa0, sub_d0c0
*/
void sub_a4fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4fa30ULL || rel >= 0xa4fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4fbc0 size=832 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_a654d0
*/
void sub_a4fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4fbc0ULL || rel >= 0xa4ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a4ff00 size=416 callers=0 calls=4
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_961750
*/
void sub_a4ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa4ff00ULL || rel >= 0xa500a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a500a0 size=704 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9606c0, sub_961180
*/
void sub_a500a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa500a0ULL || rel >= 0xa50360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a50360 size=992 callers=0 calls=10
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_142a660, sub_612f70, sub_961f10, sub_971650, sub_976120, sub_a65660
*/
void sub_a50360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa50360ULL || rel >= 0xa50740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a50740 size=1168 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_972670, sub_9747e0, sub_974b60, sub_974bd0
*/
void sub_a50740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa50740ULL || rel >= 0xa50bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a50bd0 size=608 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_972bc0, sub_974fd0
*/
void sub_a50bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa50bd0ULL || rel >= 0xa50e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a50e30 size=544 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_961f10, sub_974da0, sub_974f60
*/
void sub_a50e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa50e30ULL || rel >= 0xa51050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51050 size=1840 callers=0 calls=13
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_5cfaf0, sub_794330, sub_7ef2b0, sub_952670, sub_9526f0, sub_9693c0, sub_981b70, sub_9b0a40, sub_9b0aa0
   ... +1 more
   ref: Play_PV_EV_%03d_%02d_%s
   ref: Play_PV_Btl_%03d_%02d_%s
   ref: PM_Health
*/
void PM_Health_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51050ULL || rel >= 0xa51780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51780 size=1216 callers=0 calls=12
   calls: Play_PV_Btl_052_sp_roar, sub_140b690, sub_140bcf0, sub_140bd40, sub_5cfaf0, sub_7ef2b0, sub_952670, sub_981b70, sub_9b0a40, sub_9b0a90, sub_9b0aa0, sub_d0c0
   ref: PM_Health
*/
void PM_Health_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51780ULL || rel >= 0xa51c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51c40 size=496 callers=0 calls=5
   calls: sub_140b690, sub_140bcf0, sub_952670, sub_9526f0, sub_984ba0
*/
void sub_a51c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51c40ULL || rel >= 0xa51e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51e30 size=16 callers=0 calls=0
*/
void sub_a51e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51e30ULL || rel >= 0xa51e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51e40 size=16 callers=0 calls=0
*/
void sub_a51e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51e40ULL || rel >= 0xa51e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51e50 size=16 callers=0 calls=0
*/
void sub_a51e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51e50ULL || rel >= 0xa51e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51e60 size=16 callers=0 calls=0
*/
void sub_a51e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51e60ULL || rel >= 0xa51e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51e70 size=16 callers=0 calls=0
*/
void sub_a51e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51e70ULL || rel >= 0xa51e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51e80 size=16 callers=0 calls=0
*/
void sub_a51e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51e80ULL || rel >= 0xa51e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51e90 size=16 callers=0 calls=0
*/
void sub_a51e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51e90ULL || rel >= 0xa51ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51ea0 size=16 callers=0 calls=0
*/
void sub_a51ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51ea0ULL || rel >= 0xa51eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51eb0 size=16 callers=0 calls=0
*/
void sub_a51eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51eb0ULL || rel >= 0xa51ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51ec0 size=16 callers=0 calls=0
*/
void sub_a51ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51ec0ULL || rel >= 0xa51ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51ed0 size=16 callers=0 calls=0
*/
void sub_a51ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51ed0ULL || rel >= 0xa51ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51ee0 size=16 callers=0 calls=0
*/
void sub_a51ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51ee0ULL || rel >= 0xa51ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51ef0 size=16 callers=0 calls=0
*/
void sub_a51ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51ef0ULL || rel >= 0xa51f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51f00 size=240 callers=0 calls=7
   calls: sub_140b690, sub_140bd40, sub_8ea250, sub_8ea3a0, sub_952670, sub_9526f0, sub_95bb50
*/
void sub_a51f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51f00ULL || rel >= 0xa51ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a51ff0 size=96 callers=0 calls=4
   calls: sub_140bd40, sub_8ea3b0, sub_8ea490, sub_95bb50
*/
void sub_a51ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa51ff0ULL || rel >= 0xa52050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a52050 size=992 callers=0 calls=9
   calls: sub_140b690, sub_140bd40, sub_5cfaf0, sub_794330, sub_8ea5d0, sub_9526f0, sub_95bb50, sub_9693c0, sub_d0c0
   ref: Play_Ba_sys_hit_l
   ref: Play_Ba_sys_hit_m
   ref: Play_Ba_sys_hit_h
*/
void Play_Ba_sys_hit_m(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa52050ULL || rel >= 0xa52430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a52430 size=48 callers=0 calls=1
   calls: sub_140b690
*/
void sub_a52430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa52430ULL || rel >= 0xa52460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a52460 size=1088 callers=0 calls=6
   calls: sub_140b690, sub_142a660, sub_952670, sub_9526f0, sub_993550, sub_a654d0
*/
void sub_a52460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa52460ULL || rel >= 0xa528a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a528a0 size=176 callers=0 calls=6
   calls: sub_140b690, sub_140bd40, sub_7ccca0, sub_8a9060, sub_98a880, sub_98a8b0
*/
void sub_a528a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa528a0ULL || rel >= 0xa52950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a52950 size=80 callers=0 calls=1
   calls: sub_140b690
*/
void sub_a52950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa52950ULL || rel >= 0xa529a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a529a0 size=16 callers=0 calls=0
*/
void sub_a529a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa529a0ULL || rel >= 0xa529b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a529b0 size=1200 callers=0 calls=9
   calls: sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_618e00, sub_9890a0, sub_989160, sub_9891e0, sub_a69460
   ref: M_Mask
*/
void M_Mask(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa529b0ULL || rel >= 0xa52e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a52e60 size=1536 callers=0 calls=9
   calls: sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_96d9a0, sub_9890a0, sub_989160, sub_9891e0, sub_a69620
   ref: M_Mask
*/
void M_Mask_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa52e60ULL || rel >= 0xa53460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53460 size=96 callers=0 calls=2
   calls: sub_140bd40, sub_965790
*/
void sub_a53460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53460ULL || rel >= 0xa534c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a534c0 size=384 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_953870, sub_9538d0, sub_960610, sub_9606c0
*/
void sub_a534c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa534c0ULL || rel >= 0xa53640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53640 size=112 callers=0 calls=4
   calls: sub_140bca0, sub_140bd40, sub_953950, sub_953970
*/
void sub_a53640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53640ULL || rel >= 0xa536b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a536b0 size=176 callers=0 calls=2
   calls: sub_140bcf0, sub_9650e0
*/
void sub_a536b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa536b0ULL || rel >= 0xa53760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53760 size=208 callers=0 calls=3
   calls: sub_140b6b0, sub_140bcf0, sub_965ae0
*/
void sub_a53760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53760ULL || rel >= 0xa53830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53830 size=96 callers=0 calls=2
   calls: sub_140b690, sub_c444b0
*/
void sub_a53830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53830ULL || rel >= 0xa53890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53890 size=256 callers=0 calls=5
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_c44410
*/
void sub_a53890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53890ULL || rel >= 0xa53990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53990 size=16 callers=0 calls=0
*/
void sub_a53990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53990ULL || rel >= 0xa539a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a539a0 size=400 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9539b0, sub_953a70, sub_960610, sub_9606c0
*/
void sub_a539a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa539a0ULL || rel >= 0xa53b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53b30 size=16 callers=0 calls=0
*/
void sub_a53b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53b30ULL || rel >= 0xa53b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53b40 size=16 callers=0 calls=0
*/
void sub_a53b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53b40ULL || rel >= 0xa53b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53b50 size=640 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_952670, sub_953c30, sub_953cf0
*/
void sub_a53b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53b50ULL || rel >= 0xa53dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a53dd0 size=1072 callers=0 calls=16
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_953660, sub_9536e0, sub_953870, sub_9538d0, sub_9539b0, sub_953a70, sub_953c30, sub_953cf0
   ... +4 more
*/
void sub_a53dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa53dd0ULL || rel >= 0xa54200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a54200 size=640 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_954590, sub_a69760, sub_ed3290, sub_ed32d0
*/
void sub_a54200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa54200ULL || rel >= 0xa54480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a54480 size=560 callers=0 calls=6
   calls: sub_140bd40, sub_142a660, sub_954680, sub_a69460, sub_ed3290, sub_ed32d0
*/
void sub_a54480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa54480ULL || rel >= 0xa546b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a546b0 size=560 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_a699a0, sub_ed3290, sub_ed32d0
*/
void sub_a546b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa546b0ULL || rel >= 0xa548e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a548e0 size=560 callers=0 calls=6
   calls: sub_140bd40, sub_142a660, sub_9546f0, sub_a69460, sub_ed3290, sub_ed32d0
*/
void sub_a548e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa548e0ULL || rel >= 0xa54b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a54b10 size=624 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_a69c10, sub_ed3290, sub_ed32d0
*/
void sub_a54b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa54b10ULL || rel >= 0xa54d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a54d80 size=560 callers=0 calls=6
   calls: sub_140bd40, sub_142a660, sub_954760, sub_a69460, sub_ed3290, sub_ed32d0
*/
void sub_a54d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa54d80ULL || rel >= 0xa54fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a54fb0 size=656 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_a69e90, sub_ed3290, sub_ed32d0
*/
void sub_a54fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa54fb0ULL || rel >= 0xa55240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a55240 size=2528 callers=0 calls=7
   calls: sub_140b690, sub_618d90, sub_68daa0, sub_941220, sub_962410, sub_962430, sub_9823b0
*/
void sub_a55240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa55240ULL || rel >= 0xa55c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a55c20 size=2192 callers=0 calls=6
   calls: sub_618d90, sub_68daa0, sub_962420, sub_962440, sub_962450, sub_9823b0
*/
void sub_a55c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa55c20ULL || rel >= 0xa564b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a564b0 size=656 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_a6a030, sub_ee3c80
*/
void sub_a564b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa564b0ULL || rel >= 0xa56740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a56740 size=448 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_a6a030, sub_ee3c40
*/
void sub_a56740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa56740ULL || rel >= 0xa56900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a56900 size=96 callers=0 calls=3
   calls: sub_140bd40, sub_98a1c0, sub_98a230
*/
void sub_a56900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa56900ULL || rel >= 0xa56960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a56960 size=112 callers=0 calls=2
   calls: sub_140b690, sub_98a1e0
*/
void sub_a56960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa56960ULL || rel >= 0xa569d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a569d0 size=448 callers=0 calls=4
   calls: pattern__02d_gfbmdl, sub_140b690, sub_140bd40, sub_957f90
*/
void sub_a569d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa569d0ULL || rel >= 0xa56b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a56b90 size=1104 callers=0 calls=14
   calls: mask_d, sub_140b690, sub_140bd40, sub_142a660, sub_682dd0, sub_958130, sub_a56fe0, sub_a57140, sub_a69460, sub_c1f850, sub_ed3290, sub_ed32d0
   ... +2 more
*/
void sub_a56b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa56b90ULL || rel >= 0xa56fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a56fe0 size=352 callers=1 calls=5
   calls: sub_5cfaf0, sub_5fc600, sub_5fda10, sub_682dd0, sub_d0c0
*/
void sub_a56fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa56fe0ULL || rel >= 0xa57140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a57140 size=352 callers=1 calls=5
   calls: sub_5cfaf0, sub_5fc600, sub_5fda10, sub_682dd0, sub_d0c0
*/
void sub_a57140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa57140ULL || rel >= 0xa572a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a572a0 size=560 callers=0 calls=4
   calls: sub_140bd40, sub_142a660, sub_9547c0, sub_a69460
*/
void sub_a572a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa572a0ULL || rel >= 0xa574d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a574d0 size=880 callers=0 calls=9
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_954590, sub_a6a3c0, sub_ed3290, sub_ed32d0
*/
void sub_a574d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa574d0ULL || rel >= 0xa57840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a57840 size=560 callers=0 calls=4
   calls: sub_140bd40, sub_142a660, sub_954870, sub_a69460
*/
void sub_a57840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa57840ULL || rel >= 0xa57a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a57a70 size=480 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_a6a640, sub_ed3290, sub_ed32d0
*/
void sub_a57a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa57a70ULL || rel >= 0xa57c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a57c50 size=560 callers=0 calls=6
   calls: sub_140bd40, sub_142a660, sub_9548e0, sub_a69460, sub_ed3290, sub_ed32d0
*/
void sub_a57c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa57c50ULL || rel >= 0xa57e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a57e80 size=736 callers=0 calls=9
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_a6a880, sub_a6a9c0, sub_ed3290, sub_ed32d0
*/
void sub_a57e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa57e80ULL || rel >= 0xa58160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a58160 size=560 callers=0 calls=6
   calls: sub_140bd40, sub_142a660, sub_954b10, sub_954b40, sub_a69460, sub_ed34f0
*/
void sub_a58160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa58160ULL || rel >= 0xa58390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a58390 size=752 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_954b10, sub_991e60
*/
void sub_a58390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa58390ULL || rel >= 0xa58680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a58680 size=1264 callers=0 calls=12
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_142a660, sub_5cfad0, sub_952670, sub_9526f0, sub_982c50, sub_983150, sub_a6acf0, sub_ede1e0
*/
void sub_a58680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa58680ULL || rel >= 0xa58b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a58b70 size=576 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_952670, sub_9526f0, sub_983840
*/
void sub_a58b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa58b70ULL || rel >= 0xa58db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a58db0 size=1216 callers=0 calls=12
   calls: sub_140b690, sub_140bc80, sub_140bcf0, sub_140bd40, sub_142a660, sub_5cfad0, sub_952670, sub_9526f0, sub_982c50, sub_9833a0, sub_a6af30, sub_ede1d0
*/
void sub_a58db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa58db0ULL || rel >= 0xa59270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a59270 size=576 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_952670, sub_9526f0, sub_983840
*/
void sub_a59270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa59270ULL || rel >= 0xa594b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a594b0 size=1312 callers=0 calls=10
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_142a660, sub_5cfad0, sub_952670, sub_9526f0, sub_982c50, sub_9835f0, sub_a69460
*/
void sub_a594b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa594b0ULL || rel >= 0xa599d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a599d0 size=576 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_952670, sub_9526f0, sub_983840
*/
void sub_a599d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa599d0ULL || rel >= 0xa59c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a59c10 size=768 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_952670, sub_9526f0, sub_983aa0, sub_983d00
*/
void sub_a59c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa59c10ULL || rel >= 0xa59f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a59f10 size=768 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_952670, sub_9526f0, sub_983aa0, sub_983d00
*/
void sub_a59f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa59f10ULL || rel >= 0xa5a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5a210 size=768 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_952670, sub_9526f0, sub_983aa0, sub_983d00
*/
void sub_a5a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5a210ULL || rel >= 0xa5a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5a510 size=560 callers=0 calls=6
   calls: sub_140bd40, sub_142a660, sub_954960, sub_a69460, sub_ed3290, sub_ed32d0
*/
void sub_a5a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5a510ULL || rel >= 0xa5a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5a740 size=880 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_a6b270, sub_ed3290, sub_ed32d0
*/
void sub_a5a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5a740ULL || rel >= 0xa5aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5aab0 size=560 callers=0 calls=6
   calls: sub_140bd40, sub_142a660, sub_954a00, sub_a69460, sub_ed3290, sub_ed32d0
*/
void sub_a5aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5aab0ULL || rel >= 0xa5ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ace0 size=752 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_a6b520, sub_ed3290, sub_ed32d0
*/
void sub_a5ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ace0ULL || rel >= 0xa5afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5afd0 size=560 callers=0 calls=6
   calls: sub_140bd40, sub_142a660, sub_954a90, sub_a69460, sub_ed3290, sub_ed32d0
*/
void sub_a5afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5afd0ULL || rel >= 0xa5b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5b200 size=512 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_a6b7b0, sub_ed3290, sub_ed32d0
*/
void sub_a5b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5b200ULL || rel >= 0xa5b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5b400 size=1072 callers=0 calls=6
   calls: sub_140b690, sub_142a660, sub_619300, sub_965af0, sub_a69460, sub_ed2ed0
*/
void sub_a5b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5b400ULL || rel >= 0xa5b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5b830 size=720 callers=0 calls=5
   calls: sub_140bca0, sub_140bd40, sub_142a660, sub_a69460, sub_ed3050
*/
void sub_a5b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5b830ULL || rel >= 0xa5bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb00 size=16 callers=0 calls=0
*/
void sub_a5bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb00ULL || rel >= 0xa5bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb10 size=16 callers=0 calls=0
*/
void sub_a5bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb10ULL || rel >= 0xa5bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb20 size=16 callers=0 calls=0
*/
void sub_a5bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb20ULL || rel >= 0xa5bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb30 size=16 callers=0 calls=0
*/
void sub_a5bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb30ULL || rel >= 0xa5bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb40 size=16 callers=0 calls=0
*/
void sub_a5bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb40ULL || rel >= 0xa5bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb50 size=16 callers=0 calls=0
*/
void sub_a5bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb50ULL || rel >= 0xa5bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb60 size=16 callers=0 calls=0
*/
void sub_a5bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb60ULL || rel >= 0xa5bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb70 size=16 callers=0 calls=0
*/
void sub_a5bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb70ULL || rel >= 0xa5bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb80 size=16 callers=0 calls=0
*/
void sub_a5bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb80ULL || rel >= 0xa5bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bb90 size=16 callers=0 calls=0
*/
void sub_a5bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bb90ULL || rel >= 0xa5bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bba0 size=16 callers=0 calls=0
*/
void sub_a5bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bba0ULL || rel >= 0xa5bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bbb0 size=16 callers=0 calls=0
*/
void sub_a5bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bbb0ULL || rel >= 0xa5bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bbc0 size=16 callers=0 calls=0
*/
void sub_a5bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bbc0ULL || rel >= 0xa5bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bbd0 size=16 callers=0 calls=0
*/
void sub_a5bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bbd0ULL || rel >= 0xa5bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bbe0 size=16 callers=0 calls=0
*/
void sub_a5bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bbe0ULL || rel >= 0xa5bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bbf0 size=16 callers=0 calls=0
*/
void sub_a5bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bbf0ULL || rel >= 0xa5bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bc00 size=16 callers=0 calls=0
*/
void sub_a5bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bc00ULL || rel >= 0xa5bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bc10 size=16 callers=0 calls=0
*/
void sub_a5bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bc10ULL || rel >= 0xa5bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bc20 size=16 callers=0 calls=0
*/
void sub_a5bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bc20ULL || rel >= 0xa5bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bc30 size=16 callers=0 calls=0
*/
void sub_a5bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bc30ULL || rel >= 0xa5bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bc40 size=80 callers=0 calls=2
   calls: sub_140b6b0, sub_9626a0
*/
void sub_a5bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bc40ULL || rel >= 0xa5bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bc90 size=16 callers=0 calls=0
*/
void sub_a5bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bc90ULL || rel >= 0xa5bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bca0 size=16 callers=0 calls=0
*/
void sub_a5bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bca0ULL || rel >= 0xa5bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bcb0 size=624 callers=0 calls=7
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_9526f0, sub_961f10, sub_a654d0
*/
void sub_a5bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bcb0ULL || rel >= 0xa5bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5bf20 size=624 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9526f0, sub_9606c0, sub_961180, sub_961f10
*/
void sub_a5bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5bf20ULL || rel >= 0xa5c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5c190 size=1088 callers=0 calls=11
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_142a660, sub_612f70, sub_9526f0, sub_961f10, sub_971650, sub_976120, sub_a654d0
*/
void sub_a5c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5c190ULL || rel >= 0xa5c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5c5d0 size=176 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_9526f0, sub_952f90, sub_960620
*/
void sub_a5c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5c5d0ULL || rel >= 0xa5c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5c680 size=160 callers=0 calls=2
   calls: sub_140bd40, sub_952f90
*/
void sub_a5c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5c680ULL || rel >= 0xa5c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5c720 size=624 callers=0 calls=7
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_9526f0, sub_961f10, sub_a654d0
*/
void sub_a5c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5c720ULL || rel >= 0xa5c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5c990 size=224 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_9526f0, sub_95bc30, sub_961f10
*/
void sub_a5c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5c990ULL || rel >= 0xa5ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ca70 size=512 callers=0 calls=2
   calls: sub_140bd40, sub_95bc30
*/
void sub_a5ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ca70ULL || rel >= 0xa5cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5cc70 size=880 callers=0 calls=3
   calls: sub_140bd40, sub_95bc30, sub_960620
*/
void sub_a5cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5cc70ULL || rel >= 0xa5cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5cfe0 size=192 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_9526f0, sub_961f10, sub_97f120
*/
void sub_a5cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5cfe0ULL || rel >= 0xa5d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d0a0 size=352 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_5cfad0, sub_9526f0, sub_961f10, sub_97f190
*/
void sub_a5d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d0a0ULL || rel >= 0xa5d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d200 size=368 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_5cfad0, sub_9526f0, sub_961f10, sub_97f590
*/
void sub_a5d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d200ULL || rel >= 0xa5d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d370 size=368 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_5cfad0, sub_9526f0, sub_961f10, sub_97f390
*/
void sub_a5d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d370ULL || rel >= 0xa5d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d4e0 size=16 callers=0 calls=0
*/
void sub_a5d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d4e0ULL || rel >= 0xa5d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d4f0 size=16 callers=0 calls=0
*/
void sub_a5d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d4f0ULL || rel >= 0xa5d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d500 size=16 callers=0 calls=0
*/
void sub_a5d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d500ULL || rel >= 0xa5d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d510 size=16 callers=0 calls=0
*/
void sub_a5d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d510ULL || rel >= 0xa5d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d520 size=16 callers=0 calls=0
*/
void sub_a5d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d520ULL || rel >= 0xa5d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d530 size=384 callers=0 calls=8
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_961f10, sub_97ffc0, sub_980f80, sub_9fccc0, sub_c1f550
*/
void sub_a5d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d530ULL || rel >= 0xa5d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d6b0 size=112 callers=0 calls=3
   calls: ba_variation, sub_140b690, sub_961f10
*/
void sub_a5d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d6b0ULL || rel >= 0xa5d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5d720 size=768 callers=0 calls=10
   calls: sub_11061e0, sub_11063e0, sub_11065b0, sub_140b690, sub_140bd40, sub_142a660, sub_9526f0, sub_961f10, sub_97fdd0, sub_a662c0
   ref: isLoseEyeBlink
   ref: isEyeBlink
*/
void isLoseEyeBlink(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5d720ULL || rel >= 0xa5da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5da20 size=16 callers=0 calls=0
*/
void sub_a5da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5da20ULL || rel >= 0xa5da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5da30 size=16 callers=0 calls=0
*/
void sub_a5da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5da30ULL || rel >= 0xa5da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5da40 size=256 callers=1 calls=6
   calls: sub_7c56e0, sub_7ca1c0, sub_7caa10, sub_7caa70, sub_7eef50, sub_8a9060
*/
void sub_a5da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5da40ULL || rel >= 0xa5db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5db40 size=3568 callers=0 calls=20
   calls: sub_140b690, sub_140b6b0, sub_140bd40, sub_142a660, sub_1453970, sub_5e7b30, sub_67be60, sub_7cb490, sub_7cb850, sub_7cc1b0, sub_7ee6b0, sub_8a9060
   ... +8 more
*/
void sub_a5db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5db40ULL || rel >= 0xa5e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5e930 size=240 callers=0 calls=9
   calls: sub_140b690, sub_140b6b0, sub_5e7b30, sub_67be60, sub_7ee6b0, sub_8cbd80, sub_8cd3d0, sub_952670, sub_98a570
*/
void sub_a5e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5e930ULL || rel >= 0xa5ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ea20 size=464 callers=0 calls=13
   calls: sub_140b690, sub_140b6b0, sub_140bd40, sub_5e7b30, sub_67be60, sub_7ee6b0, sub_8cd230, sub_8cd330, sub_8cd3d0, sub_952670, sub_98a5b0, sub_98a5f0
   ... +1 more
*/
void sub_a5ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ea20ULL || rel >= 0xa5ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ebf0 size=464 callers=0 calls=7
   calls: sub_140b6b0, sub_5e7b30, sub_67be60, sub_8cd230, sub_8cd3d0, sub_98a710, sub_98a780
*/
void sub_a5ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ebf0ULL || rel >= 0xa5edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5edc0 size=16 callers=0 calls=0
*/
void sub_a5edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5edc0ULL || rel >= 0xa5edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5edd0 size=96 callers=0 calls=2
   calls: sub_7ee6b0, sub_952670
*/
void sub_a5edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5edd0ULL || rel >= 0xa5ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ee30 size=256 callers=0 calls=3
   calls: sub_140b690, sub_8a7f60, sub_8a7f70
*/
void sub_a5ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ee30ULL || rel >= 0xa5ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ef30 size=64 callers=0 calls=2
   calls: sub_140b690, sub_95bc90
*/
void sub_a5ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ef30ULL || rel >= 0xa5ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ef70 size=16 callers=0 calls=0
*/
void sub_a5ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ef70ULL || rel >= 0xa5ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ef80 size=64 callers=0 calls=2
   calls: sub_140b690, sub_962c50
*/
void sub_a5ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ef80ULL || rel >= 0xa5efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5efc0 size=400 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_142a660, sub_952670, sub_993ba0
*/
void sub_a5efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5efc0ULL || rel >= 0xa5f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5f150 size=256 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_952670, sub_9526f0, sub_97ef60
*/
void sub_a5f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f150ULL || rel >= 0xa5f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5f250 size=256 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_952670, sub_9526f0, sub_97efb0
*/
void sub_a5f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f250ULL || rel >= 0xa5f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5f350 size=16 callers=0 calls=0
*/
void sub_a5f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f350ULL || rel >= 0xa5f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5f360 size=320 callers=0 calls=2
   calls: sub_140b690, sub_140beb0
*/
void sub_a5f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f360ULL || rel >= 0xa5f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5f4a0 size=320 callers=0 calls=2
   calls: sub_140b690, sub_140beb0
*/
void sub_a5f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f4a0ULL || rel >= 0xa5f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5f5e0 size=448 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_142a660, sub_952670, sub_993c90
*/
void sub_a5f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f5e0ULL || rel >= 0xa5f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5f7a0 size=544 callers=0 calls=4
   calls: sub_140b690, sub_142a660, sub_952670, sub_993d80
*/
void sub_a5f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f7a0ULL || rel >= 0xa5f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5f9c0 size=368 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_142a660, sub_946840, sub_a69460
*/
void sub_a5f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f9c0ULL || rel >= 0xa5fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fb30 size=16 callers=0 calls=0
*/
void sub_a5fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fb30ULL || rel >= 0xa5fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fb40 size=16 callers=0 calls=0
*/
void sub_a5fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fb40ULL || rel >= 0xa5fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fb50 size=16 callers=0 calls=0
*/
void sub_a5fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fb50ULL || rel >= 0xa5fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fb60 size=16 callers=0 calls=0
*/
void sub_a5fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fb60ULL || rel >= 0xa5fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fb70 size=16 callers=0 calls=0
*/
void sub_a5fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fb70ULL || rel >= 0xa5fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fb80 size=16 callers=0 calls=0
*/
void sub_a5fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fb80ULL || rel >= 0xa5fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fb90 size=16 callers=0 calls=0
*/
void sub_a5fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fb90ULL || rel >= 0xa5fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fba0 size=480 callers=0 calls=5
   calls: sub_140b690, sub_140b6b0, sub_142a660, sub_960620, sub_994030
*/
void sub_a5fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fba0ULL || rel >= 0xa5fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5fd80 size=464 callers=0 calls=4
   calls: sub_140b690, sub_142a660, sub_960620, sub_9941c0
*/
void sub_a5fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fd80ULL || rel >= 0xa5ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a5ff50 size=352 callers=0 calls=3
   calls: sub_140bd40, sub_142a660, sub_a69460
*/
void sub_a5ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5ff50ULL || rel >= 0xa600b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a600b0 size=80 callers=0 calls=2
   calls: sub_140b690, sub_98aa50
*/
void sub_a600b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa600b0ULL || rel >= 0xa60100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a60100 size=176 callers=0 calls=2
   calls: sub_140bd40, sub_952670
*/
void sub_a60100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa60100ULL || rel >= 0xa601b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a601b0 size=128 callers=0 calls=2
   calls: sub_140bd40, sub_98aac0
*/
void sub_a601b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa601b0ULL || rel >= 0xa60230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a60230 size=400 callers=0 calls=3
   calls: sub_140bd40, sub_142a660, sub_a69460
*/
void sub_a60230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa60230ULL || rel >= 0xa603c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a603c0 size=1040 callers=0 calls=7
   calls: sub_140b690, sub_140bd40, sub_142a660, sub_a69460, sub_ed29e0, sub_ed32f0, sub_ed3e60
*/
void sub_a603c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa603c0ULL || rel >= 0xa607d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a607d0 size=624 callers=0 calls=7
   calls: sub_140b690, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_97d380, sub_a69460
*/
void sub_a607d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa607d0ULL || rel >= 0xa60a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a60a40 size=624 callers=0 calls=8
   calls: sub_140b690, sub_140bd40, sub_142a660, sub_9526f0, sub_95bc30, sub_961f10, sub_97d380, sub_a69460
*/
void sub_a60a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa60a40ULL || rel >= 0xa60cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a60cb0 size=448 callers=0 calls=7
   calls: sub_140b690, sub_140bd40, sub_142a660, sub_962ec0, sub_963110, sub_965790, sub_a69460
*/
void sub_a60cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa60cb0ULL || rel >= 0xa60e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a60e70 size=368 callers=0 calls=5
   calls: sub_140b690, sub_142a660, sub_9543d0, sub_954450, sub_a69460
*/
void sub_a60e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa60e70ULL || rel >= 0xa60fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a60fe0 size=368 callers=0 calls=4
   calls: sub_140bd40, sub_142a660, sub_954520, sub_a69460
*/
void sub_a60fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa60fe0ULL || rel >= 0xa61150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a61150 size=16 callers=0 calls=0
*/
void sub_a61150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa61150ULL || rel >= 0xa61160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a61160 size=16 callers=0 calls=0
*/
void sub_a61160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa61160ULL || rel >= 0xa61170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a61170 size=16 callers=0 calls=0
*/
void sub_a61170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa61170ULL || rel >= 0xa61180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a61180 size=16 callers=0 calls=0
*/
void sub_a61180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa61180ULL || rel >= 0xa61190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a61190 size=16 callers=0 calls=0
*/
void sub_a61190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa61190ULL || rel >= 0xa611a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a611a0 size=720 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_142a660, sub_98b660, sub_a662c0
*/
void sub_a611a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa611a0ULL || rel >= 0xa61470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a61470 size=16 callers=0 calls=0
*/
void sub_a61470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa61470ULL || rel >= 0xa61480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a61480 size=1056 callers=0 calls=10
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_960610, sub_9606c0, sub_961020, sub_a654d0
*/
void sub_a61480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa61480ULL || rel >= 0xa618a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a618a0 size=1504 callers=0 calls=9
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_961020, sub_972af0, sub_a654d0
*/
void sub_a618a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa618a0ULL || rel >= 0xa61e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a61e80 size=736 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_142a660, sub_952670, sub_9526f0, sub_961020, sub_961fd0, sub_a654d0
*/
void sub_a61e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa61e80ULL || rel >= 0xa62160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a62160 size=224 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_952670, sub_9526f0, sub_961020
*/
void sub_a62160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa62160ULL || rel >= 0xa62240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a62240 size=384 callers=0 calls=8
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_5cfad0, sub_952670, sub_9526f0, sub_961020, sub_98d1c0
*/
void sub_a62240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa62240ULL || rel >= 0xa623c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a623c0 size=752 callers=0 calls=9
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_952670, sub_9526f0, sub_961020, sub_972670, sub_974bd0
*/
void sub_a623c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa623c0ULL || rel >= 0xa626b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a626b0 size=1248 callers=0 calls=11
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9606c0, sub_960bc0, sub_9901f0, sub_9a71a0, sub_9a7240
*/
void sub_a626b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa626b0ULL || rel >= 0xa62b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a62b90 size=704 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9606c0, sub_961180
*/
void sub_a62b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa62b90ULL || rel >= 0xa62e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a62e50 size=576 callers=0 calls=7
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_961020, sub_975390, sub_975730
*/
void sub_a62e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa62e50ULL || rel >= 0xa63090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63090 size=704 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9606c0, sub_961470
*/
void sub_a63090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63090ULL || rel >= 0xa63350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63350 size=576 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_952670, sub_961020, sub_975590, sub_975730
*/
void sub_a63350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63350ULL || rel >= 0xa63590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63590 size=16 callers=0 calls=0
*/
void sub_a63590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63590ULL || rel >= 0xa635a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a635a0 size=16 callers=0 calls=0
*/
void sub_a635a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa635a0ULL || rel >= 0xa635b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a635b0 size=240 callers=0 calls=3
   calls: sub_140bca0, sub_140bd40, sub_ed3050
*/
void sub_a635b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa635b0ULL || rel >= 0xa636a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a636a0 size=192 callers=0 calls=4
   calls: sub_140b690, sub_140bd40, sub_952670, sub_981b60
*/
void sub_a636a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa636a0ULL || rel >= 0xa63760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63760 size=16 callers=0 calls=0
*/
void sub_a63760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63760ULL || rel >= 0xa63770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63770 size=16 callers=0 calls=0
*/
void sub_a63770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63770ULL || rel >= 0xa63780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63780 size=16 callers=0 calls=0
*/
void sub_a63780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63780ULL || rel >= 0xa63790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63790 size=16 callers=0 calls=0
*/
void sub_a63790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63790ULL || rel >= 0xa637a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a637a0 size=16 callers=0 calls=0
*/
void sub_a637a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa637a0ULL || rel >= 0xa637b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a637b0 size=16 callers=0 calls=0
*/
void sub_a637b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa637b0ULL || rel >= 0xa637c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a637c0 size=16 callers=0 calls=0
*/
void sub_a637c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa637c0ULL || rel >= 0xa637d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a637d0 size=16 callers=0 calls=0
*/
void sub_a637d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa637d0ULL || rel >= 0xa637e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a637e0 size=16 callers=0 calls=0
*/
void sub_a637e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa637e0ULL || rel >= 0xa637f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a637f0 size=16 callers=0 calls=0
*/
void sub_a637f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa637f0ULL || rel >= 0xa63800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63800 size=16 callers=0 calls=0
*/
void sub_a63800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63800ULL || rel >= 0xa63810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63810 size=16 callers=0 calls=0
*/
void sub_a63810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63810ULL || rel >= 0xa63820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63820 size=16 callers=0 calls=0
*/
void sub_a63820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63820ULL || rel >= 0xa63830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63830 size=16 callers=0 calls=0
*/
void sub_a63830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63830ULL || rel >= 0xa63840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63840 size=16 callers=0 calls=0
*/
void sub_a63840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63840ULL || rel >= 0xa63850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63850 size=16 callers=0 calls=0
*/
void sub_a63850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63850ULL || rel >= 0xa63860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63860 size=16 callers=0 calls=0
*/
void sub_a63860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63860ULL || rel >= 0xa63870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63870 size=16 callers=0 calls=0
*/
void sub_a63870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63870ULL || rel >= 0xa63880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63880 size=16 callers=0 calls=0
*/
void sub_a63880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63880ULL || rel >= 0xa63890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63890 size=16 callers=0 calls=0
*/
void sub_a63890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63890ULL || rel >= 0xa638a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a638a0 size=16 callers=0 calls=0
*/
void sub_a638a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa638a0ULL || rel >= 0xa638b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a638b0 size=16 callers=0 calls=0
*/
void sub_a638b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa638b0ULL || rel >= 0xa638c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a638c0 size=16 callers=0 calls=0
*/
void sub_a638c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa638c0ULL || rel >= 0xa638d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a638d0 size=16 callers=0 calls=0
*/
void sub_a638d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa638d0ULL || rel >= 0xa638e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a638e0 size=16 callers=0 calls=0
*/
void sub_a638e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa638e0ULL || rel >= 0xa638f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a638f0 size=16 callers=0 calls=0
*/
void sub_a638f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa638f0ULL || rel >= 0xa63900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63900 size=16 callers=0 calls=0
*/
void sub_a63900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63900ULL || rel >= 0xa63910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63910 size=16 callers=0 calls=0
*/
void sub_a63910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63910ULL || rel >= 0xa63920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63920 size=16 callers=0 calls=0
*/
void sub_a63920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63920ULL || rel >= 0xa63930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63930 size=16 callers=0 calls=0
*/
void sub_a63930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63930ULL || rel >= 0xa63940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63940 size=16 callers=0 calls=0
*/
void sub_a63940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63940ULL || rel >= 0xa63950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63950 size=16 callers=0 calls=0
*/
void sub_a63950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63950ULL || rel >= 0xa63960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63960 size=16 callers=0 calls=0
*/
void sub_a63960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63960ULL || rel >= 0xa63970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63970 size=16 callers=0 calls=0
*/
void sub_a63970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63970ULL || rel >= 0xa63980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63980 size=16 callers=0 calls=0
*/
void sub_a63980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63980ULL || rel >= 0xa63990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63990 size=16 callers=0 calls=0
*/
void sub_a63990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63990ULL || rel >= 0xa639a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a639a0 size=16 callers=0 calls=0
*/
void sub_a639a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa639a0ULL || rel >= 0xa639b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a639b0 size=16 callers=0 calls=0
*/
void sub_a639b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa639b0ULL || rel >= 0xa639c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a639c0 size=16 callers=0 calls=0
*/
void sub_a639c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa639c0ULL || rel >= 0xa639d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a639d0 size=16 callers=0 calls=0
*/
void sub_a639d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa639d0ULL || rel >= 0xa639e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a639e0 size=16 callers=0 calls=0
*/
void sub_a639e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa639e0ULL || rel >= 0xa639f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a639f0 size=16 callers=0 calls=0
*/
void sub_a639f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa639f0ULL || rel >= 0xa63a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a00 size=16 callers=0 calls=0
*/
void sub_a63a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a00ULL || rel >= 0xa63a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a10 size=16 callers=0 calls=0
*/
void sub_a63a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a10ULL || rel >= 0xa63a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a20 size=16 callers=0 calls=0
*/
void sub_a63a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a20ULL || rel >= 0xa63a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a30 size=16 callers=0 calls=0
*/
void sub_a63a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a30ULL || rel >= 0xa63a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a40 size=16 callers=0 calls=0
*/
void sub_a63a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a40ULL || rel >= 0xa63a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a50 size=16 callers=0 calls=0
*/
void sub_a63a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a50ULL || rel >= 0xa63a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a60 size=16 callers=0 calls=0
*/
void sub_a63a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a60ULL || rel >= 0xa63a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a70 size=16 callers=0 calls=0
*/
void sub_a63a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a70ULL || rel >= 0xa63a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a80 size=16 callers=0 calls=0
*/
void sub_a63a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a80ULL || rel >= 0xa63a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63a90 size=16 callers=0 calls=0
*/
void sub_a63a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63a90ULL || rel >= 0xa63aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63aa0 size=16 callers=0 calls=0
*/
void sub_a63aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63aa0ULL || rel >= 0xa63ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ab0 size=16 callers=0 calls=0
*/
void sub_a63ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ab0ULL || rel >= 0xa63ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ac0 size=16 callers=0 calls=0
*/
void sub_a63ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ac0ULL || rel >= 0xa63ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ad0 size=16 callers=0 calls=0
*/
void sub_a63ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ad0ULL || rel >= 0xa63ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ae0 size=16 callers=0 calls=0
*/
void sub_a63ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ae0ULL || rel >= 0xa63af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63af0 size=16 callers=0 calls=0
*/
void sub_a63af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63af0ULL || rel >= 0xa63b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b00 size=16 callers=0 calls=0
*/
void sub_a63b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b00ULL || rel >= 0xa63b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b10 size=16 callers=0 calls=0
*/
void sub_a63b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b10ULL || rel >= 0xa63b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b20 size=16 callers=0 calls=0
*/
void sub_a63b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b20ULL || rel >= 0xa63b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b30 size=16 callers=0 calls=0
*/
void sub_a63b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b30ULL || rel >= 0xa63b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b40 size=16 callers=0 calls=0
*/
void sub_a63b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b40ULL || rel >= 0xa63b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b50 size=16 callers=0 calls=0
*/
void sub_a63b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b50ULL || rel >= 0xa63b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b60 size=16 callers=0 calls=0
*/
void sub_a63b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b60ULL || rel >= 0xa63b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b70 size=16 callers=0 calls=0
*/
void sub_a63b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b70ULL || rel >= 0xa63b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b80 size=16 callers=0 calls=0
*/
void sub_a63b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b80ULL || rel >= 0xa63b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63b90 size=16 callers=0 calls=0
*/
void sub_a63b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63b90ULL || rel >= 0xa63ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ba0 size=16 callers=0 calls=0
*/
void sub_a63ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ba0ULL || rel >= 0xa63bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63bb0 size=16 callers=0 calls=0
*/
void sub_a63bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63bb0ULL || rel >= 0xa63bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63bc0 size=16 callers=0 calls=0
*/
void sub_a63bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63bc0ULL || rel >= 0xa63bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63bd0 size=16 callers=0 calls=0
*/
void sub_a63bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63bd0ULL || rel >= 0xa63be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63be0 size=16 callers=0 calls=0
*/
void sub_a63be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63be0ULL || rel >= 0xa63bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63bf0 size=16 callers=0 calls=0
*/
void sub_a63bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63bf0ULL || rel >= 0xa63c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c00 size=16 callers=0 calls=0
*/
void sub_a63c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c00ULL || rel >= 0xa63c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c10 size=16 callers=0 calls=0
*/
void sub_a63c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c10ULL || rel >= 0xa63c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c20 size=16 callers=0 calls=0
*/
void sub_a63c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c20ULL || rel >= 0xa63c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c30 size=16 callers=0 calls=0
*/
void sub_a63c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c30ULL || rel >= 0xa63c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c40 size=16 callers=0 calls=0
*/
void sub_a63c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c40ULL || rel >= 0xa63c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c50 size=16 callers=0 calls=0
*/
void sub_a63c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c50ULL || rel >= 0xa63c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c60 size=16 callers=0 calls=0
*/
void sub_a63c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c60ULL || rel >= 0xa63c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c70 size=16 callers=0 calls=0
*/
void sub_a63c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c70ULL || rel >= 0xa63c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c80 size=16 callers=0 calls=0
*/
void sub_a63c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c80ULL || rel >= 0xa63c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63c90 size=16 callers=0 calls=0
*/
void sub_a63c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63c90ULL || rel >= 0xa63ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ca0 size=16 callers=0 calls=0
*/
void sub_a63ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ca0ULL || rel >= 0xa63cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63cb0 size=16 callers=0 calls=0
*/
void sub_a63cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63cb0ULL || rel >= 0xa63cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63cc0 size=16 callers=0 calls=0
*/
void sub_a63cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63cc0ULL || rel >= 0xa63cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63cd0 size=16 callers=0 calls=0
*/
void sub_a63cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63cd0ULL || rel >= 0xa63ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ce0 size=16 callers=0 calls=0
*/
void sub_a63ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ce0ULL || rel >= 0xa63cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63cf0 size=16 callers=0 calls=0
*/
void sub_a63cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63cf0ULL || rel >= 0xa63d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d00 size=16 callers=0 calls=0
*/
void sub_a63d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d00ULL || rel >= 0xa63d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d10 size=16 callers=0 calls=0
*/
void sub_a63d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d10ULL || rel >= 0xa63d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d20 size=16 callers=0 calls=0
*/
void sub_a63d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d20ULL || rel >= 0xa63d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d30 size=16 callers=0 calls=0
*/
void sub_a63d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d30ULL || rel >= 0xa63d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d40 size=16 callers=0 calls=0
*/
void sub_a63d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d40ULL || rel >= 0xa63d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d50 size=16 callers=0 calls=0
*/
void sub_a63d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d50ULL || rel >= 0xa63d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d60 size=16 callers=0 calls=0
*/
void sub_a63d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d60ULL || rel >= 0xa63d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d70 size=16 callers=0 calls=0
*/
void sub_a63d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d70ULL || rel >= 0xa63d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d80 size=16 callers=0 calls=0
*/
void sub_a63d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d80ULL || rel >= 0xa63d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63d90 size=16 callers=0 calls=0
*/
void sub_a63d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63d90ULL || rel >= 0xa63da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63da0 size=16 callers=0 calls=0
*/
void sub_a63da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63da0ULL || rel >= 0xa63db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63db0 size=16 callers=0 calls=0
*/
void sub_a63db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63db0ULL || rel >= 0xa63dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63dc0 size=16 callers=0 calls=0
*/
void sub_a63dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63dc0ULL || rel >= 0xa63dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63dd0 size=16 callers=0 calls=0
*/
void sub_a63dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63dd0ULL || rel >= 0xa63de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63de0 size=16 callers=0 calls=0
*/
void sub_a63de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63de0ULL || rel >= 0xa63df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63df0 size=16 callers=0 calls=0
*/
void sub_a63df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63df0ULL || rel >= 0xa63e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e00 size=16 callers=0 calls=0
*/
void sub_a63e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e00ULL || rel >= 0xa63e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e10 size=16 callers=0 calls=0
*/
void sub_a63e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e10ULL || rel >= 0xa63e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e20 size=16 callers=0 calls=0
*/
void sub_a63e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e20ULL || rel >= 0xa63e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e30 size=16 callers=0 calls=0
*/
void sub_a63e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e30ULL || rel >= 0xa63e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e40 size=16 callers=0 calls=0
*/
void sub_a63e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e40ULL || rel >= 0xa63e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e50 size=16 callers=0 calls=0
*/
void sub_a63e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e50ULL || rel >= 0xa63e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e60 size=16 callers=0 calls=0
*/
void sub_a63e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e60ULL || rel >= 0xa63e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e70 size=16 callers=0 calls=0
*/
void sub_a63e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e70ULL || rel >= 0xa63e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e80 size=16 callers=0 calls=0
*/
void sub_a63e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e80ULL || rel >= 0xa63e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63e90 size=16 callers=0 calls=0
*/
void sub_a63e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63e90ULL || rel >= 0xa63ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ea0 size=16 callers=0 calls=0
*/
void sub_a63ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ea0ULL || rel >= 0xa63eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63eb0 size=16 callers=0 calls=0
*/
void sub_a63eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63eb0ULL || rel >= 0xa63ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ec0 size=16 callers=0 calls=0
*/
void sub_a63ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ec0ULL || rel >= 0xa63ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ed0 size=16 callers=0 calls=0
*/
void sub_a63ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ed0ULL || rel >= 0xa63ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ee0 size=16 callers=0 calls=0
*/
void sub_a63ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ee0ULL || rel >= 0xa63ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ef0 size=16 callers=0 calls=0
*/
void sub_a63ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ef0ULL || rel >= 0xa63f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f00 size=16 callers=0 calls=0
*/
void sub_a63f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f00ULL || rel >= 0xa63f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f10 size=16 callers=0 calls=0
*/
void sub_a63f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f10ULL || rel >= 0xa63f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f20 size=16 callers=0 calls=0
*/
void sub_a63f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f20ULL || rel >= 0xa63f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f30 size=16 callers=0 calls=0
*/
void sub_a63f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f30ULL || rel >= 0xa63f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f40 size=16 callers=0 calls=0
*/
void sub_a63f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f40ULL || rel >= 0xa63f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f50 size=16 callers=0 calls=0
*/
void sub_a63f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f50ULL || rel >= 0xa63f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f60 size=16 callers=0 calls=0
*/
void sub_a63f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f60ULL || rel >= 0xa63f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f70 size=16 callers=0 calls=0
*/
void sub_a63f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f70ULL || rel >= 0xa63f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f80 size=16 callers=0 calls=0
*/
void sub_a63f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f80ULL || rel >= 0xa63f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63f90 size=16 callers=0 calls=0
*/
void sub_a63f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63f90ULL || rel >= 0xa63fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63fa0 size=16 callers=0 calls=0
*/
void sub_a63fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63fa0ULL || rel >= 0xa63fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63fb0 size=16 callers=0 calls=0
*/
void sub_a63fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63fb0ULL || rel >= 0xa63fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63fc0 size=16 callers=0 calls=0
*/
void sub_a63fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63fc0ULL || rel >= 0xa63fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63fd0 size=16 callers=0 calls=0
*/
void sub_a63fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63fd0ULL || rel >= 0xa63fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63fe0 size=16 callers=0 calls=0
*/
void sub_a63fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63fe0ULL || rel >= 0xa63ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a63ff0 size=16 callers=0 calls=0
*/
void sub_a63ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa63ff0ULL || rel >= 0xa64000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64000 size=16 callers=0 calls=0
*/
void sub_a64000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64000ULL || rel >= 0xa64010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64010 size=16 callers=0 calls=0
*/
void sub_a64010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64010ULL || rel >= 0xa64020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64020 size=16 callers=0 calls=0
*/
void sub_a64020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64020ULL || rel >= 0xa64030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64030 size=16 callers=0 calls=0
*/
void sub_a64030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64030ULL || rel >= 0xa64040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64040 size=16 callers=0 calls=0
*/
void sub_a64040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64040ULL || rel >= 0xa64050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64050 size=16 callers=0 calls=0
*/
void sub_a64050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64050ULL || rel >= 0xa64060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64060 size=16 callers=0 calls=0
*/
void sub_a64060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64060ULL || rel >= 0xa64070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64070 size=16 callers=0 calls=0
*/
void sub_a64070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64070ULL || rel >= 0xa64080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64080 size=16 callers=0 calls=0
*/
void sub_a64080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64080ULL || rel >= 0xa64090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64090 size=16 callers=0 calls=0
*/
void sub_a64090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64090ULL || rel >= 0xa640a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a640a0 size=16 callers=0 calls=0
*/
void sub_a640a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa640a0ULL || rel >= 0xa640b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a640b0 size=16 callers=0 calls=0
*/
void sub_a640b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa640b0ULL || rel >= 0xa640c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a640c0 size=16 callers=0 calls=0
*/
void sub_a640c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa640c0ULL || rel >= 0xa640d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a640d0 size=16 callers=0 calls=0
*/
void sub_a640d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa640d0ULL || rel >= 0xa640e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a640e0 size=16 callers=0 calls=0
*/
void sub_a640e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa640e0ULL || rel >= 0xa640f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a640f0 size=16 callers=0 calls=0
*/
void sub_a640f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa640f0ULL || rel >= 0xa64100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64100 size=16 callers=0 calls=0
*/
void sub_a64100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64100ULL || rel >= 0xa64110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64110 size=16 callers=0 calls=0
*/
void sub_a64110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64110ULL || rel >= 0xa64120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64120 size=16 callers=0 calls=0
*/
void sub_a64120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64120ULL || rel >= 0xa64130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64130 size=16 callers=0 calls=0
*/
void sub_a64130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64130ULL || rel >= 0xa64140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64140 size=16 callers=0 calls=0
*/
void sub_a64140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64140ULL || rel >= 0xa64150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64150 size=16 callers=0 calls=0
*/
void sub_a64150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64150ULL || rel >= 0xa64160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64160 size=16 callers=0 calls=0
*/
void sub_a64160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64160ULL || rel >= 0xa64170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64170 size=16 callers=0 calls=0
*/
void sub_a64170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64170ULL || rel >= 0xa64180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64180 size=16 callers=0 calls=0
*/
void sub_a64180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64180ULL || rel >= 0xa64190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64190 size=16 callers=0 calls=0
*/
void sub_a64190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64190ULL || rel >= 0xa641a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a641a0 size=16 callers=0 calls=0
*/
void sub_a641a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa641a0ULL || rel >= 0xa641b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a641b0 size=16 callers=0 calls=0
*/
void sub_a641b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa641b0ULL || rel >= 0xa641c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a641c0 size=16 callers=0 calls=0
*/
void sub_a641c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa641c0ULL || rel >= 0xa641d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a641d0 size=16 callers=0 calls=0
*/
void sub_a641d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa641d0ULL || rel >= 0xa641e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a641e0 size=16 callers=0 calls=0
*/
void sub_a641e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa641e0ULL || rel >= 0xa641f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a641f0 size=16 callers=0 calls=0
*/
void sub_a641f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa641f0ULL || rel >= 0xa64200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64200 size=16 callers=0 calls=0
*/
void sub_a64200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64200ULL || rel >= 0xa64210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64210 size=16 callers=0 calls=0
*/
void sub_a64210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64210ULL || rel >= 0xa64220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64220 size=16 callers=0 calls=0
*/
void sub_a64220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64220ULL || rel >= 0xa64230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64230 size=16 callers=0 calls=0
*/
void sub_a64230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64230ULL || rel >= 0xa64240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64240 size=16 callers=0 calls=0
*/
void sub_a64240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64240ULL || rel >= 0xa64250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64250 size=16 callers=0 calls=0
*/
void sub_a64250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64250ULL || rel >= 0xa64260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64260 size=16 callers=0 calls=0
*/
void sub_a64260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64260ULL || rel >= 0xa64270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64270 size=16 callers=0 calls=0
*/
void sub_a64270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64270ULL || rel >= 0xa64280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64280 size=16 callers=0 calls=0
*/
void sub_a64280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64280ULL || rel >= 0xa64290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64290 size=16 callers=0 calls=0
*/
void sub_a64290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64290ULL || rel >= 0xa642a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a642a0 size=16 callers=0 calls=0
*/
void sub_a642a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa642a0ULL || rel >= 0xa642b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a642b0 size=16 callers=0 calls=0
*/
void sub_a642b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa642b0ULL || rel >= 0xa642c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a642c0 size=16 callers=0 calls=0
*/
void sub_a642c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa642c0ULL || rel >= 0xa642d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a642d0 size=16 callers=0 calls=0
*/
void sub_a642d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa642d0ULL || rel >= 0xa642e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a642e0 size=16 callers=0 calls=0
*/
void sub_a642e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa642e0ULL || rel >= 0xa642f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a642f0 size=16 callers=0 calls=0
*/
void sub_a642f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa642f0ULL || rel >= 0xa64300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64300 size=16 callers=0 calls=0
*/
void sub_a64300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64300ULL || rel >= 0xa64310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64310 size=16 callers=0 calls=0
*/
void sub_a64310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64310ULL || rel >= 0xa64320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64320 size=16 callers=0 calls=0
*/
void sub_a64320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64320ULL || rel >= 0xa64330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64330 size=16 callers=0 calls=0
*/
void sub_a64330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64330ULL || rel >= 0xa64340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64340 size=16 callers=0 calls=0
*/
void sub_a64340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64340ULL || rel >= 0xa64350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64350 size=16 callers=0 calls=0
*/
void sub_a64350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64350ULL || rel >= 0xa64360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64360 size=16 callers=0 calls=0
*/
void sub_a64360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64360ULL || rel >= 0xa64370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64370 size=16 callers=0 calls=0
*/
void sub_a64370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64370ULL || rel >= 0xa64380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64380 size=16 callers=0 calls=0
*/
void sub_a64380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64380ULL || rel >= 0xa64390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64390 size=16 callers=0 calls=0
*/
void sub_a64390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64390ULL || rel >= 0xa643a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a643a0 size=16 callers=0 calls=0
*/
void sub_a643a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa643a0ULL || rel >= 0xa643b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a643b0 size=16 callers=0 calls=0
*/
void sub_a643b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa643b0ULL || rel >= 0xa643c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a643c0 size=16 callers=0 calls=0
*/
void sub_a643c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa643c0ULL || rel >= 0xa643d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a643d0 size=16 callers=0 calls=0
*/
void sub_a643d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa643d0ULL || rel >= 0xa643e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a643e0 size=16 callers=0 calls=0
*/
void sub_a643e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa643e0ULL || rel >= 0xa643f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a643f0 size=16 callers=0 calls=0
*/
void sub_a643f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa643f0ULL || rel >= 0xa64400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64400 size=16 callers=0 calls=0
*/
void sub_a64400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64400ULL || rel >= 0xa64410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64410 size=16 callers=0 calls=0
*/
void sub_a64410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64410ULL || rel >= 0xa64420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64420 size=16 callers=0 calls=0
*/
void sub_a64420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64420ULL || rel >= 0xa64430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64430 size=16 callers=0 calls=0
*/
void sub_a64430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64430ULL || rel >= 0xa64440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64440 size=16 callers=0 calls=0
*/
void sub_a64440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64440ULL || rel >= 0xa64450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64450 size=16 callers=0 calls=0
*/
void sub_a64450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64450ULL || rel >= 0xa64460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64460 size=16 callers=0 calls=0
*/
void sub_a64460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64460ULL || rel >= 0xa64470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64470 size=16 callers=0 calls=0
*/
void sub_a64470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64470ULL || rel >= 0xa64480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64480 size=16 callers=0 calls=0
*/
void sub_a64480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64480ULL || rel >= 0xa64490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64490 size=16 callers=0 calls=0
*/
void sub_a64490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64490ULL || rel >= 0xa644a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a644a0 size=16 callers=0 calls=0
*/
void sub_a644a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa644a0ULL || rel >= 0xa644b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a644b0 size=16 callers=0 calls=0
*/
void sub_a644b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa644b0ULL || rel >= 0xa644c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a644c0 size=16 callers=0 calls=0
*/
void sub_a644c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa644c0ULL || rel >= 0xa644d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a644d0 size=16 callers=0 calls=0
*/
void sub_a644d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa644d0ULL || rel >= 0xa644e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a644e0 size=16 callers=0 calls=0
*/
void sub_a644e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa644e0ULL || rel >= 0xa644f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a644f0 size=16 callers=0 calls=0
*/
void sub_a644f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa644f0ULL || rel >= 0xa64500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64500 size=16 callers=0 calls=0
*/
void sub_a64500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64500ULL || rel >= 0xa64510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64510 size=16 callers=0 calls=0
*/
void sub_a64510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64510ULL || rel >= 0xa64520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64520 size=16 callers=0 calls=0
*/
void sub_a64520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64520ULL || rel >= 0xa64530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64530 size=16 callers=0 calls=0
*/
void sub_a64530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64530ULL || rel >= 0xa64540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64540 size=16 callers=0 calls=0
*/
void sub_a64540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64540ULL || rel >= 0xa64550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a64550 size=16 callers=0 calls=0
*/
void sub_a64550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64550ULL || rel >= 0xa64560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

