/* main functions 00c7a1d0..00c945e0 (99 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00c7a1d0 size=416 callers=0 calls=3
   calls: sub_c7a0b0, sub_c7a370, sub_c81530
*/
void sub_c7a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a1d0ULL || rel >= 0xc7a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7a370 size=528 callers=1 calls=3
   calls: sub_615c50, sub_c7a9f0, sub_c81530
*/
void sub_c7a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a370ULL || rel >= 0xc7a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7a580 size=1136 callers=0 calls=7
   calls: sub_618410, sub_6527d0, sub_652830, sub_652910, sub_c784d0, sub_c7a9f0, sub_c81530
*/
void sub_c7a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a580ULL || rel >= 0xc7a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7a9f0 size=256 callers=2 calls=3
   calls: sub_618980, sub_6189b0, sub_6189d0
*/
void sub_c7a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a9f0ULL || rel >= 0xc7aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7aaf0 size=160 callers=1 calls=3
   calls: sub_c7ab90, sub_e99a00, sub_e99f30
*/
void sub_c7aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7aaf0ULL || rel >= 0xc7ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ab90 size=1328 callers=1 calls=1
   calls: sub_e9ab60
*/
void sub_c7ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ab90ULL || rel >= 0xc7b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b0c0 size=320 callers=1 calls=1
   calls: sub_c7b200
*/
void sub_c7b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b0c0ULL || rel >= 0xc7b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b200 size=624 callers=4 calls=0
*/
void sub_c7b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b200ULL || rel >= 0xc7b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b470 size=80 callers=2 calls=1
   calls: sub_edb0a0
*/
void sub_c7b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b470ULL || rel >= 0xc7b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b4c0 size=96 callers=2 calls=1
   calls: sub_edb4b0
*/
void sub_c7b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b4c0ULL || rel >= 0xc7b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b520 size=96 callers=1 calls=1
   calls: sub_edb8e0
*/
void sub_c7b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b520ULL || rel >= 0xc7b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b580 size=64 callers=0 calls=0
*/
void sub_c7b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b580ULL || rel >= 0xc7b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b5c0 size=368 callers=1 calls=1
   calls: sub_1c0
*/
void sub_c7b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b5c0ULL || rel >= 0xc7b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b730 size=496 callers=2 calls=1
   calls: sub_614680
*/
void sub_c7b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b730ULL || rel >= 0xc7b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7b920 size=1248 callers=0 calls=2
   calls: sub_5e2bc0, sub_c7c0b0
*/
void sub_c7b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b920ULL || rel >= 0xc7be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7be00 size=16 callers=0 calls=0
*/
void sub_c7be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7be00ULL || rel >= 0xc7be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7be10 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c7be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7be10ULL || rel >= 0xc7bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7bec0 size=16 callers=0 calls=0
*/
void sub_c7bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7bec0ULL || rel >= 0xc7bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7bed0 size=16 callers=0 calls=0
*/
void sub_c7bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7bed0ULL || rel >= 0xc7bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7bee0 size=16 callers=0 calls=0
*/
void sub_c7bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7bee0ULL || rel >= 0xc7bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7bef0 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c7bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7bef0ULL || rel >= 0xc7bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7bfa0 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c7bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7bfa0ULL || rel >= 0xc7c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c050 size=16 callers=0 calls=0
*/
void sub_c7c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c050ULL || rel >= 0xc7c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c060 size=16 callers=0 calls=0
*/
void sub_c7c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c060ULL || rel >= 0xc7c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c070 size=32 callers=0 calls=0
*/
void sub_c7c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c070ULL || rel >= 0xc7c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c090 size=32 callers=0 calls=0
*/
void sub_c7c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c090ULL || rel >= 0xc7c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c0b0 size=384 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_c7c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c0b0ULL || rel >= 0xc7c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c230 size=752 callers=2 calls=2
   calls: sub_c7c520, sub_c7c880
*/
void sub_c7c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c230ULL || rel >= 0xc7c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c520 size=864 callers=1 calls=0
*/
void sub_c7c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c520ULL || rel >= 0xc7c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c880 size=368 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_c7c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c880ULL || rel >= 0xc7c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7c9f0 size=32 callers=0 calls=0
*/
void sub_c7c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c9f0ULL || rel >= 0xc7ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ca10 size=16 callers=0 calls=0
*/
void sub_c7ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ca10ULL || rel >= 0xc7ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ca20 size=16 callers=0 calls=0
*/
void sub_c7ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ca20ULL || rel >= 0xc7ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ca30 size=16 callers=0 calls=0
*/
void sub_c7ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ca30ULL || rel >= 0xc7ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ca40 size=272 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_c7cb60
*/
void sub_c7ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ca40ULL || rel >= 0xc7cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7cb50 size=16 callers=0 calls=0
*/
void sub_c7cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7cb50ULL || rel >= 0xc7cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7cb60 size=368 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_c7cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7cb60ULL || rel >= 0xc7ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ccd0 size=48 callers=0 calls=1
   calls: sub_b8ae40
*/
void sub_c7ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ccd0ULL || rel >= 0xc7cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7cd00 size=16 callers=0 calls=0
*/
void sub_c7cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7cd00ULL || rel >= 0xc7cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7cd10 size=32 callers=0 calls=0
*/
void sub_c7cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7cd10ULL || rel >= 0xc7cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7cd30 size=32 callers=0 calls=0
*/
void sub_c7cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7cd30ULL || rel >= 0xc7cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7cd50 size=16 callers=0 calls=0
*/
void sub_c7cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7cd50ULL || rel >= 0xc7cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7cd60 size=16 callers=0 calls=0
*/
void sub_c7cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7cd60ULL || rel >= 0xc7cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7cd70 size=2304 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_653e00, sub_df90
*/
void sub_c7cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7cd70ULL || rel >= 0xc7d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d670 size=32 callers=0 calls=0
*/
void sub_c7d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d670ULL || rel >= 0xc7d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d690 size=16 callers=0 calls=0
*/
void sub_c7d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d690ULL || rel >= 0xc7d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d6a0 size=16 callers=0 calls=0
*/
void sub_c7d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d6a0ULL || rel >= 0xc7d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d6b0 size=16 callers=0 calls=0
*/
void sub_c7d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d6b0ULL || rel >= 0xc7d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d6c0 size=272 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_c7d7e0
*/
void sub_c7d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d6c0ULL || rel >= 0xc7d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d7d0 size=16 callers=0 calls=0
*/
void sub_c7d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d7d0ULL || rel >= 0xc7d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d7e0 size=368 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_c7d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d7e0ULL || rel >= 0xc7d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d950 size=48 callers=0 calls=1
   calls: sub_c7d990
*/
void sub_c7d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d950ULL || rel >= 0xc7d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d980 size=16 callers=0 calls=0
*/
void sub_c7d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d980ULL || rel >= 0xc7d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7d990 size=256 callers=1 calls=2
   calls: sub_5d99d0, sub_651ca0
*/
void sub_c7d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d990ULL || rel >= 0xc7da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7da90 size=32 callers=0 calls=0
*/
void sub_c7da90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7da90ULL || rel >= 0xc7dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7dab0 size=32 callers=0 calls=0
*/
void sub_c7dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7dab0ULL || rel >= 0xc7dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7dad0 size=16 callers=0 calls=0
*/
void sub_c7dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7dad0ULL || rel >= 0xc7dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7dae0 size=16 callers=0 calls=0
*/
void sub_c7dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7dae0ULL || rel >= 0xc7daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7daf0 size=448 callers=2 calls=0
*/
void sub_c7daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7daf0ULL || rel >= 0xc7dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7dcb0 size=368 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_c7dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7dcb0ULL || rel >= 0xc7de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7de20 size=272 callers=0 calls=4
   calls: sub_618d40, sub_618ec0, sub_ed2fe0, sub_ee79d0
*/
void sub_c7de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7de20ULL || rel >= 0xc7df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7df30 size=64 callers=0 calls=0
*/
void sub_c7df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7df30ULL || rel >= 0xc7df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7df70 size=48 callers=0 calls=0
*/
void sub_c7df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7df70ULL || rel >= 0xc7dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7dfa0 size=32 callers=0 calls=0
*/
void sub_c7dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7dfa0ULL || rel >= 0xc7dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7dfc0 size=800 callers=1 calls=0
*/
void sub_c7dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7dfc0ULL || rel >= 0xc7e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e2e0 size=400 callers=1 calls=2
   calls: sub_c7e480, sub_eda830
*/
void sub_c7e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e2e0ULL || rel >= 0xc7e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e470 size=16 callers=0 calls=0
*/
void sub_c7e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e470ULL || rel >= 0xc7e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e480 size=560 callers=1 calls=0
*/
void sub_c7e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e480ULL || rel >= 0xc7e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e6b0 size=32 callers=0 calls=0
*/
void sub_c7e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e6b0ULL || rel >= 0xc7e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e6d0 size=32 callers=0 calls=0
*/
void sub_c7e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e6d0ULL || rel >= 0xc7e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e6f0 size=32 callers=1 calls=0
*/
void sub_c7e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e6f0ULL || rel >= 0xc7e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e710 size=16 callers=0 calls=0
*/
void sub_c7e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e710ULL || rel >= 0xc7e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e720 size=16 callers=0 calls=0
*/
void sub_c7e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e720ULL || rel >= 0xc7e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e730 size=16 callers=0 calls=0
*/
void sub_c7e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e730ULL || rel >= 0xc7e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e740 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c7e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e740ULL || rel >= 0xc7e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e800 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c7e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e800ULL || rel >= 0xc7e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e8c0 size=32 callers=0 calls=0
*/
void sub_c7e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e8c0ULL || rel >= 0xc7e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e8e0 size=48 callers=0 calls=0
*/
void sub_c7e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e8e0ULL || rel >= 0xc7e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7e910 size=1056 callers=1 calls=1
   calls: sub_c7ed40
   ref: Collider%dRadius
   ref: Collider%dPositionX
   ref: Collider%dPositionZ
   ref: Collider%dPositionY
*/
void Collider_dRadius(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7e910ULL || rel >= 0xc7ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ed30 size=16 callers=0 calls=0
*/
void sub_c7ed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ed30ULL || rel >= 0xc7ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ed40 size=576 callers=1 calls=0
*/
void sub_c7ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ed40ULL || rel >= 0xc7ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ef80 size=16 callers=0 calls=0
*/
void sub_c7ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ef80ULL || rel >= 0xc7ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7ef90 size=16 callers=0 calls=0
*/
void sub_c7ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7ef90ULL || rel >= 0xc7efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7efa0 size=784 callers=1 calls=0
*/
void sub_c7efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7efa0ULL || rel >= 0xc7f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f2b0 size=464 callers=1 calls=0
*/
void sub_c7f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f2b0ULL || rel >= 0xc7f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f480 size=16 callers=0 calls=0
*/
void sub_c7f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f480ULL || rel >= 0xc7f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f490 size=16 callers=0 calls=0
*/
void sub_c7f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f490ULL || rel >= 0xc7f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f4a0 size=16 callers=0 calls=0
*/
void sub_c7f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f4a0ULL || rel >= 0xc7f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f4b0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c7f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f4b0ULL || rel >= 0xc7f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f570 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c7f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f570ULL || rel >= 0xc7f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f630 size=32 callers=0 calls=0
*/
void sub_c7f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f630ULL || rel >= 0xc7f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f650 size=48 callers=0 calls=0
*/
void sub_c7f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f650ULL || rel >= 0xc7f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f680 size=608 callers=1 calls=2
   calls: sub_65d700, sub_c80760
*/
void sub_c7f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f680ULL || rel >= 0xc7f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f8e0 size=96 callers=0 calls=0
*/
void sub_c7f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f8e0ULL || rel >= 0xc7f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f940 size=64 callers=0 calls=0
*/
void sub_c7f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f940ULL || rel >= 0xc7f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7f980 size=176 callers=0 calls=1
   calls: sub_c7fa30
*/
void sub_c7f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f980ULL || rel >= 0xc7fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7fa30 size=240 callers=2 calls=5
   calls: sub_c78670, sub_c79ea0, sub_c7b470, sub_c7b4c0, sub_c7b520
*/
void sub_c7fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7fa30ULL || rel >= 0xc7fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7fb20 size=304 callers=0 calls=0
*/
void sub_c7fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7fb20ULL || rel >= 0xc7fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7fc50 size=112 callers=0 calls=0
*/
void sub_c7fc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7fc50ULL || rel >= 0xc7fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7fcc0 size=144 callers=0 calls=1
   calls: sub_c78220
*/
void sub_c7fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7fcc0ULL || rel >= 0xc7fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7fd50 size=112 callers=0 calls=2
   calls: sub_c78220, sub_c7fa30
*/
void sub_c7fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7fd50ULL || rel >= 0xc7fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7fdc0 size=176 callers=0 calls=1
   calls: sub_5f8c40
*/
void sub_c7fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7fdc0ULL || rel >= 0xc7fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7fe70 size=128 callers=1 calls=2
   calls: sub_c7b470, sub_c7fef0
*/
void sub_c7fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7fe70ULL || rel >= 0xc7fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7fef0 size=720 callers=1 calls=1
   calls: sub_c80960
*/
void sub_c7fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7fef0ULL || rel >= 0xc801c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c801c0 size=128 callers=2 calls=2
   calls: sub_c7b4c0, sub_c80240
*/
void sub_c801c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc801c0ULL || rel >= 0xc80240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c80240 size=720 callers=1 calls=1
   calls: sub_68cc60
*/
void sub_c80240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80240ULL || rel >= 0xc80510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c80510 size=576 callers=0 calls=0
*/
void sub_c80510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80510ULL || rel >= 0xc80750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c80750 size=16 callers=0 calls=0
*/
void sub_c80750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80750ULL || rel >= 0xc80760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c80760 size=512 callers=1 calls=0
*/
void sub_c80760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80760ULL || rel >= 0xc80960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c80960 size=272 callers=1 calls=0
*/
void sub_c80960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80960ULL || rel >= 0xc80a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c80a70 size=704 callers=0 calls=0
*/
void sub_c80a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80a70ULL || rel >= 0xc80d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c80d30 size=272 callers=1 calls=0
*/
void sub_c80d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80d30ULL || rel >= 0xc80e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c80e40 size=704 callers=0 calls=0
*/
void sub_c80e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80e40ULL || rel >= 0xc81100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81100 size=1072 callers=2 calls=0
*/
void sub_c81100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81100ULL || rel >= 0xc81530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81530 size=240 callers=4 calls=0
*/
void sub_c81530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81530ULL || rel >= 0xc81620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81620 size=128 callers=2 calls=0
*/
void sub_c81620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81620ULL || rel >= 0xc816a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c816a0 size=208 callers=14 calls=0
*/
void sub_c816a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc816a0ULL || rel >= 0xc81770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81770 size=224 callers=4 calls=0
*/
void sub_c81770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81770ULL || rel >= 0xc81850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81850 size=64 callers=1 calls=0
*/
void sub_c81850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81850ULL || rel >= 0xc81890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81890 size=1120 callers=1 calls=0
*/
void sub_c81890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81890ULL || rel >= 0xc81cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81cf0 size=368 callers=1 calls=0
*/
void sub_c81cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81cf0ULL || rel >= 0xc81e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81e60 size=128 callers=3 calls=0
*/
void sub_c81e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81e60ULL || rel >= 0xc81ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81ee0 size=176 callers=1 calls=0
*/
void sub_c81ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81ee0ULL || rel >= 0xc81f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c81f90 size=256 callers=1 calls=0
*/
void sub_c81f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81f90ULL || rel >= 0xc82090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c82090 size=1568 callers=3 calls=1
   calls: sub_c692c0
*/
void sub_c82090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc82090ULL || rel >= 0xc826b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c826b0 size=592 callers=3 calls=4
   calls: sub_b334c0, sub_b334e0, sub_b4c060, sub_c697c0
*/
void sub_c826b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc826b0ULL || rel >= 0xc82900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c82900 size=208 callers=1 calls=3
   calls: sub_b33510, sub_b4c060, sub_c69e60
*/
void sub_c82900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc82900ULL || rel >= 0xc829d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c829d0 size=1920 callers=2 calls=20
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750, sub_96ccf0, sub_b33800, sub_b33950, sub_b33a30, sub_b33cd0, sub_b46170, sub_b4c060, sub_c644d0, sub_c69f10
   ... +8 more
*/
void sub_c829d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc829d0ULL || rel >= 0xc83150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83150 size=272 callers=6 calls=4
   calls: sub_11161b0, sub_5d99d0, sub_c6e790, sub_c70ef0
*/
void sub_c83150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83150ULL || rel >= 0xc83260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83260 size=288 callers=2 calls=4
   calls: sub_11161b0, sub_5d99d0, sub_c6e790, sub_c71010
*/
void sub_c83260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83260ULL || rel >= 0xc83380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83380 size=192 callers=3 calls=3
   calls: sub_b33700, sub_b4c060, sub_c6d5e0
*/
void sub_c83380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83380ULL || rel >= 0xc83440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83440 size=256 callers=0 calls=2
   calls: sub_b33870, sub_b4c060
*/
void sub_c83440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83440ULL || rel >= 0xc83540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83540 size=96 callers=20 calls=2
   calls: sub_986bc0, sub_b84890
*/
void sub_c83540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83540ULL || rel >= 0xc835a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c835a0 size=288 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c835a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc835a0ULL || rel >= 0xc836c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c836c0 size=16 callers=0 calls=0
*/
void sub_c836c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc836c0ULL || rel >= 0xc836d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c836d0 size=16 callers=0 calls=0
*/
void sub_c836d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc836d0ULL || rel >= 0xc836e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c836e0 size=16 callers=0 calls=0
*/
void sub_c836e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc836e0ULL || rel >= 0xc836f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c836f0 size=16 callers=0 calls=0
*/
void sub_c836f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc836f0ULL || rel >= 0xc83700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83700 size=16 callers=0 calls=0
*/
void sub_c83700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83700ULL || rel >= 0xc83710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83710 size=16 callers=0 calls=0
*/
void sub_c83710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83710ULL || rel >= 0xc83720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83720 size=16 callers=0 calls=0
*/
void sub_c83720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83720ULL || rel >= 0xc83730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83730 size=16 callers=0 calls=0
*/
void sub_c83730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83730ULL || rel >= 0xc83740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83740 size=16 callers=0 calls=0
*/
void sub_c83740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83740ULL || rel >= 0xc83750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83750 size=16 callers=0 calls=0
*/
void sub_c83750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83750ULL || rel >= 0xc83760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83760 size=16 callers=0 calls=0
*/
void sub_c83760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83760ULL || rel >= 0xc83770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83770 size=16 callers=0 calls=0
*/
void sub_c83770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83770ULL || rel >= 0xc83780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83780 size=16 callers=0 calls=0
*/
void sub_c83780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83780ULL || rel >= 0xc83790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83790 size=352 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_c83790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83790ULL || rel >= 0xc838f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c838f0 size=64 callers=0 calls=0
*/
void sub_c838f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc838f0ULL || rel >= 0xc83930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83930 size=16 callers=0 calls=0
*/
void sub_c83930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83930ULL || rel >= 0xc83940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83940 size=16 callers=0 calls=0
*/
void sub_c83940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83940ULL || rel >= 0xc83950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83950 size=16 callers=0 calls=0
*/
void sub_c83950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83950ULL || rel >= 0xc83960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83960 size=16 callers=0 calls=0
*/
void sub_c83960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83960ULL || rel >= 0xc83970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83970 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c83970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83970ULL || rel >= 0xc839a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c839a0 size=16 callers=0 calls=0
*/
void sub_c839a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc839a0ULL || rel >= 0xc839b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c839b0 size=16 callers=0 calls=0
*/
void sub_c839b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc839b0ULL || rel >= 0xc839c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c839c0 size=16 callers=0 calls=0
*/
void sub_c839c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc839c0ULL || rel >= 0xc839d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c839d0 size=48 callers=0 calls=0
*/
void sub_c839d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc839d0ULL || rel >= 0xc83a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83a00 size=368 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_c83a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83a00ULL || rel >= 0xc83b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83b70 size=256 callers=0 calls=0
*/
void sub_c83b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83b70ULL || rel >= 0xc83c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83c70 size=64 callers=0 calls=0
*/
void sub_c83c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83c70ULL || rel >= 0xc83cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83cb0 size=16 callers=0 calls=0
*/
void sub_c83cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83cb0ULL || rel >= 0xc83cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83cc0 size=64 callers=0 calls=0
*/
void sub_c83cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83cc0ULL || rel >= 0xc83d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83d00 size=32 callers=0 calls=0
*/
void sub_c83d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83d00ULL || rel >= 0xc83d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83d20 size=16 callers=0 calls=0
*/
void sub_c83d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83d20ULL || rel >= 0xc83d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83d30 size=48 callers=0 calls=0
*/
void sub_c83d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83d30ULL || rel >= 0xc83d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83d60 size=32 callers=0 calls=0
*/
void sub_c83d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83d60ULL || rel >= 0xc83d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83d80 size=16 callers=0 calls=0
*/
void sub_c83d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83d80ULL || rel >= 0xc83d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83d90 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_c83d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83d90ULL || rel >= 0xc83dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83dd0 size=32 callers=0 calls=0
*/
void sub_c83dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83dd0ULL || rel >= 0xc83df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83df0 size=16 callers=0 calls=0
*/
void sub_c83df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83df0ULL || rel >= 0xc83e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83e00 size=16 callers=0 calls=0
*/
void sub_c83e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83e00ULL || rel >= 0xc83e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83e10 size=64 callers=0 calls=0
*/
void sub_c83e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83e10ULL || rel >= 0xc83e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c83e50 size=640 callers=0 calls=1
   calls: sub_c84150
*/
void sub_c83e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83e50ULL || rel >= 0xc840d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c840d0 size=128 callers=35 calls=1
   calls: sub_c84840
*/
void sub_c840d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc840d0ULL || rel >= 0xc84150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84150 size=448 callers=1 calls=0
*/
void sub_c84150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84150ULL || rel >= 0xc84310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84310 size=608 callers=1 calls=1
   calls: FieldObject__lu
*/
void sub_c84310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84310ULL || rel >= 0xc84570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84570 size=720 callers=1 calls=2
   calls: sub_135a1a0, sub_135a760
*/
void sub_c84570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84570ULL || rel >= 0xc84840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84840 size=336 callers=1 calls=1
   calls: sub_c84570
*/
void sub_c84840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84840ULL || rel >= 0xc84990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84990 size=16 callers=0 calls=0
*/
void sub_c84990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84990ULL || rel >= 0xc849a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c849a0 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c849a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc849a0ULL || rel >= 0xc84a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84a10 size=16 callers=0 calls=0
*/
void sub_c84a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84a10ULL || rel >= 0xc84a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84a20 size=16 callers=0 calls=0
*/
void sub_c84a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84a20ULL || rel >= 0xc84a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84a30 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c84a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84a30ULL || rel >= 0xc84b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84b20 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c84b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84b20ULL || rel >= 0xc84c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84c10 size=16 callers=0 calls=0
*/
void sub_c84c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84c10ULL || rel >= 0xc84c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84c20 size=16 callers=0 calls=0
*/
void sub_c84c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84c20ULL || rel >= 0xc84c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c84c30 size=2880 callers=2 calls=7
   calls: sub_c692c0, sub_c75b20, sub_c75b60, sub_c85cc0, sub_c86c80, sub_c876c0, sub_c88050
   ref: .gfbanm
   ref: .gfbanmcfg
*/
void gfbanm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84c30ULL || rel >= 0xc85770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85770 size=544 callers=6 calls=7
   calls: sub_96ccf0, sub_c69f10, sub_c70cc0, sub_c70dd0, sub_c83150, sub_c83260, sub_ee79d0
*/
void sub_c85770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85770ULL || rel >= 0xc85990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85990 size=288 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c85990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85990ULL || rel >= 0xc85ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85ab0 size=80 callers=0 calls=1
   calls: sub_c62750
*/
void sub_c85ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85ab0ULL || rel >= 0xc85b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85b00 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c85b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85b00ULL || rel >= 0xc85b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85b50 size=16 callers=0 calls=0
*/
void sub_c85b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85b50ULL || rel >= 0xc85b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85b60 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c85b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85b60ULL || rel >= 0xc85bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85bb0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c85bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85bb0ULL || rel >= 0xc85c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85c00 size=16 callers=0 calls=0
*/
void sub_c85c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85c00ULL || rel >= 0xc85c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85c10 size=16 callers=0 calls=0
*/
void sub_c85c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85c10ULL || rel >= 0xc85c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85c20 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c85c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85c20ULL || rel >= 0xc85c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85c70 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c85c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85c70ULL || rel >= 0xc85cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85cc0 size=672 callers=5 calls=1
   calls: sub_c86a50
*/
void sub_c85cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85cc0ULL || rel >= 0xc85f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85f60 size=128 callers=0 calls=1
   calls: sub_c86520
*/
void sub_c85f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85f60ULL || rel >= 0xc85fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c85fe0 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c85fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85fe0ULL || rel >= 0xc860f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c860f0 size=368 callers=0 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_8c2c10, sub_96a5a0
*/
void sub_c860f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc860f0ULL || rel >= 0xc86260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86260 size=544 callers=0 calls=3
   calls: sub_5e2930, sub_8c2c10, sub_96a5a0
*/
void sub_c86260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86260ULL || rel >= 0xc86480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86480 size=16 callers=0 calls=0
*/
void sub_c86480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86480ULL || rel >= 0xc86490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86490 size=16 callers=0 calls=0
*/
void sub_c86490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86490ULL || rel >= 0xc864a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c864a0 size=80 callers=0 calls=0
*/
void sub_c864a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc864a0ULL || rel >= 0xc864f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c864f0 size=48 callers=0 calls=0
*/
void sub_c864f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc864f0ULL || rel >= 0xc86520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86520 size=176 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_c86520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86520ULL || rel >= 0xc865d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c865d0 size=80 callers=0 calls=0
*/
void sub_c865d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc865d0ULL || rel >= 0xc86620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86620 size=16 callers=0 calls=0
*/
void sub_c86620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86620ULL || rel >= 0xc86630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86630 size=16 callers=0 calls=0
*/
void sub_c86630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86630ULL || rel >= 0xc86640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86640 size=16 callers=0 calls=0
*/
void sub_c86640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86640ULL || rel >= 0xc86650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86650 size=112 callers=0 calls=1
   calls: sub_c866d0
*/
void sub_c86650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86650ULL || rel >= 0xc866c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c866c0 size=16 callers=0 calls=0
*/
void sub_c866c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc866c0ULL || rel >= 0xc866d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c866d0 size=288 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_c867f0
*/
void sub_c866d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc866d0ULL || rel >= 0xc867f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c867f0 size=352 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_c867f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc867f0ULL || rel >= 0xc86950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86950 size=64 callers=0 calls=1
   calls: sub_c6d720
*/
void sub_c86950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86950ULL || rel >= 0xc86990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86990 size=16 callers=0 calls=0
*/
void sub_c86990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86990ULL || rel >= 0xc869a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c869a0 size=32 callers=0 calls=0
*/
void sub_c869a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc869a0ULL || rel >= 0xc869c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c869c0 size=32 callers=0 calls=0
*/
void sub_c869c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc869c0ULL || rel >= 0xc869e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c869e0 size=16 callers=0 calls=0
*/
void sub_c869e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc869e0ULL || rel >= 0xc869f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c869f0 size=16 callers=0 calls=0
*/
void sub_c869f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc869f0ULL || rel >= 0xc86a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86a00 size=32 callers=0 calls=0
*/
void sub_c86a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86a00ULL || rel >= 0xc86a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86a20 size=16 callers=0 calls=0
*/
void sub_c86a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86a20ULL || rel >= 0xc86a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86a30 size=16 callers=0 calls=0
*/
void sub_c86a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86a30ULL || rel >= 0xc86a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86a40 size=16 callers=0 calls=0
*/
void sub_c86a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86a40ULL || rel >= 0xc86a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86a50 size=560 callers=4 calls=0
*/
void sub_c86a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86a50ULL || rel >= 0xc86c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86c80 size=672 callers=4 calls=1
   calls: sub_c86a50
*/
void sub_c86c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86c80ULL || rel >= 0xc86f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86f20 size=128 callers=0 calls=1
   calls: sub_c874e0
*/
void sub_c86f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86f20ULL || rel >= 0xc86fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c86fa0 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c86fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc86fa0ULL || rel >= 0xc870b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c870b0 size=368 callers=0 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_8c2c10, sub_b77710
*/
void sub_c870b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc870b0ULL || rel >= 0xc87220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87220 size=544 callers=0 calls=3
   calls: sub_5e2930, sub_8c2c10, sub_b77710
*/
void sub_c87220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87220ULL || rel >= 0xc87440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87440 size=16 callers=0 calls=0
*/
void sub_c87440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87440ULL || rel >= 0xc87450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87450 size=16 callers=0 calls=0
*/
void sub_c87450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87450ULL || rel >= 0xc87460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87460 size=80 callers=0 calls=0
*/
void sub_c87460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87460ULL || rel >= 0xc874b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c874b0 size=48 callers=0 calls=0
*/
void sub_c874b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc874b0ULL || rel >= 0xc874e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c874e0 size=176 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_c874e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc874e0ULL || rel >= 0xc87590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87590 size=80 callers=0 calls=0
*/
void sub_c87590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87590ULL || rel >= 0xc875e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c875e0 size=16 callers=0 calls=0
*/
void sub_c875e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc875e0ULL || rel >= 0xc875f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c875f0 size=16 callers=0 calls=0
*/
void sub_c875f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc875f0ULL || rel >= 0xc87600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87600 size=16 callers=0 calls=0
*/
void sub_c87600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87600ULL || rel >= 0xc87610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87610 size=64 callers=0 calls=1
   calls: sub_c6d790
*/
void sub_c87610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87610ULL || rel >= 0xc87650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87650 size=16 callers=0 calls=0
*/
void sub_c87650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87650ULL || rel >= 0xc87660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87660 size=16 callers=0 calls=0
*/
void sub_c87660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87660ULL || rel >= 0xc87670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87670 size=16 callers=0 calls=0
*/
void sub_c87670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87670ULL || rel >= 0xc87680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87680 size=16 callers=0 calls=0
*/
void sub_c87680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87680ULL || rel >= 0xc87690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87690 size=16 callers=0 calls=0
*/
void sub_c87690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87690ULL || rel >= 0xc876a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c876a0 size=16 callers=0 calls=0
*/
void sub_c876a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc876a0ULL || rel >= 0xc876b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c876b0 size=16 callers=0 calls=0
*/
void sub_c876b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc876b0ULL || rel >= 0xc876c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c876c0 size=672 callers=3 calls=1
   calls: sub_c86a50
*/
void sub_c876c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc876c0ULL || rel >= 0xc87960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87960 size=128 callers=0 calls=1
   calls: sub_ea8d80
*/
void sub_c87960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87960ULL || rel >= 0xc879e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c879e0 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c879e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc879e0ULL || rel >= 0xc87af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87af0 size=368 callers=0 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
*/
void sub_c87af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87af0ULL || rel >= 0xc87c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87c60 size=544 callers=0 calls=3
   calls: sub_5dd790, sub_5e2930, sub_8c2c10
*/
void sub_c87c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87c60ULL || rel >= 0xc87e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87e80 size=16 callers=0 calls=0
*/
void sub_c87e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87e80ULL || rel >= 0xc87e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87e90 size=16 callers=0 calls=0
*/
void sub_c87e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87e90ULL || rel >= 0xc87ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87ea0 size=80 callers=0 calls=0
*/
void sub_c87ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87ea0ULL || rel >= 0xc87ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87ef0 size=48 callers=0 calls=0
*/
void sub_c87ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87ef0ULL || rel >= 0xc87f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87f20 size=80 callers=0 calls=0
*/
void sub_c87f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87f20ULL || rel >= 0xc87f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87f70 size=16 callers=0 calls=0
*/
void sub_c87f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87f70ULL || rel >= 0xc87f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87f80 size=16 callers=0 calls=0
*/
void sub_c87f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87f80ULL || rel >= 0xc87f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87f90 size=16 callers=0 calls=0
*/
void sub_c87f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87f90ULL || rel >= 0xc87fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87fa0 size=64 callers=0 calls=1
   calls: sub_c6d780
*/
void sub_c87fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87fa0ULL || rel >= 0xc87fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87fe0 size=16 callers=0 calls=0
*/
void sub_c87fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87fe0ULL || rel >= 0xc87ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c87ff0 size=16 callers=0 calls=0
*/
void sub_c87ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc87ff0ULL || rel >= 0xc88000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88000 size=16 callers=0 calls=0
*/
void sub_c88000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88000ULL || rel >= 0xc88010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88010 size=16 callers=0 calls=0
*/
void sub_c88010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88010ULL || rel >= 0xc88020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88020 size=16 callers=0 calls=0
*/
void sub_c88020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88020ULL || rel >= 0xc88030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88030 size=16 callers=0 calls=0
*/
void sub_c88030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88030ULL || rel >= 0xc88040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88040 size=16 callers=0 calls=0
*/
void sub_c88040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88040ULL || rel >= 0xc88050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88050 size=672 callers=2 calls=1
   calls: sub_c86a50
*/
void sub_c88050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88050ULL || rel >= 0xc882f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c882f0 size=128 callers=0 calls=1
   calls: sub_c888c0
*/
void sub_c882f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc882f0ULL || rel >= 0xc88370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88370 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c88370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88370ULL || rel >= 0xc88480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88480 size=368 callers=0 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_8c2c10, sub_c745f0
*/
void sub_c88480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88480ULL || rel >= 0xc885f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c885f0 size=544 callers=0 calls=3
   calls: sub_5e2930, sub_8c2c10, sub_c745f0
*/
void sub_c885f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc885f0ULL || rel >= 0xc88810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88810 size=16 callers=0 calls=0
*/
void sub_c88810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88810ULL || rel >= 0xc88820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88820 size=16 callers=0 calls=0
*/
void sub_c88820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88820ULL || rel >= 0xc88830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88830 size=96 callers=0 calls=0
*/
void sub_c88830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88830ULL || rel >= 0xc88890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88890 size=48 callers=0 calls=0
*/
void sub_c88890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88890ULL || rel >= 0xc888c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c888c0 size=176 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_c888c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc888c0ULL || rel >= 0xc88970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88970 size=80 callers=0 calls=0
*/
void sub_c88970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88970ULL || rel >= 0xc889c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c889c0 size=16 callers=0 calls=0
*/
void sub_c889c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc889c0ULL || rel >= 0xc889d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c889d0 size=16 callers=0 calls=0
*/
void sub_c889d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc889d0ULL || rel >= 0xc889e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c889e0 size=16 callers=0 calls=0
*/
void sub_c889e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc889e0ULL || rel >= 0xc889f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c889f0 size=64 callers=0 calls=1
   calls: sub_c6d7a0
*/
void sub_c889f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc889f0ULL || rel >= 0xc88a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88a30 size=16 callers=0 calls=0
*/
void sub_c88a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88a30ULL || rel >= 0xc88a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88a40 size=16 callers=0 calls=0
*/
void sub_c88a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88a40ULL || rel >= 0xc88a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88a50 size=16 callers=0 calls=0
*/
void sub_c88a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88a50ULL || rel >= 0xc88a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88a60 size=16 callers=0 calls=0
*/
void sub_c88a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88a60ULL || rel >= 0xc88a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88a70 size=16 callers=0 calls=0
*/
void sub_c88a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88a70ULL || rel >= 0xc88a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88a80 size=16 callers=0 calls=0
*/
void sub_c88a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88a80ULL || rel >= 0xc88a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88a90 size=16 callers=0 calls=0
*/
void sub_c88a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88a90ULL || rel >= 0xc88aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88aa0 size=464 callers=3 calls=2
   calls: FieldObject__lu, sub_c88c70
*/
void sub_c88aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88aa0ULL || rel >= 0xc88c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88c70 size=304 callers=1 calls=2
   calls: sub_5d99d0, sub_634110
*/
void sub_c88c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88c70ULL || rel >= 0xc88da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88da0 size=16 callers=0 calls=0
*/
void sub_c88da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88da0ULL || rel >= 0xc88db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88db0 size=16 callers=0 calls=0
*/
void sub_c88db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88db0ULL || rel >= 0xc88dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88dc0 size=304 callers=1 calls=2
   calls: sub_6342b0, sub_c628d0
*/
void sub_c88dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88dc0ULL || rel >= 0xc88ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88ef0 size=16 callers=2 calls=0
*/
void sub_c88ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88ef0ULL || rel >= 0xc88f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88f00 size=16 callers=4 calls=0
*/
void sub_c88f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88f00ULL || rel >= 0xc88f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c88f10 size=496 callers=1 calls=1
   calls: sub_791d50
   ref: _ZN2nn3ldn22SetStationAcceptPolicyENS0_12AcceptPolicyE
*/
void nn_ldn_SetStationAcceptPolicy_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88f10ULL || rel >= 0xc89100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89100 size=992 callers=2 calls=1
   calls: sub_634540
*/
void sub_c89100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89100ULL || rel >= 0xc894e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c894e0 size=144 callers=0 calls=0
*/
void sub_c894e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc894e0ULL || rel >= 0xc89570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89570 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c89570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89570ULL || rel >= 0xc895e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c895e0 size=144 callers=0 calls=0
*/
void sub_c895e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc895e0ULL || rel >= 0xc89670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89670 size=144 callers=0 calls=0
*/
void sub_c89670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89670ULL || rel >= 0xc89700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89700 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c89700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89700ULL || rel >= 0xc897f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c897f0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c897f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc897f0ULL || rel >= 0xc898e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c898e0 size=144 callers=0 calls=0
*/
void sub_c898e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc898e0ULL || rel >= 0xc89970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89970 size=144 callers=0 calls=0
*/
void sub_c89970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89970ULL || rel >= 0xc89a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89a00 size=1248 callers=1 calls=3
   calls: sub_c692c0, sub_c75b20, sub_c75b60
*/
void sub_c89a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89a00ULL || rel >= 0xc89ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89ee0 size=16 callers=0 calls=0
*/
void sub_c89ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89ee0ULL || rel >= 0xc89ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89ef0 size=16 callers=0 calls=0
*/
void sub_c89ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89ef0ULL || rel >= 0xc89f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c89f00 size=336 callers=0 calls=3
   calls: sub_c69f10, sub_c70cc0, sub_c70dd0
*/
void sub_c89f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc89f00ULL || rel >= 0xc8a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a050 size=16 callers=0 calls=0
*/
void sub_c8a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a050ULL || rel >= 0xc8a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a060 size=16 callers=0 calls=0
*/
void sub_c8a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a060ULL || rel >= 0xc8a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a070 size=288 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c8a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a070ULL || rel >= 0xc8a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a190 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c8a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a190ULL || rel >= 0xc8a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a1e0 size=16 callers=0 calls=0
*/
void sub_c8a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a1e0ULL || rel >= 0xc8a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a1f0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c8a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a1f0ULL || rel >= 0xc8a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a240 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c8a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a240ULL || rel >= 0xc8a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a290 size=16 callers=0 calls=0
*/
void sub_c8a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a290ULL || rel >= 0xc8a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a2a0 size=16 callers=0 calls=0
*/
void sub_c8a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a2a0ULL || rel >= 0xc8a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a2b0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c8a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a2b0ULL || rel >= 0xc8a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a300 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c8a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a300ULL || rel >= 0xc8a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a350 size=368 callers=3 calls=1
   calls: sub_c692c0
*/
void sub_c8a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a350ULL || rel >= 0xc8a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a4c0 size=560 callers=0 calls=3
   calls: sub_5e2bc0, sub_c628b0, sub_c6e010
*/
void sub_c8a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a4c0ULL || rel >= 0xc8a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a6f0 size=144 callers=0 calls=1
   calls: sub_c69e60
*/
void sub_c8a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a6f0ULL || rel >= 0xc8a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a780 size=496 callers=3 calls=9
   calls: sub_5d99d0, sub_68d630, sub_68d950, sub_68da30, sub_68da40, sub_68da90, sub_695420, sub_98eec0, sub_c69f10
*/
void sub_c8a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a780ULL || rel >= 0xc8a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8a970 size=240 callers=2 calls=3
   calls: sub_17c1ba0, sub_68da30, sub_c6a2d0
*/
void sub_c8a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8a970ULL || rel >= 0xc8aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8aa60 size=176 callers=2 calls=2
   calls: sub_68da30, sub_c6a470
*/
void sub_c8aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8aa60ULL || rel >= 0xc8ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ab10 size=64 callers=0 calls=1
   calls: sub_68da30
*/
void sub_c8ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ab10ULL || rel >= 0xc8ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ab50 size=32 callers=0 calls=0
*/
void sub_c8ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ab50ULL || rel >= 0xc8ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ab70 size=64 callers=0 calls=0
*/
void sub_c8ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ab70ULL || rel >= 0xc8abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8abb0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c8abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8abb0ULL || rel >= 0xc8ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ac90 size=16 callers=0 calls=0
*/
void sub_c8ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ac90ULL || rel >= 0xc8aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8aca0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c8aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8aca0ULL || rel >= 0xc8ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ad80 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c8ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ad80ULL || rel >= 0xc8ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ae60 size=16 callers=0 calls=0
*/
void sub_c8ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ae60ULL || rel >= 0xc8ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ae70 size=16 callers=0 calls=0
*/
void sub_c8ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ae70ULL || rel >= 0xc8ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ae80 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c8ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ae80ULL || rel >= 0xc8af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8af60 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c8af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8af60ULL || rel >= 0xc8b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b040 size=704 callers=2 calls=1
   calls: FieldObject__lu
*/
void sub_c8b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b040ULL || rel >= 0xc8b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b300 size=336 callers=1 calls=3
   calls: sub_c628d0, sub_c70cc0, sub_c70dd0
*/
void sub_c8b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b300ULL || rel >= 0xc8b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b450 size=288 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c8b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b450ULL || rel >= 0xc8b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b570 size=16 callers=0 calls=0
*/
void sub_c8b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b570ULL || rel >= 0xc8b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b580 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c8b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b580ULL || rel >= 0xc8b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b5f0 size=16 callers=0 calls=0
*/
void sub_c8b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b5f0ULL || rel >= 0xc8b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b600 size=16 callers=0 calls=0
*/
void sub_c8b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b600ULL || rel >= 0xc8b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b610 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c8b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b610ULL || rel >= 0xc8b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b700 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c8b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b700ULL || rel >= 0xc8b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b7f0 size=16 callers=0 calls=0
*/
void sub_c8b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b7f0ULL || rel >= 0xc8b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b800 size=16 callers=0 calls=0
*/
void sub_c8b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b800ULL || rel >= 0xc8b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8b810 size=880 callers=4 calls=1
   calls: FieldObject__lu
*/
void sub_c8b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b810ULL || rel >= 0xc8bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bb80 size=16 callers=0 calls=0
*/
void sub_c8bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bb80ULL || rel >= 0xc8bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bb90 size=16 callers=0 calls=0
*/
void sub_c8bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bb90ULL || rel >= 0xc8bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bba0 size=336 callers=4 calls=3
   calls: sub_c628d0, sub_c70cc0, sub_c70dd0
*/
void sub_c8bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bba0ULL || rel >= 0xc8bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bcf0 size=16 callers=0 calls=0
*/
void sub_c8bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bcf0ULL || rel >= 0xc8bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bd00 size=16 callers=0 calls=0
*/
void sub_c8bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bd00ULL || rel >= 0xc8bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bd10 size=288 callers=1 calls=1
   calls: sub_13ca4c0
*/
void sub_c8bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bd10ULL || rel >= 0xc8be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8be30 size=16 callers=0 calls=0
*/
void sub_c8be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8be30ULL || rel >= 0xc8be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8be40 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c8be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8be40ULL || rel >= 0xc8beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8beb0 size=16 callers=0 calls=0
*/
void sub_c8beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8beb0ULL || rel >= 0xc8bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bec0 size=16 callers=0 calls=0
*/
void sub_c8bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bec0ULL || rel >= 0xc8bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bed0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c8bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bed0ULL || rel >= 0xc8bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8bfc0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c8bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8bfc0ULL || rel >= 0xc8c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c0b0 size=16 callers=0 calls=0
*/
void sub_c8c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c0b0ULL || rel >= 0xc8c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c0c0 size=16 callers=0 calls=0
*/
void sub_c8c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c0c0ULL || rel >= 0xc8c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c0d0 size=880 callers=1 calls=1
   calls: FieldObject__lu
*/
void sub_c8c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c0d0ULL || rel >= 0xc8c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c440 size=336 callers=0 calls=3
   calls: sub_c628d0, sub_c70cc0, sub_c70dd0
*/
void sub_c8c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c440ULL || rel >= 0xc8c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c590 size=16 callers=0 calls=0
*/
void sub_c8c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c590ULL || rel >= 0xc8c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c5a0 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c8c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c5a0ULL || rel >= 0xc8c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c610 size=16 callers=0 calls=0
*/
void sub_c8c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c610ULL || rel >= 0xc8c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c620 size=16 callers=0 calls=0
*/
void sub_c8c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c620ULL || rel >= 0xc8c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c630 size=16 callers=0 calls=0
*/
void sub_c8c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c630ULL || rel >= 0xc8c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c640 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c8c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c640ULL || rel >= 0xc8c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c730 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c8c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c730ULL || rel >= 0xc8c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c820 size=16 callers=0 calls=0
*/
void sub_c8c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c820ULL || rel >= 0xc8c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c830 size=16 callers=0 calls=0
*/
void sub_c8c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c830ULL || rel >= 0xc8c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8c840 size=1312 callers=1 calls=1
   calls: sub_c692c0
*/
void sub_c8c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c840ULL || rel >= 0xc8cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8cd60 size=272 callers=1 calls=1
   calls: sub_13ca4c0
*/
void sub_c8cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8cd60ULL || rel >= 0xc8ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ce70 size=464 callers=1 calls=7
   calls: sub_11161b0, sub_1116b50, sub_5d99d0, sub_c69f10, sub_c70cc0, sub_c70ef0, sub_c71010
*/
void sub_c8ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ce70ULL || rel >= 0xc8d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d040 size=288 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c8d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d040ULL || rel >= 0xc8d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d160 size=288 callers=0 calls=3
   calls: sub_13ca4c0, sub_5cbe50, sub_c63170
*/
void sub_c8d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d160ULL || rel >= 0xc8d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d280 size=16 callers=0 calls=0
*/
void sub_c8d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d280ULL || rel >= 0xc8d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d290 size=16 callers=0 calls=0
*/
void sub_c8d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d290ULL || rel >= 0xc8d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d2a0 size=16 callers=0 calls=0
*/
void sub_c8d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d2a0ULL || rel >= 0xc8d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d2b0 size=16 callers=0 calls=0
*/
void sub_c8d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d2b0ULL || rel >= 0xc8d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d2c0 size=16 callers=0 calls=0
*/
void sub_c8d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d2c0ULL || rel >= 0xc8d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d2d0 size=16 callers=0 calls=0
*/
void sub_c8d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d2d0ULL || rel >= 0xc8d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d2e0 size=16 callers=0 calls=0
*/
void sub_c8d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d2e0ULL || rel >= 0xc8d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d2f0 size=16 callers=0 calls=0
*/
void sub_c8d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d2f0ULL || rel >= 0xc8d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8d300 size=2640 callers=1 calls=1
   calls: FieldObject__lu
*/
void sub_c8d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8d300ULL || rel >= 0xc8dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8dd50 size=48 callers=13 calls=0
*/
void sub_c8dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8dd50ULL || rel >= 0xc8dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8dd80 size=1056 callers=4 calls=2
   calls: sub_972c70, sub_c81620
*/
void sub_c8dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8dd80ULL || rel >= 0xc8e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e1a0 size=752 callers=5 calls=2
   calls: sub_972c70, sub_ead150
*/
void sub_c8e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e1a0ULL || rel >= 0xc8e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e490 size=144 callers=2 calls=0
*/
void sub_c8e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e490ULL || rel >= 0xc8e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e520 size=736 callers=1 calls=1
   calls: sub_c692c0
*/
void sub_c8e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e520ULL || rel >= 0xc8e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e800 size=288 callers=0 calls=2
   calls: sub_c69f10, sub_c70cc0
*/
void sub_c8e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e800ULL || rel >= 0xc8e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e920 size=16 callers=0 calls=0
*/
void sub_c8e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e920ULL || rel >= 0xc8e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e930 size=16 callers=0 calls=0
*/
void sub_c8e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e930ULL || rel >= 0xc8e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e940 size=16 callers=0 calls=0
*/
void sub_c8e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e940ULL || rel >= 0xc8e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e950 size=16 callers=0 calls=0
*/
void sub_c8e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e950ULL || rel >= 0xc8e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e960 size=16 callers=0 calls=0
*/
void sub_c8e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e960ULL || rel >= 0xc8e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e970 size=16 callers=0 calls=0
*/
void sub_c8e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e970ULL || rel >= 0xc8e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e980 size=16 callers=0 calls=0
*/
void sub_c8e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e980ULL || rel >= 0xc8e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e990 size=16 callers=0 calls=0
*/
void sub_c8e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e990ULL || rel >= 0xc8e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e9a0 size=64 callers=1 calls=0
*/
void sub_c8e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e9a0ULL || rel >= 0xc8e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8e9e0 size=96 callers=6 calls=0
*/
void sub_c8e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e9e0ULL || rel >= 0xc8ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ea40 size=112 callers=0 calls=0
*/
void sub_c8ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ea40ULL || rel >= 0xc8eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8eab0 size=768 callers=1 calls=2
   calls: sub_c8ee90, sub_c8f560
*/
void sub_c8eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8eab0ULL || rel >= 0xc8edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8edb0 size=224 callers=1 calls=0
*/
void sub_c8edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8edb0ULL || rel >= 0xc8ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8ee90 size=544 callers=1 calls=1
   calls: sub_c81e60
*/
void sub_c8ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ee90ULL || rel >= 0xc8f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f0b0 size=176 callers=0 calls=0
*/
void sub_c8f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f0b0ULL || rel >= 0xc8f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f160 size=208 callers=1 calls=0
*/
void sub_c8f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f160ULL || rel >= 0xc8f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f230 size=480 callers=2 calls=1
   calls: sub_c81e60
*/
void sub_c8f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f230ULL || rel >= 0xc8f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f410 size=64 callers=4 calls=0
*/
void sub_c8f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f410ULL || rel >= 0xc8f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f450 size=64 callers=9 calls=0
*/
void sub_c8f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f450ULL || rel >= 0xc8f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f490 size=64 callers=1 calls=0
*/
void sub_c8f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f490ULL || rel >= 0xc8f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f4d0 size=144 callers=2 calls=1
   calls: sub_c8f230
*/
void sub_c8f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f4d0ULL || rel >= 0xc8f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f560 size=480 callers=2 calls=0
*/
void sub_c8f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f560ULL || rel >= 0xc8f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f740 size=96 callers=1 calls=1
   calls: sub_c8a350
*/
void sub_c8f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f740ULL || rel >= 0xc8f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f7a0 size=256 callers=0 calls=1
   calls: sub_c8a780
*/
void sub_c8f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f7a0ULL || rel >= 0xc8f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f8a0 size=80 callers=0 calls=2
   calls: sub_68da30, sub_c8a970
*/
void sub_c8f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f8a0ULL || rel >= 0xc8f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8f8f0 size=912 callers=0 calls=4
   calls: sub_13a6cd0, sub_59bee0, sub_612f70, sub_c8aa60
*/
void sub_c8f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8f8f0ULL || rel >= 0xc8fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8fc80 size=96 callers=0 calls=0
*/
void sub_c8fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8fc80ULL || rel >= 0xc8fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8fce0 size=96 callers=0 calls=0
*/
void sub_c8fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8fce0ULL || rel >= 0xc8fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8fd40 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_c8fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8fd40ULL || rel >= 0xc8fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8fdb0 size=288 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c8fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8fdb0ULL || rel >= 0xc8fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8fed0 size=288 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c8fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8fed0ULL || rel >= 0xc8fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c8fff0 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_c8fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8fff0ULL || rel >= 0xc90060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90060 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_c90060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90060ULL || rel >= 0xc900d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c900d0 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c900d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc900d0ULL || rel >= 0xc901e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c901e0 size=272 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c901e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc901e0ULL || rel >= 0xc902f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c902f0 size=176 callers=1 calls=1
   calls: sub_c692c0
*/
void sub_c902f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc902f0ULL || rel >= 0xc903a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c903a0 size=16 callers=0 calls=0
*/
void sub_c903a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc903a0ULL || rel >= 0xc903b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c903b0 size=16 callers=0 calls=0
*/
void sub_c903b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc903b0ULL || rel >= 0xc903c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c903c0 size=16 callers=0 calls=0
*/
void sub_c903c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc903c0ULL || rel >= 0xc903d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c903d0 size=16 callers=0 calls=0
*/
void sub_c903d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc903d0ULL || rel >= 0xc903e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c903e0 size=16 callers=0 calls=0
*/
void sub_c903e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc903e0ULL || rel >= 0xc903f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c903f0 size=16 callers=0 calls=0
*/
void sub_c903f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc903f0ULL || rel >= 0xc90400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90400 size=16 callers=0 calls=0
*/
void sub_c90400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90400ULL || rel >= 0xc90410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90410 size=16 callers=0 calls=0
*/
void sub_c90410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90410ULL || rel >= 0xc90420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90420 size=672 callers=1 calls=1
   calls: sub_c88aa0
*/
void sub_c90420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90420ULL || rel >= 0xc906c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c906c0 size=304 callers=1 calls=2
   calls: sub_c88dc0, sub_d10e30
*/
void sub_c906c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc906c0ULL || rel >= 0xc907f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c907f0 size=48 callers=0 calls=1
   calls: sub_c88f00
*/
void sub_c907f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc907f0ULL || rel >= 0xc90820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90820 size=688 callers=0 calls=2
   calls: sub_972c70, sub_ce8ca0
*/
void sub_c90820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90820ULL || rel >= 0xc90ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90ad0 size=144 callers=0 calls=0
*/
void sub_c90ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90ad0ULL || rel >= 0xc90b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90b60 size=16 callers=0 calls=0
*/
void sub_c90b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90b60ULL || rel >= 0xc90b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90b70 size=144 callers=0 calls=0
*/
void sub_c90b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90b70ULL || rel >= 0xc90c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90c00 size=144 callers=0 calls=0
*/
void sub_c90c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90c00ULL || rel >= 0xc90c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90c90 size=16 callers=0 calls=0
*/
void sub_c90c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90c90ULL || rel >= 0xc90ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90ca0 size=16 callers=0 calls=0
*/
void sub_c90ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90ca0ULL || rel >= 0xc90cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90cb0 size=144 callers=0 calls=0
*/
void sub_c90cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90cb0ULL || rel >= 0xc90d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90d40 size=144 callers=0 calls=0
*/
void sub_c90d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90d40ULL || rel >= 0xc90dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c90dd0 size=1360 callers=1 calls=7
   calls: sub_13a7240, sub_5cfaf0, sub_c692c0, sub_c75b20, sub_c75b60, sub_c85cc0, sub_c876c0
   ref: .gfbanm
   ref: .gfbmdl
*/
void gfbmdl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90dd0ULL || rel >= 0xc91320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91320 size=368 callers=0 calls=5
   calls: sub_96ccf0, sub_c69f10, sub_c6dcd0, sub_c70cc0, sub_c83150
*/
void sub_c91320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91320ULL || rel >= 0xc91490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91490 size=288 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c91490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91490ULL || rel >= 0xc915b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c915b0 size=32 callers=1 calls=0
*/
void sub_c915b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc915b0ULL || rel >= 0xc915d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c915d0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c915d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc915d0ULL || rel >= 0xc91620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91620 size=16 callers=0 calls=0
*/
void sub_c91620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91620ULL || rel >= 0xc91630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91630 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c91630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91630ULL || rel >= 0xc91680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91680 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c91680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91680ULL || rel >= 0xc916d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c916d0 size=16 callers=0 calls=0
*/
void sub_c916d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc916d0ULL || rel >= 0xc916e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c916e0 size=16 callers=0 calls=0
*/
void sub_c916e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc916e0ULL || rel >= 0xc916f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c916f0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c916f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc916f0ULL || rel >= 0xc91740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91740 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_c91740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91740ULL || rel >= 0xc91790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91790 size=1216 callers=1 calls=3
   calls: FieldObject__lu, sub_13ccaa0, sub_65d700
*/
void sub_c91790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91790ULL || rel >= 0xc91c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91c50 size=768 callers=1 calls=1
   calls: sub_c816a0
*/
void sub_c91c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91c50ULL || rel >= 0xc91f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c91f50 size=320 callers=1 calls=1
   calls: FieldObject__lu
*/
void sub_c91f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91f50ULL || rel >= 0xc92090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c92090 size=928 callers=0 calls=3
   calls: sub_9733f0, sub_c628d0, sub_c70dd0
*/
void sub_c92090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc92090ULL || rel >= 0xc92430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c92430 size=288 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c92430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc92430ULL || rel >= 0xc92550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c92550 size=16 callers=0 calls=0
*/
void sub_c92550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc92550ULL || rel >= 0xc92560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c92560 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c92560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc92560ULL || rel >= 0xc925d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c925d0 size=16 callers=0 calls=0
*/
void sub_c925d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc925d0ULL || rel >= 0xc925e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c925e0 size=16 callers=0 calls=0
*/
void sub_c925e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc925e0ULL || rel >= 0xc925f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c925f0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c925f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc925f0ULL || rel >= 0xc926e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c926e0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c926e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc926e0ULL || rel >= 0xc927d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c927d0 size=16 callers=0 calls=0
*/
void sub_c927d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc927d0ULL || rel >= 0xc927e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c927e0 size=16 callers=0 calls=0
*/
void sub_c927e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc927e0ULL || rel >= 0xc927f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c927f0 size=112 callers=1 calls=1
   calls: sub_c692c0
*/
void sub_c927f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc927f0ULL || rel >= 0xc92860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c92860 size=16 callers=0 calls=0
*/
void sub_c92860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc92860ULL || rel >= 0xc92870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c92870 size=16 callers=0 calls=0
*/
void sub_c92870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc92870ULL || rel >= 0xc92880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c92880 size=16 callers=0 calls=0
*/
void sub_c92880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc92880ULL || rel >= 0xc92890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c92890 size=16 callers=0 calls=0
*/
void sub_c92890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc92890ULL || rel >= 0xc928a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c928a0 size=16 callers=0 calls=0
*/
void sub_c928a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc928a0ULL || rel >= 0xc928b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c928b0 size=16 callers=0 calls=0
*/
void sub_c928b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc928b0ULL || rel >= 0xc928c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c928c0 size=16 callers=0 calls=0
*/
void sub_c928c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc928c0ULL || rel >= 0xc928d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c928d0 size=16 callers=0 calls=0
*/
void sub_c928d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc928d0ULL || rel >= 0xc928e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c928e0 size=2640 callers=1 calls=1
   calls: FieldObject__lu
*/
void sub_c928e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc928e0ULL || rel >= 0xc93330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93330 size=16 callers=0 calls=0
*/
void sub_c93330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93330ULL || rel >= 0xc93340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93340 size=16 callers=0 calls=0
*/
void sub_c93340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93340ULL || rel >= 0xc93350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93350 size=256 callers=1 calls=1
   calls: sub_c628d0
*/
void sub_c93350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93350ULL || rel >= 0xc93450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93450 size=16 callers=2 calls=0
*/
void sub_c93450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93450ULL || rel >= 0xc93460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93460 size=16 callers=0 calls=0
*/
void sub_c93460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93460ULL || rel >= 0xc93470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93470 size=16 callers=0 calls=0
*/
void sub_c93470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93470ULL || rel >= 0xc93480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93480 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c93480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93480ULL || rel >= 0xc934f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c934f0 size=16 callers=0 calls=0
*/
void sub_c934f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc934f0ULL || rel >= 0xc93500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93500 size=16 callers=0 calls=0
*/
void sub_c93500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93500ULL || rel >= 0xc93510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93510 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c93510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93510ULL || rel >= 0xc93600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93600 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c93600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93600ULL || rel >= 0xc936f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c936f0 size=16 callers=0 calls=0
*/
void sub_c936f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc936f0ULL || rel >= 0xc93700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93700 size=16 callers=0 calls=0
*/
void sub_c93700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93700ULL || rel >= 0xc93710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c93710 size=2432 callers=1 calls=5
   calls: sub_c692c0, sub_c85cc0, sub_c86c80, sub_c876c0, sub_d0c0
   ref: .gfbanm
   ref: .gfbanmcfg
*/
void gfbanm_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc93710ULL || rel >= 0xc94090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94090 size=464 callers=0 calls=5
   calls: sub_96ccf0, sub_c69f10, sub_c70cc0, sub_c70dd0, sub_ee79d0
*/
void sub_c94090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94090ULL || rel >= 0xc94260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94260 size=144 callers=0 calls=2
   calls: sub_972c70, sub_c6a2d0
*/
void sub_c94260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94260ULL || rel >= 0xc942f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c942f0 size=16 callers=0 calls=0
*/
void sub_c942f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc942f0ULL || rel >= 0xc94300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94300 size=288 callers=1 calls=1
   calls: sub_13ca4c0
*/
void sub_c94300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94300ULL || rel >= 0xc94420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94420 size=320 callers=1 calls=2
   calls: sub_1c0, sub_794330
   ref: map_door_trigger
*/
void map_door_trigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94420ULL || rel >= 0xc94560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94560 size=112 callers=0 calls=0
*/
void sub_c94560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94560ULL || rel >= 0xc945d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c945d0 size=16 callers=0 calls=0
*/
void sub_c945d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc945d0ULL || rel >= 0xc945e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c945e0 size=112 callers=0 calls=0
*/
void sub_c945e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc945e0ULL || rel >= 0xc94650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

