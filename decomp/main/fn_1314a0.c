/* main functions 001314a0..0019fb30 (9 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 001314a0 size=272 callers=0 calls=0
*/
void sub_1314a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1314a0ULL || rel >= 0x1315b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001315b0 size=352 callers=0 calls=0
*/
void sub_1315b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1315b0ULL || rel >= 0x131710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131710 size=256 callers=1 calls=0
*/
void sub_131710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131710ULL || rel >= 0x131810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131810 size=128 callers=66 calls=0
*/
void sub_131810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131810ULL || rel >= 0x131890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131890 size=384 callers=68 calls=0
*/
void sub_131890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131890ULL || rel >= 0x131a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131a10 size=208 callers=3 calls=0
*/
void sub_131a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131a10ULL || rel >= 0x131ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131ae0 size=192 callers=3 calls=0
*/
void sub_131ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ae0ULL || rel >= 0x131ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131ba0 size=496 callers=5 calls=2
   calls: sub_132c20, sub_b0ee0
*/
void sub_131ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131ba0ULL || rel >= 0x131d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131d90 size=256 callers=1 calls=0
*/
void sub_131d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131d90ULL || rel >= 0x131e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00131e90 size=608 callers=4 calls=0
*/
void sub_131e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x131e90ULL || rel >= 0x1320f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001320f0 size=544 callers=8 calls=2
   calls: sub_132310, sub_1324f0
*/
void sub_1320f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1320f0ULL || rel >= 0x132310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132310 size=480 callers=3 calls=1
   calls: sub_301510
*/
void sub_132310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132310ULL || rel >= 0x1324f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001324f0 size=640 callers=1 calls=0
*/
void sub_1324f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1324f0ULL || rel >= 0x132770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132770 size=1200 callers=3 calls=1
   calls: sub_132310
*/
void sub_132770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132770ULL || rel >= 0x132c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132c20 size=240 callers=2 calls=0
*/
void sub_132c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132c20ULL || rel >= 0x132d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132d10 size=320 callers=0 calls=0
*/
void sub_132d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132d10ULL || rel >= 0x132e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00132e50 size=736 callers=0 calls=1
   calls: sub_133870
*/
void sub_132e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x132e50ULL || rel >= 0x133130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133130 size=512 callers=0 calls=0
*/
void sub_133130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133130ULL || rel >= 0x133330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133330 size=368 callers=3 calls=0
*/
void sub_133330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133330ULL || rel >= 0x1334a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001334a0 size=80 callers=3 calls=0
*/
void sub_1334a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334a0ULL || rel >= 0x1334f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001334f0 size=208 callers=0 calls=0
*/
void sub_1334f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1334f0ULL || rel >= 0x1335c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001335c0 size=688 callers=0 calls=0
*/
void sub_1335c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1335c0ULL || rel >= 0x133870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133870 size=224 callers=4 calls=0
*/
void sub_133870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133870ULL || rel >= 0x133950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133950 size=1680 callers=5 calls=3
   calls: sub_133fe0, sub_1341c0, sub_134670
*/
void sub_133950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133950ULL || rel >= 0x133fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133fe0 size=480 callers=2 calls=0
*/
void sub_133fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133fe0ULL || rel >= 0x1341c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001341c0 size=1200 callers=3 calls=0
*/
void sub_1341c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1341c0ULL || rel >= 0x134670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134670 size=320 callers=3 calls=0
*/
void sub_134670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134670ULL || rel >= 0x1347b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001347b0 size=1744 callers=1 calls=0
*/
void sub_1347b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1347b0ULL || rel >= 0x134e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134e80 size=512 callers=28 calls=1
   calls: sub_1347b0
*/
void sub_134e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134e80ULL || rel >= 0x135080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135080 size=400 callers=2 calls=0
*/
void sub_135080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135080ULL || rel >= 0x135210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135210 size=544 callers=1 calls=0
*/
void sub_135210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135210ULL || rel >= 0x135430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135430 size=3872 callers=1 calls=2
   calls: sub_134e80, sub_136970
*/
void sub_135430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135430ULL || rel >= 0x136350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136350 size=1568 callers=1 calls=1
   calls: sub_135210
*/
void sub_136350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136350ULL || rel >= 0x136970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136970 size=800 callers=11 calls=0
*/
void sub_136970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136970ULL || rel >= 0x136c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136c90 size=992 callers=2 calls=0
*/
void sub_136c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136c90ULL || rel >= 0x137070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00137070 size=2176 callers=23 calls=1
   calls: sub_1378f0
*/
void sub_137070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x137070ULL || rel >= 0x1378f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001378f0 size=5600 callers=2 calls=0
*/
void sub_1378f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1378f0ULL || rel >= 0x138ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00138ed0 size=2288 callers=40 calls=1
   calls: sub_1378f0
*/
void sub_138ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x138ed0ULL || rel >= 0x1397c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001397c0 size=656 callers=7 calls=0
*/
void sub_1397c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1397c0ULL || rel >= 0x139a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139a50 size=864 callers=2 calls=0
*/
void sub_139a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139a50ULL || rel >= 0x139db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00139db0 size=736 callers=7 calls=0
*/
void sub_139db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x139db0ULL || rel >= 0x13a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a090 size=464 callers=6 calls=0
*/
void sub_13a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a090ULL || rel >= 0x13a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a260 size=224 callers=2 calls=0
*/
void sub_13a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a260ULL || rel >= 0x13a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a340 size=1456 callers=2 calls=0
*/
void sub_13a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a340ULL || rel >= 0x13a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a8f0 size=1120 callers=3 calls=0
*/
void sub_13a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8f0ULL || rel >= 0x13ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ad50 size=1376 callers=4 calls=0
*/
void sub_13ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad50ULL || rel >= 0x13b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b2b0 size=176 callers=1 calls=1
   calls: sub_152320
*/
void sub_13b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2b0ULL || rel >= 0x13b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b360 size=1424 callers=1 calls=1
   calls: sub_151ce0
*/
void sub_13b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b360ULL || rel >= 0x13b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b8f0 size=16 callers=0 calls=0
*/
void sub_13b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8f0ULL || rel >= 0x13b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b900 size=32 callers=1 calls=0
*/
void sub_13b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b900ULL || rel >= 0x13b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b920 size=16 callers=0 calls=0
*/
void sub_13b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b920ULL || rel >= 0x13b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b930 size=368 callers=0 calls=2
   calls: sub_13ad50, sub_152320
*/
void sub_13b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b930ULL || rel >= 0x13baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013baa0 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh/GuMidphaseInterface.h
*/
void GuMidphaseInterface_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13baa0ULL || rel >= 0x13baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013baf0 size=720 callers=4 calls=3
   calls: sub_13bdc0, sub_143d90, sub_144170
*/
void sub_13baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13baf0ULL || rel >= 0x13bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bdc0 size=400 callers=3 calls=0
*/
void sub_13bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bdc0ULL || rel >= 0x13bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bf50 size=96 callers=0 calls=0
*/
void sub_13bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf50ULL || rel >= 0x13bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bfb0 size=928 callers=1 calls=2
   calls: sub_143a60, sub_143d90
*/
void sub_13bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfb0ULL || rel >= 0x13c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c350 size=96 callers=0 calls=0
*/
void sub_13c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c350ULL || rel >= 0x13c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c3b0 size=864 callers=1 calls=2
   calls: sub_143780, sub_143d90
*/
void sub_13c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c3b0ULL || rel >= 0x13c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c710 size=96 callers=0 calls=0
*/
void sub_13c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c710ULL || rel >= 0x13c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c770 size=928 callers=4 calls=2
   calls: sub_143a60, sub_143d90
*/
void sub_13c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c770ULL || rel >= 0x13cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013cb10 size=96 callers=0 calls=0
*/
void sub_13cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb10ULL || rel >= 0x13cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013cb70 size=1264 callers=0 calls=2
   calls: sub_121880, sub_13c3b0
*/
void sub_13cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb70ULL || rel >= 0x13d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d060 size=1488 callers=0 calls=2
   calls: sub_1320f0, sub_13c770
*/
void sub_13d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d060ULL || rel >= 0x13d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d630 size=2048 callers=0 calls=3
   calls: sub_1320f0, sub_13baf0, sub_1424c0
*/
void sub_13d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d630ULL || rel >= 0x13de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013de30 size=1488 callers=0 calls=4
   calls: sub_1320f0, sub_13baf0, sub_13bfb0, sub_195b60
*/
void sub_13de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de30ULL || rel >= 0x13e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e400 size=48 callers=0 calls=0
*/
void sub_13e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e400ULL || rel >= 0x13e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e430 size=1216 callers=0 calls=5
   calls: sub_13c770, sub_13e8f0, sub_1448e0, sub_144ec0, sub_ae470
*/
void sub_13e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e430ULL || rel >= 0x13e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e8f0 size=704 callers=1 calls=1
   calls: sub_b0ee0
*/
void sub_13e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8f0ULL || rel >= 0x13ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ebb0 size=3504 callers=0 calls=6
   calls: sub_132310, sub_13bdc0, sub_13c770, sub_1450a0, sub_145710, sub_ae470
*/
void sub_13ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebb0ULL || rel >= 0x13f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f960 size=112 callers=0 calls=2
   calls: sub_13baf0, sub_19a750
*/
void sub_13f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f960ULL || rel >= 0x13f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013f9d0 size=1472 callers=0 calls=0
*/
void sub_13f9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9d0ULL || rel >= 0x13ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ff90 size=16 callers=0 calls=0
*/
void sub_13ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff90ULL || rel >= 0x13ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ffa0 size=640 callers=0 calls=0
*/
void sub_13ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ffa0ULL || rel >= 0x140220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140220 size=112 callers=0 calls=0
*/
void sub_140220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140220ULL || rel >= 0x140290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140290 size=640 callers=0 calls=0
*/
void sub_140290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140290ULL || rel >= 0x140510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140510 size=16 callers=0 calls=0
*/
void sub_140510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140510ULL || rel >= 0x140520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140520 size=16 callers=0 calls=0
*/
void sub_140520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140520ULL || rel >= 0x140530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140530 size=96 callers=0 calls=0
*/
void sub_140530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140530ULL || rel >= 0x140590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140590 size=112 callers=0 calls=0
*/
void sub_140590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140590ULL || rel >= 0x140600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140600 size=640 callers=0 calls=0
*/
void sub_140600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140600ULL || rel >= 0x140880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140880 size=112 callers=0 calls=0
*/
void sub_140880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140880ULL || rel >= 0x1408f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001408f0 size=640 callers=0 calls=0
*/
void sub_1408f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408f0ULL || rel >= 0x140b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140b70 size=16 callers=0 calls=0
*/
void sub_140b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140b70ULL || rel >= 0x140b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140b80 size=96 callers=0 calls=0
*/
void sub_140b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140b80ULL || rel >= 0x140be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140be0 size=112 callers=0 calls=0
*/
void sub_140be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140be0ULL || rel >= 0x140c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140c50 size=1408 callers=0 calls=0
*/
void sub_140c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c50ULL || rel >= 0x1411d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001411d0 size=112 callers=0 calls=0
*/
void sub_1411d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1411d0ULL || rel >= 0x141240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141240 size=1392 callers=0 calls=0
*/
void sub_141240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141240ULL || rel >= 0x1417b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001417b0 size=16 callers=0 calls=0
*/
void sub_1417b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417b0ULL || rel >= 0x1417c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001417c0 size=96 callers=0 calls=0
*/
void sub_1417c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417c0ULL || rel >= 0x141820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141820 size=112 callers=0 calls=0
*/
void sub_141820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141820ULL || rel >= 0x141890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141890 size=944 callers=0 calls=1
   calls: sub_13a260
*/
void sub_141890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141890ULL || rel >= 0x141c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141c40 size=112 callers=0 calls=0
*/
void sub_141c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c40ULL || rel >= 0x141cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141cb0 size=928 callers=0 calls=1
   calls: sub_13a260
*/
void sub_141cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141cb0ULL || rel >= 0x142050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142050 size=16 callers=0 calls=0
*/
void sub_142050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142050ULL || rel >= 0x142060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142060 size=96 callers=0 calls=0
*/
void sub_142060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142060ULL || rel >= 0x1420c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001420c0 size=112 callers=0 calls=0
*/
void sub_1420c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420c0ULL || rel >= 0x142130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142130 size=320 callers=0 calls=1
   calls: sub_136c90
*/
void sub_142130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142130ULL || rel >= 0x142270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142270 size=16 callers=0 calls=0
*/
void sub_142270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142270ULL || rel >= 0x142280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142280 size=560 callers=0 calls=1
   calls: sub_136c90
*/
void sub_142280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142280ULL || rel >= 0x1424b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001424b0 size=16 callers=0 calls=0
*/
void sub_1424b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424b0ULL || rel >= 0x1424c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001424c0 size=656 callers=2 calls=0
*/
void sub_1424c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424c0ULL || rel >= 0x142750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142750 size=16 callers=0 calls=0
*/
void sub_142750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142750ULL || rel >= 0x142760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142760 size=464 callers=0 calls=1
   calls: sub_13a8f0
*/
void sub_142760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142760ULL || rel >= 0x142930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142930 size=16 callers=0 calls=0
*/
void sub_142930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142930ULL || rel >= 0x142940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142940 size=16 callers=0 calls=0
*/
void sub_142940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142940ULL || rel >= 0x142950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142950 size=512 callers=0 calls=1
   calls: sub_13a8f0
*/
void sub_142950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142950ULL || rel >= 0x142b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142b50 size=16 callers=0 calls=0
*/
void sub_142b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b50ULL || rel >= 0x142b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142b60 size=16 callers=0 calls=0
*/
void sub_142b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b60ULL || rel >= 0x142b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142b70 size=304 callers=0 calls=1
   calls: sub_142f00
*/
void sub_142b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b70ULL || rel >= 0x142ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142ca0 size=16 callers=0 calls=0
*/
void sub_142ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ca0ULL || rel >= 0x142cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142cb0 size=16 callers=0 calls=0
*/
void sub_142cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cb0ULL || rel >= 0x142cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142cc0 size=560 callers=0 calls=1
   calls: sub_142f00
*/
void sub_142cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cc0ULL || rel >= 0x142ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142ef0 size=16 callers=0 calls=0
*/
void sub_142ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ef0ULL || rel >= 0x142f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142f00 size=2176 callers=4 calls=0
*/
void sub_142f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f00ULL || rel >= 0x143780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143780 size=736 callers=1 calls=0
*/
void sub_143780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143780ULL || rel >= 0x143a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143a60 size=816 callers=2 calls=0
*/
void sub_143a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a60ULL || rel >= 0x143d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143d90 size=992 callers=4 calls=0
*/
void sub_143d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d90ULL || rel >= 0x144170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144170 size=1904 callers=1 calls=0
*/
void sub_144170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144170ULL || rel >= 0x1448e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001448e0 size=192 callers=1 calls=0
*/
void sub_1448e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1448e0ULL || rel >= 0x1449a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001449a0 size=1312 callers=0 calls=3
   calls: sub_136970, sub_149e50, sub_14da90
*/
void sub_1449a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449a0ULL || rel >= 0x144ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144ec0 size=368 callers=1 calls=1
   calls: sub_1afbe0
*/
void sub_144ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144ec0ULL || rel >= 0x145030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145030 size=112 callers=0 calls=0
*/
void sub_145030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145030ULL || rel >= 0x1450a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001450a0 size=192 callers=1 calls=0
*/
void sub_1450a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1450a0ULL || rel >= 0x145160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145160 size=1456 callers=0 calls=2
   calls: sub_148720, sub_14d150
*/
void sub_145160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145160ULL || rel >= 0x145710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145710 size=1376 callers=1 calls=2
   calls: sub_14a870, sub_1b0ea0
*/
void sub_145710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145710ULL || rel >= 0x145c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145c70 size=112 callers=0 calls=0
*/
void sub_145c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145c70ULL || rel >= 0x145ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145ce0 size=1920 callers=1 calls=0
*/
void sub_145ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145ce0ULL || rel >= 0x146460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146460 size=1552 callers=0 calls=1
   calls: sub_1474e0
*/
void sub_146460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146460ULL || rel >= 0x146a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146a70 size=736 callers=1 calls=1
   calls: sub_1b2a10
*/
void sub_146a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146a70ULL || rel >= 0x146d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00146d50 size=1664 callers=0 calls=4
   calls: sub_131e90, sub_145ce0, sub_146a70, sub_b0ee0
*/
void sub_146d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x146d50ULL || rel >= 0x1473d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001473d0 size=16 callers=0 calls=0
*/
void sub_1473d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473d0ULL || rel >= 0x1473e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001473e0 size=16 callers=0 calls=0
*/
void sub_1473e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473e0ULL || rel >= 0x1473f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001473f0 size=16 callers=0 calls=0
*/
void sub_1473f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1473f0ULL || rel >= 0x147400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147400 size=16 callers=0 calls=0
*/
void sub_147400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147400ULL || rel >= 0x147410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147410 size=16 callers=0 calls=0
*/
void sub_147410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147410ULL || rel >= 0x147420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147420 size=96 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh/GuMidphaseInterface.h
*/
void GuMidphaseInterface_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147420ULL || rel >= 0x147480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147480 size=96 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh/GuMidphaseInterface.h
*/
void GuMidphaseInterface_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147480ULL || rel >= 0x1474e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001474e0 size=4048 callers=2 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_137070
*/
void sub_1474e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1474e0ULL || rel >= 0x1484b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001484b0 size=112 callers=0 calls=0
*/
void sub_1484b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484b0ULL || rel >= 0x148520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148520 size=16 callers=0 calls=0
*/
void sub_148520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148520ULL || rel >= 0x148530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148530 size=16 callers=0 calls=0
*/
void sub_148530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148530ULL || rel >= 0x148540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148540 size=144 callers=0 calls=0
*/
void sub_148540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148540ULL || rel >= 0x1485d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001485d0 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh/GuMidphaseInterface.h
*/
void GuMidphaseInterface_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485d0ULL || rel >= 0x148620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148620 size=16 callers=0 calls=0
*/
void sub_148620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148620ULL || rel >= 0x148630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148630 size=16 callers=0 calls=0
*/
void sub_148630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148630ULL || rel >= 0x148640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148640 size=48 callers=0 calls=0
*/
void sub_148640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148640ULL || rel >= 0x148670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148670 size=48 callers=0 calls=0
*/
void sub_148670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148670ULL || rel >= 0x1486a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001486a0 size=80 callers=0 calls=0
*/
void sub_1486a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486a0ULL || rel >= 0x1486f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001486f0 size=16 callers=0 calls=0
*/
void sub_1486f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486f0ULL || rel >= 0x148700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148700 size=16 callers=0 calls=0
*/
void sub_148700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148700ULL || rel >= 0x148710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148710 size=16 callers=0 calls=0
*/
void sub_148710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148710ULL || rel >= 0x148720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148720 size=3536 callers=2 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_148720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148720ULL || rel >= 0x1494f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001494f0 size=2400 callers=3 calls=2
   calls: sub_14a510, sub_14cab0
*/
void sub_1494f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1494f0ULL || rel >= 0x149e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149e50 size=1728 callers=3 calls=2
   calls: sub_1494f0, sub_14a6c0
*/
void sub_149e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e50ULL || rel >= 0x14a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a510 size=432 callers=3 calls=0
*/
void sub_14a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a510ULL || rel >= 0x14a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a6c0 size=432 callers=3 calls=1
   calls: sub_136970
*/
void sub_14a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6c0ULL || rel >= 0x14a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a870 size=880 callers=2 calls=2
   calls: sub_14adb0, sub_14bb70
*/
void sub_14a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a870ULL || rel >= 0x14abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014abe0 size=464 callers=2 calls=0
*/
void sub_14abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abe0ULL || rel >= 0x14adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014adb0 size=3520 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_14adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14adb0ULL || rel >= 0x14bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014bb70 size=3904 callers=1 calls=3
   calls: sub_14abe0, sub_195d60, sub_19a5c0
*/
void sub_14bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb70ULL || rel >= 0x14cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cab0 size=1696 callers=5 calls=1
   calls: sub_14a510
*/
void sub_14cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cab0ULL || rel >= 0x14d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d150 size=2368 callers=2 calls=0
*/
void sub_14d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d150ULL || rel >= 0x14da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014da90 size=5792 callers=2 calls=6
   calls: sub_136350, sub_13ad50, sub_142f00, sub_1494f0, sub_149e50, sub_14a6c0
*/
void sub_14da90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14da90ULL || rel >= 0x14f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f130 size=80 callers=1 calls=0
*/
void sub_14f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f130ULL || rel >= 0x14f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f180 size=176 callers=1 calls=0
*/
void sub_14f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f180ULL || rel >= 0x14f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f230 size=96 callers=0 calls=1
   calls: sub_300c80
*/
void sub_14f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f230ULL || rel >= 0x14f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f290 size=96 callers=0 calls=1
   calls: sub_300c80
*/
void sub_14f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f290ULL || rel >= 0x14f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f2f0 size=128 callers=0 calls=1
   calls: sub_300c80
*/
void sub_14f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2f0ULL || rel >= 0x14f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f370 size=128 callers=0 calls=1
   calls: sub_300c80
*/
void sub_14f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f370ULL || rel >= 0x14f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f3f0 size=144 callers=0 calls=2
   calls: sub_19cbc0, sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: Gu::HeightField::onRefCountZero: double deletion detected!
*/
void GuHeightField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3f0ULL || rel >= 0x14f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f480 size=144 callers=0 calls=2
   calls: sub_19cbc0, sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: Gu::HeightField::onRefCountZero: double deletion detected!
*/
void GuHeightField_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f480ULL || rel >= 0x14f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f510 size=96 callers=0 calls=0
*/
void sub_14f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f510ULL || rel >= 0x14f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f570 size=96 callers=0 calls=0
*/
void sub_14f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f570ULL || rel >= 0x14f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f5d0 size=64 callers=0 calls=1
   calls: sub_2ff3e0
*/
void sub_14f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5d0ULL || rel >= 0x14f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f610 size=16 callers=0 calls=0
*/
void sub_14f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f610ULL || rel >= 0x14f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f620 size=16 callers=0 calls=0
*/
void sub_14f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f620ULL || rel >= 0x14f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f630 size=544 callers=0 calls=1
   calls: sub_14f850
*/
void sub_14f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f630ULL || rel >= 0x14f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f850 size=384 callers=1 calls=1
   calls: sub_14fff0
*/
void sub_14f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f850ULL || rel >= 0x14f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f9d0 size=752 callers=1 calls=7
   calls: sub_1af310, sub_1af360, sub_1af3c0, sub_1af570, sub_3007d0, sub_3007e0, sub_300c80
   ref: Gu::HeightField::load: PX_ALLOC failed!
   ref: NonTrackedAlloc
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void NonTrackedAlloc_100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f9d0ULL || rel >= 0x14fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014fcc0 size=80 callers=0 calls=0
*/
void sub_14fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fcc0ULL || rel >= 0x14fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014fd10 size=416 callers=6 calls=0
*/
void sub_14fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fd10ULL || rel >= 0x14feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014feb0 size=320 callers=1 calls=0
*/
void sub_14feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14feb0ULL || rel >= 0x14fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014fff0 size=384 callers=3 calls=2
   calls: sub_14fd10, sub_14feb0
*/
void sub_14fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fff0ULL || rel >= 0x150170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150170 size=208 callers=6 calls=0
*/
void sub_150170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150170ULL || rel >= 0x150240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150240 size=16 callers=0 calls=0
   ref: PxHeightField
*/
void PxHeightField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150240ULL || rel >= 0x150250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150250 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxHeightField
*/
void PxHeightField_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150250ULL || rel >= 0x1502b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001502b0 size=16 callers=0 calls=0
*/
void sub_1502b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502b0ULL || rel >= 0x1502c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001502c0 size=16 callers=0 calls=0
*/
void sub_1502c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502c0ULL || rel >= 0x1502d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001502d0 size=16 callers=0 calls=0
*/
void sub_1502d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502d0ULL || rel >= 0x1502e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001502e0 size=16 callers=0 calls=0
*/
void sub_1502e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502e0ULL || rel >= 0x1502f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001502f0 size=16 callers=0 calls=0
*/
void sub_1502f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502f0ULL || rel >= 0x150300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150300 size=16 callers=0 calls=0
*/
void sub_150300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150300ULL || rel >= 0x150310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150310 size=16 callers=0 calls=0
*/
void sub_150310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150310ULL || rel >= 0x150320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150320 size=480 callers=0 calls=0
*/
void sub_150320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150320ULL || rel >= 0x150500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150500 size=48 callers=0 calls=0
*/
void sub_150500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150500ULL || rel >= 0x150530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150530 size=240 callers=0 calls=0
*/
void sub_150530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150530ULL || rel >= 0x150620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150620 size=16 callers=0 calls=0
*/
void sub_150620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150620ULL || rel >= 0x150630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150630 size=16 callers=0 calls=0
*/
void sub_150630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150630ULL || rel >= 0x150640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150640 size=320 callers=6 calls=0
*/
void sub_150640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150640ULL || rel >= 0x150780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150780 size=272 callers=4 calls=1
   calls: sub_150170
*/
void sub_150780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150780ULL || rel >= 0x150890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150890 size=2688 callers=2 calls=5
   calls: sub_14fd10, sub_151310, sub_151500, sub_151760, sub_151930
*/
void sub_150890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150890ULL || rel >= 0x151310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151310 size=496 callers=2 calls=0
*/
void sub_151310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151310ULL || rel >= 0x151500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151500 size=608 callers=5 calls=0
*/
void sub_151500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151500ULL || rel >= 0x151760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151760 size=464 callers=5 calls=0
*/
void sub_151760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151760ULL || rel >= 0x151930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151930 size=448 callers=6 calls=0
*/
void sub_151930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151930ULL || rel >= 0x151af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151af0 size=496 callers=1 calls=0
*/
void sub_151af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151af0ULL || rel >= 0x151ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151ce0 size=1600 callers=13 calls=1
   calls: sub_b0c90
*/
void sub_151ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ce0ULL || rel >= 0x152320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152320 size=1920 callers=33 calls=1
   calls: sub_152aa0
*/
void sub_152320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152320ULL || rel >= 0x152aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152aa0 size=336 callers=1 calls=0
*/
void sub_152aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152aa0ULL || rel >= 0x152bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152bf0 size=11056 callers=0 calls=7
   calls: sub_155720, sub_157180, sub_158760, sub_190060, sub_1901b0, sub_1903b0, sub_1913c0
*/
void sub_152bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152bf0ULL || rel >= 0x155720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155720 size=6752 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_138ed0
*/
void sub_155720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155720ULL || rel >= 0x157180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00157180 size=5120 callers=5 calls=0
*/
void sub_157180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x157180ULL || rel >= 0x158580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00158580 size=96 callers=0 calls=0
*/
void sub_158580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158580ULL || rel >= 0x1585e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001585e0 size=128 callers=0 calls=0
*/
void sub_1585e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1585e0ULL || rel >= 0x158660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00158660 size=160 callers=0 calls=0
*/
void sub_158660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158660ULL || rel >= 0x158700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00158700 size=16 callers=0 calls=0
*/
void sub_158700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158700ULL || rel >= 0x158710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00158710 size=64 callers=0 calls=0
*/
void sub_158710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158710ULL || rel >= 0x158750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00158750 size=16 callers=0 calls=0
*/
void sub_158750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158750ULL || rel >= 0x158760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00158760 size=4496 callers=22 calls=2
   calls: sub_137070, sub_1598f0
*/
void sub_158760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x158760ULL || rel >= 0x1598f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001598f0 size=4736 callers=1 calls=2
   calls: sub_15ab70, sub_15ad90
*/
void sub_1598f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1598f0ULL || rel >= 0x15ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015ab70 size=544 callers=8 calls=0
*/
void sub_15ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab70ULL || rel >= 0x15ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015ad90 size=864 callers=1 calls=0
*/
void sub_15ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ad90ULL || rel >= 0x15b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015b0f0 size=4320 callers=0 calls=6
   calls: sub_158760, sub_15c1d0, sub_15dea0, sub_15fe20, sub_190060, sub_1913c0
*/
void sub_15b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b0f0ULL || rel >= 0x15c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015c1d0 size=7376 callers=1 calls=4
   calls: sub_131810, sub_131890, sub_138ed0, sub_160e50
*/
void sub_15c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15c1d0ULL || rel >= 0x15dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015dea0 size=8064 callers=1 calls=4
   calls: sub_131810, sub_131890, sub_138ed0, sub_161ac0
*/
void sub_15dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15dea0ULL || rel >= 0x15fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015fe20 size=1456 callers=2 calls=6
   calls: sub_1810d0, sub_18b2c0, sub_18b430, sub_18b460, sub_190060, sub_1903b0
*/
void sub_15fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fe20ULL || rel >= 0x1603d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001603d0 size=16 callers=0 calls=0
*/
void sub_1603d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603d0ULL || rel >= 0x1603e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001603e0 size=16 callers=0 calls=0
*/
void sub_1603e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603e0ULL || rel >= 0x1603f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001603f0 size=48 callers=0 calls=0
*/
void sub_1603f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603f0ULL || rel >= 0x160420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160420 size=64 callers=0 calls=0
*/
void sub_160420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160420ULL || rel >= 0x160460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160460 size=144 callers=0 calls=0
*/
void sub_160460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160460ULL || rel >= 0x1604f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001604f0 size=16 callers=0 calls=0
*/
void sub_1604f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1604f0ULL || rel >= 0x160500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160500 size=64 callers=0 calls=1
   calls: sub_121fc0
*/
void sub_160500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160500ULL || rel >= 0x160540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160540 size=336 callers=0 calls=1
   calls: sub_122060
*/
void sub_160540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160540ULL || rel >= 0x160690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160690 size=144 callers=0 calls=0
*/
void sub_160690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160690ULL || rel >= 0x160720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160720 size=16 callers=0 calls=0
*/
void sub_160720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160720ULL || rel >= 0x160730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160730 size=192 callers=0 calls=1
   calls: sub_121fc0
*/
void sub_160730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160730ULL || rel >= 0x1607f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001607f0 size=480 callers=0 calls=1
   calls: sub_122060
*/
void sub_1607f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607f0ULL || rel >= 0x1609d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001609d0 size=96 callers=0 calls=0
*/
void sub_1609d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609d0ULL || rel >= 0x160a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160a30 size=560 callers=0 calls=0
*/
void sub_160a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a30ULL || rel >= 0x160c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160c60 size=496 callers=0 calls=1
   calls: sub_121fc0
*/
void sub_160c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160c60ULL || rel >= 0x160e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160e50 size=624 callers=3 calls=1
   calls: sub_121fc0
*/
void sub_160e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e50ULL || rel >= 0x1610c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001610c0 size=16 callers=0 calls=0
*/
void sub_1610c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610c0ULL || rel >= 0x1610d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001610d0 size=16 callers=0 calls=0
*/
void sub_1610d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610d0ULL || rel >= 0x1610e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001610e0 size=16 callers=0 calls=0
*/
void sub_1610e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610e0ULL || rel >= 0x1610f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001610f0 size=1248 callers=0 calls=0
*/
void sub_1610f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610f0ULL || rel >= 0x1615d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001615d0 size=1264 callers=9 calls=1
   calls: sub_121fc0
*/
void sub_1615d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1615d0ULL || rel >= 0x161ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00161ac0 size=1392 callers=7 calls=1
   calls: sub_121fc0
*/
void sub_161ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x161ac0ULL || rel >= 0x162030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162030 size=16 callers=0 calls=0
*/
void sub_162030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162030ULL || rel >= 0x162040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162040 size=16 callers=0 calls=0
*/
void sub_162040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162040ULL || rel >= 0x162050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162050 size=16 callers=0 calls=0
*/
void sub_162050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162050ULL || rel >= 0x162060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162060 size=2976 callers=0 calls=5
   calls: sub_158760, sub_162c00, sub_1645e0, sub_190240, sub_1914e0
*/
void sub_162060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162060ULL || rel >= 0x162c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162c00 size=6624 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_138ed0
*/
void sub_162c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162c00ULL || rel >= 0x1645e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001645e0 size=576 callers=2 calls=5
   calls: sub_184120, sub_18b2c0, sub_18b430, sub_190240, sub_191690
*/
void sub_1645e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645e0ULL || rel >= 0x164820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00164820 size=2752 callers=0 calls=1
   calls: sub_135080
*/
void sub_164820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164820ULL || rel >= 0x1652e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001652e0 size=4608 callers=0 calls=8
   calls: sub_158760, sub_1664e0, sub_167ee0, sub_184d10, sub_18b460, sub_190240, sub_1914e0, sub_191690
*/
void sub_1652e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1652e0ULL || rel >= 0x1664e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001664e0 size=6656 callers=2 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_138ed0
*/
void sub_1664e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1664e0ULL || rel >= 0x167ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167ee0 size=6800 callers=2 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_138ed0
*/
void sub_167ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167ee0ULL || rel >= 0x169970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00169970 size=32 callers=0 calls=0
*/
void sub_169970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169970ULL || rel >= 0x169990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00169990 size=64 callers=0 calls=1
   calls: sub_121fc0
*/
void sub_169990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169990ULL || rel >= 0x1699d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001699d0 size=80 callers=0 calls=1
   calls: sub_121fc0
*/
void sub_1699d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1699d0ULL || rel >= 0x169a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00169a20 size=16 callers=0 calls=0
*/
void sub_169a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a20ULL || rel >= 0x169a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00169a30 size=16 callers=0 calls=0
*/
void sub_169a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a30ULL || rel >= 0x169a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00169a40 size=16 callers=0 calls=0
*/
void sub_169a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a40ULL || rel >= 0x169a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00169a50 size=3424 callers=0 calls=5
   calls: sub_151ce0, sub_16adb0, sub_192750, sub_1928b0, sub_193350
*/
void sub_169a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169a50ULL || rel >= 0x16a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a7b0 size=16 callers=0 calls=0
*/
void sub_16a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7b0ULL || rel >= 0x16a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a7c0 size=1504 callers=0 calls=2
   calls: sub_152320, sub_16fbe0
*/
void sub_16a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7c0ULL || rel >= 0x16ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016ada0 size=16 callers=0 calls=0
*/
void sub_16ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ada0ULL || rel >= 0x16adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016adb0 size=1472 callers=6 calls=0
*/
void sub_16adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16adb0ULL || rel >= 0x16b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016b370 size=3040 callers=0 calls=8
   calls: sub_122800, sub_16adb0, sub_16fbe0, sub_192750, sub_1928b0, sub_193350, sub_195b60, sub_b0ee0
*/
void sub_16b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b370ULL || rel >= 0x16bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016bf50 size=1072 callers=0 calls=1
   calls: sub_16fbe0
*/
void sub_16bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bf50ULL || rel >= 0x16c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016c380 size=16 callers=0 calls=0
*/
void sub_16c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c380ULL || rel >= 0x16c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016c390 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh\GuMidphaseInterface.h
*/
void GuMidphaseInterface_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c390ULL || rel >= 0x16c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016c3e0 size=1776 callers=2 calls=2
   calls: sub_192260, sub_1928b0
*/
void sub_16c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3e0ULL || rel >= 0x16cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016cad0 size=1728 callers=2 calls=3
   calls: sub_131890, sub_16c3e0, sub_18efb0
*/
void sub_16cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cad0ULL || rel >= 0x16d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016d190 size=1808 callers=18 calls=2
   calls: sub_16c3e0, sub_18b7e0
*/
void sub_16d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d190ULL || rel >= 0x16d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016d8a0 size=752 callers=4 calls=1
   calls: sub_18e9f0
*/
void sub_16d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8a0ULL || rel >= 0x16db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016db90 size=2672 callers=18 calls=3
   calls: PsArray_161, PsArray_162, sub_16e600
*/
void sub_16db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16db90ULL || rel >= 0x16e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e600 size=1264 callers=2 calls=1
   calls: sub_1928b0
*/
void sub_16e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e600ULL || rel >= 0x16eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016eaf0 size=928 callers=2 calls=2
   calls: PsSort_4, sub_16e600
*/
void sub_16eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eaf0ULL || rel >= 0x16ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016ee90 size=608 callers=3 calls=0
*/
void sub_16ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee90ULL || rel >= 0x16f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f0f0 size=864 callers=2 calls=0
*/
void sub_16f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f0f0ULL || rel >= 0x16f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f450 size=1936 callers=2 calls=0
*/
void sub_16f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f450ULL || rel >= 0x16fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016fbe0 size=2736 callers=18 calls=4
   calls: sub_16ee90, sub_16f0f0, sub_16f450, sub_1928b0
*/
void sub_16fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fbe0ULL || rel >= 0x170690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170690 size=2528 callers=1 calls=2
   calls: sub_16f0f0, sub_16f450
*/
void sub_170690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170690ULL || rel >= 0x171070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171070 size=16 callers=0 calls=0
*/
void sub_171070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171070ULL || rel >= 0x171080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171080 size=112 callers=0 calls=0
*/
void sub_171080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171080ULL || rel >= 0x1710f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001710f0 size=96 callers=0 calls=0
*/
void sub_1710f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1710f0ULL || rel >= 0x171150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171150 size=64 callers=0 calls=0
*/
void sub_171150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171150ULL || rel >= 0x171190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171190 size=576 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::SortedTriangle>::getName() [T = phy
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_162(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171190ULL || rel >= 0x1713d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001713d0 size=1568 callers=1 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::SortedTriangle>::getName() [T = phy
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include\PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSort_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1713d0ULL || rel >= 0x1719f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001719f0 size=5488 callers=0 calls=8
   calls: sub_158760, sub_172f60, sub_173370, sub_1751b0, sub_177a60, sub_179b30, sub_190060, sub_1913c0
*/
void sub_1719f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1719f0ULL || rel >= 0x172f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172f60 size=1040 callers=2 calls=4
   calls: sub_1810d0, sub_18b460, sub_190060, sub_1903b0
*/
void sub_172f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172f60ULL || rel >= 0x173370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173370 size=7744 callers=1 calls=5
   calls: sub_131810, sub_131890, sub_138ed0, sub_160e50, sub_177730
*/
void sub_173370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173370ULL || rel >= 0x1751b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001751b0 size=8384 callers=1 calls=5
   calls: sub_131810, sub_131890, sub_138ed0, sub_161ac0, sub_177730
*/
void sub_1751b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1751b0ULL || rel >= 0x177270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177270 size=608 callers=0 calls=0
*/
void sub_177270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177270ULL || rel >= 0x1774d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001774d0 size=608 callers=0 calls=1
   calls: sub_121fc0
*/
void sub_1774d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1774d0ULL || rel >= 0x177730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177730 size=720 callers=2 calls=1
   calls: sub_121fc0
*/
void sub_177730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177730ULL || rel >= 0x177a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177a00 size=16 callers=0 calls=0
*/
void sub_177a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a00ULL || rel >= 0x177a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177a10 size=64 callers=0 calls=0
*/
void sub_177a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a10ULL || rel >= 0x177a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177a50 size=16 callers=0 calls=0
*/
void sub_177a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a50ULL || rel >= 0x177a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177a60 size=8400 callers=1 calls=5
   calls: sub_131810, sub_131890, sub_138ed0, sub_160e50, sub_17c900
*/
void sub_177a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a60ULL || rel >= 0x179b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179b30 size=9072 callers=3 calls=5
   calls: sub_131810, sub_131890, sub_138ed0, sub_161ac0, sub_17c900
*/
void sub_179b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179b30ULL || rel >= 0x17bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017bea0 size=1296 callers=0 calls=0
*/
void sub_17bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bea0ULL || rel >= 0x17c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c3b0 size=1360 callers=2 calls=1
   calls: sub_121fc0
*/
void sub_17c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c3b0ULL || rel >= 0x17c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c900 size=1472 callers=2 calls=1
   calls: sub_121fc0
*/
void sub_17c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c900ULL || rel >= 0x17cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cec0 size=16 callers=0 calls=0
*/
void sub_17cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cec0ULL || rel >= 0x17ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ced0 size=64 callers=0 calls=0
*/
void sub_17ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ced0ULL || rel >= 0x17cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cf10 size=16 callers=0 calls=0
*/
void sub_17cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cf10ULL || rel >= 0x17cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cf20 size=128 callers=0 calls=0
*/
void sub_17cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cf20ULL || rel >= 0x17cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cfa0 size=288 callers=0 calls=1
   calls: sub_121fc0
*/
void sub_17cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cfa0ULL || rel >= 0x17d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d0c0 size=304 callers=0 calls=1
   calls: sub_121fc0
*/
void sub_17d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d0c0ULL || rel >= 0x17d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d1f0 size=16 callers=0 calls=0
*/
void sub_17d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d1f0ULL || rel >= 0x17d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d200 size=64 callers=0 calls=0
*/
void sub_17d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d200ULL || rel >= 0x17d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d240 size=16 callers=0 calls=0
*/
void sub_17d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d240ULL || rel >= 0x17d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d250 size=2672 callers=3 calls=8
   calls: sub_151ce0, sub_16adb0, sub_16cad0, sub_192750, sub_1928b0, sub_192fe0, sub_300c80, sub_b0c90
*/
void sub_17d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d250ULL || rel >= 0x17dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dcc0 size=1344 callers=0 calls=2
   calls: sub_17d250, sub_18b530
*/
void sub_17dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dcc0ULL || rel >= 0x17e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e200 size=528 callers=0 calls=3
   calls: sub_17d250, sub_18b2c0, sub_18b430
*/
void sub_17e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e200ULL || rel >= 0x17e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e410 size=16 callers=0 calls=0
*/
void sub_17e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e410ULL || rel >= 0x17e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e420 size=1504 callers=0 calls=2
   calls: sub_152320, sub_16d190
*/
void sub_17e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e420ULL || rel >= 0x17ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ea00 size=16 callers=0 calls=0
*/
void sub_17ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ea00ULL || rel >= 0x17ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ea10 size=2704 callers=3 calls=8
   calls: sub_131e90, sub_16adb0, sub_16cad0, sub_16d190, sub_192750, sub_1928b0, sub_192fe0, sub_300c80
*/
void sub_17ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ea10ULL || rel >= 0x17f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f4a0 size=1392 callers=0 calls=3
   calls: sub_17ea10, sub_18b530, sub_b0ee0
*/
void sub_17f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f4a0ULL || rel >= 0x17fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017fa10 size=640 callers=0 calls=4
   calls: sub_17ea10, sub_18b2c0, sub_18b430, sub_b0ee0
*/
void sub_17fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17fa10ULL || rel >= 0x17fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017fc90 size=1120 callers=0 calls=2
   calls: sub_13ad50, sub_16d190
*/
void sub_17fc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17fc90ULL || rel >= 0x1800f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001800f0 size=16 callers=0 calls=0
*/
void sub_1800f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1800f0ULL || rel >= 0x180100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180100 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh\GuMidphaseInterface.h
*/
void GuMidphaseInterface_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180100ULL || rel >= 0x180150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180150 size=720 callers=2 calls=1
   calls: sub_131a10
*/
void sub_180150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180150ULL || rel >= 0x180420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180420 size=3248 callers=4 calls=1
   calls: sub_18f120
*/
void sub_180420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180420ULL || rel >= 0x1810d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001810d0 size=7168 callers=2 calls=3
   calls: sub_180420, sub_182cd0, sub_1830c0
*/
void sub_1810d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1810d0ULL || rel >= 0x182cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182cd0 size=1008 callers=2 calls=0
*/
void sub_182cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182cd0ULL || rel >= 0x1830c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001830c0 size=1408 callers=1 calls=1
   calls: sub_180150
*/
void sub_1830c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1830c0ULL || rel >= 0x183640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183640 size=1952 callers=1 calls=1
   calls: sub_18f120
*/
void sub_183640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183640ULL || rel >= 0x183de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183de0 size=832 callers=2 calls=0
*/
void sub_183de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183de0ULL || rel >= 0x184120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184120 size=1744 callers=1 calls=3
   calls: sub_183640, sub_183de0, sub_1847f0
*/
void sub_184120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184120ULL || rel >= 0x1847f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001847f0 size=1312 callers=2 calls=0
*/
void sub_1847f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1847f0ULL || rel >= 0x184d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184d10 size=1840 callers=2 calls=3
   calls: sub_183de0, sub_1847f0, sub_185440
*/
void sub_184d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184d10ULL || rel >= 0x185440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185440 size=1056 callers=2 calls=0
*/
void sub_185440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185440ULL || rel >= 0x185860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185860 size=1024 callers=1 calls=0
*/
void sub_185860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185860ULL || rel >= 0x185c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185c60 size=2544 callers=0 calls=2
   calls: sub_190060, sub_190b40
*/
void sub_185c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185c60ULL || rel >= 0x186650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186650 size=2016 callers=0 calls=2
   calls: sub_190240, sub_1914e0
*/
void sub_186650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186650ULL || rel >= 0x186e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186e30 size=2240 callers=0 calls=3
   calls: sub_190060, sub_1903b0, sub_190440
*/
void sub_186e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186e30ULL || rel >= 0x1876f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001876f0 size=1168 callers=0 calls=0
*/
void sub_1876f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1876f0ULL || rel >= 0x187b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187b80 size=688 callers=0 calls=0
*/
void sub_187b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187b80ULL || rel >= 0x187e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187e30 size=3296 callers=0 calls=4
   calls: sub_158760, sub_1664e0, sub_167ee0, sub_188b10
*/
void sub_187e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187e30ULL || rel >= 0x188b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188b10 size=528 callers=2 calls=2
   calls: sub_185860, sub_18b460
*/
void sub_188b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188b10ULL || rel >= 0x188d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188d20 size=2656 callers=0 calls=7
   calls: sub_151ce0, sub_16adb0, sub_16eaf0, sub_192750, sub_1928b0, sub_193350, sub_300c80
*/
void sub_188d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188d20ULL || rel >= 0x189780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189780 size=128 callers=0 calls=1
   calls: sub_300c80
*/
void sub_189780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189780ULL || rel >= 0x189800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189800 size=144 callers=0 calls=1
   calls: sub_300c80
*/
void sub_189800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189800ULL || rel >= 0x189890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189890 size=1504 callers=0 calls=2
   calls: sub_152320, sub_16db90
*/
void sub_189890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189890ULL || rel >= 0x189e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189e70 size=16 callers=0 calls=0
*/
void sub_189e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189e70ULL || rel >= 0x189e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189e80 size=3040 callers=0 calls=9
   calls: sub_122800, sub_16adb0, sub_16db90, sub_16eaf0, sub_192750, sub_1928b0, sub_193350, sub_300c80, sub_b0ee0
*/
void sub_189e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189e80ULL || rel >= 0x18aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018aa60 size=128 callers=0 calls=1
   calls: sub_300c80
*/
void sub_18aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18aa60ULL || rel >= 0x18aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018aae0 size=1072 callers=0 calls=1
   calls: sub_16db90
*/
void sub_18aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18aae0ULL || rel >= 0x18af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018af10 size=144 callers=0 calls=1
   calls: sub_300c80
*/
void sub_18af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18af10ULL || rel >= 0x18afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018afa0 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh\GuMidphaseInterface.h
*/
void GuMidphaseInterface_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18afa0ULL || rel >= 0x18aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018aff0 size=368 callers=0 calls=0
*/
void sub_18aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18aff0ULL || rel >= 0x18b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018b160 size=352 callers=0 calls=0
*/
void sub_18b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18b160ULL || rel >= 0x18b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018b2c0 size=368 callers=6 calls=0
*/
void sub_18b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18b2c0ULL || rel >= 0x18b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018b430 size=48 callers=6 calls=0
*/
void sub_18b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18b430ULL || rel >= 0x18b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018b460 size=208 callers=8 calls=0
*/
void sub_18b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18b460ULL || rel >= 0x18b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018b530 size=688 callers=2 calls=1
   calls: sub_b0ee0
*/
void sub_18b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18b530ULL || rel >= 0x18b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018b7e0 size=2640 callers=1 calls=5
   calls: PsArray_161, sub_18c230, sub_18c5a0, sub_18caf0, sub_18da50
*/
void sub_18b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18b7e0ULL || rel >= 0x18c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018c230 size=880 callers=2 calls=0
*/
void sub_18c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18c230ULL || rel >= 0x18c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018c5a0 size=1360 callers=2 calls=0
*/
void sub_18c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18c5a0ULL || rel >= 0x18caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018caf0 size=3936 callers=2 calls=2
   calls: sub_18f120, sub_192260
*/
void sub_18caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18caf0ULL || rel >= 0x18da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018da50 size=4000 callers=2 calls=3
   calls: sub_131890, sub_18f120, sub_192260
*/
void sub_18da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18da50ULL || rel >= 0x18e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e9f0 size=1472 callers=1 calls=3
   calls: sub_18c230, sub_18c5a0, sub_18caf0
*/
void sub_18e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e9f0ULL || rel >= 0x18efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018efb0 size=368 callers=1 calls=1
   calls: sub_18da50
*/
void sub_18efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18efb0ULL || rel >= 0x18f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018f120 size=592 callers=4 calls=0
*/
void sub_18f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18f120ULL || rel >= 0x18f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018f370 size=3312 callers=1 calls=0
*/
void sub_18f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18f370ULL || rel >= 0x190060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190060 size=336 callers=11 calls=0
*/
void sub_190060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190060ULL || rel >= 0x1901b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001901b0 size=144 callers=1 calls=0
*/
void sub_1901b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1901b0ULL || rel >= 0x190240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190240 size=368 callers=9 calls=0
*/
void sub_190240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190240ULL || rel >= 0x1903b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001903b0 size=144 callers=4 calls=1
   calls: sub_190440
*/
void sub_1903b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1903b0ULL || rel >= 0x190440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190440 size=1792 callers=2 calls=0
*/
void sub_190440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190440ULL || rel >= 0x190b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190b40 size=144 callers=1 calls=1
   calls: sub_190bd0
*/
void sub_190b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190b40ULL || rel >= 0x190bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190bd0 size=1472 callers=1 calls=0
*/
void sub_190bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190bd0ULL || rel >= 0x191190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191190 size=560 callers=1 calls=0
*/
void sub_191190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191190ULL || rel >= 0x1913c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001913c0 size=288 callers=5 calls=1
   calls: sub_18f370
*/
void sub_1913c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1913c0ULL || rel >= 0x1914e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001914e0 size=432 callers=5 calls=0
*/
void sub_1914e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1914e0ULL || rel >= 0x191690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191690 size=144 callers=3 calls=1
   calls: sub_191190
*/
void sub_191690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191690ULL || rel >= 0x191720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191720 size=1792 callers=1 calls=0
*/
void sub_191720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191720ULL || rel >= 0x191e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191e20 size=1088 callers=1 calls=0
*/
void sub_191e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191e20ULL || rel >= 0x192260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00192260 size=1264 callers=7 calls=0
*/
void sub_192260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x192260ULL || rel >= 0x192750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00192750 size=352 callers=6 calls=0
*/
void sub_192750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x192750ULL || rel >= 0x1928b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001928b0 size=1232 callers=9 calls=1
   calls: sub_192d80
*/
void sub_1928b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1928b0ULL || rel >= 0x192d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00192d80 size=608 callers=4 calls=2
   calls: sub_191720, sub_191e20
*/
void sub_192d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x192d80ULL || rel >= 0x192fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00192fe0 size=880 callers=2 calls=0
*/
void sub_192fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x192fe0ULL || rel >= 0x193350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00193350 size=896 callers=4 calls=0
*/
void sub_193350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x193350ULL || rel >= 0x1936d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001936d0 size=352 callers=1 calls=0
*/
void sub_1936d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1936d0ULL || rel >= 0x193830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00193830 size=2496 callers=8 calls=2
   calls: sub_194520, sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: Gu::GeometryUnion::computeBounds: Unknown shape type.
*/
void GuBounds(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x193830ULL || rel >= 0x1941f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001941f0 size=816 callers=0 calls=0
*/
void sub_1941f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1941f0ULL || rel >= 0x194520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00194520 size=576 callers=7 calls=0
*/
void sub_194520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x194520ULL || rel >= 0x194760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00194760 size=2304 callers=5 calls=3
   calls: sub_194520, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: Gu::GeometryUnion::computeBounds: Unknown shape type.
*/
void GuBounds_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x194760ULL || rel >= 0x195060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00195060 size=2816 callers=3 calls=1
   calls: sub_132770
*/
void sub_195060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x195060ULL || rel >= 0x195b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00195b60 size=512 callers=3 calls=0
*/
void sub_195b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x195b60ULL || rel >= 0x195d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00195d60 size=16 callers=6 calls=0
*/
void sub_195d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x195d60ULL || rel >= 0x195d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00195d70 size=272 callers=7 calls=0
*/
void sub_195d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x195d70ULL || rel >= 0x195e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00195e80 size=1328 callers=0 calls=4
   calls: GuSweepCapsuleBox, sub_133950, sub_134670, sub_198c90
*/
void sub_195e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x195e80ULL || rel >= 0x1963b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001963b0 size=576 callers=0 calls=2
   calls: sub_134670, sub_198c90
*/
void sub_1963b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1963b0ULL || rel >= 0x1965f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001965f0 size=768 callers=0 calls=2
   calls: GuSweepCapsuleBox, sub_133950
*/
void sub_1965f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1965f0ULL || rel >= 0x1968f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001968f0 size=512 callers=0 calls=1
   calls: sub_1979c0
*/
void sub_1968f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1968f0ULL || rel >= 0x196af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00196af0 size=1248 callers=0 calls=2
   calls: sub_151ce0, sub_19a750
*/
void sub_196af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196af0ULL || rel >= 0x196fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00196fd0 size=16 callers=0 calls=0
*/
void sub_196fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196fd0ULL || rel >= 0x196fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00196fe0 size=2144 callers=1 calls=2
   calls: sub_14a870, sub_14d150
*/
void sub_196fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x196fe0ULL || rel >= 0x197840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00197840 size=16 callers=0 calls=0
*/
void sub_197840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x197840ULL || rel >= 0x197850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00197850 size=368 callers=0 calls=2
   calls: sub_152320, sub_196fe0
*/
void sub_197850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x197850ULL || rel >= 0x1979c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001979c0 size=2800 callers=1 calls=6
   calls: sub_1397c0, sub_139db0, sub_14abe0, sub_195d60, sub_195d70, sub_1984b0
*/
void sub_1979c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1979c0ULL || rel >= 0x1984b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001984b0 size=2016 callers=2 calls=0
*/
void sub_1984b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1984b0ULL || rel >= 0x198c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00198c90 size=1952 callers=2 calls=5
   calls: sub_139db0, sub_14cab0, sub_195d60, sub_195d70, sub_199430
*/
void sub_198c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x198c90ULL || rel >= 0x199430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00199430 size=384 callers=2 calls=0
*/
void sub_199430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x199430ULL || rel >= 0x1995b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001995b0 size=2544 callers=2 calls=5
   calls: NonTrackedAlloc_183, sub_133950, sub_149e50, sub_19a5c0, sub_301c30
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void GuSweepCapsuleBox(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1995b0ULL || rel >= 0x199fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00199fa0 size=816 callers=1 calls=0
*/
void sub_199fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x199fa0ULL || rel >= 0x19a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019a2d0 size=96 callers=1 calls=0
*/
void sub_19a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19a2d0ULL || rel >= 0x19a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019a330 size=80 callers=1 calls=0
*/
void sub_19a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19a330ULL || rel >= 0x19a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019a380 size=576 callers=3 calls=0
*/
void sub_19a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19a380ULL || rel >= 0x19a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019a5c0 size=80 callers=2 calls=0
*/
void sub_19a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19a5c0ULL || rel >= 0x19a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019a610 size=112 callers=8 calls=0
*/
void sub_19a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19a610ULL || rel >= 0x19a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019a680 size=208 callers=1 calls=0
*/
void sub_19a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19a680ULL || rel >= 0x19a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019a750 size=1152 callers=4 calls=0
*/
void sub_19a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19a750ULL || rel >= 0x19abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019abd0 size=528 callers=1 calls=8
   calls: NonTrackedAlloc_102, NonTrackedAlloc_103, NonTrackedAlloc_104, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void PsMutex_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19abd0ULL || rel >= 0x19ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ade0 size=400 callers=2 calls=2
   calls: sub_2ff4b0, sub_300c80
*/
void sub_19ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ade0ULL || rel >= 0x19af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019af70 size=64 callers=0 calls=2
   calls: sub_19ade0, sub_300c80
*/
void sub_19af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19af70ULL || rel >= 0x19afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019afb0 size=144 callers=1 calls=0
*/
void sub_19afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19afb0ULL || rel >= 0x19b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019b040 size=176 callers=1 calls=3
   calls: PsSwitchMutex, sub_19d770, sub_2ff4c0
*/
void sub_19b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19b040ULL || rel >= 0x19b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019b0f0 size=416 callers=1 calls=7
   calls: PsSwitchMutex, sub_19d770, sub_19f960, sub_1a08f0, sub_2ff4c0, sub_300c80, sub_300cb0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::BV4TriangleMesh>::getName() [T = ph
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::RTreeTriangleMesh>::getName() [T = 
*/
void GuMeshFactory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19b0f0ULL || rel >= 0x19b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019b290 size=16 callers=1 calls=0
*/
void sub_19b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19b290ULL || rel >= 0x19b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019b2a0 size=4080 callers=0 calls=15
   calls: GuMeshFactory, NonTrackedAlloc_108, NonTrackedAlloc_109, NonTrackedAlloc_110, sub_19ce70, sub_1a0600, sub_1af360, sub_1af3c0, sub_1af420, sub_1af570, sub_1af910, sub_3007d0
   ... +3 more
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::BV32Tree>::getName() [T = physx::Gu
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned char>::getName() [T = unsigned char]
   ref: Loading triangle mesh failed: Deprecated mesh cooking format. Please recook your mesh in a new cooki
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: BV32 binary image load error.
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]
   ref: RTree binary image load error.
*/
void NonTrackedAlloc_101(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19b2a0ULL || rel >= 0x19c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c290 size=112 callers=2 calls=3
   calls: PsSwitchMutex, sub_19d8e0, sub_2ff4c0
*/
void sub_19c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c290ULL || rel >= 0x19c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c300 size=64 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_19c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c300ULL || rel >= 0x19c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c340 size=256 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_19c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c340ULL || rel >= 0x19c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c440 size=176 callers=1 calls=3
   calls: PsSwitchMutex, sub_19da40, sub_2ff4c0
*/
void sub_19c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c440ULL || rel >= 0x19c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c4f0 size=16 callers=1 calls=0
*/
void sub_19c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c4f0ULL || rel >= 0x19c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c500 size=256 callers=0 calls=6
   calls: PsSwitchMutex, sub_19da40, sub_19e240, sub_2ff4c0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::ConvexMesh>::getName() [T = physx::
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: <allocation names disabled>
*/
void GuMeshFactory_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c500ULL || rel >= 0x19c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c600 size=304 callers=0 calls=8
   calls: NonTrackedAlloc_105, PsSwitchMutex, sub_19da40, sub_19e1d0, sub_2ff3e0, sub_2ff4c0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::ConvexMesh>::getName() [T = physx::
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: <allocation names disabled>
*/
void GuMeshFactory_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c600ULL || rel >= 0x19c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c730 size=112 callers=1 calls=3
   calls: PsSwitchMutex, sub_19dbb0, sub_2ff4c0
*/
void sub_19c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c730ULL || rel >= 0x19c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c7a0 size=64 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_19c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c7a0ULL || rel >= 0x19c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c7e0 size=256 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_19c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c7e0ULL || rel >= 0x19c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c8e0 size=176 callers=1 calls=3
   calls: PsSwitchMutex, sub_19dd10, sub_2ff4c0
*/
void sub_19c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c8e0ULL || rel >= 0x19c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019c990 size=256 callers=1 calls=6
   calls: PsSwitchMutex, sub_14f180, sub_19dd10, sub_2ff4c0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::HeightField>::getName() [T = physx:
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: <allocation names disabled>
*/
void GuMeshFactory_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19c990ULL || rel >= 0x19ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ca90 size=304 callers=0 calls=8
   calls: NonTrackedAlloc_100, PsSwitchMutex, sub_14f130, sub_19dd10, sub_2ff3e0, sub_2ff4c0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::HeightField>::getName() [T = physx:
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: <allocation names disabled>
*/
void GuMeshFactory_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ca90ULL || rel >= 0x19cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019cbc0 size=112 callers=2 calls=3
   calls: PsSwitchMutex, sub_19de80, sub_2ff4c0
*/
void sub_19cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19cbc0ULL || rel >= 0x19cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019cc30 size=64 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_19cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19cc30ULL || rel >= 0x19cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019cc70 size=256 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_19cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19cc70ULL || rel >= 0x19cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019cd70 size=144 callers=1 calls=3
   calls: PsArray_163, PsSwitchMutex, sub_2ff4c0
*/
void sub_19cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19cd70ULL || rel >= 0x19ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ce00 size=112 callers=0 calls=0
*/
void sub_19ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ce00ULL || rel >= 0x19ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ce70 size=192 callers=1 calls=4
   calls: sub_19d030, sub_19f4a0, sub_19f4c0, sub_19f550
*/
void sub_19ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ce70ULL || rel >= 0x19cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019cf30 size=112 callers=0 calls=1
   calls: sub_300c80
*/
void sub_19cf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19cf30ULL || rel >= 0x19cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019cfa0 size=144 callers=0 calls=2
   calls: sub_19d030, sub_300c80
*/
void sub_19cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19cfa0ULL || rel >= 0x19d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d030 size=400 callers=5 calls=2
   calls: sub_1a0620, sub_300c80
*/
void sub_19d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d030ULL || rel >= 0x19d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d1c0 size=64 callers=0 calls=2
   calls: sub_19d030, sub_300c80
*/
void sub_19d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d1c0ULL || rel >= 0x19d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d200 size=80 callers=0 calls=2
   calls: sub_19f4c0, sub_19f570
*/
void sub_19d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d200ULL || rel >= 0x19d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d250 size=112 callers=0 calls=4
   calls: sub_19d030, sub_19f4c0, sub_19f570, sub_300c80
*/
void sub_19d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d250ULL || rel >= 0x19d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d2c0 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_102(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d2c0ULL || rel >= 0x19d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d450 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_103(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d450ULL || rel >= 0x19d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d5e0 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_104(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d5e0ULL || rel >= 0x19d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d770 size=368 callers=3 calls=1
   calls: NonTrackedAlloc_102
*/
void sub_19d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d770ULL || rel >= 0x19d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019d8e0 size=352 callers=1 calls=0
*/
void sub_19d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19d8e0ULL || rel >= 0x19da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019da40 size=368 callers=4 calls=1
   calls: NonTrackedAlloc_103
*/
void sub_19da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19da40ULL || rel >= 0x19dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019dbb0 size=352 callers=1 calls=0
*/
void sub_19dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19dbb0ULL || rel >= 0x19dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019dd10 size=368 callers=4 calls=1
   calls: NonTrackedAlloc_104
*/
void sub_19dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19dd10ULL || rel >= 0x19de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019de80 size=352 callers=1 calls=0
*/
void sub_19de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19de80ULL || rel >= 0x19dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019dfe0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::GuMeshFactoryListener *>::getName() [T 
   ref: <allocation names disabled>
*/
void PsArray_163(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19dfe0ULL || rel >= 0x19e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e170 size=96 callers=0 calls=0
*/
void sub_19e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e170ULL || rel >= 0x19e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e1d0 size=112 callers=1 calls=0
*/
void sub_19e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e1d0ULL || rel >= 0x19e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e240 size=176 callers=1 calls=0
*/
void sub_19e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e240ULL || rel >= 0x19e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e2f0 size=144 callers=2 calls=2
   calls: sub_19f030, sub_300c80
*/
void sub_19e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e2f0ULL || rel >= 0x19e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e380 size=16 callers=0 calls=0
*/
void sub_19e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e380ULL || rel >= 0x19e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e390 size=64 callers=0 calls=2
   calls: sub_19e2f0, sub_300c80
*/
void sub_19e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e390ULL || rel >= 0x19e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e3d0 size=64 callers=0 calls=2
   calls: sub_19e2f0, sub_300c80
*/
void sub_19e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e3d0ULL || rel >= 0x19e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e410 size=64 callers=0 calls=0
*/
void sub_19e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e410ULL || rel >= 0x19e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e450 size=240 callers=0 calls=0
*/
void sub_19e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e450ULL || rel >= 0x19e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e540 size=256 callers=0 calls=1
   calls: sub_19f440
*/
void sub_19e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e540ULL || rel >= 0x19e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e640 size=1712 callers=1 calls=14
   calls: NonTrackedAlloc_107, sub_19f010, sub_19f030, sub_1af310, sub_1af360, sub_1af3c0, sub_1af420, sub_1af4b0, sub_1af570, sub_1af740, sub_3007d0, sub_3007e0
   ... +2 more
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: <allocation names disabled>
   ref: Loading convex mesh failed: Deprecated mesh cooking format.
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::BigConvexData>::getName() [T = physx::B
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_105(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e640ULL || rel >= 0x19ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ecf0 size=64 callers=0 calls=1
   calls: sub_2ff3e0
*/
void sub_19ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ecf0ULL || rel >= 0x19ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ed30 size=240 callers=0 calls=2
   calls: sub_19c730, sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: Gu::ConvexMesh::release: double deletion detected!
*/
void GuConvexMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ed30ULL || rel >= 0x19ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ee20 size=16 callers=0 calls=0
*/
void sub_19ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ee20ULL || rel >= 0x19ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ee30 size=16 callers=0 calls=0
*/
void sub_19ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ee30ULL || rel >= 0x19ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ee40 size=16 callers=0 calls=0
*/
void sub_19ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ee40ULL || rel >= 0x19ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ee50 size=112 callers=0 calls=0
*/
void sub_19ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ee50ULL || rel >= 0x19eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019eec0 size=64 callers=0 calls=0
*/
void sub_19eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19eec0ULL || rel >= 0x19ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ef00 size=16 callers=0 calls=0
   ref: PxConvexMesh
*/
void PxConvexMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ef00ULL || rel >= 0x19ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ef10 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxConvexMesh
*/
void PxConvexMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ef10ULL || rel >= 0x19ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ef70 size=16 callers=0 calls=0
*/
void sub_19ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ef70ULL || rel >= 0x19ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ef80 size=32 callers=0 calls=0
*/
void sub_19ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ef80ULL || rel >= 0x19efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019efa0 size=80 callers=0 calls=0
*/
void sub_19efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19efa0ULL || rel >= 0x19eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019eff0 size=16 callers=0 calls=0
*/
void sub_19eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19eff0ULL || rel >= 0x19f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f000 size=16 callers=0 calls=0
*/
void sub_19f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f000ULL || rel >= 0x19f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f010 size=32 callers=1 calls=0
*/
void sub_19f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f010ULL || rel >= 0x19f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f030 size=160 callers=2 calls=1
   calls: sub_300c80
*/
void sub_19f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f030ULL || rel >= 0x19f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f0d0 size=432 callers=1 calls=4
   calls: sub_1af360, sub_1af740, sub_1afa60, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_106(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f0d0ULL || rel >= 0x19f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f280 size=272 callers=1 calls=4
   calls: NonTrackedAlloc_106, sub_1af360, sub_1af740, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_107(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f280ULL || rel >= 0x19f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f390 size=176 callers=0 calls=0
*/
void sub_19f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f390ULL || rel >= 0x19f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f440 size=96 callers=1 calls=0
*/
void sub_19f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f440ULL || rel >= 0x19f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f4a0 size=32 callers=2 calls=0
*/
void sub_19f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f4a0ULL || rel >= 0x19f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f4c0 size=64 callers=9 calls=1
   calls: sub_300c80
*/
void sub_19f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f4c0ULL || rel >= 0x19f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f500 size=80 callers=1 calls=0
*/
void sub_19f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f500ULL || rel >= 0x19f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f550 size=32 callers=2 calls=0
*/
void sub_19f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f550ULL || rel >= 0x19f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f570 size=80 callers=7 calls=1
   calls: sub_300c80
*/
void sub_19f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f570ULL || rel >= 0x19f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f5c0 size=160 callers=1 calls=0
*/
void sub_19f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f5c0ULL || rel >= 0x19f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f660 size=16 callers=1 calls=0
*/
void sub_19f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f660ULL || rel >= 0x19f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f670 size=96 callers=1 calls=0
*/
void sub_19f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f670ULL || rel >= 0x19f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f6d0 size=48 callers=1 calls=0
*/
void sub_19f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f6d0ULL || rel >= 0x19f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f700 size=608 callers=1 calls=6
   calls: sub_1af280, sub_1af360, sub_1af3c0, sub_1af420, sub_1af4b0, sub_300c80
   ref: NonTrackedAlloc
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void NonTrackedAlloc_108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f700ULL || rel >= 0x19f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019f960 size=192 callers=1 calls=8
   calls: sub_19f4a0, sub_19f4c0, sub_19f500, sub_19f550, sub_19f570, sub_19f5c0, sub_19fe10, sub_19ff40
*/
void sub_19f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19f960ULL || rel >= 0x19fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fa20 size=208 callers=0 calls=5
   calls: sub_19f4c0, sub_19f660, sub_19f6d0, sub_19ff40, sub_1a02c0
*/
void sub_19fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fa20ULL || rel >= 0x19faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019faf0 size=48 callers=0 calls=1
   calls: sub_19f670
*/
void sub_19faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19faf0ULL || rel >= 0x19fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fb20 size=16 callers=0 calls=0
   ref: PxBVH34TriangleMesh
*/
void PxBVH34TriangleMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fb20ULL || rel >= 0x19fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fb30 size=80 callers=0 calls=2
   calls: sub_19f4c0, sub_19f570
*/
void sub_19fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fb30ULL || rel >= 0x19fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

