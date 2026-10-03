/* main functions 00d603f0..00d82e70 (106 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00d603f0 size=112 callers=0 calls=0
*/
void sub_d603f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd603f0ULL || rel >= 0xd60460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d60460 size=112 callers=0 calls=0
*/
void sub_d60460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd60460ULL || rel >= 0xd604d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d604d0 size=32 callers=1 calls=0
*/
void sub_d604d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd604d0ULL || rel >= 0xd604f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d604f0 size=944 callers=1 calls=3
   calls: sub_135a1a0, sub_5cfad0, sub_794330
   ref: Set_State_Birthday
   ref: Play_bgm_mute
   ref: Set_State_Other
   ref: Set_State_Enable
   ref: Set_State_Stadium_Charrange
   ref: Set_State_Disable
   ref: Set_State_Stadium_Intro
*/
void Set_State_Stadium_Intro(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd604f0ULL || rel >= 0xd608a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d608a0 size=80 callers=2 calls=1
   calls: sub_791400
*/
void sub_d608a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd608a0ULL || rel >= 0xd608f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d608f0 size=464 callers=1 calls=8
   calls: sub_1c0, sub_5cfaf0, sub_5e6770, sub_5e7a30, sub_7910b0, sub_791180, sub_7912b0, sub_a99500
*/
void sub_d608f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd608f0ULL || rel >= 0xd60ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d60ac0 size=128 callers=1 calls=1
   calls: sub_791560
*/
void sub_d60ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd60ac0ULL || rel >= 0xd60b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d60b40 size=112 callers=2 calls=1
   calls: sub_791560
*/
void sub_d60b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd60b40ULL || rel >= 0xd60bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d60bb0 size=304 callers=1 calls=0
*/
void sub_d60bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd60bb0ULL || rel >= 0xd60ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d60ce0 size=240 callers=0 calls=0
*/
void sub_d60ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd60ce0ULL || rel >= 0xd60dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d60dd0 size=240 callers=0 calls=0
*/
void sub_d60dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd60dd0ULL || rel >= 0xd60ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d60ec0 size=832 callers=1 calls=2
   calls: sub_1c0, sub_793d10
   ref: Group7
   ref: Group5
   ref: Group9
   ref: Group0
   ref: Group2
   ref: Group3
   ref: Group4
   ref: Group8
*/
void Group9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd60ec0ULL || rel >= 0xd61200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d61200 size=304 callers=0 calls=0
*/
void sub_d61200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd61200ULL || rel >= 0xd61330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d61330 size=160 callers=1 calls=2
   calls: sub_793de0, sub_d613d0
*/
void sub_d61330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd61330ULL || rel >= 0xd613d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d613d0 size=768 callers=1 calls=1
   calls: sub_d623c0
*/
void sub_d613d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd613d0ULL || rel >= 0xd616d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d616d0 size=16 callers=1 calls=0
*/
void sub_d616d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd616d0ULL || rel >= 0xd616e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d616e0 size=384 callers=0 calls=2
   calls: sub_13ed330, sub_d25bd0
*/
void sub_d616e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd616e0ULL || rel >= 0xd61860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d61860 size=1552 callers=0 calls=6
   calls: sub_793ea0, sub_d50af0, sub_d50b80, sub_d62060, sub_d62240, sub_d626f0
*/
void sub_d61860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd61860ULL || rel >= 0xd61e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d61e70 size=16 callers=1 calls=0
*/
void sub_d61e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd61e70ULL || rel >= 0xd61e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d61e80 size=384 callers=1 calls=1
   calls: sub_d626f0
*/
void sub_d61e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd61e80ULL || rel >= 0xd62000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62000 size=96 callers=1 calls=0
*/
void sub_d62000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62000ULL || rel >= 0xd62060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62060 size=480 callers=1 calls=2
   calls: sub_794040, sub_d626f0
*/
void sub_d62060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62060ULL || rel >= 0xd62240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62240 size=384 callers=1 calls=2
   calls: sub_d623c0, sub_d626f0
*/
void sub_d62240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62240ULL || rel >= 0xd623c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d623c0 size=320 callers=12 calls=2
   calls: sub_794040, sub_d626f0
*/
void sub_d623c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd623c0ULL || rel >= 0xd62500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62500 size=496 callers=1 calls=1
   calls: sub_d623c0
*/
void sub_d62500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62500ULL || rel >= 0xd626f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d626f0 size=304 callers=5 calls=1
   calls: sub_967240
*/
void sub_d626f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd626f0ULL || rel >= 0xd62820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62820 size=368 callers=0 calls=0
*/
void sub_d62820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62820ULL || rel >= 0xd62990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62990 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62990ULL || rel >= 0xd62b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62b60 size=720 callers=1 calls=1
   calls: sub_d25c50
*/
void sub_d62b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62b60ULL || rel >= 0xd62e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62e30 size=240 callers=7 calls=4
   calls: sub_d25c50, sub_d62f20, sub_e9cec0, sub_eaed70
*/
void sub_d62e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62e30ULL || rel >= 0xd62f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d62f20 size=432 callers=2 calls=1
   calls: sub_135a1a0
*/
void sub_d62f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd62f20ULL || rel >= 0xd630d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d630d0 size=240 callers=1 calls=4
   calls: sub_d25c50, sub_d62f20, sub_e9cef0, sub_eaed70
*/
void sub_d630d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd630d0ULL || rel >= 0xd631c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d631c0 size=176 callers=1 calls=2
   calls: sub_e9cf10, sub_eaed70
*/
void sub_d631c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd631c0ULL || rel >= 0xd63270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63270 size=176 callers=20 calls=2
   calls: sub_e46b80, sub_e910e0
*/
void sub_d63270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63270ULL || rel >= 0xd63320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63320 size=144 callers=1 calls=1
   calls: sub_137bb10
*/
void sub_d63320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63320ULL || rel >= 0xd633b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d633b0 size=128 callers=2 calls=1
   calls: sub_137bb60
*/
void sub_d633b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd633b0ULL || rel >= 0xd63430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63430 size=160 callers=5 calls=1
   calls: sub_de4d70
*/
void sub_d63430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63430ULL || rel >= 0xd634d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d634d0 size=128 callers=10 calls=1
   calls: sub_13ed240
*/
void sub_d634d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd634d0ULL || rel >= 0xd63550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63550 size=128 callers=2 calls=2
   calls: sub_d25bd0, sub_d465d0
*/
void sub_d63550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63550ULL || rel >= 0xd635d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d635d0 size=16 callers=1 calls=0
*/
void sub_d635d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd635d0ULL || rel >= 0xd635e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d635e0 size=16 callers=0 calls=0
*/
void sub_d635e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd635e0ULL || rel >= 0xd635f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d635f0 size=16 callers=0 calls=0
*/
void sub_d635f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd635f0ULL || rel >= 0xd63600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63600 size=544 callers=0 calls=7
   calls: field_trade, sub_12fac60, sub_13000b0, sub_1539b10, sub_d63bc0, sub_de7580, sub_de7a70
   ref: MEET_BY_EVENT
*/
void MEET_BY_EVENT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63600ULL || rel >= 0xd63820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63820 size=16 callers=0 calls=0
*/
void sub_d63820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63820ULL || rel >= 0xd63830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63830 size=144 callers=0 calls=0
*/
void sub_d63830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63830ULL || rel >= 0xd638c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d638c0 size=144 callers=0 calls=0
*/
void sub_d638c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd638c0ULL || rel >= 0xd63950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63950 size=16 callers=0 calls=0
*/
void sub_d63950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63950ULL || rel >= 0xd63960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63960 size=144 callers=0 calls=0
*/
void sub_d63960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63960ULL || rel >= 0xd639f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d639f0 size=144 callers=0 calls=0
*/
void sub_d639f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd639f0ULL || rel >= 0xd63a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63a80 size=16 callers=0 calls=0
*/
void sub_d63a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63a80ULL || rel >= 0xd63a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63a90 size=16 callers=0 calls=0
*/
void sub_d63a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63a90ULL || rel >= 0xd63aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63aa0 size=144 callers=0 calls=0
*/
void sub_d63aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63aa0ULL || rel >= 0xd63b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63b30 size=144 callers=0 calls=0
*/
void sub_d63b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63b30ULL || rel >= 0xd63bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63bc0 size=224 callers=1 calls=1
   calls: sub_de7180
*/
void sub_d63bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63bc0ULL || rel >= 0xd63ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63ca0 size=64 callers=2 calls=1
   calls: sub_e9d130
*/
void sub_d63ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63ca0ULL || rel >= 0xd63ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63ce0 size=16 callers=0 calls=0
*/
void sub_d63ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63ce0ULL || rel >= 0xd63cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63cf0 size=16 callers=0 calls=0
*/
void sub_d63cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63cf0ULL || rel >= 0xd63d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d63d00 size=1280 callers=0 calls=13
   calls: sub_13ca950, sub_13d28e0, sub_13ed240, sub_13f6520, sub_5cfaf0, sub_5e7a30, sub_969be0, sub_c60e50, sub_c60f40, sub_d643c0, sub_d64750, sub_d7eea0
   ... +1 more
*/
void sub_d63d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63d00ULL || rel >= 0xd64200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64200 size=16 callers=0 calls=0
*/
void sub_d64200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64200ULL || rel >= 0xd64210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64210 size=16 callers=0 calls=0
*/
void sub_d64210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64210ULL || rel >= 0xd64220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64220 size=16 callers=0 calls=0
*/
void sub_d64220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64220ULL || rel >= 0xd64230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64230 size=16 callers=0 calls=0
*/
void sub_d64230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64230ULL || rel >= 0xd64240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64240 size=16 callers=0 calls=0
*/
void sub_d64240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64240ULL || rel >= 0xd64250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64250 size=16 callers=0 calls=0
*/
void sub_d64250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64250ULL || rel >= 0xd64260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64260 size=16 callers=0 calls=0
*/
void sub_d64260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64260ULL || rel >= 0xd64270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64270 size=16 callers=0 calls=0
*/
void sub_d64270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64270ULL || rel >= 0xd64280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64280 size=16 callers=0 calls=0
*/
void sub_d64280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64280ULL || rel >= 0xd64290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64290 size=304 callers=0 calls=0
*/
void sub_d64290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64290ULL || rel >= 0xd643c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d643c0 size=224 callers=2 calls=1
   calls: sub_d644a0
*/
void sub_d643c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd643c0ULL || rel >= 0xd644a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d644a0 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d644a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd644a0ULL || rel >= 0xd64510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64510 size=544 callers=0 calls=3
   calls: sub_65d220, sub_971950, sub_972c70
*/
void sub_d64510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64510ULL || rel >= 0xd64730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64730 size=16 callers=0 calls=0
*/
void sub_d64730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64730ULL || rel >= 0xd64740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64740 size=16 callers=0 calls=0
*/
void sub_d64740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64740ULL || rel >= 0xd64750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64750 size=112 callers=2 calls=1
   calls: sub_972c70
*/
void sub_d64750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64750ULL || rel >= 0xd647c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d647c0 size=80 callers=0 calls=0
*/
void sub_d647c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd647c0ULL || rel >= 0xd64810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64810 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d64810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64810ULL || rel >= 0xd648c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d648c0 size=80 callers=0 calls=0
*/
void sub_d648c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd648c0ULL || rel >= 0xd64910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64910 size=80 callers=0 calls=0
*/
void sub_d64910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64910ULL || rel >= 0xd64960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64960 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d64960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64960ULL || rel >= 0xd64a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64a10 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d64a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64a10ULL || rel >= 0xd64ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64ac0 size=80 callers=0 calls=0
*/
void sub_d64ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64ac0ULL || rel >= 0xd64b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64b10 size=80 callers=0 calls=0
*/
void sub_d64b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64b10ULL || rel >= 0xd64b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64b60 size=368 callers=0 calls=0
*/
void sub_d64b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64b60ULL || rel >= 0xd64cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64cd0 size=752 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64cd0ULL || rel >= 0xd64fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64fc0 size=16 callers=0 calls=0
*/
void sub_d64fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64fc0ULL || rel >= 0xd64fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64fd0 size=16 callers=0 calls=0
*/
void sub_d64fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64fd0ULL || rel >= 0xd64fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d64fe0 size=5632 callers=0 calls=81
   calls: Set_State_Off, ShadowFadeLength, ra_wait01_loop, scrollstop, sndarea, sub_1118bb0, sub_130ea50, sub_135a1a0, sub_13621d0, sub_1362210, sub_13fb9a0, sub_68f650
   ... +69 more
*/
void sub_d64fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64fe0ULL || rel >= 0xd665e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d665e0 size=592 callers=1 calls=4
   calls: sub_c44210, sub_c44310, sub_c443f0, sub_c44410
*/
void sub_d665e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd665e0ULL || rel >= 0xd66830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d66830 size=800 callers=2 calls=0
*/
void sub_d66830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd66830ULL || rel >= 0xd66b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d66b50 size=1024 callers=1 calls=6
   calls: sub_7c2db0, sub_b3abe0, sub_b4c080, sub_b4c090, sub_b626a0, sub_d67810
*/
void sub_d66b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd66b50ULL || rel >= 0xd66f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d66f50 size=464 callers=1 calls=3
   calls: sub_7c2d90, sub_d67cf0, sub_e88f20
*/
void sub_d66f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd66f50ULL || rel >= 0xd67120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67120 size=560 callers=1 calls=2
   calls: sub_ed2ed0, sub_ee7830
*/
void sub_d67120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67120ULL || rel >= 0xd67350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67350 size=320 callers=1 calls=1
   calls: sub_c647a0
*/
void sub_d67350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67350ULL || rel >= 0xd67490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67490 size=816 callers=1 calls=5
   calls: sub_e44850, sub_e910e0, sub_e91100, sub_ee7830, sub_ee78f0
*/
void sub_d67490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67490ULL || rel >= 0xd677c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d677c0 size=16 callers=0 calls=0
*/
void sub_d677c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd677c0ULL || rel >= 0xd677d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d677d0 size=32 callers=1 calls=0
*/
void sub_d677d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd677d0ULL || rel >= 0xd677f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d677f0 size=32 callers=1 calls=0
*/
void sub_d677f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd677f0ULL || rel >= 0xd67810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67810 size=1248 callers=1 calls=1
   calls: sub_7c2da0
*/
void sub_d67810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67810ULL || rel >= 0xd67cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67cf0 size=432 callers=1 calls=3
   calls: sub_7c2da0, sub_7c2db0, sub_d68750
*/
void sub_d67cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67cf0ULL || rel >= 0xd67ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67ea0 size=96 callers=0 calls=0
*/
void sub_d67ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67ea0ULL || rel >= 0xd67f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67f00 size=96 callers=0 calls=0
*/
void sub_d67f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67f00ULL || rel >= 0xd67f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67f60 size=16 callers=0 calls=0
*/
void sub_d67f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67f60ULL || rel >= 0xd67f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67f70 size=96 callers=0 calls=0
*/
void sub_d67f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67f70ULL || rel >= 0xd67fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d67fd0 size=96 callers=0 calls=0
*/
void sub_d67fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd67fd0ULL || rel >= 0xd68030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68030 size=16 callers=0 calls=0
*/
void sub_d68030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68030ULL || rel >= 0xd68040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68040 size=16 callers=0 calls=0
*/
void sub_d68040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68040ULL || rel >= 0xd68050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68050 size=96 callers=0 calls=0
*/
void sub_d68050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68050ULL || rel >= 0xd680b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d680b0 size=96 callers=0 calls=0
*/
void sub_d680b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd680b0ULL || rel >= 0xd68110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68110 size=304 callers=0 calls=0
*/
void sub_d68110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68110ULL || rel >= 0xd68240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68240 size=240 callers=1 calls=1
   calls: sub_13b1c90
*/
void sub_d68240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68240ULL || rel >= 0xd68330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68330 size=16 callers=0 calls=0
*/
void sub_d68330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68330ULL || rel >= 0xd68340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68340 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_d68340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68340ULL || rel >= 0xd68370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68370 size=16 callers=0 calls=0
*/
void sub_d68370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68370ULL || rel >= 0xd68380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68380 size=16 callers=0 calls=0
*/
void sub_d68380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68380ULL || rel >= 0xd68390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68390 size=16 callers=0 calls=0
*/
void sub_d68390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68390ULL || rel >= 0xd683a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d683a0 size=592 callers=0 calls=3
   calls: sub_967240, sub_ca8e20, sub_d39a10
*/
void sub_d683a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd683a0ULL || rel >= 0xd685f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d685f0 size=16 callers=0 calls=0
*/
void sub_d685f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd685f0ULL || rel >= 0xd68600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68600 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_d68600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68600ULL || rel >= 0xd68630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68630 size=16 callers=0 calls=0
*/
void sub_d68630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68630ULL || rel >= 0xd68640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68640 size=16 callers=0 calls=0
*/
void sub_d68640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68640ULL || rel >= 0xd68650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68650 size=16 callers=0 calls=0
*/
void sub_d68650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68650ULL || rel >= 0xd68660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68660 size=240 callers=0 calls=1
   calls: sub_ee7920
*/
void sub_d68660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68660ULL || rel >= 0xd68750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68750 size=336 callers=2 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_d68750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68750ULL || rel >= 0xd688a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d688a0 size=224 callers=1 calls=6
   calls: sub_106dc30, sub_10758d0, sub_65d700, sub_b6f8c0, sub_ceeb40, sub_d68980
*/
void sub_d688a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd688a0ULL || rel >= 0xd68980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68980 size=400 callers=1 calls=0
*/
void sub_d68980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68980ULL || rel >= 0xd68b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68b10 size=16 callers=0 calls=0
*/
void sub_d68b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68b10ULL || rel >= 0xd68b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68b20 size=544 callers=0 calls=4
   calls: sub_13ca950, sub_c63670, sub_ceec20, sub_d6a600
   ref: fi_pc_type
*/
void fi_pc_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68b20ULL || rel >= 0xd68d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68d40 size=112 callers=0 calls=3
   calls: sub_cef430, sub_cf22c0, sub_d68db0
*/
void sub_d68d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68d40ULL || rel >= 0xd68db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68db0 size=384 callers=1 calls=2
   calls: sub_c627e0, sub_cf21b0
*/
void sub_d68db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68db0ULL || rel >= 0xd68f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d68f30 size=368 callers=0 calls=3
   calls: sub_59b250, sub_5b9220, sub_b4a5e0
*/
void sub_d68f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd68f30ULL || rel >= 0xd690a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d690a0 size=16 callers=0 calls=0
*/
void sub_d690a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd690a0ULL || rel >= 0xd690b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d690b0 size=432 callers=0 calls=4
   calls: sub_13a6920, sub_c627e0, sub_cf1e80, sub_cf21b0
*/
void sub_d690b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd690b0ULL || rel >= 0xd69260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69260 size=80 callers=0 calls=0
*/
void sub_d69260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69260ULL || rel >= 0xd692b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d692b0 size=32 callers=0 calls=0
*/
void sub_d692b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd692b0ULL || rel >= 0xd692d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d692d0 size=16 callers=0 calls=0
*/
void sub_d692d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd692d0ULL || rel >= 0xd692e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d692e0 size=96 callers=0 calls=0
*/
void sub_d692e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd692e0ULL || rel >= 0xd69340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69340 size=96 callers=1 calls=0
*/
void sub_d69340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69340ULL || rel >= 0xd693a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d693a0 size=16 callers=0 calls=0
*/
void sub_d693a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd693a0ULL || rel >= 0xd693b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d693b0 size=1168 callers=2 calls=18
   calls: sub_106de30, sub_106fcf0, sub_106fd00, sub_106fd30, sub_106fd50, sub_1075910, sub_10759a0, sub_10759b0, sub_10759c0, sub_1076170, sub_1076260, sub_10783f0
   ... +6 more
*/
void sub_d693b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd693b0ULL || rel >= 0xd69840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69840 size=48 callers=4 calls=0
*/
void sub_d69840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69840ULL || rel >= 0xd69870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69870 size=32 callers=1 calls=0
*/
void sub_d69870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69870ULL || rel >= 0xd69890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69890 size=224 callers=1 calls=6
   calls: sub_10759a0, sub_10759b0, sub_10759c0, sub_1076160, sub_1076170, sub_d69e00
*/
void sub_d69890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69890ULL || rel >= 0xd69970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69970 size=96 callers=1 calls=0
*/
void sub_d69970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69970ULL || rel >= 0xd699d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d699d0 size=32 callers=1 calls=0
*/
void sub_d699d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd699d0ULL || rel >= 0xd699f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d699f0 size=32 callers=5 calls=0
*/
void sub_d699f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd699f0ULL || rel >= 0xd69a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69a10 size=16 callers=2 calls=0
*/
void sub_d69a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69a10ULL || rel >= 0xd69a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69a20 size=224 callers=0 calls=1
   calls: sub_cf1750
*/
void sub_d69a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69a20ULL || rel >= 0xd69b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69b00 size=480 callers=0 calls=0
   ref: rl_wait
   ref: ra_wait01_loop
*/
void ra_wait01_loop_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69b00ULL || rel >= 0xd69ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69ce0 size=240 callers=0 calls=2
   calls: sub_b4c060, sub_b97e40
*/
void sub_d69ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69ce0ULL || rel >= 0xd69dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69dd0 size=16 callers=0 calls=0
*/
void sub_d69dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69dd0ULL || rel >= 0xd69de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69de0 size=16 callers=0 calls=0
*/
void sub_d69de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69de0ULL || rel >= 0xd69df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69df0 size=16 callers=0 calls=0
*/
void sub_d69df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69df0ULL || rel >= 0xd69e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d69e00 size=1152 callers=1 calls=1
   calls: sub_d6a8a0
*/
void sub_d69e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69e00ULL || rel >= 0xd6a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a280 size=208 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d6a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a280ULL || rel >= 0xd6a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a350 size=16 callers=0 calls=0
*/
void sub_d6a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a350ULL || rel >= 0xd6a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a360 size=112 callers=0 calls=1
   calls: sub_d48970
*/
void sub_d6a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a360ULL || rel >= 0xd6a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a3d0 size=16 callers=0 calls=0
*/
void sub_d6a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a3d0ULL || rel >= 0xd6a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a3e0 size=16 callers=0 calls=0
*/
void sub_d6a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a3e0ULL || rel >= 0xd6a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a3f0 size=16 callers=0 calls=0
*/
void sub_d6a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a3f0ULL || rel >= 0xd6a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a400 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_d6a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a400ULL || rel >= 0xd6a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a4f0 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_d6a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a4f0ULL || rel >= 0xd6a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a5e0 size=16 callers=0 calls=0
*/
void sub_d6a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a5e0ULL || rel >= 0xd6a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a5f0 size=16 callers=0 calls=0
*/
void sub_d6a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a5f0ULL || rel >= 0xd6a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a600 size=224 callers=1 calls=1
   calls: sub_d6aa50
*/
void sub_d6a600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a600ULL || rel >= 0xd6a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a6e0 size=448 callers=4 calls=0
*/
void sub_d6a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a6e0ULL || rel >= 0xd6a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6a8a0 size=432 callers=1 calls=0
*/
void sub_d6a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6a8a0ULL || rel >= 0xd6aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6aa50 size=128 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d6aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6aa50ULL || rel >= 0xd6aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6aad0 size=32 callers=0 calls=0
*/
void sub_d6aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6aad0ULL || rel >= 0xd6aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6aaf0 size=480 callers=0 calls=1
   calls: sub_967240
*/
void sub_d6aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6aaf0ULL || rel >= 0xd6acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6acd0 size=16 callers=0 calls=0
*/
void sub_d6acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6acd0ULL || rel >= 0xd6ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ace0 size=16 callers=0 calls=0
*/
void sub_d6ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ace0ULL || rel >= 0xd6acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6acf0 size=448 callers=0 calls=4
   calls: sub_971950, sub_d69840, sub_d69870, sub_d69970
*/
void sub_d6acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6acf0ULL || rel >= 0xd6aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6aeb0 size=176 callers=0 calls=0
*/
void sub_d6aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6aeb0ULL || rel >= 0xd6af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6af60 size=656 callers=0 calls=9
   calls: sub_65d220, sub_971950, sub_972c70, sub_d69840, sub_d699d0, sub_d699f0, sub_d69a10, sub_d6b1f0, sub_d6b480
*/
void sub_d6af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6af60ULL || rel >= 0xd6b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b1f0 size=656 callers=1 calls=7
   calls: sub_13c9e50, sub_59b250, sub_5b9220, sub_b4a5e0, sub_d69840, sub_d699f0, sub_d69a10
*/
void sub_d6b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b1f0ULL || rel >= 0xd6b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b480 size=496 callers=1 calls=5
   calls: sub_59b250, sub_5b9220, sub_5b9400, sub_b4a5e0, sub_cf15b0
*/
void sub_d6b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b480ULL || rel >= 0xd6b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b670 size=80 callers=0 calls=0
*/
void sub_d6b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b670ULL || rel >= 0xd6b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b6c0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d6b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b6c0ULL || rel >= 0xd6b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b770 size=48 callers=0 calls=0
*/
void sub_d6b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b770ULL || rel >= 0xd6b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b7a0 size=80 callers=0 calls=0
*/
void sub_d6b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b7a0ULL || rel >= 0xd6b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b7f0 size=80 callers=0 calls=0
*/
void sub_d6b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b7f0ULL || rel >= 0xd6b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b840 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d6b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b840ULL || rel >= 0xd6b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b8f0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d6b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b8f0ULL || rel >= 0xd6b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b9a0 size=80 callers=0 calls=0
*/
void sub_d6b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b9a0ULL || rel >= 0xd6b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6b9f0 size=80 callers=0 calls=0
*/
void sub_d6b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b9f0ULL || rel >= 0xd6ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ba40 size=144 callers=1 calls=1
   calls: sub_d6bad0
*/
void sub_d6ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ba40ULL || rel >= 0xd6bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6bad0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d6c250, sub_e9db40
*/
void sub_d6bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6bad0ULL || rel >= 0xd6bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6bbf0 size=16 callers=0 calls=0
*/
void sub_d6bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6bbf0ULL || rel >= 0xd6bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6bc00 size=16 callers=0 calls=0
*/
void sub_d6bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6bc00ULL || rel >= 0xd6bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6bc10 size=560 callers=0 calls=6
   calls: sub_134c550, sub_134c880, sub_134cb00, sub_134cb20, sub_134cc00, sub_8e1e50
*/
void sub_d6bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6bc10ULL || rel >= 0xd6be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6be40 size=16 callers=0 calls=0
*/
void sub_d6be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6be40ULL || rel >= 0xd6be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6be50 size=112 callers=0 calls=0
*/
void sub_d6be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6be50ULL || rel >= 0xd6bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6bec0 size=112 callers=0 calls=0
*/
void sub_d6bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6bec0ULL || rel >= 0xd6bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6bf30 size=16 callers=0 calls=0
*/
void sub_d6bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6bf30ULL || rel >= 0xd6bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6bf40 size=112 callers=0 calls=0
*/
void sub_d6bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6bf40ULL || rel >= 0xd6bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6bfb0 size=112 callers=0 calls=0
*/
void sub_d6bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6bfb0ULL || rel >= 0xd6c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c020 size=16 callers=0 calls=0
*/
void sub_d6c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c020ULL || rel >= 0xd6c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c030 size=16 callers=0 calls=0
*/
void sub_d6c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c030ULL || rel >= 0xd6c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c040 size=112 callers=0 calls=0
*/
void sub_d6c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c040ULL || rel >= 0xd6c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c0b0 size=112 callers=0 calls=0
*/
void sub_d6c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c0b0ULL || rel >= 0xd6c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c120 size=304 callers=0 calls=0
*/
void sub_d6c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c120ULL || rel >= 0xd6c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c250 size=320 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d6c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c250ULL || rel >= 0xd6c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c390 size=128 callers=0 calls=0
*/
void sub_d6c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c390ULL || rel >= 0xd6c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c410 size=128 callers=1 calls=1
   calls: sub_d6c490
*/
void sub_d6c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c410ULL || rel >= 0xd6c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c490 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d6ca60, sub_e9db40
*/
void sub_d6c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c490ULL || rel >= 0xd6c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c5b0 size=96 callers=0 calls=0
*/
void sub_d6c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c5b0ULL || rel >= 0xd6c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c610 size=96 callers=0 calls=0
*/
void sub_d6c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c610ULL || rel >= 0xd6c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c670 size=96 callers=0 calls=0
*/
void sub_d6c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c670ULL || rel >= 0xd6c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c6d0 size=96 callers=0 calls=0
*/
void sub_d6c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c6d0ULL || rel >= 0xd6c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c730 size=96 callers=0 calls=0
*/
void sub_d6c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c730ULL || rel >= 0xd6c790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c790 size=96 callers=0 calls=0
*/
void sub_d6c790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c790ULL || rel >= 0xd6c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c7f0 size=16 callers=0 calls=0
*/
void sub_d6c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c7f0ULL || rel >= 0xd6c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c800 size=32 callers=0 calls=0
*/
void sub_d6c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c800ULL || rel >= 0xd6c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c820 size=208 callers=0 calls=1
   calls: sub_1417680
*/
void sub_d6c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c820ULL || rel >= 0xd6c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c8f0 size=16 callers=0 calls=0
*/
void sub_d6c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c8f0ULL || rel >= 0xd6c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c900 size=16 callers=0 calls=0
*/
void sub_d6c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c900ULL || rel >= 0xd6c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c910 size=16 callers=0 calls=0
*/
void sub_d6c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c910ULL || rel >= 0xd6c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c920 size=16 callers=0 calls=0
*/
void sub_d6c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c920ULL || rel >= 0xd6c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6c930 size=304 callers=0 calls=0
*/
void sub_d6c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6c930ULL || rel >= 0xd6ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ca60 size=304 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d6ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ca60ULL || rel >= 0xd6cb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6cb90 size=128 callers=1 calls=1
   calls: sub_d6cc10
*/
void sub_d6cb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6cb90ULL || rel >= 0xd6cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6cc10 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d6d280, sub_e9db40
*/
void sub_d6cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6cc10ULL || rel >= 0xd6cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6cd30 size=16 callers=0 calls=0
*/
void sub_d6cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6cd30ULL || rel >= 0xd6cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6cd40 size=16 callers=0 calls=0
*/
void sub_d6cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6cd40ULL || rel >= 0xd6cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6cd50 size=608 callers=0 calls=4
   calls: sub_13a5bb0, sub_1423540, sub_d6cfb0, sub_d7edd0
*/
void sub_d6cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6cd50ULL || rel >= 0xd6cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6cfb0 size=288 callers=7 calls=3
   calls: sub_c38350, sub_d6d360, sub_e9db40
*/
void sub_d6cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6cfb0ULL || rel >= 0xd6d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d0d0 size=16 callers=0 calls=0
*/
void sub_d6d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d0d0ULL || rel >= 0xd6d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d0e0 size=16 callers=0 calls=0
*/
void sub_d6d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d0e0ULL || rel >= 0xd6d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d0f0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d6d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d0f0ULL || rel >= 0xd6d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d160 size=16 callers=0 calls=0
*/
void sub_d6d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d160ULL || rel >= 0xd6d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d170 size=16 callers=0 calls=0
*/
void sub_d6d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d170ULL || rel >= 0xd6d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d180 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d6d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d180ULL || rel >= 0xd6d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d1f0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d6d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d1f0ULL || rel >= 0xd6d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d260 size=16 callers=0 calls=0
*/
void sub_d6d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d260ULL || rel >= 0xd6d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d270 size=16 callers=0 calls=0
*/
void sub_d6d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d270ULL || rel >= 0xd6d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d280 size=224 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d6d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d280ULL || rel >= 0xd6d360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d360 size=432 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d6d360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d360ULL || rel >= 0xd6d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d510 size=128 callers=0 calls=0
*/
void sub_d6d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d510ULL || rel >= 0xd6d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d590 size=16 callers=1 calls=0
*/
void sub_d6d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d590ULL || rel >= 0xd6d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d5a0 size=288 callers=0 calls=3
   calls: sub_c38350, sub_d6e510, sub_e9db40
*/
void sub_d6d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d5a0ULL || rel >= 0xd6d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d6c0 size=16 callers=0 calls=0
*/
void sub_d6d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d6c0ULL || rel >= 0xd6d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d6d0 size=336 callers=0 calls=1
   calls: sub_d6d820
*/
void sub_d6d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d6d0ULL || rel >= 0xd6d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6d820 size=688 callers=1 calls=2
   calls: sub_1366cd0, sub_1367100
*/
void sub_d6d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d820ULL || rel >= 0xd6dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6dad0 size=1040 callers=0 calls=10
   calls: NONE_NONE, sub_13ed240, sub_794330, sub_963470, sub_a6d200, sub_a6d280, sub_ce3990, sub_ce39b0, sub_d7edd0, sub_d7f090
   ref: Stop_Win_Music
   ref: a_btl03_r0201
   ref: Stop_Battle_Music
*/
void Stop_Battle_Music(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6dad0ULL || rel >= 0xd6dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6dee0 size=176 callers=0 calls=1
   calls: sub_d6df90
*/
void sub_d6dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6dee0ULL || rel >= 0xd6df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6df90 size=480 callers=1 calls=0
*/
void sub_d6df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6df90ULL || rel >= 0xd6e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e170 size=96 callers=0 calls=0
*/
void sub_d6e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e170ULL || rel >= 0xd6e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e1d0 size=96 callers=0 calls=0
*/
void sub_d6e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e1d0ULL || rel >= 0xd6e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e230 size=16 callers=0 calls=0
*/
void sub_d6e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e230ULL || rel >= 0xd6e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e240 size=96 callers=0 calls=0
*/
void sub_d6e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e240ULL || rel >= 0xd6e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e2a0 size=96 callers=0 calls=0
*/
void sub_d6e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e2a0ULL || rel >= 0xd6e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e300 size=16 callers=0 calls=0
*/
void sub_d6e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e300ULL || rel >= 0xd6e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e310 size=16 callers=0 calls=0
*/
void sub_d6e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e310ULL || rel >= 0xd6e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e320 size=96 callers=0 calls=0
*/
void sub_d6e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e320ULL || rel >= 0xd6e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e380 size=96 callers=0 calls=0
*/
void sub_d6e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e380ULL || rel >= 0xd6e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e3e0 size=304 callers=0 calls=0
*/
void sub_d6e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e3e0ULL || rel >= 0xd6e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e510 size=336 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d6e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e510ULL || rel >= 0xd6e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e660 size=16 callers=0 calls=0
*/
void sub_d6e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e660ULL || rel >= 0xd6e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e670 size=16 callers=0 calls=0
*/
void sub_d6e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e670ULL || rel >= 0xd6e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e680 size=784 callers=0 calls=5
   calls: sub_c44310, sub_c44410, sub_c445f0, sub_d604d0, sub_d6ef60
*/
void sub_d6e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e680ULL || rel >= 0xd6e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e990 size=16 callers=0 calls=0
*/
void sub_d6e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e990ULL || rel >= 0xd6e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6e9a0 size=96 callers=0 calls=0
*/
void sub_d6e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6e9a0ULL || rel >= 0xd6ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ea00 size=96 callers=0 calls=0
*/
void sub_d6ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ea00ULL || rel >= 0xd6ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ea60 size=16 callers=0 calls=0
*/
void sub_d6ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ea60ULL || rel >= 0xd6ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ea70 size=96 callers=0 calls=0
*/
void sub_d6ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ea70ULL || rel >= 0xd6ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ead0 size=96 callers=0 calls=0
*/
void sub_d6ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ead0ULL || rel >= 0xd6eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6eb30 size=16 callers=0 calls=0
*/
void sub_d6eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6eb30ULL || rel >= 0xd6eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6eb40 size=16 callers=0 calls=0
*/
void sub_d6eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6eb40ULL || rel >= 0xd6eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6eb50 size=96 callers=0 calls=0
*/
void sub_d6eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6eb50ULL || rel >= 0xd6ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ebb0 size=96 callers=0 calls=0
*/
void sub_d6ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ebb0ULL || rel >= 0xd6ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ec10 size=304 callers=0 calls=0
*/
void sub_d6ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ec10ULL || rel >= 0xd6ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ed40 size=128 callers=0 calls=0
*/
void sub_d6ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ed40ULL || rel >= 0xd6edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6edc0 size=304 callers=5 calls=0
*/
void sub_d6edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6edc0ULL || rel >= 0xd6eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6eef0 size=16 callers=2 calls=0
*/
void sub_d6eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6eef0ULL || rel >= 0xd6ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ef00 size=48 callers=3 calls=0
*/
void sub_d6ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ef00ULL || rel >= 0xd6ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ef30 size=16 callers=1 calls=0
*/
void sub_d6ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ef30ULL || rel >= 0xd6ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ef40 size=32 callers=2 calls=0
*/
void sub_d6ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ef40ULL || rel >= 0xd6ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ef60 size=32 callers=2 calls=0
*/
void sub_d6ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ef60ULL || rel >= 0xd6ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6ef80 size=32 callers=2 calls=0
*/
void sub_d6ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6ef80ULL || rel >= 0xd6efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6efa0 size=32 callers=1 calls=0
*/
void sub_d6efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6efa0ULL || rel >= 0xd6efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6efc0 size=176 callers=1 calls=1
   calls: sub_d6f070
*/
void sub_d6efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6efc0ULL || rel >= 0xd6f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f070 size=432 callers=1 calls=3
   calls: sub_c38350, sub_d6f220, sub_e9db40
*/
void sub_d6f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f070ULL || rel >= 0xd6f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f220 size=432 callers=1 calls=3
   calls: sub_76f550, sub_a74910, sub_e9d130
*/
void sub_d6f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f220ULL || rel >= 0xd6f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f3d0 size=288 callers=0 calls=0
*/
void sub_d6f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f3d0ULL || rel >= 0xd6f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f4f0 size=16 callers=0 calls=0
*/
void sub_d6f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f4f0ULL || rel >= 0xd6f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f500 size=16 callers=0 calls=0
*/
void sub_d6f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f500ULL || rel >= 0xd6f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f510 size=16 callers=0 calls=0
*/
void sub_d6f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f510ULL || rel >= 0xd6f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f520 size=16 callers=0 calls=0
*/
void sub_d6f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f520ULL || rel >= 0xd6f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f530 size=16 callers=0 calls=0
*/
void sub_d6f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f530ULL || rel >= 0xd6f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f540 size=16 callers=0 calls=0
*/
void sub_d6f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f540ULL || rel >= 0xd6f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f550 size=864 callers=0 calls=1
   calls: sub_13517a0
*/
void sub_d6f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f550ULL || rel >= 0xd6f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f8b0 size=96 callers=0 calls=0
*/
void sub_d6f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f8b0ULL || rel >= 0xd6f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6f910 size=896 callers=0 calls=5
   calls: sub_1354890, sub_a75c00, sub_a777c0, sub_c39c40, sub_d6fc90
*/
void sub_d6f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6f910ULL || rel >= 0xd6fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d6fc90 size=928 callers=1 calls=2
   calls: sub_a75e20, sub_c39c40
*/
void sub_d6fc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6fc90ULL || rel >= 0xd70030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70030 size=16 callers=0 calls=0
*/
void sub_d70030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70030ULL || rel >= 0xd70040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70040 size=16 callers=0 calls=0
*/
void sub_d70040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70040ULL || rel >= 0xd70050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70050 size=16 callers=0 calls=0
*/
void sub_d70050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70050ULL || rel >= 0xd70060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70060 size=304 callers=0 calls=0
*/
void sub_d70060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70060ULL || rel >= 0xd70190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70190 size=128 callers=0 calls=0
*/
void sub_d70190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70190ULL || rel >= 0xd70210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70210 size=128 callers=2 calls=1
   calls: sub_d70290
*/
void sub_d70210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70210ULL || rel >= 0xd70290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70290 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d711e0, sub_e9db40
*/
void sub_d70290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70290ULL || rel >= 0xd703b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d703b0 size=672 callers=0 calls=5
   calls: sub_135a2d0, sub_139e050, sub_13a1210, sub_d25bd0, sub_eaeb90
*/
void sub_d703b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd703b0ULL || rel >= 0xd70650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70650 size=16 callers=0 calls=0
*/
void sub_d70650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70650ULL || rel >= 0xd70660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70660 size=16 callers=0 calls=0
*/
void sub_d70660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70660ULL || rel >= 0xd70670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70670 size=1728 callers=0 calls=16
   calls: sub_1105bc0, sub_1105be0, sub_13a10f0, sub_13a1100, sub_13a1150, sub_13a11f0, sub_13a5bb0, sub_1423540, sub_c39170, sub_c39a50, sub_c39c40, sub_c60e50
   ... +4 more
   ref: a_t0101_i0101
*/
void a_t0101_i0101_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70670ULL || rel >= 0xd70d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70d30 size=192 callers=0 calls=1
   calls: sub_135a3c0
*/
void sub_d70d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70d30ULL || rel >= 0xd70df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70df0 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_d70df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70df0ULL || rel >= 0xd70e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70e60 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_d70e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70e60ULL || rel >= 0xd70ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70ed0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d70ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70ed0ULL || rel >= 0xd70f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70f40 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_d70f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70f40ULL || rel >= 0xd70fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d70fb0 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_d70fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70fb0ULL || rel >= 0xd71020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71020 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d71020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71020ULL || rel >= 0xd71090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71090 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d71090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71090ULL || rel >= 0xd71100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71100 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_d71100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71100ULL || rel >= 0xd71170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71170 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_d71170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71170ULL || rel >= 0xd711e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d711e0 size=224 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d711e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd711e0ULL || rel >= 0xd712c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d712c0 size=144 callers=0 calls=0
*/
void sub_d712c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd712c0ULL || rel >= 0xd71350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71350 size=368 callers=0 calls=0
*/
void sub_d71350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71350ULL || rel >= 0xd714c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d714c0 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd714c0ULL || rel >= 0xd71690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71690 size=80 callers=2 calls=2
   calls: sub_c60e50, sub_e9d130
*/
void sub_d71690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71690ULL || rel >= 0xd716e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d716e0 size=16 callers=0 calls=0
*/
void sub_d716e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd716e0ULL || rel >= 0xd716f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d716f0 size=272 callers=0 calls=3
   calls: a_wr0101, sub_1400490, sub_cc2080
*/
void sub_d716f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd716f0ULL || rel >= 0xd71800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71800 size=1408 callers=1 calls=2
   calls: sub_135a1a0, sub_e909f0
   ref: a_0301
   ref: a_pl0101
   ref: a_wr0101
   ref: a_d0101
   ref: a_0201
*/
void a_wr0101(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71800ULL || rel >= 0xd71d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71d80 size=416 callers=0 calls=4
   calls: sub_794330, sub_c60e50, sub_d7eea0, sub_e73880
   ref: Defeat_Off
*/
void Defeat_Off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71d80ULL || rel >= 0xd71f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71f20 size=16 callers=0 calls=0
*/
void sub_d71f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71f20ULL || rel >= 0xd71f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71f30 size=16 callers=0 calls=0
*/
void sub_d71f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71f30ULL || rel >= 0xd71f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71f40 size=16 callers=0 calls=0
*/
void sub_d71f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71f40ULL || rel >= 0xd71f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71f50 size=16 callers=0 calls=0
*/
void sub_d71f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71f50ULL || rel >= 0xd71f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71f60 size=16 callers=0 calls=0
*/
void sub_d71f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71f60ULL || rel >= 0xd71f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71f70 size=16 callers=0 calls=0
*/
void sub_d71f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71f70ULL || rel >= 0xd71f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71f80 size=16 callers=0 calls=0
*/
void sub_d71f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71f80ULL || rel >= 0xd71f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71f90 size=16 callers=0 calls=0
*/
void sub_d71f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71f90ULL || rel >= 0xd71fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71fa0 size=16 callers=0 calls=0
*/
void sub_d71fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71fa0ULL || rel >= 0xd71fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d71fb0 size=304 callers=0 calls=0
*/
void sub_d71fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd71fb0ULL || rel >= 0xd720e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d720e0 size=240 callers=2 calls=2
   calls: sub_d721d0, sub_d72a00
*/
void sub_d720e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd720e0ULL || rel >= 0xd721d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d721d0 size=464 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_d721d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd721d0ULL || rel >= 0xd723a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d723a0 size=96 callers=0 calls=0
*/
void sub_d723a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd723a0ULL || rel >= 0xd72400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72400 size=96 callers=0 calls=0
*/
void sub_d72400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72400ULL || rel >= 0xd72460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72460 size=96 callers=0 calls=0
*/
void sub_d72460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72460ULL || rel >= 0xd724c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d724c0 size=96 callers=0 calls=0
*/
void sub_d724c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd724c0ULL || rel >= 0xd72520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72520 size=96 callers=0 calls=0
*/
void sub_d72520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72520ULL || rel >= 0xd72580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72580 size=96 callers=0 calls=0
*/
void sub_d72580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72580ULL || rel >= 0xd725e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d725e0 size=16 callers=0 calls=0
*/
void sub_d725e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd725e0ULL || rel >= 0xd725f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d725f0 size=288 callers=0 calls=2
   calls: sub_135a760, sub_d72710
*/
void sub_d725f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd725f0ULL || rel >= 0xd72710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72710 size=304 callers=1 calls=2
   calls: sub_67b990, sub_67be60
*/
void sub_d72710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72710ULL || rel >= 0xd72840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72840 size=96 callers=0 calls=1
   calls: sub_d7e1e0
*/
void sub_d72840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72840ULL || rel >= 0xd728a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d728a0 size=304 callers=0 calls=2
   calls: sub_135a4b0, sub_eaef70
*/
void sub_d728a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd728a0ULL || rel >= 0xd729d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d729d0 size=16 callers=0 calls=0
*/
void sub_d729d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd729d0ULL || rel >= 0xd729e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d729e0 size=16 callers=0 calls=0
*/
void sub_d729e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd729e0ULL || rel >= 0xd729f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d729f0 size=16 callers=0 calls=0
*/
void sub_d729f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd729f0ULL || rel >= 0xd72a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72a00 size=304 callers=1 calls=0
*/
void sub_d72a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72a00ULL || rel >= 0xd72b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72b30 size=352 callers=2 calls=2
   calls: sub_d72c90, sub_d73300
*/
void sub_d72b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72b30ULL || rel >= 0xd72c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72c90 size=464 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_d72c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72c90ULL || rel >= 0xd72e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72e60 size=96 callers=0 calls=0
*/
void sub_d72e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72e60ULL || rel >= 0xd72ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72ec0 size=96 callers=0 calls=0
*/
void sub_d72ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72ec0ULL || rel >= 0xd72f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72f20 size=96 callers=0 calls=0
*/
void sub_d72f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72f20ULL || rel >= 0xd72f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72f80 size=96 callers=0 calls=0
*/
void sub_d72f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72f80ULL || rel >= 0xd72fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d72fe0 size=96 callers=0 calls=0
*/
void sub_d72fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd72fe0ULL || rel >= 0xd73040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d73040 size=96 callers=0 calls=0
*/
void sub_d73040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd73040ULL || rel >= 0xd730a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d730a0 size=16 callers=0 calls=0
*/
void sub_d730a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd730a0ULL || rel >= 0xd730b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d730b0 size=256 callers=0 calls=1
   calls: sub_67b990
*/
void sub_d730b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd730b0ULL || rel >= 0xd731b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d731b0 size=96 callers=0 calls=1
   calls: sub_d7e1e0
*/
void sub_d731b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd731b0ULL || rel >= 0xd73210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d73210 size=192 callers=0 calls=1
   calls: sub_136b780
*/
void sub_d73210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd73210ULL || rel >= 0xd732d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d732d0 size=16 callers=0 calls=0
*/
void sub_d732d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd732d0ULL || rel >= 0xd732e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d732e0 size=16 callers=0 calls=0
*/
void sub_d732e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd732e0ULL || rel >= 0xd732f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d732f0 size=16 callers=0 calls=0
*/
void sub_d732f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd732f0ULL || rel >= 0xd73300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d73300 size=304 callers=1 calls=0
*/
void sub_d73300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd73300ULL || rel >= 0xd73430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d73430 size=368 callers=0 calls=0
*/
void sub_d73430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd73430ULL || rel >= 0xd735a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d735a0 size=784 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd735a0ULL || rel >= 0xd738b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d738b0 size=1280 callers=2 calls=2
   calls: sub_13a5bb0, sub_d73db0
*/
void sub_d738b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd738b0ULL || rel >= 0xd73db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d73db0 size=288 callers=6 calls=3
   calls: sub_c38350, sub_d7ad00, sub_e9db40
*/
void sub_d73db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd73db0ULL || rel >= 0xd73ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d73ed0 size=736 callers=1 calls=2
   calls: sub_13a5bb0, sub_d73db0
*/
void sub_d73ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd73ed0ULL || rel >= 0xd741b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d741b0 size=1072 callers=2 calls=2
   calls: sub_13a5bb0, sub_d73db0
*/
void sub_d741b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd741b0ULL || rel >= 0xd745e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d745e0 size=1216 callers=1 calls=2
   calls: sub_13a5bb0, sub_d73db0
*/
void sub_d745e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd745e0ULL || rel >= 0xd74aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d74aa0 size=2608 callers=1 calls=2
   calls: sub_13a5bb0, sub_d73db0
*/
void sub_d74aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd74aa0ULL || rel >= 0xd754d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d754d0 size=32 callers=8 calls=0
*/
void sub_d754d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd754d0ULL || rel >= 0xd754f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d754f0 size=16 callers=8 calls=0
*/
void sub_d754f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd754f0ULL || rel >= 0xd75500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d75500 size=1792 callers=1 calls=2
   calls: sub_13a5bb0, sub_d73db0
*/
void sub_d75500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd75500ULL || rel >= 0xd75c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d75c00 size=160 callers=0 calls=0
*/
void sub_d75c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd75c00ULL || rel >= 0xd75ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d75ca0 size=176 callers=0 calls=0
*/
void sub_d75ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd75ca0ULL || rel >= 0xd75d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d75d50 size=176 callers=0 calls=0
*/
void sub_d75d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd75d50ULL || rel >= 0xd75e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d75e00 size=160 callers=0 calls=0
*/
void sub_d75e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd75e00ULL || rel >= 0xd75ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d75ea0 size=176 callers=0 calls=0
*/
void sub_d75ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd75ea0ULL || rel >= 0xd75f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d75f50 size=176 callers=0 calls=0
*/
void sub_d75f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd75f50ULL || rel >= 0xd76000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d76000 size=16 callers=0 calls=0
*/
void sub_d76000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd76000ULL || rel >= 0xd76010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d76010 size=128 callers=0 calls=3
   calls: sub_794330, sub_7f4540, sub_d63270
*/
void sub_d76010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd76010ULL || rel >= 0xd76090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d76090 size=7360 callers=0 calls=74
   calls: NONE_NONE_3, NONE_NONE_4, NONE_NONE_5, NONE_NONE_6, sub_106e4e0, sub_106e7c0, sub_1074cb0, sub_1074fe0, sub_12fac60, sub_12faeb0, sub_12ffe00, sub_13000b0
   ... +62 more
   ref: Resume_Win_Music
   ref: Defeat_Battle_for_c03tower
   ref: Defeat_Battle
   ref: Stop_Battle_Music_for865
   ref: MEET_BY_WILD
   ref: CAPTURE_POKEMON
   ref: GAMEOVER
   ref: Stop_Win_Music
*/
void Stop_Battle_Music_for865(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd76090ULL || rel >= 0xd77d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d77d50 size=1680 callers=2 calls=11
   calls: sound_attr, sub_13f6520, sub_1c0, sub_5cfaf0, sub_5e7a30, sub_7f4a10, sub_7f4b10, sub_7f4c30, sub_d25c50, sub_d63270, sub_d79910
   ref: NONE_NONE
*/
void NONE_NONE_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd77d50ULL || rel >= 0xd783e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d783e0 size=1520 callers=2 calls=13
   calls: sound_attr, sub_13f6520, sub_1c0, sub_5cfaf0, sub_5e7a30, sub_783bd0, sub_7f47e0, sub_cde050, sub_d28d20, sub_d465d0, sub_d63270, sub_d79910
   ... +1 more
   ref: NONE_NONE
*/
void NONE_NONE_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd783e0ULL || rel >= 0xd789d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d789d0 size=1040 callers=2 calls=8
   calls: Play_bgm_or_vs_vs22, sound_attr, sub_13f6520, sub_1c0, sub_5cfaf0, sub_5e7a30, sub_7f6c00, sub_d79910
   ref: NONE_NONE
*/
void NONE_NONE_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd789d0ULL || rel >= 0xd78de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d78de0 size=896 callers=2 calls=7
   calls: sound_attr, sub_13f6520, sub_1c0, sub_5cfaf0, sub_5e7a30, sub_7f4a10, sub_d79910
   ref: NONE_NONE
*/
void NONE_NONE_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd78de0ULL || rel >= 0xd79160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d79160 size=240 callers=1 calls=2
   calls: sub_b58470, sub_ee7830
*/
void sub_d79160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd79160ULL || rel >= 0xd79250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d79250 size=320 callers=1 calls=4
   calls: sub_1301880, sub_7631d0, sub_763240, sub_7847d0
*/
void sub_d79250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd79250ULL || rel >= 0xd79390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d79390 size=496 callers=2 calls=8
   calls: sub_762930, sub_762d70, sub_762d90, sub_764b40, sub_767160, sub_767950, sub_7847d0, sub_de6fd0
*/
void sub_d79390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd79390ULL || rel >= 0xd79580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d79580 size=608 callers=1 calls=5
   calls: sub_134fcb0, sub_1354890, sub_135a2d0, sub_1379700, sub_768270
*/
void sub_d79580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd79580ULL || rel >= 0xd797e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d797e0 size=288 callers=1 calls=3
   calls: sub_13ed070, sub_c38350, sub_e9db40
*/
void sub_d797e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd797e0ULL || rel >= 0xd79900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d79900 size=16 callers=0 calls=0
*/
void sub_d79900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd79900ULL || rel >= 0xd79910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d79910 size=400 callers=4 calls=4
   calls: sub_5c68f0, sub_ce0300, sub_ce0440, sub_d28d20
*/
void sub_d79910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd79910ULL || rel >= 0xd79aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d79aa0 size=3328 callers=1 calls=17
   calls: sub_135a760, sub_783bd0, sub_7c2d80, sub_7f47e0, sub_7f59c0, sub_7f5a90, sub_7f5b60, sub_7f5d30, sub_7f5f60, sub_7f6110, sub_7f62c0, sub_7f64d0
   ... +5 more
*/
void sub_d79aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd79aa0ULL || rel >= 0xd7a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7a7a0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d7a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7a7a0ULL || rel >= 0xd7a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7a810 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d7a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7a810ULL || rel >= 0xd7a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7a880 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d7a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7a880ULL || rel >= 0xd7a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7a8f0 size=1040 callers=2 calls=0
*/
void sub_d7a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7a8f0ULL || rel >= 0xd7ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7ad00 size=528 callers=1 calls=2
   calls: sub_1074c90, sub_e9d130
*/
void sub_d7ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7ad00ULL || rel >= 0xd7af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7af10 size=304 callers=3 calls=1
   calls: sub_13a6920
*/
void sub_d7af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7af10ULL || rel >= 0xd7b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7b040 size=144 callers=1 calls=1
   calls: sub_d7b0d0
*/
void sub_d7b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7b040ULL || rel >= 0xd7b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7b0d0 size=480 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_d7b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7b0d0ULL || rel >= 0xd7b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7b2b0 size=16 callers=0 calls=0
*/
void sub_d7b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7b2b0ULL || rel >= 0xd7b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7b2c0 size=16 callers=0 calls=0
*/
void sub_d7b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7b2c0ULL || rel >= 0xd7b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7b2d0 size=1664 callers=0 calls=12
   calls: Play_Prop_Gimmick_PM_drop, sub_12faeb0, sub_972c70, sub_990590, sub_c6c5c0, sub_c9f940, sub_cb20e0, sub_d24bf0, sub_d25790, sub_d2e290, sub_d73ed0, sub_d7bd00
   ref: fi0111_shaketreeswait01_loop
   ref: bin/field/effect/particle/particle/ef_kinomi_poke01.ptcl
   ref: APPEAR_POKEMON
   ref: fi_shaketree_off
*/
void APPEAR_POKEMON(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7b2d0ULL || rel >= 0xd7b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7b950 size=16 callers=0 calls=0
*/
void sub_d7b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7b950ULL || rel >= 0xd7b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7b960 size=96 callers=0 calls=0
*/
void sub_d7b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7b960ULL || rel >= 0xd7b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7b9c0 size=96 callers=0 calls=0
*/
void sub_d7b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7b9c0ULL || rel >= 0xd7ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7ba20 size=16 callers=0 calls=0
*/
void sub_d7ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7ba20ULL || rel >= 0xd7ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7ba30 size=96 callers=0 calls=0
*/
void sub_d7ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7ba30ULL || rel >= 0xd7ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7ba90 size=96 callers=0 calls=0
*/
void sub_d7ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7ba90ULL || rel >= 0xd7baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7baf0 size=16 callers=0 calls=0
*/
void sub_d7baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7baf0ULL || rel >= 0xd7bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7bb00 size=16 callers=0 calls=0
*/
void sub_d7bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7bb00ULL || rel >= 0xd7bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7bb10 size=96 callers=0 calls=0
*/
void sub_d7bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7bb10ULL || rel >= 0xd7bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7bb70 size=96 callers=0 calls=0
*/
void sub_d7bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7bb70ULL || rel >= 0xd7bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7bbd0 size=304 callers=0 calls=0
*/
void sub_d7bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7bbd0ULL || rel >= 0xd7bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7bd00 size=304 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_d7bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7bd00ULL || rel >= 0xd7be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7be30 size=128 callers=0 calls=0
*/
void sub_d7be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7be30ULL || rel >= 0xd7beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7beb0 size=368 callers=0 calls=0
*/
void sub_d7beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7beb0ULL || rel >= 0xd7c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7c020 size=800 callers=0 calls=2
   calls: sub_1c0, sub_972c70
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7c020ULL || rel >= 0xd7c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7c340 size=144 callers=2 calls=2
   calls: sub_106fa30, sub_d7c3d0
*/
void sub_d7c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7c340ULL || rel >= 0xd7c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7c3d0 size=1200 callers=4 calls=9
   calls: sub_1179db0, sub_13a5bb0, sub_1c0, sub_5cff50, sub_5e6770, sub_6a0d40, sub_d63270, sub_d7ca20, sub_d7cb40
*/
void sub_d7c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7c3d0ULL || rel >= 0xd7c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7c880 size=144 callers=1 calls=2
   calls: sub_106fa30, sub_d7c3d0
*/
void sub_d7c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7c880ULL || rel >= 0xd7c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7c910 size=144 callers=2 calls=2
   calls: sub_106fa30, sub_d7c3d0
*/
void sub_d7c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7c910ULL || rel >= 0xd7c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7c9a0 size=128 callers=1 calls=1
   calls: sub_d7c3d0
*/
void sub_d7c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7c9a0ULL || rel >= 0xd7ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7ca20 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d7dcb0, sub_e9da70
*/
void sub_d7ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7ca20ULL || rel >= 0xd7cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7cb40 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d7dcb0, sub_e9db40
*/
void sub_d7cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7cb40ULL || rel >= 0xd7cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7cc60 size=16 callers=0 calls=0
*/
void sub_d7cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7cc60ULL || rel >= 0xd7cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7cc70 size=304 callers=0 calls=6
   calls: sub_106e4e0, sub_1179ec0, sub_d7cda0, sub_e51bf0, sub_e51c10, sub_f18490
*/
void sub_d7cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7cc70ULL || rel >= 0xd7cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7cda0 size=496 callers=1 calls=3
   calls: sub_1c0, sub_d7ded0, sub_d7e000
*/
void sub_d7cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7cda0ULL || rel >= 0xd7cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7cf90 size=1760 callers=0 calls=17
   calls: sub_1050060, sub_1179ec0, sub_1179ed0, sub_13a5bb0, sub_1c0, sub_5cfaf0, sub_5e6770, sub_5e7a30, sub_b58470, sub_c60e50, sub_ca8e20, sub_d39a10
   ... +5 more
*/
void sub_d7cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7cf90ULL || rel >= 0xd7d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7d670 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d7e100, sub_e9db40
*/
void sub_d7d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7d670ULL || rel >= 0xd7d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7d790 size=112 callers=0 calls=2
   calls: sub_106e4b0, sub_f18490
*/
void sub_d7d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7d790ULL || rel >= 0xd7d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7d800 size=144 callers=0 calls=0
*/
void sub_d7d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7d800ULL || rel >= 0xd7d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7d890 size=144 callers=0 calls=0
*/
void sub_d7d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7d890ULL || rel >= 0xd7d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7d920 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d7d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7d920ULL || rel >= 0xd7d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7d990 size=144 callers=0 calls=0
*/
void sub_d7d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7d990ULL || rel >= 0xd7da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7da20 size=144 callers=0 calls=0
*/
void sub_d7da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7da20ULL || rel >= 0xd7dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7dab0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d7dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7dab0ULL || rel >= 0xd7db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7db20 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d7db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7db20ULL || rel >= 0xd7db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7db90 size=144 callers=0 calls=0
*/
void sub_d7db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7db90ULL || rel >= 0xd7dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7dc20 size=144 callers=0 calls=0
*/
void sub_d7dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7dc20ULL || rel >= 0xd7dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7dcb0 size=544 callers=2 calls=1
   calls: sub_e9d130
*/
void sub_d7dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7dcb0ULL || rel >= 0xd7ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7ded0 size=304 callers=1 calls=0
*/
void sub_d7ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7ded0ULL || rel >= 0xd7e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e000 size=256 callers=1 calls=1
   calls: sub_1118980
*/
void sub_d7e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e000ULL || rel >= 0xd7e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e100 size=224 callers=1 calls=1
   calls: sub_d9bdb0
*/
void sub_d7e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e100ULL || rel >= 0xd7e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e1e0 size=224 callers=4 calls=2
   calls: sub_d7e2c0, sub_d7e740
*/
void sub_d7e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e1e0ULL || rel >= 0xd7e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e2c0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d7e870, sub_e9db40
*/
void sub_d7e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e2c0ULL || rel >= 0xd7e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e3e0 size=16 callers=0 calls=0
*/
void sub_d7e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e3e0ULL || rel >= 0xd7e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e3f0 size=16 callers=0 calls=0
*/
void sub_d7e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e3f0ULL || rel >= 0xd7e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e400 size=16 callers=0 calls=0
*/
void sub_d7e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e400ULL || rel >= 0xd7e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e410 size=16 callers=0 calls=0
*/
void sub_d7e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e410ULL || rel >= 0xd7e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e420 size=16 callers=0 calls=0
*/
void sub_d7e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e420ULL || rel >= 0xd7e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e430 size=16 callers=0 calls=0
*/
void sub_d7e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e430ULL || rel >= 0xd7e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e440 size=16 callers=0 calls=0
*/
void sub_d7e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e440ULL || rel >= 0xd7e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e450 size=16 callers=0 calls=0
*/
void sub_d7e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e450ULL || rel >= 0xd7e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e460 size=672 callers=0 calls=10
   calls: strinput, sub_e76980, sub_e769b0, sub_e76a20, sub_e76a30, sub_e774b0, sub_e78520, sub_e787b0, sub_e78da0, sub_e79560
*/
void sub_d7e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e460ULL || rel >= 0xd7e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e700 size=16 callers=0 calls=0
*/
void sub_d7e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e700ULL || rel >= 0xd7e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e710 size=16 callers=0 calls=0
*/
void sub_d7e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e710ULL || rel >= 0xd7e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e720 size=16 callers=0 calls=0
*/
void sub_d7e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e720ULL || rel >= 0xd7e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e730 size=16 callers=0 calls=0
*/
void sub_d7e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e730ULL || rel >= 0xd7e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e740 size=304 callers=1 calls=0
*/
void sub_d7e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e740ULL || rel >= 0xd7e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e870 size=224 callers=1 calls=2
   calls: sub_e76a20, sub_e9d130
*/
void sub_d7e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e870ULL || rel >= 0xd7e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7e950 size=368 callers=0 calls=0
*/
void sub_d7e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e950ULL || rel >= 0xd7eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7eac0 size=784 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7eac0ULL || rel >= 0xd7edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7edd0 size=208 callers=9 calls=2
   calls: sub_c60e50, sub_d7eea0
*/
void sub_d7edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7edd0ULL || rel >= 0xd7eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7eea0 size=496 callers=11 calls=2
   calls: sub_13a5bb0, sub_d7f2a0
*/
void sub_d7eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7eea0ULL || rel >= 0xd7f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f090 size=304 callers=3 calls=2
   calls: sub_c60e50, sub_d7eea0
*/
void sub_d7f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f090ULL || rel >= 0xd7f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f1c0 size=224 callers=1 calls=2
   calls: sub_c60e50, sub_d7eea0
*/
void sub_d7f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f1c0ULL || rel >= 0xd7f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f2a0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d82350, sub_e9db40
*/
void sub_d7f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f2a0ULL || rel >= 0xd7f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f3c0 size=496 callers=1 calls=2
   calls: sub_13a5bb0, sub_d7f5b0
*/
void sub_d7f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f3c0ULL || rel >= 0xd7f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f5b0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d82350, sub_e9da70
*/
void sub_d7f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f5b0ULL || rel >= 0xd7f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f6d0 size=320 callers=2 calls=3
   calls: sub_1c0, sub_c60e50, sub_e9d130
*/
void sub_d7f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f6d0ULL || rel >= 0xd7f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f810 size=16 callers=0 calls=0
*/
void sub_d7f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f810ULL || rel >= 0xd7f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f820 size=80 callers=0 calls=0
*/
void sub_d7f820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f820ULL || rel >= 0xd7f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d7f870 size=4208 callers=0 calls=28
   calls: Play_UI_Common_PM_Encount_FX, sub_12a25b0, sub_12a26a0, sub_13a5bb0, sub_13ca950, sub_13ed240, sub_13fb9a0, sub_14023b0, sub_1c0, sub_794330, sub_969be0, sub_9733f0
   ... +16 more
*/
void sub_d7f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7f870ULL || rel >= 0xd808e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d808e0 size=2384 callers=1 calls=1
   calls: sub_972c70
*/
void sub_d808e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd808e0ULL || rel >= 0xd81230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81230 size=544 callers=2 calls=6
   calls: sub_13ca950, sub_13ed240, sub_9733f0, sub_990590, sub_d42e80, sub_d82760
*/
void sub_d81230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81230ULL || rel >= 0xd81450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81450 size=912 callers=1 calls=6
   calls: sub_135a1a0, sub_135a3c0, sub_794330, sub_c44410, sub_c445f0, sub_d81c30
   ref: Play_UI_Common_PM_Encount_FX
   ref: Play_UI_bag_ananuke
*/
void Play_UI_Common_PM_Encount_FX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81450ULL || rel >= 0xd817e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d817e0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d82430, sub_e9db40
*/
void sub_d817e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd817e0ULL || rel >= 0xd81900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81900 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d82510, sub_e9db40
*/
void sub_d81900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81900ULL || rel >= 0xd81a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81a20 size=512 callers=1 calls=4
   calls: sub_13fba40, sub_c43ed0, sub_d25c50, sub_d81e20
*/
void sub_d81a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81a20ULL || rel >= 0xd81c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81c20 size=16 callers=0 calls=0
*/
void sub_d81c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81c20ULL || rel >= 0xd81c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81c30 size=496 callers=1 calls=3
   calls: sub_135a1a0, sub_135a2d0, sub_c44410
*/
void sub_d81c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81c30ULL || rel >= 0xd81e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81e20 size=320 callers=1 calls=4
   calls: sub_135a1a0, sub_135a3c0, sub_c43ed0, sub_c44510
*/
void sub_d81e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81e20ULL || rel >= 0xd81f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81f60 size=112 callers=0 calls=0
*/
void sub_d81f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81f60ULL || rel >= 0xd81fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d81fd0 size=112 callers=0 calls=0
*/
void sub_d81fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81fd0ULL || rel >= 0xd82040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82040 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d82040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82040ULL || rel >= 0xd820b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d820b0 size=112 callers=0 calls=0
*/
void sub_d820b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd820b0ULL || rel >= 0xd82120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82120 size=112 callers=0 calls=0
*/
void sub_d82120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82120ULL || rel >= 0xd82190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82190 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d82190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82190ULL || rel >= 0xd82200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82200 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d82200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82200ULL || rel >= 0xd82270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82270 size=112 callers=0 calls=0
*/
void sub_d82270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82270ULL || rel >= 0xd822e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d822e0 size=112 callers=0 calls=0
*/
void sub_d822e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd822e0ULL || rel >= 0xd82350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82350 size=224 callers=2 calls=1
   calls: sub_d7f6d0
*/
void sub_d82350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82350ULL || rel >= 0xd82430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82430 size=224 callers=1 calls=1
   calls: sub_d843f0
*/
void sub_d82430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82430ULL || rel >= 0xd82510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82510 size=352 callers=1 calls=2
   calls: sub_c60e50, sub_e9d130
*/
void sub_d82510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82510ULL || rel >= 0xd82670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82670 size=192 callers=0 calls=2
   calls: sub_12a25b0, sub_12a26a0
*/
void sub_d82670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82670ULL || rel >= 0xd82730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82730 size=16 callers=0 calls=0
*/
void sub_d82730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82730ULL || rel >= 0xd82740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82740 size=16 callers=0 calls=0
*/
void sub_d82740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82740ULL || rel >= 0xd82750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82750 size=16 callers=0 calls=0
*/
void sub_d82750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82750ULL || rel >= 0xd82760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82760 size=224 callers=1 calls=1
   calls: sub_d82840
*/
void sub_d82760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82760ULL || rel >= 0xd82840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82840 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d82840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82840ULL || rel >= 0xd828b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d828b0 size=544 callers=0 calls=9
   calls: sub_59a520, sub_59b250, sub_5b9400, sub_b4a5e0, sub_d82ad0, sub_d82c90, sub_d82e70, sub_d830e0, sub_d832a0
*/
void sub_d828b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd828b0ULL || rel >= 0xd82ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82ad0 size=448 callers=1 calls=3
   calls: sub_5cc540, sub_b33a30, sub_b4c060
*/
void sub_d82ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82ad0ULL || rel >= 0xd82c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82c90 size=480 callers=1 calls=4
   calls: sub_59a520, sub_971950, sub_972c70, sub_b4a5e0
*/
void sub_d82c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82c90ULL || rel >= 0xd82e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d82e70 size=624 callers=1 calls=3
   calls: sub_65d220, sub_971950, sub_d45cd0
*/
void sub_d82e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82e70ULL || rel >= 0xd830e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

