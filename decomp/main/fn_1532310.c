/* main functions 01532310..015498c0 (181 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01532310 size=448 callers=2 calls=3
   calls: sub_1311c60, sub_67d450, sub_e7eb10
*/
void sub_1532310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532310ULL || rel >= 0x15324d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015324d0 size=32 callers=2 calls=0
*/
void sub_15324d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15324d0ULL || rel >= 0x15324f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015324f0 size=560 callers=1 calls=5
   calls: place_name_6, sub_1311c60, sub_67d450, sub_e7eb10, sub_e90930
*/
void sub_15324f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15324f0ULL || rel >= 0x1532720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532720 size=112 callers=2 calls=1
   calls: sub_e83930
*/
void sub_1532720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532720ULL || rel >= 0x1532790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532790 size=16 callers=2 calls=0
*/
void sub_1532790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532790ULL || rel >= 0x15327a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015327a0 size=16 callers=1 calls=0
*/
void sub_15327a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15327a0ULL || rel >= 0x15327b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015327b0 size=112 callers=0 calls=0
*/
void sub_15327b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15327b0ULL || rel >= 0x1532820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532820 size=112 callers=0 calls=0
*/
void sub_1532820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532820ULL || rel >= 0x1532890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532890 size=16 callers=0 calls=0
*/
void sub_1532890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532890ULL || rel >= 0x15328a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015328a0 size=112 callers=0 calls=0
*/
void sub_15328a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15328a0ULL || rel >= 0x1532910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532910 size=112 callers=0 calls=0
*/
void sub_1532910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532910ULL || rel >= 0x1532980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532980 size=16 callers=0 calls=0
*/
void sub_1532980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532980ULL || rel >= 0x1532990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532990 size=16 callers=0 calls=0
*/
void sub_1532990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532990ULL || rel >= 0x15329a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015329a0 size=112 callers=0 calls=0
*/
void sub_15329a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15329a0ULL || rel >= 0x1532a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532a10 size=112 callers=0 calls=0
*/
void sub_1532a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532a10ULL || rel >= 0x1532a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532a80 size=304 callers=0 calls=0
*/
void sub_1532a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532a80ULL || rel >= 0x1532bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532bb0 size=656 callers=0 calls=8
   calls: sub_151cd20, sub_1520be0, sub_1521f80, sub_152a450, sub_152a790, sub_152c2a0, sub_c39c40, sub_d0c0
   ref: ViewBg
   ref: ViewList
   ref: list_out
*/
void list_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532bb0ULL || rel >= 0x1532e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532e40 size=192 callers=0 calls=5
   calls: sub_151c2f0, sub_151c330, sub_1520be0, sub_152a7a0, sub_152c2b0
*/
void sub_1532e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532e40ULL || rel >= 0x1532f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f00 size=16 callers=0 calls=0
*/
void sub_1532f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f00ULL || rel >= 0x1532f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f10 size=16 callers=0 calls=0
*/
void sub_1532f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f10ULL || rel >= 0x1532f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f20 size=16 callers=0 calls=0
*/
void sub_1532f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f20ULL || rel >= 0x1532f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f30 size=16 callers=0 calls=0
*/
void sub_1532f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f30ULL || rel >= 0x1532f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f40 size=16 callers=0 calls=0
*/
void sub_1532f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f40ULL || rel >= 0x1532f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f50 size=16 callers=0 calls=0
*/
void sub_1532f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f50ULL || rel >= 0x1532f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f60 size=16 callers=0 calls=0
*/
void sub_1532f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f60ULL || rel >= 0x1532f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f70 size=16 callers=0 calls=0
*/
void sub_1532f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f70ULL || rel >= 0x1532f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f80 size=16 callers=0 calls=0
*/
void sub_1532f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f80ULL || rel >= 0x1532f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01532f90 size=304 callers=0 calls=0
*/
void sub_1532f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1532f90ULL || rel >= 0x15330c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015330c0 size=752 callers=0 calls=11
   calls: Play_me_or_st_rating_lv3, sub_1521f80, sub_152bd90, sub_152e2d0, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb8930
   ref: message
   ref: ViewList
*/
void ViewList_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15330c0ULL || rel >= 0x15333b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015333b0 size=272 callers=0 calls=6
   calls: sub_1502160, sub_151c2f0, sub_1520be0, sub_eb8a30, sub_eb8c60, sub_eb8e80
*/
void sub_15333b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15333b0ULL || rel >= 0x15334c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015334c0 size=16 callers=0 calls=0
*/
void sub_15334c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15334c0ULL || rel >= 0x15334d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015334d0 size=16 callers=0 calls=0
*/
void sub_15334d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15334d0ULL || rel >= 0x15334e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015334e0 size=16 callers=0 calls=0
*/
void sub_15334e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15334e0ULL || rel >= 0x15334f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015334f0 size=16 callers=0 calls=0
*/
void sub_15334f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15334f0ULL || rel >= 0x1533500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533500 size=16 callers=0 calls=0
*/
void sub_1533500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533500ULL || rel >= 0x1533510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533510 size=16 callers=0 calls=0
*/
void sub_1533510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533510ULL || rel >= 0x1533520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533520 size=16 callers=0 calls=0
*/
void sub_1533520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533520ULL || rel >= 0x1533530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533530 size=16 callers=0 calls=0
*/
void sub_1533530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533530ULL || rel >= 0x1533540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533540 size=16 callers=0 calls=0
*/
void sub_1533540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533540ULL || rel >= 0x1533550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533550 size=304 callers=0 calls=0
*/
void sub_1533550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533550ULL || rel >= 0x1533680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533680 size=368 callers=0 calls=4
   calls: sub_1521e30, sub_c39c40, sub_d0c0, top_panel_3
   ref: ViewTop
   ref: top_main
*/
void top_main(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533680ULL || rel >= 0x15337f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015337f0 size=400 callers=0 calls=7
   calls: sub_151c2d0, sub_151c2f0, sub_151c340, sub_1520be0, sub_15287d0, sub_15288d0, sub_1533980
*/
void sub_15337f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15337f0ULL || rel >= 0x1533980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533980 size=256 callers=2 calls=5
   calls: sub_137a070, sub_151c340, sub_151d580, sub_1520be0, sub_15287d0
*/
void sub_1533980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533980ULL || rel >= 0x1533a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533a80 size=16 callers=0 calls=0
*/
void sub_1533a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533a80ULL || rel >= 0x1533a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533a90 size=16 callers=0 calls=0
*/
void sub_1533a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533a90ULL || rel >= 0x1533aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533aa0 size=16 callers=0 calls=0
*/
void sub_1533aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533aa0ULL || rel >= 0x1533ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533ab0 size=16 callers=0 calls=0
*/
void sub_1533ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533ab0ULL || rel >= 0x1533ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533ac0 size=16 callers=0 calls=0
*/
void sub_1533ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533ac0ULL || rel >= 0x1533ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533ad0 size=16 callers=0 calls=0
*/
void sub_1533ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533ad0ULL || rel >= 0x1533ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533ae0 size=16 callers=0 calls=0
*/
void sub_1533ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533ae0ULL || rel >= 0x1533af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533af0 size=16 callers=0 calls=0
*/
void sub_1533af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533af0ULL || rel >= 0x1533b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533b00 size=16 callers=0 calls=0
*/
void sub_1533b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533b00ULL || rel >= 0x1533b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533b10 size=304 callers=0 calls=0
*/
void sub_1533b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533b10ULL || rel >= 0x1533c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533c40 size=560 callers=0 calls=6
   calls: sub_1525710, sub_1527a40, sub_1530eb0, sub_795bc0, sub_c39c40, sub_d0c0
   ref: ViewDetails
   ref: OptionBar
   ref: action_in
*/
void ViewDetails_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533c40ULL || rel >= 0x1533e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533e70 size=192 callers=0 calls=6
   calls: sub_151c2f0, sub_151cd10, sub_1520be0, sub_15247e0, sub_1527950, sub_1527af0
*/
void sub_1533e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533e70ULL || rel >= 0x1533f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533f30 size=16 callers=0 calls=0
*/
void sub_1533f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533f30ULL || rel >= 0x1533f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533f40 size=16 callers=0 calls=0
*/
void sub_1533f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533f40ULL || rel >= 0x1533f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533f50 size=16 callers=0 calls=0
*/
void sub_1533f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533f50ULL || rel >= 0x1533f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533f60 size=16 callers=0 calls=0
*/
void sub_1533f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533f60ULL || rel >= 0x1533f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533f70 size=16 callers=0 calls=0
*/
void sub_1533f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533f70ULL || rel >= 0x1533f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533f80 size=16 callers=0 calls=0
*/
void sub_1533f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533f80ULL || rel >= 0x1533f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533f90 size=16 callers=0 calls=0
*/
void sub_1533f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533f90ULL || rel >= 0x1533fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533fa0 size=16 callers=0 calls=0
*/
void sub_1533fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533fa0ULL || rel >= 0x1533fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533fb0 size=16 callers=0 calls=0
*/
void sub_1533fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533fb0ULL || rel >= 0x1533fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01533fc0 size=304 callers=0 calls=0
*/
void sub_1533fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1533fc0ULL || rel >= 0x15340f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015340f0 size=592 callers=0 calls=7
   calls: sub_1449290, sub_1530d60, sub_15318d0, sub_1545480, sub_c39c40, sub_d0c0, sub_eb6230
   ref: TownmapView
   ref: bunpu_out
   ref: ViewBunpu
*/
void TownmapView_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15340f0ULL || rel >= 0x1534340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534340 size=288 callers=0 calls=6
   calls: sub_151c2f0, sub_151c330, sub_1520be0, sub_15318e0, sub_e806b0, sub_eb6530
*/
void sub_1534340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534340ULL || rel >= 0x1534460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534460 size=480 callers=0 calls=4
   calls: sub_14490b0, sub_151d5a0, sub_151d5b0, sub_1520be0
*/
void sub_1534460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534460ULL || rel >= 0x1534640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534640 size=16 callers=0 calls=0
*/
void sub_1534640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534640ULL || rel >= 0x1534650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534650 size=16 callers=0 calls=0
*/
void sub_1534650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534650ULL || rel >= 0x1534660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534660 size=16 callers=0 calls=0
*/
void sub_1534660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534660ULL || rel >= 0x1534670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534670 size=16 callers=0 calls=0
*/
void sub_1534670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534670ULL || rel >= 0x1534680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534680 size=16 callers=0 calls=0
*/
void sub_1534680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534680ULL || rel >= 0x1534690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534690 size=16 callers=0 calls=0
*/
void sub_1534690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534690ULL || rel >= 0x15346a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015346a0 size=16 callers=0 calls=0
*/
void sub_15346a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15346a0ULL || rel >= 0x15346b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015346b0 size=16 callers=0 calls=0
*/
void sub_15346b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15346b0ULL || rel >= 0x15346c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015346c0 size=304 callers=0 calls=0
*/
void sub_15346c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15346c0ULL || rel >= 0x15347f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015347f0 size=720 callers=0 calls=9
   calls: sub_1530d60, sub_15322b0, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb8930
   ref: ViewBunpu
   ref: fly_error
*/
void fly_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15347f0ULL || rel >= 0x1534ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534ac0 size=144 callers=0 calls=3
   calls: sub_151c2f0, sub_1520be0, sub_eb8e80
*/
void sub_1534ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534ac0ULL || rel >= 0x1534b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534b50 size=16 callers=0 calls=0
*/
void sub_1534b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534b50ULL || rel >= 0x1534b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534b60 size=16 callers=0 calls=0
*/
void sub_1534b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534b60ULL || rel >= 0x1534b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534b70 size=16 callers=0 calls=0
*/
void sub_1534b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534b70ULL || rel >= 0x1534b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534b80 size=16 callers=0 calls=0
*/
void sub_1534b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534b80ULL || rel >= 0x1534b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534b90 size=16 callers=0 calls=0
*/
void sub_1534b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534b90ULL || rel >= 0x1534ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534ba0 size=16 callers=0 calls=0
*/
void sub_1534ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534ba0ULL || rel >= 0x1534bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534bb0 size=16 callers=0 calls=0
*/
void sub_1534bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534bb0ULL || rel >= 0x1534bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534bc0 size=16 callers=0 calls=0
*/
void sub_1534bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534bc0ULL || rel >= 0x1534bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534bd0 size=16 callers=0 calls=0
*/
void sub_1534bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534bd0ULL || rel >= 0x1534be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534be0 size=304 callers=0 calls=0
*/
void sub_1534be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534be0ULL || rel >= 0x1534d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534d10 size=560 callers=0 calls=9
   calls: sub_1379160, sub_151cd10, sub_151cd20, sub_1520be0, sub_1521f80, sub_152c110, sub_152e1e0, sub_c39c40, sub_d0c0
   ref: list_main
   ref: ViewList
*/
void list_main(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534d10ULL || rel >= 0x1534f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01534f40 size=1232 callers=0 calls=19
   calls: sub_1379160, sub_1379b90, sub_1379ef0, sub_151c2d0, sub_151c2f0, sub_151c340, sub_151c670, sub_151cd20, sub_1520be0, sub_1521e30, sub_152bd40, sub_152c110
   ... +7 more
   ref: ViewTop
*/
void ViewTop_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534f40ULL || rel >= 0x1535410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535410 size=16 callers=0 calls=0
*/
void sub_1535410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535410ULL || rel >= 0x1535420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535420 size=16 callers=0 calls=0
*/
void sub_1535420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535420ULL || rel >= 0x1535430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535430 size=16 callers=0 calls=0
*/
void sub_1535430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535430ULL || rel >= 0x1535440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535440 size=16 callers=0 calls=0
*/
void sub_1535440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535440ULL || rel >= 0x1535450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535450 size=16 callers=0 calls=0
*/
void sub_1535450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535450ULL || rel >= 0x1535460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535460 size=16 callers=0 calls=0
*/
void sub_1535460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535460ULL || rel >= 0x1535470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535470 size=16 callers=0 calls=0
*/
void sub_1535470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535470ULL || rel >= 0x1535480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535480 size=16 callers=0 calls=0
*/
void sub_1535480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535480ULL || rel >= 0x1535490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535490 size=16 callers=0 calls=0
*/
void sub_1535490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535490ULL || rel >= 0x15354a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015354a0 size=304 callers=0 calls=0
*/
void sub_15354a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15354a0ULL || rel >= 0x15355d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015355d0 size=640 callers=0 calls=8
   calls: sub_151ccc0, sub_1520be0, sub_1525470, sub_1527a40, sub_1530eb0, sub_795bc0, sub_c39c40, sub_d0c0
   ref: ViewDetails
   ref: OptionBar
   ref: action_out
*/
void ViewDetails_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15355d0ULL || rel >= 0x1535850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535850 size=192 callers=0 calls=6
   calls: sub_151c2f0, sub_151cd10, sub_1520be0, sub_15247e0, sub_1527950, sub_1527af0
*/
void sub_1535850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535850ULL || rel >= 0x1535910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535910 size=16 callers=0 calls=0
*/
void sub_1535910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535910ULL || rel >= 0x1535920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535920 size=16 callers=0 calls=0
*/
void sub_1535920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535920ULL || rel >= 0x1535930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535930 size=16 callers=0 calls=0
*/
void sub_1535930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535930ULL || rel >= 0x1535940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535940 size=16 callers=0 calls=0
*/
void sub_1535940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535940ULL || rel >= 0x1535950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535950 size=16 callers=0 calls=0
*/
void sub_1535950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535950ULL || rel >= 0x1535960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535960 size=16 callers=0 calls=0
*/
void sub_1535960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535960ULL || rel >= 0x1535970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535970 size=16 callers=0 calls=0
*/
void sub_1535970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535970ULL || rel >= 0x1535980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535980 size=16 callers=0 calls=0
*/
void sub_1535980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535980ULL || rel >= 0x1535990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535990 size=16 callers=0 calls=0
*/
void sub_1535990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535990ULL || rel >= 0x15359a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015359a0 size=304 callers=0 calls=0
*/
void sub_15359a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15359a0ULL || rel >= 0x1535ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535ad0 size=1296 callers=0 calls=7
   calls: sub_1530d60, sub_15317a0, sub_1536180, sub_1545480, sub_795bc0, sub_c39c40, sub_d0c0
   ref: TownmapView
   ref: OptionBar
   ref: ViewBunpu
   ref: bunpu_main
*/
void TownmapView_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535ad0ULL || rel >= 0x1535fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01535fe0 size=64 callers=0 calls=1
   calls: sub_1531a40
*/
void sub_1535fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1535fe0ULL || rel >= 0x1536020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536020 size=192 callers=0 calls=5
   calls: sub_1447d70, sub_1449380, sub_151d430, sub_1520be0, sub_1531a40
*/
void sub_1536020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536020ULL || rel >= 0x15360e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015360e0 size=160 callers=0 calls=4
   calls: sub_1447d70, sub_151d430, sub_1520be0, sub_1531a40
*/
void sub_15360e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15360e0ULL || rel >= 0x1536180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536180 size=144 callers=1 calls=3
   calls: sub_1448ae0, sub_1532790, sub_e80580
*/
void sub_1536180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536180ULL || rel >= 0x1536210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536210 size=1056 callers=0 calls=17
   calls: sub_135a1a0, sub_14490b0, sub_151c2f0, sub_151c310, sub_151c340, sub_151d5a0, sub_151d5b0, sub_1520be0, sub_15317e0, sub_1531820, sub_1531900, sub_1532310
   ... +5 more
*/
void sub_1536210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536210ULL || rel >= 0x1536630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536630 size=416 callers=1 calls=13
   calls: L_weather_00_weather_ptn, pane__s_9, sub_1379160, sub_1447d70, sub_1448b70, sub_151d0a0, sub_151d320, sub_151d430, sub_1520be0, sub_1531d00, sub_1531e80, sub_1532150
   ... +1 more
*/
void sub_1536630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536630ULL || rel >= 0x15367d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015367d0 size=256 callers=1 calls=3
   calls: sub_1532790, sub_c39c40, sub_e7e380
*/
void sub_15367d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15367d0ULL || rel >= 0x15368d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015368d0 size=16 callers=0 calls=0
*/
void sub_15368d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15368d0ULL || rel >= 0x15368e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015368e0 size=16 callers=0 calls=0
*/
void sub_15368e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15368e0ULL || rel >= 0x15368f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015368f0 size=16 callers=0 calls=0
*/
void sub_15368f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15368f0ULL || rel >= 0x1536900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536900 size=16 callers=0 calls=0
*/
void sub_1536900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536900ULL || rel >= 0x1536910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536910 size=16 callers=0 calls=0
*/
void sub_1536910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536910ULL || rel >= 0x1536920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536920 size=16 callers=0 calls=0
*/
void sub_1536920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536920ULL || rel >= 0x1536930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536930 size=16 callers=0 calls=0
*/
void sub_1536930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536930ULL || rel >= 0x1536940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536940 size=16 callers=0 calls=0
*/
void sub_1536940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536940ULL || rel >= 0x1536950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536950 size=16 callers=0 calls=0
*/
void sub_1536950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536950ULL || rel >= 0x1536960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536960 size=304 callers=0 calls=0
*/
void sub_1536960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536960ULL || rel >= 0x1536a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536a90 size=32 callers=0 calls=0
*/
void sub_1536a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536a90ULL || rel >= 0x1536ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536ab0 size=16 callers=0 calls=0
*/
void sub_1536ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536ab0ULL || rel >= 0x1536ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536ac0 size=32 callers=0 calls=0
*/
void sub_1536ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536ac0ULL || rel >= 0x1536ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536ae0 size=32 callers=0 calls=0
*/
void sub_1536ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536ae0ULL || rel >= 0x1536b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536b00 size=32 callers=0 calls=0
*/
void sub_1536b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536b00ULL || rel >= 0x1536b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536b20 size=16 callers=0 calls=0
*/
void sub_1536b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536b20ULL || rel >= 0x1536b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536b30 size=32 callers=0 calls=0
*/
void sub_1536b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536b30ULL || rel >= 0x1536b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536b50 size=32 callers=0 calls=0
*/
void sub_1536b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536b50ULL || rel >= 0x1536b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01536b70 size=1696 callers=0 calls=25
   calls: sub_1379150, sub_1379160, sub_151c310, sub_151c320, sub_151c350, sub_151ca40, sub_151d590, sub_151d5c0, sub_1520be0, sub_1521e30, sub_1524870, sub_1524910
   ... +13 more
   ref: ViewDetails
   ref: OptionBar
   ref: ViewTop
   ref: ViewBg
   ref: ViewBunpu
   ref: details_in
*/
void ViewDetails_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1536b70ULL || rel >= 0x1537210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537210 size=176 callers=0 calls=4
   calls: sub_151c2f0, sub_1520be0, sub_15248d0, sub_152a7a0
*/
void sub_1537210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537210ULL || rel >= 0x15372c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015372c0 size=16 callers=0 calls=0
*/
void sub_15372c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15372c0ULL || rel >= 0x15372d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015372d0 size=16 callers=0 calls=0
*/
void sub_15372d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15372d0ULL || rel >= 0x15372e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015372e0 size=16 callers=0 calls=0
*/
void sub_15372e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15372e0ULL || rel >= 0x15372f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015372f0 size=16 callers=0 calls=0
*/
void sub_15372f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15372f0ULL || rel >= 0x1537300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537300 size=16 callers=0 calls=0
*/
void sub_1537300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537300ULL || rel >= 0x1537310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537310 size=16 callers=0 calls=0
*/
void sub_1537310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537310ULL || rel >= 0x1537320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537320 size=16 callers=0 calls=0
*/
void sub_1537320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537320ULL || rel >= 0x1537330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537330 size=16 callers=0 calls=0
*/
void sub_1537330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537330ULL || rel >= 0x1537340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537340 size=16 callers=0 calls=0
*/
void sub_1537340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537340ULL || rel >= 0x1537350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537350 size=304 callers=0 calls=0
*/
void sub_1537350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537350ULL || rel >= 0x1537480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537480 size=656 callers=0 calls=8
   calls: sub_151cd20, sub_1520be0, sub_15248c0, sub_152a450, sub_152a790, sub_1530eb0, sub_c39c40, sub_d0c0
   ref: ViewDetails
   ref: details_out
   ref: ViewBg
*/
void details_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537480ULL || rel >= 0x1537710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537710 size=256 callers=0 calls=5
   calls: sub_151c2f0, sub_151c330, sub_1520be0, sub_15248d0, sub_152a7a0
*/
void sub_1537710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537710ULL || rel >= 0x1537810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537810 size=16 callers=0 calls=0
*/
void sub_1537810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537810ULL || rel >= 0x1537820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537820 size=16 callers=0 calls=0
*/
void sub_1537820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537820ULL || rel >= 0x1537830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537830 size=16 callers=0 calls=0
*/
void sub_1537830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537830ULL || rel >= 0x1537840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537840 size=16 callers=0 calls=0
*/
void sub_1537840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537840ULL || rel >= 0x1537850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537850 size=16 callers=0 calls=0
*/
void sub_1537850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537850ULL || rel >= 0x1537860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537860 size=16 callers=0 calls=0
*/
void sub_1537860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537860ULL || rel >= 0x1537870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537870 size=16 callers=0 calls=0
*/
void sub_1537870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537870ULL || rel >= 0x1537880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537880 size=16 callers=0 calls=0
*/
void sub_1537880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537880ULL || rel >= 0x1537890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537890 size=16 callers=0 calls=0
*/
void sub_1537890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537890ULL || rel >= 0x15378a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015378a0 size=304 callers=0 calls=0
*/
void sub_15378a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15378a0ULL || rel >= 0x15379d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015379d0 size=720 callers=0 calls=13
   calls: sub_151c2e0, sub_151cd10, sub_151cd20, sub_151d5c0, sub_1520be0, sub_1521e30, sub_1524790, sub_1525940, sub_1527950, sub_1527be0, sub_1530eb0, sub_c39c40
   ... +1 more
   ref: ViewDetails
   ref: ViewTop
   ref: details_main
*/
void details_main(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15379d0ULL || rel >= 0x1537ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01537ca0 size=1632 callers=0 calls=24
   calls: sub_1379160, sub_1379ef0, sub_1502120, sub_151c2d0, sub_151c2f0, sub_151c310, sub_151c340, sub_151c670, sub_151cd20, sub_151cf20, sub_151cf70, sub_151cf80
   ... +12 more
*/
void sub_1537ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1537ca0ULL || rel >= 0x1538300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01538300 size=144 callers=2 calls=5
   calls: Play_PV_EV_052_sp_roar, Stop_Event_PM_Voice, sub_1379600, sub_1525940, sub_1527bc0
*/
void sub_1538300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1538300ULL || rel >= 0x1538390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01538390 size=16 callers=0 calls=0
*/
void sub_1538390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1538390ULL || rel >= 0x15383a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015383a0 size=16 callers=0 calls=0
*/
void sub_15383a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15383a0ULL || rel >= 0x15383b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015383b0 size=16 callers=0 calls=0
*/
void sub_15383b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15383b0ULL || rel >= 0x15383c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015383c0 size=16 callers=0 calls=0
*/
void sub_15383c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15383c0ULL || rel >= 0x15383d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015383d0 size=16 callers=0 calls=0
*/
void sub_15383d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15383d0ULL || rel >= 0x15383e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015383e0 size=16 callers=0 calls=0
*/
void sub_15383e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15383e0ULL || rel >= 0x15383f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015383f0 size=16 callers=0 calls=0
*/
void sub_15383f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15383f0ULL || rel >= 0x1538400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01538400 size=16 callers=0 calls=0
*/
void sub_1538400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1538400ULL || rel >= 0x1538410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01538410 size=16 callers=0 calls=0
*/
void sub_1538410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1538410ULL || rel >= 0x1538420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01538420 size=304 callers=0 calls=0
*/
void sub_1538420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1538420ULL || rel >= 0x1538550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01538550 size=1792 callers=0 calls=20
   calls: sub_1502120, sub_151c300, sub_1520be0, sub_1521e30, sub_1521f80, sub_1524840, sub_1528860, sub_152a450, sub_152a710, sub_152c220, sub_1530d60, sub_1530eb0
   ... +8 more
   ref: ViewDetails
   ref: TownmapView
   ref: OptionBar
   ref: ViewTop
   ref: ViewBg
   ref: ViewBunpu
   ref: ViewList
*/
void ViewDetails_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1538550ULL || rel >= 0x1538c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01538c50 size=336 callers=0 calls=11
   calls: Stop_Event_PM_Voice_2, sub_151c2f0, sub_1520be0, sub_15248d0, sub_15288b0, sub_152a7a0, sub_152c2b0, sub_15318e0, sub_e806b0, sub_eb6530, sub_eb7830
*/
void sub_1538c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1538c50ULL || rel >= 0x1538da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01538da0 size=1232 callers=0 calls=10
   calls: sub_1521e30, sub_1521f80, sub_15247e0, sub_152a450, sub_1530d60, sub_1530eb0, sub_15317f0, sub_c39c40, sub_e80580, sub_e806b0
   ref: ViewDetails
   ref: ViewTop
   ref: ViewBg
   ref: ViewBunpu
   ref: ViewList
*/
void ViewDetails_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1538da0ULL || rel >= 0x1539270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539270 size=16 callers=0 calls=0
*/
void sub_1539270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539270ULL || rel >= 0x1539280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539280 size=16 callers=0 calls=0
*/
void sub_1539280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539280ULL || rel >= 0x1539290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539290 size=16 callers=0 calls=0
*/
void sub_1539290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539290ULL || rel >= 0x15392a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015392a0 size=16 callers=0 calls=0
*/
void sub_15392a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15392a0ULL || rel >= 0x15392b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015392b0 size=16 callers=0 calls=0
*/
void sub_15392b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15392b0ULL || rel >= 0x15392c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015392c0 size=16 callers=0 calls=0
*/
void sub_15392c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15392c0ULL || rel >= 0x15392d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015392d0 size=16 callers=0 calls=0
*/
void sub_15392d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15392d0ULL || rel >= 0x15392e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015392e0 size=16 callers=0 calls=0
*/
void sub_15392e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15392e0ULL || rel >= 0x15392f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015392f0 size=304 callers=0 calls=0
*/
void sub_15392f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15392f0ULL || rel >= 0x1539420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539420 size=1072 callers=0 calls=12
   calls: sub_1447d70, sub_1530d60, sub_15324d0, sub_15324f0, sub_1545480, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb7e40
   ref: TownmapView
   ref: ViewBunpu
*/
void TownmapView_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539420ULL || rel >= 0x1539850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539850 size=256 callers=0 calls=6
   calls: sub_1447e00, sub_151c2d0, sub_151c2f0, sub_1520be0, sub_eb8e80, sub_eb8ea0
*/
void sub_1539850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539850ULL || rel >= 0x1539950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539950 size=16 callers=0 calls=0
*/
void sub_1539950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539950ULL || rel >= 0x1539960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539960 size=16 callers=0 calls=0
*/
void sub_1539960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539960ULL || rel >= 0x1539970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539970 size=16 callers=0 calls=0
*/
void sub_1539970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539970ULL || rel >= 0x1539980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539980 size=16 callers=0 calls=0
*/
void sub_1539980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539980ULL || rel >= 0x1539990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539990 size=16 callers=0 calls=0
*/
void sub_1539990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539990ULL || rel >= 0x15399a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015399a0 size=16 callers=0 calls=0
*/
void sub_15399a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15399a0ULL || rel >= 0x15399b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015399b0 size=16 callers=0 calls=0
*/
void sub_15399b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15399b0ULL || rel >= 0x15399c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015399c0 size=16 callers=0 calls=0
*/
void sub_15399c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15399c0ULL || rel >= 0x15399d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015399d0 size=16 callers=0 calls=0
*/
void sub_15399d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15399d0ULL || rel >= 0x15399e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015399e0 size=304 callers=0 calls=0
*/
void sub_15399e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15399e0ULL || rel >= 0x1539b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539b10 size=224 callers=9 calls=2
   calls: sub_1539bf0, sub_153ad80
*/
void sub_1539b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539b10ULL || rel >= 0x1539bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539bf0 size=288 callers=1 calls=3
   calls: sub_153aeb0, sub_c38350, sub_e9db40
*/
void sub_1539bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539bf0ULL || rel >= 0x1539d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539d10 size=336 callers=0 calls=0
*/
void sub_1539d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539d10ULL || rel >= 0x1539e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539e60 size=16 callers=0 calls=0
*/
void sub_1539e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539e60ULL || rel >= 0x1539e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539e70 size=16 callers=0 calls=0
*/
void sub_1539e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539e70ULL || rel >= 0x1539e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539e80 size=16 callers=0 calls=0
*/
void sub_1539e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539e80ULL || rel >= 0x1539e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539e90 size=16 callers=0 calls=0
*/
void sub_1539e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539e90ULL || rel >= 0x1539ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539ea0 size=16 callers=0 calls=0
*/
void sub_1539ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539ea0ULL || rel >= 0x1539eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539eb0 size=16 callers=0 calls=0
*/
void sub_1539eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539eb0ULL || rel >= 0x1539ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01539ec0 size=320 callers=0 calls=1
   calls: sub_14e0550
*/
void sub_1539ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1539ec0ULL || rel >= 0x153a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153a000 size=224 callers=0 calls=0
*/
void sub_153a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153a000ULL || rel >= 0x153a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153a0e0 size=2512 callers=0 calls=10
   calls: sub_12fff40, sub_1502120, sub_153aab0, sub_153abc0, sub_153b910, sub_153c410, sub_5cfad0, sub_a75e20, sub_c39c40, sub_c44410
   ref: Play_UI_picturebook_open
*/
void Play_UI_picturebook_open_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153a0e0ULL || rel >= 0x153aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153aab0 size=272 callers=1 calls=3
   calls: sub_153b040, sub_672c10, sub_c386f0
*/
void sub_153aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153aab0ULL || rel >= 0x153abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153abc0 size=400 callers=3 calls=3
   calls: sub_12b8c20, sub_672c10, sub_c386f0
*/
void sub_153abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153abc0ULL || rel >= 0x153ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ad50 size=16 callers=0 calls=0
*/
void sub_153ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ad50ULL || rel >= 0x153ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ad60 size=16 callers=0 calls=0
*/
void sub_153ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ad60ULL || rel >= 0x153ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ad70 size=16 callers=0 calls=0
*/
void sub_153ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ad70ULL || rel >= 0x153ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ad80 size=304 callers=1 calls=0
*/
void sub_153ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ad80ULL || rel >= 0x153aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153aeb0 size=400 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_153aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153aeb0ULL || rel >= 0x153b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b040 size=240 callers=1 calls=2
   calls: sub_153b130, sub_e7b660
*/
void sub_153b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b040ULL || rel >= 0x153b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b130 size=224 callers=1 calls=3
   calls: sub_153b210, sub_7c2da0, sub_e7b5e0
*/
void sub_153b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b130ULL || rel >= 0x153b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b210 size=272 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_153b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b210ULL || rel >= 0x153b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b320 size=224 callers=6 calls=1
   calls: sub_3340
*/
void sub_153b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b320ULL || rel >= 0x153b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b400 size=464 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_153b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b400ULL || rel >= 0x153b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b5d0 size=96 callers=0 calls=1
   calls: sub_153b810
*/
void sub_153b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b5d0ULL || rel >= 0x153b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b630 size=16 callers=0 calls=0
*/
void sub_153b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b630ULL || rel >= 0x153b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b640 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_153b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b640ULL || rel >= 0x153b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b6f0 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_153b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b6f0ULL || rel >= 0x153b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b7c0 size=16 callers=0 calls=0
*/
void sub_153b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b7c0ULL || rel >= 0x153b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b7d0 size=16 callers=0 calls=0
*/
void sub_153b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b7d0ULL || rel >= 0x153b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b7e0 size=16 callers=0 calls=0
*/
void sub_153b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b7e0ULL || rel >= 0x153b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b7f0 size=32 callers=0 calls=0
*/
void sub_153b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b7f0ULL || rel >= 0x153b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b810 size=256 callers=5 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_153b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b810ULL || rel >= 0x153b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153b910 size=240 callers=2 calls=1
   calls: sub_c39c40
*/
void sub_153b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b910ULL || rel >= 0x153ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ba00 size=128 callers=0 calls=0
*/
void sub_153ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ba00ULL || rel >= 0x153ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ba80 size=528 callers=1 calls=2
   calls: sub_76f440, sub_e7c210
*/
void sub_153ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ba80ULL || rel >= 0x153bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bc90 size=208 callers=0 calls=0
*/
void sub_153bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bc90ULL || rel >= 0x153bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bd60 size=16 callers=0 calls=0
*/
void sub_153bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bd60ULL || rel >= 0x153bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bd70 size=16 callers=0 calls=0
*/
void sub_153bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bd70ULL || rel >= 0x153bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bd80 size=16 callers=0 calls=0
*/
void sub_153bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bd80ULL || rel >= 0x153bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bd90 size=16 callers=0 calls=0
*/
void sub_153bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bd90ULL || rel >= 0x153bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bda0 size=16 callers=0 calls=0
*/
void sub_153bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bda0ULL || rel >= 0x153bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bdb0 size=16 callers=19 calls=0
*/
void sub_153bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bdb0ULL || rel >= 0x153bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bdc0 size=16 callers=1 calls=0
*/
void sub_153bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bdc0ULL || rel >= 0x153bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bdd0 size=16 callers=8 calls=0
*/
void sub_153bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bdd0ULL || rel >= 0x153bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153bde0 size=160 callers=3 calls=1
   calls: sub_1357640
*/
void sub_153bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153bde0ULL || rel >= 0x153be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153be80 size=48 callers=4 calls=0
*/
void sub_153be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153be80ULL || rel >= 0x153beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153beb0 size=512 callers=5 calls=3
   calls: sub_153c0b0, sub_76f6c0, sub_7847d0
*/
void sub_153beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153beb0ULL || rel >= 0x153c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c0b0 size=352 callers=4 calls=2
   calls: sub_134f7c0, sub_1354890
*/
void sub_153c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c0b0ULL || rel >= 0x153c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c210 size=272 callers=1 calls=2
   calls: fel_999_2, sub_15030e0
*/
void sub_153c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c210ULL || rel >= 0x153c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c320 size=32 callers=4 calls=0
*/
void sub_153c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c320ULL || rel >= 0x153c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c340 size=16 callers=1 calls=0
*/
void sub_153c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c340ULL || rel >= 0x153c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c350 size=16 callers=3 calls=0
*/
void sub_153c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c350ULL || rel >= 0x153c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c360 size=16 callers=1 calls=0
*/
void sub_153c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c360ULL || rel >= 0x153c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c370 size=128 callers=1 calls=1
   calls: sub_137a060
*/
void sub_153c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c370ULL || rel >= 0x153c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c3f0 size=16 callers=2 calls=0
*/
void sub_153c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c3f0ULL || rel >= 0x153c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c400 size=16 callers=2 calls=0
*/
void sub_153c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c400ULL || rel >= 0x153c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c410 size=16 callers=2 calls=0
*/
void sub_153c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c410ULL || rel >= 0x153c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153c420 size=2768 callers=0 calls=21
   calls: encount_priority, sub_12f9ef0, sub_153b810, sub_153c210, sub_153cef0, sub_153dd60, sub_153de90, sub_153df70, sub_153e920, sub_153ec70, sub_153efc0, sub_1540800
   ... +9 more
   ref: ViewDetails
   ref: common/zkn_height.dat
   ref: TownmapView
   ref: ViewTop
   ref: common/zkn_form.dat
   ref: SystemMessageView
   ref: ViewBg
   ref: common/zkn_weight.dat
*/
void SystemMessageView_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c420ULL || rel >= 0x153cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153cef0 size=400 callers=1 calls=3
   calls: sub_153ba80, sub_153dd60, sub_e7c160
*/
void sub_153cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153cef0ULL || rel >= 0x153d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d080 size=256 callers=0 calls=4
   calls: ZoneData, sub_15030d0, sub_153dd60, sub_e7ea20
*/
void sub_153d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d080ULL || rel >= 0x153d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d180 size=288 callers=0 calls=4
   calls: sub_1503210, sub_153dd60, sub_153f320, sub_1541250
   ref: ViewDetails
*/
void ViewDetails_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d180ULL || rel >= 0x153d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d2a0 size=272 callers=0 calls=4
   calls: sub_1503280, sub_15032c0, sub_1505a20, sub_153dd60
*/
void sub_153d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d2a0ULL || rel >= 0x153d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d3b0 size=1056 callers=0 calls=10
   calls: sub_153dd60, sub_153f560, sub_153f6a0, sub_153f7e0, sub_153f920, sub_153fa60, sub_153fba0, sub_153fcf0, sub_153fe30, sub_e7c160
*/
void sub_153d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d3b0ULL || rel >= 0x153d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d7d0 size=368 callers=0 calls=7
   calls: sub_15030d0, sub_15032c0, sub_1505a10, sub_1505a20, sub_1505a30, sub_1505cf0, sub_153dd60
*/
void sub_153d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d7d0ULL || rel >= 0x153d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d940 size=16 callers=0 calls=0
*/
void sub_153d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d940ULL || rel >= 0x153d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d950 size=16 callers=0 calls=0
*/
void sub_153d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d950ULL || rel >= 0x153d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d960 size=16 callers=0 calls=0
*/
void sub_153d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d960ULL || rel >= 0x153d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d970 size=80 callers=0 calls=1
   calls: sub_153b320
*/
void sub_153d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d970ULL || rel >= 0x153d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153d9c0 size=80 callers=0 calls=1
   calls: sub_153b320
*/
void sub_153d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153d9c0ULL || rel >= 0x153da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153da10 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_153da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153da10ULL || rel >= 0x153dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153dac0 size=80 callers=0 calls=1
   calls: sub_153b320
*/
void sub_153dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153dac0ULL || rel >= 0x153db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153db10 size=80 callers=0 calls=1
   calls: sub_153b320
*/
void sub_153db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153db10ULL || rel >= 0x153db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153db60 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_153db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153db60ULL || rel >= 0x153dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153dc10 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_153dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153dc10ULL || rel >= 0x153dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153dcc0 size=80 callers=0 calls=1
   calls: sub_153b320
*/
void sub_153dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153dcc0ULL || rel >= 0x153dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153dd10 size=80 callers=0 calls=1
   calls: sub_153b320
*/
void sub_153dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153dd10ULL || rel >= 0x153dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153dd60 size=304 callers=29 calls=0
*/
void sub_153dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153dd60ULL || rel >= 0x153de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153de90 size=224 callers=2 calls=1
   calls: sub_1518720
*/
void sub_153de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153de90ULL || rel >= 0x153df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153df70 size=288 callers=3 calls=2
   calls: sub_153e090, sub_e809c0
*/
void sub_153df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153df70ULL || rel >= 0x153e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153e090 size=528 callers=1 calls=3
   calls: sub_153e2a0, sub_790490, sub_e7fe20
*/
void sub_153e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153e090ULL || rel >= 0x153e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153e2a0 size=1664 callers=1 calls=4
   calls: anonymous_2, sub_11061d0, sub_1443160, sub_1443600
*/
void sub_153e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153e2a0ULL || rel >= 0x153e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153e920 size=288 callers=1 calls=2
   calls: sub_153ea40, sub_e809c0
*/
void sub_153e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153e920ULL || rel >= 0x153ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ea40 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_153ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ea40ULL || rel >= 0x153ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ec70 size=288 callers=1 calls=2
   calls: sub_153ed90, sub_e809c0
*/
void sub_153ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ec70ULL || rel >= 0x153ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ed90 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_153ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ed90ULL || rel >= 0x153efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153efc0 size=288 callers=1 calls=2
   calls: sub_153f0e0, sub_e809c0
*/
void sub_153efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153efc0ULL || rel >= 0x153f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153f0e0 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_153f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153f0e0ULL || rel >= 0x153f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153f320 size=272 callers=8 calls=2
   calls: sub_153f430, sub_5cfaf0
*/
void sub_153f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153f320ULL || rel >= 0x153f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153f430 size=304 callers=1 calls=0
*/
void sub_153f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153f430ULL || rel >= 0x153f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153f560 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_153f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153f560ULL || rel >= 0x153f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153f6a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_153f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153f6a0ULL || rel >= 0x153f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153f7e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_153f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153f7e0ULL || rel >= 0x153f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153f920 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_153f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153f920ULL || rel >= 0x153fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153fa60 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_153fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153fa60ULL || rel >= 0x153fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153fba0 size=336 callers=1 calls=2
   calls: anonymous, sub_e76a20
*/
void sub_153fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153fba0ULL || rel >= 0x153fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153fcf0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_153fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153fcf0ULL || rel >= 0x153fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153fe30 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_153fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153fe30ULL || rel >= 0x153ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0153ff70 size=288 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokedex/bin/pokedex_details_lyt.bin
*/
void pokedex_details_lyt_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ff70ULL || rel >= 0x1540090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540090 size=384 callers=0 calls=5
   calls: sub_14ba7b0, sub_1540210, sub_1540810, sub_8f3180, sub_e83930
*/
void sub_1540090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540090ULL || rel >= 0x1540210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540210 size=768 callers=1 calls=1
   calls: sub_67b990
*/
void sub_1540210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540210ULL || rel >= 0x1540510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540510 size=16 callers=0 calls=0
*/
void sub_1540510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540510ULL || rel >= 0x1540520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540520 size=176 callers=0 calls=3
   calls: sub_1502120, sub_5cfad0, sub_ea4760
*/
void sub_1540520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540520ULL || rel >= 0x15405d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015405d0 size=64 callers=1 calls=2
   calls: sub_e80580, sub_e807f0
*/
void sub_15405d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15405d0ULL || rel >= 0x1540610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540610 size=48 callers=1 calls=1
   calls: sub_e80580
*/
void sub_1540610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540610ULL || rel >= 0x1540640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540640 size=336 callers=1 calls=5
   calls: sub_e83430, sub_e83850, sub_e83930, sub_e83a20, sub_eb6230
*/
void sub_1540640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540640ULL || rel >= 0x1540790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540790 size=64 callers=1 calls=1
   calls: sub_e83850
*/
void sub_1540790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540790ULL || rel >= 0x15407d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015407d0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_15407d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15407d0ULL || rel >= 0x15407f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015407f0 size=16 callers=1 calls=0
*/
void sub_15407f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15407f0ULL || rel >= 0x1540800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540800 size=16 callers=1 calls=0
*/
void sub_1540800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540800ULL || rel >= 0x1540810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540810 size=288 callers=12 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_1540810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540810ULL || rel >= 0x1540930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01540930 size=2336 callers=1 calls=17
   calls: ZKN_FORM__03d_999, ZKN_TYPE__03d, sub_12f86e0, sub_12fa520, sub_1313c10, sub_1315b90, sub_1379660, sub_14ab040, sub_14bc060, sub_14d6920, sub_1540810, sub_67bdc0
   ... +5 more
   ref: ZKN_HEIGHT_%03d_%03d
   ref: ZKN_HEIGHT_%03d_999
   ref: ZKN_COMMENT_A_%03d_%03d
   ref: ZKN_WEIGHT_%03d_999
   ref: ZKN_COMMENT_A_%03d_999
   ref: ZKN_WEIGHT_%03d_%03d
*/
void ZKN_WEIGHT__03d_999_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1540930ULL || rel >= 0x1541250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541250 size=240 callers=4 calls=1
   calls: sub_14aad40
*/
void sub_1541250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541250ULL || rel >= 0x1541340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541340 size=608 callers=13 calls=6
   calls: sub_1311c60, sub_1313580, sub_1313e50, sub_1315270, sub_67d450, sub_e7eb10
*/
void sub_1541340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541340ULL || rel >= 0x15415a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015415a0 size=96 callers=2 calls=0
*/
void sub_15415a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15415a0ULL || rel >= 0x1541600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541600 size=496 callers=3 calls=4
   calls: sub_1311c60, sub_1313580, sub_67d450, sub_e7eb10
*/
void sub_1541600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541600ULL || rel >= 0x15417f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015417f0 size=48 callers=2 calls=0
*/
void sub_15417f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15417f0ULL || rel >= 0x1541820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541820 size=144 callers=1 calls=3
   calls: ZKN_WEIGHT__03d_999_3, sub_e83430, sub_e83850
*/
void sub_1541820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541820ULL || rel >= 0x15418b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015418b0 size=96 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_15418b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15418b0ULL || rel >= 0x1541910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541910 size=64 callers=1 calls=1
   calls: sub_e83430
*/
void sub_1541910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541910ULL || rel >= 0x1541950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541950 size=128 callers=1 calls=2
   calls: sub_14ab2b0, sub_e83430
*/
void sub_1541950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541950ULL || rel >= 0x15419d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015419d0 size=160 callers=0 calls=0
*/
void sub_15419d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15419d0ULL || rel >= 0x1541a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541a70 size=160 callers=0 calls=0
*/
void sub_1541a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541a70ULL || rel >= 0x1541b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541b10 size=16 callers=0 calls=0
*/
void sub_1541b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541b10ULL || rel >= 0x1541b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541b20 size=160 callers=0 calls=0
*/
void sub_1541b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541b20ULL || rel >= 0x1541bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541bc0 size=160 callers=0 calls=0
*/
void sub_1541bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541bc0ULL || rel >= 0x1541c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541c60 size=16 callers=0 calls=0
*/
void sub_1541c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541c60ULL || rel >= 0x1541c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541c70 size=16 callers=0 calls=0
*/
void sub_1541c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541c70ULL || rel >= 0x1541c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541c80 size=160 callers=0 calls=0
*/
void sub_1541c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541c80ULL || rel >= 0x1541d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541d20 size=160 callers=0 calls=0
*/
void sub_1541d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541d20ULL || rel >= 0x1541dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01541dc0 size=928 callers=0 calls=10
   calls: sub_153bdb0, sub_153dd60, sub_153f320, sub_1542160, sub_15426d0, sub_1542820, sub_c39c40, sub_c43ed0, sub_c44310, sub_d0c0
   ref: ViewDetails
   ref: ViewTop
   ref: ViewBg
*/
void ViewDetails_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1541dc0ULL || rel >= 0x1542160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542160 size=304 callers=3 calls=11
   calls: sub_153bdb0, sub_153c3f0, sub_153c400, sub_153dd60, sub_1540640, sub_1542ab0, sub_1542b90, sub_1543df0, sub_1543ea0, sub_e806b0, top_panel_6
*/
void sub_1542160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542160ULL || rel >= 0x1542290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542290 size=640 callers=0 calls=18
   calls: sub_12fff40, sub_1379700, sub_1502120, sub_153bdb0, sub_153bdd0, sub_153bde0, sub_153be80, sub_153c320, sub_153c340, sub_153c350, sub_153dd60, sub_1540790
   ... +6 more
*/
void sub_1542290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542290ULL || rel >= 0x1542510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542510 size=16 callers=0 calls=0
*/
void sub_1542510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542510ULL || rel >= 0x1542520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542520 size=16 callers=0 calls=0
*/
void sub_1542520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542520ULL || rel >= 0x1542530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542530 size=16 callers=0 calls=0
*/
void sub_1542530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542530ULL || rel >= 0x1542540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542540 size=16 callers=0 calls=0
*/
void sub_1542540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542540ULL || rel >= 0x1542550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542550 size=16 callers=0 calls=0
*/
void sub_1542550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542550ULL || rel >= 0x1542560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542560 size=16 callers=0 calls=0
*/
void sub_1542560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542560ULL || rel >= 0x1542570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542570 size=16 callers=0 calls=0
*/
void sub_1542570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542570ULL || rel >= 0x1542580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542580 size=16 callers=0 calls=0
*/
void sub_1542580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542580ULL || rel >= 0x1542590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542590 size=16 callers=0 calls=0
*/
void sub_1542590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542590ULL || rel >= 0x15425a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015425a0 size=304 callers=0 calls=0
*/
void sub_15425a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15425a0ULL || rel >= 0x15426d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015426d0 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_15426d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15426d0ULL || rel >= 0x1542820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542820 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1542820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542820ULL || rel >= 0x1542970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542970 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokedex/bin/pokedex_bg_lyt.bin
*/
void pokedex_bg_lyt_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542970ULL || rel >= 0x1542a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542a80 size=16 callers=0 calls=0
*/
void sub_1542a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542a80ULL || rel >= 0x1542a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542a90 size=16 callers=0 calls=0
*/
void sub_1542a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542a90ULL || rel >= 0x1542aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542aa0 size=16 callers=0 calls=0
*/
void sub_1542aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542aa0ULL || rel >= 0x1542ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542ab0 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_1542ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542ab0ULL || rel >= 0x1542ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542ae0 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_1542ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542ae0ULL || rel >= 0x1542b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542b10 size=80 callers=2 calls=2
   calls: sub_e83430, sub_eb6230
*/
void sub_1542b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542b10ULL || rel >= 0x1542b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542b60 size=16 callers=1 calls=0
*/
void sub_1542b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542b60ULL || rel >= 0x1542b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542b70 size=32 callers=7 calls=1
   calls: sub_eb6530
*/
void sub_1542b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542b70ULL || rel >= 0x1542b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542b90 size=64 callers=3 calls=1
   calls: sub_e83930
*/
void sub_1542b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542b90ULL || rel >= 0x1542bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542bd0 size=16 callers=0 calls=0
*/
void sub_1542bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542bd0ULL || rel >= 0x1542be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542be0 size=16 callers=0 calls=0
*/
void sub_1542be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542be0ULL || rel >= 0x1542bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542bf0 size=16 callers=0 calls=0
*/
void sub_1542bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542bf0ULL || rel >= 0x1542c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542c00 size=16 callers=0 calls=0
*/
void sub_1542c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542c00ULL || rel >= 0x1542c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542c10 size=16 callers=0 calls=0
*/
void sub_1542c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542c10ULL || rel >= 0x1542c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542c20 size=16 callers=0 calls=0
*/
void sub_1542c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542c20ULL || rel >= 0x1542c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542c30 size=16 callers=0 calls=0
*/
void sub_1542c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542c30ULL || rel >= 0x1542c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542c40 size=16 callers=0 calls=0
*/
void sub_1542c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542c40ULL || rel >= 0x1542c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542c50 size=304 callers=0 calls=0
*/
void sub_1542c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542c50ULL || rel >= 0x1542d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542d80 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokedex/bin/pokedex_top_lyt.bin
   ref: bin/appli/pokedex/bin/uikit_pokedex_top.bin
*/
void uikit_pokedex_top_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542d80ULL || rel >= 0x1542f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01542f60 size=256 callers=0 calls=6
   calls: pane_L_btn_near_poke__02d_L_pokeIcon_00_P_pokeIcon_00_2, sub_14e1a30, sub_15432b0, sub_1543410, sub_1543550, sub_e84310
*/
void sub_1542f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1542f60ULL || rel >= 0x1543060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543060 size=592 callers=1 calls=2
   calls: sub_14ba7b0, sub_8f3180
   ref: pane_L_btn_near_poke_%02d_L_pokeIcon_00_P_pokeIcon_00
*/
void pane_L_btn_near_poke__02d_L_pokeIcon_00_P_pokeIcon_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543060ULL || rel >= 0x15432b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015432b0 size=352 callers=2 calls=4
   calls: sub_1315b90, sub_1379a60, sub_1379c20, sub_1543550
*/
void sub_15432b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15432b0ULL || rel >= 0x1543410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543410 size=224 callers=2 calls=3
   calls: sub_1379d60, sub_1379da0, sub_e83930
*/
void sub_1543410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543410ULL || rel >= 0x15434f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015434f0 size=16 callers=0 calls=0
*/
void sub_15434f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15434f0ULL || rel >= 0x1543500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543500 size=16 callers=0 calls=0
*/
void sub_1543500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543500ULL || rel >= 0x1543510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543510 size=16 callers=1 calls=0
*/
void sub_1543510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543510ULL || rel >= 0x1543520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543520 size=16 callers=1 calls=0
*/
void sub_1543520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543520ULL || rel >= 0x1543530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543530 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_1543530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543530ULL || rel >= 0x1543550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543550 size=288 callers=9 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_1543550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543550ULL || rel >= 0x1543670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543670 size=400 callers=2 calls=2
   calls: sub_e83430, sub_e83850
   ref: anime_L_btn_near_poke_%02d_L_pokeIcon_00_color_inactive
   ref: anime_L_btn_near_poke_%02d_L_pokeIcon_00_color_normal
*/
void anime_L_btn_near_poke__02d_L_pokeIcon_00_color_normal_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543670ULL || rel >= 0x1543800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543800 size=1520 callers=2 calls=16
   calls: anime_L_btn_near_poke__02d_L_pokeIcon_00_color_normal_2, sub_12fa520, sub_1313c10, sub_1315b90, sub_1379a10, sub_137a070, sub_137a090, sub_14ab040, sub_14bc060, sub_14e1a30, sub_14e6510, sub_14e6d90
   ... +4 more
   ref: pane_L_btn_near_poke_%02d_T_pokeName_00
   ref: pane_L_btn_near_poke_%02d_T_value_dexnum_00
   ref: anime_L_btn_near_poke_%02d_switch_find_get
   ref: top_panel
   ref: anime_L_btn_near_poke_%02d_L_icon_weather_switch
   ref: anime_L_btn_near_poke_%02d_L_icon_weather_active
*/
void top_panel_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543800ULL || rel >= 0x1543df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543df0 size=176 callers=2 calls=4
   calls: sub_137a050, sub_137a160, sub_d62e30, sub_e83930
*/
void sub_1543df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543df0ULL || rel >= 0x1543ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01543ea0 size=384 callers=2 calls=5
   calls: place_name_6, sub_137a050, sub_137a160, sub_1543550, sub_e90930
*/
void sub_1543ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1543ea0ULL || rel >= 0x1544020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544020 size=128 callers=2 calls=2
   calls: sub_e83430, sub_e83930
*/
void sub_1544020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544020ULL || rel >= 0x15440a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015440a0 size=96 callers=2 calls=1
   calls: sub_14ab2b0
*/
void sub_15440a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15440a0ULL || rel >= 0x1544100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544100 size=272 callers=1 calls=5
   calls: anime_L_btn_near_poke__02d_L_pokeIcon_00_color_normal_2, sub_137a220, sub_15432b0, sub_1543410, sub_e83930
   ref: anime_L_btn_near_poke_%02d_switch_find_get
*/
void anime_L_btn_near_poke__02d_switch_find_get(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544100ULL || rel >= 0x1544210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544210 size=448 callers=3 calls=3
   calls: sub_1311c60, sub_67d450, sub_e7eb10
*/
void sub_1544210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544210ULL || rel >= 0x15443d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015443d0 size=16 callers=0 calls=0
*/
void sub_15443d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15443d0ULL || rel >= 0x15443e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015443e0 size=16 callers=0 calls=0
*/
void sub_15443e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15443e0ULL || rel >= 0x15443f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015443f0 size=16 callers=0 calls=0
*/
void sub_15443f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15443f0ULL || rel >= 0x1544400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544400 size=16 callers=0 calls=0
*/
void sub_1544400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544400ULL || rel >= 0x1544410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544410 size=16 callers=0 calls=0
*/
void sub_1544410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544410ULL || rel >= 0x1544420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544420 size=16 callers=0 calls=0
*/
void sub_1544420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544420ULL || rel >= 0x1544430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544430 size=16 callers=0 calls=0
*/
void sub_1544430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544430ULL || rel >= 0x1544440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544440 size=16 callers=0 calls=0
*/
void sub_1544440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544440ULL || rel >= 0x1544450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544450 size=304 callers=0 calls=0
*/
void sub_1544450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544450ULL || rel >= 0x1544580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544580 size=1232 callers=0 calls=17
   calls: sub_1448ae0, sub_153c320, sub_153dd60, sub_15426d0, sub_1542820, sub_1542b10, sub_1542b90, sub_1543510, sub_1545180, sub_1545480, sub_5cfaf0, sub_79b990
   ... +5 more
   ref: TownmapView
   ref: ViewTop
   ref: ViewBg
   ref: pickup
*/
void TownmapView_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544580ULL || rel >= 0x1544a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01544a50 size=1600 callers=0 calls=39
   calls: anime_L_btn_near_poke__02d_switch_find_get, sub_1379d60, sub_1449270, sub_1502120, sub_153bdb0, sub_153bdc0, sub_153bdd0, sub_153bde0, sub_153be80, sub_153c320, sub_153c360, sub_153c370
   ... +27 more
*/
void sub_1544a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1544a50ULL || rel >= 0x1545090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545090 size=240 callers=1 calls=2
   calls: sub_1379a10, sub_137a070
*/
void sub_1545090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545090ULL || rel >= 0x1545180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545180 size=320 callers=2 calls=7
   calls: pane__s_10, pane__s_8, sub_137a050, sub_137a070, sub_137a160, sub_1446ab0, sub_1448ba0
*/
void sub_1545180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545180ULL || rel >= 0x15452c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015452c0 size=16 callers=0 calls=0
*/
void sub_15452c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15452c0ULL || rel >= 0x15452d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015452d0 size=16 callers=0 calls=0
*/
void sub_15452d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15452d0ULL || rel >= 0x15452e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015452e0 size=16 callers=0 calls=0
*/
void sub_15452e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15452e0ULL || rel >= 0x15452f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015452f0 size=16 callers=0 calls=0
*/
void sub_15452f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15452f0ULL || rel >= 0x1545300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545300 size=16 callers=0 calls=0
*/
void sub_1545300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545300ULL || rel >= 0x1545310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545310 size=16 callers=0 calls=0
*/
void sub_1545310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545310ULL || rel >= 0x1545320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545320 size=16 callers=0 calls=0
*/
void sub_1545320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545320ULL || rel >= 0x1545330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545330 size=16 callers=0 calls=0
*/
void sub_1545330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545330ULL || rel >= 0x1545340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545340 size=16 callers=0 calls=0
*/
void sub_1545340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545340ULL || rel >= 0x1545350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545350 size=304 callers=0 calls=0
*/
void sub_1545350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545350ULL || rel >= 0x1545480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545480 size=336 callers=15 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1545480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545480ULL || rel >= 0x15455d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015455d0 size=976 callers=0 calls=12
   calls: sub_153bdb0, sub_153dd60, sub_153f320, sub_1541340, sub_1541600, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb7e40
   ref: ViewDetails
   ref: nickname
*/
void ViewDetails_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15455d0ULL || rel >= 0x15459a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015459a0 size=880 callers=0 calls=17
   calls: strinput, sub_153bdb0, sub_153bdd0, sub_153be80, sub_153dd60, sub_15415a0, sub_67bdc0, sub_67bfa0, sub_762930, sub_7670a0, sub_767570, sub_e76980
   ... +5 more
*/
void sub_15459a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15459a0ULL || rel >= 0x1545d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d10 size=16 callers=0 calls=0
*/
void sub_1545d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d10ULL || rel >= 0x1545d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d20 size=16 callers=0 calls=0
*/
void sub_1545d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d20ULL || rel >= 0x1545d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d30 size=16 callers=0 calls=0
*/
void sub_1545d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d30ULL || rel >= 0x1545d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d40 size=16 callers=0 calls=0
*/
void sub_1545d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d40ULL || rel >= 0x1545d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d50 size=16 callers=0 calls=0
*/
void sub_1545d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d50ULL || rel >= 0x1545d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d60 size=16 callers=0 calls=0
*/
void sub_1545d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d60ULL || rel >= 0x1545d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d70 size=16 callers=0 calls=0
*/
void sub_1545d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d70ULL || rel >= 0x1545d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d80 size=16 callers=0 calls=0
*/
void sub_1545d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d80ULL || rel >= 0x1545d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545d90 size=16 callers=0 calls=0
*/
void sub_1545d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545d90ULL || rel >= 0x1545da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545da0 size=304 callers=0 calls=0
*/
void sub_1545da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545da0ULL || rel >= 0x1545ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01545ed0 size=1680 callers=0 calls=18
   calls: sub_13576f0, sub_153bdb0, sub_153beb0, sub_153dd60, sub_153f320, sub_1541340, sub_1546560, sub_5cfaf0, sub_762d70, sub_765520, sub_767950, sub_7847d0
   ... +6 more
   ref: ViewDetails
   ref: add_pokemon
*/
void add_pokemon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1545ed0ULL || rel >= 0x1546560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546560 size=368 callers=3 calls=7
   calls: sub_1541340, sub_1541600, sub_15417f0, sub_762d70, sub_e806b0, sub_e807f0, sub_eb7e40
*/
void sub_1546560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546560ULL || rel >= 0x15466d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015466d0 size=1808 callers=0 calls=19
   calls: sub_1367100, sub_1379aa0, sub_153bdb0, sub_153bdd0, sub_153beb0, sub_153dd60, sub_1541340, sub_1546560, sub_762930, sub_762940, sub_762d70, sub_762d90
   ... +7 more
*/
void sub_15466d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15466d0ULL || rel >= 0x1546de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546de0 size=16 callers=0 calls=0
*/
void sub_1546de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546de0ULL || rel >= 0x1546df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546df0 size=16 callers=0 calls=0
*/
void sub_1546df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546df0ULL || rel >= 0x1546e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546e00 size=16 callers=0 calls=0
*/
void sub_1546e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546e00ULL || rel >= 0x1546e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546e10 size=16 callers=0 calls=0
*/
void sub_1546e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546e10ULL || rel >= 0x1546e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546e20 size=16 callers=0 calls=0
*/
void sub_1546e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546e20ULL || rel >= 0x1546e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546e30 size=16 callers=0 calls=0
*/
void sub_1546e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546e30ULL || rel >= 0x1546e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546e40 size=16 callers=0 calls=0
*/
void sub_1546e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546e40ULL || rel >= 0x1546e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546e50 size=16 callers=0 calls=0
*/
void sub_1546e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546e50ULL || rel >= 0x1546e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546e60 size=16 callers=0 calls=0
*/
void sub_1546e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546e60ULL || rel >= 0x1546e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546e70 size=304 callers=0 calls=0
*/
void sub_1546e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546e70ULL || rel >= 0x1546fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01546fa0 size=368 callers=0 calls=4
   calls: sub_153f320, sub_1541910, sub_c39c40, sub_d0c0
   ref: ViewDetails
   ref: register_end
*/
void register_end(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1546fa0ULL || rel >= 0x1547110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547110 size=336 callers=0 calls=11
   calls: sub_137a050, sub_137a1d0, sub_153bdb0, sub_153bdd0, sub_153bde0, sub_153be80, sub_153c350, sub_153dd60, sub_1541250, sub_1541950, sub_762930
*/
void sub_1547110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547110ULL || rel >= 0x1547260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547260 size=16 callers=0 calls=0
*/
void sub_1547260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547260ULL || rel >= 0x1547270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547270 size=16 callers=0 calls=0
*/
void sub_1547270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547270ULL || rel >= 0x1547280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547280 size=16 callers=0 calls=0
*/
void sub_1547280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547280ULL || rel >= 0x1547290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547290 size=16 callers=0 calls=0
*/
void sub_1547290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547290ULL || rel >= 0x15472a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015472a0 size=16 callers=0 calls=0
*/
void sub_15472a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15472a0ULL || rel >= 0x15472b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015472b0 size=16 callers=0 calls=0
*/
void sub_15472b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15472b0ULL || rel >= 0x15472c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015472c0 size=16 callers=0 calls=0
*/
void sub_15472c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15472c0ULL || rel >= 0x15472d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015472d0 size=16 callers=0 calls=0
*/
void sub_15472d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15472d0ULL || rel >= 0x15472e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015472e0 size=16 callers=0 calls=0
*/
void sub_15472e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15472e0ULL || rel >= 0x15472f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015472f0 size=304 callers=0 calls=0
*/
void sub_15472f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15472f0ULL || rel >= 0x1547420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547420 size=368 callers=0 calls=4
   calls: sub_153f320, sub_15405d0, sub_c39c40, sub_d0c0
   ref: ViewDetails
   ref: register_main
*/
void register_main(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547420ULL || rel >= 0x1547590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547590 size=160 callers=0 calls=4
   calls: sub_153bdd0, sub_153dd60, sub_1540610, sub_15407f0
*/
void sub_1547590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547590ULL || rel >= 0x1547630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547630 size=16 callers=0 calls=0
*/
void sub_1547630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547630ULL || rel >= 0x1547640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547640 size=16 callers=0 calls=0
*/
void sub_1547640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547640ULL || rel >= 0x1547650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547650 size=16 callers=0 calls=0
*/
void sub_1547650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547650ULL || rel >= 0x1547660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547660 size=16 callers=0 calls=0
*/
void sub_1547660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547660ULL || rel >= 0x1547670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547670 size=16 callers=0 calls=0
*/
void sub_1547670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547670ULL || rel >= 0x1547680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547680 size=16 callers=0 calls=0
*/
void sub_1547680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547680ULL || rel >= 0x1547690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547690 size=16 callers=0 calls=0
*/
void sub_1547690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547690ULL || rel >= 0x15476a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015476a0 size=16 callers=0 calls=0
*/
void sub_15476a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15476a0ULL || rel >= 0x15476b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015476b0 size=16 callers=0 calls=0
*/
void sub_15476b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15476b0ULL || rel >= 0x15476c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015476c0 size=304 callers=0 calls=0
*/
void sub_15476c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15476c0ULL || rel >= 0x15477f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015477f0 size=816 callers=0 calls=11
   calls: sub_153bdb0, sub_153dd60, sub_153f320, sub_1541340, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb8930
   ref: ViewDetails
   ref: register_start
*/
void register_start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15477f0ULL || rel >= 0x1547b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547b20 size=288 callers=0 calls=7
   calls: sub_153bdd0, sub_153c350, sub_153dd60, sub_1541250, sub_1541820, sub_15418b0, sub_eb8e80
*/
void sub_1547b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547b20ULL || rel >= 0x1547c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547c40 size=16 callers=0 calls=0
*/
void sub_1547c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547c40ULL || rel >= 0x1547c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547c50 size=16 callers=0 calls=0
*/
void sub_1547c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547c50ULL || rel >= 0x1547c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547c60 size=16 callers=0 calls=0
*/
void sub_1547c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547c60ULL || rel >= 0x1547c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547c70 size=16 callers=0 calls=0
*/
void sub_1547c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547c70ULL || rel >= 0x1547c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547c80 size=16 callers=0 calls=0
*/
void sub_1547c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547c80ULL || rel >= 0x1547c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547c90 size=16 callers=0 calls=0
*/
void sub_1547c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547c90ULL || rel >= 0x1547ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547ca0 size=16 callers=0 calls=0
*/
void sub_1547ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547ca0ULL || rel >= 0x1547cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547cb0 size=16 callers=0 calls=0
*/
void sub_1547cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547cb0ULL || rel >= 0x1547cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547cc0 size=16 callers=0 calls=0
*/
void sub_1547cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547cc0ULL || rel >= 0x1547cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547cd0 size=304 callers=0 calls=0
*/
void sub_1547cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547cd0ULL || rel >= 0x1547e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01547e00 size=736 callers=0 calls=9
   calls: sub_153bdb0, sub_153c320, sub_153dd60, sub_153f320, sub_15426d0, sub_1542ae0, sub_c39c40, sub_c445f0, sub_d0c0
   ref: ViewDetails
   ref: ViewBg
*/
void ViewDetails_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1547e00ULL || rel >= 0x15480e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015480e0 size=272 callers=0 calls=6
   calls: sub_153bdb0, sub_153bdd0, sub_153dd60, sub_15407d0, sub_1542b70, sub_c44310
*/
void sub_15480e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15480e0ULL || rel >= 0x15481f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015481f0 size=112 callers=0 calls=2
   calls: sub_e80580, sub_e806b0
*/
void sub_15481f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15481f0ULL || rel >= 0x1548260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548260 size=16 callers=0 calls=0
*/
void sub_1548260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548260ULL || rel >= 0x1548270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548270 size=16 callers=0 calls=0
*/
void sub_1548270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548270ULL || rel >= 0x1548280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548280 size=16 callers=0 calls=0
*/
void sub_1548280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548280ULL || rel >= 0x1548290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548290 size=16 callers=0 calls=0
*/
void sub_1548290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548290ULL || rel >= 0x15482a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015482a0 size=16 callers=0 calls=0
*/
void sub_15482a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15482a0ULL || rel >= 0x15482b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015482b0 size=16 callers=0 calls=0
*/
void sub_15482b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15482b0ULL || rel >= 0x15482c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015482c0 size=16 callers=0 calls=0
*/
void sub_15482c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15482c0ULL || rel >= 0x15482d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015482d0 size=16 callers=0 calls=0
*/
void sub_15482d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15482d0ULL || rel >= 0x15482e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015482e0 size=304 callers=0 calls=0
*/
void sub_15482e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15482e0ULL || rel >= 0x1548410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548410 size=768 callers=2 calls=12
   calls: LOADED, metamethod, sub_154a8c0, sub_154ab00, sub_154ab20, sub_154ab80, sub_154b940, sub_154bfe0, sub_154c0c0, sub_154de00, sub_1552eb0, unnamed_54
   ref: %s '%s'
   ref: function <%s:%d>
   ref: stack traceback:
   ref: function '%s'
   ref: stack overflow
   ref: main chunk
*/
void stack_overflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548410ULL || rel >= 0x1548710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548710 size=96 callers=10 calls=1
   calls: sub_154a8c0
   ref: stack overflow (%s)
   ref: stack overflow
*/
void stack_overflow_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548710ULL || rel >= 0x1548770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548770 size=256 callers=57 calls=5
   calls: LOADED, metamethod, sub_154b940, sub_1552eb0, unnamed_54
   ref: method
   ref: bad argument #%d (%s)
   ref: bad argument #%d to '%s' (%s)
   ref: calling '%s' on bad self (%s)
*/
void method(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548770ULL || rel >= 0x1548870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548870 size=272 callers=89 calls=6
   calls: metamethod, sub_154c060, sub_154c0c0, sub_154dd10, sub_154de00, sub_1552eb0
   ref: %s:%d: 
*/
void unnamed_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548870ULL || rel >= 0x1548980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548980 size=272 callers=2 calls=9
   calls: metamethod, sub_154a730, sub_154ab00, sub_154ab20, sub_154ab80, sub_154acd0, sub_154b940, sub_154bfe0, sub_154c4f0
   ref: _LOADED
*/
void LOADED(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548980ULL || rel >= 0x1548a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548a90 size=144 callers=2 calls=3
   calls: metamethod, sub_154c0c0, sub_1552eb0
   ref: %s:%d: 
*/
void unnamed_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548a90ULL || rel >= 0x1548b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548b20 size=160 callers=2 calls=5
   calls: sub_154bf00, sub_154bf40, sub_154bfe0, sub_154c0c0, sub_154c260
   ref: %s: %s
*/
void unnamed_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548b20ULL || rel >= 0x1548bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548bc0 size=176 callers=19 calls=6
   calls: sub_154ab20, sub_154ae60, sub_154bfe0, sub_154c4f0, sub_154ca50, sub_154cfd0
   ref: __name
*/
void name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548bc0ULL || rel >= 0x1548c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548c70 size=64 callers=6 calls=1
   calls: sub_154c4f0
*/
void sub_1548c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548c70ULL || rel >= 0x1548cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548cb0 size=144 callers=1 calls=5
   calls: sub_154ab20, sub_154b320, sub_154bc50, sub_154c4f0, sub_154cb00
*/
void sub_1548cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548cb0ULL || rel >= 0x1548d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548d40 size=160 callers=16 calls=6
   calls: light_userdata, sub_154ab20, sub_154b320, sub_154bc50, sub_154c4f0, sub_154cb00
*/
void sub_1548d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548d40ULL || rel >= 0x1548de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548de0 size=256 callers=8 calls=9
   calls: sub_154ab20, sub_154ab80, sub_154af10, sub_154aff0, sub_154b940, sub_154bfe0, sub_154c0c0, sub_154c7a0, sub_154cb00
   ref: light userdata
   ref: %s expected, got %s
   ref: __name
*/
void light_userdata(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548de0ULL || rel >= 0x1548ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548ee0 size=256 callers=3 calls=5
   calls: light_userdata, sub_154af10, sub_154aff0, sub_154b940, sub_154c0c0
   ref: invalid option '%s'
*/
void invalid_option_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548ee0ULL || rel >= 0x1548fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01548fe0 size=160 callers=13 calls=4
   calls: light_userdata, sub_154af10, sub_154aff0, sub_154b940
*/
void sub_1548fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548fe0ULL || rel >= 0x1549080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549080 size=96 callers=40 calls=3
   calls: light_userdata, sub_154aff0, sub_154b940
*/
void sub_1549080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549080ULL || rel >= 0x15490e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015490e0 size=96 callers=20 calls=2
   calls: sub_154af10, sub_154aff0
*/
void sub_15490e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15490e0ULL || rel >= 0x1549140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549140 size=80 callers=18 calls=1
   calls: sub_154af10
   ref: value expected
*/
void value_expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549140ULL || rel >= 0x1549190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549190 size=96 callers=30 calls=3
   calls: light_userdata, sub_154aff0, sub_154b640
*/
void sub_1549190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549190ULL || rel >= 0x15491f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015491f0 size=128 callers=1 calls=4
   calls: light_userdata, sub_154af10, sub_154aff0, sub_154b640
*/
void sub_15491f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15491f0ULL || rel >= 0x1549270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549270 size=144 callers=34 calls=5
   calls: light_userdata, method, sub_154aff0, sub_154b190, sub_154b750
   ref: number has no integer representation
*/
void number_has_no_integer_representation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549270ULL || rel >= 0x1549300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549300 size=160 callers=21 calls=6
   calls: light_userdata, method, sub_154af10, sub_154aff0, sub_154b190, sub_154b750
   ref: number has no integer representation
*/
void number_has_no_integer_representation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549300ULL || rel >= 0x15493a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015493a0 size=288 callers=30 calls=7
   calls: name, not_enough_memory_for_buffer_allocation, sub_154c170, sub_154cfd0, sub_154d550, sub_154dfa0, unnamed_54
   ref: LUABOX
   ref: buffer too large
*/
void LUABOX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15493a0ULL || rel >= 0x15494c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015494c0 size=192 callers=2 calls=3
   calls: sub_154bc50, sub_154df80, unnamed_54
   ref: not enough memory for buffer allocation
*/
void not_enough_memory_for_buffer_allocation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15494c0ULL || rel >= 0x1549580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549580 size=80 callers=7 calls=1
   calls: LUABOX
*/
void sub_1549580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549580ULL || rel >= 0x15495d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015495d0 size=96 callers=1 calls=1
   calls: LUABOX
*/
void sub_15495d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15495d0ULL || rel >= 0x1549630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549630 size=160 callers=11 calls=5
   calls: sub_154ab20, sub_154ab80, sub_154bc50, sub_154bf60, sub_154df80
*/
void sub_1549630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549630ULL || rel >= 0x15496d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015496d0 size=16 callers=5 calls=0
*/
void sub_15496d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15496d0ULL || rel >= 0x15496e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015496e0 size=192 callers=8 calls=4
   calls: LUABOX, sub_154ab20, sub_154ab80, sub_154b940
*/
void sub_15496e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15496e0ULL || rel >= 0x15497a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015497a0 size=32 callers=11 calls=0
*/
void sub_15497a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15497a0ULL || rel >= 0x15497c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015497c0 size=32 callers=5 calls=0
*/
void sub_15497c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15497c0ULL || rel >= 0x15497e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015497e0 size=224 callers=55 calls=7
   calls: sub_154aac0, sub_154ab20, sub_154af10, sub_154b750, sub_154bb50, sub_154c880, sub_154d330
*/
void sub_15497e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15497e0ULL || rel >= 0x15498c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015498c0 size=128 callers=63 calls=4
   calls: sub_154aac0, sub_154bf40, sub_154c880, sub_154d330
*/
void sub_15498c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15498c0ULL || rel >= 0x1549940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

