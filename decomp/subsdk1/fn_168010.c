/* subsdk1 functions 00168010..001c8eb0 (8 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00168010 size=16 callers=0 calls=0
*/
void sub_168010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168010ULL || rel >= 0x168020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168020 size=80 callers=0 calls=2
   calls: sub_184ba0, sub_35f0
*/
void sub_168020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168020ULL || rel >= 0x168070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168070 size=16 callers=0 calls=0
*/
void sub_168070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168070ULL || rel >= 0x168080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168080 size=16 callers=0 calls=0
*/
void sub_168080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168080ULL || rel >= 0x168090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168090 size=16 callers=0 calls=0
*/
void sub_168090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168090ULL || rel >= 0x1680a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001680a0 size=16 callers=0 calls=0
*/
void sub_1680a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680a0ULL || rel >= 0x1680b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001680b0 size=128 callers=0 calls=0
*/
void sub_1680b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1680b0ULL || rel >= 0x168130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168130 size=16 callers=0 calls=0
*/
void sub_168130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168130ULL || rel >= 0x168140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168140 size=16 callers=0 calls=0
*/
void sub_168140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168140ULL || rel >= 0x168150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168150 size=160 callers=1 calls=0
*/
void sub_168150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168150ULL || rel >= 0x1681f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001681f0 size=80 callers=1 calls=0
*/
void sub_1681f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1681f0ULL || rel >= 0x168240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168240 size=1680 callers=1 calls=0
*/
void sub_168240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168240ULL || rel >= 0x1688d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001688d0 size=816 callers=1 calls=4
   calls: sub_9b3e0, sub_9d420, sub_a8030, sub_aae70
*/
void sub_1688d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1688d0ULL || rel >= 0x168c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168c00 size=208 callers=1 calls=3
   calls: sub_a7370, sub_a73d0, sub_aae70
*/
void sub_168c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168c00ULL || rel >= 0x168cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00168cd0 size=1520 callers=1 calls=14
   calls: sub_168c00, sub_3b000, sub_9b3e0, sub_9b920, sub_9d420, sub_a70d0, sub_a7110, sub_a7370, sub_a7800, sub_a7a30, sub_a8030, sub_aae70
   ... +2 more
*/
void sub_168cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x168cd0ULL || rel >= 0x1692c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001692c0 size=240 callers=2 calls=2
   calls: sub_a7150, sub_a7850
*/
void sub_1692c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1692c0ULL || rel >= 0x1693b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001693b0 size=432 callers=1 calls=3
   calls: sub_a7310, sub_a78d0, sub_ae660
*/
void sub_1693b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1693b0ULL || rel >= 0x169560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00169560 size=368 callers=1 calls=3
   calls: sub_a7310, sub_a78d0, sub_ae660
*/
void sub_169560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x169560ULL || rel >= 0x1696d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001696d0 size=528 callers=1 calls=0
*/
void sub_1696d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1696d0ULL || rel >= 0x1698e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001698e0 size=2912 callers=1 calls=15
   calls: sub_11cf60, sub_1688d0, sub_168cd0, sub_1692c0, sub_1693b0, sub_169560, sub_1696d0, sub_a7090, sub_a73d0, sub_a92d0, sub_aae70, sub_ad830
   ... +3 more
*/
void sub_1698e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1698e0ULL || rel >= 0x16a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a440 size=176 callers=0 calls=2
   calls: sub_35320, sub_428a0
*/
void sub_16a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a440ULL || rel >= 0x16a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a4f0 size=176 callers=0 calls=1
   calls: sub_428a0
*/
void sub_16a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a4f0ULL || rel >= 0x16a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a5a0 size=32 callers=0 calls=0
*/
void sub_16a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a5a0ULL || rel >= 0x16a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a5c0 size=192 callers=0 calls=3
   calls: sub_11a010, sub_9a240, sub_9a600
*/
void sub_16a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a5c0ULL || rel >= 0x16a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a680 size=16 callers=0 calls=0
*/
void sub_16a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a680ULL || rel >= 0x16a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a690 size=32 callers=0 calls=0
*/
void sub_16a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a690ULL || rel >= 0x16a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a6b0 size=80 callers=0 calls=0
*/
void sub_16a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a6b0ULL || rel >= 0x16a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a700 size=32 callers=0 calls=0
*/
void sub_16a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a700ULL || rel >= 0x16a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a720 size=48 callers=0 calls=0
*/
void sub_16a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a720ULL || rel >= 0x16a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a750 size=16 callers=0 calls=0
*/
void sub_16a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a750ULL || rel >= 0x16a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a760 size=128 callers=0 calls=0
*/
void sub_16a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a760ULL || rel >= 0x16a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016a7e0 size=1264 callers=0 calls=5
   calls: sub_66bc0, sub_66c00, sub_9adb0, sub_aae70, sub_abee0
*/
void sub_16a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16a7e0ULL || rel >= 0x16acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016acd0 size=544 callers=0 calls=6
   calls: sub_3af80, sub_9ae40, sub_abee0, sub_ad9d0, sub_adf00, sub_aebd0
*/
void sub_16acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16acd0ULL || rel >= 0x16aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016aef0 size=816 callers=0 calls=4
   calls: sub_66bc0, sub_66c00, sub_9adb0, sub_abee0
*/
void sub_16aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16aef0ULL || rel >= 0x16b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016b220 size=1216 callers=0 calls=0
*/
void sub_16b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b220ULL || rel >= 0x16b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016b6e0 size=304 callers=0 calls=1
   calls: sub_428a0
*/
void sub_16b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6e0ULL || rel >= 0x16b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016b810 size=944 callers=0 calls=7
   calls: sub_66bc0, sub_66c00, sub_67010, sub_9adb0, sub_9ae80, sub_9b0a0, sub_abee0
*/
void sub_16b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b810ULL || rel >= 0x16bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016bbc0 size=528 callers=0 calls=3
   calls: sub_1189d0, sub_9a240, sub_9adb0
*/
void sub_16bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bbc0ULL || rel >= 0x16bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016bdd0 size=16 callers=0 calls=0
*/
void sub_16bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bdd0ULL || rel >= 0x16bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016bde0 size=112 callers=0 calls=1
   calls: sub_69b70
*/
void sub_16bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bde0ULL || rel >= 0x16be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016be50 size=32 callers=0 calls=0
*/
void sub_16be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16be50ULL || rel >= 0x16be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016be70 size=704 callers=0 calls=3
   calls: sub_126e30, sub_9a050, sub_ca890
*/
void sub_16be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16be70ULL || rel >= 0x16c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016c130 size=1024 callers=0 calls=1
   calls: sub_126e30
*/
void sub_16c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c130ULL || rel >= 0x16c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016c530 size=96 callers=0 calls=0
*/
void sub_16c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c530ULL || rel >= 0x16c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016c590 size=64 callers=0 calls=0
*/
void sub_16c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c590ULL || rel >= 0x16c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016c5d0 size=1200 callers=1 calls=1
   calls: sub_88b40
*/
void sub_16c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5d0ULL || rel >= 0x16ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016ca80 size=128 callers=0 calls=1
   calls: sub_16cb00
*/
void sub_16ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca80ULL || rel >= 0x16cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016cb00 size=832 callers=3 calls=6
   calls: sub_636a0, sub_636f0, sub_66820, sub_b7e20, sub_b89a0, sub_b8b40
*/
void sub_16cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb00ULL || rel >= 0x16ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016ce40 size=576 callers=0 calls=8
   calls: ffffff, sub_16c5d0, sub_16cb00, sub_b7e20, sub_b7e40, sub_ccb10, sub_cd4d0, sub_ce600
*/
void sub_16ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce40ULL || rel >= 0x16d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016d080 size=1616 callers=2 calls=3
   calls: sub_b7e20, sub_b89a0, sub_b8b90
   ref: 333333
   ref: ffffff
*/
void ffffff(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d080ULL || rel >= 0x16d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016d6d0 size=320 callers=0 calls=0
*/
void sub_16d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6d0ULL || rel >= 0x16d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016d810 size=32 callers=0 calls=0
*/
void sub_16d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d810ULL || rel >= 0x16d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016d830 size=16 callers=0 calls=0
*/
void sub_16d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d830ULL || rel >= 0x16d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016d840 size=944 callers=1 calls=6
   calls: sub_65420, sub_9b3e0, sub_a70d0, sub_a7150, sub_a8030, sub_a94f0
*/
void sub_16d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d840ULL || rel >= 0x16dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016dbf0 size=224 callers=0 calls=2
   calls: sub_16d840, sub_aa640
*/
void sub_16dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dbf0ULL || rel >= 0x16dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016dcd0 size=224 callers=0 calls=0
*/
void sub_16dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dcd0ULL || rel >= 0x16ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016ddb0 size=400 callers=0 calls=5
   calls: sub_117330, sub_1173a0, sub_117400, sub_1182c0, sub_55200
*/
void sub_16ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ddb0ULL || rel >= 0x16df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016df40 size=288 callers=0 calls=0
*/
void sub_16df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16df40ULL || rel >= 0x16e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e060 size=1344 callers=1 calls=10
   calls: sub_117330, sub_1173a0, sub_117400, sub_1182c0, sub_3d090, sub_3d960, sub_65420, sub_9a050, sub_a7110, sub_a8a50
*/
void sub_16e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e060ULL || rel >= 0x16e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e5a0 size=208 callers=0 calls=1
   calls: sub_16e060
*/
void sub_16e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e5a0ULL || rel >= 0x16e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e670 size=256 callers=0 calls=2
   calls: sub_1128d0, sub_86810
*/
void sub_16e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e670ULL || rel >= 0x16e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e770 size=144 callers=0 calls=1
   calls: sub_118290
*/
void sub_16e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e770ULL || rel >= 0x16e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e800 size=16 callers=0 calls=0
*/
void sub_16e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e800ULL || rel >= 0x16e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e810 size=16 callers=0 calls=0
*/
void sub_16e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e810ULL || rel >= 0x16e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e820 size=16 callers=0 calls=0
*/
void sub_16e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e820ULL || rel >= 0x16e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e830 size=48 callers=0 calls=0
*/
void sub_16e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e830ULL || rel >= 0x16e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e860 size=400 callers=2 calls=4
   calls: sub_35320, sub_62320, sub_9c950, sub_a0760
*/
void sub_16e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e860ULL || rel >= 0x16e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e9f0 size=352 callers=16 calls=1
   calls: sub_16e860
*/
void sub_16e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e9f0ULL || rel >= 0x16eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016eb50 size=384 callers=1 calls=5
   calls: sub_12a470, sub_67010, sub_9b0a0, sub_9b3e0, sub_a70d0
*/
void sub_16eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eb50ULL || rel >= 0x16ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016ecd0 size=848 callers=95 calls=9
   calls: sub_35320, sub_3af50, sub_3b040, sub_62320, sub_66bc0, sub_66c30, sub_9a610, sub_9ca30, sub_a70d0
*/
void sub_16ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ecd0ULL || rel >= 0x16f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f020 size=144 callers=10 calls=2
   calls: sub_9ca30, sub_a70d0
*/
void sub_16f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f020ULL || rel >= 0x16f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f0b0 size=512 callers=14 calls=8
   calls: sub_35320, sub_9a050, sub_9b3d0, sub_9b3e0, sub_9b920, sub_9ca30, sub_a70d0, sub_a8030
*/
void sub_16f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f0b0ULL || rel >= 0x16f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f2b0 size=240 callers=1 calls=3
   calls: sub_9a050, sub_9b3e0, sub_a8030
*/
void sub_16f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f2b0ULL || rel >= 0x16f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f3a0 size=224 callers=1 calls=2
   calls: sub_9a050, sub_a7800
*/
void sub_16f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3a0ULL || rel >= 0x16f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f480 size=144 callers=0 calls=1
   calls: sub_16f510
*/
void sub_16f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f480ULL || rel >= 0x16f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f510 size=2048 callers=5 calls=16
   calls: sub_11a010, sub_129410, sub_12a470, sub_3afa0, sub_66c70, sub_66f90, sub_67010, sub_67750, sub_67af0, sub_9a240, sub_9ae40, sub_9c950
   ... +4 more
*/
void sub_16f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f510ULL || rel >= 0x16fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016fd10 size=144 callers=2 calls=1
   calls: sub_13d4b0
*/
void sub_16fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fd10ULL || rel >= 0x16fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016fda0 size=496 callers=1 calls=5
   calls: sub_13d4b0, sub_61f10, sub_62050, sub_9b3d0, sub_9c950
*/
void sub_16fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16fda0ULL || rel >= 0x16ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016ff90 size=336 callers=7 calls=1
   calls: sub_16ecd0
*/
void sub_16ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ff90ULL || rel >= 0x1700e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001700e0 size=176 callers=2 calls=2
   calls: sub_13d050, sub_13d4b0
*/
void sub_1700e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1700e0ULL || rel >= 0x170190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170190 size=288 callers=2 calls=3
   calls: sub_129410, sub_9b3d0, sub_9ca30
*/
void sub_170190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170190ULL || rel >= 0x1702b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001702b0 size=272 callers=0 calls=3
   calls: sub_13d050, sub_13d4b0, sub_16ecd0
*/
void sub_1702b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1702b0ULL || rel >= 0x1703c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001703c0 size=304 callers=2 calls=3
   calls: sub_9a050, sub_9c950, sub_a70d0
*/
void sub_1703c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1703c0ULL || rel >= 0x1704f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001704f0 size=224 callers=0 calls=3
   calls: sub_13d050, sub_13d4b0, sub_16ecd0
*/
void sub_1704f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704f0ULL || rel >= 0x1705d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001705d0 size=1024 callers=0 calls=6
   calls: sub_129650, sub_13d050, sub_13d4b0, sub_16e9f0, sub_16ecd0, sub_a5f80
*/
void sub_1705d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705d0ULL || rel >= 0x1709d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001709d0 size=16 callers=0 calls=0
*/
void sub_1709d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1709d0ULL || rel >= 0x1709e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001709e0 size=672 callers=0 calls=8
   calls: sub_11e390, sub_13d050, sub_13d4b0, sub_16e9f0, sub_16ecd0, sub_16f0b0, sub_16f2b0, sub_16f3a0
*/
void sub_1709e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1709e0ULL || rel >= 0x170c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170c80 size=1296 callers=0 calls=5
   calls: sub_13fe90, sub_1400a0, sub_9a050, sub_a70d0, sub_a7730
*/
void sub_170c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c80ULL || rel >= 0x171190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171190 size=864 callers=0 calls=2
   calls: sub_35320, sub_9ca30
*/
void sub_171190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171190ULL || rel >= 0x1714f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001714f0 size=176 callers=0 calls=0
*/
void sub_1714f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1714f0ULL || rel >= 0x1715a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001715a0 size=768 callers=0 calls=1
   calls: sub_673d0
*/
void sub_1715a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1715a0ULL || rel >= 0x1718a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001718a0 size=416 callers=0 calls=1
   calls: sub_9d2f0
*/
void sub_1718a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1718a0ULL || rel >= 0x171a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171a40 size=912 callers=0 calls=8
   calls: sub_35320, sub_9a1e0, sub_9bed0, sub_9ca30, sub_a7370, sub_a7730, sub_a78d0, sub_a7940
*/
void sub_171a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171a40ULL || rel >= 0x171dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171dd0 size=528 callers=0 calls=5
   calls: sub_16ecd0, sub_636f0, sub_9b3e0, sub_9d420, sub_a8030
*/
void sub_171dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171dd0ULL || rel >= 0x171fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171fe0 size=944 callers=0 calls=7
   calls: sub_11a010, sub_16ecd0, sub_16f510, sub_66c70, sub_66d40, sub_9d320, sub_a7110
*/
void sub_171fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171fe0ULL || rel >= 0x172390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172390 size=16 callers=0 calls=0
*/
void sub_172390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172390ULL || rel >= 0x1723a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001723a0 size=2224 callers=0 calls=12
   calls: sub_35320, sub_3af50, sub_3b010, sub_621f0, sub_623c0, sub_9b3e0, sub_9bed0, sub_9ca30, sub_a70d0, sub_a73d0, sub_a8f90, sub_a9060
*/
void sub_1723a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1723a0ULL || rel >= 0x172c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172c50 size=256 callers=0 calls=3
   calls: sub_16ecd0, sub_a7890, sub_a7a30
*/
void sub_172c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172c50ULL || rel >= 0x172d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172d50 size=18208 callers=0 calls=55
   calls: sub_11a010, sub_11e390, sub_11ffe0, sub_129410, sub_13d050, sub_13d4b0, sub_16e9f0, sub_16eb50, sub_16ecd0, sub_16f0b0, sub_16f510, sub_16fda0
   ... +43 more
*/
void sub_172d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172d50ULL || rel >= 0x177470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177470 size=384 callers=2 calls=0
*/
void sub_177470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177470ULL || rel >= 0x1775f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001775f0 size=576 callers=1 calls=1
   calls: sub_b8aa0
*/
void sub_1775f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1775f0ULL || rel >= 0x177830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177830 size=3216 callers=0 calls=11
   calls: sub_177470, sub_1775f0, sub_63c30, sub_64990, sub_67290, sub_67630, sub_67750, sub_67860, sub_679f0, sub_67ab0, sub_9a740
*/
void sub_177830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177830ULL || rel >= 0x1784c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001784c0 size=208 callers=2 calls=2
   calls: sub_3620, sub_ddaf0
*/
void sub_1784c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1784c0ULL || rel >= 0x178590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178590 size=224 callers=1 calls=2
   calls: sub_b81b0, sub_b89c0
*/
void sub_178590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178590ULL || rel >= 0x178670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178670 size=80 callers=0 calls=0
*/
void sub_178670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178670ULL || rel >= 0x1786c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001786c0 size=512 callers=2 calls=0
*/
void sub_1786c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786c0ULL || rel >= 0x1788c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001788c0 size=272 callers=2 calls=0
*/
void sub_1788c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788c0ULL || rel >= 0x1789d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001789d0 size=64 callers=11 calls=0
*/
void sub_1789d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789d0ULL || rel >= 0x178a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178a10 size=80 callers=0 calls=0
*/
void sub_178a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178a10ULL || rel >= 0x178a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178a60 size=208 callers=0 calls=0
*/
void sub_178a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178a60ULL || rel >= 0x178b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178b30 size=64 callers=0 calls=0
*/
void sub_178b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178b30ULL || rel >= 0x178b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178b70 size=320 callers=1 calls=1
   calls: sub_1788c0
*/
void sub_178b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178b70ULL || rel >= 0x178cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178cb0 size=304 callers=4 calls=0
*/
void sub_178cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178cb0ULL || rel >= 0x178de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178de0 size=288 callers=2 calls=0
*/
void sub_178de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178de0ULL || rel >= 0x178f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178f00 size=528 callers=2 calls=1
   calls: sub_67cd0
*/
void sub_178f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f00ULL || rel >= 0x179110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179110 size=272 callers=1 calls=1
   calls: sub_67cd0
*/
void sub_179110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179110ULL || rel >= 0x179220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179220 size=480 callers=0 calls=2
   calls: sub_63c30, sub_9a740
*/
void sub_179220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179220ULL || rel >= 0x179400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179400 size=256 callers=4 calls=1
   calls: sub_ddbd0
*/
void sub_179400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179400ULL || rel >= 0x179500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179500 size=112 callers=0 calls=1
   calls: sub_38b0
*/
void sub_179500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179500ULL || rel >= 0x179570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179570 size=64 callers=0 calls=1
   calls: sub_35f0
*/
void sub_179570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179570ULL || rel >= 0x1795b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001795b0 size=128 callers=0 calls=1
   calls: sub_38b0
*/
void sub_1795b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1795b0ULL || rel >= 0x179630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179630 size=112 callers=0 calls=1
   calls: sub_38b0
*/
void sub_179630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179630ULL || rel >= 0x1796a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001796a0 size=160 callers=0 calls=4
   calls: sub_b7e20, sub_b89a0, sub_dd3c0, sub_de350
*/
void sub_1796a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796a0ULL || rel >= 0x179740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179740 size=336 callers=1 calls=0
*/
void sub_179740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179740ULL || rel >= 0x179890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179890 size=656 callers=1 calls=2
   calls: sub_35f0, sub_55320
*/
void sub_179890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179890ULL || rel >= 0x179b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179b20 size=256 callers=2 calls=1
   calls: sub_55950
*/
void sub_179b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179b20ULL || rel >= 0x179c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179c20 size=2608 callers=0 calls=12
   calls: sub_179740, sub_179890, sub_179b20, sub_17a650, sub_38b0, sub_55140, sub_55320, sub_55400, sub_55570, sub_55950, sub_ddb80, sub_ddcc0
*/
void sub_179c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c20ULL || rel >= 0x17a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a650 size=624 callers=2 calls=2
   calls: sub_636f0, sub_9a740
*/
void sub_17a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a650ULL || rel >= 0x17a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a8c0 size=1104 callers=2 calls=4
   calls: sub_17a650, sub_55190, sub_55320, sub_66d40
*/
void sub_17a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a8c0ULL || rel >= 0x17ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ad10 size=336 callers=1 calls=1
   calls: sub_ddc90
*/
void sub_17ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad10ULL || rel >= 0x17ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ae60 size=1184 callers=0 calls=5
   calls: sub_17ad10, sub_17b300, sub_38b0, sub_9a740, sub_b7e20
*/
void sub_17ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ae60ULL || rel >= 0x17b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017b300 size=608 callers=1 calls=2
   calls: sub_126f00, sub_1415d0
*/
void sub_17b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b300ULL || rel >= 0x17b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017b560 size=80 callers=0 calls=1
   calls: sub_17a8c0
*/
void sub_17b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b560ULL || rel >= 0x17b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017b5b0 size=880 callers=1 calls=1
   calls: sub_ba9f0
*/
void sub_17b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5b0ULL || rel >= 0x17b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017b920 size=288 callers=3 calls=1
   calls: sub_17b5b0
*/
void sub_17b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b920ULL || rel >= 0x17ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ba40 size=912 callers=3 calls=0
*/
void sub_17ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ba40ULL || rel >= 0x17bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017bdd0 size=2240 callers=0 calls=8
   calls: sub_179b20, sub_17b920, sub_17ba40, sub_55140, sub_55570, sub_55950, sub_b8aa0, sub_ddcc0
*/
void sub_17bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bdd0ULL || rel >= 0x17c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c690 size=480 callers=1 calls=4
   calls: sub_3620, sub_55190, sub_88b40, sub_a9a30
*/
void sub_17c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c690ULL || rel >= 0x17c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c870 size=64 callers=0 calls=0
*/
void sub_17c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c870ULL || rel >= 0x17c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c8b0 size=5392 callers=0 calls=11
   calls: sub_17b920, sub_17ba40, sub_17ddc0, sub_9a740, sub_b7e20, sub_b89a0, sub_b8aa0, sub_ba4d0, sub_ddc90, sub_ddcc0, sub_deb60
*/
void sub_17c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c8b0ULL || rel >= 0x17ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ddc0 size=480 callers=1 calls=3
   calls: sub_17dfa0, sub_3d120, sub_ddcc0
*/
void sub_17ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ddc0ULL || rel >= 0x17dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dfa0 size=624 callers=1 calls=1
   calls: sub_ba740
*/
void sub_17dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfa0ULL || rel >= 0x17e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e210 size=800 callers=0 calls=3
   calls: sub_17b920, sub_17ba40, sub_ddcc0
*/
void sub_17e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e210ULL || rel >= 0x17e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e530 size=272 callers=1 calls=1
   calls: sub_184a90
*/
void sub_17e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e530ULL || rel >= 0x17e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e640 size=336 callers=1 calls=0
*/
void sub_17e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e640ULL || rel >= 0x17e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e790 size=1184 callers=2 calls=8
   calls: sub_17e530, sub_17e640, sub_88b40, sub_b7e20, sub_b7e40, sub_b89a0, sub_ddc90, sub_ddcc0
*/
void sub_17e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e790ULL || rel >= 0x17ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ec30 size=1232 callers=1 calls=12
   calls: sub_117330, sub_1173a0, sub_117400, sub_1182c0, sub_11cb10, sub_11d3a0, sub_17e790, sub_636a0, sub_b7e20, sub_b89a0, sub_b8b90, sub_ddc90
*/
void sub_17ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ec30ULL || rel >= 0x17f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f100 size=576 callers=1 calls=3
   calls: sub_14d3f0, sub_9a740, sub_ddc90
*/
void sub_17f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f100ULL || rel >= 0x17f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f340 size=160 callers=0 calls=4
   calls: sub_b7e20, sub_b89a0, sub_dd3c0, sub_df740
*/
void sub_17f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f340ULL || rel >= 0x17f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f3e0 size=224 callers=0 calls=0
*/
void sub_17f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f3e0ULL || rel >= 0x17f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f4c0 size=496 callers=0 calls=1
   calls: sub_ddb80
*/
void sub_17f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f4c0ULL || rel >= 0x17f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f6b0 size=2080 callers=0 calls=21
   calls: ScheduleInstructionsReduceReg, sub_17a8c0, sub_17c690, sub_17ec30, sub_17f100, sub_3550, sub_38b0, sub_38d0, sub_3ce70, sub_3ceb0, sub_64d70, sub_66820
   ... +9 more
   ref: ScheduleInstructions
   ref: ScheduleInstructionsReduceReg
   ref: ScheduleInstructionsDynBatch
*/
void ScheduleInstructionsReduceReg_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f6b0ULL || rel >= 0x17fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017fed0 size=3376 callers=0 calls=7
   calls: sub_64060, sub_66820, sub_68ce0, sub_b7e20, sub_b89a0, sub_dcf70, sub_dcfd0
*/
void sub_17fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17fed0ULL || rel >= 0x180c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180c00 size=3408 callers=2 calls=5
   calls: sub_636f0, sub_63c30, sub_68160, sub_9a740, sub_9d320
*/
void sub_180c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180c00ULL || rel >= 0x181950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181950 size=448 callers=1 calls=2
   calls: sub_66e80, sub_9d2f0
*/
void sub_181950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181950ULL || rel >= 0x181b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181b10 size=1344 callers=1 calls=4
   calls: sub_181950, sub_67cd0, sub_86e00, sub_9bed0
*/
void sub_181b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181b10ULL || rel >= 0x182050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182050 size=48 callers=6 calls=0
*/
void sub_182050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182050ULL || rel >= 0x182080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182080 size=224 callers=2 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_182080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182080ULL || rel >= 0x182160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182160 size=144 callers=0 calls=1
   calls: sub_182080
*/
void sub_182160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182160ULL || rel >= 0x1821f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001821f0 size=208 callers=1 calls=0
*/
void sub_1821f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1821f0ULL || rel >= 0x1822c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001822c0 size=496 callers=1 calls=1
   calls: sub_67cd0
*/
void sub_1822c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1822c0ULL || rel >= 0x1824b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001824b0 size=368 callers=3 calls=1
   calls: sub_1822c0
*/
void sub_1824b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1824b0ULL || rel >= 0x182620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182620 size=656 callers=0 calls=3
   calls: sub_14cae0, sub_14cd80, sub_1824b0
*/
void sub_182620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182620ULL || rel >= 0x1828b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001828b0 size=1616 callers=0 calls=16
   calls: sub_66d40, sub_67cd0, sub_b7e20, sub_b89a0, sub_dd0b0, sub_dd160, sub_dd3c0, sub_dda40, sub_ddb80, sub_ddce0, sub_dde40, sub_de2a0
   ... +4 more
*/
void sub_1828b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1828b0ULL || rel >= 0x182f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182f00 size=64 callers=0 calls=1
   calls: sub_dd160
*/
void sub_182f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182f00ULL || rel >= 0x182f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182f40 size=1296 callers=0 calls=3
   calls: sub_178f00, sub_b7e20, sub_b89c0
*/
void sub_182f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182f40ULL || rel >= 0x183450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183450 size=320 callers=2 calls=2
   calls: sub_1788c0, sub_ddb10
*/
void sub_183450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183450ULL || rel >= 0x183590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183590 size=2464 callers=0 calls=4
   calls: sub_1821f0, sub_183450, sub_b8aa0, sub_dfc20
*/
void sub_183590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183590ULL || rel >= 0x183f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183f30 size=80 callers=0 calls=1
   calls: sub_182080
*/
void sub_183f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183f30ULL || rel >= 0x183f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183f80 size=256 callers=2 calls=1
   calls: sub_183450
*/
void sub_183f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183f80ULL || rel >= 0x184080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184080 size=80 callers=0 calls=1
   calls: sub_183f80
*/
void sub_184080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184080ULL || rel >= 0x1840d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001840d0 size=176 callers=0 calls=1
   calls: sub_183f80
*/
void sub_1840d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1840d0ULL || rel >= 0x184180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184180 size=320 callers=0 calls=10
   calls: sub_14d070, sub_181b10, sub_1f59f0, sub_1f8580, sub_204eb0, sub_3550, sub_b7e20, sub_b89a0, sub_ddc30, sub_e0110
*/
void sub_184180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184180ULL || rel >= 0x1842c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001842c0 size=176 callers=0 calls=0
*/
void sub_1842c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1842c0ULL || rel >= 0x184370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184370 size=16 callers=0 calls=0
*/
void sub_184370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184370ULL || rel >= 0x184380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184380 size=16 callers=0 calls=0
*/
void sub_184380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184380ULL || rel >= 0x184390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184390 size=16 callers=0 calls=0
*/
void sub_184390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184390ULL || rel >= 0x1843a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001843a0 size=16 callers=0 calls=0
*/
void sub_1843a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1843a0ULL || rel >= 0x1843b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001843b0 size=16 callers=0 calls=0
*/
void sub_1843b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1843b0ULL || rel >= 0x1843c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001843c0 size=16 callers=0 calls=0
*/
void sub_1843c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1843c0ULL || rel >= 0x1843d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001843d0 size=32 callers=0 calls=0
*/
void sub_1843d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1843d0ULL || rel >= 0x1843f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001843f0 size=16 callers=0 calls=0
*/
void sub_1843f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1843f0ULL || rel >= 0x184400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184400 size=16 callers=0 calls=0
*/
void sub_184400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184400ULL || rel >= 0x184410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184410 size=96 callers=0 calls=0
*/
void sub_184410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184410ULL || rel >= 0x184470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184470 size=16 callers=0 calls=0
*/
void sub_184470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184470ULL || rel >= 0x184480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184480 size=16 callers=0 calls=0
*/
void sub_184480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184480ULL || rel >= 0x184490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184490 size=16 callers=0 calls=0
*/
void sub_184490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184490ULL || rel >= 0x1844a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001844a0 size=16 callers=0 calls=0
*/
void sub_1844a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1844a0ULL || rel >= 0x1844b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001844b0 size=16 callers=0 calls=0
*/
void sub_1844b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1844b0ULL || rel >= 0x1844c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001844c0 size=16 callers=0 calls=0
*/
void sub_1844c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1844c0ULL || rel >= 0x1844d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001844d0 size=16 callers=0 calls=0
*/
void sub_1844d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1844d0ULL || rel >= 0x1844e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001844e0 size=16 callers=0 calls=0
*/
void sub_1844e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1844e0ULL || rel >= 0x1844f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001844f0 size=16 callers=0 calls=0
*/
void sub_1844f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1844f0ULL || rel >= 0x184500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184500 size=16 callers=0 calls=0
*/
void sub_184500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184500ULL || rel >= 0x184510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184510 size=16 callers=0 calls=0
*/
void sub_184510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184510ULL || rel >= 0x184520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184520 size=16 callers=0 calls=0
*/
void sub_184520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184520ULL || rel >= 0x184530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184530 size=16 callers=0 calls=0
*/
void sub_184530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184530ULL || rel >= 0x184540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184540 size=16 callers=0 calls=0
*/
void sub_184540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184540ULL || rel >= 0x184550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184550 size=16 callers=0 calls=0
*/
void sub_184550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184550ULL || rel >= 0x184560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184560 size=16 callers=0 calls=0
*/
void sub_184560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184560ULL || rel >= 0x184570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184570 size=16 callers=0 calls=0
*/
void sub_184570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184570ULL || rel >= 0x184580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184580 size=16 callers=0 calls=0
*/
void sub_184580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184580ULL || rel >= 0x184590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184590 size=16 callers=0 calls=0
*/
void sub_184590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184590ULL || rel >= 0x1845a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001845a0 size=16 callers=0 calls=0
*/
void sub_1845a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1845a0ULL || rel >= 0x1845b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001845b0 size=16 callers=0 calls=0
*/
void sub_1845b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1845b0ULL || rel >= 0x1845c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001845c0 size=16 callers=0 calls=0
*/
void sub_1845c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1845c0ULL || rel >= 0x1845d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001845d0 size=16 callers=0 calls=0
*/
void sub_1845d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1845d0ULL || rel >= 0x1845e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001845e0 size=16 callers=0 calls=0
*/
void sub_1845e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1845e0ULL || rel >= 0x1845f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001845f0 size=16 callers=0 calls=0
*/
void sub_1845f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1845f0ULL || rel >= 0x184600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184600 size=48 callers=0 calls=0
*/
void sub_184600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184600ULL || rel >= 0x184630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184630 size=16 callers=0 calls=0
*/
void sub_184630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184630ULL || rel >= 0x184640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184640 size=64 callers=0 calls=0
*/
void sub_184640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184640ULL || rel >= 0x184680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184680 size=64 callers=0 calls=0
*/
void sub_184680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184680ULL || rel >= 0x1846c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001846c0 size=112 callers=0 calls=0
*/
void sub_1846c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1846c0ULL || rel >= 0x184730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184730 size=96 callers=0 calls=0
*/
void sub_184730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184730ULL || rel >= 0x184790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184790 size=80 callers=0 calls=0
*/
void sub_184790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184790ULL || rel >= 0x1847e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001847e0 size=112 callers=0 calls=0
*/
void sub_1847e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1847e0ULL || rel >= 0x184850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184850 size=208 callers=0 calls=0
*/
void sub_184850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184850ULL || rel >= 0x184920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184920 size=224 callers=0 calls=0
*/
void sub_184920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184920ULL || rel >= 0x184a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184a00 size=80 callers=0 calls=0
*/
void sub_184a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184a00ULL || rel >= 0x184a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184a50 size=32 callers=0 calls=0
*/
void sub_184a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184a50ULL || rel >= 0x184a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184a70 size=32 callers=0 calls=0
*/
void sub_184a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184a70ULL || rel >= 0x184a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184a90 size=272 callers=2 calls=0
*/
void sub_184a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184a90ULL || rel >= 0x184ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184ba0 size=416 callers=1 calls=0
*/
void sub_184ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184ba0ULL || rel >= 0x184d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184d40 size=16 callers=0 calls=0
*/
void sub_184d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184d40ULL || rel >= 0x184d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184d50 size=128 callers=0 calls=0
*/
void sub_184d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184d50ULL || rel >= 0x184dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184dd0 size=112 callers=0 calls=0
*/
void sub_184dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184dd0ULL || rel >= 0x184e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184e40 size=432 callers=1 calls=1
   calls: sub_9a740
*/
void sub_184e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184e40ULL || rel >= 0x184ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184ff0 size=48 callers=0 calls=1
   calls: sub_184e40
*/
void sub_184ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184ff0ULL || rel >= 0x185020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185020 size=128 callers=0 calls=0
*/
void sub_185020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185020ULL || rel >= 0x1850a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001850a0 size=1136 callers=0 calls=2
   calls: sub_66d40, sub_9a600
*/
void sub_1850a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1850a0ULL || rel >= 0x185510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185510 size=80 callers=0 calls=0
*/
void sub_185510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185510ULL || rel >= 0x185560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185560 size=192 callers=0 calls=0
*/
void sub_185560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185560ULL || rel >= 0x185620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185620 size=112 callers=0 calls=1
   calls: sub_636f0
*/
void sub_185620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185620ULL || rel >= 0x185690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185690 size=128 callers=0 calls=0
*/
void sub_185690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185690ULL || rel >= 0x185710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185710 size=16 callers=0 calls=0
*/
void sub_185710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185710ULL || rel >= 0x185720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185720 size=16 callers=0 calls=0
*/
void sub_185720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185720ULL || rel >= 0x185730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185730 size=32 callers=0 calls=0
*/
void sub_185730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185730ULL || rel >= 0x185750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185750 size=16 callers=0 calls=0
*/
void sub_185750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185750ULL || rel >= 0x185760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185760 size=160 callers=0 calls=1
   calls: sub_178cb0
*/
void sub_185760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185760ULL || rel >= 0x185800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185800 size=848 callers=0 calls=1
   calls: sub_178cb0
*/
void sub_185800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185800ULL || rel >= 0x185b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185b50 size=208 callers=1 calls=0
*/
void sub_185b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185b50ULL || rel >= 0x185c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185c20 size=576 callers=1 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_185c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185c20ULL || rel >= 0x185e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185e60 size=2128 callers=0 calls=7
   calls: sub_129650, sub_178de0, sub_3af50, sub_66cd0, sub_66d40, sub_67290, sub_9d2f0
*/
void sub_185e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185e60ULL || rel >= 0x1866b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001866b0 size=240 callers=0 calls=3
   calls: sub_3d090, sub_66820, sub_88b40
*/
void sub_1866b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1866b0ULL || rel >= 0x1867a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001867a0 size=192 callers=0 calls=1
   calls: sub_3d960
*/
void sub_1867a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1867a0ULL || rel >= 0x186860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186860 size=640 callers=1 calls=1
   calls: sub_a92d0
*/
void sub_186860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186860ULL || rel >= 0x186ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186ae0 size=560 callers=2 calls=1
   calls: sub_67cd0
*/
void sub_186ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186ae0ULL || rel >= 0x186d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186d10 size=256 callers=0 calls=1
   calls: sub_186ae0
*/
void sub_186d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186d10ULL || rel >= 0x186e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186e10 size=1120 callers=0 calls=2
   calls: sub_186ae0, sub_a92d0
*/
void sub_186e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186e10ULL || rel >= 0x187270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187270 size=256 callers=1 calls=0
*/
void sub_187270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187270ULL || rel >= 0x187370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187370 size=176 callers=0 calls=1
   calls: sub_35f0
*/
void sub_187370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187370ULL || rel >= 0x187420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187420 size=608 callers=0 calls=6
   calls: sub_186860, sub_187270, sub_3d090, sub_3d960, sub_66820, sub_88b40
*/
void sub_187420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187420ULL || rel >= 0x187680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187680 size=416 callers=1 calls=1
   calls: sub_11d890
*/
void sub_187680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187680ULL || rel >= 0x187820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187820 size=640 callers=2 calls=2
   calls: sub_187680, sub_9a740
*/
void sub_187820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187820ULL || rel >= 0x187aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187aa0 size=80 callers=0 calls=1
   calls: sub_35f0
*/
void sub_187aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187aa0ULL || rel >= 0x187af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187af0 size=576 callers=0 calls=4
   calls: sub_1285b0, sub_129410, sub_9b3d0, sub_9ca30
*/
void sub_187af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187af0ULL || rel >= 0x187d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187d30 size=2880 callers=0 calls=7
   calls: sub_187820, sub_66820, sub_66cd0, sub_66d40, sub_9d2f0, sub_a92d0, sub_b7e20
*/
void sub_187d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187d30ULL || rel >= 0x188870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188870 size=80 callers=0 calls=2
   calls: sub_185c20, sub_35f0
*/
void sub_188870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188870ULL || rel >= 0x1888c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001888c0 size=128 callers=0 calls=2
   calls: sub_1784c0, sub_185b50
*/
void sub_1888c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1888c0ULL || rel >= 0x188940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188940 size=176 callers=0 calls=0
*/
void sub_188940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188940ULL || rel >= 0x1889f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001889f0 size=144 callers=0 calls=0
*/
void sub_1889f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1889f0ULL || rel >= 0x188a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188a80 size=16 callers=0 calls=0
*/
void sub_188a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188a80ULL || rel >= 0x188a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188a90 size=96 callers=0 calls=0
*/
void sub_188a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188a90ULL || rel >= 0x188af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188af0 size=16 callers=0 calls=0
*/
void sub_188af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188af0ULL || rel >= 0x188b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188b00 size=16 callers=0 calls=0
*/
void sub_188b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188b00ULL || rel >= 0x188b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188b10 size=16 callers=0 calls=0
*/
void sub_188b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188b10ULL || rel >= 0x188b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188b20 size=16 callers=0 calls=0
*/
void sub_188b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188b20ULL || rel >= 0x188b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188b30 size=16 callers=0 calls=0
*/
void sub_188b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188b30ULL || rel >= 0x188b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188b40 size=144 callers=0 calls=0
*/
void sub_188b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188b40ULL || rel >= 0x188bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188bd0 size=272 callers=1 calls=1
   calls: sub_b8290
*/
void sub_188bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188bd0ULL || rel >= 0x188ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188ce0 size=224 callers=3 calls=7
   calls: sub_188bd0, sub_3870, sub_77380, sub_b8010, sub_b80f0, sub_b8290, sub_b9e90
*/
void sub_188ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188ce0ULL || rel >= 0x188dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188dc0 size=32 callers=0 calls=0
*/
void sub_188dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188dc0ULL || rel >= 0x188de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188de0 size=16 callers=0 calls=0
*/
void sub_188de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188de0ULL || rel >= 0x188df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188df0 size=208 callers=0 calls=0
*/
void sub_188df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188df0ULL || rel >= 0x188ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188ec0 size=864 callers=1 calls=0
*/
void sub_188ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188ec0ULL || rel >= 0x189220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189220 size=288 callers=0 calls=2
   calls: sub_188ec0, sub_189340
*/
void sub_189220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189220ULL || rel >= 0x189340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189340 size=800 callers=2 calls=3
   calls: sub_178f00, sub_18e1e0, sub_ddb10
*/
void sub_189340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189340ULL || rel >= 0x189660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189660 size=80 callers=1 calls=0
*/
void sub_189660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189660ULL || rel >= 0x1896b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001896b0 size=64 callers=1 calls=1
   calls: sub_1896f0
*/
void sub_1896b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1896b0ULL || rel >= 0x1896f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001896f0 size=576 callers=5 calls=1
   calls: sub_190dc0
*/
void sub_1896f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1896f0ULL || rel >= 0x189930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189930 size=864 callers=1 calls=6
   calls: sub_3890, sub_3d090, sub_66820, sub_88b40, sub_b7e20, sub_b89a0
*/
void sub_189930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189930ULL || rel >= 0x189c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189c90 size=64 callers=0 calls=0
*/
void sub_189c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189c90ULL || rel >= 0x189cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189cd0 size=448 callers=0 calls=1
   calls: sub_3d960
*/
void sub_189cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189cd0ULL || rel >= 0x189e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189e90 size=320 callers=0 calls=3
   calls: sub_1789d0, sub_189fd0, sub_a92d0
*/
void sub_189e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189e90ULL || rel >= 0x189fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189fd0 size=448 callers=6 calls=1
   calls: sub_190cc0
*/
void sub_189fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189fd0ULL || rel >= 0x18a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018a190 size=480 callers=0 calls=1
   calls: sub_188ce0
*/
void sub_18a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18a190ULL || rel >= 0x18a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018a370 size=320 callers=0 calls=1
   calls: sub_67cd0
*/
void sub_18a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18a370ULL || rel >= 0x18a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018a4b0 size=1152 callers=1 calls=2
   calls: sub_67cd0, sub_b8aa0
*/
void sub_18a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18a4b0ULL || rel >= 0x18a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018a930 size=544 callers=2 calls=2
   calls: sub_189fd0, sub_67cd0
*/
void sub_18a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18a930ULL || rel >= 0x18ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018ab50 size=560 callers=1 calls=1
   calls: sub_67cd0
*/
void sub_18ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ab50ULL || rel >= 0x18ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018ad80 size=48 callers=0 calls=0
*/
void sub_18ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ad80ULL || rel >= 0x18adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018adb0 size=3104 callers=0 calls=10
   calls: sub_179110, sub_189fd0, sub_18a4b0, sub_18a930, sub_18b9d0, sub_18bc20, sub_18c200, sub_67cd0, sub_9a740, sub_a92d0
*/
void sub_18adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18adb0ULL || rel >= 0x18b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018b9d0 size=592 callers=3 calls=0
*/
void sub_18b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18b9d0ULL || rel >= 0x18bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018bc20 size=1504 callers=2 calls=2
   calls: sub_189fd0, sub_18b9d0
*/
void sub_18bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18bc20ULL || rel >= 0x18c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018c200 size=336 callers=1 calls=0
*/
void sub_18c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18c200ULL || rel >= 0x18c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018c350 size=112 callers=0 calls=2
   calls: sub_b81b0, sub_b89c0
*/
void sub_18c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18c350ULL || rel >= 0x18c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018c3c0 size=1424 callers=2 calls=4
   calls: sub_3870, sub_3890, sub_b7e20, sub_b89a0
*/
void sub_18c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18c3c0ULL || rel >= 0x18c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018c950 size=240 callers=1 calls=3
   calls: sub_1784c0, sub_b7e20, sub_b89a0
*/
void sub_18c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18c950ULL || rel >= 0x18ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018ca40 size=448 callers=1 calls=3
   calls: sub_178590, sub_b81b0, sub_b89c0
*/
void sub_18ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ca40ULL || rel >= 0x18cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018cc00 size=128 callers=0 calls=0
*/
void sub_18cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18cc00ULL || rel >= 0x18cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018cc80 size=64 callers=0 calls=2
   calls: sub_189930, sub_35f0
*/
void sub_18cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18cc80ULL || rel >= 0x18ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018ccc0 size=112 callers=0 calls=1
   calls: sub_1786c0
*/
void sub_18ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ccc0ULL || rel >= 0x18cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018cd30 size=80 callers=0 calls=2
   calls: sub_1786c0, sub_18ab50
*/
void sub_18cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18cd30ULL || rel >= 0x18cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018cd80 size=304 callers=0 calls=0
*/
void sub_18cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18cd80ULL || rel >= 0x18ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018ceb0 size=672 callers=0 calls=2
   calls: sub_129650, sub_69a20
*/
void sub_18ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ceb0ULL || rel >= 0x18d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018d150 size=16 callers=0 calls=0
*/
void sub_18d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18d150ULL || rel >= 0x18d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018d160 size=2592 callers=0 calls=6
   calls: sub_129650, sub_178de0, sub_3af50, sub_63c30, sub_66d40, sub_9d2f0
*/
void sub_18d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18d160ULL || rel >= 0x18db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018db80 size=176 callers=0 calls=0
*/
void sub_18db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18db80ULL || rel >= 0x18dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018dc30 size=432 callers=0 calls=2
   calls: sub_67cd0, sub_9a740
*/
void sub_18dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18dc30ULL || rel >= 0x18dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018dde0 size=48 callers=0 calls=0
*/
void sub_18dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18dde0ULL || rel >= 0x18de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018de10 size=128 callers=0 calls=0
*/
void sub_18de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18de10ULL || rel >= 0x18de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018de90 size=336 callers=0 calls=0
*/
void sub_18de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18de90ULL || rel >= 0x18dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018dfe0 size=32 callers=0 calls=0
*/
void sub_18dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18dfe0ULL || rel >= 0x18e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e000 size=480 callers=0 calls=0
*/
void sub_18e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e000ULL || rel >= 0x18e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e1e0 size=304 callers=1 calls=1
   calls: sub_188ce0
*/
void sub_18e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e1e0ULL || rel >= 0x18e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e310 size=112 callers=0 calls=0
*/
void sub_18e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e310ULL || rel >= 0x18e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e380 size=128 callers=0 calls=0
*/
void sub_18e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e380ULL || rel >= 0x18e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e400 size=176 callers=0 calls=2
   calls: sub_178b70, sub_189340
*/
void sub_18e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e400ULL || rel >= 0x18e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e4b0 size=80 callers=0 calls=0
*/
void sub_18e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e4b0ULL || rel >= 0x18e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e500 size=224 callers=0 calls=0
*/
void sub_18e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e500ULL || rel >= 0x18e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e5e0 size=656 callers=1 calls=3
   calls: sub_18e870, sub_35f0, sub_3620
*/
void sub_18e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e5e0ULL || rel >= 0x18e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018e870 size=864 callers=1 calls=0
*/
void sub_18e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18e870ULL || rel >= 0x18ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018ebd0 size=432 callers=3 calls=4
   calls: sub_129650, sub_35320, sub_3af50, sub_9d2f0
*/
void sub_18ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ebd0ULL || rel >= 0x18ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018ed80 size=432 callers=1 calls=0
*/
void sub_18ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ed80ULL || rel >= 0x18ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018ef30 size=544 callers=1 calls=1
   calls: sub_67cd0
*/
void sub_18ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18ef30ULL || rel >= 0x18f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018f150 size=592 callers=1 calls=3
   calls: sub_18ebd0, sub_18ed80, sub_18ef30
*/
void sub_18f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18f150ULL || rel >= 0x18f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018f3a0 size=400 callers=1 calls=0
*/
void sub_18f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18f3a0ULL || rel >= 0x18f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018f530 size=256 callers=1 calls=1
   calls: sub_b8aa0
*/
void sub_18f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18f530ULL || rel >= 0x18f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018f630 size=64 callers=0 calls=1
   calls: sub_35f0
*/
void sub_18f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18f630ULL || rel >= 0x18f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018f670 size=496 callers=1 calls=2
   calls: sub_a7050, sub_a9a30
*/
void sub_18f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18f670ULL || rel >= 0x18f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018f860 size=832 callers=1 calls=2
   calls: sub_1789d0, sub_a92d0
*/
void sub_18f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18f860ULL || rel >= 0x18fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018fba0 size=752 callers=0 calls=3
   calls: sub_b7e20, sub_b89a0, sub_b8ae0
*/
void sub_18fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18fba0ULL || rel >= 0x18fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0018fe90 size=496 callers=3 calls=2
   calls: sub_1789d0, sub_a92d0
*/
void sub_18fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x18fe90ULL || rel >= 0x190080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190080 size=960 callers=0 calls=9
   calls: sub_182050, sub_18e5e0, sub_18f150, sub_18f3a0, sub_18f530, sub_18f670, sub_18f860, sub_66820, sub_a92d0
*/
void sub_190080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190080ULL || rel >= 0x190440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190440 size=304 callers=0 calls=0
*/
void sub_190440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190440ULL || rel >= 0x190570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190570 size=320 callers=0 calls=0
*/
void sub_190570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190570ULL || rel >= 0x1906b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001906b0 size=48 callers=0 calls=0
*/
void sub_1906b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1906b0ULL || rel >= 0x1906e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001906e0 size=64 callers=0 calls=0
*/
void sub_1906e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1906e0ULL || rel >= 0x190720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190720 size=256 callers=0 calls=0
*/
void sub_190720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190720ULL || rel >= 0x190820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190820 size=288 callers=0 calls=2
   calls: sub_dfc20, sub_dfd80
*/
void sub_190820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190820ULL || rel >= 0x190940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190940 size=96 callers=0 calls=1
   calls: sub_1824b0
*/
void sub_190940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190940ULL || rel >= 0x1909a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001909a0 size=32 callers=0 calls=0
*/
void sub_1909a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1909a0ULL || rel >= 0x1909c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001909c0 size=144 callers=0 calls=1
   calls: sub_38b0
*/
void sub_1909c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1909c0ULL || rel >= 0x190a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190a50 size=80 callers=0 calls=2
   calls: sub_18c3c0, sub_35f0
*/
void sub_190a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190a50ULL || rel >= 0x190aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190aa0 size=16 callers=0 calls=0
*/
void sub_190aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190aa0ULL || rel >= 0x190ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190ab0 size=16 callers=0 calls=0
*/
void sub_190ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190ab0ULL || rel >= 0x190ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190ac0 size=32 callers=0 calls=0
*/
void sub_190ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190ac0ULL || rel >= 0x190ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190ae0 size=16 callers=0 calls=0
*/
void sub_190ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190ae0ULL || rel >= 0x190af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190af0 size=16 callers=0 calls=0
*/
void sub_190af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190af0ULL || rel >= 0x190b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190b00 size=16 callers=0 calls=0
*/
void sub_190b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190b00ULL || rel >= 0x190b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190b10 size=16 callers=0 calls=0
*/
void sub_190b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190b10ULL || rel >= 0x190b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190b20 size=320 callers=0 calls=0
*/
void sub_190b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190b20ULL || rel >= 0x190c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190c60 size=16 callers=0 calls=0
*/
void sub_190c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190c60ULL || rel >= 0x190c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190c70 size=48 callers=0 calls=0
*/
void sub_190c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190c70ULL || rel >= 0x190ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190ca0 size=16 callers=0 calls=0
*/
void sub_190ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190ca0ULL || rel >= 0x190cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190cb0 size=16 callers=0 calls=0
*/
void sub_190cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190cb0ULL || rel >= 0x190cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190cc0 size=256 callers=2 calls=1
   calls: sub_190cc0
*/
void sub_190cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190cc0ULL || rel >= 0x190dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00190dc0 size=592 callers=1 calls=0
*/
void sub_190dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x190dc0ULL || rel >= 0x191010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191010 size=64 callers=0 calls=0
*/
void sub_191010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191010ULL || rel >= 0x191050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191050 size=48 callers=0 calls=0
*/
void sub_191050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191050ULL || rel >= 0x191080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191080 size=16 callers=0 calls=0
*/
void sub_191080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191080ULL || rel >= 0x191090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191090 size=64 callers=0 calls=0
*/
void sub_191090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191090ULL || rel >= 0x1910d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001910d0 size=96 callers=0 calls=0
*/
void sub_1910d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1910d0ULL || rel >= 0x191130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191130 size=80 callers=0 calls=0
*/
void sub_191130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191130ULL || rel >= 0x191180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191180 size=64 callers=0 calls=0
*/
void sub_191180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191180ULL || rel >= 0x1911c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001911c0 size=96 callers=0 calls=0
*/
void sub_1911c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1911c0ULL || rel >= 0x191220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191220 size=176 callers=0 calls=0
*/
void sub_191220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191220ULL || rel >= 0x1912d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001912d0 size=192 callers=0 calls=0
*/
void sub_1912d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1912d0ULL || rel >= 0x191390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00191390 size=64 callers=0 calls=0
*/
void sub_191390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x191390ULL || rel >= 0x1913d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001913d0 size=272 callers=1 calls=4
   calls: sub_16f020, sub_1914e0, sub_192580, sub_192cf0
*/
void sub_1913d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1913d0ULL || rel >= 0x1914e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001914e0 size=4256 callers=1 calls=3
   calls: sub_9a050, sub_9b3e0, sub_a92d0
*/
void sub_1914e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1914e0ULL || rel >= 0x192580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00192580 size=1904 callers=1 calls=3
   calls: sub_9a050, sub_9b3e0, sub_a92d0
*/
void sub_192580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x192580ULL || rel >= 0x192cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00192cf0 size=1248 callers=1 calls=3
   calls: sub_9a050, sub_9b3e0, sub_a92d0
*/
void sub_192cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x192cf0ULL || rel >= 0x1931d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001931d0 size=512 callers=1 calls=6
   calls: sub_16f020, sub_1933d0, sub_a70d0, sub_a7850, sub_a92d0, sub_a9a30
*/
void sub_1931d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1931d0ULL || rel >= 0x1933d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001933d0 size=45856 callers=1 calls=10
   calls: sub_651d0, sub_9a050, sub_9b3e0, sub_9b4d0, sub_a7050, sub_a7090, sub_a7370, sub_a8320, sub_a92d0, sub_aa640
*/
void sub_1933d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1933d0ULL || rel >= 0x19e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e6f0 size=400 callers=1 calls=6
   calls: sub_16f020, sub_19e880, sub_a70d0, sub_a7850, sub_a92d0, sub_a9a30
*/
void sub_19e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e6f0ULL || rel >= 0x19e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019e880 size=44784 callers=1 calls=10
   calls: sub_651d0, sub_9a050, sub_9b3e0, sub_9b4d0, sub_a7050, sub_a7090, sub_a7370, sub_a8320, sub_a92d0, sub_aa640
*/
void sub_19e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19e880ULL || rel >= 0x1a9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a9770 size=36736 callers=1 calls=7
   calls: sub_651d0, sub_9a050, sub_9b3e0, sub_a7050, sub_a8320, sub_a92d0, sub_aa640
*/
void sub_1a9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a9770ULL || rel >= 0x1b26f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b26f0 size=26720 callers=1 calls=8
   calls: sub_651d0, sub_9a050, sub_9b3e0, sub_a7050, sub_a7370, sub_a8320, sub_a92d0, sub_aa640
*/
void sub_1b26f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b26f0ULL || rel >= 0x1b8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b8f50 size=496 callers=1 calls=7
   calls: sub_16f020, sub_1a9770, sub_1b26f0, sub_a7090, sub_a70d0, sub_a92d0, sub_a9a30
*/
void sub_1b8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b8f50ULL || rel >= 0x1b9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b9140 size=8976 callers=1 calls=9
   calls: sub_3620, sub_651d0, sub_9a050, sub_9b3e0, sub_a7050, sub_a7370, sub_a8320, sub_a92d0, sub_aa640
*/
void sub_1b9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b9140ULL || rel >= 0x1bb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb450 size=400 callers=1 calls=6
   calls: sub_16f020, sub_1b9140, sub_a7090, sub_a70d0, sub_a92d0, sub_a9a30
*/
void sub_1bb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb450ULL || rel >= 0x1bb5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb5e0 size=192 callers=2 calls=1
   calls: sub_3af80
*/
void sub_1bb5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb5e0ULL || rel >= 0x1bb6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb6a0 size=48 callers=0 calls=0
*/
void sub_1bb6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb6a0ULL || rel >= 0x1bb6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb6d0 size=16 callers=1 calls=0
*/
void sub_1bb6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb6d0ULL || rel >= 0x1bb6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb6e0 size=112 callers=1 calls=0
*/
void sub_1bb6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb6e0ULL || rel >= 0x1bb750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb750 size=48 callers=0 calls=0
*/
void sub_1bb750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb750ULL || rel >= 0x1bb780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb780 size=48 callers=0 calls=0
*/
void sub_1bb780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb780ULL || rel >= 0x1bb7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb7b0 size=128 callers=0 calls=0
*/
void sub_1bb7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb7b0ULL || rel >= 0x1bb830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb830 size=160 callers=71 calls=1
   calls: sub_11a010
*/
void sub_1bb830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb830ULL || rel >= 0x1bb8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb8d0 size=64 callers=4 calls=0
*/
void sub_1bb8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb8d0ULL || rel >= 0x1bb910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb910 size=64 callers=2 calls=0
*/
void sub_1bb910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb910ULL || rel >= 0x1bb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb950 size=96 callers=577 calls=0
*/
void sub_1bb950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb950ULL || rel >= 0x1bb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bb9b0 size=272 callers=2 calls=0
*/
void sub_1bb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bb9b0ULL || rel >= 0x1bbac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bbac0 size=240 callers=4 calls=2
   calls: sub_68060, sub_9a730
*/
void sub_1bbac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bbac0ULL || rel >= 0x1bbbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bbbb0 size=416 callers=3 calls=0
*/
void sub_1bbbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bbbb0ULL || rel >= 0x1bbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bbd50 size=304 callers=5 calls=0
*/
void sub_1bbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bbd50ULL || rel >= 0x1bbe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bbe80 size=448 callers=1 calls=2
   calls: sub_3af50, sub_9b3d0
*/
void sub_1bbe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bbe80ULL || rel >= 0x1bc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bc040 size=304 callers=0 calls=0
*/
void sub_1bc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bc040ULL || rel >= 0x1bc170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bc170 size=320 callers=1 calls=2
   calls: sub_11d890, sub_635f0
*/
void sub_1bc170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bc170ULL || rel >= 0x1bc2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bc2b0 size=624 callers=1 calls=1
   calls: sub_63c30
*/
void sub_1bc2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bc2b0ULL || rel >= 0x1bc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bc520 size=352 callers=1 calls=1
   calls: sub_9b3d0
*/
void sub_1bc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bc520ULL || rel >= 0x1bc680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bc680 size=848 callers=1 calls=1
   calls: sub_9b3d0
*/
void sub_1bc680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bc680ULL || rel >= 0x1bc9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bc9d0 size=112 callers=1 calls=1
   calls: sub_9b3d0
*/
void sub_1bc9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bc9d0ULL || rel >= 0x1bca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bca40 size=16 callers=0 calls=0
*/
void sub_1bca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bca40ULL || rel >= 0x1bca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bca50 size=16 callers=0 calls=0
*/
void sub_1bca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bca50ULL || rel >= 0x1bca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bca60 size=128 callers=1 calls=1
   calls: sub_9b3d0
*/
void sub_1bca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bca60ULL || rel >= 0x1bcae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bcae0 size=320 callers=0 calls=0
*/
void sub_1bcae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bcae0ULL || rel >= 0x1bcc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bcc20 size=272 callers=0 calls=0
*/
void sub_1bcc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bcc20ULL || rel >= 0x1bcd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bcd30 size=112 callers=1 calls=0
*/
void sub_1bcd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bcd30ULL || rel >= 0x1bcda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bcda0 size=48 callers=0 calls=0
*/
void sub_1bcda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bcda0ULL || rel >= 0x1bcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bcdd0 size=336 callers=1 calls=0
*/
void sub_1bcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bcdd0ULL || rel >= 0x1bcf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bcf20 size=384 callers=1 calls=1
   calls: sub_67750
*/
void sub_1bcf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bcf20ULL || rel >= 0x1bd0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd0a0 size=128 callers=0 calls=1
   calls: sub_3af50
*/
void sub_1bd0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd0a0ULL || rel >= 0x1bd120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd120 size=320 callers=0 calls=2
   calls: sub_3af50, sub_3af80
*/
void sub_1bd120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd120ULL || rel >= 0x1bd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd260 size=64 callers=0 calls=0
*/
void sub_1bd260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd260ULL || rel >= 0x1bd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd2a0 size=48 callers=0 calls=0
*/
void sub_1bd2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd2a0ULL || rel >= 0x1bd2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd2d0 size=64 callers=0 calls=0
*/
void sub_1bd2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd2d0ULL || rel >= 0x1bd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd310 size=144 callers=0 calls=0
*/
void sub_1bd310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd310ULL || rel >= 0x1bd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd3a0 size=128 callers=0 calls=1
   calls: sub_9b3d0
*/
void sub_1bd3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd3a0ULL || rel >= 0x1bd420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd420 size=160 callers=1 calls=0
*/
void sub_1bd420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd420ULL || rel >= 0x1bd4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd4c0 size=816 callers=0 calls=1
   calls: sub_11d890
*/
void sub_1bd4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd4c0ULL || rel >= 0x1bd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd7f0 size=272 callers=0 calls=0
*/
void sub_1bd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd7f0ULL || rel >= 0x1bd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd900 size=240 callers=1 calls=0
*/
void sub_1bd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd900ULL || rel >= 0x1bd9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bd9f0 size=768 callers=1 calls=1
   calls: sub_11e390
*/
void sub_1bd9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bd9f0ULL || rel >= 0x1bdcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bdcf0 size=832 callers=0 calls=6
   calls: sub_129650, sub_3af50, sub_3af80, sub_61d40, sub_62a70, sub_9b3d0
*/
void sub_1bdcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bdcf0ULL || rel >= 0x1be030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be030 size=256 callers=1 calls=1
   calls: sub_9b3d0
*/
void sub_1be030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be030ULL || rel >= 0x1be130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be130 size=256 callers=1 calls=2
   calls: sub_3af50, sub_3af80
*/
void sub_1be130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be130ULL || rel >= 0x1be230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be230 size=448 callers=0 calls=3
   calls: sub_3af50, sub_3af80, sub_9b3d0
*/
void sub_1be230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be230ULL || rel >= 0x1be3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be3f0 size=784 callers=0 calls=4
   calls: sub_11e390, sub_3af80, sub_66d40, sub_9a610
*/
void sub_1be3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be3f0ULL || rel >= 0x1be700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be700 size=176 callers=0 calls=0
*/
void sub_1be700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be700ULL || rel >= 0x1be7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be7b0 size=64 callers=0 calls=0
*/
void sub_1be7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be7b0ULL || rel >= 0x1be7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be7f0 size=128 callers=0 calls=0
*/
void sub_1be7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be7f0ULL || rel >= 0x1be870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be870 size=240 callers=0 calls=1
   calls: sub_67bc0
*/
void sub_1be870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be870ULL || rel >= 0x1be960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be960 size=16 callers=0 calls=0
*/
void sub_1be960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be960ULL || rel >= 0x1be970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001be970 size=160 callers=0 calls=0
*/
void sub_1be970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1be970ULL || rel >= 0x1bea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bea10 size=16 callers=0 calls=0
*/
void sub_1bea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bea10ULL || rel >= 0x1bea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bea20 size=48 callers=1 calls=0
*/
void sub_1bea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bea20ULL || rel >= 0x1bea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bea50 size=48 callers=1 calls=0
*/
void sub_1bea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bea50ULL || rel >= 0x1bea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bea80 size=16 callers=0 calls=0
*/
void sub_1bea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bea80ULL || rel >= 0x1bea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bea90 size=176 callers=0 calls=1
   calls: sub_9b3d0
*/
void sub_1bea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bea90ULL || rel >= 0x1beb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001beb40 size=128 callers=0 calls=0
*/
void sub_1beb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1beb40ULL || rel >= 0x1bebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bebc0 size=240 callers=0 calls=1
   calls: sub_67c70
*/
void sub_1bebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bebc0ULL || rel >= 0x1becb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001becb0 size=16 callers=0 calls=0
*/
void sub_1becb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1becb0ULL || rel >= 0x1becc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001becc0 size=752 callers=0 calls=3
   calls: sub_129410, sub_9b3d0, sub_9ca30
*/
void sub_1becc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1becc0ULL || rel >= 0x1befb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001befb0 size=784 callers=0 calls=1
   calls: sub_9ca30
*/
void sub_1befb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1befb0ULL || rel >= 0x1bf2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bf2c0 size=784 callers=0 calls=3
   calls: sub_129410, sub_9b3d0, sub_9ca30
*/
void sub_1bf2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bf2c0ULL || rel >= 0x1bf5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bf5d0 size=800 callers=0 calls=1
   calls: sub_9ca30
*/
void sub_1bf5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bf5d0ULL || rel >= 0x1bf8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bf8f0 size=1600 callers=0 calls=2
   calls: sub_3af80, sub_629c0
*/
void sub_1bf8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bf8f0ULL || rel >= 0x1bff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bff30 size=992 callers=1 calls=2
   calls: sub_11d890, sub_635f0
*/
void sub_1bff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bff30ULL || rel >= 0x1c0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0310 size=144 callers=1 calls=0
*/
void sub_1c0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0310ULL || rel >= 0x1c03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c03a0 size=288 callers=0 calls=1
   calls: sub_1bb9b0
*/
void sub_1c03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c03a0ULL || rel >= 0x1c04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c04c0 size=32 callers=0 calls=0
*/
void sub_1c04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c04c0ULL || rel >= 0x1c04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c04e0 size=192 callers=2 calls=1
   calls: sub_9b3d0
*/
void sub_1c04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c04e0ULL || rel >= 0x1c05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c05a0 size=16 callers=0 calls=0
*/
void sub_1c05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c05a0ULL || rel >= 0x1c05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c05b0 size=16 callers=0 calls=0
*/
void sub_1c05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c05b0ULL || rel >= 0x1c05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c05c0 size=80 callers=0 calls=1
   calls: sub_3af80
*/
void sub_1c05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c05c0ULL || rel >= 0x1c0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0610 size=16 callers=0 calls=0
*/
void sub_1c0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0610ULL || rel >= 0x1c0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0620 size=1216 callers=0 calls=2
   calls: sub_3af50, sub_3af80
*/
void sub_1c0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0620ULL || rel >= 0x1c0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0ae0 size=160 callers=0 calls=0
*/
void sub_1c0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0ae0ULL || rel >= 0x1c0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0b80 size=48 callers=0 calls=0
*/
void sub_1c0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0b80ULL || rel >= 0x1c0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0bb0 size=160 callers=0 calls=1
   calls: sub_3af80
*/
void sub_1c0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0bb0ULL || rel >= 0x1c0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0c50 size=48 callers=0 calls=0
*/
void sub_1c0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0c50ULL || rel >= 0x1c0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0c80 size=80 callers=1 calls=0
*/
void sub_1c0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0c80ULL || rel >= 0x1c0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0cd0 size=192 callers=1 calls=0
*/
void sub_1c0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0cd0ULL || rel >= 0x1c0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0d90 size=16 callers=1 calls=0
*/
void sub_1c0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0d90ULL || rel >= 0x1c0da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0da0 size=832 callers=1 calls=2
   calls: sub_11a010, sub_3af80
*/
void sub_1c0da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0da0ULL || rel >= 0x1c10e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c10e0 size=1232 callers=0 calls=2
   calls: sub_11a010, sub_3af80
*/
void sub_1c10e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c10e0ULL || rel >= 0x1c15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c15b0 size=1280 callers=0 calls=2
   calls: sub_11a010, sub_9a610
*/
void sub_1c15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c15b0ULL || rel >= 0x1c1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c1ab0 size=80 callers=1 calls=0
*/
void sub_1c1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c1ab0ULL || rel >= 0x1c1b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c1b00 size=128 callers=0 calls=0
*/
void sub_1c1b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c1b00ULL || rel >= 0x1c1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c1b80 size=80 callers=0 calls=0
*/
void sub_1c1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c1b80ULL || rel >= 0x1c1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c1bd0 size=16 callers=0 calls=0
*/
void sub_1c1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c1bd0ULL || rel >= 0x1c1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c1be0 size=16 callers=0 calls=0
*/
void sub_1c1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c1be0ULL || rel >= 0x1c1bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c1bf0 size=1360 callers=0 calls=2
   calls: sub_126f00, sub_182050
*/
void sub_1c1bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c1bf0ULL || rel >= 0x1c2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2140 size=1120 callers=0 calls=3
   calls: sub_13ff20, sub_13ffd0, sub_182050
*/
void sub_1c2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2140ULL || rel >= 0x1c25a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c25a0 size=288 callers=0 calls=0
*/
void sub_1c25a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c25a0ULL || rel >= 0x1c26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c26c0 size=32 callers=1 calls=0
*/
void sub_1c26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c26c0ULL || rel >= 0x1c26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c26e0 size=144 callers=0 calls=0
*/
void sub_1c26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c26e0ULL || rel >= 0x1c2770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2770 size=144 callers=0 calls=1
   calls: sub_11e390
*/
void sub_1c2770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2770ULL || rel >= 0x1c2800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2800 size=128 callers=0 calls=0
*/
void sub_1c2800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2800ULL || rel >= 0x1c2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2880 size=272 callers=1 calls=1
   calls: sub_66d40
*/
void sub_1c2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2880ULL || rel >= 0x1c2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2990 size=816 callers=1 calls=1
   calls: sub_3af80
*/
void sub_1c2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2990ULL || rel >= 0x1c2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2cc0 size=864 callers=1 calls=1
   calls: sub_3af80
*/
void sub_1c2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2cc0ULL || rel >= 0x1c3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3020 size=864 callers=1 calls=1
   calls: sub_3af80
*/
void sub_1c3020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3020ULL || rel >= 0x1c3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3380 size=256 callers=0 calls=1
   calls: sub_629c0
*/
void sub_1c3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3380ULL || rel >= 0x1c3480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3480 size=288 callers=0 calls=2
   calls: sub_66960, sub_66a40
*/
void sub_1c3480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3480ULL || rel >= 0x1c35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c35a0 size=128 callers=0 calls=0
*/
void sub_1c35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c35a0ULL || rel >= 0x1c3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3620 size=672 callers=0 calls=1
   calls: sub_3af80
*/
void sub_1c3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3620ULL || rel >= 0x1c38c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c38c0 size=800 callers=1 calls=4
   calls: sub_1c3be0, sub_1c3e80, sub_66d40, sub_9a850
*/
void sub_1c38c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c38c0ULL || rel >= 0x1c3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3be0 size=672 callers=2 calls=6
   calls: sub_1c5a00, sub_1c5ad0, sub_68060, sub_9a730, sub_9d320, sub_9d360
*/
void sub_1c3be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3be0ULL || rel >= 0x1c3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3e80 size=384 callers=4 calls=2
   calls: sub_35f0, sub_3620
*/
void sub_1c3e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3e80ULL || rel >= 0x1c4000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c4000 size=2368 callers=1 calls=11
   calls: sub_3890, sub_3d090, sub_3d140, sub_3d570, sub_3d620, sub_7f930, sub_7fcd0, sub_7fea0, sub_808f0, sub_80e60, sub_9d2f0
*/
void sub_1c4000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c4000ULL || rel >= 0x1c4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c4940 size=3904 callers=2 calls=13
   calls: cuda_sm70_warpsync, sub_118e40, sub_1c38c0, sub_1c3e80, sub_1c4000, sub_63c30, sub_66900, sub_66930, sub_7f660, sub_7fea0, sub_808f0, sub_80e60
   ... +1 more
*/
void sub_1c4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c4940ULL || rel >= 0x1c5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5880 size=384 callers=2 calls=0
   ref: __cuda_sm70_warpsync
   ref: __cuda_sm70_barrier_
   ref: __cuda_sm70_votesync_
   ref: __cuda_sm70_shflsync_
   ref: __cuda_sm70_matchsync_
*/
void cuda_sm70_warpsync(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5880ULL || rel >= 0x1c5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5a00 size=208 callers=1 calls=1
   calls: sub_9b0a0
*/
void sub_1c5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5a00ULL || rel >= 0x1c5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5ad0 size=208 callers=1 calls=0
*/
void sub_1c5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5ad0ULL || rel >= 0x1c5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5ba0 size=64 callers=3 calls=0
*/
void sub_1c5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5ba0ULL || rel >= 0x1c5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5be0 size=688 callers=0 calls=2
   calls: sub_1c5ba0, sub_66cd0
*/
void sub_1c5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5be0ULL || rel >= 0x1c5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5e90 size=320 callers=0 calls=0
*/
void sub_1c5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5e90ULL || rel >= 0x1c5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5fd0 size=528 callers=0 calls=0
*/
void sub_1c5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5fd0ULL || rel >= 0x1c61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c61e0 size=2480 callers=2 calls=9
   calls: sub_180c00, sub_1c3e80, sub_1c4940, sub_35f0, sub_55870, sub_80f30, sub_80fd0, sub_81040, sub_e0110
*/
void sub_1c61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c61e0ULL || rel >= 0x1c6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c6b90 size=5472 callers=2 calls=9
   calls: sub_1c4940, sub_3620, sub_55870, sub_55950, sub_650d0, sub_68090, sub_80e10, sub_80e90, sub_810f0
*/
void sub_1c6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c6b90ULL || rel >= 0x1c80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c80f0 size=1216 callers=0 calls=6
   calls: sub_2880, sub_35f0, sub_3870, sub_3890, sub_b7e20, sub_b89a0
*/
void sub_1c80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c80f0ULL || rel >= 0x1c85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c85b0 size=16 callers=0 calls=0
*/
void sub_1c85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c85b0ULL || rel >= 0x1c85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c85c0 size=336 callers=1 calls=0
*/
void sub_1c85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c85c0ULL || rel >= 0x1c8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c8710 size=112 callers=0 calls=1
   calls: sub_1c61e0
*/
void sub_1c8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c8710ULL || rel >= 0x1c8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c8780 size=256 callers=0 calls=1
   calls: sub_1c6b90
*/
void sub_1c8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c8780ULL || rel >= 0x1c8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c8880 size=832 callers=5 calls=5
   calls: sub_635d0, sub_635f0, sub_63610, sub_63640, sub_636a0
*/
void sub_1c8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c8880ULL || rel >= 0x1c8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c8bc0 size=752 callers=0 calls=1
   calls: sub_1c8880
*/
void sub_1c8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c8bc0ULL || rel >= 0x1c8eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c8eb0 size=336 callers=1 calls=0
*/
void sub_1c8eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c8eb0ULL || rel >= 0x1c9000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

