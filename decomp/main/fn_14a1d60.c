/* main functions 014a1d60..014bb4c0 (176 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 014a1d60 size=16 callers=0 calls=0
*/
void sub_14a1d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1d60ULL || rel >= 0x14a1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1d70 size=16 callers=0 calls=0
*/
void sub_14a1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1d70ULL || rel >= 0x14a1d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1d80 size=16 callers=0 calls=0
*/
void sub_14a1d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1d80ULL || rel >= 0x14a1d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1d90 size=16 callers=0 calls=0
*/
void sub_14a1d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1d90ULL || rel >= 0x14a1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1da0 size=16 callers=0 calls=0
*/
void sub_14a1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1da0ULL || rel >= 0x14a1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1db0 size=288 callers=0 calls=1
   calls: sub_1394530
*/
void sub_14a1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1db0ULL || rel >= 0x14a1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1ed0 size=16 callers=0 calls=0
*/
void sub_14a1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1ed0ULL || rel >= 0x14a1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1ee0 size=16 callers=0 calls=0
*/
void sub_14a1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1ee0ULL || rel >= 0x14a1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1ef0 size=16 callers=0 calls=0
*/
void sub_14a1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1ef0ULL || rel >= 0x14a1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1f00 size=64 callers=0 calls=0
*/
void sub_14a1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1f00ULL || rel >= 0x14a1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1f40 size=16 callers=0 calls=0
*/
void sub_14a1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1f40ULL || rel >= 0x14a1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1f50 size=16 callers=0 calls=0
*/
void sub_14a1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1f50ULL || rel >= 0x14a1f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1f60 size=16 callers=0 calls=0
*/
void sub_14a1f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1f60ULL || rel >= 0x14a1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1f70 size=32 callers=0 calls=0
*/
void sub_14a1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1f70ULL || rel >= 0x14a1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1f90 size=16 callers=0 calls=0
*/
void sub_14a1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1f90ULL || rel >= 0x14a1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1fa0 size=16 callers=0 calls=0
*/
void sub_14a1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1fa0ULL || rel >= 0x14a1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1fb0 size=16 callers=0 calls=0
*/
void sub_14a1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1fb0ULL || rel >= 0x14a1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a1fc0 size=2672 callers=0 calls=12
   calls: FacialAnimMax_2, sub_14a3460, sub_14a36e0, sub_14a3a50, sub_14aad40, sub_14e1a30, sub_8f19b0, sub_8f3180, sub_e7eb10, sub_e7f7c0, sub_e84190, sub_e84310
   ref: L_tab_emo_00
   ref: pane_%s
   ref: P_icon_pose_00
   ref: pane_%s_%s
   ref: P_wear_00
   ref: L_icon_pose_%02d
   ref: P_icon_face_00
   ref: L_icon_current_pose_00
*/
void L_icon_current_pose_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a1fc0ULL || rel >= 0x14a2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a2a30 size=2608 callers=1 calls=15
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_1106f30, sub_135a1a0, sub_1394560, sub_1498f60, sub_14a56a0, sub_5dd790, sub_5e26a0, sub_5e2930
   ... +3 more
   ref: Unlock
   ref: facialData
   ref: FacialAnimMax
   ref: bin/appli/trlicence/bin/chara_anim_list_data.prmb
   ref: PoseAnimMax
   ref: poseData
*/
void FacialAnimMax_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a2a30ULL || rel >= 0x14a3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a3460 size=640 callers=1 calls=2
   calls: sub_14a4e80, sub_e84250
*/
void sub_14a3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a3460ULL || rel >= 0x14a36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a36e0 size=880 callers=1 calls=4
   calls: sub_14e1a00, sub_8f19b0, sub_e7eb10, sub_e83e60
*/
void sub_14a36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a36e0ULL || rel >= 0x14a3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a3a50 size=2112 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_14a3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a3a50ULL || rel >= 0x14a4290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4290 size=16 callers=0 calls=0
*/
void sub_14a4290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4290ULL || rel >= 0x14a42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a42a0 size=80 callers=2 calls=1
   calls: sub_1498f60
*/
void sub_14a42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a42a0ULL || rel >= 0x14a42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a42f0 size=464 callers=0 calls=1
   calls: sub_c46830
*/
void sub_14a42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a42f0ULL || rel >= 0x14a44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a44c0 size=48 callers=0 calls=0
*/
void sub_14a44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a44c0ULL || rel >= 0x14a44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a44f0 size=256 callers=1 calls=4
   calls: sub_14e1a00, sub_14e1a30, sub_1500c40, sub_e807f0
*/
void sub_14a44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a44f0ULL || rel >= 0x14a45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a45f0 size=16 callers=0 calls=0
*/
void sub_14a45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a45f0ULL || rel >= 0x14a4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4600 size=192 callers=1 calls=3
   calls: sub_14e1a00, sub_14e1a30, sub_1500c40
*/
void sub_14a4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4600ULL || rel >= 0x14a46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a46c0 size=32 callers=0 calls=0
*/
void sub_14a46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a46c0ULL || rel >= 0x14a46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a46e0 size=144 callers=1 calls=3
   calls: sub_1502120, sub_5cfad0, sub_e83430
*/
void sub_14a46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a46e0ULL || rel >= 0x14a4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4770 size=144 callers=1 calls=4
   calls: sub_14e1a30, sub_1502120, sub_5cfad0, sub_e83430
*/
void sub_14a4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4770ULL || rel >= 0x14a4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4800 size=96 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_14a4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4800ULL || rel >= 0x14a4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4860 size=96 callers=2 calls=1
   calls: sub_14ab2b0
*/
void sub_14a4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4860ULL || rel >= 0x14a48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a48c0 size=64 callers=0 calls=2
   calls: sub_14eebd0, sub_14eebe0
*/
void sub_14a48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a48c0ULL || rel >= 0x14a4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4900 size=1056 callers=0 calls=4
   calls: sub_1394530, sub_1498f60, sub_1500c40, sub_e83430
   ref: anime_%s
   ref: L_icon_pose_%02d
   ref: check_on
   ref: anime_%s_%s
*/
void check_on_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4900ULL || rel >= 0x14a4d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4d20 size=352 callers=0 calls=1
   calls: check_on_4
*/
void sub_14a4d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4d20ULL || rel >= 0x14a4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4e80 size=176 callers=3 calls=4
   calls: sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870
*/
void sub_14a4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4e80ULL || rel >= 0x14a4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a4f30 size=384 callers=1 calls=3
   calls: sub_14ab0c0, sub_14ab440, sub_14ab5c0
   ref: anime_%s
   ref: L_icon_pose_%02d
   ref: check_on
   ref: anime_%s_%s
*/
void check_on_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a4f30ULL || rel >= 0x14a50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a50b0 size=240 callers=0 calls=2
   calls: sub_14e1a00, sub_1500c40
*/
void sub_14a50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a50b0ULL || rel >= 0x14a51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a51a0 size=256 callers=0 calls=2
   calls: sub_14e1a00, sub_1500c40
*/
void sub_14a51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a51a0ULL || rel >= 0x14a52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a52a0 size=16 callers=0 calls=0
*/
void sub_14a52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a52a0ULL || rel >= 0x14a52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a52b0 size=128 callers=0 calls=2
   calls: sub_14a4e80, sub_14e1a30
*/
void sub_14a52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a52b0ULL || rel >= 0x14a5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5330 size=128 callers=0 calls=2
   calls: sub_14a4e80, sub_14e1a30
*/
void sub_14a5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5330ULL || rel >= 0x14a53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a53b0 size=624 callers=0 calls=0
*/
void sub_14a53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a53b0ULL || rel >= 0x14a5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5620 size=16 callers=0 calls=0
*/
void sub_14a5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5620ULL || rel >= 0x14a5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5630 size=16 callers=0 calls=0
*/
void sub_14a5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5630ULL || rel >= 0x14a5640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5640 size=16 callers=0 calls=0
*/
void sub_14a5640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5640ULL || rel >= 0x14a5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5650 size=16 callers=0 calls=0
*/
void sub_14a5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5650ULL || rel >= 0x14a5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5660 size=16 callers=0 calls=0
*/
void sub_14a5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5660ULL || rel >= 0x14a5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5670 size=16 callers=0 calls=0
*/
void sub_14a5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5670ULL || rel >= 0x14a5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5680 size=16 callers=0 calls=0
*/
void sub_14a5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5680ULL || rel >= 0x14a5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5690 size=16 callers=0 calls=0
*/
void sub_14a5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5690ULL || rel >= 0x14a56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a56a0 size=464 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_14a56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a56a0ULL || rel >= 0x14a5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5870 size=48 callers=0 calls=0
*/
void sub_14a5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5870ULL || rel >= 0x14a58a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a58a0 size=16 callers=0 calls=0
*/
void sub_14a58a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a58a0ULL || rel >= 0x14a58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a58b0 size=32 callers=0 calls=0
*/
void sub_14a58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a58b0ULL || rel >= 0x14a58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a58d0 size=32 callers=0 calls=0
*/
void sub_14a58d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a58d0ULL || rel >= 0x14a58f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a58f0 size=16 callers=0 calls=0
*/
void sub_14a58f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a58f0ULL || rel >= 0x14a5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5900 size=16 callers=0 calls=0
*/
void sub_14a5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5900ULL || rel >= 0x14a5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5910 size=16 callers=0 calls=0
*/
void sub_14a5910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5910ULL || rel >= 0x14a5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5920 size=16 callers=0 calls=0
*/
void sub_14a5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5920ULL || rel >= 0x14a5930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5930 size=32 callers=0 calls=0
*/
void sub_14a5930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5930ULL || rel >= 0x14a5950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5950 size=16 callers=0 calls=0
*/
void sub_14a5950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5950ULL || rel >= 0x14a5960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5960 size=32 callers=0 calls=0
*/
void sub_14a5960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5960ULL || rel >= 0x14a5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5980 size=32 callers=0 calls=0
*/
void sub_14a5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5980ULL || rel >= 0x14a59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a59a0 size=1456 callers=0 calls=10
   calls: sub_14e1a30, sub_5cfad0, sub_7a3c20, sub_8f19b0, sub_e7eb10, sub_e7f7c0, sub_e83e60, sub_e84190, sub_e84310, sub_f0cc60
*/
void sub_14a59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a59a0ULL || rel >= 0x14a5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a5f50 size=464 callers=0 calls=1
   calls: sub_c46830
*/
void sub_14a5f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a5f50ULL || rel >= 0x14a6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6120 size=80 callers=1 calls=2
   calls: sub_14e1a30, sub_1500c40
*/
void sub_14a6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6120ULL || rel >= 0x14a6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6170 size=16 callers=1 calls=0
*/
void sub_14a6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6170ULL || rel >= 0x14a6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6180 size=112 callers=0 calls=0
*/
void sub_14a6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6180ULL || rel >= 0x14a61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a61f0 size=112 callers=0 calls=0
*/
void sub_14a61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a61f0ULL || rel >= 0x14a6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6260 size=16 callers=0 calls=0
*/
void sub_14a6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6260ULL || rel >= 0x14a6270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6270 size=112 callers=0 calls=0
*/
void sub_14a6270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6270ULL || rel >= 0x14a62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a62e0 size=112 callers=0 calls=0
*/
void sub_14a62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a62e0ULL || rel >= 0x14a6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6350 size=16 callers=0 calls=0
*/
void sub_14a6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6350ULL || rel >= 0x14a6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6360 size=16 callers=0 calls=0
*/
void sub_14a6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6360ULL || rel >= 0x14a6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6370 size=112 callers=0 calls=0
*/
void sub_14a6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6370ULL || rel >= 0x14a63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a63e0 size=112 callers=0 calls=0
*/
void sub_14a63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a63e0ULL || rel >= 0x14a6450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6450 size=304 callers=0 calls=0
*/
void sub_14a6450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6450ULL || rel >= 0x14a6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6580 size=16 callers=0 calls=0
*/
void sub_14a6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6580ULL || rel >= 0x14a6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6590 size=16 callers=0 calls=0
*/
void sub_14a6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6590ULL || rel >= 0x14a65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a65a0 size=16 callers=0 calls=0
*/
void sub_14a65a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a65a0ULL || rel >= 0x14a65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a65b0 size=16 callers=0 calls=0
*/
void sub_14a65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a65b0ULL || rel >= 0x14a65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a65c0 size=16 callers=0 calls=0
*/
void sub_14a65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a65c0ULL || rel >= 0x14a65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a65d0 size=16 callers=0 calls=0
*/
void sub_14a65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a65d0ULL || rel >= 0x14a65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a65e0 size=16 callers=0 calls=0
*/
void sub_14a65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a65e0ULL || rel >= 0x14a65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a65f0 size=16 callers=0 calls=0
*/
void sub_14a65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a65f0ULL || rel >= 0x14a6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6600 size=16 callers=0 calls=0
*/
void sub_14a6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6600ULL || rel >= 0x14a6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6610 size=16 callers=0 calls=0
*/
void sub_14a6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6610ULL || rel >= 0x14a6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6620 size=16 callers=0 calls=0
*/
void sub_14a6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6620ULL || rel >= 0x14a6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6630 size=16 callers=0 calls=0
*/
void sub_14a6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6630ULL || rel >= 0x14a6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6640 size=928 callers=0 calls=7
   calls: TextureMax, sub_14a6f30, sub_14e1a30, sub_5cfad0, sub_e83e60, sub_e84190, sub_e84310
*/
void sub_14a6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6640ULL || rel >= 0x14a69e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a69e0 size=1360 callers=1 calls=11
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_1106f30, sub_1345ca0, sub_149de50, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0
   ref: MsgLabel
   ref: bin/appli/trlicence/bin/gloss_texture_list_data.prmb
   ref: glossData
   ref: TextureMax
*/
void TextureMax(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a69e0ULL || rel >= 0x14a6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a6f30 size=352 callers=1 calls=3
   calls: sub_8f19b0, sub_e7eb10, sub_e7f7c0
*/
void sub_14a6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a6f30ULL || rel >= 0x14a7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7090 size=464 callers=0 calls=1
   calls: sub_c46830
*/
void sub_14a7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7090ULL || rel >= 0x14a7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7260 size=336 callers=2 calls=3
   calls: T_itemlist_number_01_3, sub_14a73b0, sub_14ab040
   ref: pane_%s
   ref: N_gloss_00
*/
void N_gloss_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7260ULL || rel >= 0x14a73b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a73b0 size=176 callers=1 calls=1
   calls: sub_5cfad0
*/
void sub_14a73b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a73b0ULL || rel >= 0x14a7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7460 size=976 callers=1 calls=6
   calls: sub_1315b90, sub_14ac040, sub_14ac370, sub_67d450, sub_e7eb10, sub_e7f7c0
   ref: T_itemlist_number_01
   ref: pane_%s
   ref: T_itemlist_name
*/
void T_itemlist_number_01_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7460ULL || rel >= 0x14a7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7830 size=96 callers=2 calls=2
   calls: sub_14e1a30, sub_1500c40
*/
void sub_14a7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7830ULL || rel >= 0x14a7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7890 size=32 callers=2 calls=0
*/
void sub_14a7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7890ULL || rel >= 0x14a78b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a78b0 size=176 callers=0 calls=0
*/
void sub_14a78b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a78b0ULL || rel >= 0x14a7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7960 size=176 callers=0 calls=0
*/
void sub_14a7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7960ULL || rel >= 0x14a7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7a10 size=16 callers=0 calls=0
*/
void sub_14a7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7a10ULL || rel >= 0x14a7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7a20 size=176 callers=0 calls=0
*/
void sub_14a7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7a20ULL || rel >= 0x14a7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7ad0 size=176 callers=0 calls=0
*/
void sub_14a7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7ad0ULL || rel >= 0x14a7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7b80 size=16 callers=0 calls=0
*/
void sub_14a7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7b80ULL || rel >= 0x14a7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7b90 size=16 callers=0 calls=0
*/
void sub_14a7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7b90ULL || rel >= 0x14a7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7ba0 size=176 callers=0 calls=0
*/
void sub_14a7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7ba0ULL || rel >= 0x14a7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7c50 size=176 callers=0 calls=0
*/
void sub_14a7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7c50ULL || rel >= 0x14a7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7d00 size=304 callers=0 calls=0
*/
void sub_14a7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7d00ULL || rel >= 0x14a7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7e30 size=16 callers=0 calls=0
*/
void sub_14a7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7e30ULL || rel >= 0x14a7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7e40 size=16 callers=0 calls=0
*/
void sub_14a7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7e40ULL || rel >= 0x14a7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7e50 size=16 callers=0 calls=0
*/
void sub_14a7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7e50ULL || rel >= 0x14a7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7e60 size=16 callers=0 calls=0
*/
void sub_14a7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7e60ULL || rel >= 0x14a7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7e70 size=16 callers=0 calls=0
*/
void sub_14a7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7e70ULL || rel >= 0x14a7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7e80 size=16 callers=0 calls=0
*/
void sub_14a7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7e80ULL || rel >= 0x14a7e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7e90 size=16 callers=0 calls=0
*/
void sub_14a7e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7e90ULL || rel >= 0x14a7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7ea0 size=16 callers=0 calls=0
*/
void sub_14a7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7ea0ULL || rel >= 0x14a7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7eb0 size=288 callers=7 calls=2
   calls: sub_5e2350, sub_6835f0
*/
void sub_14a7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7eb0ULL || rel >= 0x14a7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a7fd0 size=544 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14a7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a7fd0ULL || rel >= 0x14a81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a81f0 size=16 callers=0 calls=0
*/
void sub_14a81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a81f0ULL || rel >= 0x14a8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8200 size=16 callers=0 calls=0
*/
void sub_14a8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8200ULL || rel >= 0x14a8210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8210 size=16 callers=0 calls=0
*/
void sub_14a8210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8210ULL || rel >= 0x14a8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8220 size=16 callers=0 calls=0
*/
void sub_14a8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8220ULL || rel >= 0x14a8230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8230 size=16 callers=0 calls=0
*/
void sub_14a8230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8230ULL || rel >= 0x14a8240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8240 size=112 callers=1 calls=0
*/
void sub_14a8240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8240ULL || rel >= 0x14a82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a82b0 size=144 callers=8 calls=2
   calls: ScFontB_2, T__02d
*/
void sub_14a82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a82b0ULL || rel >= 0x14a8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8340 size=720 callers=1 calls=14
   calls: gamma_correction, sub_130e1b0, sub_5e26a0, sub_5e2930, sub_602930, sub_683640, sub_683670, sub_685230, sub_687450, sub_687680, sub_687770, sub_c47200
   ... +2 more
   ref: ScFontB
*/
void ScFontB_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8340ULL || rel >= 0x14a8610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8610 size=1024 callers=1 calls=6
   calls: sub_1308930, sub_1309a60, sub_1357400, sub_14a98d0, sub_67b990, sub_685270
   ref: T_%02d
   ref: T_text_%02d
*/
void T__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8610ULL || rel >= 0x14a8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8a10 size=352 callers=2 calls=2
   calls: sub_130ee10, sub_5e2bc0
*/
void sub_14a8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8a10ULL || rel >= 0x14a8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8b70 size=16 callers=3 calls=0
*/
void sub_14a8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8b70ULL || rel >= 0x14a8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8b80 size=96 callers=1 calls=0
*/
void sub_14a8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8b80ULL || rel >= 0x14a8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8be0 size=32 callers=3 calls=0
*/
void sub_14a8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8be0ULL || rel >= 0x14a8c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8c00 size=736 callers=0 calls=2
   calls: sub_1502120, sub_5cfad0
   ref: Play_me_or_lvup
   ref: Play_UI_common_waza_forget
   ref: Play_me_or_st_waza_get
*/
void Play_UI_common_waza_forget(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8c00ULL || rel >= 0x14a8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8ee0 size=112 callers=1 calls=2
   calls: sub_1311c60, sub_67be10
*/
void sub_14a8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8ee0ULL || rel >= 0x14a8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8f50 size=128 callers=1 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_14a8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8f50ULL || rel >= 0x14a8fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a8fd0 size=144 callers=5 calls=3
   calls: L_cursor_00_2, sub_1309a60, sub_67ea10
*/
void sub_14a8fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a8fd0ULL || rel >= 0x14a9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9060 size=320 callers=2 calls=1
   calls: sub_685250
   ref: L_cursor_00
*/
void L_cursor_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9060ULL || rel >= 0x14a91a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a91a0 size=32 callers=7 calls=0
*/
void sub_14a91a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a91a0ULL || rel >= 0x14a91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a91c0 size=240 callers=11 calls=1
   calls: sub_1c0
*/
void sub_14a91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a91c0ULL || rel >= 0x14a92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a92b0 size=16 callers=15 calls=0
*/
void sub_14a92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a92b0ULL || rel >= 0x14a92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a92c0 size=16 callers=1 calls=0
*/
void sub_14a92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a92c0ULL || rel >= 0x14a92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a92d0 size=144 callers=8 calls=1
   calls: sub_685250
   ref: L_cursor_00
*/
void L_cursor_00_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a92d0ULL || rel >= 0x14a9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9360 size=16 callers=0 calls=0
*/
void sub_14a9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9360ULL || rel >= 0x14a9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9370 size=208 callers=1 calls=0
*/
void sub_14a9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9370ULL || rel >= 0x14a9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9440 size=32 callers=2 calls=0
*/
void sub_14a9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9440ULL || rel >= 0x14a9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9460 size=64 callers=2 calls=1
   calls: sub_67e9d0
*/
void sub_14a9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9460ULL || rel >= 0x14a94a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a94a0 size=128 callers=13 calls=3
   calls: sub_685850, sub_685a50, sub_685ab0
*/
void sub_14a94a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a94a0ULL || rel >= 0x14a9520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9520 size=80 callers=0 calls=1
   calls: sub_685a50
*/
void sub_14a9520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9520ULL || rel >= 0x14a9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9570 size=16 callers=1 calls=0
*/
void sub_14a9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9570ULL || rel >= 0x14a9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9580 size=16 callers=9 calls=0
*/
void sub_14a9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9580ULL || rel >= 0x14a9590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9590 size=16 callers=0 calls=0
*/
void sub_14a9590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9590ULL || rel >= 0x14a95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a95a0 size=16 callers=0 calls=0
*/
void sub_14a95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a95a0ULL || rel >= 0x14a95b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a95b0 size=128 callers=1 calls=4
   calls: sub_130ada0, sub_67bdb0, sub_67be60, sub_685270
   ref: T_name_00
*/
void T_name_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a95b0ULL || rel >= 0x14a9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9630 size=32 callers=1 calls=0
*/
void sub_14a9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9630ULL || rel >= 0x14a9650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9650 size=112 callers=0 calls=1
   calls: sub_14a97e0
*/
void sub_14a9650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9650ULL || rel >= 0x14a96c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a96c0 size=16 callers=0 calls=0
*/
void sub_14a96c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a96c0ULL || rel >= 0x14a96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a96d0 size=112 callers=0 calls=1
   calls: sub_14a97e0
*/
void sub_14a96d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a96d0ULL || rel >= 0x14a9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9740 size=112 callers=0 calls=1
   calls: sub_14a97e0
*/
void sub_14a9740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9740ULL || rel >= 0x14a97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a97b0 size=16 callers=0 calls=0
*/
void sub_14a97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a97b0ULL || rel >= 0x14a97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a97c0 size=16 callers=0 calls=0
*/
void sub_14a97c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a97c0ULL || rel >= 0x14a97d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a97d0 size=16 callers=0 calls=0
*/
void sub_14a97d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a97d0ULL || rel >= 0x14a97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a97e0 size=240 callers=3 calls=0
*/
void sub_14a97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a97e0ULL || rel >= 0x14a98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a98d0 size=256 callers=1 calls=1
   calls: sub_13084f0
*/
void sub_14a98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a98d0ULL || rel >= 0x14a99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a99d0 size=192 callers=1 calls=0
*/
void sub_14a99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a99d0ULL || rel >= 0x14a9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9a90 size=448 callers=1 calls=4
   calls: sub_14b1a10, sub_5e26a0, sub_5e2930, sub_c47200
   ref: bin/appli/icon_language/bin/lang_icon.arc
*/
void lang_icon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9a90ULL || rel >= 0x14a9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9c50 size=32 callers=1 calls=0
*/
void sub_14a9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9c50ULL || rel >= 0x14a9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9c70 size=128 callers=1 calls=3
   calls: sub_687680, sub_687770, sub_c47a90
*/
void sub_14a9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9c70ULL || rel >= 0x14a9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9cf0 size=208 callers=4 calls=2
   calls: sub_687a20, sub_687a40
*/
void sub_14a9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9cf0ULL || rel >= 0x14a9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9dc0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14a9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9dc0ULL || rel >= 0x14a9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9ea0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14a9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9ea0ULL || rel >= 0x14a9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014a9f80 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14a9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a9f80ULL || rel >= 0x14aa060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aa060 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14aa060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aa060ULL || rel >= 0x14aa140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aa140 size=1328 callers=1 calls=7
   calls: sub_130b140, sub_13118e0, sub_14aa670, sub_14ac4e0, sub_14ac740, sub_14ac970, sub_67b990
*/
void sub_14aa140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aa140ULL || rel >= 0x14aa670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aa670 size=528 callers=1 calls=0
*/
void sub_14aa670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aa670ULL || rel >= 0x14aa880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aa880 size=1040 callers=0 calls=2
   calls: sub_130eda0, sub_130ee10
*/
void sub_14aa880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aa880ULL || rel >= 0x14aac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aac90 size=16 callers=0 calls=0
*/
void sub_14aac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aac90ULL || rel >= 0x14aaca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aaca0 size=16 callers=0 calls=0
*/
void sub_14aaca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aaca0ULL || rel >= 0x14aacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aacb0 size=16 callers=0 calls=0
*/
void sub_14aacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aacb0ULL || rel >= 0x14aacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aacc0 size=128 callers=25 calls=0
*/
void sub_14aacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aacc0ULL || rel >= 0x14aad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aad40 size=112 callers=615 calls=0
*/
void sub_14aad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aad40ULL || rel >= 0x14aadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aadb0 size=64 callers=14 calls=0
*/
void sub_14aadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aadb0ULL || rel >= 0x14aadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aadf0 size=160 callers=19 calls=0
*/
void sub_14aadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aadf0ULL || rel >= 0x14aae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aae90 size=48 callers=2 calls=0
*/
void sub_14aae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aae90ULL || rel >= 0x14aaec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aaec0 size=128 callers=3 calls=0
*/
void sub_14aaec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aaec0ULL || rel >= 0x14aaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aaf40 size=128 callers=1 calls=0
*/
void sub_14aaf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aaf40ULL || rel >= 0x14aafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aafc0 size=128 callers=1 calls=0
*/
void sub_14aafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aafc0ULL || rel >= 0x14ab040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab040 size=64 callers=300 calls=0
*/
void sub_14ab040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab040ULL || rel >= 0x14ab080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab080 size=64 callers=13 calls=0
*/
void sub_14ab080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab080ULL || rel >= 0x14ab0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab0c0 size=192 callers=141 calls=3
   calls: sub_685850, sub_685a50, sub_685ab0
*/
void sub_14ab0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab0c0ULL || rel >= 0x14ab180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab180 size=128 callers=11 calls=0
*/
void sub_14ab180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab180ULL || rel >= 0x14ab200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab200 size=176 callers=19 calls=1
   calls: sub_685a50
*/
void sub_14ab200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab200ULL || rel >= 0x14ab2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab2b0 size=208 callers=137 calls=3
   calls: sub_685820, sub_685a50, sub_685c60
*/
void sub_14ab2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab2b0ULL || rel >= 0x14ab380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab380 size=192 callers=0 calls=2
   calls: sub_685820, sub_685a50
*/
void sub_14ab380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab380ULL || rel >= 0x14ab440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab440 size=208 callers=73 calls=2
   calls: sub_685a50, sub_685ab0
*/
void sub_14ab440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab440ULL || rel >= 0x14ab510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab510 size=176 callers=2 calls=1
   calls: sub_685a50
*/
void sub_14ab510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab510ULL || rel >= 0x14ab5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab5c0 size=176 callers=11 calls=1
   calls: sub_685a50
*/
void sub_14ab5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab5c0ULL || rel >= 0x14ab670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab670 size=208 callers=9 calls=0
*/
void sub_14ab670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab670ULL || rel >= 0x14ab740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab740 size=208 callers=14 calls=0
*/
void sub_14ab740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab740ULL || rel >= 0x14ab810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab810 size=208 callers=13 calls=0
*/
void sub_14ab810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab810ULL || rel >= 0x14ab8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab8e0 size=64 callers=12 calls=0
*/
void sub_14ab8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab8e0ULL || rel >= 0x14ab920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab920 size=128 callers=1 calls=0
*/
void sub_14ab920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab920ULL || rel >= 0x14ab9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ab9a0 size=256 callers=0 calls=1
   calls: sub_687a20
*/
void sub_14ab9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ab9a0ULL || rel >= 0x14abaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014abaa0 size=80 callers=1 calls=1
   calls: sub_14acbd0
*/
void sub_14abaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abaa0ULL || rel >= 0x14abaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014abaf0 size=96 callers=2 calls=1
   calls: sub_14acf30
*/
void sub_14abaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abaf0ULL || rel >= 0x14abb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014abb50 size=112 callers=1 calls=1
   calls: sub_14ad2d0
*/
void sub_14abb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abb50ULL || rel >= 0x14abbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014abbc0 size=208 callers=1 calls=1
   calls: sub_14ad670
*/
void sub_14abbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abbc0ULL || rel >= 0x14abc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014abc90 size=160 callers=8 calls=2
   calls: sub_602930, sub_687770
*/
void sub_14abc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abc90ULL || rel >= 0x14abd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014abd30 size=80 callers=0 calls=1
   calls: sub_602930
*/
void sub_14abd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abd30ULL || rel >= 0x14abd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014abd80 size=128 callers=4 calls=0
*/
void sub_14abd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abd80ULL || rel >= 0x14abe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014abe00 size=576 callers=2 calls=0
*/
void sub_14abe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14abe00ULL || rel >= 0x14ac040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac040 size=576 callers=33 calls=0
*/
void sub_14ac040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac040ULL || rel >= 0x14ac280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac280 size=240 callers=1 calls=0
*/
void sub_14ac280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac280ULL || rel >= 0x14ac370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac370 size=80 callers=240 calls=1
   calls: sub_1311c60
*/
void sub_14ac370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac370ULL || rel >= 0x14ac3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac3c0 size=96 callers=19 calls=0
*/
void sub_14ac3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac3c0ULL || rel >= 0x14ac420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac420 size=16 callers=0 calls=0
*/
void sub_14ac420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac420ULL || rel >= 0x14ac430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac430 size=176 callers=4 calls=1
   calls: sub_685cc0
*/
void sub_14ac430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac430ULL || rel >= 0x14ac4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac4e0 size=608 callers=1 calls=0
*/
void sub_14ac4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac4e0ULL || rel >= 0x14ac740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac740 size=560 callers=1 calls=0
*/
void sub_14ac740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac740ULL || rel >= 0x14ac970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ac970 size=608 callers=1 calls=0
*/
void sub_14ac970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ac970ULL || rel >= 0x14acbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014acbd0 size=336 callers=1 calls=0
*/
void sub_14acbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14acbd0ULL || rel >= 0x14acd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014acd20 size=528 callers=0 calls=0
*/
void sub_14acd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14acd20ULL || rel >= 0x14acf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014acf30 size=352 callers=1 calls=0
*/
void sub_14acf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14acf30ULL || rel >= 0x14ad090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ad090 size=576 callers=0 calls=0
*/
void sub_14ad090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ad090ULL || rel >= 0x14ad2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ad2d0 size=352 callers=1 calls=0
*/
void sub_14ad2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ad2d0ULL || rel >= 0x14ad430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ad430 size=576 callers=0 calls=0
*/
void sub_14ad430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ad430ULL || rel >= 0x14ad670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ad670 size=464 callers=1 calls=0
*/
void sub_14ad670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ad670ULL || rel >= 0x14ad840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ad840 size=336 callers=8 calls=0
*/
void sub_14ad840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ad840ULL || rel >= 0x14ad990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ad990 size=224 callers=0 calls=2
   calls: sub_14ada70, sub_14adda0
*/
void sub_14ad990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ad990ULL || rel >= 0x14ada70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ada70 size=816 callers=2 calls=5
   calls: sub_14ae500, sub_14ae800, sub_14aec00, sub_14af000, sub_14af470
*/
void sub_14ada70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ada70ULL || rel >= 0x14adda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014adda0 size=1888 callers=2 calls=6
   calls: sub_14ab040, sub_14ae500, sub_14ae800, sub_14aec00, sub_14af000, sub_5e2bc0
*/
void sub_14adda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14adda0ULL || rel >= 0x14ae500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ae500 size=768 callers=6 calls=4
   calls: sub_14abaf0, sub_14af810, sub_5e2bc0, sub_d0c0
*/
void sub_14ae500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ae500ULL || rel >= 0x14ae800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ae800 size=1024 callers=6 calls=7
   calls: gamma_correction, sub_14ab920, sub_14abaa0, sub_14af810, sub_5e2bc0, sub_685cc0, sub_c47b70
*/
void sub_14ae800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ae800ULL || rel >= 0x14aec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014aec00 size=1024 callers=6 calls=9
   calls: sub_14abbc0, sub_14abd80, sub_14af810, sub_14afd70, sub_5e2bc0, sub_685250, sub_685360, sub_685450, sub_685470
*/
void sub_14aec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14aec00ULL || rel >= 0x14af000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014af000 size=1136 callers=6 calls=10
   calls: sub_14abb50, sub_14abd80, sub_14af810, sub_5e2bc0, sub_685360, sub_685470, sub_6855a0, sub_6856d0, sub_685810, sub_685820
*/
void sub_14af000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14af000ULL || rel >= 0x14af470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014af470 size=928 callers=2 calls=6
   calls: sub_14abaf0, sub_14af810, sub_5e2bc0, sub_687680, sub_c47a90, sub_d0c0
*/
void sub_14af470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14af470ULL || rel >= 0x14af810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014af810 size=480 callers=7 calls=1
   calls: sub_62d4f0
*/
void sub_14af810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14af810ULL || rel >= 0x14af9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014af9f0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14af9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14af9f0ULL || rel >= 0x14afad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014afad0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14afad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14afad0ULL || rel >= 0x14afbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014afbb0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14afbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14afbb0ULL || rel >= 0x14afc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014afc90 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_14afc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14afc90ULL || rel >= 0x14afd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014afd70 size=240 callers=1 calls=2
   calls: sub_17ac720, sub_17ac750
*/
void sub_14afd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14afd70ULL || rel >= 0x14afe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014afe60 size=1424 callers=2 calls=11
   calls: sub_14b0b20, sub_14b0e20, sub_14b1120, sub_14b5b70, sub_5dd790, sub_5e2930, sub_948390, sub_96e0d0, sub_9b2290, sub_c4a100, sub_e884e0
   ref: bin/appli/context/bin/context_00_lyt.bin
   ref: bin/appli/live_comm/data_table/live_comm_stamp.prmb
   ref: bin/appli/icon_pokemon/pokecaplist.bin
   ref: bin/appli/cursor/bin/cursor_lyt.bin
*/
void live_comm_stamp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14afe60ULL || rel >= 0x14b03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b03f0 size=272 callers=2 calls=1
   calls: sub_14b5d60
*/
void sub_14b03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b03f0ULL || rel >= 0x14b0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b0500 size=1568 callers=2 calls=6
   calls: sub_14af810, sub_5e2bc0, sub_687680, sub_687770, sub_c47a90, sub_d0c0
*/
void sub_14b0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b0500ULL || rel >= 0x14b0b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b0b20 size=400 callers=1 calls=4
   calls: sub_14b0cb0, sub_eb2600, sub_eb28e0, sub_eb2ee0
*/
void sub_14b0b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b0b20ULL || rel >= 0x14b0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b0cb0 size=368 callers=1 calls=2
   calls: sub_6835f0, sub_eb2c80
*/
void sub_14b0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b0cb0ULL || rel >= 0x14b0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b0e20 size=400 callers=1 calls=4
   calls: sub_14b0fb0, sub_eb2600, sub_eb28e0, sub_eb2ee0
*/
void sub_14b0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b0e20ULL || rel >= 0x14b0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b0fb0 size=368 callers=1 calls=2
   calls: sub_6835f0, sub_eb2c80
*/
void sub_14b0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b0fb0ULL || rel >= 0x14b1120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1120 size=400 callers=1 calls=4
   calls: sub_14b12b0, sub_eb2600, sub_eb28e0, sub_eb2ee0
*/
void sub_14b1120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1120ULL || rel >= 0x14b12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b12b0 size=368 callers=1 calls=2
   calls: sub_6835f0, sub_eb2c80
*/
void sub_14b12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b12b0ULL || rel >= 0x14b1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1420 size=128 callers=0 calls=0
*/
void sub_14b1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1420ULL || rel >= 0x14b14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b14a0 size=208 callers=2 calls=2
   calls: sub_5e2180, sub_65d700
*/
void sub_14b14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b14a0ULL || rel >= 0x14b1570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1570 size=880 callers=0 calls=8
   calls: sub_14b18e0, sub_5e2750, sub_5e2830, sub_5e2930, sub_62b1d0, sub_7c2b60, sub_c47200, unnamed_52
*/
void sub_14b1570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1570ULL || rel >= 0x14b18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b18e0 size=304 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_14b18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b18e0ULL || rel >= 0x14b1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1a10 size=80 callers=3 calls=1
   calls: sub_7c2b60
*/
void sub_14b1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1a10ULL || rel >= 0x14b1a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1a60 size=752 callers=2 calls=2
   calls: sub_14b2690, sub_c46830
   ref: _kor.arc
   ref: _tch.arc
   ref: _ita.arc
   ref: _eng.arc
   ref: _spa.arc
   ref: _fre.arc
   ref: _sch.arc
   ref: _ger.arc
*/
void unnamed_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1a60ULL || rel >= 0x14b1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1d50 size=240 callers=0 calls=1
   calls: sub_14b20a0
*/
void sub_14b1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1d50ULL || rel >= 0x14b1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1e40 size=16 callers=0 calls=0
*/
void sub_14b1e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1e40ULL || rel >= 0x14b1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1e50 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_14b1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1e50ULL || rel >= 0x14b1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1f00 size=16 callers=0 calls=0
*/
void sub_14b1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1f00ULL || rel >= 0x14b1f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1f10 size=16 callers=0 calls=0
*/
void sub_14b1f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1f10ULL || rel >= 0x14b1f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1f20 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_14b1f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1f20ULL || rel >= 0x14b1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b1fd0 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_14b1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b1fd0ULL || rel >= 0x14b2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2080 size=16 callers=0 calls=0
*/
void sub_14b2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2080ULL || rel >= 0x14b2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2090 size=16 callers=0 calls=0
*/
void sub_14b2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2090ULL || rel >= 0x14b20a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b20a0 size=288 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_14b20a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b20a0ULL || rel >= 0x14b21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b21c0 size=800 callers=0 calls=2
   calls: sub_14b24e0, sub_5e2bc0
*/
void sub_14b21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b21c0ULL || rel >= 0x14b24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b24e0 size=432 callers=1 calls=0
*/
void sub_14b24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b24e0ULL || rel >= 0x14b2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2690 size=672 callers=1 calls=4
   calls: sub_14b2930, sub_14b29e0, sub_14b2a90, sub_5e6180
*/
void sub_14b2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2690ULL || rel >= 0x14b2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2930 size=176 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_14b2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2930ULL || rel >= 0x14b29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b29e0 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_14b29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b29e0ULL || rel >= 0x14b2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2a90 size=144 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_14b2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2a90ULL || rel >= 0x14b2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2b20 size=160 callers=5 calls=0
*/
void sub_14b2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2b20ULL || rel >= 0x14b2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2bc0 size=48 callers=0 calls=1
   calls: sub_14aacc0
*/
void sub_14b2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2bc0ULL || rel >= 0x14b2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2bf0 size=48 callers=0 calls=1
   calls: sub_14aadb0
*/
void sub_14b2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2bf0ULL || rel >= 0x14b2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2c20 size=48 callers=0 calls=1
   calls: sub_14aafc0
*/
void sub_14b2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2c20ULL || rel >= 0x14b2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2c50 size=48 callers=0 calls=1
   calls: sub_14aaec0
*/
void sub_14b2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2c50ULL || rel >= 0x14b2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2c80 size=64 callers=0 calls=1
   calls: sub_14aaf40
*/
void sub_14b2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2c80ULL || rel >= 0x14b2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2cc0 size=16 callers=0 calls=0
*/
void sub_14b2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2cc0ULL || rel >= 0x14b2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2cd0 size=16 callers=0 calls=0
*/
void sub_14b2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2cd0ULL || rel >= 0x14b2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2ce0 size=16 callers=0 calls=0
*/
void sub_14b2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2ce0ULL || rel >= 0x14b2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2cf0 size=16 callers=0 calls=0
*/
void sub_14b2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2cf0ULL || rel >= 0x14b2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2d00 size=16 callers=0 calls=0
*/
void sub_14b2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2d00ULL || rel >= 0x14b2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2d10 size=16 callers=0 calls=0
*/
void sub_14b2d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2d10ULL || rel >= 0x14b2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2d20 size=16 callers=0 calls=0
*/
void sub_14b2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2d20ULL || rel >= 0x14b2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2d30 size=48 callers=0 calls=1
   calls: sub_14ab5c0
*/
void sub_14b2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2d30ULL || rel >= 0x14b2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2d60 size=16 callers=0 calls=0
*/
void sub_14b2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2d60ULL || rel >= 0x14b2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2d70 size=64 callers=0 calls=1
   calls: sub_14ab810
*/
void sub_14b2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2d70ULL || rel >= 0x14b2db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2db0 size=176 callers=0 calls=4
   calls: sub_14aacc0, sub_14aad40, sub_14aae90, sub_17b9140
   ref: N_cursor
*/
void N_cursor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2db0ULL || rel >= 0x14b2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2e60 size=160 callers=0 calls=4
   calls: sub_14aacc0, sub_14aad40, sub_14aae90, sub_17b9140
   ref: N_context
*/
void N_context(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2e60ULL || rel >= 0x14b2f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2f00 size=16 callers=0 calls=0
*/
void sub_14b2f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2f00ULL || rel >= 0x14b2f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2f10 size=48 callers=0 calls=1
   calls: sub_7a3a10
*/
void sub_14b2f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2f10ULL || rel >= 0x14b2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2f40 size=64 callers=0 calls=2
   calls: sub_14aad40, sub_17ac790
*/
void sub_14b2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2f40ULL || rel >= 0x14b2f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b2f80 size=128 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_14b2f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b2f80ULL || rel >= 0x14b3000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3000 size=80 callers=0 calls=1
   calls: sub_14ab8e0
*/
void sub_14b3000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3000ULL || rel >= 0x14b3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3050 size=16 callers=0 calls=0
*/
void sub_14b3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3050ULL || rel >= 0x14b3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3060 size=80 callers=0 calls=0
*/
void sub_14b3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3060ULL || rel >= 0x14b30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b30b0 size=80 callers=0 calls=0
*/
void sub_14b30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b30b0ULL || rel >= 0x14b3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3100 size=80 callers=0 calls=0
*/
void sub_14b3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3100ULL || rel >= 0x14b3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3150 size=80 callers=0 calls=0
*/
void sub_14b3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3150ULL || rel >= 0x14b31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b31a0 size=144 callers=3 calls=0
*/
void sub_14b31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b31a0ULL || rel >= 0x14b3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3230 size=16 callers=0 calls=0
*/
void sub_14b3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3230ULL || rel >= 0x14b3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3240 size=16 callers=0 calls=0
*/
void sub_14b3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3240ULL || rel >= 0x14b3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3250 size=16 callers=0 calls=0
*/
void sub_14b3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3250ULL || rel >= 0x14b3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3260 size=16 callers=0 calls=0
*/
void sub_14b3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3260ULL || rel >= 0x14b3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b3270 size=9424 callers=3 calls=14
   calls: battle_msg_00, msg_book_00, msg_demo_00, msg_kanban_00, msg_sys_01, msg_sys_03, namelist, sub_14a7eb0, sub_14b5740, sub_14b6170, sub_14b65d0, sub_14b6e80
   ... +2 more
*/
void sub_14b3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b3270ULL || rel >= 0x14b5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5740 size=80 callers=1 calls=1
   calls: sub_14a7eb0
*/
void sub_14b5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5740ULL || rel >= 0x14b5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5790 size=224 callers=1 calls=2
   calls: sub_14a82b0, sub_c46830
   ref: msg_demo_00.bflyt
*/
void msg_demo_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5790ULL || rel >= 0x14b5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5870 size=16 callers=0 calls=0
*/
void sub_14b5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5870ULL || rel >= 0x14b5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5880 size=16 callers=0 calls=0
*/
void sub_14b5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5880ULL || rel >= 0x14b5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5890 size=144 callers=0 calls=3
   calls: sub_685250, sub_685360, sub_6855a0
   ref: msg_demo_00_in.bflan
   ref: L_cursor_00
   ref: msg_demo_00_out.bflan
   ref: message_cursor_00_keep.bflan
*/
void L_cursor_00_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5890ULL || rel >= 0x14b5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5920 size=80 callers=0 calls=1
   calls: sub_685250
*/
void sub_14b5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5920ULL || rel >= 0x14b5970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5970 size=32 callers=0 calls=0
*/
void sub_14b5970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5970ULL || rel >= 0x14b5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5990 size=32 callers=0 calls=0
*/
void sub_14b5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5990ULL || rel >= 0x14b59b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b59b0 size=16 callers=0 calls=0
*/
void sub_14b59b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b59b0ULL || rel >= 0x14b59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b59c0 size=16 callers=0 calls=0
*/
void sub_14b59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b59c0ULL || rel >= 0x14b59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b59d0 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b59d0ULL || rel >= 0x14b5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5a40 size=16 callers=0 calls=0
*/
void sub_14b5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5a40ULL || rel >= 0x14b5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5a50 size=16 callers=0 calls=0
*/
void sub_14b5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5a50ULL || rel >= 0x14b5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5a60 size=16 callers=0 calls=0
*/
void sub_14b5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5a60ULL || rel >= 0x14b5a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5a70 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b5a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5a70ULL || rel >= 0x14b5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5ae0 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5ae0ULL || rel >= 0x14b5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5b50 size=16 callers=0 calls=0
*/
void sub_14b5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5b50ULL || rel >= 0x14b5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5b60 size=16 callers=0 calls=0
*/
void sub_14b5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5b60ULL || rel >= 0x14b5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5b70 size=496 callers=8 calls=3
   calls: sub_5e2930, sub_c46830, sub_c47200
*/
void sub_14b5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5b70ULL || rel >= 0x14b5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5d60 size=48 callers=8 calls=0
*/
void sub_14b5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5d60ULL || rel >= 0x14b5d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5d90 size=240 callers=1 calls=2
   calls: sub_14a82b0, sub_c46830
   ref: battle_msg_00.bflyt
*/
void battle_msg_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5d90ULL || rel >= 0x14b5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5e80 size=160 callers=0 calls=4
   calls: sub_685250, sub_685360, sub_6855a0, sub_6856d0
   ref: battle_msg_00_in.bflan
   ref: L_cursor_00
   ref: battle_msg_00_out.bflan
   ref: message_cursor_00_keep.bflan
*/
void L_cursor_00_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5e80ULL || rel >= 0x14b5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5f20 size=16 callers=0 calls=0
*/
void sub_14b5f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5f20ULL || rel >= 0x14b5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5f30 size=16 callers=0 calls=0
*/
void sub_14b5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5f30ULL || rel >= 0x14b5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5f40 size=48 callers=0 calls=0
*/
void sub_14b5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5f40ULL || rel >= 0x14b5f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5f70 size=32 callers=0 calls=0
*/
void sub_14b5f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5f70ULL || rel >= 0x14b5f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5f90 size=32 callers=0 calls=0
*/
void sub_14b5f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5f90ULL || rel >= 0x14b5fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5fb0 size=16 callers=0 calls=0
*/
void sub_14b5fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5fb0ULL || rel >= 0x14b5fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5fc0 size=16 callers=0 calls=0
*/
void sub_14b5fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5fc0ULL || rel >= 0x14b5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b5fd0 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b5fd0ULL || rel >= 0x14b6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6040 size=16 callers=0 calls=0
*/
void sub_14b6040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6040ULL || rel >= 0x14b6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6050 size=16 callers=0 calls=0
*/
void sub_14b6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6050ULL || rel >= 0x14b6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6060 size=16 callers=0 calls=0
*/
void sub_14b6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6060ULL || rel >= 0x14b6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6070 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6070ULL || rel >= 0x14b60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b60e0 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b60e0ULL || rel >= 0x14b6150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6150 size=16 callers=0 calls=0
*/
void sub_14b6150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6150ULL || rel >= 0x14b6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6160 size=16 callers=0 calls=0
*/
void sub_14b6160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6160ULL || rel >= 0x14b6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6170 size=80 callers=1 calls=1
   calls: sub_14a7eb0
*/
void sub_14b6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6170ULL || rel >= 0x14b61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b61c0 size=16 callers=0 calls=0
*/
void sub_14b61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b61c0ULL || rel >= 0x14b61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b61d0 size=16 callers=0 calls=0
*/
void sub_14b61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b61d0ULL || rel >= 0x14b61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b61e0 size=16 callers=0 calls=0
*/
void sub_14b61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b61e0ULL || rel >= 0x14b61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b61f0 size=16 callers=0 calls=0
*/
void sub_14b61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b61f0ULL || rel >= 0x14b6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6200 size=16 callers=0 calls=0
*/
void sub_14b6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6200ULL || rel >= 0x14b6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6210 size=16 callers=0 calls=0
*/
void sub_14b6210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6210ULL || rel >= 0x14b6220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6220 size=240 callers=1 calls=3
   calls: sub_14a82b0, sub_14a9580, sub_c46830
   ref: msg_book_00.bflyt
*/
void msg_book_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6220ULL || rel >= 0x14b6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6310 size=16 callers=0 calls=0
*/
void sub_14b6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6310ULL || rel >= 0x14b6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6320 size=16 callers=0 calls=0
*/
void sub_14b6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6320ULL || rel >= 0x14b6330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6330 size=144 callers=0 calls=3
   calls: sub_685250, sub_685360, sub_6855a0
   ref: msg_book_00_in.bflan
   ref: msg_book_00_out.bflan
   ref: L_cursor_00
   ref: message_cursor_00_keep.bflan
*/
void L_cursor_00_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6330ULL || rel >= 0x14b63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b63c0 size=80 callers=0 calls=1
   calls: sub_685250
*/
void sub_14b63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b63c0ULL || rel >= 0x14b6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6410 size=32 callers=0 calls=0
*/
void sub_14b6410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6410ULL || rel >= 0x14b6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6430 size=32 callers=0 calls=0
*/
void sub_14b6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6430ULL || rel >= 0x14b6450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6450 size=16 callers=0 calls=0
*/
void sub_14b6450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6450ULL || rel >= 0x14b6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6460 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b6460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6460ULL || rel >= 0x14b64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b64d0 size=16 callers=0 calls=0
*/
void sub_14b64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b64d0ULL || rel >= 0x14b64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b64e0 size=16 callers=0 calls=0
*/
void sub_14b64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b64e0ULL || rel >= 0x14b64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b64f0 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b64f0ULL || rel >= 0x14b6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6560 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6560ULL || rel >= 0x14b65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b65d0 size=80 callers=2 calls=1
   calls: sub_14a7eb0
*/
void sub_14b65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b65d0ULL || rel >= 0x14b6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6620 size=16 callers=0 calls=0
*/
void sub_14b6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6620ULL || rel >= 0x14b6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6630 size=16 callers=0 calls=0
*/
void sub_14b6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6630ULL || rel >= 0x14b6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6640 size=16 callers=0 calls=0
*/
void sub_14b6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6640ULL || rel >= 0x14b6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6650 size=16 callers=0 calls=0
*/
void sub_14b6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6650ULL || rel >= 0x14b6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6660 size=16 callers=0 calls=0
*/
void sub_14b6660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6660ULL || rel >= 0x14b6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6670 size=16 callers=0 calls=0
*/
void sub_14b6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6670ULL || rel >= 0x14b6680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6680 size=288 callers=2 calls=3
   calls: sub_14a82b0, sub_14a94a0, sub_c46830
   ref: msg_kanban_00.bflyt
*/
void msg_kanban_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6680ULL || rel >= 0x14b67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b67a0 size=16 callers=0 calls=0
*/
void sub_14b67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b67a0ULL || rel >= 0x14b67b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b67b0 size=16 callers=0 calls=0
*/
void sub_14b67b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b67b0ULL || rel >= 0x14b67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b67c0 size=176 callers=0 calls=3
   calls: sub_685250, sub_685360, sub_6855a0
   ref: msg_kanban_00_out.bflan
   ref: L_cursor_00
   ref: msg_kanban_00_switch.bflan
   ref: msg_kanban_00_in.bflan
   ref: message_cursor_00_keep.bflan
*/
void L_cursor_00_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b67c0ULL || rel >= 0x14b6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6870 size=80 callers=0 calls=1
   calls: sub_685250
*/
void sub_14b6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6870ULL || rel >= 0x14b68c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b68c0 size=32 callers=0 calls=0
*/
void sub_14b68c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b68c0ULL || rel >= 0x14b68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b68e0 size=32 callers=0 calls=0
*/
void sub_14b68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b68e0ULL || rel >= 0x14b6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6900 size=16 callers=0 calls=0
*/
void sub_14b6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6900ULL || rel >= 0x14b6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6910 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6910ULL || rel >= 0x14b6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6980 size=64 callers=0 calls=0
*/
void sub_14b6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6980ULL || rel >= 0x14b69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b69c0 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b69c0ULL || rel >= 0x14b6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6a30 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6a30ULL || rel >= 0x14b6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6aa0 size=112 callers=0 calls=2
   calls: sub_14a94a0, sub_685250
*/
void sub_14b6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6aa0ULL || rel >= 0x14b6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6b10 size=128 callers=0 calls=0
*/
void sub_14b6b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6b10ULL || rel >= 0x14b6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6b90 size=96 callers=0 calls=0
*/
void sub_14b6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6b90ULL || rel >= 0x14b6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6bf0 size=208 callers=0 calls=4
   calls: sub_14a9370, sub_6859b0, sub_685a50, sub_685c60
*/
void sub_14b6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6bf0ULL || rel >= 0x14b6cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6cc0 size=64 callers=0 calls=0
*/
void sub_14b6cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6cc0ULL || rel >= 0x14b6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6d00 size=64 callers=0 calls=0
*/
void sub_14b6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6d00ULL || rel >= 0x14b6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6d40 size=272 callers=0 calls=2
   calls: sub_14a94a0, sub_14a9570
*/
void sub_14b6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6d40ULL || rel >= 0x14b6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6e50 size=16 callers=0 calls=0
*/
void sub_14b6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6e50ULL || rel >= 0x14b6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6e60 size=16 callers=0 calls=0
*/
void sub_14b6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6e60ULL || rel >= 0x14b6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6e70 size=16 callers=0 calls=0
*/
void sub_14b6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6e70ULL || rel >= 0x14b6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6e80 size=96 callers=12 calls=1
   calls: sub_14a7eb0
*/
void sub_14b6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6e80ULL || rel >= 0x14b6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6ee0 size=16 callers=0 calls=0
*/
void sub_14b6ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6ee0ULL || rel >= 0x14b6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6ef0 size=16 callers=0 calls=0
*/
void sub_14b6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6ef0ULL || rel >= 0x14b6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6f00 size=16 callers=0 calls=0
*/
void sub_14b6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6f00ULL || rel >= 0x14b6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6f10 size=16 callers=0 calls=0
*/
void sub_14b6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6f10ULL || rel >= 0x14b6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6f20 size=16 callers=0 calls=0
*/
void sub_14b6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6f20ULL || rel >= 0x14b6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6f30 size=16 callers=0 calls=0
*/
void sub_14b6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6f30ULL || rel >= 0x14b6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b6f40 size=432 callers=12 calls=3
   calls: sub_14a82b0, sub_14b70f0, sub_c46830
   ref: msg_sys_03.bflyt
   ref: msg_sys_00.bflyt
*/
void msg_sys_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b6f40ULL || rel >= 0x14b70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b70f0 size=160 callers=1 calls=0
*/
void sub_14b70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b70f0ULL || rel >= 0x14b7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7190 size=16 callers=0 calls=0
*/
void sub_14b7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7190ULL || rel >= 0x14b71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b71a0 size=352 callers=0 calls=4
   calls: sub_685250, sub_685360, sub_6855a0, sub_6856d0
   ref: L_timer_00
   ref: msg_sys_00_in.bflan
   ref: msg_sys_03_ptn_pos.bflan
   ref: msg_sys_03_out.bflan
   ref: common_timer_small_00_out.bflan
   ref: common_timer_small_00_keep.bflan
   ref: msg_sys_03_in.bflan
   ref: msg_sys_00_out.bflan
*/
void L_cursor_00_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b71a0ULL || rel >= 0x14b7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7300 size=16 callers=0 calls=0
*/
void sub_14b7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7300ULL || rel >= 0x14b7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7310 size=80 callers=1 calls=1
   calls: sub_14a7eb0
*/
void sub_14b7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7310ULL || rel >= 0x14b7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7360 size=16 callers=0 calls=0
*/
void sub_14b7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7360ULL || rel >= 0x14b7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7370 size=16 callers=0 calls=0
*/
void sub_14b7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7370ULL || rel >= 0x14b7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7380 size=16 callers=0 calls=0
*/
void sub_14b7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7380ULL || rel >= 0x14b7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7390 size=16 callers=0 calls=0
*/
void sub_14b7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7390ULL || rel >= 0x14b73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b73a0 size=16 callers=0 calls=0
*/
void sub_14b73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b73a0ULL || rel >= 0x14b73b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b73b0 size=16 callers=0 calls=0
*/
void sub_14b73b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b73b0ULL || rel >= 0x14b73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b73c0 size=224 callers=1 calls=2
   calls: sub_14a82b0, sub_c46830
   ref: msg_sys_01.bflyt
*/
void msg_sys_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b73c0ULL || rel >= 0x14b74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b74a0 size=16 callers=0 calls=0
*/
void sub_14b74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b74a0ULL || rel >= 0x14b74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b74b0 size=272 callers=0 calls=4
   calls: sub_685250, sub_685360, sub_6855a0, sub_6856d0
   ref: L_timer_00
   ref: msg_sys_01_out.bflan
   ref: common_timer_small_00_out.bflan
   ref: msg_sys_01_in.bflan
   ref: common_timer_small_00_keep.bflan
   ref: L_cursor_00
   ref: common_timer_small_00_in.bflan
   ref: message_cursor_00_keep.bflan
*/
void L_cursor_00_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b74b0ULL || rel >= 0x14b75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b75c0 size=16 callers=0 calls=0
*/
void sub_14b75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b75c0ULL || rel >= 0x14b75d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b75d0 size=16 callers=0 calls=0
*/
void sub_14b75d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b75d0ULL || rel >= 0x14b75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b75e0 size=16 callers=0 calls=0
*/
void sub_14b75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b75e0ULL || rel >= 0x14b75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b75f0 size=176 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b75f0ULL || rel >= 0x14b76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b76a0 size=16 callers=0 calls=0
*/
void sub_14b76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b76a0ULL || rel >= 0x14b76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b76b0 size=176 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b76b0ULL || rel >= 0x14b7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7760 size=176 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7760ULL || rel >= 0x14b7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7810 size=176 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b7810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7810ULL || rel >= 0x14b78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b78c0 size=16 callers=0 calls=0
*/
void sub_14b78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b78c0ULL || rel >= 0x14b78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b78d0 size=176 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b78d0ULL || rel >= 0x14b7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7980 size=176 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7980ULL || rel >= 0x14b7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7a30 size=288 callers=18 calls=2
   calls: sub_14a7eb0, sub_67b990
*/
void sub_14b7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7a30ULL || rel >= 0x14b7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7b50 size=128 callers=0 calls=0
*/
void sub_14b7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7b50ULL || rel >= 0x14b7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7bd0 size=128 callers=0 calls=0
*/
void sub_14b7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7bd0ULL || rel >= 0x14b7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7c50 size=128 callers=0 calls=0
*/
void sub_14b7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7c50ULL || rel >= 0x14b7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7cd0 size=128 callers=0 calls=0
*/
void sub_14b7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7cd0ULL || rel >= 0x14b7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7d50 size=128 callers=0 calls=0
*/
void sub_14b7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7d50ULL || rel >= 0x14b7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7dd0 size=128 callers=0 calls=0
*/
void sub_14b7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7dd0ULL || rel >= 0x14b7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b7e50 size=480 callers=18 calls=5
   calls: sub_1318b50, sub_14a82b0, sub_14b8030, sub_c46830, unnamed_47
   ref: common/namelist.dat
   ref: msg_00.bflyt
*/
void namelist(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b7e50ULL || rel >= 0x14b8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8030 size=432 callers=1 calls=1
   calls: sub_14a94a0
*/
void sub_14b8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8030ULL || rel >= 0x14b81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b81e0 size=16 callers=0 calls=0
*/
void sub_14b81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b81e0ULL || rel >= 0x14b81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b81f0 size=16 callers=0 calls=0
*/
void sub_14b81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b81f0ULL || rel >= 0x14b8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8200 size=224 callers=0 calls=3
   calls: sub_685250, sub_685360, sub_6855a0
   ref: msg_00_ptn_pos.bflan
   ref: msg_00_ptn_window.bflan
   ref: msg_00_in.bflan
   ref: msg_00_out.bflan
   ref: msg_00_ptn_name.bflan
   ref: L_cursor_00
   ref: message_cursor_00_keep.bflan
*/
void L_cursor_00_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8200ULL || rel >= 0x14b82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b82e0 size=80 callers=0 calls=1
   calls: sub_685250
*/
void sub_14b82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b82e0ULL || rel >= 0x14b8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8330 size=32 callers=0 calls=0
*/
void sub_14b8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8330ULL || rel >= 0x14b8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8350 size=32 callers=0 calls=0
*/
void sub_14b8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8350ULL || rel >= 0x14b8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8370 size=16 callers=0 calls=0
*/
void sub_14b8370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8370ULL || rel >= 0x14b8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8380 size=176 callers=0 calls=6
   calls: sub_130ada0, sub_14a94a0, sub_14b8430, sub_67bdb0, sub_67d080, sub_685270
   ref: T_name_00
*/
void T_name_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8380ULL || rel >= 0x14b8430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8430 size=544 callers=1 calls=7
   calls: sub_130a6d0, sub_130a6f0, sub_130a9c0, sub_130abf0, sub_130ac20, sub_67bdb0, sub_67c470
*/
void sub_14b8430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8430ULL || rel >= 0x14b8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8650 size=32 callers=0 calls=0
*/
void sub_14b8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8650ULL || rel >= 0x14b8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8670 size=48 callers=0 calls=1
   calls: sub_14a8ee0
*/
void sub_14b8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8670ULL || rel >= 0x14b86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b86a0 size=48 callers=0 calls=1
   calls: sub_14a8f50
*/
void sub_14b86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b86a0ULL || rel >= 0x14b86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b86d0 size=48 callers=1 calls=1
   calls: sub_67be10
*/
void sub_14b86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b86d0ULL || rel >= 0x14b8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8700 size=96 callers=0 calls=2
   calls: sub_685a50, sub_685b90
*/
void sub_14b8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8700ULL || rel >= 0x14b8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8760 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8760ULL || rel >= 0x14b87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b87d0 size=16 callers=0 calls=0
*/
void sub_14b87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b87d0ULL || rel >= 0x14b87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b87e0 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b87e0ULL || rel >= 0x14b8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8850 size=112 callers=0 calls=1
   calls: sub_13fb3f0
*/
void sub_14b8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8850ULL || rel >= 0x14b88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b88c0 size=160 callers=4 calls=0
*/
void sub_14b88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b88c0ULL || rel >= 0x14b8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8960 size=480 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_14b8960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8960ULL || rel >= 0x14b8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8b40 size=48 callers=0 calls=1
   calls: sub_14b8960
*/
void sub_14b8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8b40ULL || rel >= 0x14b8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8b70 size=656 callers=12 calls=6
   calls: sub_14b8e00, sub_14b8f30, sub_5bbb30, sub_7c2b60, sub_965df0, sub_9b2290
   ref: bin/appli/sort_string/Korean/
   ref: bin/appli/sort_string/German/
   ref: bin/appli/sort_string/jpn/
   ref: bin/appli/sort_string/English/
   ref: bin/appli/sort_string/French/
   ref: bin/appli/sort_string/Trad_Chinese/
   ref: bin/appli/sort_string/Italian/
   ref: bin/appli/sort_string/Spanish/
*/
void unnamed_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8b70ULL || rel >= 0x14b8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8e00 size=304 callers=3 calls=3
   calls: sub_14b9690, sub_5e6180, sub_d0c0
*/
void sub_14b8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8e00ULL || rel >= 0x14b8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b8f30 size=304 callers=3 calls=3
   calls: sub_135eb60, sub_5e6180, sub_d0c0
*/
void sub_14b8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b8f30ULL || rel >= 0x14b9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9060 size=1008 callers=4 calls=3
   calls: sub_5dd790, sub_5e26a0, sub_5e2930
*/
void sub_14b9060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9060ULL || rel >= 0x14b9450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9450 size=192 callers=6 calls=0
*/
void sub_14b9450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9450ULL || rel >= 0x14b9510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9510 size=192 callers=6 calls=1
   calls: sub_5e2bc0
*/
void sub_14b9510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9510ULL || rel >= 0x14b95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b95d0 size=48 callers=6 calls=0
*/
void sub_14b95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b95d0ULL || rel >= 0x14b9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9600 size=48 callers=13 calls=0
*/
void sub_14b9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9600ULL || rel >= 0x14b9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9630 size=16 callers=8 calls=0
*/
void sub_14b9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9630ULL || rel >= 0x14b9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9640 size=80 callers=2 calls=0
*/
void sub_14b9640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9640ULL || rel >= 0x14b9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9690 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_14b9690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9690ULL || rel >= 0x14b9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9710 size=160 callers=2 calls=1
   calls: sub_14b88c0
*/
void sub_14b9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9710ULL || rel >= 0x14b97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b97b0 size=16 callers=0 calls=0
*/
void sub_14b97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b97b0ULL || rel >= 0x14b97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b97c0 size=16 callers=0 calls=0
*/
void sub_14b97c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b97c0ULL || rel >= 0x14b97d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b97d0 size=16 callers=0 calls=0
*/
void sub_14b97d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b97d0ULL || rel >= 0x14b97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b97e0 size=16 callers=0 calls=0
*/
void sub_14b97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b97e0ULL || rel >= 0x14b97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b97f0 size=16 callers=0 calls=0
*/
void sub_14b97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b97f0ULL || rel >= 0x14b9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9800 size=16 callers=0 calls=0
*/
void sub_14b9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9800ULL || rel >= 0x14b9810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9810 size=576 callers=1 calls=2
   calls: sub_14b9060, unnamed_53
   ref: item_sort_table.dat
   ref: item_initial_to_sort.dat
   ref: item_initial_index.dat
*/
void item_sort_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9810ULL || rel >= 0x14b9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9a50 size=576 callers=2 calls=2
   calls: sub_14b9060, unnamed_53
   ref: monsname_initial_index.dat
   ref: monsname_sort_table.dat
   ref: monsname_initial_to_sort.dat
*/
void monsname_sort_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9a50ULL || rel >= 0x14b9c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9c90 size=160 callers=1 calls=1
   calls: sub_14b88c0
*/
void sub_14b9c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9c90ULL || rel >= 0x14b9d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9d30 size=16 callers=0 calls=0
*/
void sub_14b9d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9d30ULL || rel >= 0x14b9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9d40 size=16 callers=0 calls=0
*/
void sub_14b9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9d40ULL || rel >= 0x14b9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9d50 size=16 callers=0 calls=0
*/
void sub_14b9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9d50ULL || rel >= 0x14b9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9d60 size=16 callers=0 calls=0
*/
void sub_14b9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9d60ULL || rel >= 0x14b9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9d70 size=16 callers=0 calls=0
*/
void sub_14b9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9d70ULL || rel >= 0x14b9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9d80 size=16 callers=0 calls=0
*/
void sub_14b9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9d80ULL || rel >= 0x14b9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9d90 size=576 callers=1 calls=2
   calls: sub_14b9060, unnamed_53
   ref: tokusei_initial_index.dat
   ref: tokusei_sort_table.dat
   ref: tokusei_initial_to_sort.dat
*/
void tokusei_sort_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9d90ULL || rel >= 0x14b9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014b9fd0 size=64 callers=2 calls=0
*/
void sub_14b9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b9fd0ULL || rel >= 0x14ba010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba010 size=160 callers=2 calls=1
   calls: sub_14b88c0
*/
void sub_14ba010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba010ULL || rel >= 0x14ba0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba0b0 size=16 callers=0 calls=0
*/
void sub_14ba0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba0b0ULL || rel >= 0x14ba0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba0c0 size=16 callers=0 calls=0
*/
void sub_14ba0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba0c0ULL || rel >= 0x14ba0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba0d0 size=16 callers=0 calls=0
*/
void sub_14ba0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba0d0ULL || rel >= 0x14ba0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba0e0 size=16 callers=0 calls=0
*/
void sub_14ba0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba0e0ULL || rel >= 0x14ba0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba0f0 size=16 callers=0 calls=0
*/
void sub_14ba0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba0f0ULL || rel >= 0x14ba100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba100 size=16 callers=0 calls=0
*/
void sub_14ba100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba100ULL || rel >= 0x14ba110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba110 size=576 callers=2 calls=2
   calls: sub_14b9060, unnamed_53
   ref: waza_sort_table.dat
   ref: waza_initial_index.dat
   ref: waza_initial_to_sort.dat
*/
void waza_sort_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba110ULL || rel >= 0x14ba350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba350 size=96 callers=2 calls=0
*/
void sub_14ba350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba350ULL || rel >= 0x14ba3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba3b0 size=272 callers=84 calls=0
*/
void sub_14ba3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba3b0ULL || rel >= 0x14ba4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba4c0 size=208 callers=50 calls=1
   calls: sub_14ba590
*/
void sub_14ba4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba4c0ULL || rel >= 0x14ba590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba590 size=336 callers=11 calls=2
   calls: sub_5e2bc0, sub_682dd0
*/
void sub_14ba590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba590ULL || rel >= 0x14ba6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba6e0 size=208 callers=0 calls=1
   calls: sub_14ba590
*/
void sub_14ba6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba6e0ULL || rel >= 0x14ba7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba7b0 size=96 callers=196 calls=1
   calls: sub_17ac6a0
*/
void sub_14ba7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba7b0ULL || rel >= 0x14ba810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba810 size=16 callers=3 calls=0
*/
void sub_14ba810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba810ULL || rel >= 0x14ba820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba820 size=384 callers=18 calls=3
   calls: sub_14ba9a0, sub_17ac6a0, sub_5e5560
*/
void sub_14ba820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba820ULL || rel >= 0x14ba9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ba9a0 size=352 callers=3 calls=6
   calls: sub_14bb280, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_682dd0, sub_ec20
*/
void sub_14ba9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba9a0ULL || rel >= 0x14bab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bab00 size=64 callers=7 calls=1
   calls: sub_17ac6a0
*/
void sub_14bab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bab00ULL || rel >= 0x14bab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bab40 size=384 callers=1 calls=3
   calls: sub_17ac6a0, sub_5e2bc0, sub_682dd0
*/
void sub_14bab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bab40ULL || rel >= 0x14bacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bacc0 size=16 callers=0 calls=0
*/
void sub_14bacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bacc0ULL || rel >= 0x14bacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bacd0 size=832 callers=132 calls=5
   calls: sub_14bab40, sub_14bb010, sub_14bb280, sub_5e2bc0, sub_682dd0
*/
void sub_14bacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bacd0ULL || rel >= 0x14bb010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bb010 size=368 callers=1 calls=5
   calls: sub_14bb280, sub_5e2930, sub_5e2bc0, sub_682dd0, sub_ec20
*/
void sub_14bb010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb010ULL || rel >= 0x14bb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bb180 size=256 callers=5 calls=2
   calls: sub_5e2bc0, sub_682dd0
*/
void sub_14bb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb180ULL || rel >= 0x14bb280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bb280 size=368 callers=3 calls=6
   calls: sub_5cfaf0, sub_5fc600, sub_5fd000, sub_5fda10, sub_682dd0, sub_d0c0
*/
void sub_14bb280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb280ULL || rel >= 0x14bb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bb3f0 size=208 callers=0 calls=1
   calls: sub_14ba590
*/
void sub_14bb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb3f0ULL || rel >= 0x14bb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014bb4c0 size=496 callers=3 calls=2
   calls: item_dummy_2, sub_14ba9a0
*/
void sub_14bb4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bb4c0ULL || rel >= 0x14bb6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

