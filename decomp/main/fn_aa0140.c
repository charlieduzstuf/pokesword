/* main functions 00aa0140..00ac3100 (81 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00aa0140 size=368 callers=2 calls=6
   calls: sub_1354890, sub_14ab040, sub_14e6d50, sub_aa1440, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa0140ULL || rel >= 0xaa02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa02b0 size=896 callers=1 calls=15
   calls: poke_panel_14, poke_panel_34, poke_panel_35, sub_1354890, sub_14ab040, sub_14e6550, sub_1500c40, sub_1502120, sub_5cfad0, sub_aa1440, sub_aa3620, sub_aadd60
   ... +3 more
   ref: poke_panel
*/
void poke_panel_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa02b0ULL || rel >= 0xaa0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa0630 size=544 callers=1 calls=4
   calls: sub_1354890, sub_aaa510, sub_aac6b0, sub_ab2e90
*/
void sub_aa0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa0630ULL || rel >= 0xaa0850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa0850 size=320 callers=1 calls=2
   calls: sub_1354890, sub_ab2e90
*/
void sub_aa0850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa0850ULL || rel >= 0xaa0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa0990 size=432 callers=2 calls=9
   calls: poke_panel_38, poke_panel_60, sub_1354890, sub_14e6d50, sub_1502120, sub_5cfad0, sub_aaa510, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa0990ULL || rel >= 0xaa0b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa0b40 size=32 callers=2 calls=0
*/
void sub_aa0b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa0b40ULL || rel >= 0xaa0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa0b60 size=496 callers=2 calls=6
   calls: sub_1354890, sub_14e6d50, sub_aaa220, sub_aaf5d0, sub_ab2e90, sub_e840a0
   ref: poke_panel
*/
void poke_panel_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa0b60ULL || rel >= 0xaa0d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa0d50 size=752 callers=1 calls=7
   calls: sub_1313580, sub_1354890, sub_14e6d50, sub_aa4440, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa0d50ULL || rel >= 0xaa1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa1040 size=512 callers=1 calls=7
   calls: sub_1313580, sub_1354890, sub_14e6d50, sub_aa4440, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa1040ULL || rel >= 0xaa1240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa1240 size=512 callers=1 calls=7
   calls: sub_1313580, sub_1354890, sub_14e6d50, sub_aa4440, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa1240ULL || rel >= 0xaa1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa1440 size=1456 callers=2 calls=13
   calls: pane_L_icon_poke_team__02d_T_poke_lv_00, sub_1502120, sub_5cfad0, sub_a98a80, sub_aa8470, sub_aac6b0, sub_aaf5f0, sub_ab0d70, sub_ab11a0, sub_ab16d0, sub_ab1780, sub_ab2d40
   ... +1 more
*/
void sub_aa1440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa1440ULL || rel >= 0xaa19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa19f0 size=1296 callers=1 calls=18
   calls: poke_panel_16, poke_panel_29, poke_panel_30, poke_panel_31, sub_13533f0, sub_1354890, sub_14e6d50, sub_1502120, sub_5cfad0, sub_7847d0, sub_aac6b0, sub_aaf5d0
   ... +6 more
   ref: poke_panel
*/
void poke_panel_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa19f0ULL || rel >= 0xaa1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa1f00 size=1792 callers=1 calls=21
   calls: poke_panel_16, poke_panel_32, sub_1353ad0, sub_1353b00, sub_1353ec0, sub_1354070, sub_1354530, sub_1354890, sub_14e6d50, sub_1502120, sub_5cfad0, sub_aa2ca0
   ... +9 more
   ref: poke_panel
*/
void poke_panel_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa1f00ULL || rel >= 0xaa2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa2600 size=432 callers=4 calls=6
   calls: sub_1354890, sub_14e6d50, sub_aac850, sub_aaf5d0, sub_ab1ad0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa2600ULL || rel >= 0xaa27b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa27b0 size=432 callers=2 calls=5
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_ab1ad0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa27b0ULL || rel >= 0xaa2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa2960 size=416 callers=2 calls=6
   calls: sub_1354890, sub_14e6d50, sub_aad520, sub_aaf5d0, sub_ab1ad0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa2960ULL || rel >= 0xaa2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa2b00 size=416 callers=4 calls=6
   calls: sub_1354890, sub_14e6d50, sub_aad1b0, sub_aaf5d0, sub_ab1ad0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa2b00ULL || rel >= 0xaa2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa2ca0 size=336 callers=2 calls=5
   calls: sub_1353ec0, sub_1354050, sub_ab18f0, sub_ab2040, sub_ab2a90
*/
void sub_aa2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa2ca0ULL || rel >= 0xaa2df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa2df0 size=832 callers=1 calls=18
   calls: sub_1354400, sub_1354890, sub_14e6d50, sub_1502120, sub_5cfad0, sub_aa2ca0, sub_aa8470, sub_aac6b0, sub_aaf5d0, sub_aaf5f0, sub_ab0d70, sub_ab11a0
   ... +6 more
   ref: poke_panel
*/
void poke_panel_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa2df0ULL || rel >= 0xaa3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa3130 size=16 callers=2 calls=0
*/
void sub_aa3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa3130ULL || rel >= 0xaa3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa3140 size=16 callers=3 calls=0
*/
void sub_aa3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa3140ULL || rel >= 0xaa3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa3150 size=272 callers=1 calls=8
   calls: poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_35, poke_panel_9, sub_14e6d50, sub_aa41d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa3150ULL || rel >= 0xaa3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa3260 size=960 callers=3 calls=6
   calls: sub_14e62c0, sub_14e6510, sub_14e6540, sub_14e6d90, sub_e83e60, sub_e840a0
   ref: poke_panel
*/
void poke_panel_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa3260ULL || rel >= 0xaa3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa3620 size=288 callers=1 calls=3
   calls: sub_1315b90, sub_a97450, sub_e83430
*/
void sub_aa3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa3620ULL || rel >= 0xaa3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa3740 size=1136 callers=1 calls=17
   calls: poke_panel_16, poke_panel_29, poke_panel_30, poke_panel_31, sub_14e6d50, sub_1500c40, sub_1502120, sub_5cfad0, sub_7847d0, sub_aac6b0, sub_aad500, sub_aaf5d0
   ... +5 more
   ref: poke_panel
*/
void poke_panel_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa3740ULL || rel >= 0xaa3bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa3bb0 size=1568 callers=1 calls=25
   calls: poke_panel_16, poke_panel_32, sub_1353ad0, sub_1353b00, sub_1353b50, sub_1353ec0, sub_1354050, sub_1354070, sub_1354530, sub_1354890, sub_14e6d50, sub_1500c40
   ... +13 more
   ref: poke_panel
*/
void poke_panel_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa3bb0ULL || rel >= 0xaa41d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa41d0 size=544 callers=1 calls=3
   calls: sub_14aacc0, sub_14aaec0, sub_14ab040
*/
void sub_aa41d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa41d0ULL || rel >= 0xaa43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa43f0 size=48 callers=18 calls=0
*/
void sub_aa43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa43f0ULL || rel >= 0xaa4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa4420 size=32 callers=21 calls=0
*/
void sub_aa4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4420ULL || rel >= 0xaa4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa4440 size=544 callers=10 calls=3
   calls: sub_1311c60, sub_67d450, sub_e7eb10
*/
void sub_aa4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4440ULL || rel >= 0xaa4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa4660 size=16 callers=4 calls=0
*/
void sub_aa4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4660ULL || rel >= 0xaa4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa4670 size=16 callers=1 calls=0
*/
void sub_aa4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4670ULL || rel >= 0xaa4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa4680 size=1184 callers=30 calls=11
   calls: sub_1311c60, sub_1313580, sub_1313e50, sub_1315270, sub_1354890, sub_14e6d50, sub_67d450, sub_aac6b0, sub_aaf5d0, sub_e7eb10, sub_e840a0
   ref: poke_panel
*/
void poke_panel_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4680ULL || rel >= 0xaa4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa4b20 size=336 callers=4 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4b20ULL || rel >= 0xaa4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa4c70 size=576 callers=1 calls=8
   calls: sub_1315270, sub_1354890, sub_14e6d50, sub_762d70, sub_aa4440, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4c70ULL || rel >= 0xaa4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa4eb0 size=544 callers=1 calls=7
   calls: sub_1313580, sub_1354890, sub_14e6d50, sub_aa4440, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4eb0ULL || rel >= 0xaa50d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa50d0 size=640 callers=3 calls=11
   calls: sub_1354890, sub_14e1a30, sub_14e6d50, sub_762d70, sub_aa8470, sub_aac6b0, sub_aaf5d0, sub_ab1ad0, sub_ab2d40, sub_e840a0, sub_e84310
   ref: poke_panel
*/
void poke_panel_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa50d0ULL || rel >= 0xaa5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5350 size=96 callers=14 calls=0
*/
void sub_aa5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5350ULL || rel >= 0xaa53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa53b0 size=144 callers=1 calls=1
   calls: sub_aad500
*/
void sub_aa53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa53b0ULL || rel >= 0xaa5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5440 size=16 callers=1 calls=0
*/
void sub_aa5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5440ULL || rel >= 0xaa5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5450 size=336 callers=2 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5450ULL || rel >= 0xaa55a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa55a0 size=384 callers=2 calls=7
   calls: poke_panel_45, sub_1354890, sub_14e6d50, sub_a99240, sub_aadfa0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa55a0ULL || rel >= 0xaa5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5720 size=368 callers=3 calls=5
   calls: sub_1354890, sub_14e6d50, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5720ULL || rel >= 0xaa5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5890 size=336 callers=1 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5890ULL || rel >= 0xaa59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa59e0 size=336 callers=1 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa59e0ULL || rel >= 0xaa5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5b30 size=336 callers=2 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5b30ULL || rel >= 0xaa5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5c80 size=480 callers=1 calls=7
   calls: pane_L_icon_poke_team__02d_T_poke_lv_00, sub_1354890, sub_14e6d50, sub_7847d0, sub_aaf5d0, sub_ab2050, sub_e840a0
   ref: poke_panel
*/
void poke_panel_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5c80ULL || rel >= 0xaa5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5e60 size=80 callers=1 calls=2
   calls: sub_ab0c80, sub_ab2bd0
*/
void sub_aa5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5e60ULL || rel >= 0xaa5eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa5eb0 size=448 callers=1 calls=8
   calls: anime_info_out_2, pane_L_icon_poke_team__02d_T_poke_lv_00, sub_1354890, sub_14e6d50, sub_aac6b0, sub_aae4d0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa5eb0ULL || rel >= 0xaa6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa6070 size=1280 callers=1 calls=12
   calls: sub_1354890, sub_14ab040, sub_14e1a00, sub_14e6d50, sub_762db0, sub_a993f0, sub_a9bc60, sub_aac6b0, sub_aaf5d0, sub_e833a0, sub_e83430, sub_e840a0
   ref: anime_L_window_marking_00_L_icon_marking_%02d
   ref: poke_panel
*/
void poke_panel_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa6070ULL || rel >= 0xaa6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa6570 size=224 callers=1 calls=8
   calls: sub_14ab2b0, sub_14e1a00, sub_14e1a30, sub_14e6550, sub_1500c40, sub_a9d7a0, sub_e840a0, sub_e84310
   ref: marking_panel
*/
void marking_panel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa6570ULL || rel >= 0xaa6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa6650 size=16 callers=2 calls=0
*/
void sub_aa6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa6650ULL || rel >= 0xaa6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa6660 size=128 callers=1 calls=5
   calls: sub_14e1a00, sub_14e1a30, sub_e83430, sub_e840a0, sub_e84310
   ref: marking_panel
*/
void marking_panel_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa6660ULL || rel >= 0xaa66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa66e0 size=480 callers=2 calls=8
   calls: anime_L_marker_set_00_L__02d, sub_1354890, sub_14ab2b0, sub_14e1a00, sub_14e6d50, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa66e0ULL || rel >= 0xaa68c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa68c0 size=512 callers=1 calls=10
   calls: anime_L_bg_box_list_01_bg_default, anime_L_box_change_00_L_icon_box__02d__02d_gray_max, sub_13533f0, sub_1354890, sub_14e1a30, sub_a99750, sub_a9bc60, sub_aafbb0, sub_e833a0, sub_e84310
   ref: anime_box_in
   ref: anime_L_box_change_00_box_%02d
*/
void anime_box_in(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa68c0ULL || rel >= 0xaa6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa6ac0 size=1200 callers=6 calls=5
   calls: sub_1350900, sub_13533f0, sub_aa8470, sub_aac690, sub_e833a0
   ref: anime_L_box_change_00_L_icon_box_%02d_%02d_default_containing
   ref: anime_L_box_change_00_L_icon_box_%02d_%02d_default_empty
   ref: anime_L_box_change_00_L_icon_box_%02d_%02d_default_max
   ref: anime_L_box_change_00_L_icon_box_%02d_%02d_gray_containing
   ref: anime_L_box_change_00_L_icon_box_%02d_%02d_gray_empty
   ref: anime_L_box_change_00_L_icon_box_%02d_%02d_gray_max
*/
void anime_L_box_change_00_L_icon_box__02d__02d_gray_max(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa6ac0ULL || rel >= 0xaa6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa6f70 size=336 callers=1 calls=7
   calls: boxtray_cursor__02d, boxtray_panel__02d, sub_1354890, sub_14ab2b0, sub_14e6550, sub_a97450, sub_a998c0
*/
void sub_aa6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa6f70ULL || rel >= 0xaa70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa70c0 size=1072 callers=1 calls=4
   calls: anime_L_bg_box_list_01_bg_default, boxtray_cursor__02d, sub_1354890, sub_a99750
   ref: anime_box_out
*/
void anime_box_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa70c0ULL || rel >= 0xaa74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa74f0 size=192 callers=1 calls=5
   calls: sub_14ab2b0, sub_14e6550, sub_14e6d50, sub_a97450, sub_e840a0
   ref: poke_panel
*/
void poke_panel_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa74f0ULL || rel >= 0xaa75b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa75b0 size=16 callers=1 calls=0
*/
void sub_aa75b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa75b0ULL || rel >= 0xaa75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa75c0 size=288 callers=3 calls=3
   calls: sub_13533f0, sub_e833a0, sub_e83870
   ref: anime_L_box_change_00_L_icon_box_%02d_%02d_catch
*/
void anime_L_box_change_00_L_icon_box__02d__02d_catch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa75c0ULL || rel >= 0xaa76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa76e0 size=304 callers=3 calls=7
   calls: boxtray_panel__02d, button_box__02d_search, button_box__02d_tray_mode, sub_14e62c0, sub_14e6510, sub_14e6540, sub_14e6d90
*/
void sub_aa76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa76e0ULL || rel >= 0xaa7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa7810 size=192 callers=3 calls=3
   calls: sub_14e1a00, sub_a959b0, sub_e83e60
*/
void sub_aa7810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa7810ULL || rel >= 0xaa78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa78d0 size=1024 callers=2 calls=10
   calls: anime_L_bg_box_list_01_bg_default, anime_L_box_change_00_L_icon_box__02d__02d_catch, boxtray_panel__02d, button_box__02d__02d_2, sub_14e6510, sub_14e6d50, sub_a99750, sub_a998c0, sub_aa76e0, sub_aa7810
*/
void sub_aa78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa78d0ULL || rel >= 0xaa7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa7cd0 size=768 callers=2 calls=1
   calls: sub_aad060
*/
void sub_aa7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa7cd0ULL || rel >= 0xaa7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa7fd0 size=128 callers=1 calls=1
   calls: pane_L_box_change_00_L_icon_box__02d__02d
*/
void sub_aa7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa7fd0ULL || rel >= 0xaa8050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa8050 size=416 callers=2 calls=2
   calls: sub_13533f0, sub_14aadb0
   ref: pane_L_box_change_00_L_icon_box_%02d_%02d
*/
void pane_L_box_change_00_L_icon_box__02d__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa8050ULL || rel >= 0xaa81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa81f0 size=640 callers=1 calls=13
   calls: anime_L_box_change_00_L_icon_box__02d__02d_catch, anime_L_box_change_00_L_icon_box__02d__02d_gray_max, boxtray_panel__02d, sub_1350360, sub_1353110, sub_13547b0, sub_1354890, sub_14aacc0, sub_14aadb0, sub_14e6d50, sub_a998c0, sub_aa76e0
   ... +1 more
*/
void sub_aa81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa81f0ULL || rel >= 0xaa8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa8470 size=1408 callers=115 calls=20
   calls: sub_1353c70, sub_762930, sub_762940, sub_762d70, sub_762db0, sub_764b40, sub_765dd0, sub_765de0, sub_766940, sub_766990, sub_7669e0, sub_7670a0
   ... +8 more
*/
void sub_aa8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa8470ULL || rel >= 0xaa89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa89f0 size=16 callers=1 calls=0
*/
void sub_aa89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa89f0ULL || rel >= 0xaa8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa8a00 size=1696 callers=1 calls=21
   calls: anime_L_box_change_00_L_icon_box__02d__02d_gray_max, boxtray_cursor__02d, boxtray_panel__02d, button_box__02d__02d_2, pane_L_icon_poke_team__02d_T_poke_lv_00, sub_14ab040, sub_14e1a30, sub_14e6510, sub_14e6d50, sub_a959b0, sub_a98a80, sub_aa8470
   ... +9 more
*/
void sub_aa8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa8a00ULL || rel >= 0xaa90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa90a0 size=1072 callers=1 calls=7
   calls: anime_L_box_change_00_L_icon_box__02d__02d_gray_max, sub_13533f0, sub_1354890, sub_762d70, sub_aa8470, sub_aac6b0, sub_ab2d40
*/
void sub_aa90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa90a0ULL || rel >= 0xaa94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa94d0 size=368 callers=1 calls=7
   calls: sub_1354890, sub_14ab040, sub_14d8990, sub_14e6d50, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa94d0ULL || rel >= 0xaa9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa9640 size=384 callers=3 calls=5
   calls: sub_1354430, sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa9640ULL || rel >= 0xaa97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa97c0 size=352 callers=1 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa97c0ULL || rel >= 0xaa9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa9920 size=256 callers=1 calls=9
   calls: poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_14ab2b0, sub_14e6d50, sub_a959b0, sub_e83430, sub_e840a0
   ref: poke_panel
*/
void poke_panel_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa9920ULL || rel >= 0xaa9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa9a20 size=384 callers=2 calls=6
   calls: sub_1354890, sub_14e6d50, sub_aad400, sub_aaf5d0, sub_aafbb0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa9a20ULL || rel >= 0xaa9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aa9ba0 size=1664 callers=1 calls=23
   calls: anime_info_out_2, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_13533f0, sub_1354890, sub_14ab2b0, sub_14e6d50, sub_762d70, sub_a959b0, sub_aa8470
   ... +11 more
   ref: poke_panel
*/
void poke_panel_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa9ba0ULL || rel >= 0xaaa220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaa220 size=240 callers=3 calls=2
   calls: sub_1315b90, sub_a97450
*/
void sub_aaa220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaa220ULL || rel >= 0xaaa310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaa310 size=16 callers=1 calls=0
*/
void sub_aaa310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaa310ULL || rel >= 0xaaa320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaa320 size=496 callers=1 calls=6
   calls: sub_1354890, sub_14e6d50, sub_aaa220, sub_aaf5d0, sub_ab2e90, sub_e840a0
   ref: poke_panel
*/
void poke_panel_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaa320ULL || rel >= 0xaaa510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaa510 size=192 callers=2 calls=2
   calls: poke_panel_38, sub_aaed20
*/
void sub_aaa510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaa510ULL || rel >= 0xaaa5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaa5d0 size=1168 callers=2 calls=2
   calls: sub_13533f0, sub_aa8470
*/
void sub_aaa5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaa5d0ULL || rel >= 0xaaaa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaaa60 size=480 callers=2 calls=7
   calls: poke_panel_38, sub_1354890, sub_14e6d50, sub_aa8470, sub_aaf040, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaaa60ULL || rel >= 0xaaac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaac40 size=384 callers=1 calls=5
   calls: sub_1354890, sub_14e6d50, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaac40ULL || rel >= 0xaaadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaadc0 size=48 callers=1 calls=0
*/
void sub_aaadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaadc0ULL || rel >= 0xaaadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaadf0 size=240 callers=1 calls=2
   calls: sub_1313580, sub_aa4440
*/
void sub_aaadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaadf0ULL || rel >= 0xaaaee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaaee0 size=48 callers=1 calls=0
*/
void sub_aaaee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaaee0ULL || rel >= 0xaaaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaaf10 size=352 callers=4 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaaf10ULL || rel >= 0xaab070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab070 size=304 callers=3 calls=7
   calls: sub_1052c20, sub_1061a40, sub_1314a80, sub_136b530, sub_136b580, sub_136b590, sub_67be60
*/
void sub_aab070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab070ULL || rel >= 0xaab1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab1a0 size=16 callers=1 calls=0
*/
void sub_aab1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab1a0ULL || rel >= 0xaab1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab1b0 size=16 callers=4 calls=0
*/
void sub_aab1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab1b0ULL || rel >= 0xaab1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab1c0 size=48 callers=1 calls=0
*/
void sub_aab1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab1c0ULL || rel >= 0xaab1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab1f0 size=208 callers=1 calls=1
   calls: sub_13548a0
*/
void sub_aab1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab1f0ULL || rel >= 0xaab2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab2c0 size=16 callers=21 calls=0
*/
void sub_aab2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab2c0ULL || rel >= 0xaab2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab2d0 size=336 callers=1 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab2d0ULL || rel >= 0xaab420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab420 size=240 callers=2 calls=1
   calls: sub_14aad40
*/
void sub_aab420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab420ULL || rel >= 0xaab510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab510 size=352 callers=12 calls=4
   calls: sub_1354890, sub_14e6d50, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab510ULL || rel >= 0xaab670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab670 size=368 callers=2 calls=5
   calls: sub_1354890, sub_14e6d50, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab670ULL || rel >= 0xaab7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab7e0 size=208 callers=1 calls=3
   calls: sub_14e62c0, sub_14e6d90, sub_e840a0
   ref: poke_panel
*/
void poke_panel_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab7e0ULL || rel >= 0xaab8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab8b0 size=16 callers=1 calls=0
*/
void sub_aab8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab8b0ULL || rel >= 0xaab8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab8c0 size=144 callers=1 calls=3
   calls: sub_aaf5d0, sub_aafbb0, sub_ab1ad0
*/
void sub_aab8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab8c0ULL || rel >= 0xaab950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aab950 size=304 callers=0 calls=0
*/
void sub_aab950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab950ULL || rel >= 0xaaba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaba80 size=16 callers=0 calls=0
*/
void sub_aaba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaba80ULL || rel >= 0xaaba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaba90 size=16 callers=0 calls=0
*/
void sub_aaba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaba90ULL || rel >= 0xaabaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabaa0 size=16 callers=0 calls=0
*/
void sub_aabaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabaa0ULL || rel >= 0xaabab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabab0 size=16 callers=0 calls=0
*/
void sub_aabab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabab0ULL || rel >= 0xaabac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabac0 size=16 callers=0 calls=0
*/
void sub_aabac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabac0ULL || rel >= 0xaabad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabad0 size=16 callers=0 calls=0
*/
void sub_aabad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabad0ULL || rel >= 0xaabae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabae0 size=16 callers=0 calls=0
*/
void sub_aabae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabae0ULL || rel >= 0xaabaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabaf0 size=16 callers=0 calls=0
*/
void sub_aabaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabaf0ULL || rel >= 0xaabb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabb00 size=224 callers=1 calls=1
   calls: sub_aafe00
*/
void sub_aabb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabb00ULL || rel >= 0xaabbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabbe0 size=224 callers=1 calls=1
   calls: sub_aaf630
*/
void sub_aabbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabbe0ULL || rel >= 0xaabcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabcc0 size=48 callers=0 calls=0
*/
void sub_aabcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabcc0ULL || rel >= 0xaabcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabcf0 size=16 callers=0 calls=0
*/
void sub_aabcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabcf0ULL || rel >= 0xaabd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabd00 size=32 callers=0 calls=0
*/
void sub_aabd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabd00ULL || rel >= 0xaabd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabd20 size=32 callers=0 calls=0
*/
void sub_aabd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabd20ULL || rel >= 0xaabd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabd40 size=32 callers=0 calls=0
*/
void sub_aabd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabd40ULL || rel >= 0xaabd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabd60 size=16 callers=0 calls=0
*/
void sub_aabd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabd60ULL || rel >= 0xaabd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabd70 size=32 callers=0 calls=0
*/
void sub_aabd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabd70ULL || rel >= 0xaabd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabd90 size=32 callers=0 calls=0
*/
void sub_aabd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabd90ULL || rel >= 0xaabdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabdb0 size=400 callers=4 calls=2
   calls: sub_aabdb0, sub_e86260
*/
void sub_aabdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabdb0ULL || rel >= 0xaabf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabf40 size=48 callers=0 calls=0
*/
void sub_aabf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabf40ULL || rel >= 0xaabf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabf70 size=16 callers=0 calls=0
*/
void sub_aabf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabf70ULL || rel >= 0xaabf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabf80 size=32 callers=0 calls=0
*/
void sub_aabf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabf80ULL || rel >= 0xaabfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabfa0 size=32 callers=0 calls=0
*/
void sub_aabfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabfa0ULL || rel >= 0xaabfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aabfc0 size=560 callers=1 calls=0
*/
void sub_aabfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabfc0ULL || rel >= 0xaac1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac1f0 size=112 callers=0 calls=0
*/
void sub_aac1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac1f0ULL || rel >= 0xaac260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac260 size=112 callers=0 calls=0
*/
void sub_aac260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac260ULL || rel >= 0xaac2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac2d0 size=112 callers=0 calls=0
*/
void sub_aac2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac2d0ULL || rel >= 0xaac340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac340 size=112 callers=0 calls=0
*/
void sub_aac340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac340ULL || rel >= 0xaac3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac3b0 size=128 callers=0 calls=0
*/
void sub_aac3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac3b0ULL || rel >= 0xaac430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac430 size=608 callers=1 calls=1
   calls: sub_76f550
*/
void sub_aac430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac430ULL || rel >= 0xaac690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac690 size=32 callers=1 calls=0
*/
void sub_aac690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac690ULL || rel >= 0xaac6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac6b0 size=16 callers=82 calls=0
*/
void sub_aac6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac6b0ULL || rel >= 0xaac6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac6c0 size=400 callers=37 calls=6
   calls: sub_134f3a0, sub_1353ad0, sub_1353b00, sub_1353b50, sub_762d50, sub_7847d0
*/
void sub_aac6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac6c0ULL || rel >= 0xaac850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aac850 size=2064 callers=1 calls=10
   calls: sub_134f3a0, sub_1354430, sub_762d50, sub_765520, sub_767950, sub_7847d0, sub_aac6c0, sub_aad060, sub_aaf5d0, sub_aaf5f0
*/
void sub_aac850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac850ULL || rel >= 0xaad060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aad060 size=336 callers=41 calls=1
   calls: sub_c3b970
*/
void sub_aad060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad060ULL || rel >= 0xaad1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aad1b0 size=592 callers=1 calls=7
   calls: sub_1353ad0, sub_1354400, sub_767950, sub_aac6c0, sub_aad060, sub_aaf5d0, sub_aaf5f0
*/
void sub_aad1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad1b0ULL || rel >= 0xaad400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aad400 size=256 callers=1 calls=4
   calls: sub_1354430, sub_767950, sub_aac6c0, sub_aad060
*/
void sub_aad400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad400ULL || rel >= 0xaad500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aad500 size=16 callers=2 calls=0
*/
void sub_aad500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad500ULL || rel >= 0xaad510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aad510 size=16 callers=0 calls=0
*/
void sub_aad510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad510ULL || rel >= 0xaad520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aad520 size=1632 callers=1 calls=14
   calls: sub_1350010, sub_1350240, sub_1350450, sub_13506d0, sub_1353620, sub_1353f20, sub_1354070, sub_76f6c0, sub_76f7d0, sub_76f7e0, sub_7847d0, sub_aac6c0
   ... +2 more
*/
void sub_aad520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad520ULL || rel >= 0xaadb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aadb80 size=480 callers=0 calls=8
   calls: sub_134f3a0, sub_134f3e0, sub_1353f20, sub_1354070, sub_762d50, sub_76f7d0, sub_76f7e0, sub_7847d0
*/
void sub_aadb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaadb80ULL || rel >= 0xaadd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aadd60 size=384 callers=1 calls=1
   calls: sub_aac6c0
*/
void sub_aadd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaadd60ULL || rel >= 0xaadee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aadee0 size=192 callers=0 calls=3
   calls: sub_1367350, sub_762d70, sub_aac6c0
*/
void sub_aadee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaadee0ULL || rel >= 0xaadfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aadfa0 size=256 callers=1 calls=6
   calls: sub_1367100, sub_762d70, sub_762d90, sub_aac6c0, sub_aae0a0, sub_aae190
*/
void sub_aadfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaadfa0ULL || rel >= 0xaae0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aae0a0 size=240 callers=2 calls=5
   calls: sub_1379aa0, sub_762930, sub_762940, sub_768270, sub_768a10
*/
void sub_aae0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaae0a0ULL || rel >= 0xaae190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aae190 size=256 callers=4 calls=3
   calls: sub_134f3e0, sub_1353ad0, sub_1353b00
*/
void sub_aae190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaae190ULL || rel >= 0xaae290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aae290 size=128 callers=2 calls=4
   calls: sub_762d90, sub_aac6c0, sub_aae0a0, sub_aae190
*/
void sub_aae290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaae290ULL || rel >= 0xaae310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aae310 size=448 callers=0 calls=9
   calls: sub_1353bb0, sub_762930, sub_762940, sub_762d70, sub_765520, sub_767950, sub_7847d0, sub_aac6c0, sub_aad060
*/
void sub_aae310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaae310ULL || rel >= 0xaae4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aae4d0 size=464 callers=1 calls=7
   calls: sub_13506d0, sub_1353bb0, sub_1353f20, sub_1354070, sub_1367100, sub_762d70, sub_aac6c0
*/
void sub_aae4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaae4d0ULL || rel >= 0xaae6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aae6a0 size=160 callers=1 calls=4
   calls: sub_762db0, sub_762de0, sub_aac6c0, sub_aae190
*/
void sub_aae6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaae6a0ULL || rel >= 0xaae740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aae740 size=720 callers=1 calls=5
   calls: sub_1350900, sub_765520, sub_767950, sub_aac6c0, sub_aad060
*/
void sub_aae740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaae740ULL || rel >= 0xaaea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaea10 size=784 callers=1 calls=9
   calls: sub_134f3a0, sub_134fe60, sub_1350010, sub_13506d0, sub_13510b0, sub_1353620, sub_762d50, sub_76f6c0, sub_aaf5f0
*/
void sub_aaea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaea10ULL || rel >= 0xaaed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaed20 size=800 callers=1 calls=11
   calls: sub_134f3a0, sub_1353bb0, sub_762930, sub_762940, sub_762d50, sub_765520, sub_767950, sub_7847d0, sub_8ddcc0, sub_aac6c0, sub_aad060
*/
void sub_aaed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaed20ULL || rel >= 0xaaf040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf040 size=544 callers=1 calls=10
   calls: sub_134f3a0, sub_1353bb0, sub_762930, sub_762940, sub_762d50, sub_765520, sub_767950, sub_7847d0, sub_aac6c0, sub_aad060
*/
void sub_aaf040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf040ULL || rel >= 0xaaf260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf260 size=240 callers=0 calls=4
   calls: sub_12fa580, sub_1354430, sub_aac6c0, sub_aae190
   ref: BOX_LOOK
*/
void BOX_LOOK(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf260ULL || rel >= 0xaaf350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf350 size=160 callers=0 calls=0
*/
void sub_aaf350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf350ULL || rel >= 0xaaf3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf3f0 size=160 callers=0 calls=0
*/
void sub_aaf3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf3f0ULL || rel >= 0xaaf490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf490 size=160 callers=0 calls=0
*/
void sub_aaf490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf490ULL || rel >= 0xaaf530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf530 size=160 callers=0 calls=0
*/
void sub_aaf530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf530ULL || rel >= 0xaaf5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf5d0 size=32 callers=125 calls=0
*/
void sub_aaf5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf5d0ULL || rel >= 0xaaf5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf5f0 size=64 callers=17 calls=0
*/
void sub_aaf5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf5f0ULL || rel >= 0xaaf630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf630 size=176 callers=2 calls=0
*/
void sub_aaf630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf630ULL || rel >= 0xaaf6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf6e0 size=576 callers=1 calls=2
   calls: sub_14ba7b0, sub_8f3180
   ref: pane_L_icon_poke_box_%02d_P_icon_item_00
   ref: pane_L_icon_poke_box_%02d_N_icon_item_00
*/
void pane_L_icon_poke_box__02d_P_icon_item_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf6e0ULL || rel >= 0xaaf920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaf920 size=400 callers=9 calls=2
   calls: sub_14ab040, sub_14bb830
*/
void sub_aaf920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaf920ULL || rel >= 0xaafab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafab0 size=128 callers=1 calls=1
   calls: sub_14bb960
*/
void sub_aafab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafab0ULL || rel >= 0xaafb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafb30 size=96 callers=4 calls=1
   calls: sub_14ab040
*/
void sub_aafb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafb30ULL || rel >= 0xaafb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafb90 size=32 callers=4 calls=0
*/
void sub_aafb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafb90ULL || rel >= 0xaafbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafbb0 size=16 callers=14 calls=0
*/
void sub_aafbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafbb0ULL || rel >= 0xaafbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafbc0 size=96 callers=1 calls=1
   calls: sub_14aadf0
*/
void sub_aafbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafbc0ULL || rel >= 0xaafc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafc20 size=160 callers=1 calls=2
   calls: sub_14aacc0, sub_14aadb0
*/
void sub_aafc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafc20ULL || rel >= 0xaafcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafcc0 size=80 callers=0 calls=0
*/
void sub_aafcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafcc0ULL || rel >= 0xaafd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafd10 size=80 callers=0 calls=0
*/
void sub_aafd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafd10ULL || rel >= 0xaafd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafd60 size=80 callers=0 calls=0
*/
void sub_aafd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafd60ULL || rel >= 0xaafdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafdb0 size=80 callers=0 calls=0
*/
void sub_aafdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafdb0ULL || rel >= 0xaafe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aafe00 size=320 callers=2 calls=0
*/
void sub_aafe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaafe00ULL || rel >= 0xaaff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aaff40 size=3392 callers=1 calls=7
   calls: sub_14aacc0, sub_14aadb0, sub_14ab040, sub_14ab670, sub_14ab8e0, sub_14ba7b0, sub_8f3180
   ref: pane_L_icon_poke_box_%02d_P_icon_poke_shadow
   ref: pane_L_icon_poke_box_%02d_P_check
   ref: pane_L_icon_poke_box_%02d_P_icon_lock
   ref: pane_L_icon_poke_box_%02d_P_icon_lock_live_01
   ref: anime_L_icon_poke_box_%02d_black
   ref: pane_L_icon_poke_box_%02d_P_icon_poke_00
   ref: pane_L_icon_poke_box_%02d_N_icon_poke_state_00
   ref: anime_L_icon_poke_box_%02d_release_default
*/
void pane_N_icon_poke_pos__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaff40ULL || rel >= 0xab0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab0c80 size=240 callers=9 calls=3
   calls: sub_14aacc0, sub_14ab670, sub_14ab8e0
*/
void sub_ab0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab0c80ULL || rel >= 0xab0d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab0d70 size=560 callers=23 calls=4
   calls: sub_14ab040, sub_14ab080, sub_14bbf30, sub_762d50
*/
void sub_ab0d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab0d70ULL || rel >= 0xab0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab0fa0 size=416 callers=2 calls=0
*/
void sub_ab0fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab0fa0ULL || rel >= 0xab1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1140 size=96 callers=8 calls=0
*/
void sub_ab1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1140ULL || rel >= 0xab11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab11a0 size=656 callers=2 calls=6
   calls: sub_14aacc0, sub_14aadb0, sub_14ab080, sub_14ab740, sub_14ab8e0, sub_ab1430
*/
void sub_ab11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab11a0ULL || rel >= 0xab1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1430 size=576 callers=2 calls=4
   calls: sub_14aacc0, sub_14ab080, sub_14ab670, sub_14ab8e0
*/
void sub_ab1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1430ULL || rel >= 0xab1670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1670 size=80 callers=4 calls=1
   calls: sub_ab1430
*/
void sub_ab1670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1670ULL || rel >= 0xab16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab16c0 size=16 callers=1 calls=0
*/
void sub_ab16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab16c0ULL || rel >= 0xab16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab16d0 size=176 callers=19 calls=1
   calls: sub_aaf5f0
*/
void sub_ab16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab16d0ULL || rel >= 0xab1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1780 size=192 callers=1 calls=3
   calls: sub_14ab040, sub_14ab0c0, sub_14ab200
*/
void sub_ab1780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1780ULL || rel >= 0xab1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1840 size=176 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_ab1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1840ULL || rel >= 0xab18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab18f0 size=304 callers=11 calls=4
   calls: sub_14ab0c0, sub_14ab200, sub_14ab440, sub_14ab5c0
*/
void sub_ab18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab18f0ULL || rel >= 0xab1a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1a20 size=176 callers=2 calls=1
   calls: sub_14ab2b0
*/
void sub_ab1a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1a20ULL || rel >= 0xab1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1ad0 size=16 callers=19 calls=0
*/
void sub_ab1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1ad0ULL || rel >= 0xab1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1ae0 size=784 callers=2 calls=3
   calls: sub_14aadf0, sub_14ab740, sub_14ab8e0
*/
void sub_ab1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1ae0ULL || rel >= 0xab1df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1df0 size=224 callers=2 calls=1
   calls: sub_ab1ed0
*/
void sub_ab1df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1df0ULL || rel >= 0xab1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1ed0 size=208 callers=11 calls=3
   calls: sub_14aacc0, sub_14aadb0, sub_14ab040
*/
void sub_ab1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1ed0ULL || rel >= 0xab1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab1fa0 size=160 callers=1 calls=0
*/
void sub_ab1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab1fa0ULL || rel >= 0xab2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2040 size=16 callers=11 calls=0
*/
void sub_ab2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2040ULL || rel >= 0xab2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2050 size=992 callers=1 calls=1
   calls: sub_14aadf0
*/
void sub_ab2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2050ULL || rel >= 0xab2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2430 size=528 callers=9 calls=1
   calls: sub_14aadf0
*/
void sub_ab2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2430ULL || rel >= 0xab2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2640 size=976 callers=1 calls=2
   calls: sub_14aadf0, sub_14ab080
*/
void sub_ab2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2640ULL || rel >= 0xab2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2a10 size=128 callers=8 calls=1
   calls: sub_14ab040
*/
void sub_ab2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2a10ULL || rel >= 0xab2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2a90 size=80 callers=14 calls=0
*/
void sub_ab2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2a90ULL || rel >= 0xab2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2ae0 size=64 callers=0 calls=0
*/
void sub_ab2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2ae0ULL || rel >= 0xab2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2b20 size=176 callers=0 calls=3
   calls: sub_14ab040, sub_14ab0c0, sub_14ab2b0
*/
void sub_ab2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2b20ULL || rel >= 0xab2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2bd0 size=368 callers=1 calls=1
   calls: sub_ab1df0
*/
void sub_ab2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2bd0ULL || rel >= 0xab2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2d40 size=336 callers=47 calls=2
   calls: sub_14ab0c0, sub_14ab200
*/
void sub_ab2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2d40ULL || rel >= 0xab2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab2e90 size=592 callers=31 calls=1
   calls: sub_14ab040
*/
void sub_ab2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab2e90ULL || rel >= 0xab30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab30e0 size=192 callers=1 calls=1
   calls: sub_14aadf0
*/
void sub_ab30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab30e0ULL || rel >= 0xab31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab31a0 size=80 callers=0 calls=0
*/
void sub_ab31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab31a0ULL || rel >= 0xab31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab31f0 size=80 callers=0 calls=0
*/
void sub_ab31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab31f0ULL || rel >= 0xab3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3240 size=80 callers=0 calls=0
*/
void sub_ab3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3240ULL || rel >= 0xab3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3290 size=80 callers=0 calls=0
*/
void sub_ab3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3290ULL || rel >= 0xab32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab32e0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokebox/bin/pokebox_wallpaper_lyt.bin
   ref: bin/appli/pokebox/bin/uikit_pokebox_wallpaper.bin
*/
void uikit_pokebox_wallpaper(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab32e0ULL || rel >= 0xab34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab34c0 size=16 callers=0 calls=0
*/
void sub_ab34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab34c0ULL || rel >= 0xab34d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab34d0 size=336 callers=0 calls=2
   calls: sub_a91e20, sub_ab4670
*/
void sub_ab34d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab34d0ULL || rel >= 0xab3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3620 size=16 callers=0 calls=0
*/
void sub_ab3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3620ULL || rel >= 0xab3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3630 size=304 callers=0 calls=8
   calls: sub_14e1a30, sub_1502120, sub_5cfad0, sub_ab44e0, sub_e80580, sub_e807d0, sub_e84310, sub_ea4760
*/
void sub_ab3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3630ULL || rel >= 0xab3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3760 size=176 callers=1 calls=7
   calls: sub_14e1a00, sub_14e1a30, sub_ab3810, sub_e80580, sub_e807f0, sub_e84250, sub_e84310
*/
void sub_ab3760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3760ULL || rel >= 0xab3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3810 size=672 callers=1 calls=6
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10, sub_eb7b00
*/
void sub_ab3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3810ULL || rel >= 0xab3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3ab0 size=16 callers=1 calls=0
*/
void sub_ab3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3ab0ULL || rel >= 0xab3ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3ac0 size=16 callers=1 calls=0
*/
void sub_ab3ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3ac0ULL || rel >= 0xab3ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3ad0 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_ab3ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3ad0ULL || rel >= 0xab3af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3af0 size=16 callers=1 calls=0
*/
void sub_ab3af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3af0ULL || rel >= 0xab3b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3b00 size=16 callers=1 calls=0
*/
void sub_ab3b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3b00ULL || rel >= 0xab3b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3b10 size=80 callers=1 calls=3
   calls: sub_14e1a30, sub_ab3b60, sub_e84310
*/
void sub_ab3b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3b10ULL || rel >= 0xab3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3b60 size=880 callers=1 calls=7
   calls: sub_13546c0, sub_1354890, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_e84250
*/
void sub_ab3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3b60ULL || rel >= 0xab3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3ed0 size=96 callers=0 calls=3
   calls: sub_14e1a30, sub_e80580, sub_e84310
*/
void sub_ab3ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3ed0ULL || rel >= 0xab3f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab3f30 size=512 callers=0 calls=3
   calls: sub_5cfad0, sub_ab4140, sub_e83e60
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: msg_ui_box_wallpaper_%02d
*/
void msg_ui_box_wallpaper__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3f30ULL || rel >= 0xab4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4130 size=16 callers=0 calls=0
*/
void sub_ab4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4130ULL || rel >= 0xab4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4140 size=288 callers=1 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_ab4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4140ULL || rel >= 0xab4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4260 size=16 callers=2 calls=0
*/
void sub_ab4260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4260ULL || rel >= 0xab4270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4270 size=96 callers=0 calls=0
*/
void sub_ab4270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4270ULL || rel >= 0xab42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab42d0 size=96 callers=0 calls=0
*/
void sub_ab42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab42d0ULL || rel >= 0xab4330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4330 size=16 callers=0 calls=0
*/
void sub_ab4330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4330ULL || rel >= 0xab4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4340 size=96 callers=0 calls=0
*/
void sub_ab4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4340ULL || rel >= 0xab43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab43a0 size=96 callers=0 calls=0
*/
void sub_ab43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab43a0ULL || rel >= 0xab4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4400 size=16 callers=0 calls=0
*/
void sub_ab4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4400ULL || rel >= 0xab4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4410 size=16 callers=0 calls=0
*/
void sub_ab4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4410ULL || rel >= 0xab4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4420 size=96 callers=0 calls=0
*/
void sub_ab4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4420ULL || rel >= 0xab4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4480 size=96 callers=0 calls=0
*/
void sub_ab4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4480ULL || rel >= 0xab44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab44e0 size=400 callers=4 calls=2
   calls: sub_ab44e0, sub_e86260
*/
void sub_ab44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab44e0ULL || rel >= 0xab4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4670 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_ab4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4670ULL || rel >= 0xab4840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4840 size=48 callers=0 calls=0
*/
void sub_ab4840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4840ULL || rel >= 0xab4870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4870 size=16 callers=0 calls=0
*/
void sub_ab4870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4870ULL || rel >= 0xab4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4880 size=32 callers=0 calls=0
*/
void sub_ab4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4880ULL || rel >= 0xab48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab48a0 size=32 callers=0 calls=0
*/
void sub_ab48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab48a0ULL || rel >= 0xab48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab48c0 size=288 callers=2 calls=3
   calls: sub_ab7690, sub_c38350, sub_e9db40
*/
void sub_ab48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab48c0ULL || rel >= 0xab49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab49e0 size=240 callers=1 calls=2
   calls: sub_ab48c0, sub_ab7800
*/
void sub_ab49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab49e0ULL || rel >= 0xab4ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4ad0 size=688 callers=0 calls=0
*/
void sub_ab4ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4ad0ULL || rel >= 0xab4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4d80 size=16 callers=0 calls=0
*/
void sub_ab4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4d80ULL || rel >= 0xab4d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4d90 size=16 callers=0 calls=0
*/
void sub_ab4d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4d90ULL || rel >= 0xab4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4da0 size=16 callers=0 calls=0
*/
void sub_ab4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4da0ULL || rel >= 0xab4db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4db0 size=16 callers=0 calls=0
*/
void sub_ab4db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4db0ULL || rel >= 0xab4dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4dc0 size=16 callers=0 calls=0
*/
void sub_ab4dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4dc0ULL || rel >= 0xab4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4dd0 size=16 callers=0 calls=0
*/
void sub_ab4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4dd0ULL || rel >= 0xab4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4de0 size=304 callers=0 calls=4
   calls: sub_14e0350, sub_6aedd0, sub_794330, sub_ab85d0
   ref: Play_bgm_or_st_sys10
*/
void Play_bgm_or_st_sys10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4de0ULL || rel >= 0xab4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab4f10 size=240 callers=0 calls=4
   calls: sub_104df60, sub_14e0450, sub_6aedd0, sub_794330
   ref: Stop_bgm_or_st_sys10
*/
void Stop_bgm_or_st_sys10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab4f10ULL || rel >= 0xab5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab5000 size=6192 callers=0 calls=40
   calls: sub_104c020, sub_104df60, sub_1325230, sub_1357670, sub_142b3f0, sub_1435450, sub_14e0750, sub_14e0840, sub_762890, sub_767950, sub_783bd0, sub_7847d0
   ... +28 more
*/
void sub_ab5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab5000ULL || rel >= 0xab6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab6830 size=272 callers=1 calls=3
   calls: sub_672c10, sub_ab86b0, sub_c386f0
*/
void sub_ab6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab6830ULL || rel >= 0xab6940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab6940 size=384 callers=1 calls=4
   calls: sub_ab8fb0, sub_abb7d0, sub_abc650, sub_abcc70
*/
void sub_ab6940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab6940ULL || rel >= 0xab6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab6ac0 size=432 callers=1 calls=3
   calls: sub_c38350, sub_e9db40, sub_fb98b0
*/
void sub_ab6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab6ac0ULL || rel >= 0xab6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab6c70 size=1840 callers=1 calls=19
   calls: sub_8e0ae0, sub_ab8fb0, sub_ab95a0, sub_ab9ea0, sub_abade0, sub_abaf70, sub_abaf80, sub_abb7d0, sub_abcbd0, sub_abcc20, sub_abcc70, sub_abccc0
   ... +7 more
*/
void sub_ab6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab6c70ULL || rel >= 0xab73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab73a0 size=400 callers=1 calls=3
   calls: sub_12ca770, sub_672c10, sub_c386f0
*/
void sub_ab73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab73a0ULL || rel >= 0xab7530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab7530 size=16 callers=0 calls=0
*/
void sub_ab7530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab7530ULL || rel >= 0xab7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab7540 size=16 callers=0 calls=0
*/
void sub_ab7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab7540ULL || rel >= 0xab7550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab7550 size=16 callers=0 calls=0
*/
void sub_ab7550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab7550ULL || rel >= 0xab7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab7560 size=304 callers=0 calls=0
*/
void sub_ab7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab7560ULL || rel >= 0xab7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab7690 size=368 callers=1 calls=2
   calls: sub_a74910, sub_e9d130
*/
void sub_ab7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab7690ULL || rel >= 0xab7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab7800 size=224 callers=1 calls=1
   calls: sub_ab78e0
*/
void sub_ab7800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab7800ULL || rel >= 0xab78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab78e0 size=1088 callers=2 calls=3
   calls: sub_76f440, sub_ab7d20, sub_ca4fe0
*/
void sub_ab78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab78e0ULL || rel >= 0xab7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab7d20 size=1216 callers=1 calls=1
   calls: sub_65d700
*/
void sub_ab7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab7d20ULL || rel >= 0xab81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab81e0 size=304 callers=0 calls=1
   calls: sub_ab8340
*/
void sub_ab81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab81e0ULL || rel >= 0xab8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8310 size=16 callers=0 calls=0
*/
void sub_ab8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8310ULL || rel >= 0xab8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8320 size=16 callers=0 calls=0
*/
void sub_ab8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8320ULL || rel >= 0xab8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8330 size=16 callers=0 calls=0
*/
void sub_ab8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8330ULL || rel >= 0xab8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8340 size=656 callers=1 calls=0
*/
void sub_ab8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8340ULL || rel >= 0xab85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab85d0 size=224 callers=1 calls=1
   calls: sub_abbf70
*/
void sub_ab85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab85d0ULL || rel >= 0xab86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab86b0 size=336 callers=1 calls=3
   calls: sub_ab8800, sub_e76a20, sub_e7b660
*/
void sub_ab86b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab86b0ULL || rel >= 0xab8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8800 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_ab88e0, sub_e7b5e0
*/
void sub_ab8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8800ULL || rel >= 0xab88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab88e0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ab88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab88e0ULL || rel >= 0xab89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab89d0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_ab89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab89d0ULL || rel >= 0xab8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8a50 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_ab8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8a50ULL || rel >= 0xab8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8bc0 size=96 callers=0 calls=1
   calls: sub_ab8de0
*/
void sub_ab8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8bc0ULL || rel >= 0xab8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8c20 size=16 callers=0 calls=0
*/
void sub_ab8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8c20ULL || rel >= 0xab8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8c30 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_ab8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8c30ULL || rel >= 0xab8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8cd0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_ab8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8cd0ULL || rel >= 0xab8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8d90 size=16 callers=0 calls=0
*/
void sub_ab8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8d90ULL || rel >= 0xab8da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8da0 size=16 callers=0 calls=0
*/
void sub_ab8da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8da0ULL || rel >= 0xab8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8db0 size=16 callers=0 calls=0
*/
void sub_ab8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8db0ULL || rel >= 0xab8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8dc0 size=32 callers=0 calls=0
*/
void sub_ab8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8dc0ULL || rel >= 0xab8de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8de0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_ab8de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8de0ULL || rel >= 0xab8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8ec0 size=240 callers=2 calls=1
   calls: sub_c39c40
*/
void sub_ab8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8ec0ULL || rel >= 0xab8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab8fb0 size=240 callers=34 calls=0
*/
void sub_ab8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8fb0ULL || rel >= 0xab90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab90a0 size=160 callers=0 calls=0
*/
void sub_ab90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab90a0ULL || rel >= 0xab9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9140 size=352 callers=0 calls=3
   calls: sub_6a4cd0, sub_7f4580, sub_e89590
*/
void sub_ab9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9140ULL || rel >= 0xab92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab92a0 size=16 callers=0 calls=0
*/
void sub_ab92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab92a0ULL || rel >= 0xab92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab92b0 size=16 callers=0 calls=0
*/
void sub_ab92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab92b0ULL || rel >= 0xab92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab92c0 size=16 callers=0 calls=0
*/
void sub_ab92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab92c0ULL || rel >= 0xab92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab92d0 size=16 callers=0 calls=0
*/
void sub_ab92d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab92d0ULL || rel >= 0xab92e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab92e0 size=16 callers=0 calls=0
*/
void sub_ab92e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab92e0ULL || rel >= 0xab92f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab92f0 size=336 callers=3 calls=1
   calls: sub_e89590
*/
void sub_ab92f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab92f0ULL || rel >= 0xab9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9440 size=352 callers=7 calls=1
   calls: sub_8dfd80
*/
void sub_ab9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9440ULL || rel >= 0xab95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab95a0 size=32 callers=20 calls=0
*/
void sub_ab95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab95a0ULL || rel >= 0xab95c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab95c0 size=16 callers=3 calls=0
*/
void sub_ab95c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab95c0ULL || rel >= 0xab95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab95d0 size=48 callers=1 calls=0
*/
void sub_ab95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab95d0ULL || rel >= 0xab9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9600 size=48 callers=0 calls=0
*/
void sub_ab9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9600ULL || rel >= 0xab9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9630 size=336 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_ab9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9630ULL || rel >= 0xab9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9780 size=32 callers=4 calls=0
*/
void sub_ab9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9780ULL || rel >= 0xab97a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab97a0 size=16 callers=1 calls=0
*/
void sub_ab97a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab97a0ULL || rel >= 0xab97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab97b0 size=16 callers=2 calls=0
*/
void sub_ab97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab97b0ULL || rel >= 0xab97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab97c0 size=16 callers=10 calls=0
*/
void sub_ab97c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab97c0ULL || rel >= 0xab97d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab97d0 size=16 callers=32 calls=0
*/
void sub_ab97d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab97d0ULL || rel >= 0xab97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab97e0 size=16 callers=1 calls=0
*/
void sub_ab97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab97e0ULL || rel >= 0xab97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab97f0 size=16 callers=13 calls=0
*/
void sub_ab97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab97f0ULL || rel >= 0xab9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9800 size=144 callers=5 calls=0
*/
void sub_ab9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9800ULL || rel >= 0xab9890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9890 size=112 callers=2 calls=0
*/
void sub_ab9890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9890ULL || rel >= 0xab9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9900 size=96 callers=2 calls=0
*/
void sub_ab9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9900ULL || rel >= 0xab9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9960 size=64 callers=1 calls=0
*/
void sub_ab9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9960ULL || rel >= 0xab99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab99a0 size=48 callers=1 calls=0
*/
void sub_ab99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab99a0ULL || rel >= 0xab99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab99d0 size=1232 callers=5 calls=15
   calls: a_btl36_vs02, sound_attr, sub_1052c50, sub_10617e0, sub_1061810, sub_1061890, sub_136b4f0, sub_1c0, sub_7f4540, sub_7f4580, sub_7f4d70, sub_d7a8f0
   ... +3 more
   ref: NONE_NONE
*/
void NONE_NONE_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab99d0ULL || rel >= 0xab9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9ea0 size=32 callers=8 calls=0
*/
void sub_ab9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9ea0ULL || rel >= 0xab9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9ec0 size=64 callers=1 calls=0
*/
void sub_ab9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9ec0ULL || rel >= 0xab9f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9f00 size=128 callers=1 calls=0
*/
void sub_ab9f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9f00ULL || rel >= 0xab9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9f80 size=80 callers=4 calls=0
*/
void sub_ab9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9f80ULL || rel >= 0xab9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ab9fd0 size=304 callers=3 calls=2
   calls: sub_1047950, sub_abe100
*/
void sub_ab9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab9fd0ULL || rel >= 0xaba100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba100 size=352 callers=3 calls=1
   calls: sub_1047a00
*/
void sub_aba100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba100ULL || rel >= 0xaba260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba260 size=16 callers=6 calls=0
*/
void sub_aba260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba260ULL || rel >= 0xaba270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba270 size=16 callers=2 calls=0
*/
void sub_aba270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba270ULL || rel >= 0xaba280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba280 size=32 callers=1 calls=0
*/
void sub_aba280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba280ULL || rel >= 0xaba2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba2a0 size=32 callers=0 calls=0
*/
void sub_aba2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba2a0ULL || rel >= 0xaba2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba2c0 size=32 callers=0 calls=0
*/
void sub_aba2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba2c0ULL || rel >= 0xaba2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba2e0 size=16 callers=0 calls=0
*/
void sub_aba2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba2e0ULL || rel >= 0xaba2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba2f0 size=16 callers=0 calls=0
*/
void sub_aba2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba2f0ULL || rel >= 0xaba300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba300 size=48 callers=0 calls=0
*/
void sub_aba300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba300ULL || rel >= 0xaba330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba330 size=48 callers=0 calls=0
*/
void sub_aba330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba330ULL || rel >= 0xaba360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba360 size=96 callers=0 calls=1
   calls: sub_ab92f0
*/
void sub_aba360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba360ULL || rel >= 0xaba3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba3c0 size=688 callers=0 calls=1
   calls: sub_8e0ae0
*/
void sub_aba3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba3c0ULL || rel >= 0xaba670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba670 size=16 callers=4 calls=0
*/
void sub_aba670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba670ULL || rel >= 0xaba680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba680 size=64 callers=2 calls=0
*/
void sub_aba680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba680ULL || rel >= 0xaba6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba6c0 size=48 callers=3 calls=0
*/
void sub_aba6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba6c0ULL || rel >= 0xaba6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba6f0 size=16 callers=6 calls=0
*/
void sub_aba6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba6f0ULL || rel >= 0xaba700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba700 size=16 callers=2 calls=0
*/
void sub_aba700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba700ULL || rel >= 0xaba710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba710 size=16 callers=4 calls=0
*/
void sub_aba710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba710ULL || rel >= 0xaba720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba720 size=80 callers=2 calls=0
*/
void sub_aba720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba720ULL || rel >= 0xaba770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba770 size=48 callers=3 calls=0
*/
void sub_aba770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba770ULL || rel >= 0xaba7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba7a0 size=256 callers=0 calls=2
   calls: sub_15afe30, sub_ab92f0
*/
void sub_aba7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba7a0ULL || rel >= 0xaba8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00aba8a0 size=1344 callers=0 calls=4
   calls: sub_8e0ae0, sub_ac0e70, sub_ac1b10, sub_ac1db0
*/
void sub_aba8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaba8a0ULL || rel >= 0xabade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abade0 size=208 callers=8 calls=0
*/
void sub_abade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabade0ULL || rel >= 0xabaeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abaeb0 size=64 callers=5 calls=0
*/
void sub_abaeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabaeb0ULL || rel >= 0xabaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abaef0 size=80 callers=1 calls=0
*/
void sub_abaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabaef0ULL || rel >= 0xabaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abaf40 size=48 callers=4 calls=0
*/
void sub_abaf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabaf40ULL || rel >= 0xabaf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abaf70 size=16 callers=14 calls=0
*/
void sub_abaf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabaf70ULL || rel >= 0xabaf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abaf80 size=16 callers=14 calls=0
*/
void sub_abaf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabaf80ULL || rel >= 0xabaf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abaf90 size=96 callers=1 calls=0
*/
void sub_abaf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabaf90ULL || rel >= 0xabaff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abaff0 size=96 callers=1 calls=0
*/
void sub_abaff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabaff0ULL || rel >= 0xabb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb050 size=16 callers=5 calls=0
*/
void sub_abb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb050ULL || rel >= 0xabb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb060 size=16 callers=1 calls=0
*/
void sub_abb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb060ULL || rel >= 0xabb070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb070 size=16 callers=4 calls=0
*/
void sub_abb070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb070ULL || rel >= 0xabb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb080 size=16 callers=2 calls=0
*/
void sub_abb080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb080ULL || rel >= 0xabb090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb090 size=16 callers=4 calls=0
*/
void sub_abb090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb090ULL || rel >= 0xabb0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb0a0 size=16 callers=1 calls=0
*/
void sub_abb0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb0a0ULL || rel >= 0xabb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb0b0 size=16 callers=1 calls=0
*/
void sub_abb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb0b0ULL || rel >= 0xabb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb0c0 size=16 callers=1 calls=0
*/
void sub_abb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb0c0ULL || rel >= 0xabb0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb0d0 size=256 callers=0 calls=1
   calls: sub_ab92f0
*/
void sub_abb0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb0d0ULL || rel >= 0xabb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb1d0 size=1104 callers=0 calls=1
   calls: sub_ac0e70
*/
void sub_abb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb1d0ULL || rel >= 0xabb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb620 size=240 callers=6 calls=0
*/
void sub_abb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb620ULL || rel >= 0xabb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb710 size=112 callers=10 calls=0
*/
void sub_abb710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb710ULL || rel >= 0xabb780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb780 size=64 callers=20 calls=0
*/
void sub_abb780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb780ULL || rel >= 0xabb7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb7c0 size=16 callers=12 calls=0
*/
void sub_abb7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb7c0ULL || rel >= 0xabb7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb7d0 size=16 callers=16 calls=0
*/
void sub_abb7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb7d0ULL || rel >= 0xabb7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb7e0 size=16 callers=2 calls=0
*/
void sub_abb7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb7e0ULL || rel >= 0xabb7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb7f0 size=16 callers=2 calls=0
*/
void sub_abb7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb7f0ULL || rel >= 0xabb800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb800 size=240 callers=2 calls=0
*/
void sub_abb800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb800ULL || rel >= 0xabb8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb8f0 size=16 callers=2 calls=0
*/
void sub_abb8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb8f0ULL || rel >= 0xabb900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb900 size=16 callers=2 calls=0
*/
void sub_abb900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb900ULL || rel >= 0xabb910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abb910 size=336 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_abb910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabb910ULL || rel >= 0xabba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abba60 size=32 callers=1 calls=0
*/
void sub_abba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabba60ULL || rel >= 0xabba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abba80 size=288 callers=1 calls=1
   calls: sub_67b7e0
*/
void sub_abba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabba80ULL || rel >= 0xabbba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbba0 size=32 callers=0 calls=0
*/
void sub_abbba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbba0ULL || rel >= 0xabbbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbbc0 size=16 callers=2 calls=0
*/
void sub_abbbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbbc0ULL || rel >= 0xabbbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbbd0 size=224 callers=3 calls=0
*/
void sub_abbbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbbd0ULL || rel >= 0xabbcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbcb0 size=160 callers=1 calls=1
   calls: sub_abe1e0
*/
void sub_abbcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbcb0ULL || rel >= 0xabbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbd50 size=16 callers=3 calls=0
*/
void sub_abbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbd50ULL || rel >= 0xabbd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbd60 size=32 callers=1 calls=0
*/
void sub_abbd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbd60ULL || rel >= 0xabbd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbd80 size=16 callers=2 calls=0
*/
void sub_abbd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbd80ULL || rel >= 0xabbd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbd90 size=64 callers=1 calls=0
*/
void sub_abbd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbd90ULL || rel >= 0xabbdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbdd0 size=160 callers=1 calls=4
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50
*/
void sub_abbdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbdd0ULL || rel >= 0xabbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbe70 size=256 callers=1 calls=4
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50
*/
void sub_abbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbe70ULL || rel >= 0xabbf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abbf70 size=1136 callers=2 calls=7
   calls: sub_1310f00, sub_5e2350, sub_5fe6a0, sub_67b7e0, sub_abed80, sub_e76a20, sub_e81230
*/
void sub_abbf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabbf70ULL || rel >= 0xabc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abc3e0 size=128 callers=0 calls=0
*/
void sub_abc3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabc3e0ULL || rel >= 0xabc460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abc460 size=496 callers=0 calls=3
   calls: sub_abe330, sub_abe4f0, sub_abe740
*/
void sub_abc460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabc460ULL || rel >= 0xabc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abc650 size=16 callers=7 calls=0
*/
void sub_abc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabc650ULL || rel >= 0xabc660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abc660 size=32 callers=4 calls=0
*/
void sub_abc660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabc660ULL || rel >= 0xabc680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abc680 size=32 callers=4 calls=0
*/
void sub_abc680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabc680ULL || rel >= 0xabc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abc6a0 size=1328 callers=1 calls=9
   calls: sub_1052c50, sub_10617e0, sub_10619f0, sub_1311c60, sub_13149a0, sub_136b780, sub_67b990, sub_abe950, sub_b6fa70
*/
void sub_abc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabc6a0ULL || rel >= 0xabcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcbd0 size=80 callers=2 calls=0
*/
void sub_abcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcbd0ULL || rel >= 0xabcc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcc20 size=80 callers=2 calls=0
*/
void sub_abcc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcc20ULL || rel >= 0xabcc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcc70 size=80 callers=6 calls=0
*/
void sub_abcc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcc70ULL || rel >= 0xabccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abccc0 size=272 callers=8 calls=0
*/
void sub_abccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabccc0ULL || rel >= 0xabcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcdd0 size=16 callers=0 calls=0
*/
void sub_abcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcdd0ULL || rel >= 0xabcde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcde0 size=16 callers=0 calls=0
*/
void sub_abcde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcde0ULL || rel >= 0xabcdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcdf0 size=16 callers=0 calls=0
*/
void sub_abcdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcdf0ULL || rel >= 0xabce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abce00 size=80 callers=0 calls=0
*/
void sub_abce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabce00ULL || rel >= 0xabce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abce50 size=80 callers=0 calls=0
*/
void sub_abce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabce50ULL || rel >= 0xabcea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcea0 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abcea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcea0ULL || rel >= 0xabcf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcf10 size=16 callers=0 calls=0
*/
void sub_abcf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcf10ULL || rel >= 0xabcf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcf20 size=96 callers=0 calls=0
*/
void sub_abcf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcf20ULL || rel >= 0xabcf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcf80 size=96 callers=0 calls=0
*/
void sub_abcf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcf80ULL || rel >= 0xabcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abcfe0 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabcfe0ULL || rel >= 0xabd050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd050 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abd050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd050ULL || rel >= 0xabd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd0c0 size=96 callers=0 calls=0
*/
void sub_abd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd0c0ULL || rel >= 0xabd120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd120 size=96 callers=0 calls=0
*/
void sub_abd120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd120ULL || rel >= 0xabd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd180 size=144 callers=0 calls=0
*/
void sub_abd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd180ULL || rel >= 0xabd210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd210 size=144 callers=0 calls=0
*/
void sub_abd210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd210ULL || rel >= 0xabd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd2a0 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abd2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd2a0ULL || rel >= 0xabd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd310 size=16 callers=0 calls=0
*/
void sub_abd310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd310ULL || rel >= 0xabd320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd320 size=144 callers=0 calls=0
*/
void sub_abd320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd320ULL || rel >= 0xabd3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd3b0 size=144 callers=0 calls=0
*/
void sub_abd3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd3b0ULL || rel >= 0xabd440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd440 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abd440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd440ULL || rel >= 0xabd4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd4b0 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abd4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd4b0ULL || rel >= 0xabd520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd520 size=144 callers=0 calls=0
*/
void sub_abd520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd520ULL || rel >= 0xabd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd5b0 size=144 callers=0 calls=0
*/
void sub_abd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd5b0ULL || rel >= 0xabd640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd640 size=304 callers=0 calls=0
*/
void sub_abd640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd640ULL || rel >= 0xabd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd770 size=16 callers=0 calls=0
*/
void sub_abd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd770ULL || rel >= 0xabd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd780 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd780ULL || rel >= 0xabd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd7f0 size=16 callers=0 calls=0
*/
void sub_abd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd7f0ULL || rel >= 0xabd800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd800 size=16 callers=0 calls=0
*/
void sub_abd800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd800ULL || rel >= 0xabd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd810 size=16 callers=0 calls=0
*/
void sub_abd810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd810ULL || rel >= 0xabd820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd820 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abd820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd820ULL || rel >= 0xabd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd890 size=112 callers=0 calls=1
   calls: sub_ab8fb0
*/
void sub_abd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd890ULL || rel >= 0xabd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd900 size=16 callers=0 calls=0
*/
void sub_abd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd900ULL || rel >= 0xabd910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd910 size=16 callers=0 calls=0
*/
void sub_abd910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd910ULL || rel >= 0xabd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abd920 size=304 callers=0 calls=0
*/
void sub_abd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabd920ULL || rel >= 0xabda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abda50 size=16 callers=0 calls=0
*/
void sub_abda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabda50ULL || rel >= 0xabda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abda60 size=240 callers=0 calls=0
*/
void sub_abda60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabda60ULL || rel >= 0xabdb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdb50 size=16 callers=0 calls=0
*/
void sub_abdb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdb50ULL || rel >= 0xabdb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdb60 size=16 callers=0 calls=0
*/
void sub_abdb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdb60ULL || rel >= 0xabdb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdb70 size=16 callers=0 calls=0
*/
void sub_abdb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdb70ULL || rel >= 0xabdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdb80 size=16 callers=0 calls=0
*/
void sub_abdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdb80ULL || rel >= 0xabdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdb90 size=16 callers=0 calls=0
*/
void sub_abdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdb90ULL || rel >= 0xabdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdba0 size=16 callers=0 calls=0
*/
void sub_abdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdba0ULL || rel >= 0xabdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdbb0 size=16 callers=0 calls=0
*/
void sub_abdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdbb0ULL || rel >= 0xabdbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdbc0 size=112 callers=0 calls=0
*/
void sub_abdbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdbc0ULL || rel >= 0xabdc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdc30 size=16 callers=0 calls=0
*/
void sub_abdc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdc30ULL || rel >= 0xabdc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdc40 size=288 callers=0 calls=1
   calls: sub_15afe30
*/
void sub_abdc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdc40ULL || rel >= 0xabdd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdd60 size=576 callers=0 calls=0
*/
void sub_abdd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdd60ULL || rel >= 0xabdfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abdfa0 size=352 callers=0 calls=0
*/
void sub_abdfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabdfa0ULL || rel >= 0xabe100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abe100 size=224 callers=1 calls=1
   calls: sub_1047720
*/
void sub_abe100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabe100ULL || rel >= 0xabe1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abe1e0 size=336 callers=1 calls=0
*/
void sub_abe1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabe1e0ULL || rel >= 0xabe330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abe330 size=448 callers=1 calls=2
   calls: sub_5e2350, sub_6a4cc0
*/
void sub_abe330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabe330ULL || rel >= 0xabe4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abe4f0 size=592 callers=1 calls=2
   calls: sub_5e2350, sub_6a4cc0
*/
void sub_abe4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabe4f0ULL || rel >= 0xabe740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abe740 size=528 callers=1 calls=2
   calls: sub_5e2350, sub_6a4cc0
*/
void sub_abe740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabe740ULL || rel >= 0xabe950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abe950 size=608 callers=3 calls=1
   calls: sub_abebb0
*/
void sub_abe950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabe950ULL || rel >= 0xabebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abebb0 size=304 callers=1 calls=0
*/
void sub_abebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabebb0ULL || rel >= 0xabece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abece0 size=160 callers=0 calls=0
*/
void sub_abece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabece0ULL || rel >= 0xabed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abed80 size=96 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_abed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabed80ULL || rel >= 0xabede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abede0 size=208 callers=0 calls=0
*/
void sub_abede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabede0ULL || rel >= 0xabeeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abeeb0 size=208 callers=0 calls=0
*/
void sub_abeeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabeeb0ULL || rel >= 0xabef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abef80 size=208 callers=0 calls=0
*/
void sub_abef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabef80ULL || rel >= 0xabf050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf050 size=208 callers=0 calls=0
*/
void sub_abf050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf050ULL || rel >= 0xabf120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf120 size=208 callers=0 calls=0
*/
void sub_abf120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf120ULL || rel >= 0xabf1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf1f0 size=208 callers=0 calls=0
*/
void sub_abf1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf1f0ULL || rel >= 0xabf2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf2c0 size=16 callers=7 calls=0
*/
void sub_abf2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf2c0ULL || rel >= 0xabf2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf2d0 size=304 callers=8 calls=0
*/
void sub_abf2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf2d0ULL || rel >= 0xabf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf400 size=32 callers=6 calls=0
*/
void sub_abf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf400ULL || rel >= 0xabf420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf420 size=832 callers=6 calls=8
   calls: sub_14beec0, sub_14bf040, sub_14bf2f0, sub_14bf490, sub_14bf750, sub_14bfb70, sub_14bfbb0, sub_abf420
*/
void sub_abf420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf420ULL || rel >= 0xabf760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf760 size=240 callers=0 calls=0
*/
void sub_abf760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf760ULL || rel >= 0xabf850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf850 size=16 callers=0 calls=0
*/
void sub_abf850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf850ULL || rel >= 0xabf860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf860 size=16 callers=0 calls=0
*/
void sub_abf860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf860ULL || rel >= 0xabf870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf870 size=160 callers=0 calls=0
*/
void sub_abf870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf870ULL || rel >= 0xabf910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf910 size=96 callers=3 calls=0
*/
void sub_abf910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf910ULL || rel >= 0xabf970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf970 size=80 callers=2 calls=0
*/
void sub_abf970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf970ULL || rel >= 0xabf9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abf9c0 size=112 callers=6 calls=0
*/
void sub_abf9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabf9c0ULL || rel >= 0xabfa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abfa30 size=528 callers=2 calls=5
   calls: f_0123456789BCDFGHJKLMNPRTVWXY0123456789BCDFGHJKLMNPRTVW_2, sub_15bc1e0, sub_15bc310, sub_1650950, sub_6a0d90
*/
void sub_abfa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabfa30ULL || rel >= 0xabfc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abfc40 size=176 callers=1 calls=5
   calls: sub_15bc1e0, sub_15bc310, sub_162ff00, sub_16509a0, sub_6a0d90
*/
void sub_abfc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabfc40ULL || rel >= 0xabfcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abfcf0 size=208 callers=2 calls=2
   calls: sub_8dfba0, sub_abfdc0
*/
void sub_abfcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabfcf0ULL || rel >= 0xabfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00abfdc0 size=1088 callers=6 calls=12
   calls: sub_67bdb0, sub_67c120, sub_7c2280, sub_7c2af0, sub_8dfba0, sub_8e0250, sub_8e0730, sub_8e0960, sub_8e0ae0, sub_8e0b00, sub_8e0b20, sub_8e1490
*/
void sub_abfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabfdc0ULL || rel >= 0xac0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0200 size=432 callers=2 calls=10
   calls: sub_15bc310, sub_15bcc30, sub_67bdb0, sub_67c120, sub_67c910, sub_7c2280, sub_8dfba0, sub_8e0960, sub_abfa30, sub_abfdc0
*/
void sub_ac0200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0200ULL || rel >= 0xac03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac03b0 size=416 callers=1 calls=10
   calls: sub_15bc310, sub_15bcc30, sub_67bdb0, sub_67c120, sub_67c910, sub_7c2280, sub_8dfba0, sub_8e0960, sub_abfa30, sub_abfdc0
*/
void sub_ac03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac03b0ULL || rel >= 0xac0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0550 size=480 callers=2 calls=5
   calls: sub_67bdb0, sub_67c120, sub_76f6c0, sub_7c2280, sub_7c2af0
*/
void sub_ac0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0550ULL || rel >= 0xac0730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0730 size=1328 callers=2 calls=12
   calls: sub_67b7e0, sub_67bdb0, sub_67c120, sub_783bd0, sub_785320, sub_7c2af0, sub_8dfba0, sub_8dfd80, sub_8e0190, sub_8e0250, sub_8e0960, sub_ac0550
*/
void sub_ac0730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0730ULL || rel >= 0xac0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0c60 size=32 callers=6 calls=0
*/
void sub_ac0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0c60ULL || rel >= 0xac0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0c80 size=16 callers=4 calls=0
*/
void sub_ac0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0c80ULL || rel >= 0xac0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0c90 size=480 callers=2 calls=7
   calls: sub_8dfd80, sub_8e0250, sub_8e0ba0, sub_8e0c60, sub_eaa090, sub_eaa0a0, sub_eaa1e0
*/
void sub_ac0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0c90ULL || rel >= 0xac0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0e70 size=32 callers=9 calls=0
*/
void sub_ac0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0e70ULL || rel >= 0xac0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0e90 size=160 callers=2 calls=4
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50
*/
void sub_ac0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0e90ULL || rel >= 0xac0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0f30 size=160 callers=3 calls=4
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50
*/
void sub_ac0f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0f30ULL || rel >= 0xac0fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac0fd0 size=128 callers=1 calls=4
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50
*/
void sub_ac0fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac0fd0ULL || rel >= 0xac1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1050 size=512 callers=1 calls=7
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50, sub_8dfba0, sub_8dfd80, sub_8e0250
*/
void sub_ac1050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1050ULL || rel >= 0xac1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1250 size=672 callers=2 calls=7
   calls: InstanceTable_431, sub_15b7a70, sub_15b8140, sub_6a4d50, sub_8dfba0, sub_8dfd80, sub_8e0250
*/
void sub_ac1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1250ULL || rel >= 0xac14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac14f0 size=32 callers=5 calls=0
*/
void sub_ac14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac14f0ULL || rel >= 0xac1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1510 size=32 callers=3 calls=0
*/
void sub_ac1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1510ULL || rel >= 0xac1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1530 size=32 callers=3 calls=0
*/
void sub_ac1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1530ULL || rel >= 0xac1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1550 size=160 callers=0 calls=0
*/
void sub_ac1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1550ULL || rel >= 0xac15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac15f0 size=816 callers=1 calls=3
   calls: sub_15b9340, sub_15b9390, sub_5e2350
*/
void sub_ac15f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac15f0ULL || rel >= 0xac1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1920 size=80 callers=0 calls=0
*/
void sub_ac1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1920ULL || rel >= 0xac1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1970 size=80 callers=0 calls=0
*/
void sub_ac1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1970ULL || rel >= 0xac19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac19c0 size=80 callers=0 calls=0
*/
void sub_ac19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac19c0ULL || rel >= 0xac1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1a10 size=80 callers=0 calls=0
*/
void sub_ac1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1a10ULL || rel >= 0xac1a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1a60 size=80 callers=0 calls=0
*/
void sub_ac1a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1a60ULL || rel >= 0xac1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1ab0 size=80 callers=0 calls=0
*/
void sub_ac1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1ab0ULL || rel >= 0xac1b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1b00 size=16 callers=2 calls=0
*/
void sub_ac1b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1b00ULL || rel >= 0xac1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1b10 size=336 callers=15 calls=0
*/
void sub_ac1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1b10ULL || rel >= 0xac1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1c60 size=128 callers=4 calls=1
   calls: sub_ac1b10
*/
void sub_ac1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1c60ULL || rel >= 0xac1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1ce0 size=208 callers=10 calls=1
   calls: sub_ac1b10
*/
void sub_ac1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1ce0ULL || rel >= 0xac1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1db0 size=16 callers=10 calls=0
*/
void sub_ac1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1db0ULL || rel >= 0xac1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1dc0 size=240 callers=0 calls=0
*/
void sub_ac1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1dc0ULL || rel >= 0xac1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1eb0 size=16 callers=0 calls=0
*/
void sub_ac1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1eb0ULL || rel >= 0xac1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1ec0 size=16 callers=0 calls=0
*/
void sub_ac1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1ec0ULL || rel >= 0xac1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac1ed0 size=4656 callers=0 calls=28
   calls: strinput, sub_14cace0, sub_5cfad0, sub_78f150, sub_78f240, sub_79b250, sub_a7b850, sub_ac3100, sub_ac5c80, sub_ac6090, sub_ac64a0, sub_ac68b0
   ... +16 more
   ref: CommonOptionBar
   ref: common/btl_pokeselect.dat
   ref: ViewBtlSpotListTournament
   ref: ViewBtlSpotMenu
   ref: ViewBtlSpotDetailBtlcup2
   ref: ViewBtlSpotBtlcupFriend
   ref: common/btl_bgm_select.dat
   ref: ViewBtlSpotMsgWindow
*/
void ViewBtlSpotMenuRankmatch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac1ed0ULL || rel >= 0xac3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ac3100 size=400 callers=1 calls=3
   calls: sub_ac5b50, sub_afb530, sub_e7c160
*/
void sub_ac3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac3100ULL || rel >= 0xac3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

