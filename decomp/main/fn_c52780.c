/* main functions 00c52780..00c7a0b0 (98 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00c52780 size=752 callers=7 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750, sub_c52a70
*/
void sub_c52780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52780ULL || rel >= 0xc52a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52a70 size=384 callers=2 calls=1
   calls: sub_607750
*/
void sub_c52a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52a70ULL || rel >= 0xc52bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52bf0 size=80 callers=2 calls=1
   calls: sub_5db1b0
*/
void sub_c52bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52bf0ULL || rel >= 0xc52c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52c40 size=448 callers=5 calls=5
   calls: sub_59b090, sub_59b0c0, sub_59b0d0, sub_59b100, sub_59b130
*/
void sub_c52c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52c40ULL || rel >= 0xc52e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52e00 size=96 callers=5 calls=2
   calls: sub_59b090, sub_59b100
*/
void sub_c52e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52e00ULL || rel >= 0xc52e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52e60 size=176 callers=0 calls=2
   calls: sub_59b100, sub_59b130
*/
void sub_c52e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52e60ULL || rel >= 0xc52f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52f10 size=176 callers=0 calls=2
   calls: sub_59b100, sub_59b130
*/
void sub_c52f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52f10ULL || rel >= 0xc52fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52fc0 size=144 callers=0 calls=0
*/
void sub_c52fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52fc0ULL || rel >= 0xc53050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53050 size=16 callers=0 calls=0
*/
void sub_c53050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53050ULL || rel >= 0xc53060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53060 size=144 callers=0 calls=0
*/
void sub_c53060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53060ULL || rel >= 0xc530f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c530f0 size=144 callers=0 calls=0
*/
void sub_c530f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc530f0ULL || rel >= 0xc53180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53180 size=16 callers=0 calls=0
*/
void sub_c53180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53180ULL || rel >= 0xc53190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53190 size=16 callers=0 calls=0
*/
void sub_c53190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53190ULL || rel >= 0xc531a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c531a0 size=144 callers=0 calls=0
*/
void sub_c531a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc531a0ULL || rel >= 0xc53230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53230 size=144 callers=0 calls=0
*/
void sub_c53230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53230ULL || rel >= 0xc532c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c532c0 size=304 callers=0 calls=0
*/
void sub_c532c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc532c0ULL || rel >= 0xc533f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c533f0 size=160 callers=0 calls=1
   calls: sub_1c0
   ref: bg_time_zone_type
   ref: bg_time_zone_blend_frame
*/
void bg_time_zone_blend_frame(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc533f0ULL || rel >= 0xc53490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53490 size=368 callers=0 calls=0
*/
void sub_c53490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53490ULL || rel >= 0xc53600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53600 size=512 callers=0 calls=0
*/
void sub_c53600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53600ULL || rel >= 0xc53800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53800 size=16 callers=0 calls=0
*/
void sub_c53800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53800ULL || rel >= 0xc53810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53810 size=16 callers=0 calls=0
*/
void sub_c53810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53810ULL || rel >= 0xc53820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53820 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53820ULL || rel >= 0xc539f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c539f0 size=1376 callers=6 calls=6
   calls: sub_5e1bc0, sub_5e2350, sub_5f8c10, sub_5f8c90, sub_5fe6a0, sub_c5c850
*/
void sub_c539f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc539f0ULL || rel >= 0xc53f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c53f50 size=1648 callers=0 calls=6
   calls: sub_5e2bc0, sub_c54770, sub_c549d0, sub_c556e0, sub_c557e0, sub_c5d4a0
*/
void sub_c53f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc53f50ULL || rel >= 0xc545c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c545c0 size=128 callers=12 calls=1
   calls: sub_c556e0
*/
void sub_c545c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc545c0ULL || rel >= 0xc54640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54640 size=96 callers=4 calls=1
   calls: sub_c557e0
*/
void sub_c54640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54640ULL || rel >= 0xc546a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c546a0 size=48 callers=2 calls=0
*/
void sub_c546a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc546a0ULL || rel >= 0xc546d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c546d0 size=160 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_c546d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc546d0ULL || rel >= 0xc54770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54770 size=608 callers=3 calls=4
   calls: sub_ed34f0, sub_ed3550, sub_ed3ae0, sub_ee72b0
*/
void sub_c54770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54770ULL || rel >= 0xc549d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c549d0 size=368 callers=1 calls=0
*/
void sub_c549d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc549d0ULL || rel >= 0xc54b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54b40 size=16 callers=0 calls=0
*/
void sub_c54b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54b40ULL || rel >= 0xc54b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54b50 size=16 callers=0 calls=0
*/
void sub_c54b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54b50ULL || rel >= 0xc54b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54b60 size=16 callers=0 calls=0
*/
void sub_c54b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54b60ULL || rel >= 0xc54b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54b70 size=16 callers=0 calls=0
*/
void sub_c54b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54b70ULL || rel >= 0xc54b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54b80 size=16 callers=0 calls=0
*/
void sub_c54b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54b80ULL || rel >= 0xc54b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54b90 size=368 callers=6 calls=2
   calls: sub_c54d00, unnamed_27
*/
void sub_c54b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54b90ULL || rel >= 0xc54d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54d00 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_c54d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54d00ULL || rel >= 0xc54db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c54db0 size=1760 callers=1 calls=10
   calls: sub_5dd790, sub_5e2930, sub_793480, sub_c13bd0, sub_c50b30, sub_c5af60, sub_c5b060, sub_c5b100, sub_c5f070, sub_c5f970
   ref: bin/field/draw_env/lightpreset/
   ref: .gfblt
   ref: .gfbpfx
   ref: .gfbfog
*/
void unnamed_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc54db0ULL || rel >= 0xc55490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c55490 size=592 callers=1 calls=4
   calls: sub_5dd790, sub_5e2930, sub_9569e0, sub_c50b30
   ref: bin/field/draw_env/lightpreset/fel_900_00_chara.gfbmad
   ref: bin/field/draw_env/lightpreset/fel_900_03_chara.gfbmad
*/
void fel_900_03_chara_gfbmad(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc55490ULL || rel >= 0xc556e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c556e0 size=256 callers=14 calls=0
*/
void sub_c556e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc556e0ULL || rel >= 0xc557e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c557e0 size=784 callers=14 calls=1
   calls: sub_5e2bc0
*/
void sub_c557e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc557e0ULL || rel >= 0xc55af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c55af0 size=784 callers=11 calls=7
   calls: ProjectionConstant, Set_State_NightTime, sub_620d60, sub_c54770, sub_c55e00, sub_eaf6b0, sub_ed3550
*/
void sub_c55af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc55af0ULL || rel >= 0xc55e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c55e00 size=672 callers=3 calls=2
   calls: sub_64a8d0, sub_64ac50
*/
void sub_c55e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc55e00ULL || rel >= 0xc560a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c560a0 size=9024 callers=2 calls=23
   calls: ProjectionConstant, sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_607550, sub_620d70, sub_64cb70, sub_651870, sub_69d770, sub_794310, sub_794330
   ... +11 more
   ref: Set_State_NightTime
   ref: Set_State_DayTime
   ref: DayTime
*/
void Set_State_NightTime(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc560a0ULL || rel >= 0xc583e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c583e0 size=80 callers=5 calls=1
   calls: Set_State_NightTime
*/
void sub_c583e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc583e0ULL || rel >= 0xc58430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c58430 size=2288 callers=3 calls=2
   calls: sub_c5b1b0, sub_c7fe70
   ref: ProjectionConstant
*/
void ProjectionConstant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc58430ULL || rel >= 0xc58d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c58d20 size=32 callers=3 calls=0
*/
void sub_c58d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc58d20ULL || rel >= 0xc58d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c58d40 size=992 callers=13 calls=0
*/
void sub_c58d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc58d40ULL || rel >= 0xc59120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c59120 size=48 callers=2 calls=0
*/
void sub_c59120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc59120ULL || rel >= 0xc59150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c59150 size=4016 callers=1 calls=0
*/
void sub_c59150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc59150ULL || rel >= 0xc5a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5a100 size=2000 callers=4 calls=1
   calls: sub_c5ae50
*/
void sub_c5a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5a100ULL || rel >= 0xc5a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5a8d0 size=16 callers=6 calls=0
*/
void sub_c5a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5a8d0ULL || rel >= 0xc5a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5a8e0 size=432 callers=3 calls=2
   calls: sub_64e3c0, sub_64e500
*/
void sub_c5a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5a8e0ULL || rel >= 0xc5aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5aa90 size=160 callers=1 calls=0
*/
void sub_c5aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5aa90ULL || rel >= 0xc5ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ab30 size=128 callers=2 calls=1
   calls: sub_69d770
*/
void sub_c5ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ab30ULL || rel >= 0xc5abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5abb0 size=80 callers=3 calls=0
*/
void sub_c5abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5abb0ULL || rel >= 0xc5ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ac00 size=64 callers=1 calls=0
*/
void sub_c5ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ac00ULL || rel >= 0xc5ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ac40 size=32 callers=6 calls=0
*/
void sub_c5ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ac40ULL || rel >= 0xc5ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ac60 size=48 callers=68 calls=0
*/
void sub_c5ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ac60ULL || rel >= 0xc5ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ac90 size=96 callers=5 calls=0
*/
void sub_c5ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ac90ULL || rel >= 0xc5acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5acf0 size=80 callers=2 calls=0
*/
void sub_c5acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5acf0ULL || rel >= 0xc5ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ad40 size=64 callers=5 calls=0
*/
void sub_c5ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ad40ULL || rel >= 0xc5ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ad80 size=48 callers=12 calls=0
*/
void sub_c5ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ad80ULL || rel >= 0xc5adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5adb0 size=160 callers=1 calls=0
*/
void sub_c5adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5adb0ULL || rel >= 0xc5ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ae50 size=272 callers=2 calls=0
*/
void sub_c5ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ae50ULL || rel >= 0xc5af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5af60 size=256 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_c5af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5af60ULL || rel >= 0xc5b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5b060 size=160 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_c5b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5b060ULL || rel >= 0xc5b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5b100 size=176 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_c5b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5b100ULL || rel >= 0xc5b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5b1b0 size=4976 callers=14 calls=16
   calls: sub_65da00, sub_65daf0, sub_c5c520, sub_c5d8a0, sub_c5da80, sub_c5dbc0, sub_c5dd90, sub_c5df80, sub_c5e0f0, sub_c5e420, sub_c5e5d0, sub_c5ed60
   ... +4 more
*/
void sub_c5b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5b1b0ULL || rel >= 0xc5c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5c520 size=544 callers=1 calls=5
   calls: sub_c5da80, sub_c5dd90, sub_c5e2b0, sub_c5e960, sub_c5eb20
*/
void sub_c5c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5c520ULL || rel >= 0xc5c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5c740 size=240 callers=0 calls=0
*/
void sub_c5c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5c740ULL || rel >= 0xc5c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5c830 size=16 callers=0 calls=0
*/
void sub_c5c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5c830ULL || rel >= 0xc5c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5c840 size=16 callers=0 calls=0
*/
void sub_c5c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5c840ULL || rel >= 0xc5c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5c850 size=3024 callers=2 calls=0
*/
void sub_c5c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5c850ULL || rel >= 0xc5d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5d420 size=32 callers=0 calls=0
*/
void sub_c5d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5d420ULL || rel >= 0xc5d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5d440 size=32 callers=0 calls=0
*/
void sub_c5d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5d440ULL || rel >= 0xc5d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5d460 size=32 callers=0 calls=0
*/
void sub_c5d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5d460ULL || rel >= 0xc5d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5d480 size=32 callers=0 calls=0
*/
void sub_c5d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5d480ULL || rel >= 0xc5d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5d4a0 size=560 callers=10 calls=2
   calls: sub_5e2bc0, sub_c5d6d0
*/
void sub_c5d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5d4a0ULL || rel >= 0xc5d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5d6d0 size=464 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_c5d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5d6d0ULL || rel >= 0xc5d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5d8a0 size=480 callers=43 calls=1
   calls: sub_c5da80
*/
void sub_c5d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5d8a0ULL || rel >= 0xc5da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5da80 size=320 callers=116 calls=0
*/
void sub_c5da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5da80ULL || rel >= 0xc5dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5dbc0 size=464 callers=1 calls=1
   calls: sub_c5da80
*/
void sub_c5dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5dbc0ULL || rel >= 0xc5dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5dd90 size=496 callers=26 calls=2
   calls: sub_c5da80, sub_c5df80
*/
void sub_c5dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5dd90ULL || rel >= 0xc5df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5df80 size=368 callers=5 calls=1
   calls: sub_c5da80
*/
void sub_c5df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5df80ULL || rel >= 0xc5e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5e0f0 size=448 callers=10 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_c5e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5e0f0ULL || rel >= 0xc5e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5e2b0 size=368 callers=39 calls=1
   calls: sub_c5da80
*/
void sub_c5e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5e2b0ULL || rel >= 0xc5e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5e420 size=432 callers=8 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_c5e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5e420ULL || rel >= 0xc5e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5e5d0 size=464 callers=1 calls=5
   calls: sub_c5da80, sub_c5dd90, sub_c5e0f0, sub_c5e2b0, sub_c5e7a0
*/
void sub_c5e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5e5d0ULL || rel >= 0xc5e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5e7a0 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_c5e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5e7a0ULL || rel >= 0xc5e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5e960 size=448 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_c5e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5e960ULL || rel >= 0xc5eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5eb20 size=576 callers=2 calls=1
   calls: sub_c5da80
*/
void sub_c5eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5eb20ULL || rel >= 0xc5ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5ed60 size=720 callers=1 calls=2
   calls: sub_c5da80, sub_c5e2b0
*/
void sub_c5ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ed60ULL || rel >= 0xc5f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5f030 size=64 callers=5 calls=1
   calls: sub_c5f030
*/
void sub_c5f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5f030ULL || rel >= 0xc5f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5f070 size=2304 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_69d6e0, sub_df90
*/
void sub_c5f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5f070ULL || rel >= 0xc5f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c5f970 size=2304 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_6517e0, sub_df90
*/
void sub_c5f970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5f970ULL || rel >= 0xc60270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60270 size=16 callers=0 calls=0
*/
void sub_c60270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60270ULL || rel >= 0xc60280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60280 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c60280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60280ULL || rel >= 0xc602b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c602b0 size=16 callers=0 calls=0
*/
void sub_c602b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc602b0ULL || rel >= 0xc602c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c602c0 size=16 callers=0 calls=0
*/
void sub_c602c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc602c0ULL || rel >= 0xc602d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c602d0 size=16 callers=0 calls=0
*/
void sub_c602d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc602d0ULL || rel >= 0xc602e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c602e0 size=1312 callers=0 calls=1
   calls: sub_1c0
   ref: SphereMapColor
   ref: ConstantColorSd0
   ref: SpecularScale
   ref: L1ConstantColor1
   ref: RimColorShadow
   ref: RimStrength
   ref: L1ConstantColorSd0
   ref: ConstantColorSd1
*/
void LightTblIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc602e0ULL || rel >= 0xc60800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60800 size=16 callers=0 calls=0
*/
void sub_c60800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60800ULL || rel >= 0xc60810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60810 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c60810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60810ULL || rel >= 0xc60840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60840 size=16 callers=0 calls=0
*/
void sub_c60840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60840ULL || rel >= 0xc60850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60850 size=16 callers=0 calls=0
*/
void sub_c60850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60850ULL || rel >= 0xc60860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60860 size=16 callers=0 calls=0
*/
void sub_c60860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60860ULL || rel >= 0xc60870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60870 size=384 callers=0 calls=1
   calls: sub_1c0
*/
void sub_c60870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60870ULL || rel >= 0xc609f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c609f0 size=16 callers=0 calls=0
*/
void sub_c609f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc609f0ULL || rel >= 0xc60a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60a00 size=16 callers=0 calls=0
*/
void sub_c60a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60a00ULL || rel >= 0xc60a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60a10 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c60a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60a10ULL || rel >= 0xc60a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60a40 size=16 callers=0 calls=0
*/
void sub_c60a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60a40ULL || rel >= 0xc60a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60a50 size=16 callers=0 calls=0
*/
void sub_c60a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60a50ULL || rel >= 0xc60a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60a60 size=16 callers=0 calls=0
*/
void sub_c60a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60a60ULL || rel >= 0xc60a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60a70 size=336 callers=0 calls=1
   calls: sub_1c0
*/
void sub_c60a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60a70ULL || rel >= 0xc60bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60bc0 size=400 callers=1 calls=0
*/
void sub_c60bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60bc0ULL || rel >= 0xc60d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60d50 size=64 callers=0 calls=0
*/
void sub_c60d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60d50ULL || rel >= 0xc60d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60d90 size=64 callers=0 calls=0
*/
void sub_c60d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60d90ULL || rel >= 0xc60dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60dd0 size=64 callers=0 calls=0
*/
void sub_c60dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60dd0ULL || rel >= 0xc60e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60e10 size=64 callers=0 calls=0
*/
void sub_c60e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60e10ULL || rel >= 0xc60e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60e50 size=64 callers=25 calls=0
*/
void sub_c60e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60e50ULL || rel >= 0xc60e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60e90 size=64 callers=3 calls=0
*/
void sub_c60e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60e90ULL || rel >= 0xc60ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60ed0 size=112 callers=4 calls=0
*/
void sub_c60ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60ed0ULL || rel >= 0xc60f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60f40 size=112 callers=2 calls=0
*/
void sub_c60f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60f40ULL || rel >= 0xc60fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c60fb0 size=80 callers=2 calls=1
   calls: sub_5d8ee0
*/
void sub_c60fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc60fb0ULL || rel >= 0xc61000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61000 size=144 callers=0 calls=0
*/
void sub_c61000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61000ULL || rel >= 0xc61090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61090 size=144 callers=0 calls=0
*/
void sub_c61090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61090ULL || rel >= 0xc61120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61120 size=144 callers=0 calls=0
*/
void sub_c61120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61120ULL || rel >= 0xc611b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c611b0 size=144 callers=0 calls=0
*/
void sub_c611b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc611b0ULL || rel >= 0xc61240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61240 size=144 callers=0 calls=0
*/
void sub_c61240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61240ULL || rel >= 0xc612d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c612d0 size=144 callers=0 calls=0
*/
void sub_c612d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc612d0ULL || rel >= 0xc61360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61360 size=544 callers=4 calls=3
   calls: sub_b334e0, sub_b4c060, sub_ea0fd0
*/
void sub_c61360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61360ULL || rel >= 0xc61580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61580 size=192 callers=4 calls=2
   calls: sub_b33700, sub_b4c060
*/
void sub_c61580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61580ULL || rel >= 0xc61640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61640 size=1216 callers=4 calls=12
   calls: sub_619060, sub_6194a0, sub_619640, sub_b33510, sub_b33570, sub_b33760, sub_b33800, sub_b33a30, sub_b4c060, sub_c291d0, sub_c51540, sub_ed2fe0
*/
void sub_c61640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61640ULL || rel >= 0xc61b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61b00 size=192 callers=4 calls=2
   calls: sub_b33510, sub_b4c060
*/
void sub_c61b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61b00ULL || rel >= 0xc61bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61bc0 size=944 callers=4 calls=8
   calls: sub_13a6cd0, sub_5d99d0, sub_5dc5d0, sub_619060, sub_619640, sub_b33800, sub_b447b0, sub_b4c060
*/
void sub_c61bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61bc0ULL || rel >= 0xc61f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c61f70 size=368 callers=2 calls=3
   calls: sub_13a6cd0, sub_619060, sub_619640
*/
void sub_c61f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc61f70ULL || rel >= 0xc620e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c620e0 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c620e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc620e0ULL || rel >= 0xc62190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62190 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c62190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62190ULL || rel >= 0xc62240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62240 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c62240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62240ULL || rel >= 0xc622f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c622f0 size=1120 callers=15 calls=5
   calls: sub_5c6830, sub_5d8ee0, sub_65d700, sub_972c70, sub_c64f10
   ref: FieldObject_%lu
*/
void FieldObject__lu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc622f0ULL || rel >= 0xc62750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62750 size=144 callers=2 calls=0
*/
void sub_c62750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62750ULL || rel >= 0xc627e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c627e0 size=80 callers=7 calls=0
*/
void sub_c627e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc627e0ULL || rel >= 0xc62830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62830 size=128 callers=8 calls=2
   calls: sub_5c6830, sub_5c8dd0
*/
void sub_c62830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62830ULL || rel >= 0xc628b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c628b0 size=16 callers=4 calls=0
*/
void sub_c628b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc628b0ULL || rel >= 0xc628c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c628c0 size=16 callers=3 calls=0
*/
void sub_c628c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc628c0ULL || rel >= 0xc628d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c628d0 size=48 callers=11 calls=0
*/
void sub_c628d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc628d0ULL || rel >= 0xc62900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62900 size=224 callers=1 calls=1
   calls: sub_c65130
*/
void sub_c62900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62900ULL || rel >= 0xc629e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c629e0 size=208 callers=7 calls=1
   calls: sub_c62ab0
*/
void sub_c629e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc629e0ULL || rel >= 0xc62ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62ab0 size=384 callers=1 calls=0
*/
void sub_c62ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62ab0ULL || rel >= 0xc62c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62c30 size=416 callers=5 calls=4
   calls: sub_5c6850, sub_5c68f0, sub_5c6930, sub_c662f0
*/
void sub_c62c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62c30ULL || rel >= 0xc62dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62dd0 size=96 callers=4 calls=1
   calls: sub_c65570
*/
void sub_c62dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62dd0ULL || rel >= 0xc62e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c62e30 size=560 callers=3 calls=2
   calls: sub_13ca4c0, sub_5cbe50
*/
void sub_c62e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc62e30ULL || rel >= 0xc63060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c63060 size=272 callers=1 calls=1
   calls: sub_13ca4c0
*/
void sub_c63060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63060ULL || rel >= 0xc63170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c63170 size=528 callers=4 calls=2
   calls: sub_13ca4c0, sub_5cbe50
*/
void sub_c63170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63170ULL || rel >= 0xc63380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c63380 size=16 callers=0 calls=0
*/
void sub_c63380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63380ULL || rel >= 0xc63390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c63390 size=16 callers=1 calls=0
*/
void sub_c63390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63390ULL || rel >= 0xc633a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c633a0 size=272 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c633a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc633a0ULL || rel >= 0xc634b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c634b0 size=384 callers=7 calls=1
   calls: sub_5e2350
*/
void sub_c634b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc634b0ULL || rel >= 0xc63630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c63630 size=64 callers=7 calls=0
*/
void sub_c63630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63630ULL || rel >= 0xc63670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c63670 size=32 callers=20 calls=0
*/
void sub_c63670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63670ULL || rel >= 0xc63690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c63690 size=32 callers=3 calls=0
*/
void sub_c63690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63690ULL || rel >= 0xc636b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c636b0 size=2000 callers=5 calls=4
   calls: sub_c63e80, sub_c81530, sub_c81ee0, sub_c81f90
*/
void sub_c636b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc636b0ULL || rel >= 0xc63e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c63e80 size=864 callers=1 calls=0
*/
void sub_c63e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63e80ULL || rel >= 0xc641e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c641e0 size=240 callers=1 calls=3
   calls: sub_13ca950, sub_c656e0, sub_c658c0
*/
void sub_c641e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc641e0ULL || rel >= 0xc642d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c642d0 size=96 callers=1 calls=1
   calls: sub_c656e0
*/
void sub_c642d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc642d0ULL || rel >= 0xc64330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64330 size=112 callers=5 calls=1
   calls: sub_c656e0
*/
void sub_c64330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64330ULL || rel >= 0xc643a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c643a0 size=304 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_96ccf0
*/
void sub_c643a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc643a0ULL || rel >= 0xc644d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c644d0 size=400 callers=1 calls=2
   calls: sub_c64660, sub_c65ea0
*/
void sub_c644d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc644d0ULL || rel >= 0xc64660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64660 size=272 callers=1 calls=2
   calls: sub_5d99d0, sub_c66280
*/
void sub_c64660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64660ULL || rel >= 0xc64770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64770 size=32 callers=2 calls=0
*/
void sub_c64770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64770ULL || rel >= 0xc64790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64790 size=16 callers=0 calls=0
*/
void sub_c64790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64790ULL || rel >= 0xc647a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c647a0 size=16 callers=3 calls=0
*/
void sub_c647a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc647a0ULL || rel >= 0xc647b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c647b0 size=16 callers=1 calls=0
*/
void sub_c647b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc647b0ULL || rel >= 0xc647c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c647c0 size=784 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750, sub_c65ea0
*/
void sub_c647c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc647c0ULL || rel >= 0xc64ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64ad0 size=464 callers=2 calls=4
   calls: sub_17c1ba0, sub_68da30, sub_c66120, sub_c73800
*/
void sub_c64ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64ad0ULL || rel >= 0xc64ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64ca0 size=16 callers=0 calls=0
*/
void sub_c64ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64ca0ULL || rel >= 0xc64cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64cb0 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c64cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64cb0ULL || rel >= 0xc64d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64d60 size=16 callers=0 calls=0
*/
void sub_c64d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64d60ULL || rel >= 0xc64d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64d70 size=16 callers=0 calls=0
*/
void sub_c64d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64d70ULL || rel >= 0xc64d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64d80 size=16 callers=0 calls=0
*/
void sub_c64d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64d80ULL || rel >= 0xc64d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64d90 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c64d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64d90ULL || rel >= 0xc64e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64e40 size=176 callers=0 calls=1
   calls: sub_967240
*/
void sub_c64e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64e40ULL || rel >= 0xc64ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64ef0 size=16 callers=0 calls=0
*/
void sub_c64ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64ef0ULL || rel >= 0xc64f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64f00 size=16 callers=0 calls=0
*/
void sub_c64f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64f00ULL || rel >= 0xc64f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c64f10 size=432 callers=1 calls=0
*/
void sub_c64f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc64f10ULL || rel >= 0xc650c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c650c0 size=64 callers=0 calls=1
   calls: sub_619060
*/
void sub_c650c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc650c0ULL || rel >= 0xc65100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65100 size=16 callers=0 calls=0
*/
void sub_c65100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65100ULL || rel >= 0xc65110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65110 size=16 callers=0 calls=0
*/
void sub_c65110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65110ULL || rel >= 0xc65120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65120 size=16 callers=0 calls=0
*/
void sub_c65120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65120ULL || rel >= 0xc65130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65130 size=1008 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_c65130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65130ULL || rel >= 0xc65520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65520 size=32 callers=0 calls=0
*/
void sub_c65520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65520ULL || rel >= 0xc65540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65540 size=16 callers=0 calls=0
*/
void sub_c65540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65540ULL || rel >= 0xc65550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65550 size=16 callers=0 calls=0
*/
void sub_c65550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65550ULL || rel >= 0xc65560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65560 size=16 callers=0 calls=0
*/
void sub_c65560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65560ULL || rel >= 0xc65570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65570 size=368 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_c65570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65570ULL || rel >= 0xc656e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c656e0 size=240 callers=4 calls=1
   calls: sub_c657d0
*/
void sub_c656e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc656e0ULL || rel >= 0xc657d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c657d0 size=240 callers=94 calls=0
*/
void sub_c657d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc657d0ULL || rel >= 0xc658c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c658c0 size=272 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_c658c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc658c0ULL || rel >= 0xc659d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c659d0 size=80 callers=0 calls=0
*/
void sub_c659d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc659d0ULL || rel >= 0xc65a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65a20 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c65a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65a20ULL || rel >= 0xc65ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65ad0 size=48 callers=0 calls=0
*/
void sub_c65ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65ad0ULL || rel >= 0xc65b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65b00 size=32 callers=0 calls=0
*/
void sub_c65b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65b00ULL || rel >= 0xc65b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65b20 size=16 callers=0 calls=0
*/
void sub_c65b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65b20ULL || rel >= 0xc65b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65b30 size=16 callers=0 calls=0
*/
void sub_c65b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65b30ULL || rel >= 0xc65b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65b40 size=16 callers=0 calls=0
*/
void sub_c65b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65b40ULL || rel >= 0xc65b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65b50 size=16 callers=0 calls=0
*/
void sub_c65b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65b50ULL || rel >= 0xc65b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65b60 size=96 callers=0 calls=0
*/
void sub_c65b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65b60ULL || rel >= 0xc65bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65bc0 size=32 callers=0 calls=0
*/
void sub_c65bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65bc0ULL || rel >= 0xc65be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65be0 size=16 callers=0 calls=0
*/
void sub_c65be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65be0ULL || rel >= 0xc65bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65bf0 size=16 callers=0 calls=0
*/
void sub_c65bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65bf0ULL || rel >= 0xc65c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65c00 size=80 callers=0 calls=0
*/
void sub_c65c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65c00ULL || rel >= 0xc65c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65c50 size=80 callers=0 calls=0
*/
void sub_c65c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65c50ULL || rel >= 0xc65ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65ca0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c65ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65ca0ULL || rel >= 0xc65d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65d50 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c65d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65d50ULL || rel >= 0xc65e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65e00 size=80 callers=0 calls=0
*/
void sub_c65e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65e00ULL || rel >= 0xc65e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65e50 size=80 callers=0 calls=0
*/
void sub_c65e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65e50ULL || rel >= 0xc65ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c65ea0 size=448 callers=3 calls=0
*/
void sub_c65ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc65ea0ULL || rel >= 0xc66060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66060 size=144 callers=0 calls=0
*/
void sub_c66060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66060ULL || rel >= 0xc660f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c660f0 size=16 callers=0 calls=0
*/
void sub_c660f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc660f0ULL || rel >= 0xc66100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66100 size=16 callers=0 calls=0
*/
void sub_c66100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66100ULL || rel >= 0xc66110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66110 size=16 callers=0 calls=0
*/
void sub_c66110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66110ULL || rel >= 0xc66120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66120 size=352 callers=1 calls=1
   calls: sub_967240
*/
void sub_c66120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66120ULL || rel >= 0xc66280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66280 size=112 callers=2 calls=2
   calls: sub_5c6830, sub_5db1b0
*/
void sub_c66280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66280ULL || rel >= 0xc662f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c662f0 size=112 callers=1 calls=1
   calls: sub_5c8dd0
*/
void sub_c662f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc662f0ULL || rel >= 0xc66360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66360 size=128 callers=2 calls=1
   calls: sub_5c8dd0
*/
void sub_c66360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66360ULL || rel >= 0xc663e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c663e0 size=192 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_c663e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc663e0ULL || rel >= 0xc664a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c664a0 size=192 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_c664a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc664a0ULL || rel >= 0xc66560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66560 size=16 callers=0 calls=0
*/
void sub_c66560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66560ULL || rel >= 0xc66570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66570 size=192 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_c66570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66570ULL || rel >= 0xc66630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66630 size=192 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_c66630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66630ULL || rel >= 0xc666f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c666f0 size=16 callers=0 calls=0
*/
void sub_c666f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc666f0ULL || rel >= 0xc66700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66700 size=16 callers=0 calls=0
*/
void sub_c66700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66700ULL || rel >= 0xc66710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66710 size=208 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_c66710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66710ULL || rel >= 0xc667e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c667e0 size=208 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_c667e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc667e0ULL || rel >= 0xc668b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c668b0 size=304 callers=0 calls=0
*/
void sub_c668b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc668b0ULL || rel >= 0xc669e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c669e0 size=304 callers=1 calls=4
   calls: sub_65d700, sub_7c2da0, sub_c66b10, sub_c66cc0
*/
void sub_c669e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc669e0ULL || rel >= 0xc66b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66b10 size=432 callers=1 calls=0
*/
void sub_c66b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66b10ULL || rel >= 0xc66cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66cc0 size=352 callers=2 calls=0
*/
void sub_c66cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66cc0ULL || rel >= 0xc66e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66e20 size=368 callers=0 calls=4
   calls: sub_68f170, sub_68f670, sub_7c2d90, sub_969e30
*/
void sub_c66e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66e20ULL || rel >= 0xc66f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c66f90 size=144 callers=0 calls=1
   calls: sub_68f650
*/
void sub_c66f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc66f90ULL || rel >= 0xc67020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67020 size=112 callers=0 calls=0
*/
void sub_c67020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67020ULL || rel >= 0xc67090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67090 size=112 callers=0 calls=0
*/
void sub_c67090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67090ULL || rel >= 0xc67100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67100 size=128 callers=0 calls=0
*/
void sub_c67100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67100ULL || rel >= 0xc67180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67180 size=144 callers=0 calls=0
*/
void sub_c67180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67180ULL || rel >= 0xc67210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67210 size=112 callers=0 calls=0
*/
void sub_c67210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67210ULL || rel >= 0xc67280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67280 size=672 callers=0 calls=1
   calls: sub_c687b0
*/
void sub_c67280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67280ULL || rel >= 0xc67520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67520 size=112 callers=0 calls=0
*/
void sub_c67520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67520ULL || rel >= 0xc67590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67590 size=272 callers=0 calls=0
*/
void sub_c67590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67590ULL || rel >= 0xc676a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c676a0 size=672 callers=0 calls=2
   calls: sub_c62900, sub_c687b0
*/
void sub_c676a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc676a0ULL || rel >= 0xc67940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67940 size=128 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c67940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67940ULL || rel >= 0xc679c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c679c0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c679c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc679c0ULL || rel >= 0xc67a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67a60 size=224 callers=0 calls=1
   calls: sub_c68970
*/
void sub_c67a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67a60ULL || rel >= 0xc67b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67b40 size=288 callers=1 calls=0
*/
void sub_c67b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67b40ULL || rel >= 0xc67c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67c60 size=480 callers=0 calls=5
   calls: sub_59b1f0, sub_59b200, sub_5cf8e0, sub_5cf8f0, sub_b4a5e0
*/
void sub_c67c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67c60ULL || rel >= 0xc67e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c67e40 size=1072 callers=3 calls=1
   calls: sub_c68b30
*/
void sub_c67e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc67e40ULL || rel >= 0xc68270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68270 size=432 callers=2 calls=1
   calls: sub_c67e40
*/
void sub_c68270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68270ULL || rel >= 0xc68420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68420 size=336 callers=1 calls=1
   calls: sub_c67e40
*/
void sub_c68420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68420ULL || rel >= 0xc68570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68570 size=16 callers=2 calls=0
*/
void sub_c68570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68570ULL || rel >= 0xc68580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68580 size=144 callers=1 calls=0
*/
void sub_c68580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68580ULL || rel >= 0xc68610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68610 size=112 callers=1 calls=0
*/
void sub_c68610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68610ULL || rel >= 0xc68680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68680 size=288 callers=0 calls=0
*/
void sub_c68680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68680ULL || rel >= 0xc687a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c687a0 size=16 callers=0 calls=0
*/
void sub_c687a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc687a0ULL || rel >= 0xc687b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c687b0 size=448 callers=10 calls=0
*/
void sub_c687b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc687b0ULL || rel >= 0xc68970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68970 size=448 callers=4 calls=0
*/
void sub_c68970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68970ULL || rel >= 0xc68b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68b30 size=416 callers=1 calls=0
*/
void sub_c68b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68b30ULL || rel >= 0xc68cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68cd0 size=368 callers=0 calls=0
*/
void sub_c68cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68cd0ULL || rel >= 0xc68e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c68e40 size=1152 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: fi_common_event
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: fi_slope_front
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
*/
void skybox_01_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc68e40ULL || rel >= 0xc692c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c692c0 size=400 callers=11 calls=2
   calls: FieldObject__lu, sub_65d700
*/
void sub_c692c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc692c0ULL || rel >= 0xc69450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69450 size=464 callers=0 calls=1
   calls: sub_c69620
*/
void sub_c69450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69450ULL || rel >= 0xc69620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69620 size=336 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_c69620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69620ULL || rel >= 0xc69770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69770 size=16 callers=0 calls=0
*/
void sub_c69770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69770ULL || rel >= 0xc69780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69780 size=16 callers=0 calls=0
*/
void sub_c69780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69780ULL || rel >= 0xc69790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69790 size=16 callers=0 calls=0
*/
void sub_c69790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69790ULL || rel >= 0xc697a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c697a0 size=16 callers=0 calls=0
*/
void sub_c697a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc697a0ULL || rel >= 0xc697b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c697b0 size=16 callers=0 calls=0
*/
void sub_c697b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc697b0ULL || rel >= 0xc697c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c697c0 size=112 callers=3 calls=3
   calls: sub_c628b0, sub_c69830, sub_c69c40
*/
void sub_c697c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc697c0ULL || rel >= 0xc69830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69830 size=1040 callers=1 calls=4
   calls: sub_5e2930, sub_e8f5d0, sub_e97ce0, unnamed_28
*/
void sub_c69830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69830ULL || rel >= 0xc69c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69c40 size=544 callers=1 calls=2
   calls: sub_5e2bc0, sub_c6e010
*/
void sub_c69c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69c40ULL || rel >= 0xc69e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69e60 size=176 callers=4 calls=1
   calls: sub_c628c0
*/
void sub_c69e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69e60ULL || rel >= 0xc69f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c69f10 size=608 callers=10 calls=4
   calls: sub_5d99d0, sub_98eec0, sub_c628d0, sub_c6a170
*/
void sub_c69f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc69f10ULL || rel >= 0xc6a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6a170 size=352 callers=1 calls=0
*/
void sub_c6a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6a170ULL || rel >= 0xc6a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6a2d0 size=144 callers=5 calls=3
   calls: sub_c629e0, sub_c647c0, sub_c6a360
*/
void sub_c6a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6a2d0ULL || rel >= 0xc6a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6a360 size=272 callers=1 calls=2
   calls: sub_b33950, sub_b4c060
*/
void sub_c6a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6a360ULL || rel >= 0xc6a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6a470 size=48 callers=9 calls=1
   calls: sub_c62c30
*/
void sub_c6a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6a470ULL || rel >= 0xc6a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6a4a0 size=2368 callers=0 calls=6
   calls: sub_17c1a10, sub_612ef0, sub_612f70, sub_68da30, sub_96ccf0, sub_9733f0
*/
void sub_c6a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6a4a0ULL || rel >= 0xc6ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ade0 size=144 callers=0 calls=1
   calls: sub_96ccf0
*/
void sub_c6ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ade0ULL || rel >= 0xc6ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ae70 size=272 callers=0 calls=3
   calls: sub_59b100, sub_59b140, sub_607750
*/
void sub_c6ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ae70ULL || rel >= 0xc6af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6af80 size=352 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6af80ULL || rel >= 0xc6b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b0e0 size=272 callers=0 calls=3
   calls: sub_59b090, sub_59b0d0, sub_607750
*/
void sub_c6b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b0e0ULL || rel >= 0xc6b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b1f0 size=352 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b1f0ULL || rel >= 0xc6b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b350 size=272 callers=0 calls=3
   calls: sub_59b170, sub_59b1c0, sub_607750
*/
void sub_c6b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b350ULL || rel >= 0xc6b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b460 size=256 callers=0 calls=3
   calls: sub_59b1f0, sub_59b220, sub_607750
*/
void sub_c6b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b460ULL || rel >= 0xc6b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b560 size=352 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b560ULL || rel >= 0xc6b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b6c0 size=336 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b6c0ULL || rel >= 0xc6b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b810 size=240 callers=0 calls=2
   calls: sub_59b100, sub_607750
*/
void sub_c6b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b810ULL || rel >= 0xc6b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b900 size=240 callers=0 calls=1
   calls: sub_607750
*/
void sub_c6b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b900ULL || rel >= 0xc6b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6b9f0 size=336 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b9f0ULL || rel >= 0xc6bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6bb40 size=336 callers=0 calls=1
   calls: sub_607750
*/
void sub_c6bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6bb40ULL || rel >= 0xc6bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6bc90 size=336 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6bc90ULL || rel >= 0xc6bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6bde0 size=336 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6bde0ULL || rel >= 0xc6bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6bf30 size=416 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6bf30ULL || rel >= 0xc6c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c0d0 size=224 callers=1 calls=1
   calls: sub_607750
*/
void sub_c6c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c0d0ULL || rel >= 0xc6c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c1b0 size=16 callers=1 calls=0
*/
void sub_c6c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c1b0ULL || rel >= 0xc6c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c1c0 size=400 callers=4 calls=3
   calls: sub_59b250, sub_5b9220, sub_607750
*/
void sub_c6c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c1c0ULL || rel >= 0xc6c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c350 size=16 callers=0 calls=0
*/
void sub_c6c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c350ULL || rel >= 0xc6c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c360 size=96 callers=0 calls=0
*/
void sub_c6c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c360ULL || rel >= 0xc6c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c3c0 size=272 callers=0 calls=5
   calls: sub_59b250, sub_5b93c0, sub_5b9400, sub_5b9520, sub_607750
*/
void sub_c6c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c3c0ULL || rel >= 0xc6c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c4d0 size=240 callers=0 calls=3
   calls: sub_59b250, sub_5b9400, sub_607750
*/
void sub_c6c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c4d0ULL || rel >= 0xc6c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c5c0 size=304 callers=37 calls=3
   calls: sub_59b250, sub_5b9220, sub_607750
*/
void sub_c6c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c5c0ULL || rel >= 0xc6c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c6f0 size=656 callers=2 calls=4
   calls: sub_59b250, sub_5b9400, sub_5b9430, sub_607750
*/
void sub_c6c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c6f0ULL || rel >= 0xc6c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6c980 size=384 callers=5 calls=3
   calls: sub_59b250, sub_5b9220, sub_607750
*/
void sub_c6c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6c980ULL || rel >= 0xc6cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6cb00 size=432 callers=1 calls=0
   ref: bin/archive/field/model/
   ref: /unit_obj/
   ref: %s%s.gfpak
   ref: /battlebg_obj/
*/
void unnamed_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6cb00ULL || rel >= 0xc6ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ccb0 size=512 callers=38 calls=9
   calls: sub_17c1b70, sub_68d630, sub_68d710, sub_68d910, sub_68d950, sub_68d9f0, sub_68da30, sub_c64ad0, sub_c6f2f0
*/
void sub_c6ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ccb0ULL || rel >= 0xc6ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ceb0 size=96 callers=34 calls=1
   calls: sub_68d9b0
*/
void sub_c6ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ceb0ULL || rel >= 0xc6cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6cf10 size=64 callers=0 calls=1
   calls: sub_68d9b0
*/
void sub_c6cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6cf10ULL || rel >= 0xc6cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6cf50 size=80 callers=42 calls=1
   calls: sub_c6cfa0
*/
void sub_c6cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6cf50ULL || rel >= 0xc6cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6cfa0 size=816 callers=23 calls=2
   calls: sub_5e2bc0, sub_c6f4b0
*/
void sub_c6cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6cfa0ULL || rel >= 0xc6d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d2d0 size=176 callers=2 calls=0
*/
void sub_c6d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d2d0ULL || rel >= 0xc6d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d380 size=64 callers=13 calls=0
*/
void sub_c6d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d380ULL || rel >= 0xc6d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d3c0 size=64 callers=3 calls=0
*/
void sub_c6d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d3c0ULL || rel >= 0xc6d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d400 size=64 callers=2 calls=0
*/
void sub_c6d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d400ULL || rel >= 0xc6d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d440 size=112 callers=5 calls=2
   calls: sub_17c19f0, sub_68da30
*/
void sub_c6d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d440ULL || rel >= 0xc6d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d4b0 size=112 callers=4 calls=2
   calls: sub_17c1a00, sub_68da30
*/
void sub_c6d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d4b0ULL || rel >= 0xc6d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d520 size=112 callers=0 calls=1
   calls: sub_68da30
*/
void sub_c6d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d520ULL || rel >= 0xc6d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d590 size=80 callers=3 calls=0
*/
void sub_c6d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d590ULL || rel >= 0xc6d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d5e0 size=320 callers=4 calls=4
   calls: sub_17c1b70, sub_5cf8f0, sub_68d9f0, sub_96c6c0
*/
void sub_c6d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d5e0ULL || rel >= 0xc6d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d720 size=96 callers=1 calls=1
   calls: sub_989700
*/
void sub_c6d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d720ULL || rel >= 0xc6d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d780 size=16 callers=1 calls=0
*/
void sub_c6d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d780ULL || rel >= 0xc6d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d790 size=16 callers=1 calls=0
*/
void sub_c6d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d790ULL || rel >= 0xc6d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d7a0 size=368 callers=1 calls=6
   calls: sub_11161b0, sub_13ca4c0, sub_5cbb00, sub_5cbf10, sub_5d99d0, sub_c6e790
*/
void sub_c6d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d7a0ULL || rel >= 0xc6d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6d910 size=304 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_96ccf0, sub_c6fb00
*/
void sub_c6d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d910ULL || rel >= 0xc6da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6da40 size=144 callers=0 calls=3
   calls: sub_59e990, sub_5d99d0, sub_c6fcd0
*/
void sub_c6da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6da40ULL || rel >= 0xc6dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6dad0 size=192 callers=0 calls=6
   calls: sub_122b8a0, sub_598de0, sub_5d99d0, sub_c52e00, sub_c6db90, sub_c6fdc0
*/
void sub_c6dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6dad0ULL || rel >= 0xc6db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6db90 size=320 callers=6 calls=1
   calls: sub_c6e8b0
*/
void sub_c6db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6db90ULL || rel >= 0xc6dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6dcd0 size=832 callers=4 calls=5
   calls: sub_6194a0, sub_967240, sub_c28fd0, sub_c291d0, sub_c51540
*/
void sub_c6dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6dcd0ULL || rel >= 0xc6e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6e010 size=1184 callers=14 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_96bb80
*/
void sub_c6e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6e010ULL || rel >= 0xc6e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6e4b0 size=128 callers=1 calls=3
   calls: sub_c52c40, sub_c64ad0, sub_c6ff00
*/
void sub_c6e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6e4b0ULL || rel >= 0xc6e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6e530 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c6e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6e530ULL || rel >= 0xc6e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6e5a0 size=16 callers=0 calls=0
*/
void sub_c6e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6e5a0ULL || rel >= 0xc6e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6e5b0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c6e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6e5b0ULL || rel >= 0xc6e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6e6a0 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c6e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6e6a0ULL || rel >= 0xc6e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6e790 size=288 callers=5 calls=3
   calls: sub_1116c70, sub_5cf8c0, sub_5db1b0
*/
void sub_c6e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6e790ULL || rel >= 0xc6e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6e8b0 size=528 callers=2 calls=0
*/
void sub_c6e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6e8b0ULL || rel >= 0xc6eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6eac0 size=176 callers=12 calls=1
   calls: sub_967240
*/
void sub_c6eac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6eac0ULL || rel >= 0xc6eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6eb70 size=96 callers=0 calls=2
   calls: sub_59b100, sub_59b130
*/
void sub_c6eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6eb70ULL || rel >= 0xc6ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ebd0 size=16 callers=0 calls=0
*/
void sub_c6ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ebd0ULL || rel >= 0xc6ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ebe0 size=16 callers=0 calls=0
*/
void sub_c6ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ebe0ULL || rel >= 0xc6ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ebf0 size=16 callers=0 calls=0
*/
void sub_c6ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ebf0ULL || rel >= 0xc6ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ec00 size=96 callers=0 calls=2
   calls: sub_59b090, sub_59b0c0
*/
void sub_c6ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ec00ULL || rel >= 0xc6ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ec60 size=16 callers=0 calls=0
*/
void sub_c6ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ec60ULL || rel >= 0xc6ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ec70 size=16 callers=0 calls=0
*/
void sub_c6ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ec70ULL || rel >= 0xc6ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ec80 size=16 callers=0 calls=0
*/
void sub_c6ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ec80ULL || rel >= 0xc6ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ec90 size=96 callers=0 calls=2
   calls: sub_59b170, sub_59b1a0
*/
void sub_c6ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ec90ULL || rel >= 0xc6ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ecf0 size=16 callers=0 calls=0
*/
void sub_c6ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ecf0ULL || rel >= 0xc6ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ed00 size=16 callers=0 calls=0
*/
void sub_c6ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ed00ULL || rel >= 0xc6ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ed10 size=16 callers=0 calls=0
*/
void sub_c6ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ed10ULL || rel >= 0xc6ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ed20 size=64 callers=0 calls=2
   calls: sub_59b1f0, sub_59b200
*/
void sub_c6ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ed20ULL || rel >= 0xc6ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ed60 size=16 callers=0 calls=0
*/
void sub_c6ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ed60ULL || rel >= 0xc6ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ed70 size=16 callers=0 calls=0
*/
void sub_c6ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ed70ULL || rel >= 0xc6ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ed80 size=16 callers=0 calls=0
*/
void sub_c6ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ed80ULL || rel >= 0xc6ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ed90 size=16 callers=0 calls=0
*/
void sub_c6ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ed90ULL || rel >= 0xc6eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6eda0 size=16 callers=0 calls=0
*/
void sub_c6eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6eda0ULL || rel >= 0xc6edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6edb0 size=16 callers=0 calls=0
*/
void sub_c6edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6edb0ULL || rel >= 0xc6edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6edc0 size=16 callers=0 calls=0
*/
void sub_c6edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6edc0ULL || rel >= 0xc6edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6edd0 size=16 callers=0 calls=0
*/
void sub_c6edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6edd0ULL || rel >= 0xc6ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ede0 size=16 callers=0 calls=0
*/
void sub_c6ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ede0ULL || rel >= 0xc6edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6edf0 size=16 callers=0 calls=0
*/
void sub_c6edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6edf0ULL || rel >= 0xc6ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee00 size=16 callers=0 calls=0
*/
void sub_c6ee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee00ULL || rel >= 0xc6ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee10 size=16 callers=0 calls=0
*/
void sub_c6ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee10ULL || rel >= 0xc6ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee20 size=16 callers=0 calls=0
*/
void sub_c6ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee20ULL || rel >= 0xc6ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee30 size=16 callers=0 calls=0
*/
void sub_c6ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee30ULL || rel >= 0xc6ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee40 size=16 callers=0 calls=0
*/
void sub_c6ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee40ULL || rel >= 0xc6ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee50 size=16 callers=0 calls=0
*/
void sub_c6ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee50ULL || rel >= 0xc6ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee60 size=16 callers=0 calls=0
*/
void sub_c6ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee60ULL || rel >= 0xc6ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee70 size=16 callers=0 calls=0
*/
void sub_c6ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee70ULL || rel >= 0xc6ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee80 size=16 callers=0 calls=0
*/
void sub_c6ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee80ULL || rel >= 0xc6ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ee90 size=416 callers=0 calls=3
   calls: sub_59a7c0, sub_59bee0, sub_967240
*/
void sub_c6ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee90ULL || rel >= 0xc6f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f030 size=16 callers=0 calls=0
*/
void sub_c6f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f030ULL || rel >= 0xc6f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f040 size=32 callers=0 calls=0
*/
void sub_c6f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f040ULL || rel >= 0xc6f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f060 size=32 callers=0 calls=0
*/
void sub_c6f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f060ULL || rel >= 0xc6f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f080 size=16 callers=0 calls=0
*/
void sub_c6f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f080ULL || rel >= 0xc6f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f090 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_c6f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f090ULL || rel >= 0xc6f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f0d0 size=32 callers=0 calls=0
*/
void sub_c6f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f0d0ULL || rel >= 0xc6f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f0f0 size=16 callers=0 calls=0
*/
void sub_c6f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f0f0ULL || rel >= 0xc6f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f100 size=16 callers=0 calls=0
*/
void sub_c6f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f100ULL || rel >= 0xc6f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f110 size=336 callers=0 calls=2
   calls: sub_b44bb0, sub_c6e8b0
*/
void sub_c6f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f110ULL || rel >= 0xc6f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f260 size=96 callers=0 calls=0
*/
void sub_c6f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f260ULL || rel >= 0xc6f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f2c0 size=16 callers=0 calls=0
*/
void sub_c6f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f2c0ULL || rel >= 0xc6f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f2d0 size=16 callers=0 calls=0
*/
void sub_c6f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f2d0ULL || rel >= 0xc6f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f2e0 size=16 callers=0 calls=0
*/
void sub_c6f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f2e0ULL || rel >= 0xc6f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f2f0 size=448 callers=1 calls=0
*/
void sub_c6f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f2f0ULL || rel >= 0xc6f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f4b0 size=672 callers=1 calls=2
   calls: sub_c6f750, sub_c6f9b0
*/
void sub_c6f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f4b0ULL || rel >= 0xc6f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f750 size=608 callers=1 calls=0
*/
void sub_c6f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f750ULL || rel >= 0xc6f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6f9b0 size=336 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_c6f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f9b0ULL || rel >= 0xc6fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fb00 size=352 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_c6fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fb00ULL || rel >= 0xc6fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fc60 size=64 callers=0 calls=2
   calls: sub_618ec0, sub_ed2fe0
*/
void sub_c6fc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fc60ULL || rel >= 0xc6fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fca0 size=16 callers=0 calls=0
*/
void sub_c6fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fca0ULL || rel >= 0xc6fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fcb0 size=16 callers=0 calls=0
*/
void sub_c6fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fcb0ULL || rel >= 0xc6fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fcc0 size=16 callers=0 calls=0
*/
void sub_c6fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fcc0ULL || rel >= 0xc6fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fcd0 size=240 callers=2 calls=2
   calls: sub_59e480, sub_5db1b0
*/
void sub_c6fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fcd0ULL || rel >= 0xc6fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fdc0 size=224 callers=2 calls=1
   calls: sub_5988d0
*/
void sub_c6fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fdc0ULL || rel >= 0xc6fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fea0 size=48 callers=0 calls=0
*/
void sub_c6fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fea0ULL || rel >= 0xc6fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fed0 size=16 callers=0 calls=0
*/
void sub_c6fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fed0ULL || rel >= 0xc6fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fee0 size=16 callers=0 calls=0
*/
void sub_c6fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fee0ULL || rel >= 0xc6fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6fef0 size=16 callers=0 calls=0
*/
void sub_c6fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6fef0ULL || rel >= 0xc6ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c6ff00 size=512 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_c6ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ff00ULL || rel >= 0xc70100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70100 size=1584 callers=1 calls=2
   calls: FieldObject__lu, sub_c71f10
*/
void sub_c70100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70100ULL || rel >= 0xc70730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70730 size=272 callers=1 calls=1
   calls: sub_13ca4c0
*/
void sub_c70730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70730ULL || rel >= 0xc70840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70840 size=560 callers=1 calls=9
   calls: sub_11161b0, sub_1116b50, sub_5d99d0, sub_c628d0, sub_c70cc0, sub_c70dd0, sub_c70ef0, sub_c71010, sub_c71c40
*/
void sub_c70840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70840ULL || rel >= 0xc70a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70a70 size=288 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_c70a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70a70ULL || rel >= 0xc70b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70b90 size=288 callers=0 calls=3
   calls: sub_13ca4c0, sub_5cbe50, sub_c63170
*/
void sub_c70b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70b90ULL || rel >= 0xc70cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70cb0 size=16 callers=0 calls=0
*/
void sub_c70cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70cb0ULL || rel >= 0xc70cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70cc0 size=272 callers=16 calls=4
   calls: sub_11161b0, sub_5d99d0, sub_c6e790, sub_c70ef0
*/
void sub_c70cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70cc0ULL || rel >= 0xc70dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70dd0 size=288 callers=9 calls=4
   calls: sub_11161b0, sub_5d99d0, sub_c6e790, sub_c71010
*/
void sub_c70dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70dd0ULL || rel >= 0xc70ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c70ef0 size=288 callers=4 calls=3
   calls: sub_13ca4c0, sub_5cbb00, sub_5cbe70
*/
void sub_c70ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc70ef0ULL || rel >= 0xc71010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71010 size=1520 callers=4 calls=4
   calls: sub_11161b0, sub_13ca4c0, sub_5cbb00, sub_5cbea0
*/
void sub_c71010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71010ULL || rel >= 0xc71600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71600 size=336 callers=2 calls=1
   calls: sub_135a760
*/
void sub_c71600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71600ULL || rel >= 0xc71750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71750 size=112 callers=0 calls=0
*/
void sub_c71750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71750ULL || rel >= 0xc717c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c717c0 size=112 callers=0 calls=0
*/
void sub_c717c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc717c0ULL || rel >= 0xc71830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71830 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c71830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71830ULL || rel >= 0xc718a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c718a0 size=112 callers=0 calls=0
*/
void sub_c718a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc718a0ULL || rel >= 0xc71910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71910 size=112 callers=0 calls=0
*/
void sub_c71910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71910ULL || rel >= 0xc71980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71980 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c71980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71980ULL || rel >= 0xc71a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71a70 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c71a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71a70ULL || rel >= 0xc71b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71b60 size=112 callers=0 calls=0
*/
void sub_c71b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71b60ULL || rel >= 0xc71bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71bd0 size=112 callers=0 calls=0
*/
void sub_c71bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71bd0ULL || rel >= 0xc71c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71c40 size=720 callers=4 calls=3
   calls: sub_1117560, sub_5cf8e0, sub_5cf8f0
*/
void sub_c71c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71c40ULL || rel >= 0xc71f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c71f10 size=496 callers=1 calls=0
*/
void sub_c71f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71f10ULL || rel >= 0xc72100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c72100 size=368 callers=0 calls=0
*/
void sub_c72100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc72100ULL || rel >= 0xc72270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c72270 size=496 callers=0 calls=1
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
void skybox_01_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc72270ULL || rel >= 0xc72460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c72460 size=1008 callers=1 calls=2
   calls: FieldObject__lu, sub_5c6990
*/
void sub_c72460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc72460ULL || rel >= 0xc72850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c72850 size=1264 callers=0 calls=12
   calls: sub_1c0, sub_5cfaf0, sub_5e26a0, sub_5e2930, sub_5e3980, sub_5e6770, sub_5e7a30, sub_793480, sub_c50a60, sub_c628b0, sub_c72d40, sub_c745f0
   ref: _zone.gfbcol
   ref: bin/field/model/
*/
void unnamed_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc72850ULL || rel >= 0xc72d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c72d40 size=304 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_c72d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc72d40ULL || rel >= 0xc72e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c72e70 size=128 callers=0 calls=1
   calls: sub_c628c0
*/
void sub_c72e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc72e70ULL || rel >= 0xc72ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c72ef0 size=1152 callers=1 calls=11
   calls: sub_11161b0, sub_13ca4c0, sub_5c6e60, sub_5cbb00, sub_5cbf10, sub_5d99d0, sub_c628d0, sub_c73370, sub_c73490, sub_c74ee0, sub_c75000
*/
void sub_c72ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc72ef0ULL || rel >= 0xc73370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73370 size=288 callers=13 calls=3
   calls: sub_13ca4c0, sub_5cbe70, sub_5cc040
*/
void sub_c73370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73370ULL || rel >= 0xc73490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73490 size=352 callers=16 calls=1
   calls: sub_13ca4c0
*/
void sub_c73490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73490ULL || rel >= 0xc735f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c735f0 size=64 callers=1 calls=1
   calls: sub_c629e0
*/
void sub_c735f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc735f0ULL || rel >= 0xc73630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73630 size=288 callers=0 calls=2
   calls: sub_13a6cd0, sub_c62c30
*/
void sub_c73630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73630ULL || rel >= 0xc73750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73750 size=144 callers=0 calls=1
   calls: sub_5c8bf0
*/
void sub_c73750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73750ULL || rel >= 0xc737e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c737e0 size=32 callers=1 calls=0
*/
void sub_c737e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc737e0ULL || rel >= 0xc73800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73800 size=48 callers=4 calls=0
*/
void sub_c73800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73800ULL || rel >= 0xc73830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73830 size=32 callers=1 calls=0
*/
void sub_c73830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73830ULL || rel >= 0xc73850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73850 size=48 callers=1 calls=0
*/
void sub_c73850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73850ULL || rel >= 0xc73880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73880 size=368 callers=3 calls=1
   calls: sub_13ca4c0
*/
void sub_c73880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73880ULL || rel >= 0xc739f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c739f0 size=48 callers=1 calls=1
   calls: sub_c73490
*/
void sub_c739f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc739f0ULL || rel >= 0xc73a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73a20 size=16 callers=1 calls=0
*/
void sub_c73a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73a20ULL || rel >= 0xc73a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73a30 size=1280 callers=0 calls=6
   calls: sub_13ca4c0, sub_5c7eb0, sub_5cbe50, sub_c73370, sub_c73490, sub_c73880
*/
void sub_c73a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73a30ULL || rel >= 0xc73f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73f30 size=32 callers=0 calls=0
*/
void sub_c73f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73f30ULL || rel >= 0xc73f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c73f50 size=304 callers=0 calls=2
   calls: sub_5c6a10, sub_5e2bc0
*/
void sub_c73f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73f50ULL || rel >= 0xc74080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74080 size=16 callers=0 calls=0
*/
void sub_c74080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74080ULL || rel >= 0xc74090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74090 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_c74090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74090ULL || rel >= 0xc74100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74100 size=16 callers=0 calls=0
*/
void sub_c74100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74100ULL || rel >= 0xc74110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74110 size=16 callers=0 calls=0
*/
void sub_c74110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74110ULL || rel >= 0xc74120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74120 size=16 callers=0 calls=0
*/
void sub_c74120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74120ULL || rel >= 0xc74130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74130 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c74130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74130ULL || rel >= 0xc74220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74220 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_c74220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74220ULL || rel >= 0xc74310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74310 size=16 callers=0 calls=0
*/
void sub_c74310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74310ULL || rel >= 0xc74320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74320 size=16 callers=0 calls=0
*/
void sub_c74320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74320ULL || rel >= 0xc74330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74330 size=32 callers=0 calls=0
*/
void sub_c74330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74330ULL || rel >= 0xc74350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74350 size=32 callers=0 calls=0
*/
void sub_c74350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74350ULL || rel >= 0xc74370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74370 size=640 callers=4 calls=1
   calls: sub_13ca4c0
*/
void sub_c74370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74370ULL || rel >= 0xc745f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c745f0 size=2032 callers=10 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_c74de0, sub_df90
*/
void sub_c745f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc745f0ULL || rel >= 0xc74de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74de0 size=256 callers=2 calls=2
   calls: sub_1114150, sub_5e2180
*/
void sub_c74de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74de0ULL || rel >= 0xc74ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c74ee0 size=288 callers=1 calls=3
   calls: sub_1116c70, sub_5cf8c0, sub_5db1b0
*/
void sub_c74ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74ee0ULL || rel >= 0xc75000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75000 size=272 callers=2 calls=3
   calls: sub_5cf8c0, sub_5db1b0, sub_c75110
*/
void sub_c75000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75000ULL || rel >= 0xc75110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75110 size=432 callers=2 calls=7
   calls: sub_13ca4c0, sub_5c8220, sub_5c8300, sub_5c83e0, sub_5c83f0, sub_5cc040, sub_5cf8f0
*/
void sub_c75110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75110ULL || rel >= 0xc752c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c752c0 size=208 callers=0 calls=2
   calls: sub_5cf8d0, sub_c758f0
*/
void sub_c752c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc752c0ULL || rel >= 0xc75390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75390 size=208 callers=0 calls=2
   calls: sub_5cf8d0, sub_c758f0
*/
void sub_c75390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75390ULL || rel >= 0xc75460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75460 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_c75460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75460ULL || rel >= 0xc754d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c754d0 size=208 callers=0 calls=2
   calls: sub_5cf8d0, sub_c758f0
*/
void sub_c754d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc754d0ULL || rel >= 0xc755a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c755a0 size=208 callers=0 calls=2
   calls: sub_5cf8d0, sub_c758f0
*/
void sub_c755a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc755a0ULL || rel >= 0xc75670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75670 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_c75670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75670ULL || rel >= 0xc756e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c756e0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_c756e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc756e0ULL || rel >= 0xc75750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75750 size=208 callers=0 calls=2
   calls: sub_5cf8d0, sub_c758f0
*/
void sub_c75750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75750ULL || rel >= 0xc75820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75820 size=208 callers=0 calls=2
   calls: sub_5cf8d0, sub_c758f0
*/
void sub_c75820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75820ULL || rel >= 0xc758f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c758f0 size=560 callers=6 calls=5
   calls: sub_13ca4c0, sub_5c8400, sub_5c86e0, sub_5cc040, sub_5cf8f0
*/
void sub_c758f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc758f0ULL || rel >= 0xc75b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75b20 size=32 callers=4 calls=0
*/
void sub_c75b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75b20ULL || rel >= 0xc75b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75b40 size=16 callers=82 calls=0
*/
void sub_c75b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75b40ULL || rel >= 0xc75b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75b50 size=16 callers=0 calls=0
*/
void sub_c75b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75b50ULL || rel >= 0xc75b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75b60 size=32 callers=3 calls=0
*/
void sub_c75b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75b60ULL || rel >= 0xc75b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75b80 size=368 callers=0 calls=0
*/
void sub_c75b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75b80ULL || rel >= 0xc75cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75cf0 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75cf0ULL || rel >= 0xc75ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c75ec0 size=3840 callers=1 calls=9
   calls: SYS_WORK__s_REPLACE, sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_5d8ee0, sub_5e2bc0, sub_65d700, sub_c76ef0, sub_c7c230
*/
void sub_c75ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75ec0ULL || rel >= 0xc76dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c76dc0 size=304 callers=1 calls=2
   calls: sub_135a760, sub_135a9a0
   ref: SYS_WORK_%s_REPLACE
*/
void SYS_WORK__s_REPLACE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc76dc0ULL || rel >= 0xc76ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c76ef0 size=2016 callers=1 calls=1
   calls: sub_c7efa0
*/
void sub_c76ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc76ef0ULL || rel >= 0xc776d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c776d0 size=1248 callers=0 calls=9
   calls: sub_5e2930, sub_8c2c10, sub_bf3a10, sub_c50a30, sub_c77c00, sub_c77da0, sub_c77f20, sub_c780a0, sub_c7cd70
   ref: bin/archive/field/resident/instance_obj.gfpak
*/
void instance_obj(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc776d0ULL || rel >= 0xc77bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c77bb0 size=80 callers=1 calls=0
*/
void sub_c77bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc77bb0ULL || rel >= 0xc77c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c77c00 size=416 callers=1 calls=6
   calls: sub_11161b0, sub_1116b50, sub_13ca4c0, sub_5cbb00, sub_5cbf10, sub_5d99d0
*/
void sub_c77c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc77c00ULL || rel >= 0xc77da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c77da0 size=384 callers=1 calls=3
   calls: sub_5e2930, sub_96a5a0, sub_bf3a10
*/
void sub_c77da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc77da0ULL || rel >= 0xc77f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c77f20 size=384 callers=1 calls=3
   calls: sub_5dd790, sub_5e2930, sub_bf3a10
*/
void sub_c77f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc77f20ULL || rel >= 0xc780a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c780a0 size=384 callers=1 calls=3
   calls: sub_5e2930, sub_b77710, sub_bf3a10
*/
void sub_c780a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc780a0ULL || rel >= 0xc78220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c78220 size=688 callers=3 calls=4
   calls: sub_618160, sub_6527d0, sub_c784d0, sub_c7daf0
*/
void sub_c78220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc78220ULL || rel >= 0xc784d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c784d0 size=416 callers=4 calls=3
   calls: sub_607750, sub_6527d0, sub_652800
*/
void sub_c784d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc784d0ULL || rel >= 0xc78670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c78670 size=2112 callers=1 calls=20
   calls: Collider_dRadius, a_t0101_i0101_gamemachine02_bld1, sub_122b8a0, sub_598de0, sub_59b280, sub_59e990, sub_59f220, sub_5a0790, sub_5cf8e0, sub_5cf8f0, sub_5d99d0, sub_6527d0
   ... +8 more
*/
void sub_c78670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc78670ULL || rel >= 0xc78eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c78eb0 size=848 callers=1 calls=3
   calls: sub_689950, sub_c7b5c0, sub_c7b730
   ref: a_t0101_i0101_gamemachine02_bld1
   ref: a_t0101_i0101_gamemachine02_bld
   ref: /a_t0101_i0101/
*/
void a_t0101_i0101_gamemachine02_bld1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc78eb0ULL || rel >= 0xc79200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c79200 size=160 callers=7 calls=0
*/
void sub_c79200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc79200ULL || rel >= 0xc792a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c792a0 size=128 callers=2 calls=2
   calls: sub_c79320, sub_c794a0
*/
void sub_c792a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc792a0ULL || rel >= 0xc79320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c79320 size=384 callers=1 calls=3
   calls: sub_5e2930, sub_bf3a10, sub_c745f0
*/
void sub_c79320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc79320ULL || rel >= 0xc794a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c794a0 size=1328 callers=1 calls=1
   calls: sub_e9ab60
*/
void sub_c794a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc794a0ULL || rel >= 0xc799d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c799d0 size=448 callers=1 calls=3
   calls: sub_5e2bc0, sub_c65130, sub_c79b90
*/
void sub_c799d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc799d0ULL || rel >= 0xc79b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c79b90 size=352 callers=1 calls=0
*/
void sub_c79b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc79b90ULL || rel >= 0xc79cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c79cf0 size=96 callers=0 calls=1
   calls: sub_c799d0
*/
void sub_c79cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc79cf0ULL || rel >= 0xc79d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c79d50 size=336 callers=0 calls=0
*/
void sub_c79d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc79d50ULL || rel >= 0xc79ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c79ea0 size=48 callers=2 calls=2
   calls: sub_c52c40, sub_c6ff00
*/
void sub_c79ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc79ea0ULL || rel >= 0xc79ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c79ed0 size=16 callers=0 calls=0
*/
void sub_c79ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc79ed0ULL || rel >= 0xc79ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c79ee0 size=336 callers=0 calls=1
   calls: sub_c7f2b0
*/
void sub_c79ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc79ee0ULL || rel >= 0xc7a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7a030 size=16 callers=0 calls=0
*/
void sub_c7a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a030ULL || rel >= 0xc7a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7a040 size=48 callers=0 calls=0
*/
void sub_c7a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a040ULL || rel >= 0xc7a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7a070 size=64 callers=2 calls=2
   calls: sub_59b1f0, sub_59b200
*/
void sub_c7a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a070ULL || rel >= 0xc7a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c7a0b0 size=288 callers=2 calls=7
   calls: sub_59b2c0, sub_59b2d0, sub_59f220, sub_5a0820, sub_619060, sub_6527d0, sub_652830
*/
void sub_c7a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a0b0ULL || rel >= 0xc7a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

