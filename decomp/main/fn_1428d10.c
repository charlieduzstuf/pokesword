/* main functions 01428d10..0143eee0 (171 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01428d10 size=16 callers=0 calls=0
*/
void sub_1428d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428d10ULL || rel >= 0x1428d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428d20 size=16 callers=0 calls=0
*/
void sub_1428d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428d20ULL || rel >= 0x1428d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428d30 size=304 callers=0 calls=0
*/
void sub_1428d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428d30ULL || rel >= 0x1428e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428e60 size=272 callers=1 calls=2
   calls: sub_1427960, sub_5cfaf0
*/
void sub_1428e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428e60ULL || rel >= 0x1428f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428f70 size=704 callers=0 calls=9
   calls: sub_14246b0, sub_14249b0, sub_14249c0, sub_1425a50, sub_1429600, sub_6608d0, sub_c39c40, sub_c444b0, sub_d0c0
   ref: ViewCredits
   ref: Credits
*/
void ViewCredits(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428f70ULL || rel >= 0x1429230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429230 size=288 callers=0 calls=8
   calls: center_staff, sub_14249a0, sub_1425a50, sub_1428070, sub_14281c0, sub_1429350, sub_660940, sub_660a00
*/
void sub_1429230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429230ULL || rel >= 0x1429350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429350 size=240 callers=1 calls=3
   calls: anime_company, sub_1428610, sub_660a00
*/
void sub_1429350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429350ULL || rel >= 0x1429440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429440 size=16 callers=0 calls=0
*/
void sub_1429440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429440ULL || rel >= 0x1429450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429450 size=16 callers=0 calls=0
*/
void sub_1429450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429450ULL || rel >= 0x1429460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429460 size=16 callers=0 calls=0
*/
void sub_1429460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429460ULL || rel >= 0x1429470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429470 size=16 callers=0 calls=0
*/
void sub_1429470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429470ULL || rel >= 0x1429480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429480 size=16 callers=0 calls=0
*/
void sub_1429480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429480ULL || rel >= 0x1429490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429490 size=16 callers=0 calls=0
*/
void sub_1429490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429490ULL || rel >= 0x14294a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014294a0 size=16 callers=0 calls=0
*/
void sub_14294a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14294a0ULL || rel >= 0x14294b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014294b0 size=16 callers=0 calls=0
*/
void sub_14294b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14294b0ULL || rel >= 0x14294c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014294c0 size=16 callers=0 calls=0
*/
void sub_14294c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14294c0ULL || rel >= 0x14294d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014294d0 size=304 callers=0 calls=0
*/
void sub_14294d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14294d0ULL || rel >= 0x1429600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429600 size=272 callers=1 calls=2
   calls: sub_1428950, sub_5cfaf0
*/
void sub_1429600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429600ULL || rel >= 0x1429710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429710 size=144 callers=0 calls=2
   calls: sub_c44410, sub_d0c0
   ref: FadeOut
*/
void FadeOut(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429710ULL || rel >= 0x14297a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014297a0 size=32 callers=0 calls=0
*/
void sub_14297a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14297a0ULL || rel >= 0x14297c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014297c0 size=16 callers=0 calls=0
*/
void sub_14297c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14297c0ULL || rel >= 0x14297d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014297d0 size=16 callers=0 calls=0
*/
void sub_14297d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14297d0ULL || rel >= 0x14297e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014297e0 size=16 callers=0 calls=0
*/
void sub_14297e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14297e0ULL || rel >= 0x14297f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014297f0 size=16 callers=0 calls=0
*/
void sub_14297f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14297f0ULL || rel >= 0x1429800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429800 size=16 callers=0 calls=0
*/
void sub_1429800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429800ULL || rel >= 0x1429810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429810 size=16 callers=0 calls=0
*/
void sub_1429810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429810ULL || rel >= 0x1429820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429820 size=16 callers=0 calls=0
*/
void sub_1429820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429820ULL || rel >= 0x1429830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429830 size=16 callers=0 calls=0
*/
void sub_1429830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429830ULL || rel >= 0x1429840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429840 size=16 callers=0 calls=0
*/
void sub_1429840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429840ULL || rel >= 0x1429850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429850 size=304 callers=0 calls=0
*/
void sub_1429850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429850ULL || rel >= 0x1429980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429980 size=656 callers=0 calls=4
   calls: sub_1425a50, sub_c1b030, sub_c39c40, sub_d0c0
   ref: PlayDemo
*/
void PlayDemo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429980ULL || rel >= 0x1429c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429c10 size=128 callers=0 calls=3
   calls: demo_data, sub_c1bcb0, sub_c1bce0
*/
void sub_1429c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429c10ULL || rel >= 0x1429c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429c90 size=16 callers=0 calls=0
*/
void sub_1429c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429c90ULL || rel >= 0x1429ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429ca0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_1429ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429ca0ULL || rel >= 0x1429d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429d00 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_1429d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429d00ULL || rel >= 0x1429d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429d60 size=16 callers=0 calls=0
*/
void sub_1429d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429d60ULL || rel >= 0x1429d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429d70 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_1429d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429d70ULL || rel >= 0x1429dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429dd0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_1429dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429dd0ULL || rel >= 0x1429e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429e30 size=16 callers=0 calls=0
*/
void sub_1429e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429e30ULL || rel >= 0x1429e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429e40 size=16 callers=0 calls=0
*/
void sub_1429e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429e40ULL || rel >= 0x1429e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429e50 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_1429e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429e50ULL || rel >= 0x1429eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429eb0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_1429eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429eb0ULL || rel >= 0x1429f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01429f10 size=304 callers=0 calls=0
*/
void sub_1429f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1429f10ULL || rel >= 0x142a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a040 size=80 callers=48 calls=1
   calls: sub_5e2350
*/
void sub_142a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a040ULL || rel >= 0x142a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a090 size=144 callers=2 calls=0
*/
void sub_142a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a090ULL || rel >= 0x142a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a120 size=144 callers=6 calls=0
*/
void sub_142a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a120ULL || rel >= 0x142a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a1b0 size=16 callers=28 calls=0
*/
void sub_142a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a1b0ULL || rel >= 0x142a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a1c0 size=336 callers=11 calls=3
   calls: sub_142a090, sub_142ac80, sub_5e2350
*/
void sub_142a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a1c0ULL || rel >= 0x142a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a310 size=288 callers=0 calls=1
   calls: sub_142a090
*/
void sub_142a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a310ULL || rel >= 0x142a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a430 size=16 callers=0 calls=0
*/
void sub_142a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a430ULL || rel >= 0x142a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a440 size=16 callers=0 calls=0
*/
void sub_142a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a440ULL || rel >= 0x142a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a450 size=16 callers=0 calls=0
*/
void sub_142a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a450ULL || rel >= 0x142a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a460 size=16 callers=0 calls=0
*/
void sub_142a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a460ULL || rel >= 0x142a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a470 size=16 callers=0 calls=0
*/
void sub_142a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a470ULL || rel >= 0x142a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a480 size=480 callers=16 calls=1
   calls: sub_142a120
*/
void sub_142a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a480ULL || rel >= 0x142a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a660 size=752 callers=154 calls=0
*/
void sub_142a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a660ULL || rel >= 0x142a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142a950 size=176 callers=1 calls=1
   calls: sub_142a120
*/
void sub_142a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142a950ULL || rel >= 0x142aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142aa00 size=368 callers=7 calls=1
   calls: sub_142a120
*/
void sub_142aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142aa00ULL || rel >= 0x142ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ab70 size=240 callers=0 calls=0
*/
void sub_142ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ab70ULL || rel >= 0x142ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ac60 size=16 callers=0 calls=0
*/
void sub_142ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ac60ULL || rel >= 0x142ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ac70 size=16 callers=0 calls=0
*/
void sub_142ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ac70ULL || rel >= 0x142ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ac80 size=368 callers=1 calls=1
   calls: sub_142a040
*/
void sub_142ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ac80ULL || rel >= 0x142adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142adf0 size=192 callers=0 calls=0
*/
void sub_142adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142adf0ULL || rel >= 0x142aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142aeb0 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_142aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142aeb0ULL || rel >= 0x142af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142af20 size=192 callers=0 calls=0
*/
void sub_142af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142af20ULL || rel >= 0x142afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142afe0 size=192 callers=0 calls=0
*/
void sub_142afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142afe0ULL || rel >= 0x142b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b0a0 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_142b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b0a0ULL || rel >= 0x142b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b110 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_142b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b110ULL || rel >= 0x142b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b180 size=192 callers=0 calls=0
*/
void sub_142b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b180ULL || rel >= 0x142b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b240 size=192 callers=0 calls=0
*/
void sub_142b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b240ULL || rel >= 0x142b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b300 size=240 callers=9 calls=0
*/
void sub_142b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b300ULL || rel >= 0x142b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b3f0 size=160 callers=4 calls=1
   calls: sub_142b490
*/
void sub_142b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b3f0ULL || rel >= 0x142b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b490 size=416 callers=2 calls=3
   calls: sub_142b630, sub_c38350, sub_e9db40
*/
void sub_142b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b490ULL || rel >= 0x142b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b630 size=624 callers=1 calls=2
   calls: sub_142b8a0, sub_e9d130
*/
void sub_142b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b630ULL || rel >= 0x142b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142b8a0 size=784 callers=1 calls=2
   calls: sub_142d030, sub_1435450
*/
void sub_142b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142b8a0ULL || rel >= 0x142bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bbb0 size=256 callers=0 calls=0
*/
void sub_142bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bbb0ULL || rel >= 0x142bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bcb0 size=16 callers=0 calls=0
*/
void sub_142bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bcb0ULL || rel >= 0x142bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bcc0 size=16 callers=0 calls=0
*/
void sub_142bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bcc0ULL || rel >= 0x142bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bcd0 size=16 callers=0 calls=0
*/
void sub_142bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bcd0ULL || rel >= 0x142bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bce0 size=16 callers=0 calls=0
*/
void sub_142bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bce0ULL || rel >= 0x142bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bcf0 size=16 callers=0 calls=0
*/
void sub_142bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bcf0ULL || rel >= 0x142bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bd00 size=16 callers=0 calls=0
*/
void sub_142bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bd00ULL || rel >= 0x142bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bd10 size=16 callers=0 calls=0
*/
void sub_142bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bd10ULL || rel >= 0x142bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bd20 size=16 callers=0 calls=0
*/
void sub_142bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bd20ULL || rel >= 0x142bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142bd30 size=1568 callers=0 calls=6
   calls: sub_104dbb0, sub_142c350, sub_142c510, sub_67bc30, sub_a74310, sub_c39c40
*/
void sub_142bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142bd30ULL || rel >= 0x142c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c350 size=448 callers=1 calls=3
   calls: sub_142d7b0, sub_672c10, sub_c386f0
*/
void sub_142c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c350ULL || rel >= 0x142c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c510 size=448 callers=1 calls=3
   calls: sub_142d7b0, sub_672c10, sub_c386f0
*/
void sub_142c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c510ULL || rel >= 0x142c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c6d0 size=16 callers=0 calls=0
*/
void sub_142c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c6d0ULL || rel >= 0x142c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c6e0 size=16 callers=0 calls=0
*/
void sub_142c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c6e0ULL || rel >= 0x142c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c6f0 size=16 callers=0 calls=0
*/
void sub_142c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c6f0ULL || rel >= 0x142c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c700 size=304 callers=0 calls=0
*/
void sub_142c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c700ULL || rel >= 0x142c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c830 size=160 callers=0 calls=0
*/
void sub_142c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c830ULL || rel >= 0x142c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c8d0 size=160 callers=0 calls=0
*/
void sub_142c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c8d0ULL || rel >= 0x142c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c970 size=16 callers=0 calls=0
*/
void sub_142c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c970ULL || rel >= 0x142c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c980 size=16 callers=0 calls=0
*/
void sub_142c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c980ULL || rel >= 0x142c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142c990 size=112 callers=0 calls=0
*/
void sub_142c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c990ULL || rel >= 0x142ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ca00 size=16 callers=0 calls=0
*/
void sub_142ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ca00ULL || rel >= 0x142ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ca10 size=16 callers=0 calls=0
*/
void sub_142ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ca10ULL || rel >= 0x142ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ca20 size=32 callers=0 calls=0
*/
void sub_142ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ca20ULL || rel >= 0x142ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ca40 size=160 callers=0 calls=1
   calls: sub_142d4a0
*/
void sub_142ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ca40ULL || rel >= 0x142cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cae0 size=224 callers=0 calls=2
   calls: sub_142cc60, sub_6a0d40
*/
void sub_142cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cae0ULL || rel >= 0x142cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cbc0 size=16 callers=0 calls=0
*/
void sub_142cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cbc0ULL || rel >= 0x142cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cbd0 size=96 callers=0 calls=0
*/
void sub_142cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cbd0ULL || rel >= 0x142cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cc30 size=16 callers=0 calls=0
*/
void sub_142cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cc30ULL || rel >= 0x142cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cc40 size=16 callers=0 calls=0
*/
void sub_142cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cc40ULL || rel >= 0x142cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cc50 size=16 callers=0 calls=0
*/
void sub_142cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cc50ULL || rel >= 0x142cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cc60 size=544 callers=1 calls=1
   calls: RequestPokemonValidation
*/
void sub_142cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cc60ULL || rel >= 0x142ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ce80 size=64 callers=0 calls=0
*/
void sub_142ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ce80ULL || rel >= 0x142cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cec0 size=64 callers=0 calls=0
*/
void sub_142cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cec0ULL || rel >= 0x142cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cf00 size=48 callers=0 calls=0
*/
void sub_142cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cf00ULL || rel >= 0x142cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cf30 size=48 callers=0 calls=0
*/
void sub_142cf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cf30ULL || rel >= 0x142cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cf60 size=48 callers=0 calls=0
*/
void sub_142cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cf60ULL || rel >= 0x142cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cf90 size=64 callers=0 calls=0
*/
void sub_142cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cf90ULL || rel >= 0x142cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142cfd0 size=48 callers=0 calls=0
*/
void sub_142cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142cfd0ULL || rel >= 0x142d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d000 size=48 callers=0 calls=0
*/
void sub_142d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d000ULL || rel >= 0x142d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d030 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_142d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d030ULL || rel >= 0x142d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d180 size=80 callers=0 calls=0
*/
void sub_142d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d180ULL || rel >= 0x142d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d1d0 size=240 callers=0 calls=0
*/
void sub_142d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d1d0ULL || rel >= 0x142d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d2c0 size=80 callers=0 calls=0
*/
void sub_142d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d2c0ULL || rel >= 0x142d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d310 size=80 callers=0 calls=0
*/
void sub_142d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d310ULL || rel >= 0x142d360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d360 size=16 callers=0 calls=0
*/
void sub_142d360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d360ULL || rel >= 0x142d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d370 size=16 callers=0 calls=0
*/
void sub_142d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d370ULL || rel >= 0x142d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d380 size=80 callers=0 calls=0
*/
void sub_142d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d380ULL || rel >= 0x142d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d3d0 size=80 callers=0 calls=0
*/
void sub_142d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d3d0ULL || rel >= 0x142d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d420 size=128 callers=0 calls=0
*/
void sub_142d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d420ULL || rel >= 0x142d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d4a0 size=784 callers=1 calls=10
   calls: sub_762930, sub_762d50, sub_762d70, sub_767950, sub_7847d0, sub_8ddc00, sub_8ddc20, sub_8dde50, sub_8ddec0, sub_8e0730
*/
void sub_142d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d4a0ULL || rel >= 0x142d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d7b0 size=80 callers=2 calls=2
   calls: sub_142d800, sub_e7b660
*/
void sub_142d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d7b0ULL || rel >= 0x142d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d800 size=224 callers=1 calls=3
   calls: sub_14301d0, sub_7c2da0, sub_e7b5e0
*/
void sub_142d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d800ULL || rel >= 0x142d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142d8e0 size=816 callers=0 calls=12
   calls: sub_142dc10, sub_14303f0, sub_14334e0, sub_1433970, sub_5cfad0, sub_78f150, sub_78f240, sub_79ab20, sub_79b250, sub_e7c0f0, sub_e7e890, sub_e7eb40
   ref: CommonOptionBar
   ref: SystemMessageView
   ref: ViewTeamSelect
*/
void SystemMessageView_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142d8e0ULL || rel >= 0x142dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142dc10 size=400 callers=1 calls=3
   calls: sub_14302c0, sub_14338f0, sub_e7c160
*/
void sub_142dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142dc10ULL || rel >= 0x142dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142dda0 size=16 callers=0 calls=0
*/
void sub_142dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142dda0ULL || rel >= 0x142ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ddb0 size=16 callers=0 calls=0
*/
void sub_142ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ddb0ULL || rel >= 0x142ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ddc0 size=16 callers=0 calls=0
*/
void sub_142ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ddc0ULL || rel >= 0x142ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ddd0 size=32 callers=0 calls=0
*/
void sub_142ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ddd0ULL || rel >= 0x142ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ddf0 size=3248 callers=0 calls=20
   calls: sub_142eaa0, sub_142ec00, sub_14302c0, sub_14307b0, sub_14308f0, sub_1430a40, sub_1430b90, sub_1430cc0, sub_1430e00, sub_1430fc0, sub_1431190, sub_1431390
   ... +8 more
*/
void sub_142ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ddf0ULL || rel >= 0x142eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142eaa0 size=352 callers=2 calls=0
*/
void sub_142eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142eaa0ULL || rel >= 0x142ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ec00 size=272 callers=8 calls=2
   calls: sub_14314e0, sub_5cfaf0
*/
void sub_142ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ec00ULL || rel >= 0x142ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ed10 size=272 callers=0 calls=3
   calls: sub_14302c0, sub_1434760, sub_7847d0
*/
void sub_142ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ed10ULL || rel >= 0x142ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ee20 size=1232 callers=0 calls=11
   calls: sub_142eaa0, sub_14302c0, sub_14307b0, sub_1430a40, sub_1430b90, sub_1430cc0, sub_1430e00, sub_1431190, sub_1434670, sub_1435810, sub_e7c160
*/
void sub_142ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ee20ULL || rel >= 0x142f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f2f0 size=16 callers=0 calls=0
*/
void sub_142f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f2f0ULL || rel >= 0x142f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f300 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_142f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f300ULL || rel >= 0x142f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f3b0 size=16 callers=0 calls=0
*/
void sub_142f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f3b0ULL || rel >= 0x142f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f3c0 size=16 callers=0 calls=0
*/
void sub_142f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f3c0ULL || rel >= 0x142f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f3d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_142f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f3d0ULL || rel >= 0x142f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f480 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_142f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f480ULL || rel >= 0x142f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f530 size=16 callers=0 calls=0
*/
void sub_142f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f530ULL || rel >= 0x142f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f540 size=16 callers=0 calls=0
*/
void sub_142f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f540ULL || rel >= 0x142f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f550 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_142f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f550ULL || rel >= 0x142f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f6f0 size=16 callers=0 calls=0
*/
void sub_142f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f6f0ULL || rel >= 0x142f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f700 size=112 callers=0 calls=1
   calls: sub_1430120
*/
void sub_142f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f700ULL || rel >= 0x142f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f770 size=16 callers=0 calls=0
*/
void sub_142f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f770ULL || rel >= 0x142f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f780 size=16 callers=0 calls=0
*/
void sub_142f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f780ULL || rel >= 0x142f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f790 size=240 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_142f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f790ULL || rel >= 0x142f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f880 size=240 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_142f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f880ULL || rel >= 0x142f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f970 size=16 callers=0 calls=0
*/
void sub_142f970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f970ULL || rel >= 0x142f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f980 size=16 callers=0 calls=0
*/
void sub_142f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f980ULL || rel >= 0x142f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f990 size=16 callers=0 calls=0
*/
void sub_142f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f990ULL || rel >= 0x142f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142f9a0 size=112 callers=0 calls=1
   calls: sub_1430120
*/
void sub_142f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f9a0ULL || rel >= 0x142fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fa10 size=16 callers=0 calls=0
*/
void sub_142fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fa10ULL || rel >= 0x142fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fa20 size=16 callers=0 calls=0
*/
void sub_142fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fa20ULL || rel >= 0x142fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fa30 size=240 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_142fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fa30ULL || rel >= 0x142fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fb20 size=240 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_142fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fb20ULL || rel >= 0x142fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fc10 size=16 callers=0 calls=0
*/
void sub_142fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fc10ULL || rel >= 0x142fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fc20 size=16 callers=0 calls=0
*/
void sub_142fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fc20ULL || rel >= 0x142fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fc30 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_142fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fc30ULL || rel >= 0x142fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fcb0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_142fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fcb0ULL || rel >= 0x142fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fe20 size=96 callers=0 calls=1
   calls: sub_1430040
*/
void sub_142fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fe20ULL || rel >= 0x142fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fe80 size=16 callers=0 calls=0
*/
void sub_142fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fe80ULL || rel >= 0x142fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fe90 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_142fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fe90ULL || rel >= 0x142ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142ff30 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_142ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142ff30ULL || rel >= 0x142fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0142fff0 size=16 callers=0 calls=0
*/
void sub_142fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142fff0ULL || rel >= 0x1430000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430000 size=16 callers=0 calls=0
*/
void sub_1430000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430000ULL || rel >= 0x1430010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430010 size=16 callers=0 calls=0
*/
void sub_1430010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430010ULL || rel >= 0x1430020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430020 size=32 callers=0 calls=0
*/
void sub_1430020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430020ULL || rel >= 0x1430040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430040 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1430040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430040ULL || rel >= 0x1430120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430120 size=176 callers=2 calls=1
   calls: sub_c39c40
*/
void sub_1430120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430120ULL || rel >= 0x14301d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014301d0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14301d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14301d0ULL || rel >= 0x14302c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014302c0 size=304 callers=16 calls=0
*/
void sub_14302c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14302c0ULL || rel >= 0x14303f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014303f0 size=288 callers=4 calls=2
   calls: sub_1430510, sub_e809c0
*/
void sub_14303f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14303f0ULL || rel >= 0x1430510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430510 size=672 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1430510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430510ULL || rel >= 0x14307b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014307b0 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_14307b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14307b0ULL || rel >= 0x14308f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014308f0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_14308f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14308f0ULL || rel >= 0x1430a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430a40 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_1430a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430a40ULL || rel >= 0x1430b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430b90 size=304 callers=29 calls=0
*/
void sub_1430b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430b90ULL || rel >= 0x1430cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430cc0 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_1430cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430cc0ULL || rel >= 0x1430e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430e00 size=448 callers=2 calls=1
   calls: anonymous
*/
void sub_1430e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430e00ULL || rel >= 0x1430fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01430fc0 size=464 callers=1 calls=1
   calls: anonymous
*/
void sub_1430fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1430fc0ULL || rel >= 0x1431190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01431190 size=512 callers=2 calls=1
   calls: anonymous
*/
void sub_1431190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1431190ULL || rel >= 0x1431390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01431390 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1431390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1431390ULL || rel >= 0x14314e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014314e0 size=304 callers=1 calls=0
*/
void sub_14314e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14314e0ULL || rel >= 0x1431610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01431610 size=2912 callers=0 calls=10
   calls: L_btlteam_pokelist_05_P_team_pokelist_icon_03, sub_1432170, sub_1432380, sub_14aad40, sub_5cfad0, sub_e7eb10, sub_e7f7c0, sub_e80580, sub_e83f20, unselect_header_color
   ref: pane_%s
   ref: L_btlteam_select_team_%02d
*/
void pane__s_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1431610ULL || rel >= 0x1432170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432170 size=384 callers=2 calls=2
   calls: sub_5cfad0, sub_e83f20
*/
void sub_1432170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432170ULL || rel >= 0x14322f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014322f0 size=144 callers=0 calls=1
   calls: sub_67d450
*/
void sub_14322f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14322f0ULL || rel >= 0x1432380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432380 size=1248 callers=5 calls=3
   calls: sub_1433040, sub_14bacd0, sub_14e1a30
*/
void sub_1432380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432380ULL || rel >= 0x1432860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432860 size=64 callers=2 calls=1
   calls: sub_e83f20
*/
void sub_1432860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432860ULL || rel >= 0x14328a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014328a0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btlteam_select/bin/btlteam_select_00_uikit.bin
   ref: bin/appli/btlteam_select/bin/btlteam_select_00_lyt.bin
*/
void btlteam_select_00_uikit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14328a0ULL || rel >= 0x1432a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432a80 size=128 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_1432a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432a80ULL || rel >= 0x1432b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432b00 size=128 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_1432b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432b00ULL || rel >= 0x1432b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432b80 size=192 callers=0 calls=4
   calls: sub_1432380, sub_e80580, sub_e83430, unselect_header_color
*/
void sub_1432b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432b80ULL || rel >= 0x1432c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432c40 size=720 callers=0 calls=5
   calls: sub_1432380, sub_1502120, sub_5cfad0, sub_e83540, unselect_header_color
*/
void sub_1432c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432c40ULL || rel >= 0x1432f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432f10 size=64 callers=6 calls=0
*/
void sub_1432f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432f10ULL || rel >= 0x1432f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432f50 size=112 callers=1 calls=0
*/
void sub_1432f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432f50ULL || rel >= 0x1432fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01432fc0 size=128 callers=7 calls=0
*/
void sub_1432fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1432fc0ULL || rel >= 0x1433040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433040 size=1184 callers=4 calls=8
   calls: L_btlteam_pokelist_05_switch, sub_1311c60, sub_1315b90, sub_67bdb0, sub_67c120, sub_67d450, sub_7847d0, sub_7c2af0
*/
void sub_1433040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433040ULL || rel >= 0x14334e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014334e0 size=64 callers=4 calls=0
*/
void sub_14334e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14334e0ULL || rel >= 0x1433520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433520 size=32 callers=5 calls=0
*/
void sub_1433520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433520ULL || rel >= 0x1433540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433540 size=320 callers=0 calls=0
*/
void sub_1433540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433540ULL || rel >= 0x1433680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433680 size=16 callers=0 calls=0
*/
void sub_1433680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433680ULL || rel >= 0x1433690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433690 size=16 callers=0 calls=0
*/
void sub_1433690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433690ULL || rel >= 0x14336a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014336a0 size=16 callers=0 calls=0
*/
void sub_14336a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14336a0ULL || rel >= 0x14336b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014336b0 size=16 callers=0 calls=0
*/
void sub_14336b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14336b0ULL || rel >= 0x14336c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014336c0 size=16 callers=0 calls=0
*/
void sub_14336c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14336c0ULL || rel >= 0x14336d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014336d0 size=16 callers=0 calls=0
*/
void sub_14336d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14336d0ULL || rel >= 0x14336e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014336e0 size=16 callers=0 calls=0
*/
void sub_14336e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14336e0ULL || rel >= 0x14336f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014336f0 size=16 callers=0 calls=0
*/
void sub_14336f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14336f0ULL || rel >= 0x1433700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433700 size=48 callers=0 calls=0
*/
void sub_1433700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433700ULL || rel >= 0x1433730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433730 size=16 callers=0 calls=0
*/
void sub_1433730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433730ULL || rel >= 0x1433740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433740 size=16 callers=0 calls=0
*/
void sub_1433740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433740ULL || rel >= 0x1433750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433750 size=16 callers=0 calls=0
*/
void sub_1433750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433750ULL || rel >= 0x1433760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433760 size=48 callers=0 calls=0
*/
void sub_1433760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433760ULL || rel >= 0x1433790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433790 size=16 callers=0 calls=0
*/
void sub_1433790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433790ULL || rel >= 0x14337a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014337a0 size=16 callers=0 calls=0
*/
void sub_14337a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14337a0ULL || rel >= 0x14337b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014337b0 size=16 callers=0 calls=0
*/
void sub_14337b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14337b0ULL || rel >= 0x14337c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014337c0 size=112 callers=0 calls=0
*/
void sub_14337c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14337c0ULL || rel >= 0x1433830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433830 size=16 callers=0 calls=0
*/
void sub_1433830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433830ULL || rel >= 0x1433840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433840 size=32 callers=0 calls=0
*/
void sub_1433840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433840ULL || rel >= 0x1433860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433860 size=32 callers=0 calls=0
*/
void sub_1433860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433860ULL || rel >= 0x1433880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433880 size=32 callers=0 calls=0
*/
void sub_1433880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433880ULL || rel >= 0x14338a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014338a0 size=16 callers=0 calls=0
*/
void sub_14338a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14338a0ULL || rel >= 0x14338b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014338b0 size=32 callers=0 calls=0
*/
void sub_14338b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14338b0ULL || rel >= 0x14338d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014338d0 size=32 callers=0 calls=0
*/
void sub_14338d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14338d0ULL || rel >= 0x14338f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014338f0 size=128 callers=1 calls=2
   calls: sub_65d700, sub_e7c210
*/
void sub_14338f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14338f0ULL || rel >= 0x1433970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01433970 size=2928 callers=1 calls=13
   calls: sub_134f490, sub_1353ad0, sub_1353b00, sub_1353b30, sub_1353ec0, sub_1376420, sub_14344e0, sub_1435000, sub_1435270, sub_1435450, sub_67be60, sub_7847d0
   ... +1 more
*/
void sub_1433970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433970ULL || rel >= 0x14344e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014344e0 size=336 callers=1 calls=1
   calls: sub_1434ea0
*/
void sub_14344e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14344e0ULL || rel >= 0x1434630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434630 size=64 callers=1 calls=0
*/
void sub_1434630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434630ULL || rel >= 0x1434670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434670 size=112 callers=6 calls=0
*/
void sub_1434670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434670ULL || rel >= 0x14346e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014346e0 size=112 callers=2 calls=0
*/
void sub_14346e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14346e0ULL || rel >= 0x1434750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434750 size=16 callers=1 calls=0
*/
void sub_1434750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434750ULL || rel >= 0x1434760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434760 size=560 callers=2 calls=0
*/
void sub_1434760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434760ULL || rel >= 0x1434990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434990 size=208 callers=0 calls=0
*/
void sub_1434990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434990ULL || rel >= 0x1434a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434a60 size=208 callers=0 calls=0
*/
void sub_1434a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434a60ULL || rel >= 0x1434b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434b30 size=16 callers=0 calls=0
*/
void sub_1434b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434b30ULL || rel >= 0x1434b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434b40 size=208 callers=0 calls=0
*/
void sub_1434b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434b40ULL || rel >= 0x1434c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434c10 size=208 callers=0 calls=0
*/
void sub_1434c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434c10ULL || rel >= 0x1434ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434ce0 size=16 callers=0 calls=0
*/
void sub_1434ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434ce0ULL || rel >= 0x1434cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434cf0 size=16 callers=0 calls=0
*/
void sub_1434cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434cf0ULL || rel >= 0x1434d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434d00 size=208 callers=0 calls=0
*/
void sub_1434d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434d00ULL || rel >= 0x1434dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434dd0 size=208 callers=0 calls=0
*/
void sub_1434dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434dd0ULL || rel >= 0x1434ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01434ea0 size=352 callers=3 calls=0
*/
void sub_1434ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1434ea0ULL || rel >= 0x1435000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435000 size=624 callers=3 calls=1
   calls: sub_1434ea0
*/
void sub_1435000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435000ULL || rel >= 0x1435270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435270 size=480 callers=2 calls=4
   calls: sub_1354400, sub_1386b00, sub_1386d20, sub_138c900
*/
void sub_1435270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435270ULL || rel >= 0x1435450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435450 size=464 callers=35 calls=3
   calls: sub_67b990, sub_783bd0, sub_7c22a0
*/
void sub_1435450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435450ULL || rel >= 0x1435620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435620 size=384 callers=0 calls=7
   calls: CommonOptionBar_4, btl_team, sub_67b990, sub_67d450, sub_d0c0, sub_e807f0, sub_eb8930
   ref: StateShowSimpleMsg
*/
void StateShowSimpleMsg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435620ULL || rel >= 0x14357a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014357a0 size=16 callers=0 calls=0
*/
void sub_14357a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14357a0ULL || rel >= 0x14357b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014357b0 size=16 callers=0 calls=0
*/
void sub_14357b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14357b0ULL || rel >= 0x14357c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014357c0 size=48 callers=1 calls=0
*/
void sub_14357c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14357c0ULL || rel >= 0x14357f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014357f0 size=32 callers=1 calls=0
*/
void sub_14357f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14357f0ULL || rel >= 0x1435810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435810 size=32 callers=1 calls=0
*/
void sub_1435810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435810ULL || rel >= 0x1435830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435830 size=16 callers=0 calls=0
*/
void sub_1435830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435830ULL || rel >= 0x1435840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435840 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1435840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435840ULL || rel >= 0x14358b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014358b0 size=16 callers=0 calls=0
*/
void sub_14358b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14358b0ULL || rel >= 0x14358c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014358c0 size=16 callers=0 calls=0
*/
void sub_14358c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14358c0ULL || rel >= 0x14358d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014358d0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_14358d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14358d0ULL || rel >= 0x1435940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435940 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1435940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435940ULL || rel >= 0x14359b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014359b0 size=16 callers=0 calls=0
*/
void sub_14359b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14359b0ULL || rel >= 0x14359c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014359c0 size=16 callers=0 calls=0
*/
void sub_14359c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14359c0ULL || rel >= 0x14359d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014359d0 size=560 callers=8 calls=5
   calls: sub_142ec00, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40
   ref: CommonOptionBar
   ref: ViewTeamSelect
*/
void CommonOptionBar_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14359d0ULL || rel >= 0x1435c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435c00 size=336 callers=9 calls=2
   calls: sub_c39c40, sub_e7ea90
   ref: common/btl_team.dat
*/
void btl_team(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435c00ULL || rel >= 0x1435d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435d50 size=368 callers=2 calls=4
   calls: btl_team, sub_67b990, sub_67d450, sub_eb8930
*/
void sub_1435d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435d50ULL || rel >= 0x1435ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435ec0 size=16 callers=1 calls=0
*/
void sub_1435ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435ec0ULL || rel >= 0x1435ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435ed0 size=16 callers=0 calls=0
*/
void sub_1435ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435ed0ULL || rel >= 0x1435ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435ee0 size=16 callers=0 calls=0
*/
void sub_1435ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435ee0ULL || rel >= 0x1435ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435ef0 size=16 callers=0 calls=0
*/
void sub_1435ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435ef0ULL || rel >= 0x1435f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435f00 size=16 callers=0 calls=0
*/
void sub_1435f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435f00ULL || rel >= 0x1435f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435f10 size=16 callers=0 calls=0
*/
void sub_1435f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435f10ULL || rel >= 0x1435f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435f20 size=16 callers=0 calls=0
*/
void sub_1435f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435f20ULL || rel >= 0x1435f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435f30 size=16 callers=0 calls=0
*/
void sub_1435f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435f30ULL || rel >= 0x1435f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435f40 size=16 callers=0 calls=0
*/
void sub_1435f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435f40ULL || rel >= 0x1435f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01435f50 size=992 callers=0 calls=6
   calls: CommonOptionBar_4, btl_team, sub_67b990, sub_67d450, sub_d0c0, sub_e807f0
   ref: StateNoTeams
*/
void StateNoTeams(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435f50ULL || rel >= 0x1436330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436330 size=128 callers=0 calls=2
   calls: sub_eb8c60, sub_eb8ea0
*/
void sub_1436330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436330ULL || rel >= 0x14363b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014363b0 size=16 callers=0 calls=0
*/
void sub_14363b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14363b0ULL || rel >= 0x14363c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014363c0 size=144 callers=0 calls=0
*/
void sub_14363c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14363c0ULL || rel >= 0x1436450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436450 size=144 callers=0 calls=0
*/
void sub_1436450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436450ULL || rel >= 0x14364e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014364e0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_14364e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14364e0ULL || rel >= 0x1436550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436550 size=144 callers=0 calls=0
*/
void sub_1436550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436550ULL || rel >= 0x14365e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014365e0 size=144 callers=0 calls=0
*/
void sub_14365e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14365e0ULL || rel >= 0x1436670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436670 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1436670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436670ULL || rel >= 0x14366e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014366e0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_14366e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14366e0ULL || rel >= 0x1436750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436750 size=144 callers=0 calls=0
*/
void sub_1436750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436750ULL || rel >= 0x14367e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014367e0 size=144 callers=0 calls=0
*/
void sub_14367e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14367e0ULL || rel >= 0x1436870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436870 size=144 callers=0 calls=7
   calls: CommonOptionBar_4, sub_1432860, sub_1433520, sub_1435d50, sub_1436900, sub_d0c0, sub_e807f0
   ref: StateSelectTeam
*/
void StateSelectTeam(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436870ULL || rel >= 0x1436900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436900 size=832 callers=1 calls=6
   calls: btl_team, sub_14302c0, sub_67b990, sub_67d450, sub_eb7570, sub_eb75e0
*/
void sub_1436900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436900ULL || rel >= 0x1436c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436c40 size=368 callers=0 calls=7
   calls: sub_14302c0, sub_1432fc0, sub_1433520, sub_14346e0, sub_1502120, sub_5cfad0, sub_7847d0
*/
void sub_1436c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436c40ULL || rel >= 0x1436db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436db0 size=16 callers=0 calls=0
*/
void sub_1436db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436db0ULL || rel >= 0x1436dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436dc0 size=16 callers=0 calls=0
*/
void sub_1436dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436dc0ULL || rel >= 0x1436dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436dd0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1436dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436dd0ULL || rel >= 0x1436e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436e40 size=16 callers=0 calls=0
*/
void sub_1436e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436e40ULL || rel >= 0x1436e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436e50 size=16 callers=0 calls=0
*/
void sub_1436e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436e50ULL || rel >= 0x1436e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436e60 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1436e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436e60ULL || rel >= 0x1436ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436ed0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1436ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436ed0ULL || rel >= 0x1436f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436f40 size=16 callers=0 calls=0
*/
void sub_1436f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436f40ULL || rel >= 0x1436f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436f50 size=16 callers=0 calls=0
*/
void sub_1436f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436f50ULL || rel >= 0x1436f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01436f60 size=416 callers=0 calls=6
   calls: CommonOptionBar_4, btl_team, sub_67b990, sub_67d450, sub_d0c0, sub_eb8930
   ref: StateOnlineCheck
*/
void StateOnlineCheck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436f60ULL || rel >= 0x1437100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437100 size=144 callers=0 calls=2
   calls: sub_14302c0, sub_1434670
*/
void sub_1437100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437100ULL || rel >= 0x1437190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437190 size=32 callers=0 calls=0
*/
void sub_1437190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437190ULL || rel >= 0x14371b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014371b0 size=96 callers=0 calls=0
*/
void sub_14371b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14371b0ULL || rel >= 0x1437210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437210 size=96 callers=0 calls=0
*/
void sub_1437210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437210ULL || rel >= 0x1437270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437270 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1437270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437270ULL || rel >= 0x14372e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014372e0 size=96 callers=0 calls=0
*/
void sub_14372e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14372e0ULL || rel >= 0x1437340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437340 size=96 callers=0 calls=0
*/
void sub_1437340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437340ULL || rel >= 0x14373a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014373a0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_14373a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14373a0ULL || rel >= 0x1437410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437410 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1437410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437410ULL || rel >= 0x1437480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437480 size=96 callers=0 calls=0
*/
void sub_1437480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437480ULL || rel >= 0x14374e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014374e0 size=96 callers=0 calls=0
*/
void sub_14374e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14374e0ULL || rel >= 0x1437540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437540 size=1344 callers=0 calls=13
   calls: CommonOptionBar_4, btl_team, sub_1311c60, sub_1313310, sub_1313430, sub_14302c0, sub_1434670, sub_67b990, sub_67d450, sub_7c2af0, sub_d0c0, sub_e807f0
   ... +1 more
   ref: StateConfirmation
*/
void StateConfirmation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437540ULL || rel >= 0x1437a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437a80 size=80 callers=0 calls=2
   calls: sub_eb8c60, sub_eb8ea0
*/
void sub_1437a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437a80ULL || rel >= 0x1437ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437ad0 size=16 callers=0 calls=0
*/
void sub_1437ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437ad0ULL || rel >= 0x1437ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437ae0 size=144 callers=0 calls=0
*/
void sub_1437ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437ae0ULL || rel >= 0x1437b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437b70 size=144 callers=0 calls=0
*/
void sub_1437b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437b70ULL || rel >= 0x1437c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437c00 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1437c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437c00ULL || rel >= 0x1437c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437c70 size=144 callers=0 calls=0
*/
void sub_1437c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437c70ULL || rel >= 0x1437d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437d00 size=144 callers=0 calls=0
*/
void sub_1437d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437d00ULL || rel >= 0x1437d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437d90 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1437d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437d90ULL || rel >= 0x1437e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437e00 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1437e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437e00ULL || rel >= 0x1437e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437e70 size=144 callers=0 calls=0
*/
void sub_1437e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437e70ULL || rel >= 0x1437f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437f00 size=144 callers=0 calls=0
*/
void sub_1437f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437f00ULL || rel >= 0x1437f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01437f90 size=416 callers=0 calls=9
   calls: CommonOptionBar_4, btl_team, sub_1432380, sub_1438130, sub_67b990, sub_67d450, sub_d0c0, sub_e807f0, sub_eb8930
   ref: StateShowRegulationError
*/
void StateShowRegulationError(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1437f90ULL || rel >= 0x1438130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438130 size=432 callers=1 calls=4
   calls: sub_14302c0, sub_1434670, sub_1434750, sub_1434760
*/
void sub_1438130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438130ULL || rel >= 0x14382e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014382e0 size=16 callers=0 calls=0
*/
void sub_14382e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14382e0ULL || rel >= 0x14382f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014382f0 size=16 callers=0 calls=0
*/
void sub_14382f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14382f0ULL || rel >= 0x1438300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438300 size=96 callers=0 calls=0
*/
void sub_1438300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438300ULL || rel >= 0x1438360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438360 size=96 callers=0 calls=0
*/
void sub_1438360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438360ULL || rel >= 0x14383c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014383c0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_14383c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14383c0ULL || rel >= 0x1438430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438430 size=96 callers=0 calls=0
*/
void sub_1438430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438430ULL || rel >= 0x1438490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438490 size=96 callers=0 calls=0
*/
void sub_1438490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438490ULL || rel >= 0x14384f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014384f0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_14384f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14384f0ULL || rel >= 0x1438560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438560 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1438560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438560ULL || rel >= 0x14385d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014385d0 size=96 callers=0 calls=0
*/
void sub_14385d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14385d0ULL || rel >= 0x1438630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438630 size=96 callers=0 calls=0
*/
void sub_1438630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438630ULL || rel >= 0x1438690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438690 size=288 callers=0 calls=10
   calls: CommonOptionBar_4, sub_14302c0, sub_1432f10, sub_1432f50, sub_1434630, sub_1435d50, sub_d0c0, sub_e807f0, sub_eb6230, sub_eb7730
   ref: StateIn
*/
void StateIn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438690ULL || rel >= 0x14387b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014387b0 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_14387b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14387b0ULL || rel >= 0x14387f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014387f0 size=16 callers=0 calls=0
*/
void sub_14387f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14387f0ULL || rel >= 0x1438800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438800 size=16 callers=0 calls=0
*/
void sub_1438800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438800ULL || rel >= 0x1438810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438810 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1438810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438810ULL || rel >= 0x1438880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438880 size=16 callers=0 calls=0
*/
void sub_1438880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438880ULL || rel >= 0x1438890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438890 size=16 callers=0 calls=0
*/
void sub_1438890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438890ULL || rel >= 0x14388a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014388a0 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_14388a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14388a0ULL || rel >= 0x1438910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438910 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1438910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438910ULL || rel >= 0x1438980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438980 size=16 callers=0 calls=0
*/
void sub_1438980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438980ULL || rel >= 0x1438990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438990 size=16 callers=0 calls=0
*/
void sub_1438990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438990ULL || rel >= 0x14389a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014389a0 size=112 callers=0 calls=5
   calls: CommonOptionBar_4, sub_1435ec0, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: StateOut
*/
void StateOut(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14389a0ULL || rel >= 0x1438a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438a10 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_1438a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438a10ULL || rel >= 0x1438a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438a50 size=16 callers=0 calls=0
*/
void sub_1438a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438a50ULL || rel >= 0x1438a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438a60 size=16 callers=0 calls=0
*/
void sub_1438a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438a60ULL || rel >= 0x1438a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438a70 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1438a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438a70ULL || rel >= 0x1438ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438ae0 size=16 callers=0 calls=0
*/
void sub_1438ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438ae0ULL || rel >= 0x1438af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438af0 size=16 callers=0 calls=0
*/
void sub_1438af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438af0ULL || rel >= 0x1438b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438b00 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1438b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438b00ULL || rel >= 0x1438b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438b70 size=112 callers=0 calls=1
   calls: sub_1430b90
*/
void sub_1438b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438b70ULL || rel >= 0x1438be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438be0 size=16 callers=0 calls=0
*/
void sub_1438be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438be0ULL || rel >= 0x1438bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438bf0 size=16 callers=0 calls=0
*/
void sub_1438bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438bf0ULL || rel >= 0x1438c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438c00 size=720 callers=0 calls=11
   calls: sub_1438ed0, sub_1439d80, sub_1439eb0, sub_143d530, sub_78f150, sub_78f240, sub_79ab20, sub_79b250, sub_a7b850, sub_e7c0f0, sub_e7e890
   ref: message
   ref: optionbar
*/
void optionbar_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438c00ULL || rel >= 0x1438ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01438ed0 size=400 callers=1 calls=3
   calls: sub_1439d80, sub_143d4d0, sub_e7c160
*/
void sub_1438ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1438ed0ULL || rel >= 0x1439060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439060 size=192 callers=0 calls=2
   calls: sub_1439d80, sub_143d5a0
*/
void sub_1439060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439060ULL || rel >= 0x1439120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439120 size=528 callers=0 calls=3
   calls: sub_1439d80, sub_1500ea0, sub_e7ea90
*/
void sub_1439120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439120ULL || rel >= 0x1439330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439330 size=16 callers=0 calls=0
*/
void sub_1439330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439330ULL || rel >= 0x1439340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439340 size=784 callers=0 calls=6
   calls: sub_1439d80, sub_143a260, sub_143a3a0, sub_143a4e0, sub_143a620, sub_e7c160
*/
void sub_1439340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439340ULL || rel >= 0x1439650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439650 size=112 callers=0 calls=0
*/
void sub_1439650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439650ULL || rel >= 0x14396c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014396c0 size=624 callers=0 calls=6
   calls: sub_1439d80, sub_67b990, sub_67d450, sub_e7c160, sub_eb7570, sub_eb75e0
*/
void sub_14396c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14396c0ULL || rel >= 0x1439930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439930 size=496 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1439930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439930ULL || rel >= 0x1439b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439b20 size=16 callers=0 calls=0
*/
void sub_1439b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439b20ULL || rel >= 0x1439b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439b30 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1439b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439b30ULL || rel >= 0x1439be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439be0 size=16 callers=0 calls=0
*/
void sub_1439be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439be0ULL || rel >= 0x1439bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439bf0 size=16 callers=0 calls=0
*/
void sub_1439bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439bf0ULL || rel >= 0x1439c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439c00 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1439c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439c00ULL || rel >= 0x1439cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439cb0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1439cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439cb0ULL || rel >= 0x1439d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439d60 size=16 callers=0 calls=0
*/
void sub_1439d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439d60ULL || rel >= 0x1439d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439d70 size=16 callers=0 calls=0
*/
void sub_1439d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439d70ULL || rel >= 0x1439d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439d80 size=304 callers=10 calls=0
*/
void sub_1439d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439d80ULL || rel >= 0x1439eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439eb0 size=288 callers=1 calls=2
   calls: sub_1439fd0, sub_e809c0
*/
void sub_1439eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439eb0ULL || rel >= 0x1439fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01439fd0 size=528 callers=1 calls=3
   calls: sub_143bda0, sub_790490, sub_e7fe20
*/
void sub_1439fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1439fd0ULL || rel >= 0x143a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a1e0 size=80 callers=0 calls=1
   calls: sub_e80580
*/
void sub_143a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a1e0ULL || rel >= 0x143a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a230 size=16 callers=0 calls=0
*/
void sub_143a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a230ULL || rel >= 0x143a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a240 size=16 callers=0 calls=0
*/
void sub_143a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a240ULL || rel >= 0x143a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a250 size=16 callers=0 calls=0
*/
void sub_143a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a250ULL || rel >= 0x143a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a260 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_143a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a260ULL || rel >= 0x143a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a3a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_143a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a3a0ULL || rel >= 0x143a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a4e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_143a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a4e0ULL || rel >= 0x143a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a620 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_143a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a620ULL || rel >= 0x143a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a760 size=64 callers=0 calls=0
   ref: common/tips.dat
*/
void tips_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a760ULL || rel >= 0x143a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a7a0 size=544 callers=0 calls=8
   calls: optionbar_12, sub_1439d80, sub_67b990, sub_67d450, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb8930
   ref: StateShowNoTips
*/
void StateShowNoTips(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a7a0ULL || rel >= 0x143a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a9c0 size=16 callers=0 calls=0
*/
void sub_143a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a9c0ULL || rel >= 0x143a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a9d0 size=16 callers=0 calls=0
*/
void sub_143a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a9d0ULL || rel >= 0x143a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143a9e0 size=96 callers=0 calls=0
*/
void sub_143a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143a9e0ULL || rel >= 0x143aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143aa40 size=96 callers=0 calls=0
*/
void sub_143aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143aa40ULL || rel >= 0x143aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143aaa0 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143aaa0ULL || rel >= 0x143ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ab10 size=96 callers=0 calls=0
*/
void sub_143ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ab10ULL || rel >= 0x143ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ab70 size=96 callers=0 calls=0
*/
void sub_143ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ab70ULL || rel >= 0x143abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143abd0 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143abd0ULL || rel >= 0x143ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ac40 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ac40ULL || rel >= 0x143acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143acb0 size=96 callers=0 calls=0
*/
void sub_143acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143acb0ULL || rel >= 0x143ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ad10 size=96 callers=0 calls=0
*/
void sub_143ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ad10ULL || rel >= 0x143ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ad70 size=304 callers=12 calls=0
*/
void sub_143ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ad70ULL || rel >= 0x143aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143aea0 size=720 callers=4 calls=6
   calls: sub_143b310, sub_5cfaf0, sub_795bc0, sub_79b990, sub_a800f0, sub_c39c40
   ref: optionbar
*/
void optionbar_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143aea0ULL || rel >= 0x143b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b170 size=192 callers=1 calls=2
   calls: sub_1439d80, sub_eba300
*/
void sub_143b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b170ULL || rel >= 0x143b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b230 size=224 callers=2 calls=2
   calls: sub_1439d80, sub_ebb140
*/
void sub_143b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b230ULL || rel >= 0x143b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b310 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_143b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b310ULL || rel >= 0x143b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b460 size=176 callers=0 calls=6
   calls: optionbar_12, sub_1502120, sub_5cfad0, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: StateOut
*/
void StateOut_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b460ULL || rel >= 0x143b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b510 size=80 callers=0 calls=2
   calls: sub_eb6530, sub_eb7830
*/
void sub_143b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b510ULL || rel >= 0x143b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b560 size=16 callers=0 calls=0
*/
void sub_143b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b560ULL || rel >= 0x143b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b570 size=16 callers=0 calls=0
*/
void sub_143b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b570ULL || rel >= 0x143b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b580 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b580ULL || rel >= 0x143b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b5f0 size=16 callers=0 calls=0
*/
void sub_143b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b5f0ULL || rel >= 0x143b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b600 size=16 callers=0 calls=0
*/
void sub_143b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b600ULL || rel >= 0x143b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b610 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b610ULL || rel >= 0x143b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b680 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b680ULL || rel >= 0x143b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b6f0 size=16 callers=0 calls=0
*/
void sub_143b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b6f0ULL || rel >= 0x143b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b700 size=16 callers=0 calls=0
*/
void sub_143b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b700ULL || rel >= 0x143b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b710 size=304 callers=0 calls=11
   calls: optionbar_12, sub_1439d80, sub_143b230, sub_143c600, sub_1502120, sub_5cfad0, sub_d0c0, sub_e807f0, sub_eb6230, sub_eb7730, sub_ebc960
   ref: StateIn
*/
void StateIn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b710ULL || rel >= 0x143b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b840 size=16 callers=0 calls=0
*/
void sub_143b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b840ULL || rel >= 0x143b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b850 size=16 callers=0 calls=0
*/
void sub_143b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b850ULL || rel >= 0x143b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b860 size=16 callers=0 calls=0
*/
void sub_143b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b860ULL || rel >= 0x143b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b870 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b870ULL || rel >= 0x143b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b8e0 size=16 callers=0 calls=0
*/
void sub_143b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b8e0ULL || rel >= 0x143b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b8f0 size=16 callers=0 calls=0
*/
void sub_143b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b8f0ULL || rel >= 0x143b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b900 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b900ULL || rel >= 0x143b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b970 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b970ULL || rel >= 0x143b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b9e0 size=16 callers=0 calls=0
*/
void sub_143b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b9e0ULL || rel >= 0x143b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143b9f0 size=16 callers=0 calls=0
*/
void sub_143b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b9f0ULL || rel >= 0x143ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ba00 size=272 callers=0 calls=2
   calls: optionbar_12, sub_d0c0
   ref: StateExecute
*/
void StateExecute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ba00ULL || rel >= 0x143bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bb10 size=32 callers=0 calls=0
*/
void sub_143bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bb10ULL || rel >= 0x143bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bb30 size=80 callers=0 calls=0
*/
void sub_143bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bb30ULL || rel >= 0x143bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bb80 size=16 callers=0 calls=0
*/
void sub_143bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bb80ULL || rel >= 0x143bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bb90 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bb90ULL || rel >= 0x143bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bc00 size=16 callers=0 calls=0
*/
void sub_143bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bc00ULL || rel >= 0x143bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bc10 size=16 callers=0 calls=0
*/
void sub_143bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bc10ULL || rel >= 0x143bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bc20 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bc20ULL || rel >= 0x143bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bc90 size=112 callers=0 calls=1
   calls: sub_143ad70
*/
void sub_143bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bc90ULL || rel >= 0x143bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bd00 size=16 callers=0 calls=0
*/
void sub_143bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bd00ULL || rel >= 0x143bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bd10 size=16 callers=0 calls=0
*/
void sub_143bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bd10ULL || rel >= 0x143bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bd20 size=80 callers=0 calls=2
   calls: sub_143b170, sub_143b230
*/
void sub_143bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bd20ULL || rel >= 0x143bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bd70 size=16 callers=0 calls=0
*/
void sub_143bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bd70ULL || rel >= 0x143bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bd80 size=16 callers=0 calls=0
*/
void sub_143bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bd80ULL || rel >= 0x143bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bd90 size=16 callers=0 calls=0
*/
void sub_143bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bd90ULL || rel >= 0x143bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143bda0 size=112 callers=1 calls=1
   calls: anonymous_2
*/
void sub_143bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143bda0ULL || rel >= 0x143be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143be10 size=16 callers=0 calls=0
*/
void sub_143be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143be10ULL || rel >= 0x143be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143be20 size=1328 callers=0 calls=16
   calls: sub_143d090, sub_143d260, sub_14e1a30, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1860, sub_14f1870, sub_14f1ef0, sub_5cfad0, sub_e7ea90, sub_e7f7c0
   ... +4 more
   ref: common/tips.dat
*/
void tips_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143be20ULL || rel >= 0x143c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143c350 size=592 callers=0 calls=2
   calls: sub_14aad40, sub_8f19b0
   ref: pane_%s
   ref: T_value_tips_title_01
   ref: pane_%s_%s
   ref: L_common_icon_new_00
*/
void T_value_tips_title_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143c350ULL || rel >= 0x143c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143c5a0 size=96 callers=0 calls=1
   calls: sub_14eea30
*/
void sub_143c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143c5a0ULL || rel >= 0x143c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143c600 size=304 callers=1 calls=2
   calls: sub_14edac0, sub_a91e20
*/
void sub_143c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143c600ULL || rel >= 0x143c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143c730 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/tips/bin/tips_lyt.bin
   ref: bin/appli/tips/bin/tips_uikit.bin
*/
void tips_uikit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143c730ULL || rel >= 0x143c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143c910 size=16 callers=0 calls=0
*/
void sub_143c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143c910ULL || rel >= 0x143c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143c920 size=128 callers=0 calls=1
   calls: sub_e80580
*/
void sub_143c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143c920ULL || rel >= 0x143c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143c9a0 size=144 callers=0 calls=1
   calls: sub_e80580
*/
void sub_143c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143c9a0ULL || rel >= 0x143ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ca30 size=192 callers=0 calls=0
*/
void sub_143ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ca30ULL || rel >= 0x143caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143caf0 size=192 callers=0 calls=0
*/
void sub_143caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143caf0ULL || rel >= 0x143cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143cbb0 size=16 callers=0 calls=0
*/
void sub_143cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143cbb0ULL || rel >= 0x143cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143cbc0 size=192 callers=0 calls=0
*/
void sub_143cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143cbc0ULL || rel >= 0x143cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143cc80 size=192 callers=0 calls=0
*/
void sub_143cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143cc80ULL || rel >= 0x143cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143cd40 size=16 callers=0 calls=0
*/
void sub_143cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143cd40ULL || rel >= 0x143cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143cd50 size=16 callers=0 calls=0
*/
void sub_143cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143cd50ULL || rel >= 0x143cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143cd60 size=192 callers=0 calls=0
*/
void sub_143cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143cd60ULL || rel >= 0x143ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ce20 size=192 callers=0 calls=0
*/
void sub_143ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ce20ULL || rel >= 0x143cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143cee0 size=304 callers=0 calls=0
*/
void sub_143cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143cee0ULL || rel >= 0x143d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d010 size=48 callers=0 calls=0
*/
void sub_143d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d010ULL || rel >= 0x143d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d040 size=16 callers=0 calls=0
*/
void sub_143d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d040ULL || rel >= 0x143d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d050 size=32 callers=0 calls=0
*/
void sub_143d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d050ULL || rel >= 0x143d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d070 size=32 callers=0 calls=0
*/
void sub_143d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d070ULL || rel >= 0x143d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d090 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_143d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d090ULL || rel >= 0x143d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d260 size=304 callers=4 calls=2
   calls: sub_143d260, sub_143d390
*/
void sub_143d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d260ULL || rel >= 0x143d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d390 size=240 callers=5 calls=1
   calls: sub_f0ce40
*/
void sub_143d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d390ULL || rel >= 0x143d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d480 size=32 callers=0 calls=0
*/
void sub_143d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d480ULL || rel >= 0x143d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d4a0 size=16 callers=0 calls=0
*/
void sub_143d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d4a0ULL || rel >= 0x143d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d4b0 size=16 callers=0 calls=0
*/
void sub_143d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d4b0ULL || rel >= 0x143d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d4c0 size=16 callers=0 calls=0
*/
void sub_143d4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d4c0ULL || rel >= 0x143d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d4d0 size=96 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_143d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d4d0ULL || rel >= 0x143d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d530 size=112 callers=1 calls=2
   calls: sub_eb9000, sub_eba3b0
*/
void sub_143d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d530ULL || rel >= 0x143d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d5a0 size=928 callers=1 calls=12
   calls: appvisible, sub_143d940, sub_143dc90, sub_143dd90, sub_143dfb0, sub_eb9200, sub_eb9240, sub_eb93e0, sub_eb9c20, sub_eba260, tipsdata, tipsdata_2
*/
void sub_143d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d5a0ULL || rel >= 0x143d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143d940 size=432 callers=1 calls=0
*/
void sub_143d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143d940ULL || rel >= 0x143daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143daf0 size=288 callers=0 calls=0
*/
void sub_143daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143daf0ULL || rel >= 0x143dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc10 size=16 callers=0 calls=0
*/
void sub_143dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc10ULL || rel >= 0x143dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc20 size=16 callers=0 calls=0
*/
void sub_143dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc20ULL || rel >= 0x143dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc30 size=16 callers=0 calls=0
*/
void sub_143dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc30ULL || rel >= 0x143dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc40 size=16 callers=0 calls=0
*/
void sub_143dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc40ULL || rel >= 0x143dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc50 size=16 callers=0 calls=0
*/
void sub_143dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc50ULL || rel >= 0x143dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc60 size=16 callers=0 calls=0
*/
void sub_143dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc60ULL || rel >= 0x143dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc70 size=16 callers=0 calls=0
*/
void sub_143dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc70ULL || rel >= 0x143dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc80 size=16 callers=0 calls=0
*/
void sub_143dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc80ULL || rel >= 0x143dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dc90 size=256 callers=1 calls=1
   calls: sub_eb9570
*/
void sub_143dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dc90ULL || rel >= 0x143dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dd90 size=544 callers=1 calls=0
*/
void sub_143dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dd90ULL || rel >= 0x143dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143dfb0 size=240 callers=1 calls=0
*/
void sub_143dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143dfb0ULL || rel >= 0x143e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143e0a0 size=416 callers=2 calls=7
   calls: sub_13a4980, sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_65f1c0, sub_7c2da0, sub_ea03d0
*/
void sub_143e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e0a0ULL || rel >= 0x143e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143e240 size=704 callers=0 calls=8
   calls: sub_12f9ef0, sub_1357ee0, sub_1357f20, sub_135a1a0, sub_763000, sub_767950, sub_7847d0, sub_7c2d80
   ref: sd9010_title
*/
void sd9010_title(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e240ULL || rel >= 0x143e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143e500 size=16 callers=0 calls=0
*/
void sub_143e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e500ULL || rel >= 0x143e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143e510 size=624 callers=0 calls=7
   calls: demo_data, sub_7c2d90, sub_7c2db0, sub_c1b030, sub_c1bcb0, sub_c1bce0, sub_c1bd10
*/
void sub_143e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e510ULL || rel >= 0x143e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143e780 size=96 callers=0 calls=0
*/
void sub_143e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e780ULL || rel >= 0x143e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143e7e0 size=416 callers=0 calls=4
   calls: sub_13a4f20, sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_143e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e7e0ULL || rel >= 0x143e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143e980 size=16 callers=0 calls=0
*/
void sub_143e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e980ULL || rel >= 0x143e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143e990 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_143e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143e990ULL || rel >= 0x143ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ea00 size=16 callers=0 calls=0
*/
void sub_143ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ea00ULL || rel >= 0x143ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ea10 size=16 callers=0 calls=0
*/
void sub_143ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ea10ULL || rel >= 0x143ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ea20 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_143ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ea20ULL || rel >= 0x143ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ea90 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_143ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ea90ULL || rel >= 0x143eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143eb00 size=16 callers=0 calls=0
*/
void sub_143eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143eb00ULL || rel >= 0x143eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143eb10 size=16 callers=0 calls=0
*/
void sub_143eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143eb10ULL || rel >= 0x143eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143eb20 size=16 callers=0 calls=0
*/
void sub_143eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143eb20ULL || rel >= 0x143eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143eb30 size=16 callers=0 calls=0
*/
void sub_143eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143eb30ULL || rel >= 0x143eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143eb40 size=16 callers=0 calls=0
*/
void sub_143eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143eb40ULL || rel >= 0x143eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143eb50 size=32 callers=0 calls=0
*/
void sub_143eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143eb50ULL || rel >= 0x143eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143eb70 size=432 callers=1 calls=2
   calls: sub_143ed20, sub_143f560
*/
void sub_143eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143eb70ULL || rel >= 0x143ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143ed20 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_143ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143ed20ULL || rel >= 0x143eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0143eee0 size=96 callers=0 calls=0
*/
void sub_143eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143eee0ULL || rel >= 0x143ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

