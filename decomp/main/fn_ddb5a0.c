/* main functions 00ddb5a0..00dffcd0 (109 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00ddb5a0 size=112 callers=0 calls=0
*/
void sub_ddb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb5a0ULL || rel >= 0xddb610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb610 size=112 callers=0 calls=0
*/
void sub_ddb610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb610ULL || rel >= 0xddb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb680 size=816 callers=0 calls=13
   calls: sub_14a91c0, sub_dcaa80, sub_ddc2f0, sub_e3dfe0, sub_e3e3b0, sub_e3e3c0, sub_e3e3e0, sub_e3e490, sub_e3ece0, sub_e3ed90, sub_e3ee80, sub_ea3d10
   ... +1 more
*/
void sub_ddb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb680ULL || rel >= 0xddb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb9b0 size=848 callers=0 calls=10
   calls: sub_1400490, sub_14ab0c0, sub_14ab2b0, sub_794330, sub_c44310, sub_c44410, sub_dcaa80, sub_ddc480, sub_ea7c40, sub_ea8c70
   ref: Play_UI_Lcircuit_Goal
   ref: Stop_bgm_or_st_sys03
*/
void Play_UI_Lcircuit_Goal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb9b0ULL || rel >= 0xddbd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddbd00 size=384 callers=0 calls=9
   calls: sub_14a91c0, sub_794330, sub_dcaa80, sub_ddc2f0, sub_e3dfe0, sub_e3e3c0, sub_e3e3e0, sub_ea3d10, sub_ea4760
   ref: Play_UI_Lcircuit_TimeUp
*/
void Play_UI_Lcircuit_TimeUp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddbd00ULL || rel >= 0xddbe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddbe80 size=1136 callers=0 calls=20
   calls: sub_136b7c0, sub_14a91c0, sub_14ab0c0, sub_794330, sub_c43ed0, sub_c44310, sub_c44410, sub_c9f940, sub_dcaa80, sub_dcd3f0, sub_dd4e40, sub_ddc2f0
   ... +8 more
   ref: Play_SS_Common_get_watt
   ref: Stop_bgm_or_st_sys03
*/
void Stop_bgm_or_st_sys03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddbe80ULL || rel >= 0xddc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddc2f0 size=400 callers=4 calls=3
   calls: sub_14a91a0, sub_dd2c30, sub_e3fe50
*/
void sub_ddc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc2f0ULL || rel >= 0xddc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddc480 size=592 callers=2 calls=10
   calls: sub_13a6920, sub_14ac3c0, sub_14e08d0, sub_c6ceb0, sub_c9f940, sub_d44d60, sub_dd3420, sub_dd78e0, sub_ddc6d0, sub_ffa7a0
*/
void sub_ddc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc480ULL || rel >= 0xddc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddc6d0 size=544 callers=1 calls=1
   calls: sub_5cbcf0
*/
void sub_ddc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc6d0ULL || rel >= 0xddc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddc8f0 size=256 callers=1 calls=1
   calls: sub_1315b90
*/
void sub_ddc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc8f0ULL || rel >= 0xddc9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddc9f0 size=272 callers=1 calls=1
   calls: sub_13149a0
*/
void sub_ddc9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc9f0ULL || rel >= 0xddcb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddcb00 size=880 callers=1 calls=13
   calls: sub_13a6920, sub_794330, sub_c6ccb0, sub_c95cf0, sub_c99b80, sub_c99bb0, sub_c99bf0, sub_c9f940, sub_ca0110, sub_dd4e40, sub_ddce70, sub_ea7c40
   ... +1 more
   ref: Play_Prop_Gimmick_Get_Baloon
*/
void Play_Prop_Gimmick_Get_Baloon_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddcb00ULL || rel >= 0xddce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddce70 size=432 callers=1 calls=3
   calls: sub_5cbcf0, sub_c6ccb0, sub_c6d3c0
*/
void sub_ddce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddce70ULL || rel >= 0xddd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddd020 size=736 callers=1 calls=9
   calls: sub_14ab0c0, sub_14ab200, sub_794330, sub_dcc740, sub_ddacc0, sub_ddd300, sub_ddd500, sub_ea7c40, sub_ea8c70
   ref: Play_UI_Lcircuit_CheckPoint
*/
void Play_UI_Lcircuit_CheckPoint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd020ULL || rel >= 0xddd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddd300 size=512 callers=1 calls=3
   calls: sub_5cbcf0, sub_c6ccb0, sub_c6d3c0
*/
void sub_ddd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd300ULL || rel >= 0xddd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddd500 size=432 callers=1 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_ddd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd500ULL || rel >= 0xddd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddd6b0 size=128 callers=0 calls=0
*/
void sub_ddd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd6b0ULL || rel >= 0xddd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddd730 size=432 callers=1 calls=2
   calls: sub_5e2350, sub_dde580
*/
void sub_ddd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd730ULL || rel >= 0xddd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddd8e0 size=416 callers=0 calls=0
*/
void sub_ddd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd8e0ULL || rel >= 0xddda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddda80 size=16 callers=0 calls=0
*/
void sub_ddda80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddda80ULL || rel >= 0xddda90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddda90 size=16 callers=0 calls=0
*/
void sub_ddda90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddda90ULL || rel >= 0xdddaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dddaa0 size=16 callers=0 calls=0
*/
void sub_dddaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdddaa0ULL || rel >= 0xdddab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dddab0 size=16 callers=0 calls=0
*/
void sub_dddab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdddab0ULL || rel >= 0xdddac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dddac0 size=16 callers=0 calls=0
*/
void sub_dddac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdddac0ULL || rel >= 0xdddad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dddad0 size=16 callers=0 calls=0
*/
void sub_dddad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdddad0ULL || rel >= 0xdddae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dddae0 size=656 callers=1 calls=4
   calls: sub_13a6cd0, sub_d152d0, sub_dbfc30, sub_dde780
*/
void sub_dddae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdddae0ULL || rel >= 0xdddd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dddd70 size=112 callers=1 calls=0
*/
void sub_dddd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdddd70ULL || rel >= 0xdddde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dddde0 size=720 callers=1 calls=2
   calls: sub_13a6cd0, sub_dde780
*/
void sub_dddde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdddde0ULL || rel >= 0xdde0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dde0b0 size=960 callers=1 calls=3
   calls: sub_13a6cd0, sub_dbfc30, sub_ddea90
*/
void sub_dde0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdde0b0ULL || rel >= 0xdde470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dde470 size=240 callers=0 calls=0
*/
void sub_dde470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdde470ULL || rel >= 0xdde560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dde560 size=16 callers=0 calls=0
*/
void sub_dde560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdde560ULL || rel >= 0xdde570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dde570 size=16 callers=0 calls=0
*/
void sub_dde570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdde570ULL || rel >= 0xdde580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dde580 size=512 callers=2 calls=0
*/
void sub_dde580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdde580ULL || rel >= 0xdde780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dde780 size=320 callers=3 calls=0
*/
void sub_dde780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdde780ULL || rel >= 0xdde8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dde8c0 size=464 callers=0 calls=0
*/
void sub_dde8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdde8c0ULL || rel >= 0xddea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddea90 size=544 callers=2 calls=0
*/
void sub_ddea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddea90ULL || rel >= 0xddecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddecb0 size=208 callers=1 calls=2
   calls: sub_5e2350, sub_dde580
*/
void sub_ddecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddecb0ULL || rel >= 0xdded80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dded80 size=144 callers=0 calls=1
   calls: sub_ddee10
*/
void sub_dded80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdded80ULL || rel >= 0xddee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddee10 size=1232 callers=7 calls=3
   calls: sub_ddf8c0, sub_ddf9b0, sub_de0640
*/
void sub_ddee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddee10ULL || rel >= 0xddf2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf2e0 size=144 callers=0 calls=1
   calls: sub_ddee10
*/
void sub_ddf2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf2e0ULL || rel >= 0xddf370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf370 size=144 callers=0 calls=1
   calls: sub_ddee10
*/
void sub_ddf370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf370ULL || rel >= 0xddf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf400 size=144 callers=0 calls=1
   calls: sub_ddee10
*/
void sub_ddf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf400ULL || rel >= 0xddf490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf490 size=144 callers=0 calls=1
   calls: sub_ddee10
*/
void sub_ddf490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf490ULL || rel >= 0xddf520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf520 size=144 callers=0 calls=1
   calls: sub_ddee10
*/
void sub_ddf520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf520ULL || rel >= 0xddf5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf5b0 size=112 callers=0 calls=1
   calls: sub_ddf8c0
*/
void sub_ddf5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf5b0ULL || rel >= 0xddf620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf620 size=112 callers=0 calls=1
   calls: sub_ddf8c0
*/
void sub_ddf620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf620ULL || rel >= 0xddf690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf690 size=112 callers=0 calls=1
   calls: sub_ddf8c0
*/
void sub_ddf690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf690ULL || rel >= 0xddf700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf700 size=320 callers=0 calls=0
*/
void sub_ddf700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf700ULL || rel >= 0xddf840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf840 size=16 callers=0 calls=0
*/
void sub_ddf840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf840ULL || rel >= 0xddf850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf850 size=16 callers=0 calls=0
*/
void sub_ddf850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf850ULL || rel >= 0xddf860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf860 size=16 callers=0 calls=0
*/
void sub_ddf860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf860ULL || rel >= 0xddf870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf870 size=16 callers=0 calls=0
*/
void sub_ddf870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf870ULL || rel >= 0xddf880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf880 size=16 callers=0 calls=0
*/
void sub_ddf880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf880ULL || rel >= 0xddf890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf890 size=16 callers=0 calls=0
*/
void sub_ddf890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf890ULL || rel >= 0xddf8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf8a0 size=16 callers=0 calls=0
*/
void sub_ddf8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf8a0ULL || rel >= 0xddf8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf8b0 size=16 callers=0 calls=0
*/
void sub_ddf8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf8b0ULL || rel >= 0xddf8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf8c0 size=240 callers=35 calls=0
*/
void sub_ddf8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf8c0ULL || rel >= 0xddf9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddf9b0 size=240 callers=10 calls=0
*/
void sub_ddf9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf9b0ULL || rel >= 0xddfaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddfaa0 size=192 callers=0 calls=1
   calls: sub_ddff80
*/
void sub_ddfaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddfaa0ULL || rel >= 0xddfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddfb60 size=192 callers=0 calls=1
   calls: sub_ddff80
*/
void sub_ddfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddfb60ULL || rel >= 0xddfc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddfc20 size=192 callers=0 calls=1
   calls: sub_ddff80
*/
void sub_ddfc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddfc20ULL || rel >= 0xddfce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddfce0 size=192 callers=0 calls=1
   calls: sub_ddff80
*/
void sub_ddfce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddfce0ULL || rel >= 0xddfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddfda0 size=192 callers=0 calls=1
   calls: sub_ddff80
*/
void sub_ddfda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddfda0ULL || rel >= 0xddfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddfe60 size=192 callers=0 calls=1
   calls: sub_ddff80
*/
void sub_ddfe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddfe60ULL || rel >= 0xddff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddff20 size=96 callers=0 calls=1
   calls: sub_ddff80
*/
void sub_ddff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddff20ULL || rel >= 0xddff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddff80 size=608 callers=8 calls=2
   calls: sub_ddf8c0, sub_ddff80
*/
void sub_ddff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddff80ULL || rel >= 0xde01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de01e0 size=1120 callers=1 calls=2
   calls: sub_ddf8c0, sub_ddf9b0
*/
void sub_de01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde01e0ULL || rel >= 0xde0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0640 size=688 callers=1 calls=1
   calls: sub_ddf8c0
*/
void sub_de0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0640ULL || rel >= 0xde08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de08f0 size=112 callers=0 calls=1
   calls: sub_ddf9b0
*/
void sub_de08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde08f0ULL || rel >= 0xde0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0960 size=112 callers=0 calls=1
   calls: sub_ddf9b0
*/
void sub_de0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0960ULL || rel >= 0xde09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de09d0 size=112 callers=0 calls=1
   calls: sub_ddf9b0
*/
void sub_de09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde09d0ULL || rel >= 0xde0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0a40 size=432 callers=1 calls=4
   calls: sub_5e2350, sub_de24b0, sub_de26b0, sub_de28b0
*/
void sub_de0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0a40ULL || rel >= 0xde0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0bf0 size=688 callers=0 calls=0
*/
void sub_de0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0bf0ULL || rel >= 0xde0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0ea0 size=16 callers=0 calls=0
*/
void sub_de0ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0ea0ULL || rel >= 0xde0eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0eb0 size=16 callers=0 calls=0
*/
void sub_de0eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0eb0ULL || rel >= 0xde0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0ec0 size=16 callers=0 calls=0
*/
void sub_de0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0ec0ULL || rel >= 0xde0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0ed0 size=16 callers=0 calls=0
*/
void sub_de0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0ed0ULL || rel >= 0xde0ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0ee0 size=16 callers=0 calls=0
*/
void sub_de0ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0ee0ULL || rel >= 0xde0ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de0ef0 size=320 callers=1 calls=2
   calls: sub_de2ab0, sub_de2c10
*/
void sub_de0ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde0ef0ULL || rel >= 0xde1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de1030 size=96 callers=0 calls=0
*/
void sub_de1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde1030ULL || rel >= 0xde1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de1090 size=592 callers=1 calls=4
   calls: sub_ddf8c0, sub_ddf9b0, sub_de01e0, sub_de12e0
*/
void sub_de1090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde1090ULL || rel >= 0xde12e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de12e0 size=432 callers=1 calls=0
*/
void sub_de12e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde12e0ULL || rel >= 0xde1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de1490 size=96 callers=1 calls=0
*/
void sub_de1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde1490ULL || rel >= 0xde14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de14f0 size=144 callers=1 calls=0
*/
void sub_de14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde14f0ULL || rel >= 0xde1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de1580 size=1968 callers=4 calls=7
   calls: sub_ddf8c0, sub_ddf9b0, sub_de1580, sub_de1d30, sub_de2180, sub_de2f20, sub_de3230
*/
void sub_de1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde1580ULL || rel >= 0xde1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de1d30 size=832 callers=4 calls=2
   calls: sub_967240, sub_dbfc30
*/
void sub_de1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde1d30ULL || rel >= 0xde2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de2070 size=240 callers=0 calls=0
*/
void sub_de2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2070ULL || rel >= 0xde2160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de2160 size=16 callers=0 calls=0
*/
void sub_de2160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2160ULL || rel >= 0xde2170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de2170 size=16 callers=0 calls=0
*/
void sub_de2170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2170ULL || rel >= 0xde2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de2180 size=336 callers=4 calls=0
*/
void sub_de2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2180ULL || rel >= 0xde22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de22d0 size=480 callers=0 calls=0
*/
void sub_de22d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde22d0ULL || rel >= 0xde24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de24b0 size=512 callers=1 calls=0
*/
void sub_de24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde24b0ULL || rel >= 0xde26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de26b0 size=512 callers=1 calls=0
*/
void sub_de26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde26b0ULL || rel >= 0xde28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de28b0 size=512 callers=1 calls=0
*/
void sub_de28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde28b0ULL || rel >= 0xde2ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de2ab0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_de2ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2ab0ULL || rel >= 0xde2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de2c10 size=320 callers=1 calls=0
*/
void sub_de2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2c10ULL || rel >= 0xde2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de2d50 size=464 callers=0 calls=0
*/
void sub_de2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2d50ULL || rel >= 0xde2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de2f20 size=320 callers=1 calls=0
*/
void sub_de2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2f20ULL || rel >= 0xde3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3060 size=464 callers=0 calls=0
*/
void sub_de3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3060ULL || rel >= 0xde3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3230 size=336 callers=1 calls=0
*/
void sub_de3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3230ULL || rel >= 0xde3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3380 size=480 callers=0 calls=0
*/
void sub_de3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3380ULL || rel >= 0xde3560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3560 size=256 callers=2 calls=1
   calls: sub_65d700
*/
void sub_de3560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3560ULL || rel >= 0xde3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3660 size=960 callers=1 calls=7
   calls: sub_1307dd0, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_67b990, sub_7950c0, sub_c4ac70
   ref: bin/script_event_data/rental.bin
   ref: common/tower_msg.dat
*/
void tower_msg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3660ULL || rel >= 0xde3a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3a20 size=288 callers=1 calls=2
   calls: sub_1308340, sub_de3b40
*/
void sub_de3a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3a20ULL || rel >= 0xde3b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3b40 size=672 callers=1 calls=1
   calls: sub_de48b0
*/
void sub_de3b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3b40ULL || rel >= 0xde3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3de0 size=304 callers=1 calls=0
*/
void sub_de3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3de0ULL || rel >= 0xde3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de3f10 size=1408 callers=6 calls=18
   calls: sub_13016f0, sub_136b520, sub_136b580, sub_136b690, sub_67bfa0, sub_67d450, sub_762d90, sub_763010, sub_763e00, sub_764df0, sub_7664a0, sub_767690
   ... +6 more
*/
void sub_de3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde3f10ULL || rel >= 0xde4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4490 size=576 callers=1 calls=0
*/
void sub_de4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4490ULL || rel >= 0xde46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de46d0 size=32 callers=1 calls=0
*/
void sub_de46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde46d0ULL || rel >= 0xde46f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de46f0 size=32 callers=1 calls=0
*/
void sub_de46f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde46f0ULL || rel >= 0xde4710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4710 size=368 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_de4710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4710ULL || rel >= 0xde4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4880 size=16 callers=0 calls=0
*/
void sub_de4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4880ULL || rel >= 0xde4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4890 size=16 callers=0 calls=0
*/
void sub_de4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4890ULL || rel >= 0xde48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de48a0 size=16 callers=0 calls=0
*/
void sub_de48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde48a0ULL || rel >= 0xde48b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de48b0 size=272 callers=1 calls=0
*/
void sub_de48b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde48b0ULL || rel >= 0xde49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de49c0 size=704 callers=0 calls=0
*/
void sub_de49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde49c0ULL || rel >= 0xde4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4c80 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_de4c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4c80ULL || rel >= 0xde4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4cc0 size=32 callers=0 calls=0
*/
void sub_de4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4cc0ULL || rel >= 0xde4ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4ce0 size=48 callers=0 calls=0
*/
void sub_de4ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4ce0ULL || rel >= 0xde4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4d10 size=32 callers=0 calls=0
*/
void sub_de4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4d10ULL || rel >= 0xde4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4d30 size=48 callers=0 calls=0
*/
void sub_de4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4d30ULL || rel >= 0xde4d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4d60 size=16 callers=0 calls=0
*/
void sub_de4d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4d60ULL || rel >= 0xde4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4d70 size=464 callers=1 calls=1
   calls: sub_689950
*/
void sub_de4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4d70ULL || rel >= 0xde4f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4f40 size=64 callers=0 calls=0
   ref: bin/field/param/tent/tent_color_table.bin
*/
void tent_color_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4f40ULL || rel >= 0xde4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4f80 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_de4f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4f80ULL || rel >= 0xde4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de4fd0 size=352 callers=0 calls=0
*/
void sub_de4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde4fd0ULL || rel >= 0xde5130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5130 size=16 callers=0 calls=0
*/
void sub_de5130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5130ULL || rel >= 0xde5140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5140 size=16 callers=0 calls=0
*/
void sub_de5140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5140ULL || rel >= 0xde5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5150 size=16 callers=0 calls=0
*/
void sub_de5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5150ULL || rel >= 0xde5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5160 size=16 callers=0 calls=0
*/
void sub_de5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5160ULL || rel >= 0xde5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5170 size=16 callers=0 calls=0
*/
void sub_de5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5170ULL || rel >= 0xde5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5180 size=352 callers=1 calls=5
   calls: sub_1307dd0, sub_c4ac70, sub_de5bb0, sub_de5c90, sub_ead4e0
   ref: common/tower_trainer.dat
*/
void tower_trainer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5180ULL || rel >= 0xde52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de52e0 size=80 callers=1 calls=1
   calls: sub_ead670
*/
void sub_de52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde52e0ULL || rel >= 0xde5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5330 size=1824 callers=1 calls=8
   calls: sub_67b990, sub_67d450, sub_de5e60, sub_de6050, sub_de67f0, sub_de6b50, sub_de6c50, sub_de6de0
   ref: mes_tower_tr_%03d_02
   ref: mes_tower_tr_%03d_03
   ref: mes_tower_tr_%03d_01
*/
void mes_tower_tr__03d_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5330ULL || rel >= 0xde5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5a50 size=80 callers=1 calls=1
   calls: sub_de6b50
*/
void sub_de5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5a50ULL || rel >= 0xde5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5aa0 size=240 callers=0 calls=0
*/
void sub_de5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5aa0ULL || rel >= 0xde5b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5b90 size=16 callers=0 calls=0
*/
void sub_de5b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5b90ULL || rel >= 0xde5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5ba0 size=16 callers=0 calls=0
*/
void sub_de5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5ba0ULL || rel >= 0xde5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5bb0 size=224 callers=1 calls=1
   calls: sub_de6940
*/
void sub_de5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5bb0ULL || rel >= 0xde5c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5c90 size=224 callers=1 calls=1
   calls: sub_de5d70
*/
void sub_de5c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5c90ULL || rel >= 0xde5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5d70 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_de5d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5d70ULL || rel >= 0xde5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5db0 size=32 callers=0 calls=0
*/
void sub_de5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5db0ULL || rel >= 0xde5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5dd0 size=48 callers=0 calls=0
*/
void sub_de5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5dd0ULL || rel >= 0xde5e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5e00 size=32 callers=0 calls=0
*/
void sub_de5e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5e00ULL || rel >= 0xde5e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5e20 size=48 callers=0 calls=0
*/
void sub_de5e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5e20ULL || rel >= 0xde5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5e50 size=16 callers=0 calls=0
*/
void sub_de5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5e50ULL || rel >= 0xde5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de5e60 size=496 callers=10 calls=0
*/
void sub_de5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5e60ULL || rel >= 0xde6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6050 size=1184 callers=1 calls=7
   calls: sub_762d90, sub_763dd0, sub_764df0, sub_7661c0, sub_766220, sub_76f5d0, sub_de64f0
*/
void sub_de6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6050ULL || rel >= 0xde64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de64f0 size=768 callers=1 calls=0
*/
void sub_de64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde64f0ULL || rel >= 0xde67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de67f0 size=272 callers=1 calls=0
*/
void sub_de67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde67f0ULL || rel >= 0xde6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6900 size=64 callers=0 calls=0
   ref: bin/field/param/battle_tower/battle_tower_poke_table.bin
*/
void battle_tower_poke_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6900ULL || rel >= 0xde6940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6940 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_de6940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6940ULL || rel >= 0xde6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6980 size=32 callers=0 calls=0
*/
void sub_de6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6980ULL || rel >= 0xde69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de69a0 size=48 callers=0 calls=0
*/
void sub_de69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde69a0ULL || rel >= 0xde69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de69d0 size=32 callers=0 calls=0
*/
void sub_de69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde69d0ULL || rel >= 0xde69f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de69f0 size=48 callers=0 calls=0
*/
void sub_de69f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde69f0ULL || rel >= 0xde6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6a20 size=16 callers=0 calls=0
*/
void sub_de6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6a20ULL || rel >= 0xde6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6a30 size=288 callers=1 calls=0
*/
void sub_de6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6a30ULL || rel >= 0xde6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6b50 size=256 callers=2 calls=0
*/
void sub_de6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6b50ULL || rel >= 0xde6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6c50 size=400 callers=10 calls=1
   calls: sub_de6a30
*/
void sub_de6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6c50ULL || rel >= 0xde6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6de0 size=192 callers=1 calls=0
*/
void sub_de6de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6de0ULL || rel >= 0xde6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6ea0 size=64 callers=0 calls=0
   ref: bin/field/param/battle_tower/battle_tower_trainer_table.bin
*/
void battle_tower_trainer_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6ea0ULL || rel >= 0xde6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6ee0 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_de6ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6ee0ULL || rel >= 0xde6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6f20 size=32 callers=0 calls=0
*/
void sub_de6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6f20ULL || rel >= 0xde6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6f40 size=48 callers=0 calls=0
*/
void sub_de6f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6f40ULL || rel >= 0xde6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6f70 size=32 callers=0 calls=0
*/
void sub_de6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6f70ULL || rel >= 0xde6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6f90 size=48 callers=0 calls=0
*/
void sub_de6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6f90ULL || rel >= 0xde6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6fc0 size=16 callers=0 calls=0
*/
void sub_de6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6fc0ULL || rel >= 0xde6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de6fd0 size=368 callers=2 calls=0
*/
void sub_de6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde6fd0ULL || rel >= 0xde7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de7140 size=64 callers=0 calls=0
   ref: bin/field/param/monohiroi/monohiroi_table.bin
*/
void monohiroi_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde7140ULL || rel >= 0xde7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de7180 size=256 callers=2 calls=1
   calls: sub_65d700
*/
void sub_de7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde7180ULL || rel >= 0xde7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de7280 size=768 callers=1 calls=6
   calls: sub_1307dd0, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_9b9070, sub_c4ac70
   ref: script/field_trade.dat
   ref: bin/script_event_data/add_poke.bin
*/
void field_trade(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde7280ULL || rel >= 0xde7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de7580 size=288 callers=1 calls=2
   calls: sub_1308340, sub_de76a0
*/
void sub_de7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde7580ULL || rel >= 0xde76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de76a0 size=672 callers=1 calls=1
   calls: sub_de8600
*/
void sub_de76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde76a0ULL || rel >= 0xde7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de7940 size=304 callers=1 calls=0
*/
void sub_de7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde7940ULL || rel >= 0xde7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de7a70 size=1472 callers=1 calls=19
   calls: sub_136b520, sub_136b580, sub_67b990, sub_67d450, sub_762700, sub_762d90, sub_763010, sub_7634d0, sub_763dd0, sub_763e00, sub_765ef0, sub_766220
   ... +7 more
*/
void sub_de7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde7a70ULL || rel >= 0xde8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de8030 size=1088 callers=1 calls=1
   calls: sub_136b690
*/
void sub_de8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8030ULL || rel >= 0xde8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de8470 size=352 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_de8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8470ULL || rel >= 0xde85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de85d0 size=16 callers=0 calls=0
*/
void sub_de85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde85d0ULL || rel >= 0xde85e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de85e0 size=16 callers=0 calls=0
*/
void sub_de85e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde85e0ULL || rel >= 0xde85f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de85f0 size=16 callers=0 calls=0
*/
void sub_de85f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde85f0ULL || rel >= 0xde8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de8600 size=272 callers=1 calls=0
*/
void sub_de8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8600ULL || rel >= 0xde8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de8710 size=704 callers=0 calls=0
*/
void sub_de8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8710ULL || rel >= 0xde89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de89d0 size=272 callers=2 calls=1
   calls: sub_65d700
*/
void sub_de89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde89d0ULL || rel >= 0xde8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de8ae0 size=16 callers=1 calls=0
*/
void sub_de8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8ae0ULL || rel >= 0xde8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de8af0 size=816 callers=0 calls=6
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_9b4f10, sub_de8e20
   ref: bin/script_event_data/event_encount_data.bin
*/
void event_encount_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8af0ULL || rel >= 0xde8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de8e20 size=2256 callers=1 calls=1
   calls: sub_de9890
*/
void sub_de8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8e20ULL || rel >= 0xde96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de96f0 size=416 callers=14 calls=0
*/
void sub_de96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde96f0ULL || rel >= 0xde9890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de9890 size=704 callers=1 calls=1
   calls: sub_de9cc0
*/
void sub_de9890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9890ULL || rel >= 0xde9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de9b50 size=320 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_de9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9b50ULL || rel >= 0xde9c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de9c90 size=16 callers=0 calls=0
*/
void sub_de9c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9c90ULL || rel >= 0xde9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de9ca0 size=16 callers=0 calls=0
*/
void sub_de9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9ca0ULL || rel >= 0xde9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de9cb0 size=16 callers=0 calls=0
*/
void sub_de9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9cb0ULL || rel >= 0xde9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de9cc0 size=272 callers=1 calls=0
*/
void sub_de9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9cc0ULL || rel >= 0xde9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00de9dd0 size=704 callers=0 calls=0
*/
void sub_de9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9dd0ULL || rel >= 0xdea090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dea090 size=256 callers=2 calls=1
   calls: sub_65d700
*/
void sub_dea090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdea090ULL || rel >= 0xdea190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dea190 size=768 callers=1 calls=6
   calls: sub_1307dd0, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_c4ac70, sub_e87dd0
   ref: script/field_trade.dat
   ref: bin/script_event_data/field_trade.bin
*/
void field_trade_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdea190ULL || rel >= 0xdea490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dea490 size=288 callers=1 calls=2
   calls: sub_1308340, sub_dea5b0
*/
void sub_dea490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdea490ULL || rel >= 0xdea5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dea5b0 size=672 callers=1 calls=1
   calls: sub_deb5a0
*/
void sub_dea5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdea5b0ULL || rel >= 0xdea850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dea850 size=304 callers=3 calls=0
*/
void sub_dea850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdea850ULL || rel >= 0xdea980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dea980 size=1840 callers=1 calls=21
   calls: sub_136b520, sub_136b580, sub_136b690, sub_67b990, sub_67d450, sub_762700, sub_762d90, sub_763010, sub_7634d0, sub_763dd0, sub_763e00, sub_765ef0
   ... +9 more
*/
void sub_dea980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdea980ULL || rel >= 0xdeb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb0b0 size=864 callers=1 calls=0
*/
void sub_deb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb0b0ULL || rel >= 0xdeb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb410 size=352 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_deb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb410ULL || rel >= 0xdeb570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb570 size=16 callers=0 calls=0
*/
void sub_deb570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb570ULL || rel >= 0xdeb580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb580 size=16 callers=0 calls=0
*/
void sub_deb580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb580ULL || rel >= 0xdeb590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb590 size=16 callers=0 calls=0
*/
void sub_deb590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb590ULL || rel >= 0xdeb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb5a0 size=272 callers=1 calls=0
*/
void sub_deb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb5a0ULL || rel >= 0xdeb6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb6b0 size=704 callers=0 calls=0
*/
void sub_deb6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb6b0ULL || rel >= 0xdeb970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb970 size=32 callers=3 calls=0
*/
void sub_deb970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb970ULL || rel >= 0xdeb990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deb990 size=272 callers=2 calls=1
   calls: sub_d0b4a0
*/
void sub_deb990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb990ULL || rel >= 0xdebaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debaa0 size=64 callers=0 calls=1
   calls: sub_ded9e0
*/
void sub_debaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebaa0ULL || rel >= 0xdebae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debae0 size=48 callers=0 calls=0
*/
void sub_debae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebae0ULL || rel >= 0xdebb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debb10 size=112 callers=0 calls=2
   calls: sub_971950, sub_ded9e0
*/
void sub_debb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebb10ULL || rel >= 0xdebb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debb80 size=96 callers=0 calls=1
   calls: sub_972c70
*/
void sub_debb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebb80ULL || rel >= 0xdebbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debbe0 size=64 callers=0 calls=1
   calls: sub_d09910
*/
void sub_debbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebbe0ULL || rel >= 0xdebc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debc20 size=64 callers=0 calls=2
   calls: sub_d0b0f0, sub_ded9e0
*/
void sub_debc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebc20ULL || rel >= 0xdebc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debc60 size=16 callers=0 calls=0
*/
void sub_debc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebc60ULL || rel >= 0xdebc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debc70 size=16 callers=0 calls=0
*/
void sub_debc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebc70ULL || rel >= 0xdebc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debc80 size=16 callers=0 calls=0
*/
void sub_debc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebc80ULL || rel >= 0xdebc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debc90 size=16 callers=0 calls=0
*/
void sub_debc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebc90ULL || rel >= 0xdebca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debca0 size=16 callers=0 calls=0
*/
void sub_debca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebca0ULL || rel >= 0xdebcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debcb0 size=16 callers=0 calls=0
*/
void sub_debcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebcb0ULL || rel >= 0xdebcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debcc0 size=32 callers=0 calls=1
   calls: sub_d4fba0
*/
void sub_debcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebcc0ULL || rel >= 0xdebce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debce0 size=16 callers=0 calls=0
*/
void sub_debce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebce0ULL || rel >= 0xdebcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debcf0 size=16 callers=0 calls=0
*/
void sub_debcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebcf0ULL || rel >= 0xdebd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debd00 size=32 callers=0 calls=0
*/
void sub_debd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebd00ULL || rel >= 0xdebd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debd20 size=32 callers=0 calls=0
*/
void sub_debd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebd20ULL || rel >= 0xdebd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debd40 size=16 callers=0 calls=0
*/
void sub_debd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebd40ULL || rel >= 0xdebd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debd50 size=16 callers=0 calls=0
*/
void sub_debd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebd50ULL || rel >= 0xdebd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debd60 size=16 callers=0 calls=0
*/
void sub_debd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebd60ULL || rel >= 0xdebd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debd70 size=16 callers=0 calls=0
*/
void sub_debd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebd70ULL || rel >= 0xdebd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debd80 size=16 callers=0 calls=0
*/
void sub_debd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebd80ULL || rel >= 0xdebd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debd90 size=16 callers=0 calls=0
*/
void sub_debd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebd90ULL || rel >= 0xdebda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debda0 size=16 callers=0 calls=0
*/
void sub_debda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebda0ULL || rel >= 0xdebdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debdb0 size=16 callers=0 calls=0
*/
void sub_debdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebdb0ULL || rel >= 0xdebdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debdc0 size=16 callers=0 calls=0
*/
void sub_debdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebdc0ULL || rel >= 0xdebdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debdd0 size=16 callers=0 calls=0
*/
void sub_debdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebdd0ULL || rel >= 0xdebde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debde0 size=16 callers=0 calls=0
*/
void sub_debde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebde0ULL || rel >= 0xdebdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debdf0 size=32 callers=0 calls=0
*/
void sub_debdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebdf0ULL || rel >= 0xdebe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe10 size=16 callers=0 calls=0
*/
void sub_debe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe10ULL || rel >= 0xdebe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe20 size=16 callers=0 calls=0
*/
void sub_debe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe20ULL || rel >= 0xdebe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe30 size=16 callers=0 calls=0
*/
void sub_debe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe30ULL || rel >= 0xdebe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe40 size=16 callers=0 calls=0
*/
void sub_debe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe40ULL || rel >= 0xdebe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe50 size=16 callers=0 calls=0
*/
void sub_debe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe50ULL || rel >= 0xdebe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe60 size=16 callers=0 calls=0
*/
void sub_debe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe60ULL || rel >= 0xdebe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe70 size=16 callers=0 calls=0
*/
void sub_debe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe70ULL || rel >= 0xdebe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe80 size=16 callers=0 calls=0
*/
void sub_debe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe80ULL || rel >= 0xdebe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debe90 size=16 callers=0 calls=0
*/
void sub_debe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebe90ULL || rel >= 0xdebea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debea0 size=16 callers=0 calls=0
*/
void sub_debea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebea0ULL || rel >= 0xdebeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debeb0 size=16 callers=0 calls=0
*/
void sub_debeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebeb0ULL || rel >= 0xdebec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debec0 size=64 callers=0 calls=1
   calls: sub_ded9e0
*/
void sub_debec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebec0ULL || rel >= 0xdebf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debf00 size=64 callers=0 calls=1
   calls: sub_ded9e0
*/
void sub_debf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebf00ULL || rel >= 0xdebf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debf40 size=16 callers=0 calls=0
*/
void sub_debf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebf40ULL || rel >= 0xdebf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debf50 size=112 callers=0 calls=1
   calls: sub_c8dd50
*/
void sub_debf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebf50ULL || rel >= 0xdebfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00debfc0 size=112 callers=0 calls=1
   calls: sub_c8dd50
*/
void sub_debfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdebfc0ULL || rel >= 0xdec030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec030 size=112 callers=0 calls=1
   calls: sub_c8dd50
*/
void sub_dec030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec030ULL || rel >= 0xdec0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec0a0 size=96 callers=0 calls=1
   calls: sub_c8dd50
*/
void sub_dec0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec0a0ULL || rel >= 0xdec100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec100 size=96 callers=0 calls=1
   calls: sub_c8dd50
*/
void sub_dec100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec100ULL || rel >= 0xdec160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec160 size=96 callers=0 calls=1
   calls: sub_c8dd50
*/
void sub_dec160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec160ULL || rel >= 0xdec1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec1c0 size=192 callers=0 calls=2
   calls: sub_13ed240, sub_c8dd50
*/
void sub_dec1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec1c0ULL || rel >= 0xdec280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec280 size=192 callers=0 calls=2
   calls: sub_13ed240, sub_c8dd50
*/
void sub_dec280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec280ULL || rel >= 0xdec340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec340 size=192 callers=0 calls=2
   calls: sub_13ed240, sub_c8dd50
*/
void sub_dec340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec340ULL || rel >= 0xdec400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec400 size=64 callers=0 calls=1
   calls: sub_ded9e0
*/
void sub_dec400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec400ULL || rel >= 0xdec440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec440 size=128 callers=0 calls=2
   calls: sub_c8e1a0, sub_ded9e0
*/
void sub_dec440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec440ULL || rel >= 0xdec4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec4c0 size=128 callers=0 calls=2
   calls: sub_c8e1a0, sub_ded9e0
*/
void sub_dec4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec4c0ULL || rel >= 0xdec540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec540 size=128 callers=0 calls=2
   calls: sub_c8e1a0, sub_ded9e0
*/
void sub_dec540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec540ULL || rel >= 0xdec5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec5c0 size=16 callers=0 calls=0
*/
void sub_dec5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec5c0ULL || rel >= 0xdec5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec5d0 size=240 callers=0 calls=1
   calls: sub_cdc200
*/
void sub_dec5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec5d0ULL || rel >= 0xdec6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec6c0 size=224 callers=0 calls=1
   calls: sub_cdc200
*/
void sub_dec6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec6c0ULL || rel >= 0xdec7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec7a0 size=224 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_dec7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec7a0ULL || rel >= 0xdec880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec880 size=208 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_dec880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec880ULL || rel >= 0xdec950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dec950 size=304 callers=0 calls=2
   calls: sub_d0ccf0, sub_ded8b0
*/
void sub_dec950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec950ULL || rel >= 0xdeca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deca80 size=208 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_deca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeca80ULL || rel >= 0xdecb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00decb50 size=208 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_decb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdecb50ULL || rel >= 0xdecc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00decc20 size=224 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_decc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdecc20ULL || rel >= 0xdecd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00decd00 size=240 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_decd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdecd00ULL || rel >= 0xdecdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00decdf0 size=224 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_decdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdecdf0ULL || rel >= 0xdeced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deced0 size=208 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_deced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeced0ULL || rel >= 0xdecfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00decfa0 size=208 callers=0 calls=1
   calls: sub_ded8b0
*/
void sub_decfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdecfa0ULL || rel >= 0xded070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded070 size=304 callers=0 calls=2
   calls: sub_d0d500, sub_ded8b0
*/
void sub_ded070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded070ULL || rel >= 0xded1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded1a0 size=336 callers=0 calls=3
   calls: sub_d0d500, sub_ded8b0, sub_ded9e0
*/
void sub_ded1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded1a0ULL || rel >= 0xded2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded2f0 size=368 callers=0 calls=3
   calls: sub_972c70, sub_9733f0, sub_ded9e0
*/
void sub_ded2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded2f0ULL || rel >= 0xded460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded460 size=64 callers=0 calls=1
   calls: sub_d0b1f0
*/
void sub_ded460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded460ULL || rel >= 0xded4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded4a0 size=64 callers=0 calls=2
   calls: sub_d0b200, sub_ded9e0
*/
void sub_ded4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded4a0ULL || rel >= 0xded4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded4e0 size=64 callers=0 calls=1
   calls: sub_d0acd0
*/
void sub_ded4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded4e0ULL || rel >= 0xded520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded520 size=64 callers=0 calls=2
   calls: sub_d0b210, sub_ded9e0
*/
void sub_ded520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded520ULL || rel >= 0xded560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded560 size=16 callers=0 calls=0
*/
void sub_ded560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded560ULL || rel >= 0xded570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded570 size=16 callers=0 calls=0
*/
void sub_ded570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded570ULL || rel >= 0xded580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded580 size=16 callers=0 calls=0
*/
void sub_ded580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded580ULL || rel >= 0xded590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded590 size=16 callers=0 calls=0
*/
void sub_ded590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded590ULL || rel >= 0xded5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded5a0 size=16 callers=0 calls=0
*/
void sub_ded5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded5a0ULL || rel >= 0xded5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded5b0 size=112 callers=0 calls=2
   calls: sub_d0b580, sub_ded9e0
*/
void sub_ded5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded5b0ULL || rel >= 0xded620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded620 size=112 callers=0 calls=1
   calls: sub_d0b570
*/
void sub_ded620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded620ULL || rel >= 0xded690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded690 size=16 callers=0 calls=0
*/
void sub_ded690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded690ULL || rel >= 0xded6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded6a0 size=16 callers=0 calls=0
*/
void sub_ded6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded6a0ULL || rel >= 0xded6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded6b0 size=240 callers=0 calls=2
   calls: Play_UI_common_encount, sub_d281c0
   ref: EffOverHead01
*/
void EffOverHead01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded6b0ULL || rel >= 0xded7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded7a0 size=16 callers=0 calls=0
*/
void sub_ded7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded7a0ULL || rel >= 0xded7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded7b0 size=16 callers=0 calls=0
*/
void sub_ded7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded7b0ULL || rel >= 0xded7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded7c0 size=16 callers=0 calls=0
*/
void sub_ded7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded7c0ULL || rel >= 0xded7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded7d0 size=48 callers=0 calls=1
   calls: sub_d0b850
*/
void sub_ded7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded7d0ULL || rel >= 0xded800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded800 size=48 callers=0 calls=1
   calls: sub_d0b850
*/
void sub_ded800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded800ULL || rel >= 0xded830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded830 size=16 callers=0 calls=0
*/
void sub_ded830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded830ULL || rel >= 0xded840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded840 size=80 callers=0 calls=2
   calls: sub_d4fb90, sub_d4fba0
*/
void sub_ded840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded840ULL || rel >= 0xded890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded890 size=16 callers=0 calls=0
*/
void sub_ded890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded890ULL || rel >= 0xded8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded8a0 size=16 callers=0 calls=0
*/
void sub_ded8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded8a0ULL || rel >= 0xded8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded8b0 size=304 callers=12 calls=0
*/
void sub_ded8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded8b0ULL || rel >= 0xded9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded9e0 size=16 callers=16 calls=0
*/
void sub_ded9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded9e0ULL || rel >= 0xded9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ded9f0 size=16 callers=0 calls=0
*/
void sub_ded9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded9f0ULL || rel >= 0xdeda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deda00 size=16 callers=0 calls=0
*/
void sub_deda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeda00ULL || rel >= 0xdeda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deda10 size=16 callers=0 calls=0
*/
void sub_deda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeda10ULL || rel >= 0xdeda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deda20 size=64 callers=0 calls=0
*/
void sub_deda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeda20ULL || rel >= 0xdeda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deda60 size=144 callers=0 calls=0
*/
void sub_deda60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeda60ULL || rel >= 0xdedaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedaf0 size=48 callers=0 calls=0
*/
void sub_dedaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedaf0ULL || rel >= 0xdedb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedb20 size=48 callers=0 calls=0
*/
void sub_dedb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedb20ULL || rel >= 0xdedb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedb50 size=48 callers=0 calls=0
*/
void sub_dedb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedb50ULL || rel >= 0xdedb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedb80 size=112 callers=0 calls=0
*/
void sub_dedb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedb80ULL || rel >= 0xdedbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedbf0 size=64 callers=0 calls=0
*/
void sub_dedbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedbf0ULL || rel >= 0xdedc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedc30 size=32 callers=0 calls=0
*/
void sub_dedc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedc30ULL || rel >= 0xdedc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedc50 size=16 callers=0 calls=0
*/
void sub_dedc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedc50ULL || rel >= 0xdedc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedc60 size=368 callers=0 calls=0
*/
void sub_dedc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedc60ULL || rel >= 0xdeddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deddd0 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeddd0ULL || rel >= 0xdedfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dedfa0 size=368 callers=1 calls=1
   calls: sub_c947c0
*/
void sub_dedfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdedfa0ULL || rel >= 0xdee110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee110 size=80 callers=0 calls=0
*/
void sub_dee110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee110ULL || rel >= 0xdee160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee160 size=80 callers=0 calls=0
*/
void sub_dee160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee160ULL || rel >= 0xdee1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee1b0 size=336 callers=1 calls=4
   calls: sub_c50b30, sub_c94d10, sub_c95020, sub_c95040
   ref: bin/field/param/symbol_encount/ai.blua
*/
void unnamed_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee1b0ULL || rel >= 0xdee300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee300 size=128 callers=1 calls=2
   calls: sub_c95200, sub_c952b0
*/
void sub_dee300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee300ULL || rel >= 0xdee380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee380 size=64 callers=1 calls=1
   calls: sub_dee3c0
*/
void sub_dee380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee380ULL || rel >= 0xdee3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee3c0 size=704 callers=1 calls=6
   calls: sub_13b1c90, sub_c95200, sub_c95250, sub_c952b0, sub_d09940, sub_d09bb0
*/
void sub_dee3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee3c0ULL || rel >= 0xdee680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee680 size=144 callers=2 calls=1
   calls: sub_c95250
*/
void sub_dee680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee680ULL || rel >= 0xdee710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee710 size=144 callers=1 calls=1
   calls: sub_c95250
*/
void sub_dee710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee710ULL || rel >= 0xdee7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee7a0 size=144 callers=0 calls=1
   calls: sub_c95250
*/
void sub_dee7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee7a0ULL || rel >= 0xdee830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee830 size=16 callers=0 calls=0
*/
void sub_dee830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee830ULL || rel >= 0xdee840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee840 size=16 callers=0 calls=0
*/
void sub_dee840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee840ULL || rel >= 0xdee850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee850 size=16 callers=0 calls=0
*/
void sub_dee850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee850ULL || rel >= 0xdee860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee860 size=16 callers=0 calls=0
*/
void sub_dee860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee860ULL || rel >= 0xdee870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee870 size=176 callers=0 calls=4
   calls: sub_15498c0, sub_154ab20, sub_dee930, sub_deea20
   ref: SLNoy2O
   ref: CLwixWp
*/
void SLNoy2O(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee870ULL || rel >= 0xdee920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee920 size=16 callers=0 calls=0
*/
void sub_dee920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee920ULL || rel >= 0xdee930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dee930 size=240 callers=3 calls=8
   calls: cannot_properly_align_memory_for_s, sub_154a9b0, sub_154ab00, sub_154bf00, sub_154c880, sub_154d7f0, sub_deeb10, sub_deee10
*/
void sub_dee930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdee930ULL || rel >= 0xdeea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deea20 size=240 callers=3 calls=7
   calls: sub_15497e0, sub_154a9b0, sub_154ab20, sub_154ae60, sub_154bf00, sub_154c4f0, sub_154c880
*/
void sub_deea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeea20ULL || rel >= 0xdeeb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deeb10 size=320 callers=5 calls=3
   calls: seperator_mark, sub_1c0, sub_ce0
*/
void sub_deeb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeeb10ULL || rel >= 0xdeec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deec50 size=448 callers=1 calls=5
   calls: seperator_mark, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: cannot properly align memory for '%s'
*/
void cannot_properly_align_memory_for_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeec50ULL || rel >= 0xdeee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deee10 size=448 callers=1 calls=10
   calls: name, seperator_mark, sub_154bf60, sub_154c170, sub_154ca50, sub_154cfd0, sub_154d550, sub_1c0, too_many_upvalues, typeinfo
*/
void sub_deee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeee10ULL || rel >= 0xdeefd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00deefd0 size=1824 callers=3 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: std::string sol::detail::ctti_get_type_name() [T = field::content::HaxeSymbolPokemonObject *, sepera
   ref: (anonymous namespace)
   ref: seperator_mark
*/
void seperator_mark(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeefd0ULL || rel >= 0xdef6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00def6f0 size=80 callers=0 calls=1
   calls: sub_ce0
*/
void sub_def6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef6f0ULL || rel >= 0xdef740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00def740 size=128 callers=0 calls=3
   calls: class_check_2, sub_154af10, sub_154c260
*/
void sub_def740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef740ULL || rel >= 0xdef7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00def7c0 size=176 callers=0 calls=2
   calls: seperator_mark_4, sub_1c0
   ref: sol: cannot call '__pairs/pairs' on type '%s': it is not recognized as a container
*/
void pairs_on_type_s_it_is_not_recognized_as_a_container(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef7c0ULL || rel >= 0xdef870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00def870 size=128 callers=0 calls=2
   calls: class_cast, sub_154c260
*/
void sub_def870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef870ULL || rel >= 0xdef8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00def8f0 size=240 callers=2 calls=6
   calls: class_check, sub_1549da0, sub_154ab20, sub_154af10, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef8f0ULL || rel >= 0xdef9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00def9e0 size=16 callers=0 calls=0
*/
void sub_def9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef9e0ULL || rel >= 0xdef9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00def9f0 size=672 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b320, sub_154bc50, sub_154bfe0, sub_154c4f0, sub_154c7a0, sub_154cb00, sub_deeb10, sub_defc90, sub_defd50
   ... +2 more
   ref: value at this index does not properly reflect the desired type
   ref: class_check
   ref: value is not a valid userdata
*/
void class_check(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef9f0ULL || rel >= 0xdefc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00defc90 size=192 callers=39 calls=2
   calls: seperator_mark_2, sub_1c0
*/
void sub_defc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdefc90ULL || rel >= 0xdefd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00defd50 size=320 callers=6 calls=3
   calls: seperator_mark_2, sub_1c0, sub_ce0
*/
void sub_defd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdefd50ULL || rel >= 0xdefe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00defe90 size=1824 callers=8 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = field::content::HaxeSymbolPokemonObject, seperato
*/
void seperator_mark_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdefe90ULL || rel >= 0xdf05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df05b0 size=320 callers=4 calls=3
   calls: seperator_mark_3, sub_1c0, sub_ce0
*/
void sub_df05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf05b0ULL || rel >= 0xdf06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df06f0 size=1760 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<field::content::Haxe
*/
void seperator_mark_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf06f0ULL || rel >= 0xdf0dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df0dd0 size=320 callers=2 calls=3
   calls: seperator_mark_4, sub_1c0, sub_ce0
*/
void sub_df0dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf0dd0ULL || rel >= 0xdf0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df0f10 size=1760 callers=2 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::as_container_t<field::content::HaxeSymbolPok
*/
void seperator_mark_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf0f10ULL || rel >= 0xdf15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df15f0 size=672 callers=2 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b320, sub_154bc50, sub_154bfe0, sub_154c4f0, sub_154c7a0, sub_154cb00, sub_deeb10, sub_defc90, sub_defd50
   ... +2 more
   ref: value at this index does not properly reflect the desired type
   ref: class_check
   ref: value is not a valid userdata
*/
void class_check_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf15f0ULL || rel >= 0xdf1890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df1890 size=1328 callers=206 calls=1
   calls: sub_1c0
   ref: __tostring
   ref: __newindex
   ref: __typeinfo
*/
void typeinfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf1890ULL || rel >= 0xdf1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df1dc0 size=800 callers=0 calls=1
   calls: sub_ce0
*/
void sub_df1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf1dc0ULL || rel >= 0xdf20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df20e0 size=16 callers=0 calls=0
*/
void sub_df20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf20e0ULL || rel >= 0xdf20f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df20f0 size=16 callers=0 calls=0
*/
void sub_df20f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf20f0ULL || rel >= 0xdf2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df2100 size=176 callers=0 calls=4
   calls: sub_15498c0, sub_154ab20, sub_dee930, sub_deea20
   ref: SLW05E4
   ref: CLwixWp
*/
void SLW05E4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf2100ULL || rel >= 0xdf21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df21b0 size=16 callers=0 calls=0
*/
void sub_df21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf21b0ULL || rel >= 0xdf21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df21c0 size=16 callers=0 calls=0
*/
void sub_df21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf21c0ULL || rel >= 0xdf21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df21d0 size=16 callers=0 calls=0
*/
void sub_df21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf21d0ULL || rel >= 0xdf21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df21e0 size=176 callers=0 calls=4
   calls: sub_15498c0, sub_154ab20, sub_dee930, sub_deea20
   ref: SelxSXW
   ref: CLwixWp
*/
void SelxSXW(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf21e0ULL || rel >= 0xdf2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df2290 size=16 callers=0 calls=0
*/
void sub_df2290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf2290ULL || rel >= 0xdf22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df22a0 size=16 callers=0 calls=0
*/
void sub_df22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf22a0ULL || rel >= 0xdf22b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df22b0 size=16 callers=0 calls=0
*/
void sub_df22b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf22b0ULL || rel >= 0xdf22c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df22c0 size=16 callers=0 calls=0
*/
void sub_df22c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf22c0ULL || rel >= 0xdf22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df22d0 size=16 callers=0 calls=0
*/
void sub_df22d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf22d0ULL || rel >= 0xdf22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df22e0 size=16 callers=0 calls=0
*/
void sub_df22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf22e0ULL || rel >= 0xdf22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df22f0 size=8320 callers=0 calls=22
   calls: sub_15497e0, sub_15498c0, sub_154ab20, sub_154ae60, sub_154ca50, sub_df4370, sub_df4440, sub_df4730, sub_df4a40, sub_df4ce0, sub_e331a0, sub_e33440
   ... +10 more
   ref: SetEventCollisionR
   ref: SANDSTORM
   ref: DEAD_GRASS
   ref: CAMP_QUESTION
   ref: Normalize
   ref: LengthSq
   ref: GetMovementAreaRandomPos
   ref: BICYCLE_WATER
*/
void SetBackupScriptState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf22f0ULL || rel >= 0xdf4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df4370 size=208 callers=1 calls=6
   calls: sub_15497e0, sub_15498c0, sub_154a9b0, sub_154bf00, sub_154c880, sub_df5a20
*/
void sub_df4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf4370ULL || rel >= 0xdf4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df4440 size=752 callers=1 calls=4
   calls: sub_c70, sub_ce0, sub_df5af0, sub_e013d0
*/
void sub_df4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf4440ULL || rel >= 0xdf4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df4730 size=784 callers=1 calls=4
   calls: sub_c70, sub_ce0, sub_e014b0, sub_e0bdb0
*/
void sub_df4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf4730ULL || rel >= 0xdf4a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df4a40 size=672 callers=1 calls=4
   calls: sub_c70, sub_ce0, sub_e0be90, sub_e15980
*/
void sub_df4a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf4a40ULL || rel >= 0xdf4ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df4ce0 size=3392 callers=1 calls=4
   calls: sub_c70, sub_ce0, sub_e15a60, sub_e330c0
*/
void sub_df4ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf4ce0ULL || rel >= 0xdf5a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df5a20 size=208 callers=1 calls=8
   calls: sub_15497e0, sub_154a9b0, sub_154ab00, sub_154ab20, sub_154ae60, sub_154bf00, sub_154c880, sub_154ca50
*/
void sub_df5a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf5a20ULL || rel >= 0xdf5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df5af0 size=5552 callers=1 calls=6
   calls: sub_c70, sub_ce0, sub_df8de0, sub_df9460, sub_dfdbb0, typeinfo
*/
void sub_df5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf5af0ULL || rel >= 0xdf70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df70a0 size=176 callers=0 calls=6
   calls: sub_154ab00, sub_154ae60, sub_154b750, sub_154bf00, sub_154c3b0, sub_154cb00
*/
void sub_df70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf70a0ULL || rel >= 0xdf7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7150 size=448 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b750, sub_154b940, sub_154c4f0, sub_154cb00, sub_df7fa0, sub_df8590, sub_df86d0, sub_df8810, sub_df8950
   ... +2 more
   ref: (unknown)
   ref: sol: attempt to index (set) nil value "%s" on userdata (bad (misspelled?) key name or does not exist
*/
void unknown(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7150ULL || rel >= 0xdf7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7310 size=384 callers=0 calls=6
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_df7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7310ULL || rel >= 0xdf7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7490 size=384 callers=0 calls=6
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_df7490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7490ULL || rel >= 0xdf7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7610 size=16 callers=0 calls=0
*/
void sub_df7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7610ULL || rel >= 0xdf7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7620 size=16 callers=0 calls=0
*/
void sub_df7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7620ULL || rel >= 0xdf7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7630 size=16 callers=0 calls=0
*/
void sub_df7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7630ULL || rel >= 0xdf7640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7640 size=16 callers=0 calls=0
*/
void sub_df7640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7640ULL || rel >= 0xdf7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7650 size=16 callers=0 calls=0
*/
void sub_df7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7650ULL || rel >= 0xdf7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7660 size=16 callers=0 calls=0
*/
void sub_df7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7660ULL || rel >= 0xdf7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7670 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7670ULL || rel >= 0xdf76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df76c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf76c0ULL || rel >= 0xdf7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7710 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7710ULL || rel >= 0xdf7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7760 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7760ULL || rel >= 0xdf77b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df77b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df77b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf77b0ULL || rel >= 0xdf7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7800 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7800ULL || rel >= 0xdf7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7850 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7850ULL || rel >= 0xdf78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df78a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf78a0ULL || rel >= 0xdf78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df78f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf78f0ULL || rel >= 0xdf7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7940 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7940ULL || rel >= 0xdf7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7990 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7990ULL || rel >= 0xdf79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df79e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf79e0ULL || rel >= 0xdf7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7a30 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7a30ULL || rel >= 0xdf7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7a80 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7a80ULL || rel >= 0xdf7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7ad0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7ad0ULL || rel >= 0xdf7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7b20 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7b20ULL || rel >= 0xdf7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7b70 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7b70ULL || rel >= 0xdf7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7bc0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7bc0ULL || rel >= 0xdf7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7c10 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7c10ULL || rel >= 0xdf7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7c60 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7c60ULL || rel >= 0xdf7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7cb0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7cb0ULL || rel >= 0xdf7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7d00 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7d00ULL || rel >= 0xdf7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7d50 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7d50ULL || rel >= 0xdf7da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7da0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7da0ULL || rel >= 0xdf7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7df0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7df0ULL || rel >= 0xdf7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7e40 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_df7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7e40ULL || rel >= 0xdf7e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7e90 size=16 callers=0 calls=0
*/
void sub_df7e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7e90ULL || rel >= 0xdf7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7ea0 size=208 callers=1 calls=2
   calls: sub_15498c0, sub_ce0
*/
void sub_df7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7ea0ULL || rel >= 0xdf7f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7f70 size=48 callers=0 calls=1
   calls: sub_df7ea0
*/
void sub_df7f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7f70ULL || rel >= 0xdf7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df7fa0 size=1520 callers=1 calls=13
   calls: sub_15497e0, sub_15498c0, sub_154ae60, sub_154af10, sub_154b940, sub_154bc50, sub_65bf00, sub_c70, sub_ce0, sub_df8bc0, sub_df8de0, sub_df9260
   ... +1 more
*/
void sub_df7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7fa0ULL || rel >= 0xdf8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df8590 size=320 callers=4 calls=3
   calls: seperator_mark_5, sub_1c0, sub_ce0
*/
void sub_df8590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf8590ULL || rel >= 0xdf86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df86d0 size=320 callers=4 calls=3
   calls: seperator_mark_6, sub_1c0, sub_ce0
*/
void sub_df86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf86d0ULL || rel >= 0xdf8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df8810 size=320 callers=12 calls=3
   calls: seperator_mark_7, sub_1c0, sub_ce0
*/
void sub_df8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf8810ULL || rel >= 0xdf8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df8950 size=320 callers=2 calls=3
   calls: seperator_mark_7, sub_1c0, sub_ce0
*/
void sub_df8950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf8950ULL || rel >= 0xdf8a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df8a90 size=144 callers=0 calls=4
   calls: sub_154a9b0, sub_154bc50, sub_154bf00, sub_154c880
*/
void sub_df8a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf8a90ULL || rel >= 0xdf8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df8b20 size=160 callers=0 calls=5
   calls: sub_15497e0, sub_15498c0, sub_154ae60, sub_154bc50, sub_65bf00
*/
void sub_df8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf8b20ULL || rel >= 0xdf8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df8bc0 size=544 callers=29 calls=1
   calls: sub_df8de0
*/
void sub_df8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf8bc0ULL || rel >= 0xdf8de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df8de0 size=1152 callers=9 calls=0
*/
void sub_df8de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf8de0ULL || rel >= 0xdf9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df9260 size=512 callers=4 calls=4
   calls: sub_15497e0, sub_15498c0, sub_154ae60, sub_c70
*/
void sub_df9260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf9260ULL || rel >= 0xdf9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df9460 size=272 callers=8 calls=0
*/
void sub_df9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf9460ULL || rel >= 0xdf9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df9570 size=864 callers=0 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_df9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf9570ULL || rel >= 0xdf98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df98d0 size=1808 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = field::content::HaxeVector2 *, seperator_mark = i
*/
void seperator_mark_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf98d0ULL || rel >= 0xdf9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00df9fe0 size=1760 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<field::content::Haxe
   ref: seperator_mark
*/
void seperator_mark_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf9fe0ULL || rel >= 0xdfa6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfa6c0 size=1808 callers=8 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: std::string sol::detail::ctti_get_type_name() [T = field::content::HaxeVector2, seperator_mark = int
   ref: seperator_mark
*/
void seperator_mark_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfa6c0ULL || rel >= 0xdfadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfadd0 size=176 callers=4 calls=3
   calls: sub_154a9b0, sub_154ae60, sub_154bf00
*/
void sub_dfadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfadd0ULL || rel >= 0xdfae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfae80 size=192 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_dfaf40
   ref: class_cast
*/
void class_cast_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfae80ULL || rel >= 0xdfaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfaf40 size=192 callers=21 calls=2
   calls: seperator_mark_7, sub_1c0
*/
void sub_dfaf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfaf40ULL || rel >= 0xdfb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb000 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b640, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb000ULL || rel >= 0xdfb0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb0d0 size=192 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s, sub_154ab20, sub_154b640, sub_154bc50, sub_df8810, sub_dfb3e0
*/
void sub_dfb0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb0d0ULL || rel >= 0xdfb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb190 size=592 callers=8 calls=5
   calls: seperator_mark_7, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: aligned allocation of userdata block (pointer section) for '%s' failed
   ref: aligned allocation of userdata block (data section) for '%s' failed
*/
void aligned_allocation_of_userdata_block_data_section_for_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb190ULL || rel >= 0xdfb3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb3e0 size=480 callers=8 calls=10
   calls: name, seperator_mark_7, sub_154bf60, sub_154c170, sub_154ca50, sub_154cfd0, sub_154d550, sub_1c0, too_many_upvalues, typeinfo
*/
void sub_dfb3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb3e0ULL || rel >= 0xdfb5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb5c0 size=112 callers=0 calls=3
   calls: class_check_4, sub_154af10, sub_154c260
*/
void sub_dfb5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb5c0ULL || rel >= 0xdfb630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb630 size=176 callers=0 calls=2
   calls: seperator_mark_8, sub_1c0
   ref: sol: cannot call '__pairs/pairs' on type '%s': it is not recognized as a container
*/
void pairs_on_type_s_it_is_not_recognized_as_a_container_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb630ULL || rel >= 0xdfb6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb6e0 size=128 callers=0 calls=2
   calls: class_cast_4, sub_154c260
*/
void sub_dfb6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb6e0ULL || rel >= 0xdfb760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb760 size=240 callers=2 calls=6
   calls: class_check_3, sub_1549da0, sub_154ab20, sub_154af10, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb760ULL || rel >= 0xdfb850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfb850 size=672 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b320, sub_154bc50, sub_154bfe0, sub_154c4f0, sub_154c7a0, sub_154cb00, sub_df8590, sub_df86d0, sub_df8810
   ... +2 more
   ref: value at this index does not properly reflect the desired type
   ref: class_check
   ref: value is not a valid userdata
*/
void class_check_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb850ULL || rel >= 0xdfbaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfbaf0 size=320 callers=2 calls=3
   calls: seperator_mark_8, sub_1c0, sub_ce0
*/
void sub_dfbaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfbaf0ULL || rel >= 0xdfbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfbc30 size=1824 callers=2 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::as_container_t<field::content::HaxeVector2>,
*/
void seperator_mark_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfbc30ULL || rel >= 0xdfc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfc350 size=32 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfc350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc350ULL || rel >= 0xdfc370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfc370 size=672 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b320, sub_154bc50, sub_154bfe0, sub_154c4f0, sub_154c7a0, sub_154cb00, sub_df8590, sub_df86d0, sub_df8810
   ... +2 more
   ref: value at this index does not properly reflect the desired type
   ref: class_check
   ref: value is not a valid userdata
*/
void class_check_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc370ULL || rel >= 0xdfc610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfc610 size=192 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s, sub_154ab20, sub_154b640, sub_154bc50, sub_df8810, sub_dfb3e0
*/
void sub_dfc610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc610ULL || rel >= 0xdfc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfc6d0 size=160 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s, class_cast_5, sub_154ab20, sub_154bc50, sub_df8810, sub_dfb3e0
*/
void sub_dfc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc6d0ULL || rel >= 0xdfc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfc770 size=240 callers=4 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc770ULL || rel >= 0xdfc860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfc860 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc860ULL || rel >= 0xdfc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfc930 size=160 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s, class_cast_5, sub_154ab20, sub_154bc50, sub_df8810, sub_dfb3e0
*/
void sub_dfc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc930ULL || rel >= 0xdfc9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfc9d0 size=160 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s, class_cast_5, sub_154ab20, sub_154bc50, sub_df8810, sub_dfb3e0
*/
void sub_dfc9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc9d0ULL || rel >= 0xdfca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfca70 size=160 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s, class_cast_5, sub_154ab20, sub_154bc50, sub_df8810, sub_dfb3e0
*/
void sub_dfca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfca70ULL || rel >= 0xdfcb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfcb10 size=128 callers=0 calls=4
   calls: class_cast_7, sub_154ab20, sub_154bc50, sub_154bf20
*/
void sub_dfcb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfcb10ULL || rel >= 0xdfcb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfcb90 size=240 callers=4 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfcb90ULL || rel >= 0xdfcc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfcc80 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfcc80ULL || rel >= 0xdfcd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfcd50 size=128 callers=0 calls=4
   calls: class_cast_7, sub_154ab20, sub_154bc50, sub_154bf20
*/
void sub_dfcd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfcd50ULL || rel >= 0xdfcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfcdd0 size=128 callers=0 calls=4
   calls: class_cast_7, sub_154ab20, sub_154bc50, sub_154bf20
*/
void sub_dfcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfcdd0ULL || rel >= 0xdfce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfce50 size=128 callers=0 calls=4
   calls: class_cast_7, sub_154ab20, sub_154bc50, sub_154bf20
*/
void sub_dfce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfce50ULL || rel >= 0xdfced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfced0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfced0ULL || rel >= 0xdfcf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfcf00 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfcf00ULL || rel >= 0xdfcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfcfa0 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfcfa0ULL || rel >= 0xdfd070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd070 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd070ULL || rel >= 0xdfd0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd0a0 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd0a0ULL || rel >= 0xdfd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd140 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd140ULL || rel >= 0xdfd210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd210 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd210ULL || rel >= 0xdfd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd240 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd240ULL || rel >= 0xdfd270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd270 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd270ULL || rel >= 0xdfd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd2a0 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b640, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd2a0ULL || rel >= 0xdfd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd370 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd370ULL || rel >= 0xdfd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd3a0 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b640, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd3a0ULL || rel >= 0xdfd470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd470 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd470ULL || rel >= 0xdfd4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd4a0 size=192 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd4a0ULL || rel >= 0xdfd560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd560 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd560ULL || rel >= 0xdfd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd590 size=192 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_dfaf40
   ref: class_cast
*/
void class_cast_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd590ULL || rel >= 0xdfd650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd650 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd650ULL || rel >= 0xdfd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd680 size=224 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_dfaf40
   ref: class_cast
*/
void class_cast_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd680ULL || rel >= 0xdfd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd760 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd760ULL || rel >= 0xdfd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd790 size=224 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_dfaf40
   ref: class_cast
*/
void class_cast_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd790ULL || rel >= 0xdfd870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd870 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd870ULL || rel >= 0xdfd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd8a0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd8a0ULL || rel >= 0xdfd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd8d0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd8d0ULL || rel >= 0xdfd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfd900 size=256 callers=0 calls=7
   calls: aligned_allocation_of_userdata_block_data_section_for_s, sub_1549da0, sub_154ab20, sub_154bc50, sub_df8810, sub_dfaf40, sub_dfb3e0
   ref: class_cast
*/
void class_cast_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd900ULL || rel >= 0xdfda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfda00 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfda00ULL || rel >= 0xdfda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfda30 size=256 callers=0 calls=7
   calls: aligned_allocation_of_userdata_block_data_section_for_s, sub_1549da0, sub_154ab20, sub_154bc50, sub_df8810, sub_dfaf40, sub_dfb3e0
   ref: class_cast
*/
void class_cast_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfda30ULL || rel >= 0xdfdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfdb30 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfdb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfdb30ULL || rel >= 0xdfdb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfdb70 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dfdb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfdb70ULL || rel >= 0xdfdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfdbb0 size=352 callers=128 calls=2
   calls: sub_ce0, sub_df8bc0
*/
void sub_dfdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfdbb0ULL || rel >= 0xdfdd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfdd10 size=272 callers=110 calls=1
   calls: typeinfo
*/
void sub_dfdd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfdd10ULL || rel >= 0xdfde20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfde20 size=2160 callers=0 calls=38
   calls: name, newindex, newindex_10, newindex_11, newindex_12, newindex_13, newindex_2, newindex_3, newindex_4, newindex_5, newindex_6, newindex_7
   ... +26 more
   ref: class_cast
   ref: class_check
*/
void class_check_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfde20ULL || rel >= 0xdfe690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfe690 size=400 callers=1 calls=11
   calls: sub_154aac0, sub_154ab20, sub_154ae60, sub_154bc50, sub_154bf00, sub_154c2e0, sub_154cd10, sub_ce0, sub_dffd00, sub_dffe40, sub_dfff80
*/
void sub_dfe690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfe690ULL || rel >= 0xdfe820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfe820 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfe820ULL || rel >= 0xdfe9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfe9b0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfe9b0ULL || rel >= 0xdfeb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfeb40 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfeb40ULL || rel >= 0xdfecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfecd0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfecd0ULL || rel >= 0xdfee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfee60 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfee60ULL || rel >= 0xdfeff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfeff0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfeff0ULL || rel >= 0xdff180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dff180 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdff180ULL || rel >= 0xdff310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dff310 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdff310ULL || rel >= 0xdff4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dff4a0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdff4a0ULL || rel >= 0xdff630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dff630 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdff630ULL || rel >= 0xdff7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dff7c0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdff7c0ULL || rel >= 0xdff950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dff950 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdff950ULL || rel >= 0xdffae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dffae0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffae0ULL || rel >= 0xdffc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dffc70 size=80 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_dffc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffc70ULL || rel >= 0xdffcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dffcc0 size=16 callers=0 calls=0
*/
void sub_dffcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffcc0ULL || rel >= 0xdffcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dffcd0 size=16 callers=0 calls=0
*/
void sub_dffcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffcd0ULL || rel >= 0xdffce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

