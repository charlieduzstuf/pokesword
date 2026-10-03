/* main functions 0084a520..00858720 (61 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0084a520 size=448 callers=1 calls=11
   calls: sub_7ee6b0, sub_7efe10, sub_7f0110, sub_803c60, sub_803d20, sub_803d60, sub_828ae0, sub_828b80, sub_82aa80, sub_840b50, sub_84a7a0
*/
void sub_84a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a520ULL || rel >= 0x84a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a6e0 size=16 callers=0 calls=0
*/
void sub_84a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a6e0ULL || rel >= 0x84a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a6f0 size=128 callers=0 calls=0
*/
void sub_84a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a6f0ULL || rel >= 0x84a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a770 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a770ULL || rel >= 0x84a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a7a0 size=176 callers=4 calls=6
   calls: sub_7ef580, sub_7f0200, sub_80dd60, sub_80ff10, sub_82a9e0, sub_82ab10
*/
void sub_84a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a7a0ULL || rel >= 0x84a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a850 size=16 callers=0 calls=0
*/
void sub_84a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a850ULL || rel >= 0x84a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a860 size=128 callers=0 calls=0
*/
void sub_84a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a860ULL || rel >= 0x84a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a8e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a8e0ULL || rel >= 0x84a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a910 size=224 callers=4 calls=7
   calls: sub_810a90, sub_82a9e0, sub_82ab10, sub_82ad10, sub_82ad30, sub_84a9f0, sub_84aac0
*/
void sub_84a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a910ULL || rel >= 0x84a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084a9f0 size=208 callers=2 calls=6
   calls: sub_7ef2b0, sub_7f0c00, sub_7fe250, sub_803560, sub_82a9c0, sub_82ab10
*/
void sub_84a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a9f0ULL || rel >= 0x84aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084aac0 size=704 callers=2 calls=12
   calls: sub_7ef2b0, sub_7fe250, sub_803560, sub_804db0, sub_80dd60, sub_828f10, sub_82a9c0, sub_82a9e0, sub_82aa10, sub_82aa80, sub_82ab10, sub_82f210
*/
void sub_84aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84aac0ULL || rel >= 0x84ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ad80 size=16 callers=0 calls=0
*/
void sub_84ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ad80ULL || rel >= 0x84ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ad90 size=128 callers=0 calls=0
*/
void sub_84ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ad90ULL || rel >= 0x84ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ae10 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ae10ULL || rel >= 0x84ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ae40 size=144 callers=1 calls=4
   calls: sub_803d40, sub_803d50, sub_803dc0, sub_82a9e0
*/
void sub_84ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ae40ULL || rel >= 0x84aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084aed0 size=16 callers=0 calls=0
*/
void sub_84aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84aed0ULL || rel >= 0x84aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084aee0 size=128 callers=0 calls=0
*/
void sub_84aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84aee0ULL || rel >= 0x84af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084af60 size=768 callers=2 calls=6
   calls: sub_7c56e0, sub_7cb030, sub_7cb070, sub_7f7690, sub_84b260, sub_84b9a0
*/
void sub_84af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84af60ULL || rel >= 0x84b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084b260 size=608 callers=1 calls=9
   calls: sub_7c56e0, sub_7cb030, sub_7eef40, sub_7eef50, sub_7ef6a0, sub_7f2580, sub_7f7b60, sub_84b4c0, sub_84b890
*/
void sub_84b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b260ULL || rel >= 0x84b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084b4c0 size=848 callers=2 calls=15
   calls: sub_76bf30, sub_76bfa0, sub_76bfb0, sub_76bfc0, sub_7c56e0, sub_7caf40, sub_7cafe0, sub_7eef40, sub_7eef50, sub_7ef5d0, sub_7f0670, sub_7fe340
   ... +3 more
*/
void sub_84b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b4c0ULL || rel >= 0x84b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084b810 size=128 callers=0 calls=0
*/
void sub_84b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b810ULL || rel >= 0x84b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084b890 size=64 callers=2 calls=1
   calls: sub_7eef40
*/
void sub_84b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b890ULL || rel >= 0x84b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084b8d0 size=80 callers=3 calls=1
   calls: sub_7cafc0
*/
void sub_84b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b8d0ULL || rel >= 0x84b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084b920 size=128 callers=0 calls=0
*/
void sub_84b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b920ULL || rel >= 0x84b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084b9a0 size=16 callers=1 calls=0
*/
void sub_84b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b9a0ULL || rel >= 0x84b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084b9b0 size=96 callers=2 calls=2
   calls: sub_1367a30, sub_7f7b00
*/
void sub_84b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84b9b0ULL || rel >= 0x84ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ba10 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ba10ULL || rel >= 0x84ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ba40 size=160 callers=2 calls=8
   calls: sub_7ee6b0, sub_7ef2b0, sub_7fe250, sub_803560, sub_828e10, sub_82a9c0, sub_82aa80, sub_83d600
*/
void sub_84ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ba40ULL || rel >= 0x84bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084bae0 size=16 callers=0 calls=0
*/
void sub_84bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84bae0ULL || rel >= 0x84baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084baf0 size=128 callers=0 calls=0
*/
void sub_84baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84baf0ULL || rel >= 0x84bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084bb70 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84bb70ULL || rel >= 0x84bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084bba0 size=192 callers=2 calls=4
   calls: sub_82aa20, sub_82ad10, sub_82b500, sub_84bc60
*/
void sub_84bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84bba0ULL || rel >= 0x84bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084bc60 size=1056 callers=1 calls=24
   calls: sub_812010, sub_8290a0, sub_8290b0, sub_8290c0, sub_8290d0, sub_8290e0, sub_8290f0, sub_82a9e0, sub_82aa20, sub_82aa60, sub_82aa80, sub_82ad10
   ... +12 more
*/
void sub_84bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84bc60ULL || rel >= 0x84c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c080 size=16 callers=0 calls=0
*/
void sub_84c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c080ULL || rel >= 0x84c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c090 size=128 callers=0 calls=0
*/
void sub_84c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c090ULL || rel >= 0x84c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c110 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c110ULL || rel >= 0x84c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c140 size=272 callers=1 calls=15
   calls: sub_7eb6b0, sub_812ec0, sub_813130, sub_813140, sub_828550, sub_828d40, sub_82aa20, sub_82aa80, sub_82ad10, sub_82ad30, sub_82b500, sub_82b7b0
   ... +3 more
*/
void sub_84c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c140ULL || rel >= 0x84c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c250 size=208 callers=1 calls=9
   calls: sub_7ee6b0, sub_7ef2b0, sub_7fe250, sub_803560, sub_810990, sub_82a9c0, sub_82a9e0, sub_84c320, sub_84c460
*/
void sub_84c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c250ULL || rel >= 0x84c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c320 size=320 callers=1 calls=11
   calls: sub_7ee6b0, sub_803a90, sub_803c60, sub_803cb0, sub_828570, sub_828ae0, sub_82aa80, sub_82c210, sub_840b50, sub_84d100, sub_84d1e0
*/
void sub_84c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c320ULL || rel >= 0x84c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c460 size=272 callers=1 calls=2
   calls: sub_7ef2b0, sub_84c570
*/
void sub_84c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c460ULL || rel >= 0x84c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c570 size=224 callers=1 calls=8
   calls: sub_7ef7f0, sub_80af70, sub_829010, sub_82aa10, sub_82aa80, sub_833200, sub_84cf30, sub_84cfd0
*/
void sub_84c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c570ULL || rel >= 0x84c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c650 size=224 callers=0 calls=11
   calls: sub_7ee6b0, sub_7ef2b0, sub_7ef750, sub_7ef760, sub_7f8960, sub_803c60, sub_803d20, sub_803d60, sub_828ae0, sub_82aa80, sub_840b50
*/
void sub_84c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c650ULL || rel >= 0x84c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c730 size=496 callers=0 calls=24
   calls: sub_7cb420, sub_7ee6b0, sub_7eef50, sub_7ef750, sub_7f79e0, sub_7f89e0, sub_7f8b70, sub_7fe1d0, sub_7fe250, sub_803790, sub_803c60, sub_803c70
   ... +12 more
*/
void sub_84c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c730ULL || rel >= 0x84c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c920 size=208 callers=0 calls=11
   calls: sub_7ee6b0, sub_7ef540, sub_7f79e0, sub_803c60, sub_803c70, sub_803d20, sub_803d60, sub_828a00, sub_82aa80, sub_82ac50, sub_84dde0
*/
void sub_84c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c920ULL || rel >= 0x84c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084c9f0 size=560 callers=0 calls=19
   calls: sub_7cb420, sub_7ee6b0, sub_7ef2b0, sub_7ef750, sub_7f79e0, sub_7f89e0, sub_7f8a70, sub_7f8b70, sub_7fe1d0, sub_803c60, sub_803c70, sub_803d20
   ... +7 more
*/
void sub_84c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c9f0ULL || rel >= 0x84cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084cc20 size=224 callers=0 calls=12
   calls: sub_7ee6b0, sub_7ef2b0, sub_7ef540, sub_7f79e0, sub_803c60, sub_803c70, sub_803d20, sub_803d60, sub_828a00, sub_82aa80, sub_82ac50, sub_84dde0
*/
void sub_84cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84cc20ULL || rel >= 0x84cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084cd00 size=208 callers=0 calls=8
   calls: sub_7ee6b0, sub_7ef750, sub_7f0160, sub_7f89e0, sub_803c60, sub_8289a0, sub_82aa80, sub_82c6b0
*/
void sub_84cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84cd00ULL || rel >= 0x84cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084cdd0 size=352 callers=0 calls=8
   calls: sub_7ee6b0, sub_7ef2b0, sub_7ef750, sub_7f0d40, sub_803c60, sub_828b30, sub_82aa80, sub_84a910
*/
void sub_84cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84cdd0ULL || rel >= 0x84cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084cf30 size=160 callers=1 calls=1
   calls: sub_82a9e0
*/
void sub_84cf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84cf30ULL || rel >= 0x84cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084cfd0 size=304 callers=1 calls=11
   calls: sub_7ee6b0, sub_7ef750, sub_7f8b70, sub_803c60, sub_803c70, sub_803d20, sub_803d60, sub_829020, sub_82aa80, sub_82ac50, sub_82fe80
*/
void sub_84cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84cfd0ULL || rel >= 0x84d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d100 size=224 callers=1 calls=9
   calls: sub_7ee6b0, sub_7ef6a0, sub_7f76c0, sub_7f87a0, sub_7f8b70, sub_803c60, sub_8288f0, sub_82aa80, sub_836520
*/
void sub_84d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d100ULL || rel >= 0x84d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d1e0 size=256 callers=1 calls=10
   calls: sub_7ee6b0, sub_7f8b70, sub_803c60, sub_803d20, sub_803d60, sub_828ac0, sub_828ae0, sub_82aa80, sub_840b50, sub_84d780
*/
void sub_84d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d1e0ULL || rel >= 0x84d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d2e0 size=16 callers=0 calls=0
*/
void sub_84d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d2e0ULL || rel >= 0x84d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d2f0 size=128 callers=0 calls=0
*/
void sub_84d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d2f0ULL || rel >= 0x84d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d370 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d370ULL || rel >= 0x84d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d3a0 size=416 callers=7 calls=15
   calls: sub_7cabc0, sub_7cac80, sub_7caed0, sub_7cb850, sub_8150c0, sub_828740, sub_82a9b0, sub_82a9d0, sub_82aa80, sub_82ac20, sub_82ac70, sub_82ad10
   ... +3 more
*/
void sub_84d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d3a0ULL || rel >= 0x84d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d540 size=384 callers=1 calls=16
   calls: sub_7cafa0, sub_7cb850, sub_7ef250, sub_7fe260, sub_802b50, sub_802b90, sub_802bc0, sub_802c10, sub_82a9b0, sub_82a9c0, sub_82ab10, sub_82ac10
   ... +4 more
*/
void sub_84d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d540ULL || rel >= 0x84d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d6c0 size=16 callers=0 calls=0
*/
void sub_84d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d6c0ULL || rel >= 0x84d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d6d0 size=128 callers=0 calls=0
*/
void sub_84d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d6d0ULL || rel >= 0x84d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d750 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d750ULL || rel >= 0x84d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d780 size=272 callers=2 calls=10
   calls: sub_7ef2b0, sub_7fe250, sub_803560, sub_80dd60, sub_828d80, sub_829360, sub_82a9c0, sub_82a9e0, sub_82aa80, sub_82ab10
*/
void sub_84d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d780ULL || rel >= 0x84d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d890 size=16 callers=0 calls=0
*/
void sub_84d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d890ULL || rel >= 0x84d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d8a0 size=128 callers=0 calls=0
*/
void sub_84d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d8a0ULL || rel >= 0x84d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d920 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d920ULL || rel >= 0x84d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084d950 size=464 callers=3 calls=18
   calls: sub_7ef2b0, sub_7f0b70, sub_7fe250, sub_803560, sub_809b90, sub_810a90, sub_810b00, sub_829010, sub_829020, sub_829130, sub_82a9c0, sub_82a9e0
   ... +6 more
*/
void sub_84d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d950ULL || rel >= 0x84db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084db20 size=16 callers=0 calls=0
*/
void sub_84db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84db20ULL || rel >= 0x84db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084db30 size=128 callers=0 calls=0
*/
void sub_84db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84db30ULL || rel >= 0x84dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084dbb0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84dbb0ULL || rel >= 0x84dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084dbe0 size=320 callers=3 calls=2
   calls: sub_82a9d0, sub_82a9e0
*/
void sub_84dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84dbe0ULL || rel >= 0x84dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084dd20 size=16 callers=0 calls=0
*/
void sub_84dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84dd20ULL || rel >= 0x84dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084dd30 size=128 callers=0 calls=0
*/
void sub_84dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84dd30ULL || rel >= 0x84ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ddb0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ddb0ULL || rel >= 0x84dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084dde0 size=240 callers=4 calls=11
   calls: sub_7ef2b0, sub_7fe250, sub_803560, sub_803d50, sub_80dd60, sub_8286e0, sub_82a9c0, sub_82a9e0, sub_82aa80, sub_82ab10, sub_83aa50
*/
void sub_84dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84dde0ULL || rel >= 0x84ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ded0 size=16 callers=0 calls=0
*/
void sub_84ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ded0ULL || rel >= 0x84dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084dee0 size=128 callers=0 calls=0
*/
void sub_84dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84dee0ULL || rel >= 0x84df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084df60 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84df60ULL || rel >= 0x84df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084df90 size=144 callers=1 calls=7
   calls: sub_7fe250, sub_803560, sub_828600, sub_8294b0, sub_82a9c0, sub_82aa80, sub_82ab10
*/
void sub_84df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84df90ULL || rel >= 0x84e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e020 size=16 callers=0 calls=0
*/
void sub_84e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e020ULL || rel >= 0x84e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e030 size=128 callers=0 calls=0
*/
void sub_84e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e030ULL || rel >= 0x84e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e0b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e0b0ULL || rel >= 0x84e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e0e0 size=400 callers=1 calls=10
   calls: sub_7fe210, sub_802470, sub_8024e0, sub_802510, sub_80ee90, sub_80f1a0, sub_80f230, sub_812890, sub_82a9c0, sub_82a9e0
*/
void sub_84e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e0e0ULL || rel >= 0x84e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e270 size=16 callers=0 calls=0
*/
void sub_84e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e270ULL || rel >= 0x84e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e280 size=128 callers=0 calls=0
*/
void sub_84e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e280ULL || rel >= 0x84e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e300 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e300ULL || rel >= 0x84e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e330 size=384 callers=3 calls=18
   calls: sub_7ee6b0, sub_80af10, sub_812ec0, sub_813130, sub_813140, sub_828550, sub_828600, sub_828d40, sub_8294b0, sub_82aa10, sub_82aa20, sub_82aa80
   ... +6 more
*/
void sub_84e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e330ULL || rel >= 0x84e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e4b0 size=16 callers=0 calls=0
*/
void sub_84e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e4b0ULL || rel >= 0x84e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e4c0 size=128 callers=0 calls=0
*/
void sub_84e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e4c0ULL || rel >= 0x84e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e540 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e540ULL || rel >= 0x84e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e570 size=544 callers=1 calls=5
   calls: sub_80f000, sub_828760, sub_82a2a0, sub_82a9e0, sub_82aa80
*/
void sub_84e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e570ULL || rel >= 0x84e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e790 size=16 callers=0 calls=0
*/
void sub_84e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e790ULL || rel >= 0x84e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e7a0 size=128 callers=0 calls=0
*/
void sub_84e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e7a0ULL || rel >= 0x84e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e820 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e820ULL || rel >= 0x84e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e850 size=128 callers=1 calls=6
   calls: sub_811560, sub_828550, sub_82a9e0, sub_82aa80, sub_84d3a0, sub_84e980
*/
void sub_84e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e850ULL || rel >= 0x84e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e8d0 size=176 callers=0 calls=11
   calls: sub_7caf50, sub_811520, sub_811550, sub_8129d0, sub_8284e0, sub_8284f0, sub_82a9b0, sub_82a9e0, sub_82aa80, sub_838a20, sub_838d10
*/
void sub_84e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e8d0ULL || rel >= 0x84e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084e980 size=432 callers=1 calls=20
   calls: sub_7ef2b0, sub_7f05a0, sub_812ec0, sub_813130, sub_813140, sub_816460, sub_816680, sub_828600, sub_828a60, sub_828d40, sub_8294b0, sub_82a9d0
   ... +8 more
*/
void sub_84e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e980ULL || rel >= 0x84eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084eb30 size=208 callers=1 calls=11
   calls: sub_7ee6b0, sub_7f7c50, sub_7fe1e0, sub_7ffaf0, sub_80b020, sub_828a60, sub_82a9c0, sub_82aa10, sub_82aa80, sub_8341a0, sub_84ec00
*/
void sub_84eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84eb30ULL || rel >= 0x84ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ec00 size=320 callers=1 calls=13
   calls: sub_7cb420, sub_7ee6b0, sub_7fe1d0, sub_829010, sub_829020, sub_829130, sub_82a9b0, sub_82a9c0, sub_82aa80, sub_82fe80, sub_833200, sub_84dbe0
   ... +1 more
*/
void sub_84ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ec00ULL || rel >= 0x84ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ed40 size=144 callers=1 calls=6
   calls: sub_803c60, sub_803c70, sub_803d20, sub_803d60, sub_80dd60, sub_82a9e0
*/
void sub_84ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ed40ULL || rel >= 0x84edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084edd0 size=16 callers=0 calls=0
*/
void sub_84edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84edd0ULL || rel >= 0x84ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ede0 size=128 callers=0 calls=0
*/
void sub_84ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ede0ULL || rel >= 0x84ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ee60 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ee60ULL || rel >= 0x84ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ee90 size=240 callers=1 calls=13
   calls: sub_7ee6b0, sub_7ef6a0, sub_7f7ff0, sub_812020, sub_812ec0, sub_813130, sub_813140, sub_828d40, sub_82a9e0, sub_82aa80, sub_82ad50, sub_82de70
   ... +1 more
*/
void sub_84ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ee90ULL || rel >= 0x84ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084ef80 size=288 callers=1 calls=8
   calls: sub_7cb490, sub_7ee6b0, sub_803c60, sub_803d20, sub_803d60, sub_8289a0, sub_82aa80, sub_82c6b0
*/
void sub_84ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ef80ULL || rel >= 0x84f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f0a0 size=16 callers=0 calls=0
*/
void sub_84f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f0a0ULL || rel >= 0x84f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f0b0 size=128 callers=0 calls=0
*/
void sub_84f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f0b0ULL || rel >= 0x84f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f130 size=16 callers=1 calls=0
*/
void sub_84f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f130ULL || rel >= 0x84f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f140 size=16 callers=5 calls=0
*/
void sub_84f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f140ULL || rel >= 0x84f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f150 size=64 callers=1 calls=0
*/
void sub_84f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f150ULL || rel >= 0x84f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f190 size=704 callers=2 calls=1
   calls: sub_803390
*/
void sub_84f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f190ULL || rel >= 0x84f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f450 size=16 callers=5 calls=0
*/
void sub_84f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f450ULL || rel >= 0x84f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f460 size=128 callers=1 calls=1
   calls: sub_7cb660
*/
void sub_84f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f460ULL || rel >= 0x84f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f4e0 size=128 callers=1 calls=1
   calls: sub_7cb660
*/
void sub_84f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f4e0ULL || rel >= 0x84f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f560 size=16 callers=2 calls=0
*/
void sub_84f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f560ULL || rel >= 0x84f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f570 size=32 callers=2 calls=0
*/
void sub_84f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f570ULL || rel >= 0x84f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f590 size=128 callers=0 calls=0
*/
void sub_84f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f590ULL || rel >= 0x84f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f610 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f610ULL || rel >= 0x84f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f640 size=208 callers=1 calls=16
   calls: sub_7e8f10, sub_7e9550, sub_7fe260, sub_7fe290, sub_800610, sub_802780, sub_811fb0, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa00, sub_82aa60
   ... +4 more
*/
void sub_84f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f640ULL || rel >= 0x84f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f710 size=160 callers=1 calls=8
   calls: sub_7f05a0, sub_804200, sub_804480, sub_80f6c0, sub_80f7a0, sub_82a9b0, sub_82a9c0, sub_82a9e0
*/
void sub_84f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f710ULL || rel >= 0x84f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f7b0 size=128 callers=1 calls=6
   calls: sub_804200, sub_804480, sub_810450, sub_82a9b0, sub_82a9c0, sub_82a9e0
*/
void sub_84f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f7b0ULL || rel >= 0x84f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f830 size=144 callers=1 calls=8
   calls: sub_7ee6b0, sub_804200, sub_804480, sub_82a9b0, sub_82a9c0, sub_82aa20, sub_82b520, sub_82b830
*/
void sub_84f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f830ULL || rel >= 0x84f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f8c0 size=16 callers=0 calls=0
*/
void sub_84f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f8c0ULL || rel >= 0x84f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f8d0 size=128 callers=0 calls=0
*/
void sub_84f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f8d0ULL || rel >= 0x84f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f950 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f950ULL || rel >= 0x84f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f980 size=48 callers=1 calls=1
   calls: sub_82a9e0
*/
void sub_84f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f980ULL || rel >= 0x84f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f9b0 size=16 callers=0 calls=0
*/
void sub_84f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f9b0ULL || rel >= 0x84f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084f9c0 size=128 callers=0 calls=0
*/
void sub_84f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f9c0ULL || rel >= 0x84fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fa40 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fa40ULL || rel >= 0x84fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fa70 size=176 callers=2 calls=11
   calls: sub_7fe250, sub_7fe260, sub_802b90, sub_802cc0, sub_8115a0, sub_82a9c0, sub_82a9e0, sub_82aa20, sub_82aa60, sub_82b500, sub_84f190
*/
void sub_84fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fa70ULL || rel >= 0x84fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fb20 size=16 callers=0 calls=0
*/
void sub_84fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fb20ULL || rel >= 0x84fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fb30 size=128 callers=0 calls=0
*/
void sub_84fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fb30ULL || rel >= 0x84fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fbb0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fbb0ULL || rel >= 0x84fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fbe0 size=288 callers=1 calls=22
   calls: sub_7e9550, sub_8139d0, sub_828e80, sub_829040, sub_829050, sub_829100, sub_82a9d0, sub_82aa00, sub_82aa20, sub_82aa50, sub_82aa60, sub_82aa80
   ... +10 more
*/
void sub_84fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fbe0ULL || rel >= 0x84fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fd00 size=16 callers=0 calls=0
*/
void sub_84fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fd00ULL || rel >= 0x84fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fd10 size=128 callers=0 calls=0
*/
void sub_84fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fd10ULL || rel >= 0x84fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fd90 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_84fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fd90ULL || rel >= 0x84fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fdc0 size=48 callers=4 calls=1
   calls: sub_84fdf0
*/
void sub_84fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fdc0ULL || rel >= 0x84fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0084fdf0 size=528 callers=1 calls=4
   calls: sub_803c60, sub_82ac20, sub_82cd90, sub_850120
*/
void sub_84fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84fdf0ULL || rel >= 0x850000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850000 size=288 callers=0 calls=7
   calls: sub_7ee6b0, sub_803c60, sub_82cb80, sub_82ccb0, sub_82cd90, sub_82ce80, sub_850120
*/
void sub_850000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850000ULL || rel >= 0x850120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850120 size=496 callers=6 calls=10
   calls: sub_7fc430, sub_7fe2a0, sub_8025a0, sub_82a9c0, sub_82aa90, sub_82ab10, sub_82ac20, sub_82d790, sub_850500, sub_850590
*/
void sub_850120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850120ULL || rel >= 0x850310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850310 size=16 callers=0 calls=0
*/
void sub_850310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850310ULL || rel >= 0x850320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850320 size=128 callers=0 calls=0
*/
void sub_850320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850320ULL || rel >= 0x8503a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008503a0 size=64 callers=6 calls=0
*/
void sub_8503a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8503a0ULL || rel >= 0x8503e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008503e0 size=32 callers=1 calls=0
*/
void sub_8503e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8503e0ULL || rel >= 0x850400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850400 size=32 callers=5 calls=0
*/
void sub_850400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850400ULL || rel >= 0x850420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850420 size=32 callers=1 calls=0
*/
void sub_850420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850420ULL || rel >= 0x850440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850440 size=32 callers=1 calls=0
*/
void sub_850440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850440ULL || rel >= 0x850460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850460 size=32 callers=3 calls=0
*/
void sub_850460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850460ULL || rel >= 0x850480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850480 size=32 callers=1 calls=0
*/
void sub_850480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850480ULL || rel >= 0x8504a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008504a0 size=48 callers=3 calls=0
*/
void sub_8504a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8504a0ULL || rel >= 0x8504d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008504d0 size=32 callers=6 calls=0
*/
void sub_8504d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8504d0ULL || rel >= 0x8504f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008504f0 size=16 callers=2 calls=0
*/
void sub_8504f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8504f0ULL || rel >= 0x850500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850500 size=32 callers=1 calls=0
*/
void sub_850500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850500ULL || rel >= 0x850520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850520 size=32 callers=2 calls=0
*/
void sub_850520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850520ULL || rel >= 0x850540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850540 size=32 callers=1 calls=0
*/
void sub_850540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850540ULL || rel >= 0x850560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850560 size=16 callers=31 calls=0
*/
void sub_850560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850560ULL || rel >= 0x850570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850570 size=32 callers=2 calls=0
*/
void sub_850570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850570ULL || rel >= 0x850590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850590 size=16 callers=5 calls=0
*/
void sub_850590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850590ULL || rel >= 0x8505a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008505a0 size=32 callers=1 calls=0
*/
void sub_8505a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8505a0ULL || rel >= 0x8505c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008505c0 size=32 callers=1 calls=0
*/
void sub_8505c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8505c0ULL || rel >= 0x8505e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008505e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8505e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8505e0ULL || rel >= 0x850610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850610 size=48 callers=4 calls=1
   calls: sub_850640
*/
void sub_850610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850610ULL || rel >= 0x850640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850640 size=192 callers=1 calls=7
   calls: sub_7ef300, sub_828490, sub_82aa80, sub_82ccb0, sub_82ce80, sub_82d950, sub_83c2b0
*/
void sub_850640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850640ULL || rel >= 0x850700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850700 size=192 callers=0 calls=4
   calls: sub_7f7690, sub_82ccb0, sub_82ce80, sub_82cea0
*/
void sub_850700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850700ULL || rel >= 0x8507c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008507c0 size=16 callers=0 calls=0
*/
void sub_8507c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8507c0ULL || rel >= 0x8507d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008507d0 size=128 callers=0 calls=0
*/
void sub_8507d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8507d0ULL || rel >= 0x850850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850850 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_850850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850850ULL || rel >= 0x850880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850880 size=336 callers=1 calls=24
   calls: sub_7fe250, sub_7fe260, sub_802b90, sub_807cd0, sub_8115a0, sub_812bd0, sub_828450, sub_828550, sub_82a9c0, sub_82a9e0, sub_82aa10, sub_82aa20
   ... +12 more
*/
void sub_850880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850880ULL || rel >= 0x8509d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008509d0 size=208 callers=1 calls=8
   calls: sub_7ef2b0, sub_812c50, sub_828dd0, sub_82aa50, sub_82aa80, sub_82ccb0, sub_82ce80, sub_850c30
*/
void sub_8509d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8509d0ULL || rel >= 0x850aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850aa0 size=208 callers=1 calls=8
   calls: sub_7ef2b0, sub_812c50, sub_828dd0, sub_82aa50, sub_82aa80, sub_82ccb0, sub_82ce80, sub_850c30
*/
void sub_850aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850aa0ULL || rel >= 0x850b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850b70 size=16 callers=0 calls=0
*/
void sub_850b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850b70ULL || rel >= 0x850b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850b80 size=128 callers=0 calls=0
*/
void sub_850b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850b80ULL || rel >= 0x850c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850c00 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_850c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850c00ULL || rel >= 0x850c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850c30 size=352 callers=4 calls=16
   calls: sub_7cae30, sub_7cb490, sub_7ee6b0, sub_7fe250, sub_803560, sub_803760, sub_80ecb0, sub_8110f0, sub_828de0, sub_828e00, sub_82a9b0, sub_82a9c0
   ... +4 more
*/
void sub_850c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850c30ULL || rel >= 0x850d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850d90 size=16 callers=0 calls=0
*/
void sub_850d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850d90ULL || rel >= 0x850da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850da0 size=128 callers=0 calls=0
*/
void sub_850da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850da0ULL || rel >= 0x850e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850e20 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_850e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850e20ULL || rel >= 0x850e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850e50 size=160 callers=1 calls=11
   calls: sub_7cb850, sub_828720, sub_829100, sub_82a9b0, sub_82aa20, sub_82aa80, sub_82ab40, sub_82b500, sub_82b7a0, sub_846330, sub_8476c0
*/
void sub_850e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850e50ULL || rel >= 0x850ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850ef0 size=16 callers=0 calls=0
*/
void sub_850ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850ef0ULL || rel >= 0x850f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850f00 size=128 callers=0 calls=0
*/
void sub_850f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850f00ULL || rel >= 0x850f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850f80 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_850f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850f80ULL || rel >= 0x850fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00850fb0 size=464 callers=2 calls=22
   calls: sub_7ee6b0, sub_7ef2b0, sub_7ef540, sub_7f09c0, sub_7f7ae0, sub_7fe250, sub_803560, sub_809c20, sub_80c050, sub_8123d0, sub_812420, sub_828440
   ... +10 more
*/
void sub_850fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x850fb0ULL || rel >= 0x851180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851180 size=16 callers=0 calls=0
*/
void sub_851180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851180ULL || rel >= 0x851190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851190 size=128 callers=0 calls=0
*/
void sub_851190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851190ULL || rel >= 0x851210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851210 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_851210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851210ULL || rel >= 0x851240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851240 size=96 callers=3 calls=4
   calls: sub_786d90, sub_80f810, sub_82a9e0, sub_82aa10
*/
void sub_851240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851240ULL || rel >= 0x8512a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008512a0 size=16 callers=0 calls=0
*/
void sub_8512a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8512a0ULL || rel >= 0x8512b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008512b0 size=128 callers=0 calls=0
*/
void sub_8512b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8512b0ULL || rel >= 0x851330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851330 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_851330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851330ULL || rel >= 0x851360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851360 size=464 callers=1 calls=27
   calls: sub_7ee6b0, sub_7ee810, sub_7f3880, sub_811a60, sub_828550, sub_828e70, sub_828eb0, sub_828ec0, sub_82a9e0, sub_82aa20, sub_82aa80, sub_82aae0
   ... +15 more
*/
void sub_851360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851360ULL || rel >= 0x851530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851530 size=16 callers=0 calls=0
*/
void sub_851530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851530ULL || rel >= 0x851540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851540 size=128 callers=0 calls=0
*/
void sub_851540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851540ULL || rel >= 0x8515c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008515c0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8515c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8515c0ULL || rel >= 0x8515f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008515f0 size=320 callers=2 calls=18
   calls: sub_7ee6b0, sub_7ee810, sub_7ef2b0, sub_7f0aa0, sub_7f1400, sub_7f3830, sub_7f3880, sub_7fcc00, sub_80e1b0, sub_80f370, sub_8119e0, sub_828ec0
   ... +6 more
*/
void sub_8515f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8515f0ULL || rel >= 0x851730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851730 size=160 callers=1 calls=6
   calls: sub_7c56e0, sub_7ee6b0, sub_811c50, sub_82a9b0, sub_82a9e0, sub_82ac60
*/
void sub_851730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851730ULL || rel >= 0x8517d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008517d0 size=16 callers=0 calls=0
*/
void sub_8517d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8517d0ULL || rel >= 0x8517e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008517e0 size=128 callers=0 calls=0
*/
void sub_8517e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8517e0ULL || rel >= 0x851860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851860 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_851860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851860ULL || rel >= 0x851890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851890 size=352 callers=3 calls=21
   calls: sub_7cb490, sub_7ee6b0, sub_7ee810, sub_7f0aa0, sub_7f1400, sub_7f3860, sub_7f80f0, sub_7fe1d0, sub_7fe2a0, sub_8025a0, sub_803c60, sub_828490
   ... +9 more
*/
void sub_851890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851890ULL || rel >= 0x8519f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008519f0 size=16 callers=0 calls=0
*/
void sub_8519f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8519f0ULL || rel >= 0x851a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851a00 size=128 callers=0 calls=0
*/
void sub_851a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851a00ULL || rel >= 0x851a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851a80 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_851a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851a80ULL || rel >= 0x851ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851ab0 size=640 callers=1 calls=28
   calls: sub_7c56e0, sub_7cab80, sub_7ee6b0, sub_7ef2b0, sub_7ef4c0, sub_7f0ba0, sub_7f1400, sub_7fe250, sub_803560, sub_807810, sub_8078a0, sub_80f730
   ... +16 more
*/
void sub_851ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851ab0ULL || rel >= 0x851d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851d30 size=128 callers=0 calls=2
   calls: sub_82a9e0, sub_82ae40
*/
void sub_851d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851d30ULL || rel >= 0x851db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851db0 size=480 callers=1 calls=23
   calls: sub_7ee6b0, sub_812bd0, sub_812c50, sub_828450, sub_8284b0, sub_828720, sub_828770, sub_828d50, sub_828d60, sub_828dd0, sub_828ee0, sub_82aa20
   ... +11 more
*/
void sub_851db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851db0ULL || rel >= 0x851f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851f90 size=16 callers=0 calls=0
*/
void sub_851f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851f90ULL || rel >= 0x851fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00851fa0 size=128 callers=0 calls=0
*/
void sub_851fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x851fa0ULL || rel >= 0x852020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852020 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_852020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852020ULL || rel >= 0x852050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852050 size=480 callers=1 calls=22
   calls: sub_7ee6b0, sub_7ee810, sub_7f0aa0, sub_7f3700, sub_7f76c0, sub_7fc830, sub_803c60, sub_80e1b0, sub_80f470, sub_80f6c0, sub_811990, sub_811c10
   ... +10 more
*/
void sub_852050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852050ULL || rel >= 0x852230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852230 size=288 callers=1 calls=9
   calls: sub_7ee800, sub_7ee810, sub_7f0aa0, sub_7f0ba0, sub_7f36f0, sub_7f3720, sub_7fc830, sub_82ac50, sub_82aca0
*/
void sub_852230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852230ULL || rel >= 0x852350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852350 size=208 callers=1 calls=9
   calls: sub_7ee6b0, sub_804200, sub_804480, sub_828b60, sub_82a9b0, sub_82a9c0, sub_82aa80, sub_82abe0, sub_852610
*/
void sub_852350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852350ULL || rel >= 0x852420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852420 size=16 callers=0 calls=0
*/
void sub_852420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852420ULL || rel >= 0x852430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852430 size=128 callers=0 calls=0
*/
void sub_852430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852430ULL || rel >= 0x8524b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008524b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8524b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8524b0ULL || rel >= 0x8524e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008524e0 size=112 callers=2 calls=5
   calls: sub_7ee6b0, sub_7ef2b0, sub_811320, sub_82a9e0, sub_82ab10
*/
void sub_8524e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8524e0ULL || rel >= 0x852550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852550 size=16 callers=0 calls=0
*/
void sub_852550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852550ULL || rel >= 0x852560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852560 size=128 callers=0 calls=0
*/
void sub_852560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852560ULL || rel >= 0x8525e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008525e0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8525e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8525e0ULL || rel >= 0x852610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852610 size=144 callers=2 calls=4
   calls: sub_7ef2b0, sub_8113c0, sub_82a9e0, sub_82ab10
*/
void sub_852610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852610ULL || rel >= 0x8526a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008526a0 size=16 callers=0 calls=0
*/
void sub_8526a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8526a0ULL || rel >= 0x8526b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008526b0 size=128 callers=0 calls=0
*/
void sub_8526b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8526b0ULL || rel >= 0x852730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852730 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_852730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852730ULL || rel >= 0x852760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852760 size=208 callers=1 calls=11
   calls: sub_7ee6b0, sub_7ee810, sub_7f36f0, sub_7fc8d0, sub_80e1b0, sub_80f370, sub_811bd0, sub_82a9e0, sub_82aae0, sub_852830, sub_852910
*/
void sub_852760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852760ULL || rel >= 0x852830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852830 size=224 callers=1 calls=5
   calls: sub_7ee6b0, sub_828f10, sub_82aa80, sub_82aae0, sub_82f210
*/
void sub_852830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852830ULL || rel >= 0x852910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852910 size=224 callers=1 calls=11
   calls: sub_7efe00, sub_7efef0, sub_7f7690, sub_7f80f0, sub_7fe1d0, sub_804ad0, sub_82a9b0, sub_82a9c0, sub_82aa10, sub_82aae0, sub_852aa0
*/
void sub_852910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852910ULL || rel >= 0x8529f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008529f0 size=176 callers=0 calls=9
   calls: sub_7ee6b0, sub_7ee810, sub_7f3700, sub_7fc7f0, sub_7fc820, sub_7fc8f0, sub_811c50, sub_82a9e0, sub_82aae0
*/
void sub_8529f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8529f0ULL || rel >= 0x852aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852aa0 size=288 callers=1 calls=16
   calls: sub_7ee6b0, sub_7eef50, sub_7fe2a0, sub_8025a0, sub_803c60, sub_8124b0, sub_812570, sub_812ec0, sub_812f00, sub_829180, sub_82a9c0, sub_82a9e0
   ... +4 more
*/
void sub_852aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852aa0ULL || rel >= 0x852bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852bc0 size=16 callers=0 calls=0
*/
void sub_852bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852bc0ULL || rel >= 0x852bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852bd0 size=128 callers=0 calls=0
*/
void sub_852bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852bd0ULL || rel >= 0x852c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852c50 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_852c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852c50ULL || rel >= 0x852c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852c80 size=160 callers=2 calls=9
   calls: sub_7cb350, sub_811070, sub_828eb0, sub_82a9b0, sub_82a9e0, sub_82aa80, sub_8515f0, sub_852d20, sub_852dd0
*/
void sub_852c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852c80ULL || rel >= 0x852d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852d20 size=176 callers=1 calls=9
   calls: BATTLE_DAIMAX, sub_7ee6c0, sub_804200, sub_804480, sub_82a9b0, sub_82a9c0, sub_82aae0, sub_82ac50, sub_82ad60
*/
void sub_852d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852d20ULL || rel >= 0x852dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852dd0 size=160 callers=2 calls=8
   calls: sub_7c56e0, sub_7fe2d0, sub_800990, sub_800ae0, sub_800c00, sub_82a9b0, sub_82a9c0, sub_82a9e0
*/
void sub_852dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852dd0ULL || rel >= 0x852e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852e70 size=16 callers=0 calls=0
*/
void sub_852e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852e70ULL || rel >= 0x852e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852e80 size=128 callers=0 calls=0
*/
void sub_852e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852e80ULL || rel >= 0x852f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852f00 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_852f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852f00ULL || rel >= 0x852f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852f30 size=16 callers=0 calls=0
*/
void sub_852f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852f30ULL || rel >= 0x852f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852f40 size=128 callers=0 calls=0
*/
void sub_852f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852f40ULL || rel >= 0x852fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852fc0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_852fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852fc0ULL || rel >= 0x852ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00852ff0 size=32 callers=1 calls=1
   calls: sub_82a9e0
*/
void sub_852ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x852ff0ULL || rel >= 0x853010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853010 size=16 callers=0 calls=0
*/
void sub_853010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853010ULL || rel >= 0x853020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853020 size=128 callers=0 calls=0
*/
void sub_853020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853020ULL || rel >= 0x8530a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008530a0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8530a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8530a0ULL || rel >= 0x8530d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008530d0 size=1232 callers=1 calls=2
   calls: sub_80f280, sub_82a9e0
*/
void sub_8530d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8530d0ULL || rel >= 0x8535a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008535a0 size=16 callers=0 calls=0
*/
void sub_8535a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8535a0ULL || rel >= 0x8535b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008535b0 size=128 callers=0 calls=0
*/
void sub_8535b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8535b0ULL || rel >= 0x853630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853630 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_853630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853630ULL || rel >= 0x853660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853660 size=512 callers=1 calls=24
   calls: sub_7ee6b0, sub_7ee6c0, sub_7eef50, sub_7f0b70, sub_7f29c0, sub_7f29e0, sub_7f31a0, sub_806d90, sub_80dd60, sub_810a90, sub_810b00, sub_8120f0
   ... +12 more
*/
void sub_853660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853660ULL || rel >= 0x853860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853860 size=16 callers=0 calls=0
*/
void sub_853860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853860ULL || rel >= 0x853870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853870 size=128 callers=0 calls=0
*/
void sub_853870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853870ULL || rel >= 0x8538f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008538f0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8538f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8538f0ULL || rel >= 0x853920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853920 size=96 callers=1 calls=4
   calls: sub_829000, sub_82aa80, sub_82ab10, sub_83a760
*/
void sub_853920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853920ULL || rel >= 0x853980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853980 size=16 callers=0 calls=0
*/
void sub_853980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853980ULL || rel >= 0x853990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853990 size=128 callers=0 calls=0
*/
void sub_853990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853990ULL || rel >= 0x853a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853a10 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_853a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853a10ULL || rel >= 0x853a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853a40 size=352 callers=1 calls=19
   calls: sub_7caf50, sub_807cd0, sub_812bd0, sub_828450, sub_8284e0, sub_8288d0, sub_82a9b0, sub_82aa10, sub_82aa20, sub_82aa80, sub_82b500, sub_82b790
   ... +7 more
*/
void sub_853a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853a40ULL || rel >= 0x853ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853ba0 size=160 callers=1 calls=7
   calls: sub_7caf60, sub_7f8810, sub_803c60, sub_828a20, sub_82a9b0, sub_82aa80, sub_82b8b0
*/
void sub_853ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853ba0ULL || rel >= 0x853c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853c40 size=192 callers=5 calls=9
   calls: sub_7cb2c0, sub_7ef2b0, sub_7fc450, sub_812c50, sub_828df0, sub_82a9b0, sub_82aa80, sub_82ac20, sub_83d020
*/
void sub_853c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853c40ULL || rel >= 0x853d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853d00 size=16 callers=0 calls=0
*/
void sub_853d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853d00ULL || rel >= 0x853d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853d10 size=128 callers=0 calls=0
*/
void sub_853d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853d10ULL || rel >= 0x853d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853d90 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_853d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853d90ULL || rel >= 0x853dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853dc0 size=160 callers=1 calls=6
   calls: sub_80b390, sub_810450, sub_82a9e0, sub_82aa10, sub_82ccb0, sub_82ce80
*/
void sub_853dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853dc0ULL || rel >= 0x853e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853e60 size=16 callers=0 calls=0
*/
void sub_853e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853e60ULL || rel >= 0x853e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853e70 size=128 callers=0 calls=0
*/
void sub_853e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853e70ULL || rel >= 0x853ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853ef0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_853ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853ef0ULL || rel >= 0x853f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853f20 size=160 callers=1 calls=3
   calls: sub_7cb360, sub_82a9b0, sub_853fc0
*/
void sub_853f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853f20ULL || rel >= 0x853fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00853fc0 size=256 callers=1 calls=3
   calls: sub_8128e0, sub_812930, sub_82a9e0
*/
void sub_853fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x853fc0ULL || rel >= 0x8540c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008540c0 size=16 callers=0 calls=0
*/
void sub_8540c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8540c0ULL || rel >= 0x8540d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008540d0 size=128 callers=0 calls=0
*/
void sub_8540d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8540d0ULL || rel >= 0x854150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854150 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_854150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854150ULL || rel >= 0x854180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854180 size=160 callers=1 calls=7
   calls: sub_7ef2b0, sub_7fe250, sub_803560, sub_811400, sub_82a9c0, sub_82a9e0, sub_82ab10
*/
void sub_854180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854180ULL || rel >= 0x854220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854220 size=16 callers=0 calls=0
*/
void sub_854220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854220ULL || rel >= 0x854230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854230 size=128 callers=0 calls=0
*/
void sub_854230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854230ULL || rel >= 0x8542b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008542b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8542b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8542b0ULL || rel >= 0x8542e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008542e0 size=256 callers=1 calls=11
   calls: sub_7ee6b0, sub_7ef2b0, sub_7fe250, sub_803560, sub_80fb90, sub_828570, sub_82a9c0, sub_82a9e0, sub_82aa80, sub_82ab10, sub_82c210
*/
void sub_8542e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8542e0ULL || rel >= 0x8543e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008543e0 size=16 callers=0 calls=0
*/
void sub_8543e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8543e0ULL || rel >= 0x8543f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008543f0 size=128 callers=0 calls=0
*/
void sub_8543f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8543f0ULL || rel >= 0x854470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854470 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_854470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854470ULL || rel >= 0x8544a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008544a0 size=368 callers=1 calls=16
   calls: sub_780ec0, sub_7ed220, sub_7ee6b0, sub_7ee6c0, sub_7fe1d0, sub_804ad0, sub_805000, sub_828a60, sub_829290, sub_82a9c0, sub_82aa10, sub_82aa80
   ... +4 more
*/
void sub_8544a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8544a0ULL || rel >= 0x854610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854610 size=16 callers=0 calls=0
*/
void sub_854610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854610ULL || rel >= 0x854620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854620 size=128 callers=0 calls=0
*/
void sub_854620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854620ULL || rel >= 0x8546a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008546a0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8546a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8546a0ULL || rel >= 0x8546d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008546d0 size=560 callers=2 calls=25
   calls: sub_7c9b60, sub_7cb490, sub_7cbf20, sub_7e8e10, sub_7ed220, sub_7ee6b0, sub_7eef50, sub_7fe1d0, sub_7fe250, sub_803790, sub_804ad0, sub_8124b0
   ... +13 more
*/
void sub_8546d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8546d0ULL || rel >= 0x854900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854900 size=16 callers=0 calls=0
*/
void sub_854900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854900ULL || rel >= 0x854910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854910 size=128 callers=0 calls=0
*/
void sub_854910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854910ULL || rel >= 0x854990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854990 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_854990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854990ULL || rel >= 0x8549c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008549c0 size=256 callers=1 calls=6
   calls: sub_7fe250, sub_803560, sub_80dd60, sub_810750, sub_82a9c0, sub_82a9e0
*/
void sub_8549c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8549c0ULL || rel >= 0x854ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854ac0 size=16 callers=0 calls=0
*/
void sub_854ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854ac0ULL || rel >= 0x854ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854ad0 size=128 callers=0 calls=0
*/
void sub_854ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854ad0ULL || rel >= 0x854b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854b50 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_854b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854b50ULL || rel >= 0x854b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854b80 size=512 callers=1 calls=18
   calls: sub_7cb490, sub_7ee6b0, sub_7f09c0, sub_80c9e0, sub_80dd60, sub_810a90, sub_810b00, sub_8284d0, sub_828570, sub_82a9b0, sub_82a9e0, sub_82aa10
   ... +6 more
*/
void sub_854b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854b80ULL || rel >= 0x854d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854d80 size=16 callers=0 calls=0
*/
void sub_854d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854d80ULL || rel >= 0x854d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854d90 size=128 callers=0 calls=0
*/
void sub_854d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854d90ULL || rel >= 0x854e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854e10 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_854e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854e10ULL || rel >= 0x854e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854e40 size=384 callers=1 calls=11
   calls: sub_7cb490, sub_7ee6b0, sub_7ef2b0, sub_807a20, sub_80dd60, sub_811780, sub_8117d0, sub_82a9e0, sub_82aa10, sub_82ab10, sub_82abb0
*/
void sub_854e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854e40ULL || rel >= 0x854fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854fc0 size=16 callers=0 calls=0
*/
void sub_854fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854fc0ULL || rel >= 0x854fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00854fd0 size=128 callers=0 calls=0
*/
void sub_854fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x854fd0ULL || rel >= 0x855050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855050 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855050ULL || rel >= 0x855080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855080 size=112 callers=1 calls=5
   calls: sub_7f2580, sub_7f7700, sub_80d190, sub_82aa10, sub_82ab10
*/
void sub_855080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855080ULL || rel >= 0x8550f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008550f0 size=16 callers=0 calls=0
*/
void sub_8550f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8550f0ULL || rel >= 0x855100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855100 size=128 callers=0 calls=0
*/
void sub_855100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855100ULL || rel >= 0x855180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855180 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855180ULL || rel >= 0x8551b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008551b0 size=64 callers=1 calls=2
   calls: sub_8107a0, sub_82a9e0
*/
void sub_8551b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8551b0ULL || rel >= 0x8551f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008551f0 size=16 callers=0 calls=0
*/
void sub_8551f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8551f0ULL || rel >= 0x855200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855200 size=128 callers=0 calls=0
*/
void sub_855200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855200ULL || rel >= 0x855280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855280 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855280ULL || rel >= 0x8552b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008552b0 size=496 callers=1 calls=29
   calls: sub_8139d0, sub_8286a0, sub_828810, sub_828ea0, sub_829040, sub_829050, sub_829090, sub_829100, sub_829110, sub_82a9d0, sub_82aa20, sub_82aa50
   ... +17 more
*/
void sub_8552b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8552b0ULL || rel >= 0x8554a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008554a0 size=16 callers=0 calls=0
*/
void sub_8554a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8554a0ULL || rel >= 0x8554b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008554b0 size=128 callers=0 calls=0
*/
void sub_8554b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8554b0ULL || rel >= 0x855530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855530 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855530ULL || rel >= 0x855560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855560 size=288 callers=2 calls=11
   calls: sub_828e60, sub_829040, sub_82aa20, sub_82aa80, sub_82b500, sub_82b7b0, sub_82cde0, sub_82ce30, sub_850610, sub_851360, sub_855680
*/
void sub_855560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855560ULL || rel >= 0x855680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855680 size=112 callers=1 calls=7
   calls: sub_7ee810, sub_7f3880, sub_828ec0, sub_82aa80, sub_82aae0, sub_82ac50, sub_851890
*/
void sub_855680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855680ULL || rel >= 0x8556f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008556f0 size=16 callers=0 calls=0
*/
void sub_8556f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8556f0ULL || rel >= 0x855700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855700 size=128 callers=0 calls=0
*/
void sub_855700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855700ULL || rel >= 0x855780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855780 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855780ULL || rel >= 0x8557b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008557b0 size=112 callers=1 calls=4
   calls: sub_7ef220, sub_7ef2b0, sub_82ab10, sub_855820
*/
void sub_8557b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8557b0ULL || rel >= 0x855820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855820 size=224 callers=1 calls=8
   calls: sub_80dd60, sub_8104c0, sub_8104d0, sub_810a90, sub_810b00, sub_82a9b0, sub_82a9e0, sub_82ab10
*/
void sub_855820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855820ULL || rel >= 0x855900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855900 size=16 callers=0 calls=0
*/
void sub_855900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855900ULL || rel >= 0x855910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855910 size=128 callers=0 calls=0
*/
void sub_855910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855910ULL || rel >= 0x855990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855990 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855990ULL || rel >= 0x8559c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008559c0 size=224 callers=1 calls=11
   calls: sub_810a90, sub_810b00, sub_828730, sub_82a9e0, sub_82aa20, sub_82aa80, sub_82ab10, sub_82b500, sub_82b7a0, sub_846500, sub_855b30
*/
void sub_8559c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8559c0ULL || rel >= 0x855aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855aa0 size=16 callers=0 calls=0
*/
void sub_855aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855aa0ULL || rel >= 0x855ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855ab0 size=128 callers=0 calls=0
*/
void sub_855ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855ab0ULL || rel >= 0x855b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855b30 size=64 callers=2 calls=1
   calls: sub_7f0b80
*/
void sub_855b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855b30ULL || rel >= 0x855b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855b70 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855b70ULL || rel >= 0x855ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855ba0 size=80 callers=1 calls=2
   calls: sub_82a9e0, sub_82ab10
*/
void sub_855ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855ba0ULL || rel >= 0x855bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855bf0 size=16 callers=0 calls=0
*/
void sub_855bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855bf0ULL || rel >= 0x855c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855c00 size=128 callers=0 calls=0
*/
void sub_855c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855c00ULL || rel >= 0x855c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855c80 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855c80ULL || rel >= 0x855cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855cb0 size=64 callers=1 calls=1
   calls: sub_82a9e0
*/
void sub_855cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855cb0ULL || rel >= 0x855cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855cf0 size=16 callers=0 calls=0
*/
void sub_855cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855cf0ULL || rel >= 0x855d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855d00 size=128 callers=0 calls=0
*/
void sub_855d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855d00ULL || rel >= 0x855d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855d80 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855d80ULL || rel >= 0x855db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855db0 size=176 callers=1 calls=8
   calls: sub_7ef4c0, sub_7f2e70, sub_80a660, sub_810600, sub_82a9e0, sub_82aa10, sub_82ab10, sub_82abb0
*/
void sub_855db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855db0ULL || rel >= 0x855e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855e60 size=16 callers=0 calls=0
*/
void sub_855e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855e60ULL || rel >= 0x855e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855e70 size=128 callers=0 calls=0
*/
void sub_855e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855e70ULL || rel >= 0x855ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855ef0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855ef0ULL || rel >= 0x855f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855f20 size=64 callers=4 calls=2
   calls: sub_8076b0, sub_82aa10
*/
void sub_855f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855f20ULL || rel >= 0x855f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855f60 size=16 callers=0 calls=0
*/
void sub_855f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855f60ULL || rel >= 0x855f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855f70 size=128 callers=0 calls=0
*/
void sub_855f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855f70ULL || rel >= 0x855ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00855ff0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_855ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x855ff0ULL || rel >= 0x856020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856020 size=272 callers=1 calls=14
   calls: sub_7caab0, sub_7f09c0, sub_803d10, sub_80dd60, sub_80e1b0, sub_80f5c0, sub_828440, sub_8284d0, sub_82a9b0, sub_82a9e0, sub_82aa80, sub_82ab10
   ... +2 more
*/
void sub_856020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856020ULL || rel >= 0x856130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856130 size=16 callers=0 calls=0
*/
void sub_856130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856130ULL || rel >= 0x856140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856140 size=128 callers=0 calls=0
*/
void sub_856140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856140ULL || rel >= 0x8561c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008561c0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8561c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8561c0ULL || rel >= 0x8561f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008561f0 size=224 callers=1 calls=12
   calls: sub_7ee6b0, sub_7ef2b0, sub_80c260, sub_80dd60, sub_8286f0, sub_829120, sub_82a9e0, sub_82aa10, sub_82aa80, sub_82ab10, sub_8388d0, sub_850fb0
*/
void sub_8561f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8561f0ULL || rel >= 0x8562d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008562d0 size=16 callers=0 calls=0
*/
void sub_8562d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8562d0ULL || rel >= 0x8562e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008562e0 size=128 callers=0 calls=0
*/
void sub_8562e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8562e0ULL || rel >= 0x856360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856360 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_856360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856360ULL || rel >= 0x856390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856390 size=96 callers=1 calls=4
   calls: sub_7ef2b0, sub_80f730, sub_82a9e0, sub_82ab10
*/
void sub_856390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856390ULL || rel >= 0x8563f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008563f0 size=16 callers=0 calls=0
*/
void sub_8563f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8563f0ULL || rel >= 0x856400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856400 size=128 callers=0 calls=0
*/
void sub_856400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856400ULL || rel >= 0x856480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856480 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_856480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856480ULL || rel >= 0x8564b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008564b0 size=80 callers=1 calls=2
   calls: sub_82a9e0, sub_82ab10
*/
void sub_8564b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8564b0ULL || rel >= 0x856500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856500 size=16 callers=0 calls=0
*/
void sub_856500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856500ULL || rel >= 0x856510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856510 size=128 callers=0 calls=0
*/
void sub_856510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856510ULL || rel >= 0x856590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856590 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_856590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856590ULL || rel >= 0x8565c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008565c0 size=96 callers=1 calls=3
   calls: sub_7ef2b0, sub_7f1400, sub_82ab10
*/
void sub_8565c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8565c0ULL || rel >= 0x856620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856620 size=16 callers=0 calls=0
*/
void sub_856620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856620ULL || rel >= 0x856630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856630 size=128 callers=0 calls=0
*/
void sub_856630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856630ULL || rel >= 0x8566b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008566b0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_8566b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8566b0ULL || rel >= 0x8566e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008566e0 size=320 callers=1 calls=18
   calls: sub_7cb420, sub_7fe1d0, sub_80dd60, sub_810a90, sub_810b00, sub_828e00, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa20, sub_82aa60, sub_82aa80
   ... +6 more
*/
void sub_8566e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8566e0ULL || rel >= 0x856820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856820 size=176 callers=1 calls=7
   calls: sub_82aa20, sub_82ab10, sub_82ad10, sub_82ad30, sub_82b500, sub_82b7d0, sub_855b30
*/
void sub_856820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856820ULL || rel >= 0x8568d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008568d0 size=16 callers=0 calls=0
*/
void sub_8568d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8568d0ULL || rel >= 0x8568e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008568e0 size=128 callers=0 calls=0
*/
void sub_8568e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8568e0ULL || rel >= 0x856960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856960 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_856960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856960ULL || rel >= 0x856990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856990 size=128 callers=1 calls=6
   calls: sub_80dd60, sub_812010, sub_829130, sub_82a9e0, sub_82aa80, sub_84dbe0
*/
void sub_856990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856990ULL || rel >= 0x856a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856a10 size=16 callers=0 calls=0
*/
void sub_856a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856a10ULL || rel >= 0x856a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856a20 size=128 callers=0 calls=0
*/
void sub_856a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856a20ULL || rel >= 0x856aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856aa0 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_856aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856aa0ULL || rel >= 0x856ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856ad0 size=496 callers=1 calls=21
   calls: sub_7eb420, sub_7ee6b0, sub_7eef50, sub_7ef2b0, sub_806df0, sub_80cbb0, sub_80cd60, sub_80ce10, sub_80dd60, sub_810700, sub_810a70, sub_810ae0
   ... +9 more
*/
void sub_856ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856ad0ULL || rel >= 0x856cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856cc0 size=16 callers=0 calls=0
*/
void sub_856cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856cc0ULL || rel >= 0x856cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856cd0 size=128 callers=0 calls=0
*/
void sub_856cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856cd0ULL || rel >= 0x856d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856d50 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_856d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856d50ULL || rel >= 0x856d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856d80 size=128 callers=1 calls=2
   calls: sub_856e00, sub_856f50
*/
void sub_856d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856d80ULL || rel >= 0x856e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856e00 size=144 callers=1 calls=6
   calls: sub_80cd20, sub_80dd60, sub_810a90, sub_82a9e0, sub_82aa10, sub_82ab10
*/
void sub_856e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856e00ULL || rel >= 0x856e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856e90 size=192 callers=0 calls=14
   calls: sub_7caf50, sub_7fe1e0, sub_7ffaa0, sub_811520, sub_811550, sub_8129d0, sub_8284e0, sub_8284f0, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82aa80
   ... +2 more
*/
void sub_856e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856e90ULL || rel >= 0x856f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856f50 size=160 callers=1 calls=5
   calls: sub_828500, sub_82aa80, sub_838e00, sub_856ff0, sub_8570f0
*/
void sub_856f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856f50ULL || rel >= 0x856ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00856ff0 size=256 callers=1 calls=8
   calls: sub_80dd60, sub_810a90, sub_810b00, sub_828510, sub_82a9e0, sub_82aa80, sub_82ab10, sub_838b70
*/
void sub_856ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x856ff0ULL || rel >= 0x8570f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008570f0 size=208 callers=1 calls=10
   calls: sub_7fe1e0, sub_7ffaa0, sub_803c60, sub_803d20, sub_80dd60, sub_810a90, sub_810b00, sub_82a9c0, sub_82a9e0, sub_82ab10
*/
void sub_8570f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8570f0ULL || rel >= 0x8571c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008571c0 size=16 callers=0 calls=0
*/
void sub_8571c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8571c0ULL || rel >= 0x8571d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008571d0 size=128 callers=0 calls=0
*/
void sub_8571d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8571d0ULL || rel >= 0x857250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857250 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_857250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857250ULL || rel >= 0x857280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857280 size=16 callers=0 calls=0
*/
void sub_857280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857280ULL || rel >= 0x857290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857290 size=128 callers=0 calls=0
*/
void sub_857290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857290ULL || rel >= 0x857310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857310 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_857310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857310ULL || rel >= 0x857340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857340 size=272 callers=1 calls=9
   calls: sub_7cb420, sub_7fe1d0, sub_80f2f0, sub_812750, sub_82a9b0, sub_82a9c0, sub_82a9e0, sub_82ae40, sub_8574e0
*/
void sub_857340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857340ULL || rel >= 0x857450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857450 size=16 callers=0 calls=0
*/
void sub_857450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857450ULL || rel >= 0x857460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857460 size=128 callers=0 calls=0
*/
void sub_857460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857460ULL || rel >= 0x8574e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008574e0 size=32 callers=1 calls=0
*/
void sub_8574e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8574e0ULL || rel >= 0x857500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857500 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_857500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857500ULL || rel >= 0x857530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857530 size=96 callers=1 calls=4
   calls: sub_7ef2b0, sub_80f7a0, sub_82a9e0, sub_82ab10
*/
void sub_857530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857530ULL || rel >= 0x857590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857590 size=16 callers=0 calls=0
*/
void sub_857590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857590ULL || rel >= 0x8575a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008575a0 size=128 callers=0 calls=0
*/
void sub_8575a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8575a0ULL || rel >= 0x857620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857620 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_857620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857620ULL || rel >= 0x857650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857650 size=96 callers=1 calls=3
   calls: sub_7ef2b0, sub_7f1a20, sub_82ab10
*/
void sub_857650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857650ULL || rel >= 0x8576b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008576b0 size=16 callers=0 calls=0
*/
void sub_8576b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8576b0ULL || rel >= 0x8576c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008576c0 size=128 callers=0 calls=0
*/
void sub_8576c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8576c0ULL || rel >= 0x857740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857740 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_857740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857740ULL || rel >= 0x857770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857770 size=352 callers=1 calls=15
   calls: sub_786d90, sub_7ef2b0, sub_80c100, sub_80f810, sub_8123d0, sub_812420, sub_828440, sub_82a9e0, sub_82aa00, sub_82aa10, sub_82aa80, sub_82ab10
   ... +3 more
*/
void sub_857770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857770ULL || rel >= 0x8578d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008578d0 size=16 callers=0 calls=0
*/
void sub_8578d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8578d0ULL || rel >= 0x8578e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008578e0 size=128 callers=0 calls=0
*/
void sub_8578e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8578e0ULL || rel >= 0x857960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857960 size=32 callers=0 calls=0
*/
void sub_857960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857960ULL || rel >= 0x857980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857980 size=32 callers=0 calls=0
*/
void sub_857980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857980ULL || rel >= 0x8579a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008579a0 size=32 callers=0 calls=0
*/
void sub_8579a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8579a0ULL || rel >= 0x8579c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008579c0 size=32 callers=0 calls=0
*/
void sub_8579c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8579c0ULL || rel >= 0x8579e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008579e0 size=32 callers=0 calls=0
*/
void sub_8579e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8579e0ULL || rel >= 0x857a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857a00 size=32 callers=0 calls=0
*/
void sub_857a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857a00ULL || rel >= 0x857a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857a20 size=32 callers=0 calls=0
*/
void sub_857a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857a20ULL || rel >= 0x857a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857a40 size=32 callers=0 calls=0
*/
void sub_857a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857a40ULL || rel >= 0x857a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857a60 size=32 callers=0 calls=0
*/
void sub_857a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857a60ULL || rel >= 0x857a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857a80 size=32 callers=0 calls=0
*/
void sub_857a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857a80ULL || rel >= 0x857aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857aa0 size=32 callers=0 calls=0
*/
void sub_857aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857aa0ULL || rel >= 0x857ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857ac0 size=32 callers=0 calls=0
*/
void sub_857ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857ac0ULL || rel >= 0x857ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857ae0 size=32 callers=0 calls=0
*/
void sub_857ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857ae0ULL || rel >= 0x857b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857b00 size=32 callers=0 calls=0
*/
void sub_857b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857b00ULL || rel >= 0x857b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857b20 size=32 callers=0 calls=0
*/
void sub_857b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857b20ULL || rel >= 0x857b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857b40 size=32 callers=0 calls=0
*/
void sub_857b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857b40ULL || rel >= 0x857b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857b60 size=32 callers=0 calls=0
*/
void sub_857b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857b60ULL || rel >= 0x857b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857b80 size=32 callers=0 calls=0
*/
void sub_857b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857b80ULL || rel >= 0x857ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857ba0 size=32 callers=0 calls=0
*/
void sub_857ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857ba0ULL || rel >= 0x857bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857bc0 size=32 callers=0 calls=0
*/
void sub_857bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857bc0ULL || rel >= 0x857be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857be0 size=32 callers=0 calls=0
*/
void sub_857be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857be0ULL || rel >= 0x857c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857c00 size=32 callers=0 calls=0
*/
void sub_857c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857c00ULL || rel >= 0x857c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857c20 size=32 callers=0 calls=0
*/
void sub_857c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857c20ULL || rel >= 0x857c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857c40 size=32 callers=0 calls=0
*/
void sub_857c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857c40ULL || rel >= 0x857c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857c60 size=32 callers=0 calls=0
*/
void sub_857c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857c60ULL || rel >= 0x857c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857c80 size=32 callers=0 calls=0
*/
void sub_857c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857c80ULL || rel >= 0x857ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857ca0 size=32 callers=0 calls=0
*/
void sub_857ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857ca0ULL || rel >= 0x857cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857cc0 size=32 callers=0 calls=0
*/
void sub_857cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857cc0ULL || rel >= 0x857ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857ce0 size=32 callers=0 calls=0
*/
void sub_857ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857ce0ULL || rel >= 0x857d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857d00 size=32 callers=0 calls=0
*/
void sub_857d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857d00ULL || rel >= 0x857d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857d20 size=32 callers=0 calls=0
*/
void sub_857d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857d20ULL || rel >= 0x857d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857d40 size=32 callers=0 calls=0
*/
void sub_857d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857d40ULL || rel >= 0x857d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857d60 size=32 callers=0 calls=0
*/
void sub_857d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857d60ULL || rel >= 0x857d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857d80 size=32 callers=0 calls=0
*/
void sub_857d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857d80ULL || rel >= 0x857da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857da0 size=32 callers=0 calls=0
*/
void sub_857da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857da0ULL || rel >= 0x857dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857dc0 size=32 callers=0 calls=0
*/
void sub_857dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857dc0ULL || rel >= 0x857de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857de0 size=32 callers=0 calls=0
*/
void sub_857de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857de0ULL || rel >= 0x857e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857e00 size=32 callers=0 calls=0
*/
void sub_857e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857e00ULL || rel >= 0x857e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857e20 size=32 callers=0 calls=0
*/
void sub_857e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857e20ULL || rel >= 0x857e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857e40 size=32 callers=0 calls=0
*/
void sub_857e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857e40ULL || rel >= 0x857e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857e60 size=32 callers=0 calls=0
*/
void sub_857e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857e60ULL || rel >= 0x857e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857e80 size=32 callers=0 calls=0
*/
void sub_857e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857e80ULL || rel >= 0x857ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857ea0 size=32 callers=0 calls=0
*/
void sub_857ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857ea0ULL || rel >= 0x857ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857ec0 size=32 callers=0 calls=0
*/
void sub_857ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857ec0ULL || rel >= 0x857ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857ee0 size=32 callers=0 calls=0
*/
void sub_857ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857ee0ULL || rel >= 0x857f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857f00 size=32 callers=0 calls=0
*/
void sub_857f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857f00ULL || rel >= 0x857f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857f20 size=32 callers=0 calls=0
*/
void sub_857f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857f20ULL || rel >= 0x857f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857f40 size=32 callers=0 calls=0
*/
void sub_857f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857f40ULL || rel >= 0x857f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857f60 size=32 callers=0 calls=0
*/
void sub_857f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857f60ULL || rel >= 0x857f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857f80 size=32 callers=0 calls=0
*/
void sub_857f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857f80ULL || rel >= 0x857fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857fa0 size=32 callers=0 calls=0
*/
void sub_857fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857fa0ULL || rel >= 0x857fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857fc0 size=32 callers=0 calls=0
*/
void sub_857fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857fc0ULL || rel >= 0x857fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00857fe0 size=32 callers=0 calls=0
*/
void sub_857fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x857fe0ULL || rel >= 0x858000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858000 size=32 callers=0 calls=0
*/
void sub_858000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858000ULL || rel >= 0x858020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858020 size=32 callers=0 calls=0
*/
void sub_858020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858020ULL || rel >= 0x858040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858040 size=32 callers=0 calls=0
*/
void sub_858040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858040ULL || rel >= 0x858060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858060 size=32 callers=0 calls=0
*/
void sub_858060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858060ULL || rel >= 0x858080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858080 size=32 callers=0 calls=0
*/
void sub_858080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858080ULL || rel >= 0x8580a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008580a0 size=32 callers=0 calls=0
*/
void sub_8580a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8580a0ULL || rel >= 0x8580c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008580c0 size=32 callers=0 calls=0
*/
void sub_8580c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8580c0ULL || rel >= 0x8580e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008580e0 size=32 callers=0 calls=0
*/
void sub_8580e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8580e0ULL || rel >= 0x858100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858100 size=32 callers=0 calls=0
*/
void sub_858100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858100ULL || rel >= 0x858120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858120 size=32 callers=0 calls=0
*/
void sub_858120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858120ULL || rel >= 0x858140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858140 size=32 callers=0 calls=0
*/
void sub_858140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858140ULL || rel >= 0x858160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858160 size=32 callers=0 calls=0
*/
void sub_858160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858160ULL || rel >= 0x858180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858180 size=32 callers=0 calls=0
*/
void sub_858180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858180ULL || rel >= 0x8581a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008581a0 size=32 callers=0 calls=0
*/
void sub_8581a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8581a0ULL || rel >= 0x8581c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008581c0 size=32 callers=0 calls=0
*/
void sub_8581c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8581c0ULL || rel >= 0x8581e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008581e0 size=32 callers=0 calls=0
*/
void sub_8581e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8581e0ULL || rel >= 0x858200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858200 size=32 callers=0 calls=0
*/
void sub_858200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858200ULL || rel >= 0x858220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858220 size=32 callers=0 calls=0
*/
void sub_858220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858220ULL || rel >= 0x858240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858240 size=32 callers=0 calls=0
*/
void sub_858240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858240ULL || rel >= 0x858260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858260 size=32 callers=0 calls=0
*/
void sub_858260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858260ULL || rel >= 0x858280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858280 size=32 callers=0 calls=0
*/
void sub_858280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858280ULL || rel >= 0x8582a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008582a0 size=32 callers=0 calls=0
*/
void sub_8582a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8582a0ULL || rel >= 0x8582c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008582c0 size=32 callers=0 calls=0
*/
void sub_8582c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8582c0ULL || rel >= 0x8582e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008582e0 size=32 callers=0 calls=0
*/
void sub_8582e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8582e0ULL || rel >= 0x858300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858300 size=32 callers=0 calls=0
*/
void sub_858300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858300ULL || rel >= 0x858320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858320 size=32 callers=0 calls=0
*/
void sub_858320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858320ULL || rel >= 0x858340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858340 size=32 callers=0 calls=0
*/
void sub_858340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858340ULL || rel >= 0x858360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858360 size=32 callers=0 calls=0
*/
void sub_858360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858360ULL || rel >= 0x858380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858380 size=32 callers=0 calls=0
*/
void sub_858380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858380ULL || rel >= 0x8583a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008583a0 size=32 callers=0 calls=0
*/
void sub_8583a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8583a0ULL || rel >= 0x8583c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008583c0 size=32 callers=0 calls=0
*/
void sub_8583c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8583c0ULL || rel >= 0x8583e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008583e0 size=32 callers=0 calls=0
*/
void sub_8583e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8583e0ULL || rel >= 0x858400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858400 size=32 callers=0 calls=0
*/
void sub_858400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858400ULL || rel >= 0x858420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858420 size=32 callers=0 calls=0
*/
void sub_858420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858420ULL || rel >= 0x858440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858440 size=32 callers=0 calls=0
*/
void sub_858440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858440ULL || rel >= 0x858460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858460 size=32 callers=0 calls=0
*/
void sub_858460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858460ULL || rel >= 0x858480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858480 size=32 callers=0 calls=0
*/
void sub_858480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858480ULL || rel >= 0x8584a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008584a0 size=32 callers=0 calls=0
*/
void sub_8584a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8584a0ULL || rel >= 0x8584c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008584c0 size=32 callers=0 calls=0
*/
void sub_8584c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8584c0ULL || rel >= 0x8584e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008584e0 size=32 callers=0 calls=0
*/
void sub_8584e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8584e0ULL || rel >= 0x858500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858500 size=32 callers=0 calls=0
*/
void sub_858500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858500ULL || rel >= 0x858520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858520 size=32 callers=0 calls=0
*/
void sub_858520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858520ULL || rel >= 0x858540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858540 size=32 callers=0 calls=0
*/
void sub_858540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858540ULL || rel >= 0x858560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858560 size=32 callers=0 calls=0
*/
void sub_858560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858560ULL || rel >= 0x858580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858580 size=32 callers=0 calls=0
*/
void sub_858580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858580ULL || rel >= 0x8585a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008585a0 size=32 callers=0 calls=0
*/
void sub_8585a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8585a0ULL || rel >= 0x8585c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008585c0 size=32 callers=0 calls=0
*/
void sub_8585c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8585c0ULL || rel >= 0x8585e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008585e0 size=32 callers=0 calls=0
*/
void sub_8585e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8585e0ULL || rel >= 0x858600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858600 size=32 callers=0 calls=0
*/
void sub_858600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858600ULL || rel >= 0x858620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858620 size=32 callers=0 calls=0
*/
void sub_858620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858620ULL || rel >= 0x858640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858640 size=32 callers=0 calls=0
*/
void sub_858640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858640ULL || rel >= 0x858660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858660 size=32 callers=0 calls=0
*/
void sub_858660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858660ULL || rel >= 0x858680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858680 size=32 callers=0 calls=0
*/
void sub_858680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858680ULL || rel >= 0x8586a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008586a0 size=32 callers=0 calls=0
*/
void sub_8586a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8586a0ULL || rel >= 0x8586c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008586c0 size=32 callers=0 calls=0
*/
void sub_8586c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8586c0ULL || rel >= 0x8586e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008586e0 size=32 callers=0 calls=0
*/
void sub_8586e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8586e0ULL || rel >= 0x858700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858700 size=32 callers=0 calls=0
*/
void sub_858700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858700ULL || rel >= 0x858720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00858720 size=32 callers=0 calls=0
*/
void sub_858720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x858720ULL || rel >= 0x858740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

