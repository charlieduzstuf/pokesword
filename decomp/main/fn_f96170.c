/* main functions 00f96170..00fae7c0 (124 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00f96170 size=16 callers=0 calls=0
*/
void sub_f96170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96170ULL || rel >= 0xf96180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96180 size=16 callers=0 calls=0
*/
void sub_f96180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96180ULL || rel >= 0xf96190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96190 size=16 callers=0 calls=0
*/
void sub_f96190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96190ULL || rel >= 0xf961a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f961a0 size=448 callers=21 calls=0
*/
void sub_f961a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf961a0ULL || rel >= 0xf96360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96360 size=2368 callers=2 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2180, sub_5e2500, sub_5e6970, sub_df90
*/
void sub_f96360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96360ULL || rel >= 0xf96ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96ca0 size=416 callers=1 calls=0
*/
void sub_f96ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96ca0ULL || rel >= 0xf96e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96e40 size=16 callers=24 calls=0
*/
void sub_f96e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96e40ULL || rel >= 0xf96e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96e50 size=64 callers=1 calls=0
*/
void sub_f96e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96e50ULL || rel >= 0xf96e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96e90 size=96 callers=2 calls=0
*/
void sub_f96e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96e90ULL || rel >= 0xf96ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96ef0 size=368 callers=0 calls=0
*/
void sub_f96ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96ef0ULL || rel >= 0xf97060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f97060 size=800 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf97060ULL || rel >= 0xf97380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f97380 size=128 callers=1 calls=1
   calls: sub_f97400
*/
void sub_f97380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf97380ULL || rel >= 0xf97400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f97400 size=416 callers=1 calls=3
   calls: sub_c38350, sub_e9db40, sub_f977c0
*/
void sub_f97400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf97400ULL || rel >= 0xf975a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f975a0 size=128 callers=1 calls=1
   calls: sub_f97620
*/
void sub_f975a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf975a0ULL || rel >= 0xf97620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f97620 size=416 callers=1 calls=3
   calls: sub_c38350, sub_e9da70, sub_f97bf0
*/
void sub_f97620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf97620ULL || rel >= 0xf977c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f977c0 size=1072 callers=1 calls=4
   calls: sub_a74910, sub_e893e0, sub_e9d130, sub_f9eb20
*/
void sub_f977c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf977c0ULL || rel >= 0xf97bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f97bf0 size=1072 callers=1 calls=4
   calls: sub_a74910, sub_e893e0, sub_e9d130, sub_f9ef60
*/
void sub_f97bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf97bf0ULL || rel >= 0xf98020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f98020 size=160 callers=0 calls=1
   calls: sub_f9cab0
*/
void sub_f98020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf98020ULL || rel >= 0xf980c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f980c0 size=1216 callers=0 calls=15
   calls: sub_1050000, sub_10f67c0, sub_10f7a10, sub_13517a0, sub_14e0350, sub_14e0550, sub_f9cc80, sub_f9cd60, sub_f9ce40, sub_f9cf60, sub_f9d050, sub_f9de10
   ... +3 more
*/
void sub_f980c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf980c0ULL || rel >= 0xf98580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f98580 size=256 callers=0 calls=8
   calls: sub_104e030, sub_104ffc0, sub_10f67c0, sub_10f79f0, sub_14e0450, sub_14e0550, sub_f9dec0, sub_ffa4b0
*/
void sub_f98580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf98580ULL || rel >= 0xf98680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f98680 size=5296 callers=0 calls=43
   calls: a_btl37_wr03, a_btl37_wr03_2, sub_101d400, sub_104dbb0, sub_104fb70, sub_1050060, sub_105c390, sub_10617a0, sub_10619f0, sub_106e4e0, sub_106e7c0, sub_106f340
   ... +31 more
   ref: Play_UI_Gnest_start_Gbattle
*/
void Play_UI_Gnest_start_Gbattle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf98680ULL || rel >= 0xf99b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f99b30 size=416 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_f9fa50
*/
void sub_f99b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf99b30ULL || rel >= 0xf99cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f99cd0 size=2192 callers=1 calls=12
   calls: battleEffectId, sound_attr, sub_1c0, sub_762930, sub_762940, sub_763cc0, sub_76f550, sub_76f7e0, sub_783bd0, sub_7f4470, sub_7f4580, sub_7f4fd0
   ref: a_btl37_wr03
   ref: NONE_NONE
*/
void a_btl37_wr03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf99cd0ULL || rel >= 0xf9a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9a560 size=3984 callers=1 calls=22
   calls: battleEffectId, sound_attr, sub_1052ca0, sub_105c3c0, sub_1061810, sub_10619f0, sub_136b860, sub_136b870, sub_136b8b0, sub_1c0, sub_6ae9d0, sub_7626f0
   ... +10 more
   ref: a_btl37_wr03
   ref: NONE_NONE
*/
void a_btl37_wr03_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9a560ULL || rel >= 0xf9b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9b4f0 size=1488 callers=1 calls=15
   calls: sub_1052de0, sub_1061810, sub_1061830, sub_1063e60, sub_1064370, sub_1064450, sub_106e4e0, sub_106ead0, sub_106eae0, sub_106eaf0, sub_106eb00, sub_1075c50
   ... +3 more
*/
void sub_f9b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9b4f0ULL || rel >= 0xf9bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9bac0 size=432 callers=4 calls=3
   calls: sub_c38350, sub_e9db40, sub_fb98b0
*/
void sub_f9bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9bac0ULL || rel >= 0xf9bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9bc70 size=832 callers=1 calls=4
   calls: sub_136c810, sub_e9ca60, sub_f9c360, sub_f9c450
*/
void sub_f9bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9bc70ULL || rel >= 0xf9bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9bfb0 size=288 callers=1 calls=5
   calls: sub_ebccd0, sub_ebcfb0, sub_ebd130, sub_ebd180, sub_f9c860
*/
void sub_f9bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9bfb0ULL || rel >= 0xf9c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c0d0 size=512 callers=1 calls=3
   calls: sub_134f490, sub_f9ea00, sub_f9eab0
*/
void sub_f9c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c0d0ULL || rel >= 0xf9c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c2d0 size=144 callers=1 calls=5
   calls: sub_101ddb0, sub_101e020, sub_101e420, sub_f9df70, sub_f9df80
*/
void sub_f9c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c2d0ULL || rel >= 0xf9c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c360 size=240 callers=2 calls=2
   calls: sub_137b970, sub_e91740
*/
void sub_f9c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c360ULL || rel >= 0xf9c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c450 size=256 callers=2 calls=2
   calls: sub_136c810, sub_e8d6f0
*/
void sub_f9c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c450ULL || rel >= 0xf9c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c550 size=480 callers=0 calls=1
   calls: sub_e89590
*/
void sub_f9c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c550ULL || rel >= 0xf9c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c730 size=16 callers=0 calls=0
*/
void sub_f9c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c730ULL || rel >= 0xf9c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c740 size=16 callers=0 calls=0
*/
void sub_f9c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c740ULL || rel >= 0xf9c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c750 size=16 callers=0 calls=0
*/
void sub_f9c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c750ULL || rel >= 0xf9c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c760 size=16 callers=0 calls=0
*/
void sub_f9c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c760ULL || rel >= 0xf9c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c770 size=16 callers=0 calls=0
*/
void sub_f9c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c770ULL || rel >= 0xf9c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c780 size=16 callers=0 calls=0
*/
void sub_f9c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c780ULL || rel >= 0xf9c790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c790 size=16 callers=0 calls=0
*/
void sub_f9c790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c790ULL || rel >= 0xf9c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c7a0 size=16 callers=0 calls=0
*/
void sub_f9c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c7a0ULL || rel >= 0xf9c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c7b0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_f9c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c7b0ULL || rel >= 0xf9c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c800 size=96 callers=0 calls=0
*/
void sub_f9c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c800ULL || rel >= 0xf9c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c860 size=288 callers=20 calls=0
*/
void sub_f9c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c860ULL || rel >= 0xf9c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9c980 size=304 callers=0 calls=0
*/
void sub_f9c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9c980ULL || rel >= 0xf9cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9cab0 size=464 callers=194 calls=0
*/
void sub_f9cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9cab0ULL || rel >= 0xf9cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9cc80 size=224 callers=1 calls=1
   calls: sub_fb7d70
*/
void sub_f9cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9cc80ULL || rel >= 0xf9cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9cd60 size=224 callers=1 calls=1
   calls: sub_f9f640
*/
void sub_f9cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9cd60ULL || rel >= 0xf9ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9ce40 size=288 callers=1 calls=1
   calls: sub_f9dc70
*/
void sub_f9ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9ce40ULL || rel >= 0xf9cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9cf60 size=240 callers=1 calls=1
   calls: sub_101c750
*/
void sub_f9cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9cf60ULL || rel >= 0xf9d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d050 size=96 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_f9d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d050ULL || rel >= 0xf9d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d0b0 size=624 callers=5 calls=10
   calls: sub_10646f0, sub_106e4e0, sub_106e7c0, sub_106eac0, sub_106eb00, sub_106ef20, sub_1074cb0, sub_f18350, sub_f9d830, sub_f9da00
*/
void sub_f9d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d0b0ULL || rel >= 0xf9d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d320 size=160 callers=12 calls=4
   calls: sub_10646f0, sub_106e4e0, sub_1074c90, sub_f18350
*/
void sub_f9d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d320ULL || rel >= 0xf9d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d3c0 size=144 callers=0 calls=0
*/
void sub_f9d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d3c0ULL || rel >= 0xf9d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d450 size=144 callers=0 calls=0
*/
void sub_f9d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d450ULL || rel >= 0xf9d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d4e0 size=240 callers=0 calls=0
*/
void sub_f9d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d4e0ULL || rel >= 0xf9d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d5d0 size=144 callers=0 calls=0
*/
void sub_f9d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d5d0ULL || rel >= 0xf9d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d660 size=144 callers=0 calls=0
*/
void sub_f9d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d660ULL || rel >= 0xf9d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d6f0 size=16 callers=0 calls=0
*/
void sub_f9d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d6f0ULL || rel >= 0xf9d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d700 size=16 callers=0 calls=0
*/
void sub_f9d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d700ULL || rel >= 0xf9d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d710 size=144 callers=0 calls=0
*/
void sub_f9d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d710ULL || rel >= 0xf9d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d7a0 size=144 callers=0 calls=0
*/
void sub_f9d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d7a0ULL || rel >= 0xf9d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9d830 size=464 callers=61 calls=0
*/
void sub_f9d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9d830ULL || rel >= 0xf9da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9da00 size=464 callers=1 calls=0
*/
void sub_f9da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9da00ULL || rel >= 0xf9dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9dbd0 size=160 callers=0 calls=0
*/
void sub_f9dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9dbd0ULL || rel >= 0xf9dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9dc70 size=416 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_f9dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9dc70ULL || rel >= 0xf9de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9de10 size=176 callers=1 calls=1
   calls: sub_6aea40
*/
void sub_f9de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9de10ULL || rel >= 0xf9dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9dec0 size=176 callers=1 calls=1
   calls: sub_6aeb70
*/
void sub_f9dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9dec0ULL || rel >= 0xf9df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9df70 size=16 callers=16 calls=0
*/
void sub_f9df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9df70ULL || rel >= 0xf9df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9df80 size=16 callers=7 calls=0
*/
void sub_f9df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9df80ULL || rel >= 0xf9df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9df90 size=32 callers=6 calls=0
*/
void sub_f9df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9df90ULL || rel >= 0xf9dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9dfb0 size=16 callers=0 calls=0
*/
void sub_f9dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9dfb0ULL || rel >= 0xf9dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9dfc0 size=16 callers=0 calls=0
*/
void sub_f9dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9dfc0ULL || rel >= 0xf9dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9dfd0 size=16 callers=0 calls=0
*/
void sub_f9dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9dfd0ULL || rel >= 0xf9dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9dfe0 size=16 callers=0 calls=0
*/
void sub_f9dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9dfe0ULL || rel >= 0xf9dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9dff0 size=16 callers=0 calls=0
*/
void sub_f9dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9dff0ULL || rel >= 0xf9e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e000 size=16 callers=0 calls=0
*/
void sub_f9e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e000ULL || rel >= 0xf9e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e010 size=16 callers=0 calls=0
*/
void sub_f9e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e010ULL || rel >= 0xf9e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e020 size=16 callers=0 calls=0
*/
void sub_f9e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e020ULL || rel >= 0xf9e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e030 size=16 callers=0 calls=0
*/
void sub_f9e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e030ULL || rel >= 0xf9e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e040 size=256 callers=0 calls=1
   calls: sub_6bb230
*/
void sub_f9e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e040ULL || rel >= 0xf9e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e140 size=32 callers=0 calls=0
*/
void sub_f9e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e140ULL || rel >= 0xf9e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e160 size=160 callers=0 calls=0
*/
void sub_f9e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e160ULL || rel >= 0xf9e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e200 size=160 callers=0 calls=0
*/
void sub_f9e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e200ULL || rel >= 0xf9e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e2a0 size=160 callers=0 calls=2
   calls: sub_f9d0b0, sub_f9e760
*/
void sub_f9e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e2a0ULL || rel >= 0xf9e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e340 size=160 callers=0 calls=2
   calls: sub_f9d0b0, sub_f9e760
*/
void sub_f9e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e340ULL || rel >= 0xf9e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e3e0 size=64 callers=4 calls=1
   calls: sub_1061810
*/
void sub_f9e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e3e0ULL || rel >= 0xf9e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e420 size=96 callers=0 calls=1
   calls: sub_104bf60
*/
void sub_f9e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e420ULL || rel >= 0xf9e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e480 size=96 callers=0 calls=1
   calls: sub_104bf60
*/
void sub_f9e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e480ULL || rel >= 0xf9e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e4e0 size=240 callers=0 calls=0
*/
void sub_f9e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e4e0ULL || rel >= 0xf9e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e5d0 size=16 callers=0 calls=0
*/
void sub_f9e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e5d0ULL || rel >= 0xf9e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e5e0 size=240 callers=0 calls=0
*/
void sub_f9e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e5e0ULL || rel >= 0xf9e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e6d0 size=16 callers=0 calls=0
*/
void sub_f9e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e6d0ULL || rel >= 0xf9e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e6e0 size=16 callers=0 calls=0
*/
void sub_f9e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e6e0ULL || rel >= 0xf9e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e6f0 size=16 callers=0 calls=0
*/
void sub_f9e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e6f0ULL || rel >= 0xf9e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e700 size=16 callers=0 calls=0
*/
void sub_f9e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e700ULL || rel >= 0xf9e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e710 size=16 callers=0 calls=0
*/
void sub_f9e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e710ULL || rel >= 0xf9e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e720 size=16 callers=0 calls=0
*/
void sub_f9e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e720ULL || rel >= 0xf9e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e730 size=16 callers=0 calls=0
*/
void sub_f9e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e730ULL || rel >= 0xf9e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e740 size=16 callers=0 calls=0
*/
void sub_f9e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e740ULL || rel >= 0xf9e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e750 size=16 callers=0 calls=0
*/
void sub_f9e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e750ULL || rel >= 0xf9e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e760 size=464 callers=8 calls=0
*/
void sub_f9e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e760ULL || rel >= 0xf9e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e930 size=160 callers=0 calls=0
*/
void sub_f9e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e930ULL || rel >= 0xf9e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e9d0 size=16 callers=1 calls=0
*/
void sub_f9e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e9d0ULL || rel >= 0xf9e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9e9e0 size=32 callers=1 calls=0
*/
void sub_f9e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9e9e0ULL || rel >= 0xf9ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9ea00 size=64 callers=1 calls=0
*/
void sub_f9ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9ea00ULL || rel >= 0xf9ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9ea40 size=112 callers=6 calls=0
*/
void sub_f9ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9ea40ULL || rel >= 0xf9eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9eab0 size=112 callers=1 calls=0
*/
void sub_f9eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9eab0ULL || rel >= 0xf9eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9eb20 size=848 callers=1 calls=5
   calls: sub_105c390, sub_5e2350, sub_784960, sub_d62e30, sub_e59430
*/
void sub_f9eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9eb20ULL || rel >= 0xf9ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9ee70 size=240 callers=1 calls=1
   calls: sub_784960
*/
void sub_f9ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9ee70ULL || rel >= 0xf9ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9ef60 size=672 callers=1 calls=14
   calls: sub_105c390, sub_106f360, sub_106f370, sub_106f380, sub_106f390, sub_106f3b0, sub_106f3c0, sub_106f3d0, sub_106f3e0, sub_106f3f0, sub_1078430, sub_5e2350
   ... +2 more
*/
void sub_f9ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9ef60ULL || rel >= 0xf9f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f200 size=256 callers=6 calls=2
   calls: sub_1368cb0, sub_f59e10
*/
void sub_f9f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f200ULL || rel >= 0xf9f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f300 size=320 callers=0 calls=0
*/
void sub_f9f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f300ULL || rel >= 0xf9f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f440 size=16 callers=0 calls=0
*/
void sub_f9f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f440ULL || rel >= 0xf9f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f450 size=240 callers=0 calls=0
*/
void sub_f9f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f450ULL || rel >= 0xf9f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f540 size=16 callers=0 calls=0
*/
void sub_f9f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f540ULL || rel >= 0xf9f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f550 size=16 callers=0 calls=0
*/
void sub_f9f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f550ULL || rel >= 0xf9f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f560 size=16 callers=0 calls=0
*/
void sub_f9f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f560ULL || rel >= 0xf9f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f570 size=16 callers=0 calls=0
*/
void sub_f9f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f570ULL || rel >= 0xf9f580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f580 size=16 callers=0 calls=0
*/
void sub_f9f580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f580ULL || rel >= 0xf9f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f590 size=16 callers=0 calls=0
*/
void sub_f9f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f590ULL || rel >= 0xf9f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f5a0 size=160 callers=0 calls=0
*/
void sub_f9f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f5a0ULL || rel >= 0xf9f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f640 size=80 callers=2 calls=2
   calls: sub_5e2350, sub_e76a20
*/
void sub_f9f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f640ULL || rel >= 0xf9f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f690 size=32 callers=4 calls=0
*/
void sub_f9f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f690ULL || rel >= 0xf9f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f6b0 size=256 callers=4 calls=5
   calls: strinput, sub_e76980, sub_e769b0, sub_e76a20, sub_e79cd0
*/
void sub_f9f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f6b0ULL || rel >= 0xf9f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f7b0 size=80 callers=0 calls=0
*/
void sub_f9f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f7b0ULL || rel >= 0xf9f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f800 size=240 callers=0 calls=0
*/
void sub_f9f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f800ULL || rel >= 0xf9f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f8f0 size=80 callers=0 calls=0
*/
void sub_f9f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f8f0ULL || rel >= 0xf9f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f940 size=80 callers=0 calls=0
*/
void sub_f9f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f940ULL || rel >= 0xf9f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f990 size=16 callers=0 calls=0
*/
void sub_f9f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f990ULL || rel >= 0xf9f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f9a0 size=16 callers=0 calls=0
*/
void sub_f9f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f9a0ULL || rel >= 0xf9f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9f9b0 size=80 callers=0 calls=0
*/
void sub_f9f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9f9b0ULL || rel >= 0xf9fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9fa00 size=80 callers=0 calls=0
*/
void sub_f9fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9fa00ULL || rel >= 0xf9fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9fa50 size=224 callers=1 calls=2
   calls: sub_e7b660, sub_f9fb30
*/
void sub_f9fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9fa50ULL || rel >= 0xf9fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9fb30 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_fa1120
*/
void sub_f9fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9fb30ULL || rel >= 0xf9fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9fc10 size=992 callers=0 calls=15
   calls: sub_78f150, sub_78f240, sub_79ab20, sub_79b250, sub_a7b850, sub_e7c0f0, sub_e7e890, sub_ebb020, sub_f9d830, sub_f9fff0, sub_fa1210, sub_fa1340
   ... +3 more
   ref: View_NestHole
   ref: View_SystemMessage
   ref: View_Optionbar
   ref: common/nest.dat
   ref: TipsView
*/
void View_SystemMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9fc10ULL || rel >= 0xf9fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f9fff0 size=400 callers=2 calls=3
   calls: sub_e7c160, sub_fa1210, sub_fa2190
*/
void sub_f9fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9fff0ULL || rel >= 0xfa0180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0180 size=16 callers=0 calls=0
*/
void sub_fa0180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0180ULL || rel >= 0xfa0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0190 size=416 callers=0 calls=6
   calls: sub_14ac430, sub_1500ea0, sub_5cfaf0, sub_795bc0, sub_a800f0, sub_fa19c0
   ref: View_NestHole
   ref: View_Optionbar
*/
void View_Optionbar(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0190ULL || rel >= 0xfa0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0330 size=336 callers=0 calls=5
   calls: sub_f9d830, sub_fa1340, sub_fb8970, sub_fb8e10, sub_fb8fe0
*/
void sub_fa0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0330ULL || rel >= 0xfa0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0480 size=784 callers=0 calls=8
   calls: sub_104e050, sub_e7c160, sub_f9d830, sub_fa1b10, sub_fa1c30, sub_fa1d50, sub_fa1e70, sub_fa1f90
*/
void sub_fa0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0480ULL || rel >= 0xfa0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0790 size=16 callers=0 calls=0
*/
void sub_fa0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0790ULL || rel >= 0xfa07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa07a0 size=560 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fa07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa07a0ULL || rel >= 0xfa09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa09d0 size=16 callers=0 calls=0
*/
void sub_fa09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa09d0ULL || rel >= 0xfa09e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa09e0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fa09e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa09e0ULL || rel >= 0xfa0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0a90 size=16 callers=0 calls=0
*/
void sub_fa0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0a90ULL || rel >= 0xfa0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0aa0 size=16 callers=0 calls=0
*/
void sub_fa0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0aa0ULL || rel >= 0xfa0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0ab0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fa0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0ab0ULL || rel >= 0xfa0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0b60 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fa0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0b60ULL || rel >= 0xfa0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0c10 size=16 callers=0 calls=0
*/
void sub_fa0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0c10ULL || rel >= 0xfa0c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0c20 size=16 callers=0 calls=0
*/
void sub_fa0c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0c20ULL || rel >= 0xfa0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0c30 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_fa0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0c30ULL || rel >= 0xfa0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0cb0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fa0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0cb0ULL || rel >= 0xfa0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0e20 size=96 callers=0 calls=1
   calls: sub_fa1040
*/
void sub_fa0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0e20ULL || rel >= 0xfa0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0e80 size=16 callers=0 calls=0
*/
void sub_fa0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0e80ULL || rel >= 0xfa0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0e90 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_fa0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0e90ULL || rel >= 0xfa0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0f30 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_fa0f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0f30ULL || rel >= 0xfa0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa0ff0 size=16 callers=0 calls=0
*/
void sub_fa0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0ff0ULL || rel >= 0xfa1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1000 size=16 callers=0 calls=0
*/
void sub_fa1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1000ULL || rel >= 0xfa1010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1010 size=16 callers=0 calls=0
*/
void sub_fa1010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1010ULL || rel >= 0xfa1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1020 size=32 callers=0 calls=0
*/
void sub_fa1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1020ULL || rel >= 0xfa1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1040 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_fa1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1040ULL || rel >= 0xfa1120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1120 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fa1120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1120ULL || rel >= 0xfa1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1210 size=304 callers=9 calls=0
*/
void sub_fa1210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1210ULL || rel >= 0xfa1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1340 size=464 callers=11 calls=0
*/
void sub_fa1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1340ULL || rel >= 0xfa1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1510 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_fa1630
*/
void sub_fa1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1510ULL || rel >= 0xfa1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1630 size=384 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_fa17b0
*/
void sub_fa1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1630ULL || rel >= 0xfa17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa17b0 size=528 callers=1 calls=1
   calls: anonymous_2
*/
void sub_fa17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa17b0ULL || rel >= 0xfa19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa19c0 size=336 callers=6 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_fa19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa19c0ULL || rel >= 0xfa1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1b10 size=288 callers=1 calls=1
   calls: StateFirstPokemonValidation
*/
void sub_fa1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1b10ULL || rel >= 0xfa1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1c30 size=288 callers=1 calls=1
   calls: StateHostTop
*/
void sub_fa1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1c30ULL || rel >= 0xfa1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1d50 size=288 callers=1 calls=1
   calls: StateHostReady
*/
void sub_fa1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1d50ULL || rel >= 0xfa1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1e70 size=288 callers=1 calls=1
   calls: StateGuestTop
*/
void sub_fa1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1e70ULL || rel >= 0xfa1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa1f90 size=288 callers=1 calls=1
   calls: StateGuestReady
*/
void sub_fa1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1f90ULL || rel >= 0xfa20b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa20b0 size=224 callers=0 calls=0
   ref: common/nest.dat
*/
void nest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa20b0ULL || rel >= 0xfa2190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2190 size=80 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_fa2190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2190ULL || rel >= 0xfa21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa21e0 size=16 callers=2 calls=0
*/
void sub_fa21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa21e0ULL || rel >= 0xfa21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa21f0 size=336 callers=0 calls=0
*/
void sub_fa21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa21f0ULL || rel >= 0xfa2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2340 size=32 callers=6 calls=0
*/
void sub_fa2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2340ULL || rel >= 0xfa2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2360 size=32 callers=5 calls=0
*/
void sub_fa2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2360ULL || rel >= 0xfa2380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2380 size=32 callers=4 calls=0
*/
void sub_fa2380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2380ULL || rel >= 0xfa23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa23a0 size=32 callers=2 calls=0
*/
void sub_fa23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa23a0ULL || rel >= 0xfa23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa23c0 size=32 callers=3 calls=0
*/
void sub_fa23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa23c0ULL || rel >= 0xfa23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa23e0 size=32 callers=5 calls=0
*/
void sub_fa23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa23e0ULL || rel >= 0xfa2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2400 size=208 callers=0 calls=0
*/
void sub_fa2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2400ULL || rel >= 0xfa24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa24d0 size=16 callers=0 calls=0
*/
void sub_fa24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa24d0ULL || rel >= 0xfa24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa24e0 size=16 callers=0 calls=0
*/
void sub_fa24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa24e0ULL || rel >= 0xfa24f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa24f0 size=16 callers=0 calls=0
*/
void sub_fa24f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa24f0ULL || rel >= 0xfa2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2500 size=16 callers=0 calls=0
*/
void sub_fa2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2500ULL || rel >= 0xfa2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2510 size=16 callers=0 calls=0
*/
void sub_fa2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2510ULL || rel >= 0xfa2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2520 size=16 callers=0 calls=0
*/
void sub_fa2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2520ULL || rel >= 0xfa2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2530 size=16 callers=0 calls=0
*/
void sub_fa2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2530ULL || rel >= 0xfa2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2540 size=16 callers=0 calls=0
*/
void sub_fa2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2540ULL || rel >= 0xfa2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2550 size=160 callers=0 calls=0
*/
void sub_fa2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2550ULL || rel >= 0xfa25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa25f0 size=304 callers=1 calls=2
   calls: sub_5e2350, sub_fa2d70
*/
void sub_fa25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa25f0ULL || rel >= 0xfa2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2720 size=224 callers=1 calls=3
   calls: sub_14dbf60, sub_14dbff0, sub_14dc050
*/
void sub_fa2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2720ULL || rel >= 0xfa2800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2800 size=160 callers=0 calls=0
*/
void sub_fa2800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2800ULL || rel >= 0xfa28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa28a0 size=160 callers=0 calls=0
*/
void sub_fa28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa28a0ULL || rel >= 0xfa2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2940 size=240 callers=0 calls=0
*/
void sub_fa2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2940ULL || rel >= 0xfa2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2a30 size=160 callers=0 calls=0
*/
void sub_fa2a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2a30ULL || rel >= 0xfa2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2ad0 size=160 callers=0 calls=0
*/
void sub_fa2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2ad0ULL || rel >= 0xfa2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2b70 size=16 callers=0 calls=0
*/
void sub_fa2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2b70ULL || rel >= 0xfa2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2b80 size=16 callers=0 calls=0
*/
void sub_fa2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2b80ULL || rel >= 0xfa2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2b90 size=160 callers=0 calls=0
*/
void sub_fa2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2b90ULL || rel >= 0xfa2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2c30 size=160 callers=0 calls=0
*/
void sub_fa2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2c30ULL || rel >= 0xfa2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2cd0 size=160 callers=0 calls=0
*/
void sub_fa2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2cd0ULL || rel >= 0xfa2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2d70 size=208 callers=1 calls=1
   calls: sub_14dbec0
*/
void sub_fa2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2d70ULL || rel >= 0xfa2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2e40 size=240 callers=0 calls=3
   calls: sub_e7c1f0, sub_fa2f30, sub_fa33e0
*/
void sub_fa2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2e40ULL || rel >= 0xfa2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa2f30 size=416 callers=3 calls=1
   calls: sub_c39c40
*/
void sub_fa2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2f30ULL || rel >= 0xfa30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa30d0 size=208 callers=0 calls=4
   calls: sub_e7c1c0, sub_e7c1d0, sub_e7c1f0, sub_fa2f30
*/
void sub_fa30d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa30d0ULL || rel >= 0xfa31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa31a0 size=16 callers=0 calls=0
*/
void sub_fa31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa31a0ULL || rel >= 0xfa31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa31b0 size=128 callers=0 calls=1
   calls: sub_fa3330
*/
void sub_fa31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa31b0ULL || rel >= 0xfa3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3230 size=256 callers=0 calls=0
*/
void sub_fa3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3230ULL || rel >= 0xfa3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3330 size=176 callers=1 calls=0
*/
void sub_fa3330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3330ULL || rel >= 0xfa33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa33e0 size=304 callers=1 calls=2
   calls: sub_672c10, sub_fa35b0
*/
void sub_fa33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa33e0ULL || rel >= 0xfa3510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3510 size=160 callers=0 calls=0
*/
void sub_fa3510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3510ULL || rel >= 0xfa35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa35b0 size=224 callers=1 calls=2
   calls: sub_e7b660, sub_fa3690
*/
void sub_fa35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa35b0ULL || rel >= 0xfa3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3690 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_fa4410
*/
void sub_fa3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3690ULL || rel >= 0xfa3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3770 size=352 callers=0 calls=6
   calls: sub_78f150, sub_e7c0f0, sub_f9fff0, sub_fa1210, sub_fa21e0, sub_fa4500
   ref: ViewNestholeTimer
*/
void ViewNestholeTimer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3770ULL || rel >= 0xfa38d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa38d0 size=208 callers=0 calls=2
   calls: sub_14ac430, sub_fa4850
   ref: ViewNestholeTimer
*/
void ViewNestholeTimer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa38d0ULL || rel >= 0xfa39a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa39a0 size=16 callers=0 calls=0
*/
void sub_fa39a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa39a0ULL || rel >= 0xfa39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa39b0 size=224 callers=0 calls=2
   calls: sub_e7c160, sub_fa4a90
*/
void sub_fa39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa39b0ULL || rel >= 0xfa3a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3a90 size=560 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fa3a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3a90ULL || rel >= 0xfa3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3cc0 size=16 callers=0 calls=0
*/
void sub_fa3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3cc0ULL || rel >= 0xfa3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3cd0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fa3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3cd0ULL || rel >= 0xfa3d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3d80 size=16 callers=0 calls=0
*/
void sub_fa3d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3d80ULL || rel >= 0xfa3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3d90 size=16 callers=0 calls=0
*/
void sub_fa3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3d90ULL || rel >= 0xfa3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3da0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fa3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3da0ULL || rel >= 0xfa3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3e50 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_fa3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3e50ULL || rel >= 0xfa3f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3f00 size=16 callers=0 calls=0
*/
void sub_fa3f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3f00ULL || rel >= 0xfa3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3f10 size=16 callers=0 calls=0
*/
void sub_fa3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3f10ULL || rel >= 0xfa3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3f20 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_fa3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3f20ULL || rel >= 0xfa3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa3fa0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fa3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa3fa0ULL || rel >= 0xfa4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4110 size=96 callers=0 calls=1
   calls: sub_fa4330
*/
void sub_fa4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4110ULL || rel >= 0xfa4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4170 size=16 callers=0 calls=0
*/
void sub_fa4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4170ULL || rel >= 0xfa4180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4180 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_fa4180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4180ULL || rel >= 0xfa4220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4220 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_fa4220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4220ULL || rel >= 0xfa42e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa42e0 size=16 callers=0 calls=0
*/
void sub_fa42e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa42e0ULL || rel >= 0xfa42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa42f0 size=16 callers=0 calls=0
*/
void sub_fa42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa42f0ULL || rel >= 0xfa4300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4300 size=16 callers=0 calls=0
*/
void sub_fa4300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4300ULL || rel >= 0xfa4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4310 size=32 callers=0 calls=0
*/
void sub_fa4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4310ULL || rel >= 0xfa4330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4330 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_fa4330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4330ULL || rel >= 0xfa4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4410 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_fa4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4410ULL || rel >= 0xfa4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4500 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_fa4620
*/
void sub_fa4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4500ULL || rel >= 0xfa4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4620 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_fa4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4620ULL || rel >= 0xfa4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4850 size=272 callers=2 calls=2
   calls: sub_5cfaf0, sub_fa4960
*/
void sub_fa4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4850ULL || rel >= 0xfa4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4960 size=304 callers=1 calls=0
*/
void sub_fa4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4960ULL || rel >= 0xfa4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4a90 size=288 callers=1 calls=1
   calls: StateCountDownTimer
*/
void sub_fa4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4a90ULL || rel >= 0xfa4bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4bb0 size=160 callers=0 calls=0
*/
void sub_fa4bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4bb0ULL || rel >= 0xfa4c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4c50 size=128 callers=0 calls=0
*/
void sub_fa4c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4c50ULL || rel >= 0xfa4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4cd0 size=352 callers=0 calls=2
   calls: sub_1c0, sub_5cfad0
   ref: Play_UI_Gnest_10sec
   ref: Play_UI_Gnest_3sec
*/
void Play_UI_Gnest_10sec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4cd0ULL || rel >= 0xfa4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4e30 size=240 callers=1 calls=2
   calls: anonymous, sub_d0c0
   ref: StateCountDownTimer
*/
void StateCountDownTimer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4e30ULL || rel >= 0xfa4f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa4f20 size=448 callers=0 calls=5
   calls: sub_c39c40, sub_fa1210, sub_fa2340, sub_fa23e0, sub_fa4850
   ref: ViewNestholeTimer
*/
void ViewNestholeTimer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa4f20ULL || rel >= 0xfa50e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa50e0 size=496 callers=0 calls=6
   calls: sub_794330, sub_e80580, sub_e806b0, sub_f9d830, sub_fa56e0, sub_fb7bb0
*/
void sub_fa50e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa50e0ULL || rel >= 0xfa52d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa52d0 size=16 callers=0 calls=0
*/
void sub_fa52d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa52d0ULL || rel >= 0xfa52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa52e0 size=112 callers=0 calls=0
*/
void sub_fa52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa52e0ULL || rel >= 0xfa5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa5350 size=112 callers=0 calls=0
*/
void sub_fa5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa5350ULL || rel >= 0xfa53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa53c0 size=16 callers=0 calls=0
*/
void sub_fa53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa53c0ULL || rel >= 0xfa53d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa53d0 size=112 callers=0 calls=0
*/
void sub_fa53d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa53d0ULL || rel >= 0xfa5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa5440 size=112 callers=0 calls=0
*/
void sub_fa5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa5440ULL || rel >= 0xfa54b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa54b0 size=16 callers=0 calls=0
*/
void sub_fa54b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa54b0ULL || rel >= 0xfa54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa54c0 size=16 callers=0 calls=0
*/
void sub_fa54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa54c0ULL || rel >= 0xfa54d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa54d0 size=112 callers=0 calls=0
*/
void sub_fa54d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa54d0ULL || rel >= 0xfa5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa5540 size=112 callers=0 calls=0
*/
void sub_fa5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa5540ULL || rel >= 0xfa55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa55b0 size=304 callers=0 calls=0
*/
void sub_fa55b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa55b0ULL || rel >= 0xfa56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa56e0 size=464 callers=54 calls=0
*/
void sub_fa56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa56e0ULL || rel >= 0xfa58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa58b0 size=304 callers=1 calls=3
   calls: anonymous, sub_d0c0, sub_fa8c20
   ref: StateGuestReady
*/
void StateGuestReady(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa58b0ULL || rel >= 0xfa59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa59e0 size=1424 callers=0 calls=26
   calls: G_Vb, sub_101ddb0, sub_101e020, sub_101e420, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_e807f0, sub_eb6230, sub_eb75e0, sub_eb7730
   ... +14 more
   ref: View_NestHole
   ref: View_Optionbar
*/
void View_Optionbar_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa59e0ULL || rel >= 0xfa5f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa5f70 size=3504 callers=0 calls=28
   calls: Play_UI_Gnest_join, RequestCloseSession, sub_101d7e0, sub_101d920, sub_101e020, sub_101e290, sub_101e420, sub_104fb70, sub_1052ca0, sub_1100840, sub_1100870, sub_eb6230
   ... +16 more
*/
void sub_fa5f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa5f70ULL || rel >= 0xfa6d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa6d20 size=1392 callers=1 calls=14
   calls: G_Vb, Play_UI_Gnest_join, sub_101d720, sub_1061780, sub_10619f0, sub_1100840, sub_eb6230, sub_eb77f0, sub_f9d830, sub_fa56e0, sub_fa8210, sub_fa9340
   ... +2 more
*/
void sub_fa6d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa6d20ULL || rel >= 0xfa7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7290 size=624 callers=5 calls=10
   calls: sub_101da80, sub_101ddb0, sub_101e020, sub_101e420, sub_5cfad0, sub_794330, sub_f9df70, sub_f9df80, sub_fa56e0, sub_fa8210
   ref: Play_UI_Gnest_join
*/
void Play_UI_Gnest_join(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7290ULL || rel >= 0xfa7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7500 size=496 callers=1 calls=6
   calls: sub_eb6230, sub_eb77f0, sub_f9d830, sub_f9df70, sub_fa8210, sub_fa9340
*/
void sub_fa7500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7500ULL || rel >= 0xfa76f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa76f0 size=400 callers=0 calls=5
   calls: sub_101d670, sub_101e420, sub_f9d830, sub_f9ea40, sub_fa56e0
*/
void sub_fa76f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa76f0ULL || rel >= 0xfa7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7880 size=16 callers=0 calls=0
*/
void sub_fa7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7880ULL || rel >= 0xfa7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7890 size=368 callers=0 calls=0
*/
void sub_fa7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7890ULL || rel >= 0xfa7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a00 size=16 callers=0 calls=0
*/
void sub_fa7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a00ULL || rel >= 0xfa7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a10 size=16 callers=0 calls=0
*/
void sub_fa7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a10ULL || rel >= 0xfa7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a20 size=16 callers=0 calls=0
*/
void sub_fa7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a20ULL || rel >= 0xfa7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a30 size=16 callers=0 calls=0
*/
void sub_fa7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a30ULL || rel >= 0xfa7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a40 size=16 callers=0 calls=0
*/
void sub_fa7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a40ULL || rel >= 0xfa7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a50 size=16 callers=0 calls=0
*/
void sub_fa7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a50ULL || rel >= 0xfa7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a60 size=16 callers=0 calls=0
*/
void sub_fa7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a60ULL || rel >= 0xfa7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a70 size=16 callers=0 calls=0
*/
void sub_fa7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a70ULL || rel >= 0xfa7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7a80 size=304 callers=0 calls=0
*/
void sub_fa7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7a80ULL || rel >= 0xfa7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7bb0 size=496 callers=4 calls=1
   calls: sub_5e2350
*/
void sub_fa7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7bb0ULL || rel >= 0xfa7da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7da0 size=144 callers=0 calls=0
*/
void sub_fa7da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7da0ULL || rel >= 0xfa7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7e30 size=144 callers=0 calls=0
*/
void sub_fa7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7e30ULL || rel >= 0xfa7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7ec0 size=240 callers=0 calls=0
*/
void sub_fa7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7ec0ULL || rel >= 0xfa7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa7fb0 size=144 callers=0 calls=0
*/
void sub_fa7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7fb0ULL || rel >= 0xfa8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8040 size=144 callers=0 calls=0
*/
void sub_fa8040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8040ULL || rel >= 0xfa80d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa80d0 size=16 callers=0 calls=0
*/
void sub_fa80d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa80d0ULL || rel >= 0xfa80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa80e0 size=16 callers=0 calls=0
*/
void sub_fa80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa80e0ULL || rel >= 0xfa80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa80f0 size=144 callers=0 calls=0
*/
void sub_fa80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa80f0ULL || rel >= 0xfa8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8180 size=144 callers=0 calls=0
*/
void sub_fa8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8180ULL || rel >= 0xfa8210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8210 size=464 callers=29 calls=0
*/
void sub_fa8210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8210ULL || rel >= 0xfa83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa83e0 size=32 callers=0 calls=0
*/
void sub_fa83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa83e0ULL || rel >= 0xfa8400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8400 size=16 callers=0 calls=0
*/
void sub_fa8400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8400ULL || rel >= 0xfa8410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8410 size=16 callers=0 calls=0
*/
void sub_fa8410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8410ULL || rel >= 0xfa8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8420 size=16 callers=0 calls=0
*/
void sub_fa8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8420ULL || rel >= 0xfa8430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8430 size=16 callers=0 calls=0
*/
void sub_fa8430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8430ULL || rel >= 0xfa8440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8440 size=16 callers=0 calls=0
*/
void sub_fa8440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8440ULL || rel >= 0xfa8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8450 size=16 callers=0 calls=0
*/
void sub_fa8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8450ULL || rel >= 0xfa8460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8460 size=16 callers=0 calls=0
*/
void sub_fa8460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8460ULL || rel >= 0xfa8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8470 size=16 callers=0 calls=0
*/
void sub_fa8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8470ULL || rel >= 0xfa8480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8480 size=16 callers=0 calls=0
*/
void sub_fa8480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8480ULL || rel >= 0xfa8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8490 size=16 callers=0 calls=0
*/
void sub_fa8490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8490ULL || rel >= 0xfa84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa84a0 size=16 callers=0 calls=0
*/
void sub_fa84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa84a0ULL || rel >= 0xfa84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa84b0 size=32 callers=0 calls=0
*/
void sub_fa84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa84b0ULL || rel >= 0xfa84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa84d0 size=16 callers=0 calls=0
*/
void sub_fa84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa84d0ULL || rel >= 0xfa84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa84e0 size=16 callers=0 calls=0
*/
void sub_fa84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa84e0ULL || rel >= 0xfa84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa84f0 size=16 callers=0 calls=0
*/
void sub_fa84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa84f0ULL || rel >= 0xfa8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8500 size=16 callers=0 calls=0
*/
void sub_fa8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8500ULL || rel >= 0xfa8510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8510 size=16 callers=0 calls=0
*/
void sub_fa8510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8510ULL || rel >= 0xfa8520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8520 size=16 callers=0 calls=0
*/
void sub_fa8520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8520ULL || rel >= 0xfa8530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8530 size=16 callers=0 calls=0
*/
void sub_fa8530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8530ULL || rel >= 0xfa8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8540 size=32 callers=0 calls=0
*/
void sub_fa8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8540ULL || rel >= 0xfa8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8560 size=16 callers=0 calls=0
*/
void sub_fa8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8560ULL || rel >= 0xfa8570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8570 size=16 callers=0 calls=0
*/
void sub_fa8570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8570ULL || rel >= 0xfa8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8580 size=16 callers=0 calls=0
*/
void sub_fa8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8580ULL || rel >= 0xfa8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8590 size=16 callers=0 calls=0
*/
void sub_fa8590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8590ULL || rel >= 0xfa85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa85a0 size=16 callers=0 calls=0
*/
void sub_fa85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa85a0ULL || rel >= 0xfa85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa85b0 size=16 callers=0 calls=0
*/
void sub_fa85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa85b0ULL || rel >= 0xfa85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa85c0 size=16 callers=0 calls=0
*/
void sub_fa85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa85c0ULL || rel >= 0xfa85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa85d0 size=48 callers=0 calls=0
*/
void sub_fa85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa85d0ULL || rel >= 0xfa8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8600 size=64 callers=0 calls=0
*/
void sub_fa8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8600ULL || rel >= 0xfa8640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8640 size=48 callers=0 calls=0
*/
void sub_fa8640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8640ULL || rel >= 0xfa8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8670 size=48 callers=0 calls=0
*/
void sub_fa8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8670ULL || rel >= 0xfa86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa86a0 size=160 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_fa86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa86a0ULL || rel >= 0xfa8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8740 size=64 callers=0 calls=0
*/
void sub_fa8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8740ULL || rel >= 0xfa8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8780 size=48 callers=0 calls=0
*/
void sub_fa8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8780ULL || rel >= 0xfa87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa87b0 size=48 callers=0 calls=0
*/
void sub_fa87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa87b0ULL || rel >= 0xfa87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa87e0 size=32 callers=0 calls=0
*/
void sub_fa87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa87e0ULL || rel >= 0xfa8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8800 size=16 callers=0 calls=0
*/
void sub_fa8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8800ULL || rel >= 0xfa8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8810 size=16 callers=0 calls=0
*/
void sub_fa8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8810ULL || rel >= 0xfa8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8820 size=16 callers=0 calls=0
*/
void sub_fa8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8820ULL || rel >= 0xfa8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8830 size=16 callers=0 calls=0
*/
void sub_fa8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8830ULL || rel >= 0xfa8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8840 size=16 callers=0 calls=0
*/
void sub_fa8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8840ULL || rel >= 0xfa8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8850 size=16 callers=0 calls=0
*/
void sub_fa8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8850ULL || rel >= 0xfa8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8860 size=16 callers=0 calls=0
*/
void sub_fa8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8860ULL || rel >= 0xfa8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8870 size=32 callers=0 calls=0
*/
void sub_fa8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8870ULL || rel >= 0xfa8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8890 size=16 callers=0 calls=0
*/
void sub_fa8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8890ULL || rel >= 0xfa88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa88a0 size=16 callers=0 calls=0
*/
void sub_fa88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa88a0ULL || rel >= 0xfa88b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa88b0 size=16 callers=0 calls=0
*/
void sub_fa88b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa88b0ULL || rel >= 0xfa88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa88c0 size=64 callers=0 calls=1
   calls: sub_fb55c0
*/
void sub_fa88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa88c0ULL || rel >= 0xfa8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8900 size=16 callers=0 calls=0
*/
void sub_fa8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8900ULL || rel >= 0xfa8910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8910 size=16 callers=0 calls=0
*/
void sub_fa8910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8910ULL || rel >= 0xfa8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8920 size=16 callers=0 calls=0
*/
void sub_fa8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8920ULL || rel >= 0xfa8930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8930 size=16 callers=0 calls=0
*/
void sub_fa8930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8930ULL || rel >= 0xfa8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8940 size=16 callers=0 calls=0
*/
void sub_fa8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8940ULL || rel >= 0xfa8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8950 size=16 callers=0 calls=0
*/
void sub_fa8950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8950ULL || rel >= 0xfa8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8960 size=16 callers=0 calls=0
*/
void sub_fa8960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8960ULL || rel >= 0xfa8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8970 size=16 callers=0 calls=0
*/
void sub_fa8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8970ULL || rel >= 0xfa8980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8980 size=16 callers=0 calls=0
*/
void sub_fa8980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8980ULL || rel >= 0xfa8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8990 size=16 callers=0 calls=0
*/
void sub_fa8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8990ULL || rel >= 0xfa89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa89a0 size=16 callers=0 calls=0
*/
void sub_fa89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa89a0ULL || rel >= 0xfa89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa89b0 size=16 callers=0 calls=0
*/
void sub_fa89b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa89b0ULL || rel >= 0xfa89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa89c0 size=16 callers=0 calls=0
*/
void sub_fa89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa89c0ULL || rel >= 0xfa89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa89d0 size=16 callers=0 calls=0
*/
void sub_fa89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa89d0ULL || rel >= 0xfa89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa89e0 size=16 callers=0 calls=0
*/
void sub_fa89e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa89e0ULL || rel >= 0xfa89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa89f0 size=32 callers=0 calls=0
*/
void sub_fa89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa89f0ULL || rel >= 0xfa8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8a10 size=16 callers=0 calls=0
*/
void sub_fa8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8a10ULL || rel >= 0xfa8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8a20 size=16 callers=0 calls=0
*/
void sub_fa8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8a20ULL || rel >= 0xfa8a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8a30 size=16 callers=0 calls=0
*/
void sub_fa8a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8a30ULL || rel >= 0xfa8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8a40 size=16 callers=0 calls=0
*/
void sub_fa8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8a40ULL || rel >= 0xfa8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8a50 size=16 callers=0 calls=0
*/
void sub_fa8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8a50ULL || rel >= 0xfa8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8a60 size=16 callers=0 calls=0
*/
void sub_fa8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8a60ULL || rel >= 0xfa8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8a70 size=16 callers=0 calls=0
*/
void sub_fa8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8a70ULL || rel >= 0xfa8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8a80 size=144 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_fa8a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8a80ULL || rel >= 0xfa8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8b10 size=16 callers=0 calls=0
*/
void sub_fa8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b10ULL || rel >= 0xfa8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8b20 size=16 callers=0 calls=0
*/
void sub_fa8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b20ULL || rel >= 0xfa8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8b30 size=16 callers=0 calls=0
*/
void sub_fa8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b30ULL || rel >= 0xfa8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8b40 size=16 callers=0 calls=0
*/
void sub_fa8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b40ULL || rel >= 0xfa8b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8b50 size=16 callers=0 calls=0
*/
void sub_fa8b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b50ULL || rel >= 0xfa8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8b60 size=16 callers=0 calls=0
*/
void sub_fa8b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b60ULL || rel >= 0xfa8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8b70 size=16 callers=0 calls=0
*/
void sub_fa8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b70ULL || rel >= 0xfa8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8b80 size=160 callers=0 calls=0
*/
void sub_fa8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b80ULL || rel >= 0xfa8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8c20 size=848 callers=5 calls=1
   calls: sub_67b990
*/
void sub_fa8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8c20ULL || rel >= 0xfa8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa8f70 size=368 callers=5 calls=2
   calls: sub_67d450, sub_e7eb10
*/
void sub_fa8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8f70ULL || rel >= 0xfa90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa90e0 size=176 callers=5 calls=3
   calls: sub_eb8c60, sub_eb8e80, sub_eb8ea0
*/
void sub_fa90e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa90e0ULL || rel >= 0xfa9190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9190 size=432 callers=0 calls=4
   calls: sub_67d450, sub_e7eb10, sub_e807f0, sub_eb8930
*/
void sub_fa9190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9190ULL || rel >= 0xfa9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9340 size=48 callers=16 calls=0
*/
void sub_fa9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9340ULL || rel >= 0xfa9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9370 size=528 callers=1 calls=3
   calls: sub_67d450, sub_e7eb10, sub_e807f0
*/
void sub_fa9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9370ULL || rel >= 0xfa9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9580 size=80 callers=6 calls=1
   calls: sub_fa9370
*/
void sub_fa9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9580ULL || rel >= 0xfa95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa95d0 size=576 callers=1 calls=5
   calls: sub_1311c60, sub_1315b90, sub_67d450, sub_e7eb10, sub_e807f0
*/
void sub_fa95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa95d0ULL || rel >= 0xfa9810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9810 size=96 callers=1 calls=1
   calls: sub_fa95d0
*/
void sub_fa9810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9810ULL || rel >= 0xfa9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9870 size=64 callers=8 calls=0
*/
void sub_fa9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9870ULL || rel >= 0xfa98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa98b0 size=64 callers=4 calls=1
   calls: sub_eb8a30
*/
void sub_fa98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa98b0ULL || rel >= 0xfa98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa98f0 size=16 callers=2 calls=0
*/
void sub_fa98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa98f0ULL || rel >= 0xfa9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9900 size=80 callers=2 calls=1
   calls: sub_eb8a80
*/
void sub_fa9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9900ULL || rel >= 0xfa9950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9950 size=272 callers=1 calls=3
   calls: anonymous, sub_d0c0, sub_fa8c20
   ref: StateGuestTop
*/
void StateGuestTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9950ULL || rel >= 0xfa9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9a60 size=1296 callers=0 calls=23
   calls: sub_106f3a0, sub_1078430, sub_5cfaf0, sub_795bc0, sub_79b990, sub_a800f0, sub_c39c40, sub_e807f0, sub_eb6230, sub_eb75e0, sub_eb7730, sub_eba100
   ... +11 more
   ref: View_NestHole
   ref: View_Optionbar
*/
void View_Optionbar_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9a60ULL || rel >= 0xfa9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fa9f70 size=1168 callers=0 calls=18
   calls: sub_e807f0, sub_eb6230, sub_eb6530, sub_eb7790, sub_eb7830, sub_eba100, sub_f9d830, sub_f9f200, sub_f9f690, sub_f9f6b0, sub_fa90e0, sub_fa9580
   ... +6 more
*/
void sub_fa9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9f70ULL || rel >= 0xfaa400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faa400 size=256 callers=1 calls=5
   calls: sub_106f3a0, sub_1078430, sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_faa400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa400ULL || rel >= 0xfaa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faa500 size=512 callers=1 calls=7
   calls: StartJoinSession, sub_1078460, sub_eb6230, sub_eb77f0, sub_f9d830, sub_fa9870, sub_faaa80
*/
void sub_faa500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa500ULL || rel >= 0xfaa700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faa700 size=400 callers=1 calls=4
   calls: sub_f9df70, sub_fa8210, sub_fa9340, sub_fa98b0
*/
void sub_faa700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa700ULL || rel >= 0xfaa890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faa890 size=16 callers=0 calls=0
*/
void sub_faa890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa890ULL || rel >= 0xfaa8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faa8a0 size=352 callers=0 calls=0
*/
void sub_faa8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa8a0ULL || rel >= 0xfaaa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa00 size=16 callers=0 calls=0
*/
void sub_faaa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa00ULL || rel >= 0xfaaa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa10 size=16 callers=0 calls=0
*/
void sub_faaa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa10ULL || rel >= 0xfaaa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa20 size=16 callers=0 calls=0
*/
void sub_faaa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa20ULL || rel >= 0xfaaa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa30 size=16 callers=0 calls=0
*/
void sub_faaa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa30ULL || rel >= 0xfaaa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa40 size=16 callers=0 calls=0
*/
void sub_faaa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa40ULL || rel >= 0xfaaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa50 size=16 callers=0 calls=0
*/
void sub_faaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa50ULL || rel >= 0xfaaa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa60 size=16 callers=0 calls=0
*/
void sub_faaa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa60ULL || rel >= 0xfaaa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa70 size=16 callers=0 calls=0
*/
void sub_faaa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa70ULL || rel >= 0xfaaa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaa80 size=288 callers=14 calls=0
*/
void sub_faaa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa80ULL || rel >= 0xfaaba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaba0 size=304 callers=0 calls=0
*/
void sub_faaba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaba0ULL || rel >= 0xfaacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faacd0 size=16 callers=0 calls=0
*/
void sub_faacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaacd0ULL || rel >= 0xfaace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faace0 size=16 callers=0 calls=0
*/
void sub_faace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaace0ULL || rel >= 0xfaacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faacf0 size=16 callers=0 calls=0
*/
void sub_faacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaacf0ULL || rel >= 0xfaad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faad00 size=16 callers=0 calls=0
*/
void sub_faad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaad00ULL || rel >= 0xfaad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faad10 size=128 callers=0 calls=4
   calls: sub_e807f0, sub_eb6230, sub_eba100, sub_fb55c0
*/
void sub_faad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaad10ULL || rel >= 0xfaad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faad90 size=16 callers=0 calls=0
*/
void sub_faad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaad90ULL || rel >= 0xfaada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faada0 size=16 callers=0 calls=0
*/
void sub_faada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaada0ULL || rel >= 0xfaadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faadb0 size=16 callers=0 calls=0
*/
void sub_faadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaadb0ULL || rel >= 0xfaadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faadc0 size=16 callers=0 calls=0
*/
void sub_faadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaadc0ULL || rel >= 0xfaadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faadd0 size=16 callers=0 calls=0
*/
void sub_faadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaadd0ULL || rel >= 0xfaade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faade0 size=16 callers=0 calls=0
*/
void sub_faade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaade0ULL || rel >= 0xfaadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faadf0 size=16 callers=0 calls=0
*/
void sub_faadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaadf0ULL || rel >= 0xfaae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faae00 size=112 callers=0 calls=1
   calls: sub_f9d830
*/
void sub_faae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaae00ULL || rel >= 0xfaae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faae70 size=16 callers=0 calls=0
*/
void sub_faae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaae70ULL || rel >= 0xfaae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faae80 size=16 callers=0 calls=0
*/
void sub_faae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaae80ULL || rel >= 0xfaae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faae90 size=16 callers=0 calls=0
*/
void sub_faae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaae90ULL || rel >= 0xfaaea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaea0 size=16 callers=0 calls=0
*/
void sub_faaea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaea0ULL || rel >= 0xfaaeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaeb0 size=16 callers=0 calls=0
*/
void sub_faaeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaeb0ULL || rel >= 0xfaaec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaec0 size=16 callers=0 calls=0
*/
void sub_faaec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaec0ULL || rel >= 0xfaaed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaed0 size=16 callers=0 calls=0
*/
void sub_faaed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaed0ULL || rel >= 0xfaaee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaee0 size=128 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_faaee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaee0ULL || rel >= 0xfaaf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaf60 size=16 callers=0 calls=0
*/
void sub_faaf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaf60ULL || rel >= 0xfaaf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaf70 size=16 callers=0 calls=0
*/
void sub_faaf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaf70ULL || rel >= 0xfaaf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaf80 size=16 callers=0 calls=0
*/
void sub_faaf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaf80ULL || rel >= 0xfaaf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faaf90 size=16 callers=0 calls=0
*/
void sub_faaf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaf90ULL || rel >= 0xfaafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faafa0 size=16 callers=0 calls=0
*/
void sub_faafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaafa0ULL || rel >= 0xfaafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faafb0 size=16 callers=0 calls=0
*/
void sub_faafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaafb0ULL || rel >= 0xfaafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faafc0 size=16 callers=0 calls=0
*/
void sub_faafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaafc0ULL || rel >= 0xfaafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faafd0 size=160 callers=0 calls=0
*/
void sub_faafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaafd0ULL || rel >= 0xfab070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fab070 size=304 callers=1 calls=3
   calls: anonymous, sub_d0c0, sub_fa8c20
   ref: StateHostReady
*/
void StateHostReady(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab070ULL || rel >= 0xfab1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fab1a0 size=1504 callers=0 calls=28
   calls: G_Vb, sub_101ddb0, sub_101e020, sub_101e420, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_e807f0, sub_eb6230, sub_eb7730, sub_f9d830
   ... +16 more
   ref: View_NestHole
   ref: View_Optionbar
*/
void View_Optionbar_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab1a0ULL || rel >= 0xfab780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fab780 size=432 callers=1 calls=3
   calls: sub_c39c40, sub_e7eb10, sub_eb75e0
*/
void sub_fab780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab780ULL || rel >= 0xfab930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fab930 size=5504 callers=0 calls=41
   calls: Play_UI_Gnest_join_2, RequestCloseSession, sub_101d690, sub_101d7e0, sub_101d920, sub_101e020, sub_101e290, sub_101e420, sub_101e690, sub_101e990, sub_101ec30, sub_101f060
   ... +29 more
*/
void sub_fab930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab930ULL || rel >= 0xfaceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00faceb0 size=1280 callers=1 calls=13
   calls: G_Vb, Play_UI_Gnest_join_2, sub_101d690, sub_101d720, sub_eb6230, sub_eb77f0, sub_f9d830, sub_f9df80, sub_f9df90, sub_fa1340, sub_fa56e0, sub_fa8210
   ... +1 more
*/
void sub_faceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaceb0ULL || rel >= 0xfad3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fad3b0 size=624 callers=2 calls=10
   calls: sub_101da80, sub_101ddb0, sub_101e020, sub_101e420, sub_5cfad0, sub_794330, sub_f9df70, sub_f9df80, sub_fa56e0, sub_fa8210
   ref: Play_UI_Gnest_join
*/
void Play_UI_Gnest_join_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfad3b0ULL || rel >= 0xfad620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fad620 size=240 callers=1 calls=6
   calls: sub_104fb70, sub_eb6230, sub_eb77f0, sub_f9d320, sub_f9d830, sub_f9e760
*/
void sub_fad620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfad620ULL || rel >= 0xfad710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fad710 size=496 callers=1 calls=6
   calls: sub_eb6230, sub_eb77f0, sub_f9d830, sub_f9df70, sub_fa8210, sub_fa9340
*/
void sub_fad710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfad710ULL || rel >= 0xfad900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fad900 size=272 callers=1 calls=6
   calls: sub_104fb70, sub_eb6230, sub_eb77f0, sub_f9d320, sub_f9d830, sub_f9e760
*/
void sub_fad900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfad900ULL || rel >= 0xfada10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fada10 size=496 callers=1 calls=6
   calls: sub_eb6230, sub_eb77f0, sub_f9d830, sub_f9df70, sub_fa8210, sub_fa9340
*/
void sub_fada10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfada10ULL || rel >= 0xfadc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadc00 size=400 callers=0 calls=5
   calls: sub_101d670, sub_101e420, sub_f9d830, sub_f9ea40, sub_fa56e0
*/
void sub_fadc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadc00ULL || rel >= 0xfadd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadd90 size=16 callers=0 calls=0
*/
void sub_fadd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadd90ULL || rel >= 0xfadda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadda0 size=448 callers=0 calls=0
*/
void sub_fadda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadda0ULL || rel >= 0xfadf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadf60 size=16 callers=0 calls=0
*/
void sub_fadf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadf60ULL || rel >= 0xfadf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadf70 size=16 callers=0 calls=0
*/
void sub_fadf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadf70ULL || rel >= 0xfadf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadf80 size=16 callers=0 calls=0
*/
void sub_fadf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadf80ULL || rel >= 0xfadf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadf90 size=16 callers=0 calls=0
*/
void sub_fadf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadf90ULL || rel >= 0xfadfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadfa0 size=16 callers=0 calls=0
*/
void sub_fadfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadfa0ULL || rel >= 0xfadfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadfb0 size=16 callers=0 calls=0
*/
void sub_fadfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadfb0ULL || rel >= 0xfadfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadfc0 size=16 callers=0 calls=0
*/
void sub_fadfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadfc0ULL || rel >= 0xfadfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadfd0 size=16 callers=0 calls=0
*/
void sub_fadfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadfd0ULL || rel >= 0xfadfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fadfe0 size=304 callers=0 calls=0
*/
void sub_fadfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfadfe0ULL || rel >= 0xfae110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae110 size=32 callers=0 calls=0
*/
void sub_fae110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae110ULL || rel >= 0xfae130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae130 size=16 callers=0 calls=0
*/
void sub_fae130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae130ULL || rel >= 0xfae140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae140 size=16 callers=0 calls=0
*/
void sub_fae140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae140ULL || rel >= 0xfae150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae150 size=16 callers=0 calls=0
*/
void sub_fae150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae150ULL || rel >= 0xfae160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae160 size=16 callers=0 calls=0
*/
void sub_fae160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae160ULL || rel >= 0xfae170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae170 size=16 callers=0 calls=0
*/
void sub_fae170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae170ULL || rel >= 0xfae180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae180 size=16 callers=0 calls=0
*/
void sub_fae180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae180ULL || rel >= 0xfae190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae190 size=16 callers=0 calls=0
*/
void sub_fae190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae190ULL || rel >= 0xfae1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae1a0 size=16 callers=0 calls=0
*/
void sub_fae1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae1a0ULL || rel >= 0xfae1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae1b0 size=16 callers=0 calls=0
*/
void sub_fae1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae1b0ULL || rel >= 0xfae1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae1c0 size=16 callers=0 calls=0
*/
void sub_fae1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae1c0ULL || rel >= 0xfae1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae1d0 size=16 callers=0 calls=0
*/
void sub_fae1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae1d0ULL || rel >= 0xfae1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae1e0 size=32 callers=0 calls=0
*/
void sub_fae1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae1e0ULL || rel >= 0xfae200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae200 size=16 callers=0 calls=0
*/
void sub_fae200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae200ULL || rel >= 0xfae210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae210 size=16 callers=0 calls=0
*/
void sub_fae210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae210ULL || rel >= 0xfae220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae220 size=16 callers=0 calls=0
*/
void sub_fae220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae220ULL || rel >= 0xfae230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae230 size=16 callers=0 calls=0
*/
void sub_fae230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae230ULL || rel >= 0xfae240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae240 size=16 callers=0 calls=0
*/
void sub_fae240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae240ULL || rel >= 0xfae250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae250 size=16 callers=0 calls=0
*/
void sub_fae250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae250ULL || rel >= 0xfae260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae260 size=16 callers=0 calls=0
*/
void sub_fae260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae260ULL || rel >= 0xfae270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae270 size=32 callers=0 calls=0
*/
void sub_fae270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae270ULL || rel >= 0xfae290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae290 size=16 callers=0 calls=0
*/
void sub_fae290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae290ULL || rel >= 0xfae2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae2a0 size=16 callers=0 calls=0
*/
void sub_fae2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae2a0ULL || rel >= 0xfae2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae2b0 size=16 callers=0 calls=0
*/
void sub_fae2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae2b0ULL || rel >= 0xfae2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae2c0 size=16 callers=0 calls=0
*/
void sub_fae2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae2c0ULL || rel >= 0xfae2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae2d0 size=16 callers=0 calls=0
*/
void sub_fae2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae2d0ULL || rel >= 0xfae2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae2e0 size=16 callers=0 calls=0
*/
void sub_fae2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae2e0ULL || rel >= 0xfae2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae2f0 size=16 callers=0 calls=0
*/
void sub_fae2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae2f0ULL || rel >= 0xfae300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae300 size=432 callers=0 calls=3
   calls: sub_1100840, sub_fa8210, sub_fa9870
*/
void sub_fae300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae300ULL || rel >= 0xfae4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae4b0 size=64 callers=0 calls=0
*/
void sub_fae4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae4b0ULL || rel >= 0xfae4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae4f0 size=16 callers=0 calls=0
*/
void sub_fae4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae4f0ULL || rel >= 0xfae500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae500 size=16 callers=0 calls=0
*/
void sub_fae500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae500ULL || rel >= 0xfae510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae510 size=16 callers=0 calls=0
*/
void sub_fae510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae510ULL || rel >= 0xfae520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae520 size=16 callers=0 calls=0
*/
void sub_fae520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae520ULL || rel >= 0xfae530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae530 size=16 callers=0 calls=0
*/
void sub_fae530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae530ULL || rel >= 0xfae540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae540 size=16 callers=0 calls=0
*/
void sub_fae540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae540ULL || rel >= 0xfae550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae550 size=16 callers=0 calls=0
*/
void sub_fae550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae550ULL || rel >= 0xfae560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae560 size=16 callers=0 calls=0
*/
void sub_fae560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae560ULL || rel >= 0xfae570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae570 size=48 callers=0 calls=0
*/
void sub_fae570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae570ULL || rel >= 0xfae5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae5a0 size=48 callers=0 calls=0
*/
void sub_fae5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae5a0ULL || rel >= 0xfae5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae5d0 size=160 callers=0 calls=3
   calls: sub_eb6230, sub_eb77f0, sub_f9d830
*/
void sub_fae5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae5d0ULL || rel >= 0xfae670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae670 size=64 callers=0 calls=0
*/
void sub_fae670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae670ULL || rel >= 0xfae6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae6b0 size=48 callers=0 calls=0
*/
void sub_fae6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae6b0ULL || rel >= 0xfae6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae6e0 size=48 callers=0 calls=0
*/
void sub_fae6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae6e0ULL || rel >= 0xfae710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae710 size=32 callers=0 calls=0
*/
void sub_fae710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae710ULL || rel >= 0xfae730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae730 size=16 callers=0 calls=0
*/
void sub_fae730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae730ULL || rel >= 0xfae740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae740 size=16 callers=0 calls=0
*/
void sub_fae740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae740ULL || rel >= 0xfae750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae750 size=16 callers=0 calls=0
*/
void sub_fae750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae750ULL || rel >= 0xfae760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae760 size=16 callers=0 calls=0
*/
void sub_fae760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae760ULL || rel >= 0xfae770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae770 size=16 callers=0 calls=0
*/
void sub_fae770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae770ULL || rel >= 0xfae780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae780 size=16 callers=0 calls=0
*/
void sub_fae780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae780ULL || rel >= 0xfae790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae790 size=16 callers=0 calls=0
*/
void sub_fae790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae790ULL || rel >= 0xfae7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae7a0 size=32 callers=0 calls=0
*/
void sub_fae7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae7a0ULL || rel >= 0xfae7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fae7c0 size=16 callers=0 calls=0
*/
void sub_fae7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfae7c0ULL || rel >= 0xfae7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

