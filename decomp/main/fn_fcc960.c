/* main functions 00fcc960..00fd8060 (126 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00fcc960 size=48 callers=0 calls=1
   calls: sub_fccf30
*/
void sub_fcc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc960ULL || rel >= 0xfcc990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc990 size=32 callers=1 calls=0
*/
void sub_fcc990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc990ULL || rel >= 0xfcc9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcc9b0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/net_bg/bin/net_bg_00_lyt.bin
*/
void net_bg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc9b0ULL || rel >= 0xfccac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccac0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_fccac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccac0ULL || rel >= 0xfccae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccae0 size=32 callers=1 calls=0
*/
void sub_fccae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccae0ULL || rel >= 0xfccb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccb00 size=320 callers=0 calls=0
*/
void sub_fccb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccb00ULL || rel >= 0xfccc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccc40 size=16 callers=0 calls=0
*/
void sub_fccc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccc40ULL || rel >= 0xfccc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccc50 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fccc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccc50ULL || rel >= 0xfcccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcccc0 size=32 callers=0 calls=0
*/
void sub_fcccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcccc0ULL || rel >= 0xfccce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccce0 size=16 callers=0 calls=0
*/
void sub_fccce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccce0ULL || rel >= 0xfcccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcccf0 size=16 callers=0 calls=0
*/
void sub_fcccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcccf0ULL || rel >= 0xfccd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccd00 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fccd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccd00ULL || rel >= 0xfccd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccd70 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fccd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccd70ULL || rel >= 0xfccde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccde0 size=16 callers=0 calls=0
*/
void sub_fccde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccde0ULL || rel >= 0xfccdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccdf0 size=16 callers=0 calls=0
*/
void sub_fccdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccdf0ULL || rel >= 0xfcce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcce00 size=304 callers=15 calls=0
*/
void sub_fcce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcce00ULL || rel >= 0xfccf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccf30 size=176 callers=5 calls=2
   calls: sub_14aad40, sub_e80580
*/
void sub_fccf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccf30ULL || rel >= 0xfccfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fccfe0 size=128 callers=10 calls=1
   calls: sub_14aad40
*/
void sub_fccfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccfe0ULL || rel >= 0xfcd060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd060 size=16 callers=2 calls=0
*/
void sub_fcd060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd060ULL || rel >= 0xfcd070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd070 size=32 callers=0 calls=0
*/
void sub_fcd070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd070ULL || rel >= 0xfcd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd090 size=32 callers=0 calls=0
*/
void sub_fcd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd090ULL || rel >= 0xfcd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd0b0 size=48 callers=1 calls=0
*/
void sub_fcd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd0b0ULL || rel >= 0xfcd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd0e0 size=176 callers=9 calls=1
   calls: sub_ad0c60
*/
void sub_fcd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd0e0ULL || rel >= 0xfcd190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd190 size=688 callers=2 calls=1
   calls: sub_14ea4f0
*/
void sub_fcd190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd190ULL || rel >= 0xfcd440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd440 size=16 callers=0 calls=0
*/
void sub_fcd440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd440ULL || rel >= 0xfcd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd450 size=304 callers=2 calls=2
   calls: sub_14ea9a0, sub_14eaa70
*/
void sub_fcd450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd450ULL || rel >= 0xfcd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd580 size=112 callers=6 calls=1
   calls: sub_14aad40
*/
void sub_fcd580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd580ULL || rel >= 0xfcd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd5f0 size=16 callers=0 calls=0
*/
void sub_fcd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd5f0ULL || rel >= 0xfcd600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd600 size=16 callers=0 calls=0
*/
void sub_fcd600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd600ULL || rel >= 0xfcd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd610 size=16 callers=0 calls=0
*/
void sub_fcd610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd610ULL || rel >= 0xfcd620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd620 size=16 callers=0 calls=0
*/
void sub_fcd620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd620ULL || rel >= 0xfcd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd630 size=16 callers=0 calls=0
*/
void sub_fcd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd630ULL || rel >= 0xfcd640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd640 size=16 callers=0 calls=0
*/
void sub_fcd640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd640ULL || rel >= 0xfcd650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd650 size=16 callers=0 calls=0
*/
void sub_fcd650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd650ULL || rel >= 0xfcd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd660 size=16 callers=0 calls=0
*/
void sub_fcd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd660ULL || rel >= 0xfcd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd670 size=16 callers=0 calls=0
*/
void sub_fcd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd670ULL || rel >= 0xfcd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd680 size=16 callers=0 calls=0
*/
void sub_fcd680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd680ULL || rel >= 0xfcd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd690 size=16 callers=0 calls=0
*/
void sub_fcd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd690ULL || rel >= 0xfcd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd6a0 size=160 callers=0 calls=3
   calls: sub_1500c40, sub_1502120, sub_5cfad0
*/
void sub_fcd6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd6a0ULL || rel >= 0xfcd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd740 size=16 callers=0 calls=0
*/
void sub_fcd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd740ULL || rel >= 0xfcd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd750 size=16 callers=0 calls=0
*/
void sub_fcd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd750ULL || rel >= 0xfcd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd760 size=16 callers=0 calls=0
*/
void sub_fcd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd760ULL || rel >= 0xfcd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcd770 size=1936 callers=0 calls=11
   calls: grid_VSSorting, pane_L_netbtl_player__02d_T_netbtl_player_02, sub_14ba7b0, sub_14e1a00, sub_67b990, sub_8f3180, sub_e83fe0, sub_e840a0, sub_fccf30, sub_fccfe0, sub_fcd580
   ref: grid_VSSorting
   ref: pane_N_single_00
   ref: pane_N_multi_00
   ref: pane_N_multi_teamselect_00
*/
void pane_N_multi_teamselect_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd770ULL || rel >= 0xfcdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcdf00 size=544 callers=3 calls=2
   calls: sub_e840a0, sub_fcd580
   ref: grid_VSSorting
*/
void grid_VSSorting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcdf00ULL || rel >= 0xfce120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce120 size=176 callers=2 calls=3
   calls: sub_14e1a00, sub_e83fe0, sub_e840a0
   ref: grid_VSSorting
*/
void grid_VSSorting_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce120ULL || rel >= 0xfce1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce1d0 size=32 callers=1 calls=0
*/
void sub_fce1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce1d0ULL || rel >= 0xfce1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce1f0 size=32 callers=3 calls=1
   calls: sub_e840a0
   ref: grid_VSSorting
*/
void grid_VSSorting_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce1f0ULL || rel >= 0xfce210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce210 size=576 callers=1 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83b20
*/
void sub_fce210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce210ULL || rel >= 0xfce450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce450 size=496 callers=1 calls=5
   calls: sub_14ab0c0, sub_14ab440, sub_14e6550, sub_e840a0, sub_fce6b0
   ref: grid_VSSorting
*/
void grid_VSSorting_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce450ULL || rel >= 0xfce640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce640 size=112 callers=8 calls=0
*/
void sub_fce640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce640ULL || rel >= 0xfce6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce6b0 size=480 callers=7 calls=6
   calls: sub_1311c60, sub_13133a0, sub_67bdb0, sub_67be60, sub_67d450, sub_e83b20
*/
void sub_fce6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce6b0ULL || rel >= 0xfce890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce890 size=304 callers=6 calls=6
   calls: sub_1311c60, sub_1314a80, sub_67bdb0, sub_67be60, sub_67d450, sub_e83b20
*/
void sub_fce890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce890ULL || rel >= 0xfce9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce9c0 size=16 callers=6 calls=0
*/
void sub_fce9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce9c0ULL || rel >= 0xfce9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce9d0 size=16 callers=4 calls=0
*/
void sub_fce9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce9d0ULL || rel >= 0xfce9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fce9e0 size=224 callers=3 calls=6
   calls: sub_1311c60, sub_1314a80, sub_67bdb0, sub_67be60, sub_67d450, sub_e83b20
*/
void sub_fce9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce9e0ULL || rel >= 0xfceac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fceac0 size=304 callers=1 calls=0
*/
void sub_fceac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfceac0ULL || rel >= 0xfcebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcebf0 size=144 callers=6 calls=0
*/
void sub_fcebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcebf0ULL || rel >= 0xfcec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcec80 size=32 callers=0 calls=0
*/
void sub_fcec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcec80ULL || rel >= 0xfceca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fceca0 size=480 callers=0 calls=2
   calls: sub_fcd0e0, sub_fcd190
*/
void sub_fceca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfceca0ULL || rel >= 0xfcee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcee80 size=96 callers=1 calls=2
   calls: sub_e840a0, sub_fcd580
   ref: grid_VSSorting
*/
void grid_VSSorting_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcee80ULL || rel >= 0xfceee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fceee0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/net_btl/bin/netbtl_top_00_lyt.bin
   ref: bin/appli/net_btl/bin/uikit_netbtl_top_00_lyt.bin
*/
void uikit_netbtl_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfceee0ULL || rel >= 0xfcf0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf0c0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_fcf0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf0c0ULL || rel >= 0xfcf0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf0e0 size=32 callers=2 calls=0
*/
void sub_fcf0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf0e0ULL || rel >= 0xfcf100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf100 size=208 callers=0 calls=0
*/
void sub_fcf100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf100ULL || rel >= 0xfcf1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf1d0 size=16 callers=0 calls=0
*/
void sub_fcf1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf1d0ULL || rel >= 0xfcf1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf1e0 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fcf1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf1e0ULL || rel >= 0xfcf250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf250 size=16 callers=0 calls=0
*/
void sub_fcf250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf250ULL || rel >= 0xfcf260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf260 size=16 callers=0 calls=0
*/
void sub_fcf260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf260ULL || rel >= 0xfcf270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf270 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fcf270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf270ULL || rel >= 0xfcf2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf2e0 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fcf2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf2e0ULL || rel >= 0xfcf350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf350 size=16 callers=0 calls=0
*/
void sub_fcf350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf350ULL || rel >= 0xfcf360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf360 size=16 callers=0 calls=0
*/
void sub_fcf360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf360ULL || rel >= 0xfcf370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf370 size=624 callers=1 calls=2
   calls: sub_5e2350, sub_fccfe0
   ref: pane_L_netbtl_player_%02d_T_netbtl_player_02
   ref: pane_L_netbtl_player_%02d_P_netbtl_player_icon_00
   ref: pane_L_netbtl_player_%02d_P_netbtl_player_icon_01
   ref: pane_L_netbtl_player_%02d_T_netbtl_player_00
   ref: pane_L_netbtl_player_%02d_N_netbtl_player_state_00
   ref: pane_L_netbtl_player_%02d_T_netbtl_player_01
   ref: pane_L_netbtl_player_%02d_N_netbtl_player_state_01
*/
void pane_L_netbtl_player__02d_T_netbtl_player_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf370ULL || rel >= 0xfcf5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf5e0 size=80 callers=0 calls=0
*/
void sub_fcf5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf5e0ULL || rel >= 0xfcf630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf630 size=240 callers=0 calls=0
*/
void sub_fcf630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf630ULL || rel >= 0xfcf720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf720 size=80 callers=0 calls=0
*/
void sub_fcf720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf720ULL || rel >= 0xfcf770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf770 size=80 callers=0 calls=0
*/
void sub_fcf770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf770ULL || rel >= 0xfcf7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf7c0 size=16 callers=0 calls=0
*/
void sub_fcf7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf7c0ULL || rel >= 0xfcf7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf7d0 size=16 callers=0 calls=0
*/
void sub_fcf7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf7d0ULL || rel >= 0xfcf7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf7e0 size=80 callers=0 calls=0
*/
void sub_fcf7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf7e0ULL || rel >= 0xfcf830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf830 size=80 callers=0 calls=0
*/
void sub_fcf830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf830ULL || rel >= 0xfcf880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf880 size=16 callers=0 calls=0
*/
void sub_fcf880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf880ULL || rel >= 0xfcf890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf890 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fcf890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf890ULL || rel >= 0xfcf8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf8d0 size=32 callers=0 calls=0
*/
void sub_fcf8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf8d0ULL || rel >= 0xfcf8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf8f0 size=16 callers=0 calls=0
*/
void sub_fcf8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf8f0ULL || rel >= 0xfcf900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf900 size=16 callers=0 calls=0
*/
void sub_fcf900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf900ULL || rel >= 0xfcf910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf910 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fcf910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf910ULL || rel >= 0xfcf970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf970 size=16 callers=0 calls=0
*/
void sub_fcf970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf970ULL || rel >= 0xfcf980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf980 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fcf980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf980ULL || rel >= 0xfcf9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf9c0 size=32 callers=0 calls=0
*/
void sub_fcf9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf9c0ULL || rel >= 0xfcf9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf9e0 size=16 callers=0 calls=0
*/
void sub_fcf9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf9e0ULL || rel >= 0xfcf9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcf9f0 size=16 callers=0 calls=0
*/
void sub_fcf9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf9f0ULL || rel >= 0xfcfa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfa00 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fcfa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfa00ULL || rel >= 0xfcfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfa60 size=16 callers=0 calls=0
*/
void sub_fcfa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfa60ULL || rel >= 0xfcfa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfa70 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fcfa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfa70ULL || rel >= 0xfcfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfab0 size=32 callers=0 calls=0
*/
void sub_fcfab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfab0ULL || rel >= 0xfcfad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfad0 size=16 callers=0 calls=0
*/
void sub_fcfad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfad0ULL || rel >= 0xfcfae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfae0 size=16 callers=0 calls=0
*/
void sub_fcfae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfae0ULL || rel >= 0xfcfaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfaf0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fcfaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfaf0ULL || rel >= 0xfcfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfb50 size=16 callers=0 calls=0
*/
void sub_fcfb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfb50ULL || rel >= 0xfcfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfb60 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fcfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfb60ULL || rel >= 0xfcfba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfba0 size=32 callers=0 calls=0
*/
void sub_fcfba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfba0ULL || rel >= 0xfcfbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfbc0 size=16 callers=0 calls=0
*/
void sub_fcfbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfbc0ULL || rel >= 0xfcfbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfbd0 size=16 callers=0 calls=0
*/
void sub_fcfbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfbd0ULL || rel >= 0xfcfbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfbe0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fcfbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfbe0ULL || rel >= 0xfcfc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfc40 size=16 callers=0 calls=0
*/
void sub_fcfc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfc40ULL || rel >= 0xfcfc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfc50 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fcfc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfc50ULL || rel >= 0xfcfc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfc90 size=32 callers=0 calls=0
*/
void sub_fcfc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfc90ULL || rel >= 0xfcfcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfcb0 size=16 callers=0 calls=0
*/
void sub_fcfcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfcb0ULL || rel >= 0xfcfcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfcc0 size=16 callers=0 calls=0
*/
void sub_fcfcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfcc0ULL || rel >= 0xfcfcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfcd0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fcfcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfcd0ULL || rel >= 0xfcfd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfd30 size=16 callers=0 calls=0
*/
void sub_fcfd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfd30ULL || rel >= 0xfcfd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfd40 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fcfd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfd40ULL || rel >= 0xfcfd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfd80 size=32 callers=0 calls=0
*/
void sub_fcfd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfd80ULL || rel >= 0xfcfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfda0 size=16 callers=0 calls=0
*/
void sub_fcfda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfda0ULL || rel >= 0xfcfdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfdb0 size=16 callers=0 calls=0
*/
void sub_fcfdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfdb0ULL || rel >= 0xfcfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfdc0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fcfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfdc0ULL || rel >= 0xfcfe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfe20 size=192 callers=0 calls=2
   calls: sub_fccf30, sub_fccfe0
   ref: pane_N_maintitle_00
   ref: pane_N_subtitle_00
*/
void pane_N_maintitle_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfe20ULL || rel >= 0xfcfee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfee0 size=32 callers=0 calls=0
*/
void sub_fcfee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfee0ULL || rel >= 0xfcff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcff00 size=32 callers=1 calls=0
*/
void sub_fcff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcff00ULL || rel >= 0xfcff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcff20 size=32 callers=0 calls=0
*/
void sub_fcff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcff20ULL || rel >= 0xfcff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcff40 size=176 callers=3 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_net_title_00
*/
void pane_T_net_title_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcff40ULL || rel >= 0xfcfff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fcfff0 size=272 callers=1 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_net_title_01
*/
void pane_T_net_title_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcfff0ULL || rel >= 0xfd0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0100 size=656 callers=1 calls=6
   calls: sub_1311c60, sub_13133a0, sub_67bdb0, sub_67be60, sub_67d450, sub_e83ac0
   ref: pane_T_net_title_01
*/
void pane_T_net_title_01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0100ULL || rel >= 0xfd0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0390 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/net_title/bin/net_title_00_lyt.bin
*/
void net_title_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0390ULL || rel >= 0xfd04a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd04a0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_fd04a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd04a0ULL || rel >= 0xfd04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd04c0 size=16 callers=1 calls=0
*/
void sub_fd04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd04c0ULL || rel >= 0xfd04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd04d0 size=48 callers=0 calls=0
*/
void sub_fd04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd04d0ULL || rel >= 0xfd0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0500 size=96 callers=0 calls=0
*/
void sub_fd0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0500ULL || rel >= 0xfd0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0560 size=96 callers=0 calls=0
*/
void sub_fd0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0560ULL || rel >= 0xfd05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd05c0 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd05c0ULL || rel >= 0xfd0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0630 size=96 callers=0 calls=0
*/
void sub_fd0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0630ULL || rel >= 0xfd0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0690 size=96 callers=0 calls=0
*/
void sub_fd0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0690ULL || rel >= 0xfd06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd06f0 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd06f0ULL || rel >= 0xfd0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0760 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0760ULL || rel >= 0xfd07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd07d0 size=96 callers=0 calls=0
*/
void sub_fd07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd07d0ULL || rel >= 0xfd0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0830 size=96 callers=0 calls=0
*/
void sub_fd0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0830ULL || rel >= 0xfd0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0890 size=48 callers=0 calls=1
   calls: sub_fccf30
*/
void sub_fd0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0890ULL || rel >= 0xfd08c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd08c0 size=32 callers=1 calls=0
*/
void sub_fd08c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd08c0ULL || rel >= 0xfd08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd08e0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/net_btl/bin/netbtl_top_finout_00_lyt.bin
*/
void netbtl_top_finout_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd08e0ULL || rel >= 0xfd09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd09f0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_fd09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd09f0ULL || rel >= 0xfd0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0a10 size=32 callers=1 calls=0
*/
void sub_fd0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0a10ULL || rel >= 0xfd0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0a30 size=16 callers=0 calls=0
*/
void sub_fd0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0a30ULL || rel >= 0xfd0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0a40 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0a40ULL || rel >= 0xfd0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0ab0 size=16 callers=0 calls=0
*/
void sub_fd0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0ab0ULL || rel >= 0xfd0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0ac0 size=16 callers=0 calls=0
*/
void sub_fd0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0ac0ULL || rel >= 0xfd0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0ad0 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0ad0ULL || rel >= 0xfd0b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0b40 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd0b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0b40ULL || rel >= 0xfd0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0bb0 size=16 callers=0 calls=0
*/
void sub_fd0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0bb0ULL || rel >= 0xfd0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0bc0 size=16 callers=0 calls=0
*/
void sub_fd0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0bc0ULL || rel >= 0xfd0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0bd0 size=656 callers=0 calls=8
   calls: sub_14e1b40, sub_67b990, sub_e83d70, sub_e840a0, sub_fccf30, sub_fccfe0, sub_fcd580, sub_fd0e60
   ref: pane_A_alignment_00
   ref: button_02
   ref: grid_button
   ref: button_01
*/
void pane_A_alignment_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0bd0ULL || rel >= 0xfd0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd0e60 size=1888 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_fd0e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd0e60ULL || rel >= 0xfd15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd15c0 size=48 callers=1 calls=1
   calls: sub_fcd580
*/
void sub_fd15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd15c0ULL || rel >= 0xfd15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd15f0 size=1264 callers=1 calls=5
   calls: sub_14ab0c0, sub_14ab440, sub_8f19b0, sub_e83c60, sub_ec8f00
*/
void sub_fd15f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd15f0ULL || rel >= 0xfd1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd1ae0 size=144 callers=0 calls=2
   calls: sub_14e1a30, sub_14e61e0
*/
void sub_fd1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd1ae0ULL || rel >= 0xfd1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd1b70 size=208 callers=1 calls=3
   calls: sub_14e1a00, sub_14e62c0, sub_14e6d90
*/
void sub_fd1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd1b70ULL || rel >= 0xfd1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd1c40 size=2576 callers=1 calls=5
   calls: sub_1311c60, sub_1315b90, sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_select_06
   ref: pane_T_select_01
   ref: pane_T_select_02
   ref: pane_T_select_04
   ref: pane_T_select_08
*/
void pane_T_select_08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd1c40ULL || rel >= 0xfd2650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2650 size=544 callers=1 calls=6
   calls: sub_1311c60, sub_1313430, sub_67bdb0, sub_67be60, sub_67d450, sub_e83ac0
   ref: pane_L_select_detail_00_T_netbtl_b_d_03
*/
void pane_L_select_detail_00_T_netbtl_b_d_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2650ULL || rel >= 0xfd2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2870 size=16 callers=2 calls=0
*/
void sub_fd2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2870ULL || rel >= 0xfd2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2880 size=48 callers=1 calls=1
   calls: sub_14e6550
*/
void sub_fd2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2880ULL || rel >= 0xfd28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd28b0 size=48 callers=1 calls=1
   calls: sub_fcd580
*/
void sub_fd28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd28b0ULL || rel >= 0xfd28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd28e0 size=656 callers=0 calls=12
   calls: sub_14ab0c0, sub_14e2410, sub_14e6510, sub_14e6d50, sub_1500c40, sub_1502120, sub_5cfad0, sub_8f19b0, sub_e83e60, sub_ec8f00, sub_ec9400, sub_ec9430
*/
void sub_fd28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd28e0ULL || rel >= 0xfd2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2b70 size=32 callers=0 calls=0
*/
void sub_fd2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2b70ULL || rel >= 0xfd2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2b90 size=32 callers=1 calls=0
*/
void sub_fd2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2b90ULL || rel >= 0xfd2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2bb0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/net_btl/bin/uikit_netbtl_select_00_lyt.bin
   ref: bin/appli/net_btl/bin/netbtl_select_00_lyt.bin
*/
void uikit_netbtl_select_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2bb0ULL || rel >= 0xfd2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2d90 size=272 callers=2 calls=3
   calls: sub_14ea9e0, sub_67d450, sub_fcd0b0
*/
void sub_fd2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2d90ULL || rel >= 0xfd2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2ea0 size=256 callers=0 calls=2
   calls: sub_fcd0e0, sub_fcd190
*/
void sub_fd2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2ea0ULL || rel >= 0xfd2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2fa0 size=32 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_fd2fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2fa0ULL || rel >= 0xfd2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2fc0 size=32 callers=2 calls=0
*/
void sub_fd2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2fc0ULL || rel >= 0xfd2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd2fe0 size=192 callers=0 calls=0
*/
void sub_fd2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd2fe0ULL || rel >= 0xfd30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd30a0 size=192 callers=0 calls=0
*/
void sub_fd30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd30a0ULL || rel >= 0xfd3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3160 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3160ULL || rel >= 0xfd31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd31d0 size=192 callers=0 calls=0
*/
void sub_fd31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd31d0ULL || rel >= 0xfd3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3290 size=192 callers=0 calls=0
*/
void sub_fd3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3290ULL || rel >= 0xfd3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3350 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3350ULL || rel >= 0xfd33c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd33c0 size=112 callers=0 calls=1
   calls: sub_fcce00
*/
void sub_fd33c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd33c0ULL || rel >= 0xfd3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3430 size=192 callers=0 calls=0
*/
void sub_fd3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3430ULL || rel >= 0xfd34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd34f0 size=192 callers=0 calls=0
*/
void sub_fd34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd34f0ULL || rel >= 0xfd35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd35b0 size=32 callers=0 calls=0
*/
void sub_fd35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd35b0ULL || rel >= 0xfd35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd35d0 size=16 callers=0 calls=0
*/
void sub_fd35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd35d0ULL || rel >= 0xfd35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd35e0 size=16 callers=0 calls=0
*/
void sub_fd35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd35e0ULL || rel >= 0xfd35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd35f0 size=16 callers=0 calls=0
*/
void sub_fd35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd35f0ULL || rel >= 0xfd3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3600 size=32 callers=0 calls=0
*/
void sub_fd3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3600ULL || rel >= 0xfd3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3620 size=16 callers=0 calls=0
*/
void sub_fd3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3620ULL || rel >= 0xfd3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3630 size=16 callers=0 calls=0
*/
void sub_fd3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3630ULL || rel >= 0xfd3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3640 size=16 callers=0 calls=0
*/
void sub_fd3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3640ULL || rel >= 0xfd3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3650 size=16 callers=0 calls=0
*/
void sub_fd3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3650ULL || rel >= 0xfd3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3660 size=16 callers=0 calls=0
*/
void sub_fd3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3660ULL || rel >= 0xfd3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3670 size=16 callers=0 calls=0
*/
void sub_fd3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3670ULL || rel >= 0xfd3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3680 size=16 callers=0 calls=0
*/
void sub_fd3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3680ULL || rel >= 0xfd3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3690 size=16 callers=0 calls=0
*/
void sub_fd3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3690ULL || rel >= 0xfd36a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd36a0 size=16 callers=0 calls=0
*/
void sub_fd36a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd36a0ULL || rel >= 0xfd36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd36b0 size=16 callers=0 calls=0
*/
void sub_fd36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd36b0ULL || rel >= 0xfd36c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd36c0 size=16 callers=0 calls=0
*/
void sub_fd36c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd36c0ULL || rel >= 0xfd36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd36d0 size=16 callers=0 calls=0
*/
void sub_fd36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd36d0ULL || rel >= 0xfd36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd36e0 size=16 callers=0 calls=0
*/
void sub_fd36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd36e0ULL || rel >= 0xfd36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd36f0 size=16 callers=0 calls=0
*/
void sub_fd36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd36f0ULL || rel >= 0xfd3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3700 size=16 callers=0 calls=0
*/
void sub_fd3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3700ULL || rel >= 0xfd3710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3710 size=16 callers=0 calls=0
*/
void sub_fd3710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3710ULL || rel >= 0xfd3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3720 size=16 callers=0 calls=0
*/
void sub_fd3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3720ULL || rel >= 0xfd3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3730 size=16 callers=0 calls=0
*/
void sub_fd3730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3730ULL || rel >= 0xfd3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3740 size=16 callers=0 calls=0
*/
void sub_fd3740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3740ULL || rel >= 0xfd3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3750 size=16 callers=0 calls=0
*/
void sub_fd3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3750ULL || rel >= 0xfd3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3760 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd3760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3760ULL || rel >= 0xfd37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd37a0 size=32 callers=0 calls=0
*/
void sub_fd37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd37a0ULL || rel >= 0xfd37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd37c0 size=16 callers=0 calls=0
*/
void sub_fd37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd37c0ULL || rel >= 0xfd37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd37d0 size=16 callers=0 calls=0
*/
void sub_fd37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd37d0ULL || rel >= 0xfd37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd37e0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fd37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd37e0ULL || rel >= 0xfd3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3840 size=16 callers=0 calls=0
*/
void sub_fd3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3840ULL || rel >= 0xfd3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3850 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3850ULL || rel >= 0xfd3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3890 size=32 callers=0 calls=0
*/
void sub_fd3890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3890ULL || rel >= 0xfd38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd38b0 size=16 callers=0 calls=0
*/
void sub_fd38b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd38b0ULL || rel >= 0xfd38c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd38c0 size=16 callers=0 calls=0
*/
void sub_fd38c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd38c0ULL || rel >= 0xfd38d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd38d0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fd38d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd38d0ULL || rel >= 0xfd3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3930 size=16 callers=0 calls=0
*/
void sub_fd3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3930ULL || rel >= 0xfd3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3940 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3940ULL || rel >= 0xfd3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3980 size=32 callers=0 calls=0
*/
void sub_fd3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3980ULL || rel >= 0xfd39a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd39a0 size=16 callers=0 calls=0
*/
void sub_fd39a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd39a0ULL || rel >= 0xfd39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd39b0 size=16 callers=0 calls=0
*/
void sub_fd39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd39b0ULL || rel >= 0xfd39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd39c0 size=96 callers=0 calls=1
   calls: sub_67d450
*/
void sub_fd39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd39c0ULL || rel >= 0xfd3a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3a20 size=1024 callers=0 calls=3
   calls: sub_67b990, sub_93c570, sub_eb7e10
*/
void sub_fd3a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3a20ULL || rel >= 0xfd3e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3e20 size=16 callers=2 calls=0
*/
void sub_fd3e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3e20ULL || rel >= 0xfd3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd3e30 size=1376 callers=9 calls=10
   calls: sub_1311c60, sub_13133a0, sub_1314a80, sub_1315b90, sub_67b990, sub_67bdb0, sub_67be60, sub_67d450, sub_ae4640, sub_fd6250
*/
void sub_fd3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd3e30ULL || rel >= 0xfd4390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd4390 size=48 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_fd4390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd4390ULL || rel >= 0xfd43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd43c0 size=16 callers=1 calls=0
*/
void sub_fd43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd43c0ULL || rel >= 0xfd43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd43d0 size=512 callers=1 calls=6
   calls: sub_eb7ef0, sub_eb8930, sub_eb8a30, sub_eb8c60, sub_eb8e80, sub_eb8ea0
*/
void sub_fd43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd43d0ULL || rel >= 0xfd45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd45d0 size=288 callers=0 calls=9
   calls: sub_14e4140, sub_1502120, sub_5cfad0, sub_e807d0, sub_ea4760, sub_eb8a80, sub_eb8b90, sub_fd43d0, sub_fd6250
*/
void sub_fd45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd45d0ULL || rel >= 0xfd46f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd46f0 size=64 callers=1 calls=1
   calls: sub_14a92b0
*/
void sub_fd46f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd46f0ULL || rel >= 0xfd4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd4730 size=64 callers=1 calls=1
   calls: sub_eb8a30
*/
void sub_fd4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd4730ULL || rel >= 0xfd4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd4770 size=16 callers=1 calls=0
*/
void sub_fd4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd4770ULL || rel >= 0xfd4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd4780 size=1296 callers=1 calls=4
   calls: sub_67be60, sub_fc90a0, sub_fd3e30, sub_fd6250
   ref: msg_ui_netbtl_message_00
   ref: msg_ui_netbtl_message_02
   ref: msg_ui_netbtl_message_25
   ref: msg_ui_netbtl_message_26
   ref: msg_ui_netbtl_message_28
   ref: msg_ui_netbtl_message_24
   ref: msg_ui_netbtl_message_36
   ref: msg_ui_netbtl_message_20
*/
void msg_ui_netbtl_nickname_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd4780ULL || rel >= 0xfd4c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd4c90 size=288 callers=0 calls=3
   calls: sub_67d450, sub_ae4640, sub_fd3e30
   ref: msg_ui_netbtl_message_01
*/
void msg_ui_netbtl_message_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd4c90ULL || rel >= 0xfd4db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd4db0 size=480 callers=0 calls=3
   calls: sub_67d450, sub_ae4640, sub_fd3e30
   ref: msg_ui_netbtl_message_06
*/
void msg_ui_netbtl_message_06(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd4db0ULL || rel >= 0xfd4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd4f90 size=288 callers=0 calls=3
   calls: sub_67d450, sub_ae4640, sub_fd3e30
   ref: msg_ui_netbtl_message_30
*/
void msg_ui_netbtl_message_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd4f90ULL || rel >= 0xfd50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd50b0 size=288 callers=0 calls=3
   calls: sub_67d450, sub_ae4640, sub_fd3e30
   ref: msg_ui_netbtl_message_15
*/
void msg_ui_netbtl_message_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd50b0ULL || rel >= 0xfd51d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd51d0 size=1344 callers=0 calls=7
   calls: sub_1311c60, sub_1314a80, sub_1315b90, sub_67be60, sub_67d450, sub_ae4640, sub_fd3e30
*/
void sub_fd51d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd51d0ULL || rel >= 0xfd5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd5710 size=416 callers=0 calls=3
   calls: sub_67d450, sub_ae4640, sub_fd3e30
   ref: msg_ui_netbtl_message_23
*/
void msg_ui_netbtl_message_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5710ULL || rel >= 0xfd58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd58b0 size=288 callers=0 calls=3
   calls: sub_67d450, sub_ae4640, sub_fd3e30
   ref: msg_ui_netbtl_message_38
*/
void msg_ui_netbtl_message_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd58b0ULL || rel >= 0xfd59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd59d0 size=1072 callers=0 calls=1
   calls: sub_fd6060
*/
void sub_fd59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd59d0ULL || rel >= 0xfd5e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd5e00 size=16 callers=0 calls=0
*/
void sub_fd5e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5e00ULL || rel >= 0xfd5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd5e10 size=176 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_fd5e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5e10ULL || rel >= 0xfd5ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd5ec0 size=16 callers=0 calls=0
*/
void sub_fd5ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5ec0ULL || rel >= 0xfd5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd5ed0 size=16 callers=0 calls=0
*/
void sub_fd5ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5ed0ULL || rel >= 0xfd5ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd5ee0 size=176 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_fd5ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5ee0ULL || rel >= 0xfd5f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd5f90 size=176 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_fd5f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5f90ULL || rel >= 0xfd6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6040 size=16 callers=0 calls=0
*/
void sub_fd6040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6040ULL || rel >= 0xfd6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6050 size=16 callers=0 calls=0
*/
void sub_fd6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6050ULL || rel >= 0xfd6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6060 size=496 callers=1 calls=0
*/
void sub_fd6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6060ULL || rel >= 0xfd6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6250 size=352 callers=5 calls=0
*/
void sub_fd6250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6250ULL || rel >= 0xfd63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd63b0 size=16 callers=0 calls=0
*/
void sub_fd63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd63b0ULL || rel >= 0xfd63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd63c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd63c0ULL || rel >= 0xfd6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6400 size=32 callers=0 calls=0
*/
void sub_fd6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6400ULL || rel >= 0xfd6420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6420 size=16 callers=0 calls=0
*/
void sub_fd6420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6420ULL || rel >= 0xfd6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6430 size=16 callers=0 calls=0
*/
void sub_fd6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6430ULL || rel >= 0xfd6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6440 size=64 callers=0 calls=0
*/
void sub_fd6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6440ULL || rel >= 0xfd6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6480 size=16 callers=0 calls=0
*/
void sub_fd6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6480ULL || rel >= 0xfd6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6490 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6490ULL || rel >= 0xfd64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd64d0 size=32 callers=0 calls=0
*/
void sub_fd64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd64d0ULL || rel >= 0xfd64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd64f0 size=16 callers=0 calls=0
*/
void sub_fd64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd64f0ULL || rel >= 0xfd6500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6500 size=16 callers=0 calls=0
*/
void sub_fd6500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6500ULL || rel >= 0xfd6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6510 size=16 callers=0 calls=0
*/
void sub_fd6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6510ULL || rel >= 0xfd6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6520 size=16 callers=0 calls=0
*/
void sub_fd6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6520ULL || rel >= 0xfd6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6530 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6530ULL || rel >= 0xfd6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6570 size=32 callers=0 calls=0
*/
void sub_fd6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6570ULL || rel >= 0xfd6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6590 size=16 callers=0 calls=0
*/
void sub_fd6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6590ULL || rel >= 0xfd65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd65a0 size=16 callers=0 calls=0
*/
void sub_fd65a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd65a0ULL || rel >= 0xfd65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd65b0 size=16 callers=0 calls=0
*/
void sub_fd65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd65b0ULL || rel >= 0xfd65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd65c0 size=16 callers=0 calls=0
*/
void sub_fd65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd65c0ULL || rel >= 0xfd65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd65d0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd65d0ULL || rel >= 0xfd6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6610 size=32 callers=0 calls=0
*/
void sub_fd6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6610ULL || rel >= 0xfd6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6630 size=16 callers=0 calls=0
*/
void sub_fd6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6630ULL || rel >= 0xfd6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6640 size=16 callers=0 calls=0
*/
void sub_fd6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6640ULL || rel >= 0xfd6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6650 size=16 callers=0 calls=0
*/
void sub_fd6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6650ULL || rel >= 0xfd6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6660 size=16 callers=0 calls=0
*/
void sub_fd6660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6660ULL || rel >= 0xfd6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6670 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6670ULL || rel >= 0xfd66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd66b0 size=32 callers=0 calls=0
*/
void sub_fd66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd66b0ULL || rel >= 0xfd66d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd66d0 size=16 callers=0 calls=0
*/
void sub_fd66d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd66d0ULL || rel >= 0xfd66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd66e0 size=16 callers=0 calls=0
*/
void sub_fd66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd66e0ULL || rel >= 0xfd66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd66f0 size=16 callers=0 calls=0
*/
void sub_fd66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd66f0ULL || rel >= 0xfd6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6700 size=16 callers=0 calls=0
*/
void sub_fd6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6700ULL || rel >= 0xfd6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6710 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6710ULL || rel >= 0xfd6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6750 size=32 callers=0 calls=0
*/
void sub_fd6750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6750ULL || rel >= 0xfd6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6770 size=16 callers=0 calls=0
*/
void sub_fd6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6770ULL || rel >= 0xfd6780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6780 size=16 callers=0 calls=0
*/
void sub_fd6780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6780ULL || rel >= 0xfd6790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6790 size=16 callers=0 calls=0
*/
void sub_fd6790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6790ULL || rel >= 0xfd67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd67a0 size=16 callers=0 calls=0
*/
void sub_fd67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd67a0ULL || rel >= 0xfd67b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd67b0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd67b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd67b0ULL || rel >= 0xfd67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd67f0 size=32 callers=0 calls=0
*/
void sub_fd67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd67f0ULL || rel >= 0xfd6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6810 size=16 callers=0 calls=0
*/
void sub_fd6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6810ULL || rel >= 0xfd6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6820 size=16 callers=0 calls=0
*/
void sub_fd6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6820ULL || rel >= 0xfd6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6830 size=16 callers=0 calls=0
*/
void sub_fd6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6830ULL || rel >= 0xfd6840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6840 size=16 callers=0 calls=0
*/
void sub_fd6840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6840ULL || rel >= 0xfd6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6850 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6850ULL || rel >= 0xfd6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6890 size=32 callers=0 calls=0
*/
void sub_fd6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6890ULL || rel >= 0xfd68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd68b0 size=16 callers=0 calls=0
*/
void sub_fd68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd68b0ULL || rel >= 0xfd68c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd68c0 size=16 callers=0 calls=0
*/
void sub_fd68c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd68c0ULL || rel >= 0xfd68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd68d0 size=16 callers=0 calls=0
*/
void sub_fd68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd68d0ULL || rel >= 0xfd68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd68e0 size=16 callers=0 calls=0
*/
void sub_fd68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd68e0ULL || rel >= 0xfd68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd68f0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd68f0ULL || rel >= 0xfd6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6930 size=32 callers=0 calls=0
*/
void sub_fd6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6930ULL || rel >= 0xfd6950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6950 size=16 callers=0 calls=0
*/
void sub_fd6950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6950ULL || rel >= 0xfd6960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6960 size=16 callers=0 calls=0
*/
void sub_fd6960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6960ULL || rel >= 0xfd6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6970 size=16 callers=0 calls=0
*/
void sub_fd6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6970ULL || rel >= 0xfd6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6980 size=16 callers=0 calls=0
*/
void sub_fd6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6980ULL || rel >= 0xfd6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6990 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6990ULL || rel >= 0xfd69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd69d0 size=32 callers=0 calls=0
*/
void sub_fd69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd69d0ULL || rel >= 0xfd69f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd69f0 size=16 callers=0 calls=0
*/
void sub_fd69f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd69f0ULL || rel >= 0xfd6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6a00 size=16 callers=0 calls=0
*/
void sub_fd6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6a00ULL || rel >= 0xfd6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6a10 size=16 callers=0 calls=0
*/
void sub_fd6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6a10ULL || rel >= 0xfd6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6a20 size=16 callers=0 calls=0
*/
void sub_fd6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6a20ULL || rel >= 0xfd6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6a30 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6a30ULL || rel >= 0xfd6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6a70 size=32 callers=0 calls=0
*/
void sub_fd6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6a70ULL || rel >= 0xfd6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6a90 size=16 callers=0 calls=0
*/
void sub_fd6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6a90ULL || rel >= 0xfd6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6aa0 size=16 callers=0 calls=0
*/
void sub_fd6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6aa0ULL || rel >= 0xfd6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6ab0 size=16 callers=0 calls=0
*/
void sub_fd6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6ab0ULL || rel >= 0xfd6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6ac0 size=16 callers=0 calls=0
*/
void sub_fd6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6ac0ULL || rel >= 0xfd6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6ad0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6ad0ULL || rel >= 0xfd6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6b10 size=32 callers=0 calls=0
*/
void sub_fd6b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6b10ULL || rel >= 0xfd6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6b30 size=16 callers=0 calls=0
*/
void sub_fd6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6b30ULL || rel >= 0xfd6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6b40 size=16 callers=0 calls=0
*/
void sub_fd6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6b40ULL || rel >= 0xfd6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6b50 size=16 callers=0 calls=0
*/
void sub_fd6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6b50ULL || rel >= 0xfd6b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6b60 size=16 callers=0 calls=0
*/
void sub_fd6b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6b60ULL || rel >= 0xfd6b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6b70 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6b70ULL || rel >= 0xfd6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6bb0 size=32 callers=0 calls=0
*/
void sub_fd6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6bb0ULL || rel >= 0xfd6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6bd0 size=16 callers=0 calls=0
*/
void sub_fd6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6bd0ULL || rel >= 0xfd6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6be0 size=16 callers=0 calls=0
*/
void sub_fd6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6be0ULL || rel >= 0xfd6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6bf0 size=16 callers=0 calls=0
*/
void sub_fd6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6bf0ULL || rel >= 0xfd6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6c00 size=16 callers=0 calls=0
*/
void sub_fd6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6c00ULL || rel >= 0xfd6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6c10 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6c10ULL || rel >= 0xfd6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6c50 size=32 callers=0 calls=0
*/
void sub_fd6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6c50ULL || rel >= 0xfd6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6c70 size=16 callers=0 calls=0
*/
void sub_fd6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6c70ULL || rel >= 0xfd6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6c80 size=16 callers=0 calls=0
*/
void sub_fd6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6c80ULL || rel >= 0xfd6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6c90 size=16 callers=0 calls=0
*/
void sub_fd6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6c90ULL || rel >= 0xfd6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6ca0 size=16 callers=0 calls=0
*/
void sub_fd6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6ca0ULL || rel >= 0xfd6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6cb0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6cb0ULL || rel >= 0xfd6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6cf0 size=32 callers=0 calls=0
*/
void sub_fd6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6cf0ULL || rel >= 0xfd6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6d10 size=16 callers=0 calls=0
*/
void sub_fd6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6d10ULL || rel >= 0xfd6d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6d20 size=16 callers=0 calls=0
*/
void sub_fd6d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6d20ULL || rel >= 0xfd6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6d30 size=16 callers=0 calls=0
*/
void sub_fd6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6d30ULL || rel >= 0xfd6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6d40 size=16 callers=0 calls=0
*/
void sub_fd6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6d40ULL || rel >= 0xfd6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6d50 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6d50ULL || rel >= 0xfd6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6d90 size=32 callers=0 calls=0
*/
void sub_fd6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6d90ULL || rel >= 0xfd6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6db0 size=16 callers=0 calls=0
*/
void sub_fd6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6db0ULL || rel >= 0xfd6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6dc0 size=16 callers=0 calls=0
*/
void sub_fd6dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6dc0ULL || rel >= 0xfd6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6dd0 size=16 callers=0 calls=0
*/
void sub_fd6dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6dd0ULL || rel >= 0xfd6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6de0 size=16 callers=0 calls=0
*/
void sub_fd6de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6de0ULL || rel >= 0xfd6df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6df0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6df0ULL || rel >= 0xfd6e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6e30 size=32 callers=0 calls=0
*/
void sub_fd6e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6e30ULL || rel >= 0xfd6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6e50 size=16 callers=0 calls=0
*/
void sub_fd6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6e50ULL || rel >= 0xfd6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6e60 size=16 callers=0 calls=0
*/
void sub_fd6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6e60ULL || rel >= 0xfd6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6e70 size=16 callers=0 calls=0
*/
void sub_fd6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6e70ULL || rel >= 0xfd6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6e80 size=16 callers=0 calls=0
*/
void sub_fd6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6e80ULL || rel >= 0xfd6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6e90 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6e90ULL || rel >= 0xfd6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6ed0 size=32 callers=0 calls=0
*/
void sub_fd6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6ed0ULL || rel >= 0xfd6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6ef0 size=16 callers=0 calls=0
*/
void sub_fd6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6ef0ULL || rel >= 0xfd6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6f00 size=16 callers=0 calls=0
*/
void sub_fd6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6f00ULL || rel >= 0xfd6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6f10 size=16 callers=0 calls=0
*/
void sub_fd6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6f10ULL || rel >= 0xfd6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6f20 size=16 callers=0 calls=0
*/
void sub_fd6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6f20ULL || rel >= 0xfd6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6f30 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6f30ULL || rel >= 0xfd6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6f70 size=32 callers=0 calls=0
*/
void sub_fd6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6f70ULL || rel >= 0xfd6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6f90 size=16 callers=0 calls=0
*/
void sub_fd6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6f90ULL || rel >= 0xfd6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6fa0 size=16 callers=0 calls=0
*/
void sub_fd6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6fa0ULL || rel >= 0xfd6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6fb0 size=16 callers=0 calls=0
*/
void sub_fd6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6fb0ULL || rel >= 0xfd6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6fc0 size=16 callers=0 calls=0
*/
void sub_fd6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6fc0ULL || rel >= 0xfd6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd6fd0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd6fd0ULL || rel >= 0xfd7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7010 size=32 callers=0 calls=0
*/
void sub_fd7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7010ULL || rel >= 0xfd7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7030 size=16 callers=0 calls=0
*/
void sub_fd7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7030ULL || rel >= 0xfd7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7040 size=16 callers=0 calls=0
*/
void sub_fd7040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7040ULL || rel >= 0xfd7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7050 size=16 callers=0 calls=0
*/
void sub_fd7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7050ULL || rel >= 0xfd7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7060 size=16 callers=0 calls=0
*/
void sub_fd7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7060ULL || rel >= 0xfd7070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7070 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7070ULL || rel >= 0xfd70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd70b0 size=32 callers=0 calls=0
*/
void sub_fd70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd70b0ULL || rel >= 0xfd70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd70d0 size=16 callers=0 calls=0
*/
void sub_fd70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd70d0ULL || rel >= 0xfd70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd70e0 size=16 callers=0 calls=0
*/
void sub_fd70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd70e0ULL || rel >= 0xfd70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd70f0 size=16 callers=0 calls=0
*/
void sub_fd70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd70f0ULL || rel >= 0xfd7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7100 size=16 callers=0 calls=0
*/
void sub_fd7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7100ULL || rel >= 0xfd7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7110 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7110ULL || rel >= 0xfd7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7150 size=32 callers=0 calls=0
*/
void sub_fd7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7150ULL || rel >= 0xfd7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7170 size=16 callers=0 calls=0
*/
void sub_fd7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7170ULL || rel >= 0xfd7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7180 size=16 callers=0 calls=0
*/
void sub_fd7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7180ULL || rel >= 0xfd7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7190 size=16 callers=0 calls=0
*/
void sub_fd7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7190ULL || rel >= 0xfd71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd71a0 size=16 callers=0 calls=0
*/
void sub_fd71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd71a0ULL || rel >= 0xfd71b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd71b0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd71b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd71b0ULL || rel >= 0xfd71f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd71f0 size=32 callers=0 calls=0
*/
void sub_fd71f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd71f0ULL || rel >= 0xfd7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7210 size=16 callers=0 calls=0
*/
void sub_fd7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7210ULL || rel >= 0xfd7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7220 size=16 callers=0 calls=0
*/
void sub_fd7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7220ULL || rel >= 0xfd7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7230 size=16 callers=0 calls=0
*/
void sub_fd7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7230ULL || rel >= 0xfd7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7240 size=16 callers=0 calls=0
*/
void sub_fd7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7240ULL || rel >= 0xfd7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7250 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7250ULL || rel >= 0xfd7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7290 size=32 callers=0 calls=0
*/
void sub_fd7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7290ULL || rel >= 0xfd72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd72b0 size=16 callers=0 calls=0
*/
void sub_fd72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd72b0ULL || rel >= 0xfd72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd72c0 size=16 callers=0 calls=0
*/
void sub_fd72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd72c0ULL || rel >= 0xfd72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd72d0 size=16 callers=0 calls=0
*/
void sub_fd72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd72d0ULL || rel >= 0xfd72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd72e0 size=16 callers=0 calls=0
*/
void sub_fd72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd72e0ULL || rel >= 0xfd72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd72f0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd72f0ULL || rel >= 0xfd7330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7330 size=32 callers=0 calls=0
*/
void sub_fd7330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7330ULL || rel >= 0xfd7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7350 size=16 callers=0 calls=0
*/
void sub_fd7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7350ULL || rel >= 0xfd7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7360 size=16 callers=0 calls=0
*/
void sub_fd7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7360ULL || rel >= 0xfd7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7370 size=16 callers=0 calls=0
*/
void sub_fd7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7370ULL || rel >= 0xfd7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7380 size=16 callers=0 calls=0
*/
void sub_fd7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7380ULL || rel >= 0xfd7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7390 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7390ULL || rel >= 0xfd73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd73d0 size=32 callers=0 calls=0
*/
void sub_fd73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd73d0ULL || rel >= 0xfd73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd73f0 size=16 callers=0 calls=0
*/
void sub_fd73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd73f0ULL || rel >= 0xfd7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7400 size=16 callers=0 calls=0
*/
void sub_fd7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7400ULL || rel >= 0xfd7410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7410 size=16 callers=0 calls=0
*/
void sub_fd7410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7410ULL || rel >= 0xfd7420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7420 size=16 callers=0 calls=0
*/
void sub_fd7420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7420ULL || rel >= 0xfd7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7430 size=16 callers=0 calls=0
*/
void sub_fd7430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7430ULL || rel >= 0xfd7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7440 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7440ULL || rel >= 0xfd7480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7480 size=32 callers=0 calls=0
*/
void sub_fd7480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7480ULL || rel >= 0xfd74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd74a0 size=16 callers=0 calls=0
*/
void sub_fd74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd74a0ULL || rel >= 0xfd74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd74b0 size=16 callers=0 calls=0
*/
void sub_fd74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd74b0ULL || rel >= 0xfd74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd74c0 size=16 callers=0 calls=0
*/
void sub_fd74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd74c0ULL || rel >= 0xfd74d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd74d0 size=16 callers=0 calls=0
*/
void sub_fd74d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd74d0ULL || rel >= 0xfd74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd74e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd74e0ULL || rel >= 0xfd7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7520 size=32 callers=0 calls=0
*/
void sub_fd7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7520ULL || rel >= 0xfd7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7540 size=16 callers=0 calls=0
*/
void sub_fd7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7540ULL || rel >= 0xfd7550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7550 size=16 callers=0 calls=0
*/
void sub_fd7550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7550ULL || rel >= 0xfd7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7560 size=16 callers=0 calls=0
*/
void sub_fd7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7560ULL || rel >= 0xfd7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7570 size=16 callers=0 calls=0
*/
void sub_fd7570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7570ULL || rel >= 0xfd7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7580 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7580ULL || rel >= 0xfd75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd75c0 size=32 callers=0 calls=0
*/
void sub_fd75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd75c0ULL || rel >= 0xfd75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd75e0 size=16 callers=0 calls=0
*/
void sub_fd75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd75e0ULL || rel >= 0xfd75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd75f0 size=16 callers=0 calls=0
*/
void sub_fd75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd75f0ULL || rel >= 0xfd7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7600 size=16 callers=0 calls=0
*/
void sub_fd7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7600ULL || rel >= 0xfd7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7610 size=16 callers=0 calls=0
*/
void sub_fd7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7610ULL || rel >= 0xfd7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7620 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7620ULL || rel >= 0xfd7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7660 size=32 callers=0 calls=0
*/
void sub_fd7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7660ULL || rel >= 0xfd7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7680 size=16 callers=0 calls=0
*/
void sub_fd7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7680ULL || rel >= 0xfd7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7690 size=16 callers=0 calls=0
*/
void sub_fd7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7690ULL || rel >= 0xfd76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd76a0 size=16 callers=0 calls=0
*/
void sub_fd76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd76a0ULL || rel >= 0xfd76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd76b0 size=16 callers=0 calls=0
*/
void sub_fd76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd76b0ULL || rel >= 0xfd76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd76c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd76c0ULL || rel >= 0xfd7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7700 size=32 callers=0 calls=0
*/
void sub_fd7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7700ULL || rel >= 0xfd7720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7720 size=16 callers=0 calls=0
*/
void sub_fd7720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7720ULL || rel >= 0xfd7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7730 size=16 callers=0 calls=0
*/
void sub_fd7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7730ULL || rel >= 0xfd7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7740 size=16 callers=0 calls=0
*/
void sub_fd7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7740ULL || rel >= 0xfd7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7750 size=16 callers=0 calls=0
*/
void sub_fd7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7750ULL || rel >= 0xfd7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7760 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7760ULL || rel >= 0xfd77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd77a0 size=32 callers=0 calls=0
*/
void sub_fd77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd77a0ULL || rel >= 0xfd77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd77c0 size=16 callers=0 calls=0
*/
void sub_fd77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd77c0ULL || rel >= 0xfd77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd77d0 size=16 callers=0 calls=0
*/
void sub_fd77d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd77d0ULL || rel >= 0xfd77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd77e0 size=16 callers=0 calls=0
*/
void sub_fd77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd77e0ULL || rel >= 0xfd77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd77f0 size=16 callers=0 calls=0
*/
void sub_fd77f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd77f0ULL || rel >= 0xfd7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7800 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7800ULL || rel >= 0xfd7840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7840 size=32 callers=0 calls=0
*/
void sub_fd7840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7840ULL || rel >= 0xfd7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7860 size=16 callers=0 calls=0
*/
void sub_fd7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7860ULL || rel >= 0xfd7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7870 size=16 callers=0 calls=0
*/
void sub_fd7870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7870ULL || rel >= 0xfd7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7880 size=16 callers=0 calls=0
*/
void sub_fd7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7880ULL || rel >= 0xfd7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7890 size=16 callers=0 calls=0
*/
void sub_fd7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7890ULL || rel >= 0xfd78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd78a0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd78a0ULL || rel >= 0xfd78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd78e0 size=32 callers=0 calls=0
*/
void sub_fd78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd78e0ULL || rel >= 0xfd7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7900 size=16 callers=0 calls=0
*/
void sub_fd7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7900ULL || rel >= 0xfd7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7910 size=16 callers=0 calls=0
*/
void sub_fd7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7910ULL || rel >= 0xfd7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7920 size=16 callers=0 calls=0
*/
void sub_fd7920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7920ULL || rel >= 0xfd7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7930 size=16 callers=0 calls=0
*/
void sub_fd7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7930ULL || rel >= 0xfd7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7940 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7940ULL || rel >= 0xfd7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7980 size=32 callers=0 calls=0
*/
void sub_fd7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7980ULL || rel >= 0xfd79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd79a0 size=16 callers=0 calls=0
*/
void sub_fd79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd79a0ULL || rel >= 0xfd79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd79b0 size=16 callers=0 calls=0
*/
void sub_fd79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd79b0ULL || rel >= 0xfd79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd79c0 size=16 callers=0 calls=0
*/
void sub_fd79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd79c0ULL || rel >= 0xfd79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd79d0 size=16 callers=0 calls=0
*/
void sub_fd79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd79d0ULL || rel >= 0xfd79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd79e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd79e0ULL || rel >= 0xfd7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7a20 size=32 callers=0 calls=0
*/
void sub_fd7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7a20ULL || rel >= 0xfd7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7a40 size=16 callers=0 calls=0
*/
void sub_fd7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7a40ULL || rel >= 0xfd7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7a50 size=16 callers=0 calls=0
*/
void sub_fd7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7a50ULL || rel >= 0xfd7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7a60 size=16 callers=0 calls=0
*/
void sub_fd7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7a60ULL || rel >= 0xfd7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7a70 size=16 callers=0 calls=0
*/
void sub_fd7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7a70ULL || rel >= 0xfd7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7a80 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7a80ULL || rel >= 0xfd7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7ac0 size=32 callers=0 calls=0
*/
void sub_fd7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7ac0ULL || rel >= 0xfd7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7ae0 size=16 callers=0 calls=0
*/
void sub_fd7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7ae0ULL || rel >= 0xfd7af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7af0 size=16 callers=0 calls=0
*/
void sub_fd7af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7af0ULL || rel >= 0xfd7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7b00 size=16 callers=0 calls=0
*/
void sub_fd7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7b00ULL || rel >= 0xfd7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7b10 size=16 callers=0 calls=0
*/
void sub_fd7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7b10ULL || rel >= 0xfd7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7b20 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7b20ULL || rel >= 0xfd7b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7b60 size=32 callers=0 calls=0
*/
void sub_fd7b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7b60ULL || rel >= 0xfd7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7b80 size=16 callers=0 calls=0
*/
void sub_fd7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7b80ULL || rel >= 0xfd7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7b90 size=16 callers=0 calls=0
*/
void sub_fd7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7b90ULL || rel >= 0xfd7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7ba0 size=16 callers=0 calls=0
*/
void sub_fd7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7ba0ULL || rel >= 0xfd7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7bb0 size=16 callers=0 calls=0
*/
void sub_fd7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7bb0ULL || rel >= 0xfd7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7bc0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7bc0ULL || rel >= 0xfd7c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7c00 size=32 callers=0 calls=0
*/
void sub_fd7c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7c00ULL || rel >= 0xfd7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7c20 size=16 callers=0 calls=0
*/
void sub_fd7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7c20ULL || rel >= 0xfd7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7c30 size=16 callers=0 calls=0
*/
void sub_fd7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7c30ULL || rel >= 0xfd7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7c40 size=16 callers=0 calls=0
*/
void sub_fd7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7c40ULL || rel >= 0xfd7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7c50 size=16 callers=0 calls=0
*/
void sub_fd7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7c50ULL || rel >= 0xfd7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7c60 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7c60ULL || rel >= 0xfd7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7ca0 size=32 callers=0 calls=0
*/
void sub_fd7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7ca0ULL || rel >= 0xfd7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7cc0 size=16 callers=0 calls=0
*/
void sub_fd7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7cc0ULL || rel >= 0xfd7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7cd0 size=16 callers=0 calls=0
*/
void sub_fd7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7cd0ULL || rel >= 0xfd7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7ce0 size=16 callers=0 calls=0
*/
void sub_fd7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7ce0ULL || rel >= 0xfd7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7cf0 size=16 callers=0 calls=0
*/
void sub_fd7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7cf0ULL || rel >= 0xfd7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7d00 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7d00ULL || rel >= 0xfd7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7d40 size=32 callers=0 calls=0
*/
void sub_fd7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7d40ULL || rel >= 0xfd7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7d60 size=16 callers=0 calls=0
*/
void sub_fd7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7d60ULL || rel >= 0xfd7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7d70 size=16 callers=0 calls=0
*/
void sub_fd7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7d70ULL || rel >= 0xfd7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7d80 size=16 callers=0 calls=0
*/
void sub_fd7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7d80ULL || rel >= 0xfd7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7d90 size=16 callers=0 calls=0
*/
void sub_fd7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7d90ULL || rel >= 0xfd7da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7da0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_fd7da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7da0ULL || rel >= 0xfd7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7de0 size=32 callers=0 calls=0
*/
void sub_fd7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7de0ULL || rel >= 0xfd7e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7e00 size=16 callers=0 calls=0
*/
void sub_fd7e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7e00ULL || rel >= 0xfd7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7e10 size=16 callers=0 calls=0
*/
void sub_fd7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7e10ULL || rel >= 0xfd7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7e20 size=16 callers=0 calls=0
*/
void sub_fd7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7e20ULL || rel >= 0xfd7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7e30 size=128 callers=0 calls=0
*/
void sub_fd7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7e30ULL || rel >= 0xfd7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7eb0 size=112 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_fd7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7eb0ULL || rel >= 0xfd7f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7f20 size=16 callers=1 calls=0
*/
void sub_fd7f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7f20ULL || rel >= 0xfd7f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7f30 size=16 callers=1 calls=0
*/
void sub_fd7f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7f30ULL || rel >= 0xfd7f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7f40 size=96 callers=1 calls=0
*/
void sub_fd7f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7f40ULL || rel >= 0xfd7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7fa0 size=16 callers=1 calls=0
*/
void sub_fd7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7fa0ULL || rel >= 0xfd7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7fb0 size=32 callers=11 calls=0
*/
void sub_fd7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7fb0ULL || rel >= 0xfd7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd7fd0 size=64 callers=11 calls=0
*/
void sub_fd7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7fd0ULL || rel >= 0xfd8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8010 size=80 callers=5 calls=0
*/
void sub_fd8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8010ULL || rel >= 0xfd8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8060 size=64 callers=26 calls=0
*/
void sub_fd8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8060ULL || rel >= 0xfd80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

