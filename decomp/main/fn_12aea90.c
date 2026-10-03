/* main functions 012aea90..012d5670 (158 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 012aea90 size=128 callers=0 calls=0
*/
void sub_12aea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aea90ULL || rel >= 0x12aeb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aeb10 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12aeb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aeb10ULL || rel >= 0x12aeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aeb80 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12aeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aeb80ULL || rel >= 0x12aebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aebf0 size=128 callers=0 calls=0
*/
void sub_12aebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aebf0ULL || rel >= 0x12aec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aec70 size=128 callers=0 calls=0
*/
void sub_12aec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aec70ULL || rel >= 0x12aecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aecf0 size=16 callers=0 calls=0
*/
void sub_12aecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aecf0ULL || rel >= 0x12aed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aed00 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pw/bin/uikit_pw_list_01.bin
   ref: bin/appli/pw/bin/pw_list_01_lyt.bin
*/
void uikit_pw_list_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aed00ULL || rel >= 0x12aeee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aeee0 size=16 callers=0 calls=0
*/
void sub_12aeee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aeee0ULL || rel >= 0x12aeef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aeef0 size=1584 callers=0 calls=3
   calls: sub_14ba3b0, sub_14ba7b0, sub_8f3180
   ref: P_com_logo_00
   ref: pane_%s
   ref: P_pokeIcon_00
   ref: pane_%s_%s
   ref: L_pokeicon_00
   ref: L_icon_%02d
*/
void P_pokeIcon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aeef0ULL || rel >= 0x12af520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012af520 size=2624 callers=1 calls=5
   calls: emotion_off, sub_12adfd0, sub_134f490, sub_14ab040, sub_14bbf30
   ref: pane_%s
   ref: L_pokeicon_00
   ref: L_icon_%02d
   ref: T_title_00
*/
void T_title_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12af520ULL || rel >= 0x12aff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aff60 size=2112 callers=2 calls=3
   calls: sub_e83430, sub_e83850, sub_e83930
   ref: emotion_off
   ref: add_effort
   ref: anime_%s
   ref: emotion
   ref: anime_%s_%s
   ref: L_icon_%02d
   ref: effort
*/
void emotion_off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aff60ULL || rel >= 0x12b07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b07a0 size=1824 callers=1 calls=4
   calls: emotion_off, sub_12adfd0, sub_14ab040, sub_14bbf30
   ref: pane_%s
   ref: L_pokeicon_00
   ref: L_icon_%02d
   ref: T_title_00
*/
void T_title_00_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b07a0ULL || rel >= 0x12b0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b0ec0 size=896 callers=1 calls=3
   calls: sub_e83430, sub_e83850, sub_e83930
   ref: emotion_off
   ref: anime_%s
   ref: emotion
   ref: anime_%s_%s
   ref: L_icon_%02d
*/
void emotion_off_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b0ec0ULL || rel >= 0x12b1240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b1240 size=784 callers=1 calls=3
   calls: sub_12adfd0, sub_12ae130, sub_e83430
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: anime_%s_%s
   ref: T_lv_add_00
   ref: L_icon_%02d
*/
void T_lv_add_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b1240ULL || rel >= 0x12b1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b1550 size=544 callers=1 calls=1
   calls: sub_e83430
   ref: anime_%s
   ref: anime_%s_%s
   ref: L_icon_%02d
*/
void anime__s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b1550ULL || rel >= 0x12b1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b1770 size=768 callers=1 calls=3
   calls: sub_12adfd0, sub_12ae130, sub_e83430
   ref: add_effort
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: anime_%s_%s
   ref: T_effort_add_00
   ref: L_icon_%02d
*/
void T_effort_add_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b1770ULL || rel >= 0x12b1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b1a70 size=544 callers=1 calls=1
   calls: sub_e83430
   ref: anime_%s
   ref: anime_%s_%s
   ref: L_icon_%02d
   ref: effort
*/
void effort(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b1a70ULL || rel >= 0x12b1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b1c90 size=192 callers=1 calls=1
   calls: sub_e83930
   ref: anime_%s
*/
void anime__s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b1c90ULL || rel >= 0x12b1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b1d50 size=752 callers=1 calls=3
   calls: sub_12adfd0, sub_14bccd0, sub_e83930
   ref: T_title_02
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: T_title_01
*/
void T_title_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b1d50ULL || rel >= 0x12b2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2040 size=48 callers=0 calls=1
   calls: sub_14bacd0
*/
void sub_12b2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2040ULL || rel >= 0x12b2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2070 size=1024 callers=0 calls=1
   calls: sub_12adfd0
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_effort_00
   ref: L_icon_%02d
   ref: T_title_00
*/
void T_title_00_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2070ULL || rel >= 0x12b2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2470 size=208 callers=0 calls=0
*/
void sub_12b2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2470ULL || rel >= 0x12b2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2540 size=208 callers=0 calls=0
*/
void sub_12b2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2540ULL || rel >= 0x12b2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2610 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2610ULL || rel >= 0x12b2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2680 size=224 callers=0 calls=0
*/
void sub_12b2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2680ULL || rel >= 0x12b2760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2760 size=224 callers=0 calls=0
*/
void sub_12b2760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2760ULL || rel >= 0x12b2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2840 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2840ULL || rel >= 0x12b28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b28b0 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b28b0ULL || rel >= 0x12b2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2920 size=224 callers=0 calls=0
*/
void sub_12b2920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2920ULL || rel >= 0x12b2a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2a00 size=224 callers=0 calls=0
*/
void sub_12b2a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2a00ULL || rel >= 0x12b2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2ae0 size=128 callers=0 calls=0
*/
void sub_12b2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2ae0ULL || rel >= 0x12b2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2b60 size=16 callers=0 calls=0
*/
void sub_12b2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2b60ULL || rel >= 0x12b2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2b70 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pw/bin/uikit_pw_counter_00.bin
   ref: bin/appli/pw/bin/pw_counter_00_lyt.bin
*/
void uikit_pw_counter_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2b70ULL || rel >= 0x12b2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2d50 size=48 callers=0 calls=1
   calls: sub_12b2d80
*/
void sub_12b2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2d50ULL || rel >= 0x12b2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b2d80 size=1360 callers=1 calls=1
   calls: sub_7a3c20
*/
void sub_12b2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b2d80ULL || rel >= 0x12b32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b32d0 size=560 callers=3 calls=3
   calls: sub_12adfd0, sub_14ab040, sub_14e1a00
   ref: pane_%s
   ref: T_pw_counter_00
*/
void T_pw_counter_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b32d0ULL || rel >= 0x12b3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3500 size=112 callers=1 calls=0
*/
void sub_12b3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3500ULL || rel >= 0x12b3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3570 size=48 callers=1 calls=0
*/
void sub_12b3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3570ULL || rel >= 0x12b35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b35a0 size=192 callers=0 calls=0
*/
void sub_12b35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b35a0ULL || rel >= 0x12b3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3660 size=192 callers=0 calls=0
*/
void sub_12b3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3660ULL || rel >= 0x12b3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3720 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3720ULL || rel >= 0x12b3790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3790 size=192 callers=0 calls=0
*/
void sub_12b3790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3790ULL || rel >= 0x12b3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3850 size=192 callers=0 calls=0
*/
void sub_12b3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3850ULL || rel >= 0x12b3910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3910 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b3910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3910ULL || rel >= 0x12b3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3980 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3980ULL || rel >= 0x12b39f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b39f0 size=192 callers=0 calls=0
*/
void sub_12b39f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b39f0ULL || rel >= 0x12b3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3ab0 size=192 callers=0 calls=0
*/
void sub_12b3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3ab0ULL || rel >= 0x12b3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3b70 size=144 callers=0 calls=4
   calls: T_pw_counter_00, sub_1500c40, sub_e83430, sub_e83930
*/
void sub_12b3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3b70ULL || rel >= 0x12b3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3c00 size=16 callers=0 calls=0
*/
void sub_12b3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3c00ULL || rel >= 0x12b3c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3c10 size=16 callers=0 calls=0
*/
void sub_12b3c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3c10ULL || rel >= 0x12b3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3c20 size=16 callers=0 calls=0
*/
void sub_12b3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3c20ULL || rel >= 0x12b3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3c30 size=144 callers=0 calls=4
   calls: T_pw_counter_00, sub_1500c40, sub_e83430, sub_e83930
*/
void sub_12b3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3c30ULL || rel >= 0x12b3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3cc0 size=16 callers=0 calls=0
*/
void sub_12b3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3cc0ULL || rel >= 0x12b3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3cd0 size=16 callers=0 calls=0
*/
void sub_12b3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3cd0ULL || rel >= 0x12b3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3ce0 size=16 callers=0 calls=0
*/
void sub_12b3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3ce0ULL || rel >= 0x12b3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3cf0 size=80 callers=0 calls=0
*/
void sub_12b3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3cf0ULL || rel >= 0x12b3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3d40 size=16 callers=0 calls=0
*/
void sub_12b3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3d40ULL || rel >= 0x12b3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3d50 size=16 callers=0 calls=0
*/
void sub_12b3d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3d50ULL || rel >= 0x12b3d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3d60 size=16 callers=0 calls=0
*/
void sub_12b3d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3d60ULL || rel >= 0x12b3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3d70 size=80 callers=0 calls=0
*/
void sub_12b3d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3d70ULL || rel >= 0x12b3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3dc0 size=16 callers=0 calls=0
*/
void sub_12b3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3dc0ULL || rel >= 0x12b3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3dd0 size=16 callers=0 calls=0
*/
void sub_12b3dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3dd0ULL || rel >= 0x12b3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3de0 size=16 callers=0 calls=0
*/
void sub_12b3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3de0ULL || rel >= 0x12b3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3df0 size=16 callers=0 calls=0
*/
void sub_12b3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3df0ULL || rel >= 0x12b3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3e00 size=240 callers=3 calls=1
   calls: sub_e83930
   ref: status
   ref: anime_%s
*/
void status(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3e00ULL || rel >= 0x12b3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b3ef0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pw/bin/pw_result_00_lyt.bin
*/
void pw_result_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b3ef0ULL || rel >= 0x12b4000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4000 size=128 callers=0 calls=0
*/
void sub_12b4000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4000ULL || rel >= 0x12b4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4080 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4080ULL || rel >= 0x12b40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b40f0 size=128 callers=0 calls=0
*/
void sub_12b40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b40f0ULL || rel >= 0x12b4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4170 size=128 callers=0 calls=0
*/
void sub_12b4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4170ULL || rel >= 0x12b41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b41f0 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b41f0ULL || rel >= 0x12b4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4260 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b4260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4260ULL || rel >= 0x12b42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b42d0 size=128 callers=0 calls=0
*/
void sub_12b42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b42d0ULL || rel >= 0x12b4350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4350 size=128 callers=0 calls=0
*/
void sub_12b4350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4350ULL || rel >= 0x12b43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b43d0 size=16 callers=0 calls=0
*/
void sub_12b43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b43d0ULL || rel >= 0x12b43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b43e0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pw/bin/pw_title_00_lyt.bin
*/
void pw_title_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b43e0ULL || rel >= 0x12b44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b44f0 size=128 callers=0 calls=0
*/
void sub_12b44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b44f0ULL || rel >= 0x12b4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4570 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4570ULL || rel >= 0x12b45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b45e0 size=128 callers=0 calls=0
*/
void sub_12b45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b45e0ULL || rel >= 0x12b4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4660 size=128 callers=0 calls=0
*/
void sub_12b4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4660ULL || rel >= 0x12b46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b46e0 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b46e0ULL || rel >= 0x12b4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4750 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4750ULL || rel >= 0x12b47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b47c0 size=128 callers=0 calls=0
*/
void sub_12b47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b47c0ULL || rel >= 0x12b4840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4840 size=128 callers=0 calls=0
*/
void sub_12b4840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4840ULL || rel >= 0x12b48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b48c0 size=16 callers=0 calls=0
*/
void sub_12b48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b48c0ULL || rel >= 0x12b48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b48d0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pw/bin/uikit_pw_list_00.bin
   ref: bin/appli/pw/bin/pw_list_00_lyt.bin
*/
void uikit_pw_list_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b48d0ULL || rel >= 0x12b4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4ab0 size=16 callers=2 calls=0
*/
void sub_12b4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4ab0ULL || rel >= 0x12b4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b4ac0 size=2080 callers=0 calls=16
   calls: T_contents_03_01, change_icon, company_icon, company_txt, description_txt, effort_type, effort_type_2, effort_up, exp_grade, pane__s_5, recruit_count, sub_12a3c80
   ... +4 more
   ref: pane_%s
   ref: T_company_01
   ref: pane_%s_%s
   ref: T_contents_01_01
   ref: T_contents_01_00
   ref: T_info_00
   ref: T_contents_00_01
*/
void T_contents_01_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b4ac0ULL || rel >= 0x12b52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b52e0 size=640 callers=0 calls=1
   calls: sub_12adfd0
   ref: T_contents_03_00
   ref: pane_%s
   ref: T_contents_00_00
   ref: pane_%s_%s
   ref: T_contents_01_00
*/
void T_contents_03_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b52e0ULL || rel >= 0x12b5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b5560 size=480 callers=3 calls=6
   calls: sub_12b7860, sub_14e1a00, sub_14edac0, sub_14f1870, sub_7a4ba0, sub_e84250
*/
void sub_12b5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b5560ULL || rel >= 0x12b5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b5740 size=80 callers=1 calls=2
   calls: sub_14eea30, sub_e84250
*/
void sub_12b5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b5740ULL || rel >= 0x12b5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b5790 size=1568 callers=0 calls=8
   calls: company_icon, effort_type, sub_12adfd0, sub_13736e0, sub_14ab040, sub_14bccd0, sub_e83930, title_txt
   ref: pane_%s
   ref: anime_%s
   ref: T_com_msg_01
   ref: pane_%s_%s
   ref: L_button_item_%02d
   ref: anime_%s_%s
   ref: change_icon
   ref: L_new_00
*/
void T_com_msg_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b5790ULL || rel >= 0x12b5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b5db0 size=848 callers=2 calls=1
   calls: sub_14ab040
   ref: pane_%s
   ref: P_star_%02d
*/
void pane__s_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b5db0ULL || rel >= 0x12b6100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b6100 size=720 callers=3 calls=4
   calls: effort_type, sub_12adfd0, sub_13736e0, sub_e83930
   ref: pane_%s
   ref: anime_%s
   ref: anime_%s_%s
   ref: change_icon
   ref: T_status_00
*/
void change_icon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6100ULL || rel >= 0x12b63d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b63d0 size=912 callers=3 calls=6
   calls: sub_12a3c50, sub_12adfd0, sub_12ae130, sub_13736e0, sub_14ab040, sub_14ab080
   ref: pane_%s
   ref: N_contents_03
   ref: pane_%s_%s
   ref: T_contents_03_01
*/
void T_contents_03_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b63d0ULL || rel >= 0x12b6760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b6760 size=1504 callers=1 calls=3
   calls: sub_14ba7b0, sub_8f3180, sub_e84250
   ref: P_logo_00
   ref: pane_%s
   ref: pane_%s_%s
   ref: L_button_item_%02d
*/
void P_logo_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6760ULL || rel >= 0x12b6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b6d40 size=112 callers=3 calls=3
   calls: sub_14f1840, sub_14f1850, sub_e84250
*/
void sub_12b6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6d40ULL || rel >= 0x12b6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b6db0 size=96 callers=2 calls=3
   calls: sub_14eebd0, sub_14eebe0, sub_e84250
*/
void sub_12b6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6db0ULL || rel >= 0x12b6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b6e10 size=112 callers=1 calls=0
*/
void sub_12b6e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6e10ULL || rel >= 0x12b6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b6e80 size=112 callers=1 calls=0
*/
void sub_12b6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6e80ULL || rel >= 0x12b6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b6ef0 size=112 callers=1 calls=0
*/
void sub_12b6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6ef0ULL || rel >= 0x12b6f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b6f60 size=464 callers=0 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_12b6f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6f60ULL || rel >= 0x12b7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7130 size=816 callers=0 calls=2
   calls: P_logo_00, sub_14ba3b0
*/
void sub_12b7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7130ULL || rel >= 0x12b7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7460 size=176 callers=0 calls=1
   calls: sub_14bacd0
*/
void sub_12b7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7460ULL || rel >= 0x12b7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7510 size=432 callers=0 calls=0
*/
void sub_12b7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7510ULL || rel >= 0x12b76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b76c0 size=16 callers=0 calls=0
*/
void sub_12b76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b76c0ULL || rel >= 0x12b76d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b76d0 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b76d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b76d0ULL || rel >= 0x12b7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7740 size=16 callers=0 calls=0
*/
void sub_12b7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7740ULL || rel >= 0x12b7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7750 size=16 callers=0 calls=0
*/
void sub_12b7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7750ULL || rel >= 0x12b7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7760 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7760ULL || rel >= 0x12b77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b77d0 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12b77d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b77d0ULL || rel >= 0x12b7840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7840 size=16 callers=0 calls=0
*/
void sub_12b7840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7840ULL || rel >= 0x12b7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7850 size=16 callers=0 calls=0
*/
void sub_12b7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7850ULL || rel >= 0x12b7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7860 size=464 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_12b7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7860ULL || rel >= 0x12b7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7a30 size=32 callers=0 calls=0
*/
void sub_12b7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7a30ULL || rel >= 0x12b7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7a50 size=16 callers=0 calls=0
*/
void sub_12b7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7a50ULL || rel >= 0x12b7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7a60 size=16 callers=0 calls=0
*/
void sub_12b7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7a60ULL || rel >= 0x12b7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7a70 size=16 callers=0 calls=0
*/
void sub_12b7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7a70ULL || rel >= 0x12b7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7a80 size=16 callers=0 calls=0
*/
void sub_12b7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7a80ULL || rel >= 0x12b7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7a90 size=16 callers=0 calls=0
*/
void sub_12b7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7a90ULL || rel >= 0x12b7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7aa0 size=16 callers=0 calls=0
*/
void sub_12b7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7aa0ULL || rel >= 0x12b7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7ab0 size=16 callers=0 calls=0
*/
void sub_12b7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7ab0ULL || rel >= 0x12b7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7ac0 size=16 callers=0 calls=0
*/
void sub_12b7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7ac0ULL || rel >= 0x12b7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7ad0 size=16 callers=0 calls=0
*/
void sub_12b7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7ad0ULL || rel >= 0x12b7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7ae0 size=16 callers=0 calls=0
*/
void sub_12b7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7ae0ULL || rel >= 0x12b7af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7af0 size=16 callers=0 calls=0
*/
void sub_12b7af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7af0ULL || rel >= 0x12b7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7b00 size=64 callers=0 calls=0
*/
void sub_12b7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7b00ULL || rel >= 0x12b7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7b40 size=16 callers=0 calls=0
*/
void sub_12b7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7b40ULL || rel >= 0x12b7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7b50 size=16 callers=0 calls=0
*/
void sub_12b7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7b50ULL || rel >= 0x12b7b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7b60 size=16 callers=0 calls=0
*/
void sub_12b7b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7b60ULL || rel >= 0x12b7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7b70 size=128 callers=0 calls=0
*/
void sub_12b7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7b70ULL || rel >= 0x12b7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7bf0 size=544 callers=22 calls=3
   calls: sub_14d7f80, sub_8f3260, sub_8f3390
*/
void sub_12b7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7bf0ULL || rel >= 0x12b7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b7e10 size=912 callers=16 calls=4
   calls: sub_12b81a0, sub_12b82d0, sub_14d74f0, sub_765520
*/
void sub_12b7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b7e10ULL || rel >= 0x12b81a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b81a0 size=304 callers=1 calls=0
*/
void sub_12b81a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b81a0ULL || rel >= 0x12b82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b82d0 size=192 callers=1 calls=7
   calls: sub_12b8ac0, sub_14d7a00, sub_14d7fc0, sub_7656d0, sub_7658a0, sub_765930, sub_7659e0
*/
void sub_12b82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b82d0ULL || rel >= 0x12b8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8390 size=176 callers=13 calls=2
   calls: sub_14ab0c0, sub_14ab5c0
*/
void sub_12b8390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8390ULL || rel >= 0x12b8440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8440 size=176 callers=12 calls=5
   calls: sub_14d7a00, sub_14d7fc0, sub_7658a0, sub_765930, sub_7659e0
*/
void sub_12b8440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8440ULL || rel >= 0x12b84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b84f0 size=400 callers=5 calls=4
   calls: sub_1315270, sub_14aad40, sub_67d450, sub_762d70
*/
void sub_12b84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b84f0ULL || rel >= 0x12b8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8680 size=96 callers=2 calls=1
   calls: sub_14aad40
*/
void sub_12b8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8680ULL || rel >= 0x12b86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b86e0 size=400 callers=18 calls=10
   calls: sub_14aad40, sub_14ac370, sub_67d450, sub_765e60, sub_766940, sub_766990, sub_767950, sub_786c10, sub_786c50, sub_786cf0
*/
void sub_12b86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b86e0ULL || rel >= 0x12b8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8870 size=304 callers=13 calls=4
   calls: sub_14aad40, sub_14ac370, sub_67d450, sub_767950
*/
void sub_12b8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8870ULL || rel >= 0x12b89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b89a0 size=256 callers=1 calls=4
   calls: sub_142a660, sub_14d7b20, sub_7651c0, sub_765520
*/
void sub_12b89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b89a0ULL || rel >= 0x12b8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8aa0 size=32 callers=1 calls=0
*/
void sub_12b8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8aa0ULL || rel >= 0x12b8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8ac0 size=352 callers=3 calls=8
   calls: sub_14ab0c0, sub_14ab200, sub_14ab440, sub_14db420, sub_7651c0, sub_765520, sub_765a90, sub_767950
*/
void sub_12b8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8ac0ULL || rel >= 0x12b8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8c20 size=80 callers=2 calls=2
   calls: sub_12b8c70, sub_e7b660
*/
void sub_12b8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8c20ULL || rel >= 0x12b8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8c70 size=224 callers=1 calls=3
   calls: sub_12ba850, sub_7c2da0, sub_e7b5e0
*/
void sub_12b8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8c70ULL || rel >= 0x12b8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8d50 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_12b8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8d50ULL || rel >= 0x12b8f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8f10 size=160 callers=0 calls=1
   calls: sub_3340
*/
void sub_12b8f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8f10ULL || rel >= 0x12b8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8fb0 size=16 callers=0 calls=0
*/
void sub_12b8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8fb0ULL || rel >= 0x12b8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8fc0 size=16 callers=0 calls=0
*/
void sub_12b8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8fc0ULL || rel >= 0x12b8fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8fd0 size=16 callers=0 calls=0
*/
void sub_12b8fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8fd0ULL || rel >= 0x12b8fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8fe0 size=16 callers=0 calls=0
*/
void sub_12b8fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8fe0ULL || rel >= 0x12b8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b8ff0 size=16 callers=0 calls=0
*/
void sub_12b8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b8ff0ULL || rel >= 0x12b9000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b9000 size=1632 callers=0 calls=17
   calls: sub_12b9660, sub_12b97f0, sub_12ba750, sub_12ba950, sub_12baa80, sub_12bae30, sub_12be930, sub_78f150, sub_78f240, sub_794e80, sub_7950c0, sub_79ab20
   ... +5 more
   ref: font_fs_42_00.bffnt
   ref: CommonOptionBar
   ref: common/tokuseiinfo.dat
   ref: PokeListView
   ref: SystemMessageView
   ref: bin/font/bmp/font_fs_42_00.bffnt
   ref: PokeListViewBattle
   ref: common/pokelist.dat
*/
void PokeListViewBattle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b9000ULL || rel >= 0x12b9660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b9660 size=400 callers=1 calls=3
   calls: sub_12ba950, sub_12be8c0, sub_e7c160
*/
void sub_12b9660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b9660ULL || rel >= 0x12b97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b97f0 size=256 callers=1 calls=1
   calls: sub_799840
*/
void sub_12b97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b97f0ULL || rel >= 0x12b98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b98f0 size=128 callers=0 calls=2
   calls: sub_12b9970, sub_12bb220
   ref: PokeListViewBattle
*/
void PokeListViewBattle_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b98f0ULL || rel >= 0x12b9970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b9970 size=160 callers=1 calls=2
   calls: sub_1308340, sub_14d6820
*/
void sub_12b9970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b9970ULL || rel >= 0x12b9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b9a10 size=1184 callers=0 calls=19
   calls: sub_12b9eb0, sub_12ba950, sub_12bb220, sub_12bb370, sub_12bce40, sub_12bd120, sub_12bd4c0, sub_12bd970, sub_12bdad0, sub_12beb20, sub_12c2ba0, sub_14aad40
   ... +7 more
   ref: PokeListView
   ref: PokeListViewBattle
*/
void PokeListViewBattle_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b9a10ULL || rel >= 0x12b9eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b9eb0 size=256 callers=1 calls=1
   calls: sub_93c570
*/
void sub_12b9eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b9eb0ULL || rel >= 0x12b9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b9fb0 size=16 callers=0 calls=0
*/
void sub_12b9fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b9fb0ULL || rel >= 0x12b9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b9fc0 size=16 callers=0 calls=0
*/
void sub_12b9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b9fc0ULL || rel >= 0x12b9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012b9fd0 size=416 callers=0 calls=4
   calls: sub_12bb4c0, sub_12bb620, sub_12bb770, sub_e7c160
*/
void sub_12b9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b9fd0ULL || rel >= 0x12ba170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba170 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12ba170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba170ULL || rel >= 0x12ba220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba220 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12ba220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba220ULL || rel >= 0x12ba2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba2d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12ba2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba2d0ULL || rel >= 0x12ba380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba380 size=400 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_12ba380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba380ULL || rel >= 0x12ba510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba510 size=96 callers=0 calls=1
   calls: sub_12ba750
*/
void sub_12ba510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba510ULL || rel >= 0x12ba570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba570 size=16 callers=0 calls=0
*/
void sub_12ba570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba570ULL || rel >= 0x12ba580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba580 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_12ba580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba580ULL || rel >= 0x12ba630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba630 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_12ba630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba630ULL || rel >= 0x12ba700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba700 size=16 callers=0 calls=0
*/
void sub_12ba700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba700ULL || rel >= 0x12ba710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba710 size=16 callers=0 calls=0
*/
void sub_12ba710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba710ULL || rel >= 0x12ba720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba720 size=16 callers=0 calls=0
*/
void sub_12ba720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba720ULL || rel >= 0x12ba730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba730 size=32 callers=0 calls=0
*/
void sub_12ba730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba730ULL || rel >= 0x12ba750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba750 size=256 callers=2 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_12ba750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba750ULL || rel >= 0x12ba850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba850 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_12ba850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba850ULL || rel >= 0x12ba950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ba950 size=304 callers=42 calls=0
*/
void sub_12ba950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ba950ULL || rel >= 0x12baa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012baa80 size=288 callers=1 calls=2
   calls: sub_12baba0, sub_e809c0
*/
void sub_12baa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12baa80ULL || rel >= 0x12baba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012baba0 size=656 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12baba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12baba0ULL || rel >= 0x12bae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bae30 size=288 callers=1 calls=2
   calls: sub_12baf50, sub_e809c0
*/
void sub_12bae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bae30ULL || rel >= 0x12baf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012baf50 size=720 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12baf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12baf50ULL || rel >= 0x12bb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bb220 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12bb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bb220ULL || rel >= 0x12bb370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bb370 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12bb370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bb370ULL || rel >= 0x12bb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bb4c0 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_12bb4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bb4c0ULL || rel >= 0x12bb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bb620 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_12bb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bb620ULL || rel >= 0x12bb770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bb770 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_12bb770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bb770ULL || rel >= 0x12bb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bb8c0 size=3600 callers=0 calls=18
   calls: sub_12b7bf0, sub_135a1a0, sub_1366b40, sub_14aad40, sub_14ac370, sub_14ba7b0, sub_14e1a00, sub_17ac790, sub_67d450, sub_7a3a10, sub_7a3f10, sub_8f3180
   ... +6 more
   ref: button_motion
   ref: anime_L_temochi_00_L_pokelist_06_keep
   ref: box_button_00
   ref: button_x
   ref: button_b
   ref: grid_00
   ref: color_select
   ref: color_unselect
*/
void box_button_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bb8c0ULL || rel >= 0x12bc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bc6d0 size=176 callers=1 calls=2
   calls: sub_14e1a00, sub_e83e60
*/
void sub_12bc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bc6d0ULL || rel >= 0x12bc780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bc780 size=80 callers=2 calls=1
   calls: sub_14e6550
*/
void sub_12bc780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bc780ULL || rel >= 0x12bc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bc7d0 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokelist/bin/uikit_setting_pokelist_top_00.bin
   ref: bin/appli/pokelist/bin/pokelist_top_00_lyt.bin
*/
void uikit_setting_pokelist_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bc7d0ULL || rel >= 0x12bc9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bc9c0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokelist/bin/uikit_setting_pokelist_top_00.bin
   ref: bin/appli/pokelist/bin/pokelist_top_00_lyt.bin
*/
void uikit_setting_pokelist_top_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bc9c0ULL || rel >= 0x12bcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bcba0 size=672 callers=0 calls=8
   calls: sub_14e68e0, sub_14e6ac0, sub_14e6d50, sub_1500c40, sub_1502120, sub_5cfad0, sub_762d70, sub_7847d0
*/
void sub_12bcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bcba0ULL || rel >= 0x12bce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bce40 size=416 callers=1 calls=3
   calls: sub_14e1a00, sub_14ea9a0, sub_eb7b00
*/
void sub_12bce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bce40ULL || rel >= 0x12bcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bcfe0 size=208 callers=6 calls=3
   calls: sub_e83430, sub_e83930, sub_e83a20
*/
void sub_12bcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bcfe0ULL || rel >= 0x12bd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd0b0 size=48 callers=9 calls=0
*/
void sub_12bd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd0b0ULL || rel >= 0x12bd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd0e0 size=64 callers=6 calls=0
*/
void sub_12bd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd0e0ULL || rel >= 0x12bd120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd120 size=928 callers=11 calls=6
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_762d70, sub_7847d0, sub_e7eb10
*/
void sub_12bd120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd120ULL || rel >= 0x12bd4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd4c0 size=768 callers=1 calls=6
   calls: sub_12b7e10, sub_14e1a30, sub_14e6d90, sub_762d50, sub_e7eb10, sub_e83e60
*/
void sub_12bd4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd4c0ULL || rel >= 0x12bd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd7c0 size=32 callers=1 calls=0
*/
void sub_12bd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd7c0ULL || rel >= 0x12bd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd7e0 size=16 callers=1 calls=0
*/
void sub_12bd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd7e0ULL || rel >= 0x12bd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd7f0 size=160 callers=2 calls=1
   calls: sub_12b8390
*/
void sub_12bd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd7f0ULL || rel >= 0x12bd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd890 size=224 callers=2 calls=6
   calls: sub_14aad40, sub_14e67f0, sub_14e69a0, sub_14eaaf0, sub_1500c40, sub_762d50
*/
void sub_12bd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd890ULL || rel >= 0x12bd970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd970 size=96 callers=2 calls=2
   calls: sub_14aad40, sub_1500c40
*/
void sub_12bd970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd970ULL || rel >= 0x12bd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bd9d0 size=128 callers=3 calls=1
   calls: sub_12b8440
*/
void sub_12bd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bd9d0ULL || rel >= 0x12bda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bda50 size=128 callers=15 calls=1
   calls: sub_12b84f0
*/
void sub_12bda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bda50ULL || rel >= 0x12bdad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdad0 size=640 callers=1 calls=2
   calls: sub_12bdd50, sub_14e6bc0
*/
void sub_12bdad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdad0ULL || rel >= 0x12bdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdd50 size=160 callers=4 calls=5
   calls: sub_14ab200, sub_14ab440, sub_7656d0, sub_765a90, sub_767950
*/
void sub_12bdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdd50ULL || rel >= 0x12bddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bddf0 size=272 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_12bddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bddf0ULL || rel >= 0x12bdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdf00 size=16 callers=0 calls=0
*/
void sub_12bdf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdf00ULL || rel >= 0x12bdf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdf10 size=16 callers=0 calls=0
*/
void sub_12bdf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdf10ULL || rel >= 0x12bdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdf20 size=144 callers=0 calls=3
   calls: sub_14aad40, sub_1502120, sub_5cfad0
*/
void sub_12bdf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdf20ULL || rel >= 0x12bdfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdfb0 size=16 callers=0 calls=0
*/
void sub_12bdfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdfb0ULL || rel >= 0x12bdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdfc0 size=16 callers=0 calls=0
*/
void sub_12bdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdfc0ULL || rel >= 0x12bdfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdfd0 size=16 callers=0 calls=0
*/
void sub_12bdfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdfd0ULL || rel >= 0x12bdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdfe0 size=16 callers=0 calls=0
*/
void sub_12bdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdfe0ULL || rel >= 0x12bdff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bdff0 size=16 callers=0 calls=0
*/
void sub_12bdff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bdff0ULL || rel >= 0x12be000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be000 size=16 callers=0 calls=0
*/
void sub_12be000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be000ULL || rel >= 0x12be010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be010 size=304 callers=0 calls=0
*/
void sub_12be010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be010ULL || rel >= 0x12be140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be140 size=560 callers=0 calls=1
   calls: sub_7a3a10
*/
void sub_12be140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be140ULL || rel >= 0x12be370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be370 size=16 callers=0 calls=0
*/
void sub_12be370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be370ULL || rel >= 0x12be380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be380 size=16 callers=0 calls=0
*/
void sub_12be380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be380ULL || rel >= 0x12be390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be390 size=16 callers=0 calls=0
*/
void sub_12be390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be390ULL || rel >= 0x12be3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be3a0 size=96 callers=0 calls=2
   calls: sub_14e68e0, sub_14e6d50
*/
void sub_12be3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be3a0ULL || rel >= 0x12be400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be400 size=16 callers=0 calls=0
*/
void sub_12be400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be400ULL || rel >= 0x12be410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be410 size=16 callers=0 calls=0
*/
void sub_12be410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be410ULL || rel >= 0x12be420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be420 size=16 callers=0 calls=0
*/
void sub_12be420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be420ULL || rel >= 0x12be430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be430 size=112 callers=0 calls=2
   calls: sub_12b8ac0, sub_12bdd50
*/
void sub_12be430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be430ULL || rel >= 0x12be4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be4a0 size=16 callers=0 calls=0
*/
void sub_12be4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be4a0ULL || rel >= 0x12be4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be4b0 size=16 callers=0 calls=0
*/
void sub_12be4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be4b0ULL || rel >= 0x12be4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be4c0 size=16 callers=0 calls=0
*/
void sub_12be4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be4c0ULL || rel >= 0x12be4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be4d0 size=144 callers=0 calls=3
   calls: sub_14aad40, sub_14e1a00, sub_1500c40
*/
void sub_12be4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be4d0ULL || rel >= 0x12be560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be560 size=16 callers=0 calls=0
*/
void sub_12be560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be560ULL || rel >= 0x12be570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be570 size=16 callers=0 calls=0
*/
void sub_12be570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be570ULL || rel >= 0x12be580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be580 size=16 callers=0 calls=0
*/
void sub_12be580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be580ULL || rel >= 0x12be590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be590 size=496 callers=0 calls=3
   calls: sub_12b7e10, sub_14aad40, sub_e83c60
*/
void sub_12be590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be590ULL || rel >= 0x12be780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be780 size=16 callers=0 calls=0
*/
void sub_12be780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be780ULL || rel >= 0x12be790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be790 size=16 callers=0 calls=0
*/
void sub_12be790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be790ULL || rel >= 0x12be7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be7a0 size=16 callers=0 calls=0
*/
void sub_12be7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be7a0ULL || rel >= 0x12be7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be7b0 size=224 callers=0 calls=3
   calls: sub_12b7e10, sub_12b8440, sub_14aad40
*/
void sub_12be7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be7b0ULL || rel >= 0x12be890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be890 size=16 callers=0 calls=0
*/
void sub_12be890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be890ULL || rel >= 0x12be8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be8a0 size=16 callers=0 calls=0
*/
void sub_12be8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be8a0ULL || rel >= 0x12be8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be8b0 size=16 callers=0 calls=0
*/
void sub_12be8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be8b0ULL || rel >= 0x12be8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be8c0 size=112 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_12be8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be8c0ULL || rel >= 0x12be930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012be930 size=496 callers=1 calls=2
   calls: fel_999_2, sub_67b990
*/
void sub_12be930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12be930ULL || rel >= 0x12beb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012beb20 size=240 callers=9 calls=2
   calls: sub_12f9ef0, sub_1503280
*/
void sub_12beb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12beb20ULL || rel >= 0x12bec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bec10 size=48 callers=1 calls=0
*/
void sub_12bec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bec10ULL || rel >= 0x12bec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bec40 size=192 callers=4 calls=2
   calls: sub_762d70, sub_762d90
*/
void sub_12bec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bec40ULL || rel >= 0x12bed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bed00 size=240 callers=1 calls=5
   calls: Stop_Event_PM_Voice, sub_1504d70, sub_762930, sub_762940, sub_763d50
*/
void sub_12bed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bed00ULL || rel >= 0x12bedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bedf0 size=16 callers=2 calls=0
*/
void sub_12bedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bedf0ULL || rel >= 0x12bee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bee00 size=288 callers=0 calls=0
*/
void sub_12bee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bee00ULL || rel >= 0x12bef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bef20 size=16 callers=0 calls=0
*/
void sub_12bef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bef20ULL || rel >= 0x12bef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bef30 size=16 callers=0 calls=0
*/
void sub_12bef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bef30ULL || rel >= 0x12bef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bef40 size=16 callers=0 calls=0
*/
void sub_12bef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bef40ULL || rel >= 0x12bef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bef50 size=16 callers=0 calls=0
*/
void sub_12bef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bef50ULL || rel >= 0x12bef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bef60 size=16 callers=0 calls=0
*/
void sub_12bef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bef60ULL || rel >= 0x12bef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bef70 size=16 callers=0 calls=0
*/
void sub_12bef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bef70ULL || rel >= 0x12bef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bef80 size=16 callers=0 calls=0
*/
void sub_12bef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bef80ULL || rel >= 0x12bef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bef90 size=16 callers=0 calls=0
*/
void sub_12bef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bef90ULL || rel >= 0x12befa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012befa0 size=2416 callers=0 calls=14
   calls: sub_12b7bf0, sub_12bf910, sub_14aad40, sub_14ba7b0, sub_17ac790, sub_5cfad0, sub_7a3a10, sub_7a3f10, sub_8f3180, sub_93c570, sub_e7eb10, sub_e83d70
   ... +2 more
   ref: left_button
   ref: grid_01
   ref: right_button
   ref: grid_00
   ref: color_select
   ref: color_unselect
   ref: cancel_button
*/
void color_unselect_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12befa0ULL || rel >= 0x12bf910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bf910 size=272 callers=20 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_12bf910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bf910ULL || rel >= 0x12bfa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012bfa20 size=1728 callers=1 calls=4
   calls: sub_14e3670, sub_67d450, sub_93c570, sub_e7eb10
*/
void sub_12bfa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bfa20ULL || rel >= 0x12c00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c00e0 size=272 callers=1 calls=3
   calls: sub_12c01f0, sub_14e39e0, sub_93c570
*/
void sub_12c00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c00e0ULL || rel >= 0x12c01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c01f0 size=304 callers=1 calls=1
   calls: sub_7a3a10
*/
void sub_12c01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c01f0ULL || rel >= 0x12c0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c0320 size=240 callers=1 calls=3
   calls: Play_UI_common_decide_5, sub_14e3680, sub_93c570
*/
void sub_12c0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c0320ULL || rel >= 0x12c0410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c0410 size=544 callers=2 calls=4
   calls: sub_12bf910, sub_765520, sub_767950, sub_e7eb10
*/
void sub_12c0410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c0410ULL || rel >= 0x12c0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c0630 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_12c0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c0630ULL || rel >= 0x12c0680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c0680 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokelist/bin/pokelist_btl_00_lyt.bin
   ref: bin/appli/pokelist/bin/uikit_setting_pokelist_btl_00.bin
*/
void uikit_setting_pokelist_btl_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c0680ULL || rel >= 0x12c0870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c0870 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokelist/bin/pokelist_btl_00_lyt.bin
   ref: bin/appli/pokelist/bin/uikit_setting_pokelist_btl_00.bin
*/
void uikit_setting_pokelist_btl_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c0870ULL || rel >= 0x12c0a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c0a50 size=560 callers=0 calls=2
   calls: sub_12c0c80, sub_767950
*/
void sub_12c0a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c0a50ULL || rel >= 0x12c0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c0c80 size=1072 callers=2 calls=10
   calls: sub_12bf910, sub_12c2740, sub_12c27e0, sub_14aad40, sub_17919c0, sub_8efdd0, sub_e7eb10, sub_e83930, sub_e83a20, sub_e83e60
*/
void sub_12c0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c0c80ULL || rel >= 0x12c10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c10b0 size=2400 callers=1 calls=16
   calls: sub_12bf910, sub_12c1a10, sub_14aad40, sub_14d6920, sub_14da810, sub_14e6d90, sub_765520, sub_765de0, sub_767160, sub_767950, sub_768f00, sub_768fa0
   ... +4 more
*/
void sub_12c10b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c10b0ULL || rel >= 0x12c1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c1a10 size=272 callers=2 calls=2
   calls: sub_14ac370, sub_67d080
*/
void sub_12c1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c1a10ULL || rel >= 0x12c1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c1b20 size=3104 callers=1 calls=11
   calls: sub_12b7e10, sub_12bdd50, sub_14da630, sub_14da810, sub_14e1a30, sub_14e6d90, sub_762d50, sub_765de0, sub_e7eb10, sub_e83930, sub_e83e60
*/
void sub_12c1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c1b20ULL || rel >= 0x12c2740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2740 size=160 callers=1 calls=2
   calls: sub_14e6550, sub_765de0
*/
void sub_12c2740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2740ULL || rel >= 0x12c27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c27e0 size=768 callers=4 calls=5
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12c27e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c27e0ULL || rel >= 0x12c2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2ae0 size=192 callers=3 calls=2
   calls: sub_e83a20, sub_e83e60
*/
void sub_12c2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2ae0ULL || rel >= 0x12c2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2ba0 size=400 callers=1 calls=2
   calls: sub_14ea9a0, sub_eb7b00
*/
void sub_12c2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2ba0ULL || rel >= 0x12c2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2d30 size=320 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_12c2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2d30ULL || rel >= 0x12c2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2e70 size=16 callers=0 calls=0
*/
void sub_12c2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2e70ULL || rel >= 0x12c2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2e80 size=16 callers=0 calls=0
*/
void sub_12c2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2e80ULL || rel >= 0x12c2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2e90 size=16 callers=0 calls=0
*/
void sub_12c2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2e90ULL || rel >= 0x12c2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2ea0 size=16 callers=0 calls=0
*/
void sub_12c2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2ea0ULL || rel >= 0x12c2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2eb0 size=16 callers=0 calls=0
*/
void sub_12c2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2eb0ULL || rel >= 0x12c2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2ec0 size=16 callers=0 calls=0
*/
void sub_12c2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2ec0ULL || rel >= 0x12c2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2ed0 size=16 callers=0 calls=0
*/
void sub_12c2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2ed0ULL || rel >= 0x12c2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2ee0 size=16 callers=0 calls=0
*/
void sub_12c2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2ee0ULL || rel >= 0x12c2ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c2ef0 size=304 callers=0 calls=0
*/
void sub_12c2ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2ef0ULL || rel >= 0x12c3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3020 size=560 callers=0 calls=1
   calls: sub_7a3a10
*/
void sub_12c3020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3020ULL || rel >= 0x12c3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3250 size=16 callers=0 calls=0
*/
void sub_12c3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3250ULL || rel >= 0x12c3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3260 size=16 callers=0 calls=0
*/
void sub_12c3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3260ULL || rel >= 0x12c3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3270 size=16 callers=0 calls=0
*/
void sub_12c3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3270ULL || rel >= 0x12c3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3280 size=32 callers=0 calls=0
*/
void sub_12c3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3280ULL || rel >= 0x12c32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c32a0 size=16 callers=0 calls=0
*/
void sub_12c32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c32a0ULL || rel >= 0x12c32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c32b0 size=16 callers=0 calls=0
*/
void sub_12c32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c32b0ULL || rel >= 0x12c32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c32c0 size=16 callers=0 calls=0
*/
void sub_12c32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c32c0ULL || rel >= 0x12c32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c32d0 size=1072 callers=0 calls=8
   calls: sub_12b8ac0, sub_12bdd50, sub_12bf910, sub_12c10b0, sub_1314a80, sub_14aad40, sub_767950, sub_e7eb10
*/
void sub_12c32d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c32d0ULL || rel >= 0x12c3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3700 size=16 callers=0 calls=0
*/
void sub_12c3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3700ULL || rel >= 0x12c3710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3710 size=16 callers=0 calls=0
*/
void sub_12c3710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3710ULL || rel >= 0x12c3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3720 size=16 callers=0 calls=0
*/
void sub_12c3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3720ULL || rel >= 0x12c3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3730 size=192 callers=0 calls=1
   calls: sub_14da810
*/
void sub_12c3730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3730ULL || rel >= 0x12c37f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c37f0 size=16 callers=0 calls=0
*/
void sub_12c37f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c37f0ULL || rel >= 0x12c3800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3800 size=16 callers=0 calls=0
*/
void sub_12c3800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3800ULL || rel >= 0x12c3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3810 size=16 callers=0 calls=0
*/
void sub_12c3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3810ULL || rel >= 0x12c3820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3820 size=1088 callers=0 calls=13
   calls: sub_12ba950, sub_12bb370, sub_12beb20, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_d0c0, sub_e80580, sub_e807f0, sub_eb6230
   ... +1 more
   ref: PokeListView
   ref: PokeListFieldState
*/
void PokeListFieldState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3820ULL || rel >= 0x12c3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c3c60 size=1104 callers=0 calls=30
   calls: sub_12ba950, sub_12bc780, sub_12bd0e0, sub_12bd120, sub_12bd7f0, sub_12bda50, sub_12c40b0, sub_12c4540, sub_12c4830, sub_12c4990, sub_12c4ea0, sub_12c51a0
   ... +18 more
*/
void sub_12c3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c3c60ULL || rel >= 0x12c40b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c40b0 size=1168 callers=1 calls=16
   calls: sub_12ba950, sub_12bd120, sub_12bd890, sub_12bda50, sub_12bed00, sub_12bedf0, sub_12c5ab0, sub_12c5d80, sub_12c5f00, sub_14e1a00, sub_1502120, sub_5cfad0
   ... +4 more
*/
void sub_12c40b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c40b0ULL || rel >= 0x12c4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c4540 size=752 callers=1 calls=14
   calls: sub_12ba950, sub_12bd120, sub_12bd890, sub_12bda50, sub_12c5d80, sub_12c5f00, sub_12c6250, sub_1502120, sub_5cfad0, sub_e80580, sub_e807f0, sub_eb6230
   ... +2 more
*/
void sub_12c4540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c4540ULL || rel >= 0x12c4830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c4830 size=352 callers=1 calls=8
   calls: sub_12ba950, sub_12bd120, sub_12bd7e0, sub_12bd970, sub_12bda50, sub_12beb20, sub_5cfad0, sub_eb8a30
*/
void sub_12c4830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c4830ULL || rel >= 0x12c4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c4990 size=1296 callers=1 calls=28
   calls: sub_12b8440, sub_12ba950, sub_12bcfe0, sub_12bd0b0, sub_12bd120, sub_12bd9d0, sub_12bda50, sub_12beb20, sub_12bec10, sub_12bec40, sub_12c5ab0, sub_12c5d80
   ... +16 more
*/
void sub_12c4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c4990ULL || rel >= 0x12c4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c4ea0 size=768 callers=1 calls=16
   calls: sub_12b8440, sub_12ba950, sub_12bcfe0, sub_12bd0b0, sub_12bd120, sub_12bd9d0, sub_12bda50, sub_12beb20, sub_12bec40, sub_12c5f00, sub_12c64b0, sub_14e1a00
   ... +4 more
*/
void sub_12c4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c4ea0ULL || rel >= 0x12c51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c51a0 size=304 callers=1 calls=5
   calls: sub_12ba950, sub_12bd0b0, sub_12bd0e0, sub_12bda50, sub_762d70
*/
void sub_12c51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c51a0ULL || rel >= 0x12c52d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c52d0 size=256 callers=1 calls=8
   calls: sub_12ba950, sub_12bd120, sub_12bda50, sub_12beb20, sub_e80580, sub_e807f0, sub_eb8a30, sub_eb8c60
*/
void sub_12c52d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c52d0ULL || rel >= 0x12c53d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c53d0 size=576 callers=1 calls=10
   calls: sub_12ba950, sub_12bcfe0, sub_12bda50, sub_12beb20, sub_12bec40, sub_12c5f00, sub_14e1a00, sub_762d70, sub_767950, sub_eb8a30
*/
void sub_12c53d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c53d0ULL || rel >= 0x12c5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c5610 size=736 callers=1 calls=14
   calls: sub_12b8440, sub_12ba950, sub_12bcfe0, sub_12bd0b0, sub_12bd9d0, sub_12bda50, sub_12beb20, sub_12bec40, sub_12c5f00, sub_12c64b0, sub_14e1a00, sub_762d70
   ... +2 more
*/
void sub_12c5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c5610ULL || rel >= 0x12c58f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c58f0 size=304 callers=1 calls=5
   calls: sub_12ba950, sub_12bd0b0, sub_12bd0e0, sub_12bda50, sub_762d70
*/
void sub_12c58f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c58f0ULL || rel >= 0x12c5a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c5a20 size=144 callers=1 calls=5
   calls: sub_12bd120, sub_12bda50, sub_e807f0, sub_eb8a30, sub_eb8c60
*/
void sub_12c5a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c5a20ULL || rel >= 0x12c5ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c5ab0 size=720 callers=2 calls=5
   calls: sub_12ba950, sub_12c6600, sub_5cfad0, sub_767950, sub_7847d0
*/
void sub_12c5ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c5ab0ULL || rel >= 0x12c5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c5d80 size=384 callers=3 calls=6
   calls: sub_12ba950, sub_12bd7c0, sub_e807f0, sub_e82ef0, sub_eb6a00, sub_eb6ba0
*/
void sub_12c5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c5d80ULL || rel >= 0x12c5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c5f00 size=848 callers=15 calls=7
   calls: sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb7e40, sub_eb8930
*/
void sub_12c5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c5f00ULL || rel >= 0x12c6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6250 size=608 callers=1 calls=4
   calls: sub_12ba950, sub_5cfad0, sub_67d450, sub_762d70
*/
void sub_12c6250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6250ULL || rel >= 0x12c64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c64b0 size=320 callers=5 calls=7
   calls: sub_12ba950, sub_1379aa0, sub_762930, sub_762940, sub_762d70, sub_768270, sub_768a10
*/
void sub_12c64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c64b0ULL || rel >= 0x12c65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c65f0 size=16 callers=0 calls=0
*/
void sub_12c65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c65f0ULL || rel >= 0x12c6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6600 size=448 callers=1 calls=1
   calls: sub_67d450
*/
void sub_12c6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6600ULL || rel >= 0x12c67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c67c0 size=16 callers=0 calls=0
*/
void sub_12c67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c67c0ULL || rel >= 0x12c67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c67d0 size=16 callers=0 calls=0
*/
void sub_12c67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c67d0ULL || rel >= 0x12c67e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c67e0 size=16 callers=0 calls=0
*/
void sub_12c67e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c67e0ULL || rel >= 0x12c67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c67f0 size=16 callers=0 calls=0
*/
void sub_12c67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c67f0ULL || rel >= 0x12c6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6800 size=16 callers=0 calls=0
*/
void sub_12c6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6800ULL || rel >= 0x12c6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6810 size=16 callers=0 calls=0
*/
void sub_12c6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6810ULL || rel >= 0x12c6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6820 size=16 callers=0 calls=0
*/
void sub_12c6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6820ULL || rel >= 0x12c6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6830 size=16 callers=0 calls=0
*/
void sub_12c6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6830ULL || rel >= 0x12c6840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6840 size=304 callers=0 calls=0
*/
void sub_12c6840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6840ULL || rel >= 0x12c6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6970 size=144 callers=0 calls=1
   calls: sub_12ba950
*/
void sub_12c6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6970ULL || rel >= 0x12c6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6a00 size=16 callers=0 calls=0
*/
void sub_12c6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6a00ULL || rel >= 0x12c6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6a10 size=16 callers=0 calls=0
*/
void sub_12c6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6a10ULL || rel >= 0x12c6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6a20 size=16 callers=0 calls=0
*/
void sub_12c6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6a20ULL || rel >= 0x12c6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6a30 size=816 callers=0 calls=10
   calls: sub_12ba950, sub_12bb370, sub_12beb20, sub_14aad40, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb7730
   ref: PokeListView
   ref: PokeListStateZukan
*/
void PokeListStateZukan(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6a30ULL || rel >= 0x12c6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c6d60 size=768 callers=0 calls=18
   calls: sub_12ba950, sub_12bc6d0, sub_12bc780, sub_12bd7f0, sub_14e1a00, sub_1502120, sub_15032c0, sub_1505a20, sub_1505a30, sub_1505cf0, sub_5cfad0, sub_e80580
   ... +6 more
*/
void sub_12c6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c6d60ULL || rel >= 0x12c7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c7060 size=16 callers=0 calls=0
*/
void sub_12c7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c7060ULL || rel >= 0x12c7070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c7070 size=16 callers=0 calls=0
*/
void sub_12c7070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c7070ULL || rel >= 0x12c7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c7080 size=16 callers=0 calls=0
*/
void sub_12c7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c7080ULL || rel >= 0x12c7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c7090 size=16 callers=0 calls=0
*/
void sub_12c7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c7090ULL || rel >= 0x12c70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c70a0 size=16 callers=0 calls=0
*/
void sub_12c70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c70a0ULL || rel >= 0x12c70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c70b0 size=16 callers=0 calls=0
*/
void sub_12c70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c70b0ULL || rel >= 0x12c70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c70c0 size=16 callers=0 calls=0
*/
void sub_12c70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c70c0ULL || rel >= 0x12c70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c70d0 size=16 callers=0 calls=0
*/
void sub_12c70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c70d0ULL || rel >= 0x12c70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c70e0 size=16 callers=0 calls=0
*/
void sub_12c70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c70e0ULL || rel >= 0x12c70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c70f0 size=304 callers=0 calls=0
*/
void sub_12c70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c70f0ULL || rel >= 0x12c7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c7220 size=144 callers=0 calls=1
   calls: sub_12ba950
*/
void sub_12c7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c7220ULL || rel >= 0x12c72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c72b0 size=16 callers=0 calls=0
*/
void sub_12c72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c72b0ULL || rel >= 0x12c72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c72c0 size=16 callers=0 calls=0
*/
void sub_12c72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c72c0ULL || rel >= 0x12c72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c72d0 size=16 callers=0 calls=0
*/
void sub_12c72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c72d0ULL || rel >= 0x12c72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c72e0 size=976 callers=0 calls=15
   calls: sub_12bb220, sub_12c0c80, sub_12c1b20, sub_12c27e0, sub_14aad40, sub_1502120, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_d0c0
   ... +3 more
   ref: PokeListStateBattle
   ref: anime_keep
   ref: PokeListViewBattle
   ref: anime_f_in
*/
void PokeListStateBattle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c72e0ULL || rel >= 0x12c76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c76b0 size=544 callers=0 calls=14
   calls: anime_f_out_4, sub_12b8390, sub_12c2ae0, sub_12c78d0, sub_12c79e0, sub_12c7d60, sub_12c8840, sub_14ab2b0, sub_e80580, sub_e807f0, sub_eb7790, sub_eb8a30
   ... +2 more
*/
void sub_12c76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c76b0ULL || rel >= 0x12c78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c78d0 size=272 callers=1 calls=5
   calls: sub_12ba950, sub_12c0410, sub_12c27e0, sub_12c81d0, sub_e80580
*/
void sub_12c78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c78d0ULL || rel >= 0x12c79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c79e0 size=896 callers=1 calls=9
   calls: sub_12ba950, sub_12c2ae0, sub_12c8840, sub_12c88e0, sub_1313580, sub_765520, sub_767950, sub_e80580, sub_e807f0
*/
void sub_12c79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c79e0ULL || rel >= 0x12c7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c7d60 size=736 callers=1 calls=11
   calls: sub_12ba950, sub_12c0410, sub_12c27e0, sub_12c2ae0, sub_12c8840, sub_12c88e0, sub_1313580, sub_765520, sub_767950, sub_e80580, sub_e807f0
*/
void sub_12c7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c7d60ULL || rel >= 0x12c8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8040 size=176 callers=1 calls=5
   calls: sub_14d6840, sub_1502120, sub_5cfad0, sub_e833a0, sub_eb77f0
   ref: anime_f_out
*/
void anime_f_out_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8040ULL || rel >= 0x12c80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c80f0 size=208 callers=0 calls=4
   calls: sub_14ab2b0, sub_14d6890, sub_eb6530, sub_eb7830
*/
void sub_12c80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c80f0ULL || rel >= 0x12c81c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c81c0 size=16 callers=0 calls=0
*/
void sub_12c81c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c81c0ULL || rel >= 0x12c81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c81d0 size=1648 callers=1 calls=6
   calls: sub_12ba950, sub_12bfa20, sub_12c00e0, sub_12c0320, sub_12c8c10, sub_767950
*/
void sub_12c81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c81d0ULL || rel >= 0x12c8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8840 size=160 callers=3 calls=1
   calls: sub_14e1a00
*/
void sub_12c8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8840ULL || rel >= 0x12c88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c88e0 size=816 callers=2 calls=6
   calls: sub_1311c60, sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7e40, sub_eb8930
*/
void sub_12c88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c88e0ULL || rel >= 0x12c8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8c10 size=816 callers=1 calls=3
   calls: sub_762d50, sub_765520, sub_767950
*/
void sub_12c8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8c10ULL || rel >= 0x12c8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8f40 size=16 callers=0 calls=0
*/
void sub_12c8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8f40ULL || rel >= 0x12c8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8f50 size=16 callers=0 calls=0
*/
void sub_12c8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8f50ULL || rel >= 0x12c8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8f60 size=16 callers=0 calls=0
*/
void sub_12c8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8f60ULL || rel >= 0x12c8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8f70 size=16 callers=0 calls=0
*/
void sub_12c8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8f70ULL || rel >= 0x12c8f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8f80 size=16 callers=0 calls=0
*/
void sub_12c8f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8f80ULL || rel >= 0x12c8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8f90 size=16 callers=0 calls=0
*/
void sub_12c8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8f90ULL || rel >= 0x12c8fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8fa0 size=16 callers=0 calls=0
*/
void sub_12c8fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8fa0ULL || rel >= 0x12c8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8fb0 size=16 callers=0 calls=0
*/
void sub_12c8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8fb0ULL || rel >= 0x12c8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c8fc0 size=304 callers=0 calls=0
*/
void sub_12c8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c8fc0ULL || rel >= 0x12c90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c90f0 size=112 callers=1 calls=1
   calls: sub_12c9160
*/
void sub_12c90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c90f0ULL || rel >= 0x12c9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9160 size=288 callers=1 calls=3
   calls: sub_12c98f0, sub_c38350, sub_e9db40
*/
void sub_12c9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9160ULL || rel >= 0x12c9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9280 size=336 callers=0 calls=0
*/
void sub_12c9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9280ULL || rel >= 0x12c93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c93d0 size=16 callers=0 calls=0
*/
void sub_12c93d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c93d0ULL || rel >= 0x12c93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c93e0 size=16 callers=0 calls=0
*/
void sub_12c93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c93e0ULL || rel >= 0x12c93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c93f0 size=16 callers=0 calls=0
*/
void sub_12c93f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c93f0ULL || rel >= 0x12c9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9400 size=16 callers=0 calls=0
*/
void sub_12c9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9400ULL || rel >= 0x12c9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9410 size=16 callers=0 calls=0
*/
void sub_12c9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9410ULL || rel >= 0x12c9420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9420 size=16 callers=0 calls=0
*/
void sub_12c9420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9420ULL || rel >= 0x12c9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9430 size=144 callers=0 calls=0
*/
void sub_12c9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9430ULL || rel >= 0x12c94c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c94c0 size=704 callers=0 calls=6
   calls: sub_12c9b90, sub_153abc0, sub_153b910, sub_7847d0, sub_7bc650, sub_a74310
*/
void sub_12c94c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c94c0ULL || rel >= 0x12c9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9780 size=16 callers=0 calls=0
*/
void sub_12c9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9780ULL || rel >= 0x12c9790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9790 size=16 callers=0 calls=0
*/
void sub_12c9790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9790ULL || rel >= 0x12c97a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c97a0 size=16 callers=0 calls=0
*/
void sub_12c97a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c97a0ULL || rel >= 0x12c97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c97b0 size=16 callers=0 calls=0
*/
void sub_12c97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c97b0ULL || rel >= 0x12c97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c97c0 size=304 callers=0 calls=0
*/
void sub_12c97c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c97c0ULL || rel >= 0x12c98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c98f0 size=544 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_12c98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c98f0ULL || rel >= 0x12c9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9b10 size=128 callers=0 calls=0
*/
void sub_12c9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9b10ULL || rel >= 0x12c9b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9b90 size=208 callers=4 calls=2
   calls: sub_12c9c60, sub_12ca440
*/
void sub_12c9b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9b90ULL || rel >= 0x12c9c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9c60 size=288 callers=1 calls=3
   calls: sub_12ca570, sub_c38350, sub_e9db40
*/
void sub_12c9c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9c60ULL || rel >= 0x12c9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9d80 size=144 callers=0 calls=0
*/
void sub_12c9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9d80ULL || rel >= 0x12c9e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9e10 size=144 callers=0 calls=0
*/
void sub_12c9e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9e10ULL || rel >= 0x12c9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9ea0 size=144 callers=0 calls=0
*/
void sub_12c9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9ea0ULL || rel >= 0x12c9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9f30 size=144 callers=0 calls=0
*/
void sub_12c9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9f30ULL || rel >= 0x12c9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012c9fc0 size=144 callers=0 calls=0
*/
void sub_12c9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c9fc0ULL || rel >= 0x12ca050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca050 size=144 callers=0 calls=0
*/
void sub_12ca050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca050ULL || rel >= 0x12ca0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca0e0 size=16 callers=0 calls=0
*/
void sub_12ca0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca0e0ULL || rel >= 0x12ca0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca0f0 size=128 callers=0 calls=0
*/
void sub_12ca0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca0f0ULL || rel >= 0x12ca170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca170 size=544 callers=0 calls=5
   calls: sub_7bc650, sub_a75e20, sub_c44310, sub_eff2d0, sub_eff630
*/
void sub_12ca170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca170ULL || rel >= 0x12ca390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca390 size=128 callers=0 calls=0
*/
void sub_12ca390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca390ULL || rel >= 0x12ca410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca410 size=16 callers=0 calls=0
*/
void sub_12ca410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca410ULL || rel >= 0x12ca420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca420 size=16 callers=0 calls=0
*/
void sub_12ca420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca420ULL || rel >= 0x12ca430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca430 size=16 callers=0 calls=0
*/
void sub_12ca430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca430ULL || rel >= 0x12ca440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca440 size=304 callers=1 calls=0
*/
void sub_12ca440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca440ULL || rel >= 0x12ca570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca570 size=352 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_12ca570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca570ULL || rel >= 0x12ca6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca6d0 size=160 callers=0 calls=0
*/
void sub_12ca6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca6d0ULL || rel >= 0x12ca770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca770 size=128 callers=3 calls=2
   calls: sub_12ca7f0, sub_e7b660
*/
void sub_12ca770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca770ULL || rel >= 0x12ca7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca7f0 size=224 callers=1 calls=3
   calls: sub_12cdef0, sub_7c2da0, sub_e7b5e0
*/
void sub_12ca7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca7f0ULL || rel >= 0x12ca8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca8d0 size=240 callers=0 calls=2
   calls: sub_12ca9c0, sub_5e2bc0
*/
void sub_12ca8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca8d0ULL || rel >= 0x12ca9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ca9c0 size=432 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_12ca9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca9c0ULL || rel >= 0x12cab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cab70 size=16 callers=0 calls=0
*/
void sub_12cab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cab70ULL || rel >= 0x12cab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cab80 size=16 callers=0 calls=0
*/
void sub_12cab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cab80ULL || rel >= 0x12cab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cab90 size=16 callers=0 calls=0
*/
void sub_12cab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cab90ULL || rel >= 0x12caba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012caba0 size=16 callers=0 calls=0
*/
void sub_12caba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12caba0ULL || rel >= 0x12cabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cabb0 size=16 callers=0 calls=0
*/
void sub_12cabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cabb0ULL || rel >= 0x12cabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cabc0 size=3184 callers=0 calls=24
   calls: sub_12cb830, sub_12cddf0, sub_12cdff0, sub_12ce120, sub_12ce4b0, sub_12ce820, sub_12ceb90, sub_12cef20, sub_12cf2b0, sub_12cf800, sub_12eef60, sub_12fe0b0
   ... +12 more
   ref: CommonOptionBar
   ref: PokeStatusMemoView
   ref: common/tokuseiinfo.dat
   ref: common/trainermemo.dat
   ref: SysMsgWindowView
   ref: common/iteminfo.dat
   ref: bin/appli/ribbon/data_table/status_ribbon.prmb
   ref: PokeStatusInfoView
*/
void PokeStatusTrainingView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cabc0ULL || rel >= 0x12cb830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cb830 size=400 callers=1 calls=3
   calls: sub_12cdff0, sub_12eec90, sub_e7c160
*/
void sub_12cb830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cb830ULL || rel >= 0x12cb9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cb9c0 size=192 callers=0 calls=4
   calls: sub_12cfb60, sub_12e9780, sub_12fe2d0, sub_e7ea20
   ref: PokeStatusSkillView
*/
void PokeStatusSkillView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cb9c0ULL || rel >= 0x12cba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cba80 size=832 callers=0 calls=20
   calls: sub_11061e0, sub_1106200, sub_1106f30, sub_12cdff0, sub_12cfb60, sub_12cfcb0, sub_12cfe00, sub_12cff50, sub_12d2030, sub_12d3990, sub_12d6600, sub_12e9850
   ... +8 more
   ref: PokeStatusBgView
   ref: PokeStatusRibbonView
   ref: PokeStatusAbilityView
   ref: PokeStatusSkillView
*/
void PokeStatusRibbonView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cba80ULL || rel >= 0x12cbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cbdc0 size=32 callers=0 calls=0
*/
void sub_12cbdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cbdc0ULL || rel >= 0x12cbde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cbde0 size=496 callers=0 calls=9
   calls: Stop_Event_PM_Voice_2, sub_12cdff0, sub_12ef5d0, sub_12ef5e0, sub_12ef5f0, sub_12ef600, sub_12fe330, sub_1505a20, sub_5e2bc0
*/
void sub_12cbde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cbde0ULL || rel >= 0x12cbfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cbfd0 size=1200 callers=0 calls=14
   calls: sub_12cc480, sub_12cc5b0, sub_12cc880, sub_12ccbe0, sub_12cd020, sub_12cd380, sub_12cd7c0, sub_12cdff0, sub_12d00a0, sub_12d01f0, sub_12d0330, sub_12d0710
   ... +2 more
*/
void sub_12cbfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cbfd0ULL || rel >= 0x12cc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cc480 size=304 callers=1 calls=3
   calls: sub_12d0470, sub_12d05c0, sub_e7c160
*/
void sub_12cc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cc480ULL || rel >= 0x12cc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cc5b0 size=720 callers=1 calls=6
   calls: sub_12d00a0, sub_12d0860, sub_12d09b0, sub_12d0b00, sub_79c240, sub_e7c160
*/
void sub_12cc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cc5b0ULL || rel >= 0x12cc880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cc880 size=864 callers=1 calls=6
   calls: sub_12cdff0, sub_12d00a0, sub_12d0470, sub_12d05c0, sub_79c240, sub_e7c160
*/
void sub_12cc880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cc880ULL || rel >= 0x12ccbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ccbe0 size=1088 callers=1 calls=7
   calls: sub_12cdff0, sub_12d00a0, sub_12d05c0, sub_12d0860, sub_12d09b0, sub_79c240, sub_e7c160
*/
void sub_12ccbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ccbe0ULL || rel >= 0x12cd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cd020 size=864 callers=1 calls=6
   calls: sub_12cdff0, sub_12d00a0, sub_12d05c0, sub_12d09b0, sub_79c240, sub_e7c160
*/
void sub_12cd020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cd020ULL || rel >= 0x12cd380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cd380 size=1088 callers=1 calls=7
   calls: sub_12cdff0, sub_12d00a0, sub_12d0470, sub_12d05c0, sub_12d0b00, sub_79c240, sub_e7c160
*/
void sub_12cd380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cd380ULL || rel >= 0x12cd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cd7c0 size=432 callers=1 calls=3
   calls: sub_12d00a0, sub_79c240, sub_e7c160
*/
void sub_12cd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cd7c0ULL || rel >= 0x12cd970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cd970 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12cd970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cd970ULL || rel >= 0x12cda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cda20 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12cda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cda20ULL || rel >= 0x12cdad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdad0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12cdad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdad0ULL || rel >= 0x12cdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdb80 size=48 callers=0 calls=1
   calls: sub_12ca9c0
*/
void sub_12cdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdb80ULL || rel >= 0x12cdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdbb0 size=96 callers=0 calls=1
   calls: sub_12cddf0
*/
void sub_12cdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdbb0ULL || rel >= 0x12cdc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdc10 size=16 callers=0 calls=0
*/
void sub_12cdc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdc10ULL || rel >= 0x12cdc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdc20 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_12cdc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdc20ULL || rel >= 0x12cdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdcd0 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_12cdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdcd0ULL || rel >= 0x12cdda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdda0 size=16 callers=0 calls=0
*/
void sub_12cdda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdda0ULL || rel >= 0x12cddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cddb0 size=16 callers=0 calls=0
*/
void sub_12cddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cddb0ULL || rel >= 0x12cddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cddc0 size=16 callers=0 calls=0
*/
void sub_12cddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cddc0ULL || rel >= 0x12cddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cddd0 size=32 callers=0 calls=0
*/
void sub_12cddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cddd0ULL || rel >= 0x12cddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cddf0 size=256 callers=3 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_12cddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cddf0ULL || rel >= 0x12cdef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdef0 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_12cdef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdef0ULL || rel >= 0x12cdff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cdff0 size=304 callers=67 calls=0
*/
void sub_12cdff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cdff0ULL || rel >= 0x12ce120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ce120 size=288 callers=1 calls=2
   calls: sub_12ce240, sub_e809c0
*/
void sub_12ce120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ce120ULL || rel >= 0x12ce240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ce240 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12ce240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ce240ULL || rel >= 0x12ce4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ce4b0 size=288 callers=1 calls=2
   calls: sub_12ce5d0, sub_e809c0
*/
void sub_12ce4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ce4b0ULL || rel >= 0x12ce5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ce5d0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12ce5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ce5d0ULL || rel >= 0x12ce820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ce820 size=288 callers=1 calls=2
   calls: sub_12ce940, sub_e809c0
*/
void sub_12ce820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ce820ULL || rel >= 0x12ce940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ce940 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12ce940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ce940ULL || rel >= 0x12ceb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ceb90 size=288 callers=1 calls=2
   calls: sub_12cecb0, sub_e809c0
*/
void sub_12ceb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ceb90ULL || rel >= 0x12cecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cecb0 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12cecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cecb0ULL || rel >= 0x12cef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cef20 size=288 callers=1 calls=2
   calls: sub_12cf040, sub_e809c0
*/
void sub_12cef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cef20ULL || rel >= 0x12cf040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cf040 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12cf040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cf040ULL || rel >= 0x12cf2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cf2b0 size=288 callers=1 calls=2
   calls: sub_12cf3d0, sub_e809c0
*/
void sub_12cf2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cf2b0ULL || rel >= 0x12cf3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cf3d0 size=528 callers=1 calls=3
   calls: sub_12cf5e0, sub_790490, sub_e7fe20
*/
void sub_12cf3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cf3d0ULL || rel >= 0x12cf5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cf5e0 size=544 callers=1 calls=3
   calls: anonymous_2, sub_11061d0, sub_14ba3b0
*/
void sub_12cf5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cf5e0ULL || rel >= 0x12cf800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cf800 size=288 callers=1 calls=2
   calls: sub_12cf920, sub_e809c0
*/
void sub_12cf800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cf800ULL || rel >= 0x12cf920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cf920 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12cf920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cf920ULL || rel >= 0x12cfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cfb60 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12cfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cfb60ULL || rel >= 0x12cfcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cfcb0 size=336 callers=8 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12cfcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cfcb0ULL || rel >= 0x12cfe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cfe00 size=336 callers=5 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12cfe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cfe00ULL || rel >= 0x12cff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012cff50 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_12cff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cff50ULL || rel >= 0x12d00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d00a0 size=336 callers=7 calls=1
   calls: anonymous
*/
void sub_12d00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d00a0ULL || rel >= 0x12d01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d01f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_12d01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d01f0ULL || rel >= 0x12d0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d0330 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_12d0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d0330ULL || rel >= 0x12d0470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d0470 size=336 callers=3 calls=1
   calls: anonymous
*/
void sub_12d0470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d0470ULL || rel >= 0x12d05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d05c0 size=336 callers=5 calls=1
   calls: anonymous
*/
void sub_12d05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d05c0ULL || rel >= 0x12d0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d0710 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_12d0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d0710ULL || rel >= 0x12d0860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d0860 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_12d0860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d0860ULL || rel >= 0x12d09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d09b0 size=336 callers=3 calls=1
   calls: anonymous
*/
void sub_12d09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d09b0ULL || rel >= 0x12d0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d0b00 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_12d0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d0b00ULL || rel >= 0x12d0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d0c50 size=160 callers=0 calls=0
*/
void sub_12d0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d0c50ULL || rel >= 0x12d0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d0cf0 size=2960 callers=0 calls=10
   calls: sub_12d1880, sub_14aad40, sub_14ba7b0, sub_14d7f80, sub_14e1a00, sub_5cfad0, sub_7a3c20, sub_8f3180, sub_e833a0, sub_e83d70
   ref: button_motion
   ref: button_00
   ref: button_01
   ref: anime_L_poke_name_00_keep
*/
void anime_L_poke_name_00_keep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d0cf0ULL || rel >= 0x12d1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d1880 size=384 callers=4 calls=2
   calls: sub_14aad40, sub_5cfad0
*/
void sub_12d1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d1880ULL || rel >= 0x12d1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d1a00 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_12d1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d1a00ULL || rel >= 0x12d1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d1a50 size=224 callers=0 calls=1
   calls: sub_e833a0
   ref: anime_L_tab_left_00_key_select
   ref: anime_L_tab_right_00_key_select
*/
void anime_L_tab_right_00_key_select_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d1a50ULL || rel >= 0x12d1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d1b30 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/status_bg_00_lyt.bin
   ref: bin/appli/status/bin/uikit_setting_status_bg_00.bin
*/
void uikit_setting_status_bg_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d1b30ULL || rel >= 0x12d1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d1d20 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/status_bg_00_lyt.bin
   ref: bin/appli/status/bin/uikit_setting_status_bg_00.bin
*/
void uikit_setting_status_bg_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d1d20ULL || rel >= 0x12d1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d1f00 size=80 callers=15 calls=1
   calls: sub_e83430
*/
void sub_12d1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d1f00ULL || rel >= 0x12d1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d1f50 size=144 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_12d1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d1f50ULL || rel >= 0x12d1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d1fe0 size=80 callers=3 calls=1
   calls: sub_e83430
*/
void sub_12d1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d1fe0ULL || rel >= 0x12d2030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d2030 size=256 callers=7 calls=3
   calls: sub_12d2130, sub_767950, sub_e83430
*/
void sub_12d2030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d2030ULL || rel >= 0x12d2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d2130 size=784 callers=50 calls=4
   calls: sub_134f3a0, sub_1353ad0, sub_1353b00, sub_1354890
*/
void sub_12d2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d2130ULL || rel >= 0x12d2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d2440 size=1776 callers=1 calls=9
   calls: sub_134f3a0, sub_1350ca0, sub_1353ad0, sub_1353b00, sub_1353ec0, sub_1354890, sub_762930, sub_76f440, sub_7847d0
*/
void sub_12d2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d2440ULL || rel >= 0x12d2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d2b30 size=1712 callers=1 calls=9
   calls: sub_134f3a0, sub_1350ca0, sub_1353ad0, sub_1353b00, sub_1353ec0, sub_1354890, sub_762930, sub_76f440, sub_7847d0
*/
void sub_12d2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d2b30ULL || rel >= 0x12d31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d31e0 size=1312 callers=4 calls=15
   calls: sub_12d2130, sub_12d3700, sub_14a9cf0, sub_14aad40, sub_14bb960, sub_14d7fc0, sub_762fd0, sub_762fe0, sub_763000, sub_763dc0, sub_767950, sub_7c22a0
   ... +3 more
   ref: anime_L_poke_name_00_g_ptn
*/
void anime_L_poke_name_00_g_ptn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d31e0ULL || rel >= 0x12d3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d3700 size=656 callers=2 calls=6
   calls: sub_1353ad0, sub_1353b00, sub_1353c70, sub_1354400, sub_1354430, sub_1354890
*/
void sub_12d3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d3700ULL || rel >= 0x12d3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d3990 size=1024 callers=1 calls=8
   calls: sub_12d2130, sub_12d3d90, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_767950, sub_e7eb10, sub_eb7b00
*/
void sub_12d3990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d3990ULL || rel >= 0x12d3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d3d90 size=496 callers=18 calls=3
   calls: sub_12d3700, sub_1354890, sub_c3b970
*/
void sub_12d3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d3d90ULL || rel >= 0x12d3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d3f80 size=640 callers=3 calls=7
   calls: sub_12d2130, sub_12d3d90, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_767950, sub_e7eb10
*/
void sub_12d3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d3f80ULL || rel >= 0x12d4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d4200 size=624 callers=1 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d4200ULL || rel >= 0x12d4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d4470 size=400 callers=2 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d4470ULL || rel >= 0x12d4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d4600 size=656 callers=1 calls=5
   calls: sub_12d3d90, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d4600ULL || rel >= 0x12d4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d4890 size=400 callers=2 calls=5
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d4890ULL || rel >= 0x12d4a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d4a20 size=736 callers=1 calls=5
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d4a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d4a20ULL || rel >= 0x12d4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d4d00 size=400 callers=1 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d4d00ULL || rel >= 0x12d4e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d4e90 size=400 callers=2 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d4e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d4e90ULL || rel >= 0x12d5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5020 size=400 callers=2 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5020ULL || rel >= 0x12d51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d51b0 size=400 callers=1 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_12d51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d51b0ULL || rel >= 0x12d5340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5340 size=192 callers=0 calls=0
*/
void sub_12d5340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5340ULL || rel >= 0x12d5400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5400 size=192 callers=0 calls=0
*/
void sub_12d5400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5400ULL || rel >= 0x12d54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d54c0 size=16 callers=0 calls=0
*/
void sub_12d54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d54c0ULL || rel >= 0x12d54d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d54d0 size=192 callers=0 calls=0
*/
void sub_12d54d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d54d0ULL || rel >= 0x12d5590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5590 size=192 callers=0 calls=0
*/
void sub_12d5590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5590ULL || rel >= 0x12d5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5650 size=16 callers=0 calls=0
*/
void sub_12d5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5650ULL || rel >= 0x12d5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5660 size=16 callers=0 calls=0
*/
void sub_12d5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5660ULL || rel >= 0x12d5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012d5670 size=192 callers=0 calls=0
*/
void sub_12d5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d5670ULL || rel >= 0x12d5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

