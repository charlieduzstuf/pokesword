/* main functions 00e3b630..00e66780 (112 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00e3b630 size=64 callers=0 calls=0
*/
void sub_e3b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b630ULL || rel >= 0xe3b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b670 size=32 callers=1 calls=1
   calls: sub_ead710
*/
void sub_e3b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b670ULL || rel >= 0xe3b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b690 size=64 callers=0 calls=0
   ref: bin/test/nest_hole/net_nest_hole_drop_rewards.bin
*/
void net_nest_hole_drop_rewards(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b690ULL || rel >= 0xe3b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b6d0 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e3b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b6d0ULL || rel >= 0xe3b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b710 size=32 callers=0 calls=0
*/
void sub_e3b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b710ULL || rel >= 0xe3b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b730 size=48 callers=0 calls=0
*/
void sub_e3b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b730ULL || rel >= 0xe3b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b760 size=32 callers=0 calls=0
*/
void sub_e3b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b760ULL || rel >= 0xe3b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b780 size=48 callers=0 calls=0
*/
void sub_e3b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b780ULL || rel >= 0xe3b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b7b0 size=16 callers=0 calls=0
*/
void sub_e3b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b7b0ULL || rel >= 0xe3b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b7c0 size=272 callers=0 calls=1
   calls: sub_ead710
*/
void sub_e3b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b7c0ULL || rel >= 0xe3b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b8d0 size=64 callers=0 calls=0
*/
void sub_e3b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b8d0ULL || rel >= 0xe3b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b910 size=32 callers=0 calls=1
   calls: sub_ead710
*/
void sub_e3b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b910ULL || rel >= 0xe3b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b930 size=64 callers=0 calls=0
   ref: bin/test/nest_hole/net_nest_hole_bonus_rewards.bin
*/
void net_nest_hole_bonus_rewards(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b930ULL || rel >= 0xe3b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b970 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e3b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b970ULL || rel >= 0xe3b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b9b0 size=32 callers=0 calls=0
*/
void sub_e3b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b9b0ULL || rel >= 0xe3b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3b9d0 size=48 callers=0 calls=0
*/
void sub_e3b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b9d0ULL || rel >= 0xe3ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ba00 size=32 callers=0 calls=0
*/
void sub_e3ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ba00ULL || rel >= 0xe3ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ba20 size=48 callers=0 calls=0
*/
void sub_e3ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ba20ULL || rel >= 0xe3ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ba50 size=16 callers=0 calls=0
*/
void sub_e3ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ba50ULL || rel >= 0xe3ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ba60 size=288 callers=0 calls=1
   calls: sub_ead710
*/
void sub_e3ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ba60ULL || rel >= 0xe3bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3bb80 size=64 callers=4 calls=0
*/
void sub_e3bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3bb80ULL || rel >= 0xe3bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3bbc0 size=128 callers=1 calls=1
   calls: sub_ead710
*/
void sub_e3bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3bbc0ULL || rel >= 0xe3bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3bc40 size=128 callers=1 calls=1
   calls: sub_ead710
*/
void sub_e3bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3bc40ULL || rel >= 0xe3bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3bcc0 size=32 callers=1 calls=1
   calls: sub_ead710
*/
void sub_e3bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3bcc0ULL || rel >= 0xe3bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3bce0 size=64 callers=0 calls=0
   ref: bin/test/nest_hole/net_nest_hole_normal_encount.bin
*/
void net_nest_hole_normal_encount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3bce0ULL || rel >= 0xe3bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3bd20 size=368 callers=0 calls=0
*/
void sub_e3bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3bd20ULL || rel >= 0xe3be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3be90 size=544 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/field/param/pokecenter/recovery.bin
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
*/
void skybox_01_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3be90ULL || rel >= 0xe3c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c0b0 size=176 callers=2 calls=0
*/
void sub_e3c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c0b0ULL || rel >= 0xe3c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c160 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e3c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c160ULL || rel >= 0xe3c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c230 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e3c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c230ULL || rel >= 0xe3c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c300 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e3c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c300ULL || rel >= 0xe3c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c3d0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e3c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c3d0ULL || rel >= 0xe3c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c4a0 size=320 callers=1 calls=4
   calls: sub_5dd790, sub_5e2930, sub_8c2c10, sub_c50b30
*/
void sub_e3c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c4a0ULL || rel >= 0xe3c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c5e0 size=32 callers=1 calls=0
*/
void sub_e3c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c5e0ULL || rel >= 0xe3c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c600 size=688 callers=1 calls=0
*/
void sub_e3c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c600ULL || rel >= 0xe3c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c8b0 size=112 callers=1 calls=1
   calls: sub_c75ec0
*/
void sub_e3c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c8b0ULL || rel >= 0xe3c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c920 size=16 callers=0 calls=0
*/
void sub_e3c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c920ULL || rel >= 0xe3c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c930 size=112 callers=0 calls=1
   calls: sub_e3cbc0
*/
void sub_e3c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c930ULL || rel >= 0xe3c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c9a0 size=16 callers=0 calls=0
*/
void sub_e3c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c9a0ULL || rel >= 0xe3c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c9b0 size=16 callers=0 calls=0
*/
void sub_e3c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c9b0ULL || rel >= 0xe3c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3c9c0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_e3c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c9c0ULL || rel >= 0xe3cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3cab0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_e3cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3cab0ULL || rel >= 0xe3cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3cba0 size=16 callers=0 calls=0
*/
void sub_e3cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3cba0ULL || rel >= 0xe3cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3cbb0 size=16 callers=0 calls=0
*/
void sub_e3cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3cbb0ULL || rel >= 0xe3cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3cbc0 size=176 callers=1 calls=1
   calls: sub_967240
*/
void sub_e3cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3cbc0ULL || rel >= 0xe3cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3cc70 size=336 callers=1 calls=5
   calls: sub_1307dd0, sub_136b790, sub_137b8b0, sub_5cfad0, sub_c4ac70
   ref: script/common_scr.dat
*/
void common_scr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3cc70ULL || rel >= 0xe3cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3cdc0 size=16 callers=0 calls=0
*/
void sub_e3cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3cdc0ULL || rel >= 0xe3cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3cdd0 size=144 callers=1 calls=0
*/
void sub_e3cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3cdd0ULL || rel >= 0xe3ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ce60 size=128 callers=1 calls=0
*/
void sub_e3ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ce60ULL || rel >= 0xe3cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3cee0 size=320 callers=1 calls=3
   calls: sub_136b790, sub_137b8b0, sub_14dfa90
*/
void sub_e3cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3cee0ULL || rel >= 0xe3d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d020 size=144 callers=1 calls=0
*/
void sub_e3d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d020ULL || rel >= 0xe3d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d0b0 size=128 callers=1 calls=1
   calls: sub_1308340
*/
void sub_e3d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d0b0ULL || rel >= 0xe3d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d130 size=448 callers=2 calls=5
   calls: sub_1307dd0, sub_1308340, sub_14dfa90, sub_5cfad0, sub_c4ac70
   ref: script/common_scr.dat
*/
void common_scr_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d130ULL || rel >= 0xe3d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d2f0 size=128 callers=0 calls=0
*/
void sub_e3d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d2f0ULL || rel >= 0xe3d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d370 size=352 callers=2 calls=3
   calls: sub_5e2350, sub_67b990, sub_6835f0
*/
void sub_e3d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d370ULL || rel >= 0xe3d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d4d0 size=256 callers=0 calls=0
*/
void sub_e3d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d4d0ULL || rel >= 0xe3d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d5d0 size=16 callers=0 calls=0
*/
void sub_e3d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d5d0ULL || rel >= 0xe3d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d5e0 size=16 callers=0 calls=0
*/
void sub_e3d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d5e0ULL || rel >= 0xe3d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d5f0 size=16 callers=0 calls=0
*/
void sub_e3d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d5f0ULL || rel >= 0xe3d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d600 size=16 callers=0 calls=0
*/
void sub_e3d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d600ULL || rel >= 0xe3d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d610 size=16 callers=0 calls=0
*/
void sub_e3d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d610ULL || rel >= 0xe3d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d620 size=416 callers=1 calls=4
   calls: color_unselect_2, sub_13cec50, sub_14b3270, sub_ea3d10
*/
void sub_e3d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d620ULL || rel >= 0xe3d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3d7c0 size=2048 callers=1 calls=12
   calls: sub_14aad40, sub_14abc90, sub_14ad840, sub_15009f0, sub_1500d10, sub_17ac790, sub_5e2bc0, sub_685230, sub_c48c70, sub_e3f0f0, sub_e81d70, sub_e857e0
   ref: color_select
   ref: color_unselect
*/
void color_unselect_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d7c0ULL || rel >= 0xe3dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3dfc0 size=32 callers=2 calls=0
*/
void sub_e3dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3dfc0ULL || rel >= 0xe3dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3dfe0 size=32 callers=5 calls=0
*/
void sub_e3dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3dfe0ULL || rel >= 0xe3e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e000 size=272 callers=2 calls=3
   calls: sub_13083a0, sub_67d080, sub_67d450
*/
void sub_e3e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e000ULL || rel >= 0xe3e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e110 size=80 callers=7 calls=5
   calls: sub_14a8fd0, sub_1500d30, sub_1500e30, sub_e3e160, sub_ea3d10
*/
void sub_e3e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e110ULL || rel >= 0xe3e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e160 size=272 callers=1 calls=3
   calls: sub_1308340, sub_67d080, sub_67d450
*/
void sub_e3e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e160ULL || rel >= 0xe3e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e270 size=272 callers=0 calls=2
   calls: sub_14a92b0, sub_5cfad0
*/
void sub_e3e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e270ULL || rel >= 0xe3e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e380 size=48 callers=4 calls=1
   calls: sub_14a91c0
*/
void sub_e3e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e380ULL || rel >= 0xe3e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e3b0 size=16 callers=2 calls=0
*/
void sub_e3e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e3b0ULL || rel >= 0xe3e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e3c0 size=32 callers=7 calls=1
   calls: sub_14a92b0
*/
void sub_e3e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e3c0ULL || rel >= 0xe3e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e3e0 size=176 callers=9 calls=1
   calls: sub_14a92b0
*/
void sub_e3e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e3e0ULL || rel >= 0xe3e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e490 size=672 callers=5 calls=5
   calls: sub_1311c60, sub_14e3670, sub_67b990, sub_67d450, sub_93c570
*/
void sub_e3e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e490ULL || rel >= 0xe3e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e730 size=672 callers=3 calls=5
   calls: sub_1311c60, sub_14e3670, sub_67b990, sub_67d080, sub_93c570
*/
void sub_e3e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e730ULL || rel >= 0xe3e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3e9d0 size=784 callers=5 calls=7
   calls: sub_13083a0, sub_1311c60, sub_14e3670, sub_67b990, sub_67d080, sub_67d450, sub_93c570
*/
void sub_e3e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3e9d0ULL || rel >= 0xe3ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ece0 size=176 callers=4 calls=2
   calls: sub_14e3680, sub_93c570
*/
void sub_e3ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ece0ULL || rel >= 0xe3ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ed90 size=240 callers=2 calls=4
   calls: sub_14e4040, sub_14e4920, sub_1500c40, sub_93c570
*/
void sub_e3ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ed90ULL || rel >= 0xe3ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ee80 size=32 callers=2 calls=0
*/
void sub_e3ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ee80ULL || rel >= 0xe3eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3eea0 size=144 callers=1 calls=2
   calls: sub_14e4d30, sub_93c570
*/
void sub_e3eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3eea0ULL || rel >= 0xe3ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3ef30 size=160 callers=1 calls=3
   calls: Play_UI_common_decide_5, sub_14e4190, sub_93c570
*/
void sub_e3ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3ef30ULL || rel >= 0xe3efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3efd0 size=16 callers=1 calls=0
*/
void sub_e3efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3efd0ULL || rel >= 0xe3efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3efe0 size=240 callers=0 calls=0
*/
void sub_e3efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3efe0ULL || rel >= 0xe3f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f0d0 size=16 callers=0 calls=0
*/
void sub_e3f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f0d0ULL || rel >= 0xe3f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f0e0 size=16 callers=0 calls=0
*/
void sub_e3f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f0e0ULL || rel >= 0xe3f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f0f0 size=224 callers=3 calls=1
   calls: Play_UI_common_decide_3
*/
void sub_e3f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f0f0ULL || rel >= 0xe3f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f1d0 size=16 callers=0 calls=0
*/
void sub_e3f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f1d0ULL || rel >= 0xe3f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f1e0 size=16 callers=0 calls=0
*/
void sub_e3f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f1e0ULL || rel >= 0xe3f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f1f0 size=16 callers=0 calls=0
*/
void sub_e3f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f1f0ULL || rel >= 0xe3f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f200 size=16 callers=0 calls=0
*/
void sub_e3f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f200ULL || rel >= 0xe3f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f210 size=528 callers=0 calls=1
   calls: sub_7a3a10
*/
void sub_e3f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f210ULL || rel >= 0xe3f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f420 size=16 callers=0 calls=0
*/
void sub_e3f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f420ULL || rel >= 0xe3f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f430 size=16 callers=0 calls=0
*/
void sub_e3f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f430ULL || rel >= 0xe3f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f440 size=16 callers=0 calls=0
*/
void sub_e3f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f440ULL || rel >= 0xe3f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f450 size=128 callers=0 calls=0
*/
void sub_e3f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f450ULL || rel >= 0xe3f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f4d0 size=176 callers=2 calls=2
   calls: sub_5e2350, sub_e40470
*/
void sub_e3f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f4d0ULL || rel >= 0xe3f580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f580 size=384 callers=0 calls=0
*/
void sub_e3f580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f580ULL || rel >= 0xe3f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f700 size=16 callers=0 calls=0
*/
void sub_e3f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f700ULL || rel >= 0xe3f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f710 size=16 callers=0 calls=0
*/
void sub_e3f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f710ULL || rel >= 0xe3f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f720 size=16 callers=0 calls=0
*/
void sub_e3f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f720ULL || rel >= 0xe3f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f730 size=16 callers=0 calls=0
*/
void sub_e3f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f730ULL || rel >= 0xe3f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f740 size=16 callers=0 calls=0
*/
void sub_e3f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f740ULL || rel >= 0xe3f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3f750 size=832 callers=1 calls=6
   calls: common_scr, sub_14b31a0, sub_e3fa90, sub_e40670, sub_e40830, sub_e41310
*/
void sub_e3f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f750ULL || rel >= 0xe3fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3fa90 size=528 callers=1 calls=4
   calls: sub_12a25b0, sub_e40750, sub_eb2600, sub_eb2ee0
*/
void sub_e3fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3fa90ULL || rel >= 0xe3fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3fca0 size=432 callers=1 calls=3
   calls: sub_12a25b0, sub_13f8d00, sub_eb5750
*/
void sub_e3fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3fca0ULL || rel >= 0xe3fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e3fe50 size=1040 callers=5 calls=5
   calls: sub_12a25b0, sub_13e4fc0, sub_e3d620, sub_e40ea0, sub_e40f80
*/
void sub_e3fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3fe50ULL || rel >= 0xe40260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40260 size=256 callers=4 calls=0
*/
void sub_e40260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40260ULL || rel >= 0xe40360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40360 size=240 callers=0 calls=0
*/
void sub_e40360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40360ULL || rel >= 0xe40450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40450 size=16 callers=0 calls=0
*/
void sub_e40450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40450ULL || rel >= 0xe40460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40460 size=16 callers=0 calls=0
*/
void sub_e40460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40460ULL || rel >= 0xe40470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40470 size=512 callers=1 calls=0
*/
void sub_e40470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40470ULL || rel >= 0xe40670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40670 size=224 callers=1 calls=1
   calls: sub_e412b0
*/
void sub_e40670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40670ULL || rel >= 0xe40750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40750 size=224 callers=1 calls=1
   calls: sub_e41340
*/
void sub_e40750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40750ULL || rel >= 0xe40830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40830 size=416 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_e40830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40830ULL || rel >= 0xe409d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e409d0 size=160 callers=0 calls=0
*/
void sub_e409d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe409d0ULL || rel >= 0xe40a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40a70 size=160 callers=0 calls=0
*/
void sub_e40a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40a70ULL || rel >= 0xe40b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40b10 size=240 callers=0 calls=0
*/
void sub_e40b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40b10ULL || rel >= 0xe40c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40c00 size=160 callers=0 calls=0
*/
void sub_e40c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40c00ULL || rel >= 0xe40ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40ca0 size=160 callers=0 calls=0
*/
void sub_e40ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40ca0ULL || rel >= 0xe40d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40d40 size=16 callers=0 calls=0
*/
void sub_e40d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40d40ULL || rel >= 0xe40d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40d50 size=16 callers=0 calls=0
*/
void sub_e40d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40d50ULL || rel >= 0xe40d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40d60 size=160 callers=0 calls=0
*/
void sub_e40d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40d60ULL || rel >= 0xe40e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40e00 size=160 callers=0 calls=0
*/
void sub_e40e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40e00ULL || rel >= 0xe40ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40ea0 size=224 callers=1 calls=1
   calls: sub_e3d370
*/
void sub_e40ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40ea0ULL || rel >= 0xe40f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e40f80 size=336 callers=1 calls=0
*/
void sub_e40f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40f80ULL || rel >= 0xe410d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e410d0 size=480 callers=0 calls=0
*/
void sub_e410d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe410d0ULL || rel >= 0xe412b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e412b0 size=96 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_e412b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe412b0ULL || rel >= 0xe41310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41310 size=16 callers=1 calls=0
*/
void sub_e41310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41310ULL || rel >= 0xe41320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41320 size=32 callers=0 calls=0
*/
void sub_e41320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41320ULL || rel >= 0xe41340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41340 size=64 callers=2 calls=1
   calls: sub_eb2c80
*/
void sub_e41340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41340ULL || rel >= 0xe41380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41380 size=96 callers=0 calls=2
   calls: sub_eb50f0, sub_ee49b0
*/
void sub_e41380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41380ULL || rel >= 0xe413e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e413e0 size=16 callers=0 calls=0
*/
void sub_e413e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe413e0ULL || rel >= 0xe413f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e413f0 size=16 callers=0 calls=0
*/
void sub_e413f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe413f0ULL || rel >= 0xe41400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41400 size=32 callers=0 calls=0
*/
void sub_e41400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41400ULL || rel >= 0xe41420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41420 size=32 callers=0 calls=0
*/
void sub_e41420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41420ULL || rel >= 0xe41440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41440 size=80 callers=0 calls=0
*/
void sub_e41440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41440ULL || rel >= 0xe41490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41490 size=112 callers=0 calls=1
   calls: sub_e41990
*/
void sub_e41490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41490ULL || rel >= 0xe41500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41500 size=80 callers=0 calls=0
*/
void sub_e41500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41500ULL || rel >= 0xe41550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41550 size=80 callers=0 calls=0
*/
void sub_e41550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41550ULL || rel >= 0xe415a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e415a0 size=112 callers=0 calls=1
   calls: sub_e41990
*/
void sub_e415a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe415a0ULL || rel >= 0xe41610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41610 size=112 callers=0 calls=1
   calls: sub_e41990
*/
void sub_e41610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41610ULL || rel >= 0xe41680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41680 size=80 callers=0 calls=0
*/
void sub_e41680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41680ULL || rel >= 0xe416d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e416d0 size=80 callers=0 calls=0
*/
void sub_e416d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe416d0ULL || rel >= 0xe41720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41720 size=96 callers=0 calls=0
*/
void sub_e41720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41720ULL || rel >= 0xe41780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41780 size=96 callers=0 calls=0
*/
void sub_e41780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41780ULL || rel >= 0xe417e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e417e0 size=16 callers=0 calls=0
*/
void sub_e417e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe417e0ULL || rel >= 0xe417f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e417f0 size=96 callers=0 calls=0
*/
void sub_e417f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe417f0ULL || rel >= 0xe41850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41850 size=96 callers=0 calls=0
*/
void sub_e41850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41850ULL || rel >= 0xe418b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e418b0 size=16 callers=0 calls=0
*/
void sub_e418b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe418b0ULL || rel >= 0xe418c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e418c0 size=16 callers=0 calls=0
*/
void sub_e418c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe418c0ULL || rel >= 0xe418d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e418d0 size=96 callers=0 calls=0
*/
void sub_e418d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe418d0ULL || rel >= 0xe41930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41930 size=96 callers=0 calls=0
*/
void sub_e41930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41930ULL || rel >= 0xe41990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41990 size=240 callers=3 calls=0
*/
void sub_e41990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41990ULL || rel >= 0xe41a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41a80 size=304 callers=0 calls=0
*/
void sub_e41a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41a80ULL || rel >= 0xe41bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41bb0 size=160 callers=1 calls=2
   calls: sub_5e2350, sub_c18a60
*/
void sub_e41bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41bb0ULL || rel >= 0xe41c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41c50 size=160 callers=0 calls=0
*/
void sub_e41c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41c50ULL || rel >= 0xe41cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41cf0 size=160 callers=0 calls=0
*/
void sub_e41cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41cf0ULL || rel >= 0xe41d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41d90 size=160 callers=0 calls=0
*/
void sub_e41d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41d90ULL || rel >= 0xe41e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41e30 size=160 callers=0 calls=0
*/
void sub_e41e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41e30ULL || rel >= 0xe41ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41ed0 size=160 callers=0 calls=0
*/
void sub_e41ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41ed0ULL || rel >= 0xe41f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e41f70 size=160 callers=0 calls=0
*/
void sub_e41f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe41f70ULL || rel >= 0xe42010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42010 size=80 callers=1 calls=0
*/
void sub_e42010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42010ULL || rel >= 0xe42060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42060 size=64 callers=1 calls=0
*/
void sub_e42060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42060ULL || rel >= 0xe420a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e420a0 size=16 callers=1 calls=0
*/
void sub_e420a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe420a0ULL || rel >= 0xe420b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e420b0 size=16 callers=2 calls=0
*/
void sub_e420b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe420b0ULL || rel >= 0xe420c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e420c0 size=16 callers=2 calls=0
*/
void sub_e420c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe420c0ULL || rel >= 0xe420d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e420d0 size=240 callers=0 calls=0
*/
void sub_e420d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe420d0ULL || rel >= 0xe421c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e421c0 size=16 callers=0 calls=0
*/
void sub_e421c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe421c0ULL || rel >= 0xe421d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e421d0 size=16 callers=0 calls=0
*/
void sub_e421d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe421d0ULL || rel >= 0xe421e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e421e0 size=160 callers=3 calls=0
*/
void sub_e421e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe421e0ULL || rel >= 0xe42280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42280 size=16 callers=2 calls=0
*/
void sub_e42280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42280ULL || rel >= 0xe42290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42290 size=1344 callers=1 calls=18
   calls: L_cursor_00_3, sub_1308200, sub_13083a0, sub_13e4b50, sub_13e50b0, sub_14a91a0, sub_14a91c0, sub_14a92b0, sub_e3dfe0, sub_e3e110, sub_e3e380, sub_e3e3c0
   ... +6 more
*/
void sub_e42290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42290ULL || rel >= 0xe427d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e427d0 size=128 callers=0 calls=0
*/
void sub_e427d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe427d0ULL || rel >= 0xe42850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42850 size=608 callers=1 calls=0
*/
void sub_e42850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42850ULL || rel >= 0xe42ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42ab0 size=624 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e42ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42ab0ULL || rel >= 0xe42d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42d20 size=16 callers=0 calls=0
*/
void sub_e42d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42d20ULL || rel >= 0xe42d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42d30 size=496 callers=1 calls=4
   calls: sub_1306f20, sub_5e26a0, sub_5e2930, sub_96bb80
*/
void sub_e42d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42d30ULL || rel >= 0xe42f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e42f20 size=336 callers=1 calls=2
   calls: sub_e43ae0, sub_e43b50
*/
void sub_e42f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe42f20ULL || rel >= 0xe43070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43070 size=752 callers=1 calls=2
   calls: sub_e43c70, sub_e44040
*/
void sub_e43070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43070ULL || rel >= 0xe43360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43360 size=272 callers=1 calls=2
   calls: sub_e43470, sub_e43c20
*/
void sub_e43360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43360ULL || rel >= 0xe43470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43470 size=192 callers=2 calls=0
*/
void sub_e43470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43470ULL || rel >= 0xe43530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43530 size=240 callers=1 calls=1
   calls: sub_e43c30
*/
void sub_e43530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43530ULL || rel >= 0xe43620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43620 size=240 callers=0 calls=5
   calls: sub_e43710, sub_e43990, sub_e43ca0, sub_e44000, sub_e44050
*/
void sub_e43620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43620ULL || rel >= 0xe43710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43710 size=640 callers=1 calls=1
   calls: sub_e43c70
*/
void sub_e43710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43710ULL || rel >= 0xe43990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43990 size=336 callers=1 calls=3
   calls: sub_59bee0, sub_612ef0, sub_967240
*/
void sub_e43990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43990ULL || rel >= 0xe43ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43ae0 size=112 callers=1 calls=1
   calls: sub_5d8ee0
*/
void sub_e43ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43ae0ULL || rel >= 0xe43b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43b50 size=208 callers=1 calls=4
   calls: sub_12f6140, sub_5d99d0, sub_68da40, sub_68da90
*/
void sub_e43b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43b50ULL || rel >= 0xe43c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43c20 size=16 callers=15 calls=0
*/
void sub_e43c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43c20ULL || rel >= 0xe43c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43c30 size=64 callers=15 calls=1
   calls: sub_68da30
*/
void sub_e43c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43c30ULL || rel >= 0xe43c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43c70 size=48 callers=32 calls=1
   calls: sub_68da30
*/
void sub_e43c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43c70ULL || rel >= 0xe43ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e43ca0 size=864 callers=1 calls=2
   calls: sub_612f70, sub_967240
*/
void sub_e43ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe43ca0ULL || rel >= 0xe44000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44000 size=64 callers=1 calls=1
   calls: sub_68d9f0
*/
void sub_e44000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44000ULL || rel >= 0xe44040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44040 size=16 callers=16 calls=0
*/
void sub_e44040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44040ULL || rel >= 0xe44050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44050 size=16 callers=1 calls=0
*/
void sub_e44050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44050ULL || rel >= 0xe44060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44060 size=112 callers=0 calls=0
*/
void sub_e44060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44060ULL || rel >= 0xe440d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e440d0 size=112 callers=0 calls=0
*/
void sub_e440d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe440d0ULL || rel >= 0xe44140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44140 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_e44140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44140ULL || rel >= 0xe441f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e441f0 size=112 callers=0 calls=0
*/
void sub_e441f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe441f0ULL || rel >= 0xe44260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44260 size=112 callers=0 calls=0
*/
void sub_e44260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44260ULL || rel >= 0xe442d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e442d0 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_e442d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe442d0ULL || rel >= 0xe44380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44380 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_e44380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44380ULL || rel >= 0xe44430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44430 size=112 callers=0 calls=0
*/
void sub_e44430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44430ULL || rel >= 0xe444a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e444a0 size=112 callers=0 calls=0
*/
void sub_e444a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe444a0ULL || rel >= 0xe44510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44510 size=832 callers=2 calls=8
   calls: sub_5cf8e0, sub_5cf8f0, sub_5dd790, sub_5e26a0, sub_5e2930, sub_65f110, sub_65f1c0, sub_e884e0
   ref: bin/field/param/weather/weather_data.bin
*/
void weather_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44510ULL || rel >= 0xe44850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44850 size=736 callers=2 calls=3
   calls: sub_68f170, sub_68f670, sub_969e30
*/
void sub_e44850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44850ULL || rel >= 0xe44b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44b30 size=160 callers=2 calls=0
*/
void sub_e44b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44b30ULL || rel >= 0xe44bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44bd0 size=176 callers=3 calls=0
*/
void sub_e44bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44bd0ULL || rel >= 0xe44c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44c80 size=288 callers=2 calls=2
   calls: sub_68f650, sub_c5abb0
*/
void sub_e44c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44c80ULL || rel >= 0xe44da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44da0 size=96 callers=3 calls=0
*/
void sub_e44da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44da0ULL || rel >= 0xe44e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44e00 size=16 callers=7 calls=0
*/
void sub_e44e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44e00ULL || rel >= 0xe44e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e44e10 size=6544 callers=3 calls=7
   calls: sub_5cfad0, sub_7ff150, sub_c46830, sub_c5adb0, sub_e467a0, sub_e47200, sub_e47400
   ref: Set_State_BattleRain
   ref: Set_State_SandStorm
   ref: Set_State_BattleCloud
   ref: Set_State_HeavyRain
   ref: Set_State_Blizzard
   ref: Set_State_Drought
   ref: Set_State_BattleSandStorm
   ref: Set_State_Fog
*/
void Set_State_BattleSunny(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44e10ULL || rel >= 0xe467a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e467a0 size=592 callers=1 calls=0
*/
void sub_e467a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe467a0ULL || rel >= 0xe469f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e469f0 size=80 callers=1 calls=1
   calls: Set_State_BattleSunny
*/
void sub_e469f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe469f0ULL || rel >= 0xe46a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e46a40 size=320 callers=8 calls=4
   calls: Set_State_BattleSunny, sub_e47220, sub_e47260, sub_e472a0
*/
void sub_e46a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe46a40ULL || rel >= 0xe46b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e46b80 size=32 callers=1 calls=0
*/
void sub_e46b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe46b80ULL || rel >= 0xe46ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e46ba0 size=256 callers=2 calls=1
   calls: sub_e47350
*/
void sub_e46ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe46ba0ULL || rel >= 0xe46ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e46ca0 size=96 callers=10 calls=0
*/
void sub_e46ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe46ca0ULL || rel >= 0xe46d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e46d00 size=208 callers=5 calls=1
   calls: sub_68ef10
*/
void sub_e46d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe46d00ULL || rel >= 0xe46dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e46dd0 size=784 callers=0 calls=3
   calls: sub_5cf8f0, sub_5e2bc0, sub_65f110
*/
void sub_e46dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe46dd0ULL || rel >= 0xe470e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e470e0 size=16 callers=0 calls=0
*/
void sub_e470e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe470e0ULL || rel >= 0xe470f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e470f0 size=16 callers=0 calls=0
*/
void sub_e470f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe470f0ULL || rel >= 0xe47100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47100 size=16 callers=0 calls=0
*/
void sub_e47100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47100ULL || rel >= 0xe47110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47110 size=16 callers=0 calls=0
*/
void sub_e47110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47110ULL || rel >= 0xe47120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47120 size=16 callers=0 calls=0
*/
void sub_e47120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47120ULL || rel >= 0xe47130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47130 size=16 callers=0 calls=0
*/
void sub_e47130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47130ULL || rel >= 0xe47140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47140 size=32 callers=0 calls=0
*/
void sub_e47140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47140ULL || rel >= 0xe47160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47160 size=160 callers=1 calls=0
*/
void sub_e47160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47160ULL || rel >= 0xe47200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47200 size=32 callers=1 calls=0
*/
void sub_e47200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47200ULL || rel >= 0xe47220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47220 size=64 callers=1 calls=0
*/
void sub_e47220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47220ULL || rel >= 0xe47260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47260 size=64 callers=1 calls=0
*/
void sub_e47260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47260ULL || rel >= 0xe472a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e472a0 size=176 callers=2 calls=0
*/
void sub_e472a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe472a0ULL || rel >= 0xe47350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47350 size=16 callers=1 calls=0
*/
void sub_e47350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47350ULL || rel >= 0xe47360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47360 size=16 callers=0 calls=0
*/
void sub_e47360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47360ULL || rel >= 0xe47370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47370 size=16 callers=0 calls=0
*/
void sub_e47370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47370ULL || rel >= 0xe47380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47380 size=16 callers=0 calls=0
*/
void sub_e47380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47380ULL || rel >= 0xe47390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47390 size=16 callers=0 calls=0
*/
void sub_e47390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47390ULL || rel >= 0xe473a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e473a0 size=16 callers=0 calls=0
*/
void sub_e473a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe473a0ULL || rel >= 0xe473b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e473b0 size=16 callers=0 calls=0
*/
void sub_e473b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe473b0ULL || rel >= 0xe473c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e473c0 size=16 callers=0 calls=0
*/
void sub_e473c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe473c0ULL || rel >= 0xe473d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e473d0 size=16 callers=0 calls=0
*/
void sub_e473d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe473d0ULL || rel >= 0xe473e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e473e0 size=16 callers=0 calls=0
*/
void sub_e473e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe473e0ULL || rel >= 0xe473f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e473f0 size=16 callers=0 calls=0
*/
void sub_e473f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe473f0ULL || rel >= 0xe47400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47400 size=848 callers=1 calls=2
   calls: sub_e47160, sub_e47750
*/
void sub_e47400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47400ULL || rel >= 0xe47750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47750 size=1168 callers=1 calls=0
*/
void sub_e47750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47750ULL || rel >= 0xe47be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47be0 size=688 callers=0 calls=4
   calls: sub_5e2bc0, sub_e47e90, sub_e480d0, sub_e48270
*/
void sub_e47be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47be0ULL || rel >= 0xe47e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e47e90 size=576 callers=12 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_619640, sub_68d9f0, sub_e4a650
*/
void sub_e47e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47e90ULL || rel >= 0xe480d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e480d0 size=416 callers=1 calls=0
*/
void sub_e480d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe480d0ULL || rel >= 0xe48270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e48270 size=624 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_e48270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe48270ULL || rel >= 0xe484e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e484e0 size=16 callers=0 calls=0
*/
void sub_e484e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe484e0ULL || rel >= 0xe484f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e484f0 size=16 callers=0 calls=0
*/
void sub_e484f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe484f0ULL || rel >= 0xe48500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e48500 size=16 callers=0 calls=0
*/
void sub_e48500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe48500ULL || rel >= 0xe48510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e48510 size=1328 callers=0 calls=7
   calls: sub_5e2930, sub_96bb80, sub_986200, sub_e48a40, sub_ea0fd0, sub_ea9cc0, sub_eaf6b0
*/
void sub_e48510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe48510ULL || rel >= 0xe48a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e48a40 size=464 callers=7 calls=4
   calls: sub_5d99d0, sub_68d630, sub_68da40, sub_98eec0
*/
void sub_e48a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe48a40ULL || rel >= 0xe48c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e48c10 size=240 callers=0 calls=2
   calls: sub_c59120, sub_e48d00
*/
void sub_e48c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe48c10ULL || rel >= 0xe48d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e48d00 size=960 callers=7 calls=6
   calls: sub_5cf8e0, sub_5cf8f0, sub_619640, sub_68d950, sub_68da30, sub_695420
*/
void sub_e48d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe48d00ULL || rel >= 0xe490c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e490c0 size=2368 callers=0 calls=22
   calls: sub_13f68d0, sub_5c6830, sub_5c6850, sub_5c68f0, sub_5c6930, sub_5c8dd0, sub_5d99d0, sub_68d630, sub_68d950, sub_68d9f0, sub_68da30, sub_68da40
   ... +10 more
*/
void sub_e490c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe490c0ULL || rel >= 0xe49a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e49a00 size=912 callers=1 calls=7
   calls: sub_13f68d0, sub_68da30, sub_e47e90, sub_e48a40, sub_e48d00, sub_e49e10, sub_eaf6b0
*/
void sub_e49a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe49a00ULL || rel >= 0xe49d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e49d90 size=128 callers=0 calls=1
   calls: sub_e49e10
*/
void sub_e49d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe49d90ULL || rel >= 0xe49e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e49e10 size=576 callers=7 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_619640, sub_68d9b0
*/
void sub_e49e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe49e10ULL || rel >= 0xe4a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4a050 size=64 callers=0 calls=0
*/
void sub_e4a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a050ULL || rel >= 0xe4a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4a090 size=64 callers=0 calls=1
   calls: sub_c59120
*/
void sub_e4a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a090ULL || rel >= 0xe4a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4a0d0 size=1392 callers=1 calls=0
*/
void sub_e4a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a0d0ULL || rel >= 0xe4a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4a640 size=16 callers=0 calls=0
*/
void sub_e4a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a640ULL || rel >= 0xe4a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4a650 size=752 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_619640, sub_e4a940
*/
void sub_e4a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a650ULL || rel >= 0xe4a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4a940 size=384 callers=2 calls=1
   calls: sub_619640
*/
void sub_e4a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4a940ULL || rel >= 0xe4aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4aac0 size=864 callers=1 calls=8
   calls: sub_65d700, sub_e4ae20, sub_e4afa0, sub_e4b0e0, sub_e4b290, sub_e4b440, sub_e4b5f0, unit_obj_tent02_gfbmdl
*/
void sub_e4aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4aac0ULL || rel >= 0xe4ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4ae20 size=384 callers=1 calls=2
   calls: sub_e52d10, sub_e52e60
*/
void sub_e4ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4ae20ULL || rel >= 0xe4afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4afa0 size=320 callers=3 calls=1
   calls: sub_e53140
*/
void sub_e4afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4afa0ULL || rel >= 0xe4b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4b0e0 size=432 callers=1 calls=0
*/
void sub_e4b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4b0e0ULL || rel >= 0xe4b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4b290 size=432 callers=1 calls=0
*/
void sub_e4b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4b290ULL || rel >= 0xe4b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4b440 size=432 callers=1 calls=0
*/
void sub_e4b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4b440ULL || rel >= 0xe4b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4b5f0 size=432 callers=1 calls=0
*/
void sub_e4b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4b5f0ULL || rel >= 0xe4b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4b7a0 size=976 callers=1 calls=9
   calls: sub_c5d8a0, sub_c5dd90, sub_d2b260, sub_d2b3f0, sub_d2b660, sub_d2dcc0, sub_e4d7e0, sub_e4d960, sub_e4dba0
   ref: bin/field/model/unit_obj/unit_obj_tent02/unit_obj_tent02.gfbmdl
   ref: bin/field/model/unit_obj/unit_obj_tent02/unit_obj_tent02.gfbanmcfg
   ref: bin/field/effect/particle/ef_env_wr0101/ef_env_wr0101_noroshi.ptcl
*/
void unit_obj_tent02_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4b7a0ULL || rel >= 0xe4bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4bb70 size=400 callers=0 calls=0
*/
void sub_e4bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4bb70ULL || rel >= 0xe4bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4bd00 size=704 callers=0 calls=0
*/
void sub_e4bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4bd00ULL || rel >= 0xe4bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4bfc0 size=336 callers=0 calls=0
*/
void sub_e4bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4bfc0ULL || rel >= 0xe4c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4c110 size=16 callers=0 calls=0
*/
void sub_e4c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c110ULL || rel >= 0xe4c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4c120 size=368 callers=1 calls=0
*/
void sub_e4c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c120ULL || rel >= 0xe4c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4c290 size=192 callers=1 calls=4
   calls: sub_135a1a0, sub_e4c670, sub_e4d480, sub_e4d630
*/
void sub_e4c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c290ULL || rel >= 0xe4c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4c350 size=96 callers=1 calls=2
   calls: sub_e4d480, sub_e4d630
*/
void sub_e4c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c350ULL || rel >= 0xe4c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4c3b0 size=16 callers=2 calls=0
*/
void sub_e4c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c3b0ULL || rel >= 0xe4c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4c3c0 size=672 callers=1 calls=6
   calls: Remove_Because_over_max_InernetPrevTargetConnection, sub_106deb0, sub_10783f0, sub_e4cc60, sub_e4d320, sub_e53300
*/
void sub_e4c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c3c0ULL || rel >= 0xe4c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4c660 size=16 callers=1 calls=0
*/
void sub_e4c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c660ULL || rel >= 0xe4c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4c670 size=1504 callers=1 calls=14
   calls: Disconnected, sub_10759b0, sub_1076260, sub_1078410, sub_10784a0, sub_c9f940, sub_e4cc60, sub_e50770, sub_e508b0, sub_e509f0, sub_e50d30, sub_e53730
   ... +2 more
*/
void sub_e4c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c670ULL || rel >= 0xe4cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4cc50 size=16 callers=1 calls=0
*/
void sub_e4cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4cc50ULL || rel >= 0xe4cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4cc60 size=352 callers=87 calls=1
   calls: sub_13a6920
*/
void sub_e4cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4cc60ULL || rel >= 0xe4cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4cdc0 size=1376 callers=3 calls=6
   calls: sub_1048890, sub_10489f0, sub_1064d50, sub_106deb0, sub_10f67c0, sub_10f7b90
   ref: Remove Because over max InernetPrevTargetConnection
*/
void Remove_Because_over_max_InernetPrevTargetConnection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4cdc0ULL || rel >= 0xe4d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4d320 size=352 callers=6 calls=1
   calls: sub_13a6920
*/
void sub_e4d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4d320ULL || rel >= 0xe4d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4d480 size=432 callers=2 calls=11
   calls: sub_10488c0, sub_1062350, sub_1062360, sub_1064d50, sub_1076130, sub_1078410, sub_10784a0, sub_1078630, sub_10f67c0, sub_e4dd60, sub_e4e150
*/
void sub_e4d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4d480ULL || rel >= 0xe4d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4d630 size=432 callers=2 calls=8
   calls: TENT__s, sub_106dd10, sub_10759a0, sub_1076260, sub_10783f0, sub_1078410, sub_c9f940, sub_e4cc60
*/
void sub_e4d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4d630ULL || rel >= 0xe4d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4d7e0 size=384 callers=2 calls=5
   calls: sub_c5dd90, sub_d2b260, sub_d2bdf0, sub_d2bfc0, sub_d2cf90
*/
void sub_e4d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4d7e0ULL || rel >= 0xe4d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4d960 size=576 callers=1 calls=8
   calls: sub_9733f0, sub_c5dd90, sub_c5e420, sub_d2b260, sub_d2bdf0, sub_e52390, sub_e527d0, sub_e52990
*/
void sub_e4d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4d960ULL || rel >= 0xe4dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4dba0 size=448 callers=1 calls=8
   calls: sub_c5da80, sub_c5dd90, sub_c5e0f0, sub_c5e2b0, sub_c5e420, sub_d2b260, sub_d2b660, sub_e52b50
*/
void sub_e4dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4dba0ULL || rel >= 0xe4dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4dd60 size=1008 callers=2 calls=4
   calls: sub_1048890, sub_10488b0, sub_106dda0, sub_1075f10
*/
void sub_e4dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4dd60ULL || rel >= 0xe4e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4e150 size=3760 callers=6 calls=10
   calls: Disconnected, sub_106dd10, sub_1076140, sub_10783f0, sub_1078410, sub_b2fb20, sub_d693b0, sub_e4cc60, sub_e53500, sub_e53730
*/
void sub_e4e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4e150ULL || rel >= 0xe4f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4f000 size=2800 callers=2 calls=19
   calls: sub_106de90, sub_106dea0, sub_106fd00, sub_10783f0, sub_1078400, sub_13a6920, sub_c68270, sub_cc6e80, sub_cf0ed0, sub_cf10f0, sub_d693b0, sub_e4cc60
   ... +7 more
   ref: TENT_%s
   ref: %s_%016lx_%016lx
   ref: CHARA_%s
   ref: %02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x
   ref: BICYCLE_%s
*/
void TENT__s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4f000ULL || rel >= 0xe4faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4faf0 size=496 callers=1 calls=12
   calls: sub_1064970, sub_1064e20, sub_106bb10, sub_106bb20, sub_106bb30, sub_106bb40, sub_106bb50, sub_106dfd0, sub_1078630, sub_e4e150, sub_e4fce0, sub_e50240
   ref: Created
   ref: Deleted
   ref: Online
   ref: Offline
*/
void Offline(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4faf0ULL || rel >= 0xe4fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e4fce0 size=1376 callers=1 calls=9
   calls: sub_1048890, sub_10488c0, sub_1064d50, sub_106dd10, sub_106deb0, sub_10f67c0, sub_10f7b30, sub_e4dd60, sub_e4e150
*/
void sub_e4fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4fce0ULL || rel >= 0xe50240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e50240 size=1136 callers=2 calls=4
   calls: Disconnected, sub_106dd10, sub_10783f0, sub_e53730
*/
void sub_e50240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe50240ULL || rel >= 0xe506b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e506b0 size=192 callers=3 calls=6
   calls: Remove_Because_over_max_InernetPrevTargetConnection, sub_106deb0, sub_10783f0, sub_1078630, sub_e4cc60, sub_e4d320
   ref: Disconnected
*/
void Disconnected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe506b0ULL || rel >= 0xe50770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e50770 size=320 callers=1 calls=1
   calls: sub_e4cc60
*/
void sub_e50770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe50770ULL || rel >= 0xe508b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e508b0 size=320 callers=1 calls=1
   calls: sub_e4d320
*/
void sub_e508b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe508b0ULL || rel >= 0xe509f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e509f0 size=832 callers=1 calls=9
   calls: Remove_Because_over_max_InernetPrevTargetConnection, TENT__s, sub_106deb0, sub_10759a0, sub_1076260, sub_1078410, sub_c9f940, sub_e4cc60, sub_e55a20
*/
void sub_e509f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe509f0ULL || rel >= 0xe50d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e50d30 size=704 callers=1 calls=11
   calls: sub_10759a0, sub_10759b0, sub_10759c0, sub_1076150, sub_1076260, sub_1078410, sub_972c70, sub_d699f0, sub_e4cc60, sub_e4d320, sub_e50ff0
*/
void sub_e50d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe50d30ULL || rel >= 0xe50ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e50ff0 size=400 callers=1 calls=3
   calls: sub_10783f0, sub_e51a60, sub_e56230
*/
void sub_e50ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe50ff0ULL || rel >= 0xe51180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e51180 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_d688a0
*/
void sub_e51180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51180ULL || rel >= 0xe51310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e51310 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_d56dd0
*/
void sub_e51310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51310ULL || rel >= 0xe514a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e514a0 size=352 callers=4 calls=1
   calls: sub_13a6920
*/
void sub_e514a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe514a0ULL || rel >= 0xe51600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e51600 size=1120 callers=1 calls=8
   calls: sub_10486d0, sub_1048890, sub_1063760, sub_106dd10, sub_106deb0, sub_10783f0, sub_10f67c0, sub_10f7a20
*/
void sub_e51600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51600ULL || rel >= 0xe51a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e51a60 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_e56970
*/
void sub_e51a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51a60ULL || rel >= 0xe51bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e51bf0 size=16 callers=10 calls=0
*/
void sub_e51bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51bf0ULL || rel >= 0xe51c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e51c00 size=16 callers=2 calls=0
*/
void sub_e51c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51c00ULL || rel >= 0xe51c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e51c10 size=768 callers=5 calls=11
   calls: sub_1064370, sub_1064920, sub_10758d0, sub_10758e0, sub_1075d00, sub_10f67c0, sub_136b840, sub_967240, sub_971950, sub_d260f0, sub_e51f10
*/
void sub_e51c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51c10ULL || rel >= 0xe51f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e51f10 size=1152 callers=1 calls=1
   calls: sub_e56440
*/
void sub_e51f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe51f10ULL || rel >= 0xe52390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e52390 size=640 callers=1 calls=7
   calls: sub_c5d8a0, sub_c5da80, sub_c5dd90, sub_c5e0f0, sub_d2b660, sub_d2cdd0, sub_e52610
*/
void sub_e52390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe52390ULL || rel >= 0xe52610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e52610 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_e52610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe52610ULL || rel >= 0xe527d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e527d0 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_e527d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe527d0ULL || rel >= 0xe52990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e52990 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_e52990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe52990ULL || rel >= 0xe52b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e52b50 size=448 callers=2 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_e52b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe52b50ULL || rel >= 0xe52d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e52d10 size=336 callers=2 calls=0
*/
void sub_e52d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe52d10ULL || rel >= 0xe52e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e52e60 size=736 callers=3 calls=0
*/
void sub_e52e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe52e60ULL || rel >= 0xe53140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e53140 size=448 callers=3 calls=0
*/
void sub_e53140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53140ULL || rel >= 0xe53300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e53300 size=512 callers=3 calls=0
*/
void sub_e53300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53300ULL || rel >= 0xe53500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e53500 size=560 callers=1 calls=2
   calls: sub_e52d10, sub_e52e60
*/
void sub_e53500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53500ULL || rel >= 0xe53730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e53730 size=784 callers=7 calls=0
*/
void sub_e53730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53730ULL || rel >= 0xe53a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e53a40 size=448 callers=1 calls=0
*/
void sub_e53a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53a40ULL || rel >= 0xe53c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e53c00 size=3696 callers=3 calls=8
   calls: sub_10759a0, sub_1076260, sub_1078410, sub_e4cc60, sub_e53c00, sub_e54a70, sub_e551e0, sub_e55600
*/
void sub_e53c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53c00ULL || rel >= 0xe54a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e54a70 size=1088 callers=5 calls=4
   calls: sub_10759a0, sub_1076260, sub_1078410, sub_e4cc60
*/
void sub_e54a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe54a70ULL || rel >= 0xe54eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e54eb0 size=816 callers=2 calls=5
   calls: sub_10759a0, sub_1076260, sub_1078410, sub_e4cc60, sub_e54a70
*/
void sub_e54eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe54eb0ULL || rel >= 0xe551e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e551e0 size=1056 callers=2 calls=5
   calls: sub_10759a0, sub_1076260, sub_1078410, sub_e4cc60, sub_e54eb0
*/
void sub_e551e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe551e0ULL || rel >= 0xe55600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e55600 size=1056 callers=2 calls=7
   calls: sub_10759a0, sub_1076260, sub_1078410, sub_e4cc60, sub_e54a70, sub_e54eb0, sub_e551e0
*/
void sub_e55600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe55600ULL || rel >= 0xe55a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e55a20 size=448 callers=1 calls=0
*/
void sub_e55a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe55a20ULL || rel >= 0xe55be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e55be0 size=528 callers=1 calls=0
*/
void sub_e55be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe55be0ULL || rel >= 0xe55df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e55df0 size=544 callers=1 calls=0
*/
void sub_e55df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe55df0ULL || rel >= 0xe56010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56010 size=544 callers=1 calls=0
*/
void sub_e56010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56010ULL || rel >= 0xe56230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56230 size=528 callers=1 calls=0
*/
void sub_e56230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56230ULL || rel >= 0xe56440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56440 size=432 callers=1 calls=0
*/
void sub_e56440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56440ULL || rel >= 0xe565f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e565f0 size=768 callers=0 calls=1
   calls: sub_e53140
*/
void sub_e565f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe565f0ULL || rel >= 0xe568f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e568f0 size=128 callers=0 calls=0
*/
void sub_e568f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe568f0ULL || rel >= 0xe56970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56970 size=80 callers=1 calls=2
   calls: sub_106dc30, sub_cfee70
*/
void sub_e56970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56970ULL || rel >= 0xe569c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e569c0 size=256 callers=0 calls=1
   calls: sub_c8a780
*/
void sub_e569c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe569c0ULL || rel >= 0xe56ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56ac0 size=176 callers=0 calls=3
   calls: sub_68d950, sub_68da30, sub_c8a970
*/
void sub_e56ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56ac0ULL || rel >= 0xe56b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56b70 size=16 callers=0 calls=0
*/
void sub_e56b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56b70ULL || rel >= 0xe56b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56b80 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e56b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56b80ULL || rel >= 0xe56c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56c60 size=176 callers=0 calls=1
   calls: sub_cff640
*/
void sub_e56c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56c60ULL || rel >= 0xe56d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56d10 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e56d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56d10ULL || rel >= 0xe56df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56df0 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e56df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56df0ULL || rel >= 0xe56ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56ed0 size=176 callers=0 calls=1
   calls: sub_cff640
*/
void sub_e56ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56ed0ULL || rel >= 0xe56f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e56f80 size=176 callers=0 calls=1
   calls: sub_cff640
*/
void sub_e56f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe56f80ULL || rel >= 0xe57030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e57030 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e57030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57030ULL || rel >= 0xe57110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e57110 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e57110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57110ULL || rel >= 0xe571f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e571f0 size=48 callers=0 calls=0
*/
void sub_e571f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe571f0ULL || rel >= 0xe57220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e57220 size=688 callers=1 calls=2
   calls: sub_d2dcc0, sub_e574d0
   ref: bin/field/effect/particle/ef_env_wr0101/ef_env_wr0101_nesuto_rare.ptcl
   ref: bin/field/effect/particle/ef_env_wr0101/ef_env_wr0101_nesuto_nml.ptcl
*/
void ef_env_wr0101_nesuto_rare(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57220ULL || rel >= 0xe574d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e574d0 size=448 callers=2 calls=8
   calls: sub_c5da80, sub_c5dd90, sub_c5e0f0, sub_c5e2b0, sub_c5e420, sub_d2b260, sub_d2b660, sub_e52b50
*/
void sub_e574d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe574d0ULL || rel >= 0xe57690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e57690 size=656 callers=1 calls=3
   calls: sub_ce0, sub_e57920, sub_e579a0
   ref: a_wr0101_nest_hole_emitter_
*/
void a_wr0101_nest_hole_emitter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57690ULL || rel >= 0xe57920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e57920 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_e57920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57920ULL || rel >= 0xe579a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e579a0 size=400 callers=2 calls=2
   calls: sub_cca0a0, sub_e585d0
*/
void sub_e579a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe579a0ULL || rel >= 0xe57b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e57b30 size=1840 callers=1 calls=3
   calls: sub_136c810, sub_c44210, sub_cff640
*/
void sub_e57b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57b30ULL || rel >= 0xe58260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58260 size=592 callers=1 calls=2
   calls: sub_136c810, sub_cff640
*/
void sub_e58260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58260ULL || rel >= 0xe584b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e584b0 size=80 callers=0 calls=0
*/
void sub_e584b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe584b0ULL || rel >= 0xe58500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58500 size=80 callers=0 calls=0
*/
void sub_e58500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58500ULL || rel >= 0xe58550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58550 size=128 callers=0 calls=0
*/
void sub_e58550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58550ULL || rel >= 0xe585d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e585d0 size=176 callers=1 calls=1
   calls: sub_c8a350
*/
void sub_e585d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe585d0ULL || rel >= 0xe58680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58680 size=624 callers=0 calls=2
   calls: sub_793d10, sub_c8a780
*/
void sub_e58680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58680ULL || rel >= 0xe588f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e588f0 size=608 callers=0 calls=8
   calls: Play_Prop_Gimmik_G_nest, sub_17c1bd0, sub_68d950, sub_68d9b0, sub_68d9f0, sub_68da30, sub_794040, sub_c8aa60
   ref: Stop_Prop_Gimmik_G_nest
   ref: particle
   ref: Stop_Prop_Gimmick_G_nest_Rare
*/
void Stop_Prop_Gimmik_G_nest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe588f0ULL || rel >= 0xe58b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58b50 size=208 callers=1 calls=2
   calls: sub_793ea0, sub_794040
   ref: Play_Prop_Gimmik_G_nest
   ref: Play_Prop_Gimmick_G_nest_Rare
*/
void Play_Prop_Gimmik_G_nest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58b50ULL || rel >= 0xe58c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58c20 size=256 callers=0 calls=3
   calls: sub_793de0, sub_794040, sub_c6d5e0
   ref: Stop_Prop_Gimmik_G_nest
   ref: Stop_Prop_Gimmick_G_nest_Rare
*/
void Stop_Prop_Gimmik_G_nest_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58c20ULL || rel >= 0xe58d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58d20 size=336 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e58d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58d20ULL || rel >= 0xe58e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58e70 size=16 callers=0 calls=0
*/
void sub_e58e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58e70ULL || rel >= 0xe58e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58e80 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_e58e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58e80ULL || rel >= 0xe58ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58ef0 size=16 callers=0 calls=0
*/
void sub_e58ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58ef0ULL || rel >= 0xe58f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58f00 size=16 callers=0 calls=0
*/
void sub_e58f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58f00ULL || rel >= 0xe58f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58f10 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_e58f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58f10ULL || rel >= 0xe58f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58f80 size=112 callers=0 calls=1
   calls: sub_cff640
*/
void sub_e58f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58f80ULL || rel >= 0xe58ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e58ff0 size=16 callers=0 calls=0
*/
void sub_e58ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58ff0ULL || rel >= 0xe59000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e59000 size=16 callers=0 calls=0
*/
void sub_e59000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe59000ULL || rel >= 0xe59010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e59010 size=368 callers=4 calls=4
   calls: sub_e3a850, sub_e3a8a0, sub_e3acd0, sub_e3b390
*/
void sub_e59010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe59010ULL || rel >= 0xe59180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e59180 size=32 callers=1 calls=1
   calls: sub_e59010
*/
void sub_e59180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe59180ULL || rel >= 0xe591a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e591a0 size=368 callers=5 calls=4
   calls: sub_e3a840, sub_e3a8a0, sub_e3acb0, sub_e3bb80
*/
void sub_e591a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe591a0ULL || rel >= 0xe59310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e59310 size=288 callers=2 calls=4
   calls: sub_e3a8a0, sub_e3acb0, sub_e3bbc0, sub_e3bc40
*/
void sub_e59310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe59310ULL || rel >= 0xe59430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e59430 size=17328 callers=1 calls=58
   calls: sub_12fa460, sub_136c760, sub_136c880, sub_136c910, sub_762930, sub_762940, sub_762d90, sub_763d00, sub_763dc0, sub_763dd0, sub_763e00, sub_764b40
   ... +46 more
*/
void sub_e59430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe59430ULL || rel >= 0xe5d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5d7e0 size=1712 callers=3 calls=12
   calls: sub_101b7c0, sub_101b810, sub_101b8c0, sub_e3a840, sub_e3a850, sub_e3a8a0, sub_e3aca0, sub_e3acb0, sub_e3acd0, sub_e3b390, sub_e3bb80, sub_ead840
*/
void sub_e5d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5d7e0ULL || rel >= 0xe5de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5de90 size=240 callers=2 calls=1
   calls: sub_96c590
*/
void sub_e5de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5de90ULL || rel >= 0xe5df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5df80 size=176 callers=1 calls=2
   calls: sub_e5e030, sub_e7b660
*/
void sub_e5df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5df80ULL || rel >= 0xe5e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e030 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e60d40, sub_e7b5e0
*/
void sub_e5e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e030ULL || rel >= 0xe5e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e110 size=384 callers=0 calls=2
   calls: sub_5e2bc0, sub_e5e290
*/
void sub_e5e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e110ULL || rel >= 0xe5e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e290 size=432 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_e5e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e290ULL || rel >= 0xe5e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e440 size=16 callers=0 calls=0
*/
void sub_e5e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e440ULL || rel >= 0xe5e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e450 size=16 callers=0 calls=0
*/
void sub_e5e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e450ULL || rel >= 0xe5e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e460 size=16 callers=0 calls=0
*/
void sub_e5e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e460ULL || rel >= 0xe5e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e470 size=16 callers=0 calls=0
*/
void sub_e5e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e470ULL || rel >= 0xe5e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e480 size=16 callers=0 calls=0
*/
void sub_e5e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e480ULL || rel >= 0xe5e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5e490 size=1648 callers=0 calls=16
   calls: sub_104e040, sub_105c390, sub_5dd790, sub_5e2930, sub_78f150, sub_78f240, sub_79b250, sub_96dd80, sub_9bafd0, sub_e5eb00, sub_e60b10, sub_e612a0
   ... +4 more
   ref: CommonOptionBar
   ref: bin/appli/xmenu/data_table/xmenu_timeline.prmb
   ref: bin/appli/townmap/bin/map_destination_data.prmb
   ref: common/xmenu.dat
   ref: common/townmap_target.dat
   ref: FieldMenuView
   ref: FieldMenuRotomView
   ref: common/xmenu_timeline.dat
*/
void FieldMenuRotomView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e490ULL || rel >= 0xe5eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5eb00 size=272 callers=1 calls=3
   calls: sub_e60e40, sub_e61170, sub_e7c160
*/
void sub_e5eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5eb00ULL || rel >= 0xe5ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5ec10 size=48 callers=0 calls=0
*/
void sub_e5ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ec10ULL || rel >= 0xe5ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5ec40 size=672 callers=0 calls=13
   calls: DestinationDataList_2, showCheck, showNum, sub_11061e0, sub_1106200, sub_11063e0, sub_1106f30, sub_135a760, sub_1500ea0, sub_5cfad0, sub_795bc0, sub_e61170
   ... +1 more
   ref: time_line_table
   ref: FieldMenuView
*/
void FieldMenuView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ec40ULL || rel >= 0xe5eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5eee0 size=2624 callers=1 calls=10
   calls: sub_1049d10, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_1299520, sub_12996a0, sub_135a1a0, sub_d631c0
   ref: showCheck
   ref: infoMsg
*/
void showCheck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5eee0ULL || rel >= 0xe5f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5f920 size=16 callers=0 calls=0
*/
void sub_e5f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5f920ULL || rel >= 0xe5f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5f930 size=112 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e5f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5f930ULL || rel >= 0xe5f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5f9a0 size=224 callers=0 calls=2
   calls: sub_e61b60, sub_e7c160
*/
void sub_e5f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5f9a0ULL || rel >= 0xe5fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5fa80 size=1120 callers=0 calls=14
   calls: sub_14aad40, sub_1502120, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0, sub_e61170, sub_e61a10, sub_e61cb0, sub_e65130, sub_e664c0, sub_e807f0
   ... +2 more
   ref: anime_fade_in
   ref: FieldMenuView
   ref: FieldMenuState
   ref: FieldMenuRotomView
*/
void FieldMenuRotomView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5fa80ULL || rel >= 0xe5fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e5fee0 size=1824 callers=0 calls=16
   calls: sub_14aad40, sub_14ab2b0, sub_1502120, sub_5cfad0, sub_e61170, sub_e64070, sub_e64780, sub_e649d0, sub_e64ab0, sub_e64b40, sub_e664c0, sub_e80580
   ... +4 more
   ref: anime_in
   ref: anime_out
   ref: anime_fade_out
*/
void anime_fade_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5fee0ULL || rel >= 0xe60600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60600 size=16 callers=0 calls=0
*/
void sub_e60600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60600ULL || rel >= 0xe60610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60610 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e60610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60610ULL || rel >= 0xe606c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e606c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e606c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe606c0ULL || rel >= 0xe60770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60770 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e60770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60770ULL || rel >= 0xe60820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60820 size=16 callers=0 calls=0
*/
void sub_e60820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60820ULL || rel >= 0xe60830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60830 size=16 callers=0 calls=0
*/
void sub_e60830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60830ULL || rel >= 0xe60840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60840 size=16 callers=0 calls=0
*/
void sub_e60840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60840ULL || rel >= 0xe60850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60850 size=16 callers=0 calls=0
*/
void sub_e60850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60850ULL || rel >= 0xe60860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60860 size=16 callers=0 calls=0
*/
void sub_e60860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60860ULL || rel >= 0xe60870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60870 size=16 callers=0 calls=0
*/
void sub_e60870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60870ULL || rel >= 0xe60880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60880 size=16 callers=0 calls=0
*/
void sub_e60880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60880ULL || rel >= 0xe60890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60890 size=16 callers=0 calls=0
*/
void sub_e60890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60890ULL || rel >= 0xe608a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e608a0 size=48 callers=0 calls=1
   calls: sub_e5e290
*/
void sub_e608a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe608a0ULL || rel >= 0xe608d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e608d0 size=96 callers=0 calls=1
   calls: sub_e60b10
*/
void sub_e608d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe608d0ULL || rel >= 0xe60930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60930 size=16 callers=0 calls=0
*/
void sub_e60930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60930ULL || rel >= 0xe60940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60940 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_e60940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60940ULL || rel >= 0xe609f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e609f0 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_e609f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe609f0ULL || rel >= 0xe60ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60ac0 size=16 callers=0 calls=0
*/
void sub_e60ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60ac0ULL || rel >= 0xe60ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60ad0 size=16 callers=0 calls=0
*/
void sub_e60ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60ad0ULL || rel >= 0xe60ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60ae0 size=16 callers=0 calls=0
*/
void sub_e60ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60ae0ULL || rel >= 0xe60af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60af0 size=32 callers=0 calls=0
*/
void sub_e60af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60af0ULL || rel >= 0xe60b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60b10 size=256 callers=3 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_e60b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60b10ULL || rel >= 0xe60c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60c10 size=304 callers=0 calls=0
*/
void sub_e60c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60c10ULL || rel >= 0xe60d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60d40 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_e60d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60d40ULL || rel >= 0xe60e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60e40 size=400 callers=1 calls=3
   calls: sub_11061d0, sub_1298170, sub_e7c210
*/
void sub_e60e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60e40ULL || rel >= 0xe60fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e60fd0 size=288 callers=0 calls=2
   calls: sub_1299fa0, sub_5e2bc0
*/
void sub_e60fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60fd0ULL || rel >= 0xe610f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e610f0 size=16 callers=0 calls=0
*/
void sub_e610f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe610f0ULL || rel >= 0xe61100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61100 size=16 callers=0 calls=0
*/
void sub_e61100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61100ULL || rel >= 0xe61110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61110 size=16 callers=0 calls=0
*/
void sub_e61110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61110ULL || rel >= 0xe61120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61120 size=16 callers=0 calls=0
*/
void sub_e61120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61120ULL || rel >= 0xe61130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61130 size=16 callers=0 calls=0
*/
void sub_e61130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61130ULL || rel >= 0xe61140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61140 size=16 callers=0 calls=0
*/
void sub_e61140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61140ULL || rel >= 0xe61150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61150 size=16 callers=0 calls=0
*/
void sub_e61150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61150ULL || rel >= 0xe61160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61160 size=16 callers=0 calls=0
*/
void sub_e61160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61160ULL || rel >= 0xe61170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61170 size=304 callers=4 calls=0
*/
void sub_e61170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61170ULL || rel >= 0xe612a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e612a0 size=288 callers=1 calls=2
   calls: sub_e613c0, sub_e809c0
*/
void sub_e612a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe612a0ULL || rel >= 0xe613c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e613c0 size=384 callers=1 calls=3
   calls: sub_790490, sub_e61540, sub_e7fe20
*/
void sub_e613c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe613c0ULL || rel >= 0xe61540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61540 size=384 callers=1 calls=1
   calls: anonymous_2
*/
void sub_e61540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61540ULL || rel >= 0xe616c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e616c0 size=288 callers=1 calls=2
   calls: sub_e617e0, sub_e809c0
*/
void sub_e616c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe616c0ULL || rel >= 0xe617e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e617e0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_e617e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe617e0ULL || rel >= 0xe61a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61a10 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_e61a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61a10ULL || rel >= 0xe61b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61b60 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_e61b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61b60ULL || rel >= 0xe61cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61cb0 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_e61cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61cb0ULL || rel >= 0xe61e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e61e00 size=2688 callers=3 calls=8
   calls: showNum, showNum_2, showNum_3, showNum_4, showNum_5, sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
*/
void showNum(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61e00ULL || rel >= 0xe62880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e62880 size=800 callers=6 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
*/
void showNum_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe62880ULL || rel >= 0xe62ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e62ba0 size=624 callers=3 calls=4
   calls: showNum_2, sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
*/
void showNum_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe62ba0ULL || rel >= 0xe62e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e62e10 size=816 callers=3 calls=4
   calls: showNum_3, sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
*/
void showNum_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe62e10ULL || rel >= 0xe63140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e63140 size=896 callers=2 calls=6
   calls: showNum_2, showNum_3, showNum_4, sub_1106320, sub_11063e0, sub_11065b0
   ref: showNum
*/
void showNum_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe63140ULL || rel >= 0xe634c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e634c0 size=160 callers=0 calls=0
*/
void sub_e634c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe634c0ULL || rel >= 0xe63560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e63560 size=1456 callers=0 calls=10
   calls: Play_UI_common_menu_scroll, Play_UI_pbox_error_2, sub_14aad40, sub_5cfad0, sub_d634d0, sub_e61cb0, sub_e63b10, sub_e7eb10, sub_e83d70, sub_e840a0
   ref: map_button
   ref: save_button
   ref: swap_button
   ref: grid_00
   ref: Play_UI_pbox_error
   ref: FieldMenuRotomView
   ref: cancel_button
   ref: close_button
*/
void Play_UI_pbox_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe63560ULL || rel >= 0xe63b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e63b10 size=1376 callers=1 calls=4
   calls: sub_135a1a0, sub_13969b0, sub_13969d0, sub_e64890
*/
void sub_e63b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe63b10ULL || rel >= 0xe64070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e64070 size=80 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_e64070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe64070ULL || rel >= 0xe640c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e640c0 size=656 callers=1 calls=1
   calls: sub_14e6bc0
   ref: Play_UI_common_menu_scroll
*/
void Play_UI_common_menu_scroll(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe640c0ULL || rel >= 0xe64350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e64350 size=1072 callers=12 calls=12
   calls: sub_135a1a0, sub_14aad40, sub_14ac370, sub_14e1a30, sub_14e6d90, sub_5cfad0, sub_67d450, sub_d634d0, sub_d63550, sub_e83430, sub_e83930, sub_e83e60
   ref: Play_UI_pbox_error
*/
void Play_UI_pbox_error_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe64350ULL || rel >= 0xe64780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e64780 size=272 callers=1 calls=1
   calls: sub_13969a0
*/
void sub_e64780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe64780ULL || rel >= 0xe64890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e64890 size=320 callers=1 calls=1
   calls: sub_135a1a0
*/
void sub_e64890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe64890ULL || rel >= 0xe649d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e649d0 size=224 callers=1 calls=5
   calls: sub_14aad40, sub_14ab2b0, sub_14e6540, sub_14e6550, sub_1500c40
*/
void sub_e649d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe649d0ULL || rel >= 0xe64ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e64ab0 size=144 callers=1 calls=4
   calls: sub_14aad40, sub_14e6540, sub_14e6550, sub_1500c40
*/
void sub_e64ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe64ab0ULL || rel >= 0xe64b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e64b40 size=336 callers=2 calls=0
*/
void sub_e64b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe64b40ULL || rel >= 0xe64c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e64c90 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/xmenu/bin/uikit_setting_xmenu_top_00.bin
   ref: bin/appli/xmenu/bin/xmenu_top_00_lyt.bin
*/
void xmenu_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe64c90ULL || rel >= 0xe64e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e64e70 size=704 callers=0 calls=6
   calls: anime_fade_out_2, sub_14e68e0, sub_14e69a0, sub_1500c40, sub_5cfad0, sub_d634d0
*/
void sub_e64e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe64e70ULL || rel >= 0xe65130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65130 size=752 callers=1 calls=4
   calls: sub_14e1a00, sub_14ea4f0, sub_67d450, sub_eb7b00
*/
void sub_e65130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65130ULL || rel >= 0xe65420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65420 size=224 callers=0 calls=5
   calls: sub_14aad40, sub_14e67f0, sub_14e69a0, sub_14eaaf0, sub_1500c40
*/
void sub_e65420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65420ULL || rel >= 0xe65500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65500 size=752 callers=1 calls=7
   calls: sub_135a1a0, sub_14aad40, sub_1500c40, sub_c44410, sub_d634d0, sub_d63550, sub_e833a0
   ref: anime_fade_out
*/
void anime_fade_out_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65500ULL || rel >= 0xe657f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e657f0 size=96 callers=0 calls=0
*/
void sub_e657f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe657f0ULL || rel >= 0xe65850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65850 size=96 callers=0 calls=0
*/
void sub_e65850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65850ULL || rel >= 0xe658b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e658b0 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_e658b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe658b0ULL || rel >= 0xe65920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65920 size=96 callers=0 calls=0
*/
void sub_e65920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65920ULL || rel >= 0xe65980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65980 size=96 callers=0 calls=0
*/
void sub_e65980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65980ULL || rel >= 0xe659e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e659e0 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_e659e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe659e0ULL || rel >= 0xe65a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65a50 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_e65a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65a50ULL || rel >= 0xe65ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65ac0 size=96 callers=0 calls=0
*/
void sub_e65ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65ac0ULL || rel >= 0xe65b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65b20 size=96 callers=0 calls=0
*/
void sub_e65b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65b20ULL || rel >= 0xe65b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65b80 size=192 callers=0 calls=4
   calls: sub_14e68e0, sub_14e6ac0, sub_1502120, sub_5cfad0
*/
void sub_e65b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65b80ULL || rel >= 0xe65c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65c40 size=16 callers=0 calls=0
*/
void sub_e65c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65c40ULL || rel >= 0xe65c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65c50 size=16 callers=0 calls=0
*/
void sub_e65c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65c50ULL || rel >= 0xe65c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65c60 size=16 callers=0 calls=0
*/
void sub_e65c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65c60ULL || rel >= 0xe65c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65c70 size=224 callers=0 calls=3
   calls: sub_14e68e0, sub_14e69a0, sub_5cfad0
*/
void sub_e65c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65c70ULL || rel >= 0xe65d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65d50 size=16 callers=0 calls=0
*/
void sub_e65d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65d50ULL || rel >= 0xe65d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65d60 size=16 callers=0 calls=0
*/
void sub_e65d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65d60ULL || rel >= 0xe65d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65d70 size=16 callers=0 calls=0
*/
void sub_e65d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65d70ULL || rel >= 0xe65d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65d80 size=128 callers=0 calls=4
   calls: sub_14e68e0, sub_1500c40, sub_1502120, sub_5cfad0
*/
void sub_e65d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65d80ULL || rel >= 0xe65e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65e00 size=16 callers=0 calls=0
*/
void sub_e65e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65e00ULL || rel >= 0xe65e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65e10 size=16 callers=0 calls=0
*/
void sub_e65e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65e10ULL || rel >= 0xe65e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65e20 size=16 callers=0 calls=0
*/
void sub_e65e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65e20ULL || rel >= 0xe65e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65e30 size=272 callers=0 calls=3
   calls: sub_13969c0, sub_14aad40, sub_14e6540
*/
void sub_e65e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65e30ULL || rel >= 0xe65f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65f40 size=16 callers=0 calls=0
*/
void sub_e65f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65f40ULL || rel >= 0xe65f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65f50 size=16 callers=0 calls=0
*/
void sub_e65f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65f50ULL || rel >= 0xe65f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65f60 size=16 callers=0 calls=0
*/
void sub_e65f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65f60ULL || rel >= 0xe65f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e65f70 size=656 callers=0 calls=4
   calls: sub_14aad40, sub_1500c40, sub_5cfad0, sub_d634d0
   ref: Play_UI_pbox_error
*/
void Play_UI_pbox_error_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65f70ULL || rel >= 0xe66200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66200 size=16 callers=0 calls=0
*/
void sub_e66200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66200ULL || rel >= 0xe66210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66210 size=16 callers=0 calls=0
*/
void sub_e66210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66210ULL || rel >= 0xe66220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66220 size=16 callers=0 calls=0
*/
void sub_e66220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66220ULL || rel >= 0xe66230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66230 size=192 callers=0 calls=1
   calls: Play_UI_pbox_error_2
*/
void sub_e66230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66230ULL || rel >= 0xe662f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e662f0 size=16 callers=0 calls=0
*/
void sub_e662f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe662f0ULL || rel >= 0xe66300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66300 size=16 callers=0 calls=0
*/
void sub_e66300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66300ULL || rel >= 0xe66310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66310 size=16 callers=0 calls=0
*/
void sub_e66310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66310ULL || rel >= 0xe66320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66320 size=32 callers=0 calls=0
*/
void sub_e66320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66320ULL || rel >= 0xe66340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66340 size=16 callers=0 calls=0
*/
void sub_e66340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66340ULL || rel >= 0xe66350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66350 size=16 callers=0 calls=0
*/
void sub_e66350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66350ULL || rel >= 0xe66360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66360 size=16 callers=0 calls=0
*/
void sub_e66360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66360ULL || rel >= 0xe66370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66370 size=160 callers=0 calls=0
*/
void sub_e66370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66370ULL || rel >= 0xe66410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66410 size=176 callers=0 calls=2
   calls: sub_14aad40, sub_e664c0
*/
void sub_e66410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66410ULL || rel >= 0xe664c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e664c0 size=368 callers=5 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_e664c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe664c0ULL || rel >= 0xe66630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66630 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/xmenu/bin/xmenu_rotom_00_lyt.bin
*/
void xmenu_rotom_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66630ULL || rel >= 0xe66740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66740 size=16 callers=0 calls=0
*/
void sub_e66740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66740ULL || rel >= 0xe66750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66750 size=16 callers=0 calls=0
*/
void sub_e66750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66750ULL || rel >= 0xe66760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66760 size=16 callers=0 calls=0
*/
void sub_e66760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66760ULL || rel >= 0xe66770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66770 size=16 callers=0 calls=0
*/
void sub_e66770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66770ULL || rel >= 0xe66780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66780 size=16 callers=0 calls=0
*/
void sub_e66780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66780ULL || rel >= 0xe66790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

