/* main functions 014124d0..01428d00 (170 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 014124d0 size=272 callers=0 calls=0
*/
void sub_14124d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14124d0ULL || rel >= 0x14125e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014125e0 size=16 callers=0 calls=0
*/
void sub_14125e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14125e0ULL || rel >= 0x14125f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014125f0 size=272 callers=0 calls=0
*/
void sub_14125f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14125f0ULL || rel >= 0x1412700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412700 size=272 callers=0 calls=0
*/
void sub_1412700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412700ULL || rel >= 0x1412810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412810 size=16 callers=0 calls=0
*/
void sub_1412810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412810ULL || rel >= 0x1412820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412820 size=16 callers=0 calls=0
*/
void sub_1412820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412820ULL || rel >= 0x1412830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412830 size=272 callers=0 calls=0
*/
void sub_1412830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412830ULL || rel >= 0x1412940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412940 size=272 callers=0 calls=0
*/
void sub_1412940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412940ULL || rel >= 0x1412a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412a50 size=304 callers=1 calls=0
*/
void sub_1412a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412a50ULL || rel >= 0x1412b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412b80 size=64 callers=0 calls=1
   calls: sub_1500c40
*/
void sub_1412b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412b80ULL || rel >= 0x1412bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412bc0 size=16 callers=0 calls=0
*/
void sub_1412bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412bc0ULL || rel >= 0x1412bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412bd0 size=16 callers=0 calls=0
*/
void sub_1412bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412bd0ULL || rel >= 0x1412be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412be0 size=16 callers=0 calls=0
*/
void sub_1412be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412be0ULL || rel >= 0x1412bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412bf0 size=80 callers=0 calls=1
   calls: sub_1500c40
*/
void sub_1412bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412bf0ULL || rel >= 0x1412c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412c40 size=16 callers=0 calls=0
*/
void sub_1412c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412c40ULL || rel >= 0x1412c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412c50 size=16 callers=0 calls=0
*/
void sub_1412c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412c50ULL || rel >= 0x1412c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412c60 size=16 callers=0 calls=0
*/
void sub_1412c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412c60ULL || rel >= 0x1412c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412c70 size=128 callers=0 calls=0
*/
void sub_1412c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412c70ULL || rel >= 0x1412cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412cf0 size=16 callers=0 calls=0
*/
void sub_1412cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412cf0ULL || rel >= 0x1412d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d00 size=16 callers=0 calls=0
*/
void sub_1412d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d00ULL || rel >= 0x1412d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d10 size=16 callers=0 calls=0
*/
void sub_1412d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d10ULL || rel >= 0x1412d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d20 size=16 callers=0 calls=0
*/
void sub_1412d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d20ULL || rel >= 0x1412d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d30 size=16 callers=0 calls=0
*/
void sub_1412d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d30ULL || rel >= 0x1412d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d40 size=16 callers=0 calls=0
*/
void sub_1412d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d40ULL || rel >= 0x1412d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d50 size=16 callers=0 calls=0
*/
void sub_1412d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d50ULL || rel >= 0x1412d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d60 size=16 callers=0 calls=0
*/
void sub_1412d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d60ULL || rel >= 0x1412d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d70 size=16 callers=0 calls=0
*/
void sub_1412d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d70ULL || rel >= 0x1412d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d80 size=16 callers=0 calls=0
*/
void sub_1412d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d80ULL || rel >= 0x1412d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412d90 size=16 callers=0 calls=0
*/
void sub_1412d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412d90ULL || rel >= 0x1412da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412da0 size=1248 callers=0 calls=10
   calls: anime_keep_4, sub_140deb0, sub_140f090, sub_14113a0, sub_1413450, sub_5cfad0, sub_c39c40, sub_d0c0, sub_e7ea90, sub_e806b0
   ref: View_Top
*/
void View_Top_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412da0ULL || rel >= 0x1413280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413280 size=16 callers=0 calls=0
*/
void sub_1413280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413280ULL || rel >= 0x1413290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413290 size=16 callers=0 calls=0
*/
void sub_1413290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413290ULL || rel >= 0x14132a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014132a0 size=16 callers=0 calls=0
*/
void sub_14132a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14132a0ULL || rel >= 0x14132b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014132b0 size=16 callers=0 calls=0
*/
void sub_14132b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14132b0ULL || rel >= 0x14132c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014132c0 size=16 callers=0 calls=0
*/
void sub_14132c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14132c0ULL || rel >= 0x14132d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014132d0 size=16 callers=0 calls=0
*/
void sub_14132d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14132d0ULL || rel >= 0x14132e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014132e0 size=16 callers=0 calls=0
*/
void sub_14132e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14132e0ULL || rel >= 0x14132f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014132f0 size=16 callers=0 calls=0
*/
void sub_14132f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14132f0ULL || rel >= 0x1413300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413300 size=16 callers=0 calls=0
*/
void sub_1413300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413300ULL || rel >= 0x1413310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413310 size=16 callers=0 calls=0
*/
void sub_1413310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413310ULL || rel >= 0x1413320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413320 size=304 callers=0 calls=0
*/
void sub_1413320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413320ULL || rel >= 0x1413450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413450 size=272 callers=6 calls=2
   calls: sub_1412a50, sub_5cfaf0
*/
void sub_1413450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413450ULL || rel >= 0x1413560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413560 size=912 callers=0 calls=8
   calls: sub_140db30, sub_140f090, sub_1413450, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e807f0
   ref: View_Top
*/
void View_Top_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413560ULL || rel >= 0x14138f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014138f0 size=64 callers=0 calls=0
*/
void sub_14138f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14138f0ULL || rel >= 0x1413930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413930 size=288 callers=0 calls=8
   calls: sub_140dac0, sub_140f090, sub_1413a50, sub_1502120, sub_5cfad0, sub_eb8930, sub_eb8c60, sub_eb8ea0
*/
void sub_1413930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413930ULL || rel >= 0x1413a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413a50 size=1328 callers=1 calls=18
   calls: T_save_00, sub_130b1d0, sub_13566a0, sub_1356920, sub_1357400, sub_1357450, sub_13574b0, sub_13575e0, sub_140deb0, sub_140f090, sub_14113a0, sub_14a8be0
   ... +6 more
*/
void sub_1413a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413a50ULL || rel >= 0x1413f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01413f80 size=448 callers=0 calls=5
   calls: sub_13573c0, sub_13573d0, sub_13573e0, sub_5cfad0, sub_794310
   ref: Config_BGMVolume
   ref: Config_SEVolume
   ref: Config_VoiceVolume
*/
void Config_VoiceVolume_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1413f80ULL || rel >= 0x1414140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414140 size=16 callers=0 calls=0
*/
void sub_1414140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414140ULL || rel >= 0x1414150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414150 size=16 callers=0 calls=0
*/
void sub_1414150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414150ULL || rel >= 0x1414160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414160 size=16 callers=0 calls=0
*/
void sub_1414160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414160ULL || rel >= 0x1414170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414170 size=16 callers=0 calls=0
*/
void sub_1414170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414170ULL || rel >= 0x1414180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414180 size=16 callers=0 calls=0
*/
void sub_1414180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414180ULL || rel >= 0x1414190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414190 size=16 callers=0 calls=0
*/
void sub_1414190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414190ULL || rel >= 0x14141a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014141a0 size=16 callers=0 calls=0
*/
void sub_14141a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14141a0ULL || rel >= 0x14141b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014141b0 size=16 callers=0 calls=0
*/
void sub_14141b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14141b0ULL || rel >= 0x14141c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014141c0 size=304 callers=0 calls=0
*/
void sub_14141c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14141c0ULL || rel >= 0x14142f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014142f0 size=976 callers=0 calls=9
   calls: sub_140db30, sub_140f090, sub_1412130, sub_1413450, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e807f0
   ref: View_Top
   ref: confirm
*/
void View_Top_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14142f0ULL || rel >= 0x14146c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014146c0 size=896 callers=0 calls=11
   calls: sub_140dac0, sub_140db30, sub_140deb0, sub_140f090, sub_1412130, sub_1414a40, sub_1502120, sub_5cfad0, sub_eb8930, sub_eb8c60, sub_eb8ea0
*/
void sub_14146c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14146c0ULL || rel >= 0x1414a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414a40 size=288 callers=2 calls=3
   calls: sub_1356920, sub_140dc10, sub_140f090
*/
void sub_1414a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414a40ULL || rel >= 0x1414b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414b60 size=304 callers=0 calls=9
   calls: sub_140dac0, sub_140f090, sub_1412130, sub_1414a40, sub_1502120, sub_5cfad0, sub_eb8930, sub_eb8c60, sub_eb8ea0
*/
void sub_1414b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414b60ULL || rel >= 0x1414c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414c90 size=80 callers=0 calls=0
*/
void sub_1414c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414c90ULL || rel >= 0x1414ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414ce0 size=96 callers=0 calls=1
   calls: sub_eb8a30
*/
void sub_1414ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414ce0ULL || rel >= 0x1414d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414d40 size=16 callers=0 calls=0
*/
void sub_1414d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414d40ULL || rel >= 0x1414d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414d50 size=16 callers=0 calls=0
*/
void sub_1414d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414d50ULL || rel >= 0x1414d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414d60 size=16 callers=0 calls=0
*/
void sub_1414d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414d60ULL || rel >= 0x1414d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414d70 size=16 callers=0 calls=0
*/
void sub_1414d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414d70ULL || rel >= 0x1414d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414d80 size=16 callers=0 calls=0
*/
void sub_1414d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414d80ULL || rel >= 0x1414d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414d90 size=16 callers=0 calls=0
*/
void sub_1414d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414d90ULL || rel >= 0x1414da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414da0 size=16 callers=0 calls=0
*/
void sub_1414da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414da0ULL || rel >= 0x1414db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414db0 size=16 callers=0 calls=0
*/
void sub_1414db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414db0ULL || rel >= 0x1414dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414dc0 size=304 callers=0 calls=0
*/
void sub_1414dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414dc0ULL || rel >= 0x1414ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01414ef0 size=1504 callers=0 calls=6
   calls: sub_1412080, sub_1413450, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0
   ref: View_Top
   ref: execute
*/
void View_Top_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1414ef0ULL || rel >= 0x14154d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014154d0 size=208 callers=2 calls=2
   calls: sub_1411030, sub_1411040
*/
void sub_14154d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14154d0ULL || rel >= 0x14155a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014155a0 size=336 callers=0 calls=3
   calls: sub_ea3d10, sub_ea4740, sub_f9cab0
*/
void sub_14155a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14155a0ULL || rel >= 0x14156f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014156f0 size=304 callers=0 calls=2
   calls: sub_140f090, sub_eb8a30
*/
void sub_14156f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14156f0ULL || rel >= 0x1415820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01415820 size=16 callers=0 calls=0
*/
void sub_1415820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415820ULL || rel >= 0x1415830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01415830 size=16 callers=0 calls=0
*/
void sub_1415830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415830ULL || rel >= 0x1415840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01415840 size=16 callers=0 calls=0
*/
void sub_1415840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415840ULL || rel >= 0x1415850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01415850 size=16 callers=0 calls=0
*/
void sub_1415850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415850ULL || rel >= 0x1415860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01415860 size=16 callers=0 calls=0
*/
void sub_1415860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415860ULL || rel >= 0x1415870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01415870 size=16 callers=0 calls=0
*/
void sub_1415870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415870ULL || rel >= 0x1415880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01415880 size=16 callers=0 calls=0
*/
void sub_1415880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415880ULL || rel >= 0x1415890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01415890 size=16 callers=0 calls=0
*/
void sub_1415890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415890ULL || rel >= 0x14158a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014158a0 size=304 callers=0 calls=0
*/
void sub_14158a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14158a0ULL || rel >= 0x14159d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014159d0 size=2176 callers=0 calls=15
   calls: Play_PV_EV__03d__02d__02d, Stop_Event_PM_Voice, sub_140dac0, sub_140f090, sub_1411150, sub_14113a0, sub_14154d0, sub_14a8be0, sub_5cfad0, sub_794310, sub_c39c40, sub_e7ea90
   ... +3 more
   ref: Config_BGMVolume
   ref: Config_SEVolume
   ref: Config_VoiceVolume
*/
void Config_VoiceVolume_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14159d0ULL || rel >= 0x1416250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416250 size=16 callers=0 calls=0
*/
void sub_1416250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416250ULL || rel >= 0x1416260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416260 size=16 callers=0 calls=0
*/
void sub_1416260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416260ULL || rel >= 0x1416270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416270 size=16 callers=0 calls=0
*/
void sub_1416270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416270ULL || rel >= 0x1416280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416280 size=288 callers=0 calls=4
   calls: sub_140dac0, sub_140f090, sub_14154d0, sub_eb8930
*/
void sub_1416280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416280ULL || rel >= 0x14163a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014163a0 size=16 callers=0 calls=0
*/
void sub_14163a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14163a0ULL || rel >= 0x14163b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014163b0 size=16 callers=0 calls=0
*/
void sub_14163b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14163b0ULL || rel >= 0x14163c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014163c0 size=16 callers=0 calls=0
*/
void sub_14163c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14163c0ULL || rel >= 0x14163d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014163d0 size=32 callers=0 calls=0
*/
void sub_14163d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14163d0ULL || rel >= 0x14163f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014163f0 size=16 callers=0 calls=0
*/
void sub_14163f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14163f0ULL || rel >= 0x1416400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416400 size=16 callers=0 calls=0
*/
void sub_1416400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416400ULL || rel >= 0x1416410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416410 size=16 callers=0 calls=0
*/
void sub_1416410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416410ULL || rel >= 0x1416420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416420 size=32 callers=0 calls=0
*/
void sub_1416420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416420ULL || rel >= 0x1416440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416440 size=16 callers=0 calls=0
*/
void sub_1416440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416440ULL || rel >= 0x1416450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416450 size=16 callers=0 calls=0
*/
void sub_1416450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416450ULL || rel >= 0x1416460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416460 size=16 callers=0 calls=0
*/
void sub_1416460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416460ULL || rel >= 0x1416470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416470 size=112 callers=0 calls=0
*/
void sub_1416470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416470ULL || rel >= 0x14164e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014164e0 size=16 callers=0 calls=0
*/
void sub_14164e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14164e0ULL || rel >= 0x14164f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014164f0 size=16 callers=0 calls=0
*/
void sub_14164f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14164f0ULL || rel >= 0x1416500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416500 size=16 callers=0 calls=0
*/
void sub_1416500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416500ULL || rel >= 0x1416510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416510 size=128 callers=0 calls=0
*/
void sub_1416510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416510ULL || rel >= 0x1416590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416590 size=800 callers=0 calls=12
   calls: anime_out_15, sub_13573c0, sub_13573d0, sub_13573e0, sub_13575e0, sub_1413450, sub_5cfad0, sub_794310, sub_c39c40, sub_d0c0, sub_ea3b30, sub_ea3c00
   ref: Config_BGMVolume
   ref: Config_SEVolume
   ref: View_Top
   ref: Config_VoiceVolume
*/
void Config_VoiceVolume_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416590ULL || rel >= 0x14168b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014168b0 size=16 callers=0 calls=0
*/
void sub_14168b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14168b0ULL || rel >= 0x14168c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014168c0 size=320 callers=0 calls=4
   calls: sub_1413450, sub_c39c40, sub_e80580, sub_e806b0
   ref: View_Top
*/
void View_Top_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14168c0ULL || rel >= 0x1416a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a00 size=16 callers=0 calls=0
*/
void sub_1416a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a00ULL || rel >= 0x1416a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a10 size=16 callers=0 calls=0
*/
void sub_1416a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a10ULL || rel >= 0x1416a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a20 size=16 callers=0 calls=0
*/
void sub_1416a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a20ULL || rel >= 0x1416a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a30 size=16 callers=0 calls=0
*/
void sub_1416a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a30ULL || rel >= 0x1416a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a40 size=16 callers=0 calls=0
*/
void sub_1416a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a40ULL || rel >= 0x1416a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a50 size=16 callers=0 calls=0
*/
void sub_1416a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a50ULL || rel >= 0x1416a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a60 size=16 callers=0 calls=0
*/
void sub_1416a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a60ULL || rel >= 0x1416a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a70 size=16 callers=0 calls=0
*/
void sub_1416a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a70ULL || rel >= 0x1416a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416a80 size=304 callers=0 calls=0
*/
void sub_1416a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416a80ULL || rel >= 0x1416bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01416bb0 size=1168 callers=0 calls=9
   calls: RequestLanConnection, sub_140dac0, sub_140f090, sub_5cfaf0, sub_790f90, sub_79b990, sub_c39c40, sub_d0c0, sub_eb8930
   ref: AttentionView
*/
void AttentionView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1416bb0ULL || rel >= 0x1417040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417040 size=624 callers=0 calls=10
   calls: sub_140da60, sub_140dac0, sub_140f090, sub_ea3d10, sub_ea4760, sub_eb5fb0, sub_eb6070, sub_eb8930, sub_eb8a30, sub_f9cab0
*/
void sub_1417040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417040ULL || rel >= 0x14172b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014172b0 size=16 callers=0 calls=0
*/
void sub_14172b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14172b0ULL || rel >= 0x14172c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014172c0 size=16 callers=0 calls=0
*/
void sub_14172c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14172c0ULL || rel >= 0x14172d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014172d0 size=16 callers=0 calls=0
*/
void sub_14172d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14172d0ULL || rel >= 0x14172e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014172e0 size=16 callers=0 calls=0
*/
void sub_14172e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14172e0ULL || rel >= 0x14172f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014172f0 size=16 callers=0 calls=0
*/
void sub_14172f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14172f0ULL || rel >= 0x1417300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417300 size=16 callers=0 calls=0
*/
void sub_1417300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417300ULL || rel >= 0x1417310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417310 size=16 callers=0 calls=0
*/
void sub_1417310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417310ULL || rel >= 0x1417320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417320 size=16 callers=0 calls=0
*/
void sub_1417320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417320ULL || rel >= 0x1417330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417330 size=16 callers=0 calls=0
*/
void sub_1417330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417330ULL || rel >= 0x1417340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417340 size=304 callers=0 calls=0
*/
void sub_1417340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417340ULL || rel >= 0x1417470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417470 size=32 callers=0 calls=0
*/
void sub_1417470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417470ULL || rel >= 0x1417490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417490 size=64 callers=0 calls=0
*/
void sub_1417490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417490ULL || rel >= 0x14174d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014174d0 size=48 callers=0 calls=0
*/
void sub_14174d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14174d0ULL || rel >= 0x1417500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417500 size=48 callers=0 calls=0
*/
void sub_1417500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417500ULL || rel >= 0x1417530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417530 size=48 callers=0 calls=0
*/
void sub_1417530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417530ULL || rel >= 0x1417560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417560 size=64 callers=0 calls=0
*/
void sub_1417560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417560ULL || rel >= 0x14175a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014175a0 size=48 callers=0 calls=0
*/
void sub_14175a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14175a0ULL || rel >= 0x14175d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014175d0 size=48 callers=0 calls=0
*/
void sub_14175d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14175d0ULL || rel >= 0x1417600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417600 size=128 callers=0 calls=0
*/
void sub_1417600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417600ULL || rel >= 0x1417680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417680 size=320 callers=1 calls=2
   calls: sub_14177c0, sub_1417f00
*/
void sub_1417680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417680ULL || rel >= 0x14177c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014177c0 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_14177c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14177c0ULL || rel >= 0x1417980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417980 size=112 callers=0 calls=0
*/
void sub_1417980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417980ULL || rel >= 0x14179f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014179f0 size=112 callers=0 calls=0
*/
void sub_14179f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14179f0ULL || rel >= 0x1417a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417a60 size=112 callers=0 calls=0
*/
void sub_1417a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417a60ULL || rel >= 0x1417ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417ad0 size=112 callers=0 calls=0
*/
void sub_1417ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417ad0ULL || rel >= 0x1417b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417b40 size=112 callers=0 calls=0
*/
void sub_1417b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417b40ULL || rel >= 0x1417bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417bb0 size=112 callers=0 calls=0
*/
void sub_1417bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417bb0ULL || rel >= 0x1417c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417c20 size=16 callers=0 calls=0
*/
void sub_1417c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417c20ULL || rel >= 0x1417c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417c30 size=16 callers=0 calls=0
*/
void sub_1417c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417c30ULL || rel >= 0x1417c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417c40 size=16 callers=0 calls=0
*/
void sub_1417c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417c40ULL || rel >= 0x1417c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417c50 size=368 callers=0 calls=2
   calls: sub_1417dc0, sub_1418820
*/
void sub_1417c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417c50ULL || rel >= 0x1417dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417dc0 size=272 callers=1 calls=3
   calls: sub_1418030, sub_672c10, sub_c386f0
*/
void sub_1417dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417dc0ULL || rel >= 0x1417ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417ed0 size=16 callers=0 calls=0
*/
void sub_1417ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417ed0ULL || rel >= 0x1417ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417ee0 size=16 callers=0 calls=0
*/
void sub_1417ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417ee0ULL || rel >= 0x1417ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417ef0 size=16 callers=0 calls=0
*/
void sub_1417ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417ef0ULL || rel >= 0x1417f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01417f00 size=304 callers=1 calls=0
*/
void sub_1417f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1417f00ULL || rel >= 0x1418030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418030 size=304 callers=1 calls=2
   calls: sub_1418160, sub_e7b660
*/
void sub_1418030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418030ULL || rel >= 0x1418160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418160 size=224 callers=1 calls=3
   calls: sub_1418240, sub_7c2da0, sub_e7b5e0
*/
void sub_1418160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418160ULL || rel >= 0x1418240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418240 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1418240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418240ULL || rel >= 0x1418330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418330 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1418330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418330ULL || rel >= 0x14183b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014183b0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14183b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14183b0ULL || rel >= 0x1418520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418520 size=96 callers=0 calls=1
   calls: sub_1418740
*/
void sub_1418520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418520ULL || rel >= 0x1418580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418580 size=16 callers=0 calls=0
*/
void sub_1418580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418580ULL || rel >= 0x1418590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418590 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1418590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418590ULL || rel >= 0x1418630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418630 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1418630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418630ULL || rel >= 0x14186f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014186f0 size=16 callers=0 calls=0
*/
void sub_14186f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14186f0ULL || rel >= 0x1418700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418700 size=16 callers=0 calls=0
*/
void sub_1418700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418700ULL || rel >= 0x1418710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418710 size=16 callers=0 calls=0
*/
void sub_1418710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418710ULL || rel >= 0x1418720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418720 size=32 callers=0 calls=0
*/
void sub_1418720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418720ULL || rel >= 0x1418740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418740 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1418740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418740ULL || rel >= 0x1418820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418820 size=240 callers=2 calls=1
   calls: sub_c39c40
*/
void sub_1418820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418820ULL || rel >= 0x1418910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418910 size=1360 callers=0 calls=14
   calls: sub_1418e60, sub_1419be0, sub_1419f70, sub_141a2f0, sub_1440d10, sub_5cfad0, sub_5dd790, sub_5e2930, sub_78f150, sub_78f240, sub_7950c0, sub_79b250
   ... +2 more
   ref: CommonOptionBar
   ref: common/iteminfo.dat
   ref: View_Shop
   ref: TalkMessageView
   ref: common/wazainfo.dat
   ref: script/shop.dat
   ref: View_ItemNumSelect
   ref: bin/appli/shop/bin/shop_data.bin
*/
void View_Shop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418910ULL || rel >= 0x1418e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01418e60 size=432 callers=1 calls=3
   calls: sub_1419ab0, sub_e7c160, sub_e7c210
*/
void sub_1418e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418e60ULL || rel >= 0x1419010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419010 size=32 callers=0 calls=0
*/
void sub_1419010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419010ULL || rel >= 0x1419030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419030 size=1056 callers=0 calls=5
   calls: sub_13083a0, sub_141a620, sub_141a630, sub_1500ea0, sub_e7ea90
   ref: common/iteminfo.dat
   ref: common/wazainfo.dat
   ref: script/shop.dat
*/
void shop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419030ULL || rel >= 0x1419450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419450 size=16 callers=0 calls=0
*/
void sub_1419450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419450ULL || rel >= 0x1419460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419460 size=224 callers=0 calls=2
   calls: sub_141a490, sub_e7c160
*/
void sub_1419460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419460ULL || rel >= 0x1419540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419540 size=32 callers=0 calls=0
*/
void sub_1419540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419540ULL || rel >= 0x1419560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419560 size=624 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_65f110
*/
void sub_1419560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419560ULL || rel >= 0x14197d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014197d0 size=16 callers=0 calls=0
*/
void sub_14197d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14197d0ULL || rel >= 0x14197e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014197e0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14197e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14197e0ULL || rel >= 0x1419890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419890 size=16 callers=0 calls=0
*/
void sub_1419890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419890ULL || rel >= 0x14198a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014198a0 size=16 callers=0 calls=0
*/
void sub_14198a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14198a0ULL || rel >= 0x14198b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014198b0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14198b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14198b0ULL || rel >= 0x1419960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419960 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1419960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419960ULL || rel >= 0x1419a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a10 size=16 callers=0 calls=0
*/
void sub_1419a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a10ULL || rel >= 0x1419a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a20 size=16 callers=0 calls=0
*/
void sub_1419a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a20ULL || rel >= 0x1419a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a30 size=16 callers=0 calls=0
*/
void sub_1419a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a30ULL || rel >= 0x1419a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a40 size=16 callers=0 calls=0
*/
void sub_1419a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a40ULL || rel >= 0x1419a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a50 size=16 callers=0 calls=0
*/
void sub_1419a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a50ULL || rel >= 0x1419a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a60 size=16 callers=0 calls=0
*/
void sub_1419a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a60ULL || rel >= 0x1419a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a70 size=16 callers=0 calls=0
*/
void sub_1419a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a70ULL || rel >= 0x1419a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a80 size=16 callers=0 calls=0
*/
void sub_1419a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a80ULL || rel >= 0x1419a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419a90 size=16 callers=0 calls=0
*/
void sub_1419a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419a90ULL || rel >= 0x1419aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419aa0 size=16 callers=0 calls=0
*/
void sub_1419aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419aa0ULL || rel >= 0x1419ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419ab0 size=304 callers=1 calls=0
*/
void sub_1419ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419ab0ULL || rel >= 0x1419be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419be0 size=288 callers=1 calls=2
   calls: sub_1419d00, sub_e809c0
*/
void sub_1419be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419be0ULL || rel >= 0x1419d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419d00 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1419d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419d00ULL || rel >= 0x1419f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01419f70 size=288 callers=1 calls=2
   calls: sub_141a090, sub_e809c0
*/
void sub_1419f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419f70ULL || rel >= 0x141a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a090 size=608 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_141a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a090ULL || rel >= 0x141a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a2f0 size=368 callers=1 calls=0
*/
void sub_141a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a2f0ULL || rel >= 0x141a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a460 size=16 callers=0 calls=0
*/
void sub_141a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a460ULL || rel >= 0x141a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a470 size=16 callers=0 calls=0
*/
void sub_141a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a470ULL || rel >= 0x141a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a480 size=16 callers=0 calls=0
*/
void sub_141a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a480ULL || rel >= 0x141a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a490 size=400 callers=1 calls=1
   calls: anonymous
*/
void sub_141a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a490ULL || rel >= 0x141a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a620 size=16 callers=1 calls=0
*/
void sub_141a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a620ULL || rel >= 0x141a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a630 size=640 callers=1 calls=0
*/
void sub_141a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a630ULL || rel >= 0x141a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a8b0 size=48 callers=5 calls=0
*/
void sub_141a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a8b0ULL || rel >= 0x141a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a8e0 size=32 callers=1 calls=0
*/
void sub_141a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a8e0ULL || rel >= 0x141a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a900 size=176 callers=0 calls=2
   calls: sub_141aa00, sub_14aad40
*/
void sub_141a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a900ULL || rel >= 0x141a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141a9b0 size=80 callers=2 calls=1
   calls: sub_14aad40
*/
void sub_141a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141a9b0ULL || rel >= 0x141aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141aa00 size=2560 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_141aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141aa00ULL || rel >= 0x141b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141b400 size=512 callers=1 calls=4
   calls: sub_67d450, sub_eb7570, sub_eb75e0, sub_eb76b0
*/
void sub_141b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141b400ULL || rel >= 0x141b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141b600 size=64 callers=1 calls=1
   calls: pane_T_select_01
*/
void sub_141b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141b600ULL || rel >= 0x141b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141b640 size=912 callers=5 calls=5
   calls: sub_1315b90, sub_14ac370, sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_select_01
*/
void pane_T_select_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141b640ULL || rel >= 0x141b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141b9d0 size=512 callers=0 calls=5
   calls: pane_T_select_01, sub_14ab0c0, sub_1500c40, sub_1502120, sub_5cfad0
*/
void sub_141b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141b9d0ULL || rel >= 0x141bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141bbd0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/item_num_select/bin/item_num_select_00_lyt.bin
   ref: bin/appli/item_num_select/bin/uikit_item_num_select_00_lyt.bin
*/
void uikit_item_num_select_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141bbd0ULL || rel >= 0x141bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141bdb0 size=80 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_141bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141bdb0ULL || rel >= 0x141be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141be00 size=16 callers=1 calls=0
*/
void sub_141be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141be00ULL || rel >= 0x141be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141be10 size=32 callers=1 calls=1
   calls: sub_eb6630
*/
void sub_141be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141be10ULL || rel >= 0x141be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141be30 size=48 callers=2 calls=1
   calls: sub_eb6630
*/
void sub_141be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141be30ULL || rel >= 0x141be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141be60 size=32 callers=3 calls=0
*/
void sub_141be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141be60ULL || rel >= 0x141be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141be80 size=160 callers=0 calls=0
*/
void sub_141be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141be80ULL || rel >= 0x141bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141bf20 size=160 callers=0 calls=0
*/
void sub_141bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141bf20ULL || rel >= 0x141bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141bfc0 size=16 callers=0 calls=0
*/
void sub_141bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141bfc0ULL || rel >= 0x141bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141bfd0 size=160 callers=0 calls=0
*/
void sub_141bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141bfd0ULL || rel >= 0x141c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c070 size=160 callers=0 calls=0
*/
void sub_141c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c070ULL || rel >= 0x141c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c110 size=16 callers=0 calls=0
*/
void sub_141c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c110ULL || rel >= 0x141c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c120 size=16 callers=0 calls=0
*/
void sub_141c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c120ULL || rel >= 0x141c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c130 size=160 callers=0 calls=0
*/
void sub_141c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c130ULL || rel >= 0x141c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c1d0 size=160 callers=0 calls=0
*/
void sub_141c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c1d0ULL || rel >= 0x141c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c270 size=304 callers=0 calls=0
*/
void sub_141c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c270ULL || rel >= 0x141c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c3a0 size=48 callers=0 calls=0
*/
void sub_141c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c3a0ULL || rel >= 0x141c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c3d0 size=16 callers=0 calls=0
*/
void sub_141c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c3d0ULL || rel >= 0x141c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c3e0 size=16 callers=0 calls=0
*/
void sub_141c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c3e0ULL || rel >= 0x141c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c3f0 size=16 callers=0 calls=0
*/
void sub_141c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c3f0ULL || rel >= 0x141c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c400 size=32 callers=0 calls=0
*/
void sub_141c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c400ULL || rel >= 0x141c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c420 size=16 callers=0 calls=0
*/
void sub_141c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c420ULL || rel >= 0x141c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c430 size=16 callers=0 calls=0
*/
void sub_141c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c430ULL || rel >= 0x141c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c440 size=16 callers=0 calls=0
*/
void sub_141c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c440ULL || rel >= 0x141c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c450 size=32 callers=0 calls=0
*/
void sub_141c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c450ULL || rel >= 0x141c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c470 size=16 callers=0 calls=0
*/
void sub_141c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c470ULL || rel >= 0x141c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c480 size=16 callers=0 calls=0
*/
void sub_141c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c480ULL || rel >= 0x141c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c490 size=16 callers=0 calls=0
*/
void sub_141c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c490ULL || rel >= 0x141c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c4a0 size=16 callers=0 calls=0
*/
void sub_141c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c4a0ULL || rel >= 0x141c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c4b0 size=16 callers=0 calls=0
*/
void sub_141c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c4b0ULL || rel >= 0x141c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c4c0 size=16 callers=0 calls=0
*/
void sub_141c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c4c0ULL || rel >= 0x141c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c4d0 size=16 callers=0 calls=0
*/
void sub_141c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c4d0ULL || rel >= 0x141c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c4e0 size=16 callers=0 calls=0
*/
void sub_141c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c4e0ULL || rel >= 0x141c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c4f0 size=16 callers=0 calls=0
*/
void sub_141c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c4f0ULL || rel >= 0x141c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c500 size=16 callers=0 calls=0
*/
void sub_141c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c500ULL || rel >= 0x141c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c510 size=16 callers=0 calls=0
*/
void sub_141c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c510ULL || rel >= 0x141c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c520 size=16 callers=0 calls=0
*/
void sub_141c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c520ULL || rel >= 0x141c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c530 size=16 callers=0 calls=0
*/
void sub_141c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c530ULL || rel >= 0x141c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c540 size=16 callers=0 calls=0
*/
void sub_141c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c540ULL || rel >= 0x141c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c550 size=16 callers=0 calls=0
*/
void sub_141c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c550ULL || rel >= 0x141c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c560 size=16 callers=0 calls=0
*/
void sub_141c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c560ULL || rel >= 0x141c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c570 size=16 callers=0 calls=0
*/
void sub_141c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c570ULL || rel >= 0x141c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c580 size=16 callers=0 calls=0
*/
void sub_141c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c580ULL || rel >= 0x141c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c590 size=16 callers=0 calls=0
*/
void sub_141c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c590ULL || rel >= 0x141c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c5a0 size=64 callers=1 calls=1
   calls: sub_14eead0
*/
void sub_141c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c5a0ULL || rel >= 0x141c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c5e0 size=496 callers=0 calls=5
   calls: sub_14aad40, sub_14ba7b0, sub_1500c90, sub_8f3180, sub_e84250
   ref: pane_L_item_%02d_P_item_icon
*/
void pane_L_item__02d_P_item_icon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c5e0ULL || rel >= 0x141c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c7d0 size=80 callers=2 calls=1
   calls: sub_14aad40
*/
void sub_141c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c7d0ULL || rel >= 0x141c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141c820 size=512 callers=2 calls=4
   calls: sub_67d450, sub_eb7570, sub_eb75e0, sub_eb76b0
*/
void sub_141c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141c820ULL || rel >= 0x141ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ca20 size=1920 callers=1 calls=14
   calls: sub_141a8e0, sub_141d1a0, sub_141ec20, sub_14aad40, sub_14ab0c0, sub_14ab440, sub_14e1a30, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1860, sub_14f1870
   ... +2 more
*/
void sub_141ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ca20ULL || rel >= 0x141d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141d1a0 size=640 callers=2 calls=6
   calls: sub_1315b90, sub_136b790, sub_137b8b0, sub_137baa0, sub_14ac370, sub_67d450
*/
void sub_141d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141d1a0ULL || rel >= 0x141d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141d420 size=128 callers=0 calls=2
   calls: sub_141a8b0, sub_14aad40
*/
void sub_141d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141d420ULL || rel >= 0x141d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141d4a0 size=480 callers=0 calls=9
   calls: sub_1315270, sub_141a8b0, sub_141e320, sub_14ac370, sub_14bb4c0, sub_67d450, sub_786c10, sub_786cf0, wazaname
*/
void sub_141d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141d4a0ULL || rel >= 0x141d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141d680 size=2560 callers=0 calls=23
   calls: pane_T_num_01, sub_1315270, sub_1315b90, sub_141a8b0, sub_14ab0c0, sub_14ab440, sub_14ac040, sub_14ac370, sub_14d6920, sub_67d080, sub_67d450, sub_780ca0
   ... +11 more
*/
void sub_141d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141d680ULL || rel >= 0x141e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141e080 size=672 callers=3 calls=7
   calls: sub_1311c60, sub_1315b90, sub_1367a30, sub_141a8b0, sub_67bdb0, sub_67d450, sub_e83ac0
   ref: pane_T_num_01
*/
void pane_T_num_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141e080ULL || rel >= 0x141e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141e320 size=560 callers=2 calls=6
   calls: sub_1315b90, sub_1367890, sub_141a8b0, sub_14ac370, sub_67d450, sub_785c80
*/
void sub_141e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141e320ULL || rel >= 0x141e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141e550 size=128 callers=1 calls=4
   calls: sub_141c820, sub_14aad40, sub_1500c40, sub_e807f0
*/
void sub_141e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141e550ULL || rel >= 0x141e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141e5d0 size=128 callers=1 calls=3
   calls: sub_1502120, sub_5cfad0, sub_eb6230
*/
void sub_141e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141e5d0ULL || rel >= 0x141e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141e650 size=48 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_141e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141e650ULL || rel >= 0x141e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141e680 size=176 callers=1 calls=3
   calls: sub_1502120, sub_5cfad0, sub_eb6230
   ref: Play_UI_common_menu_close
*/
void Play_UI_common_menu_close(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141e680ULL || rel >= 0x141e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141e730 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/shop/bin/shop_list_00_lyt.bin
   ref: bin/appli/shop/bin/uikit_shop_list_00_lyt.bin
*/
void uikit_shop_list_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141e730ULL || rel >= 0x141e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141e920 size=240 callers=0 calls=0
*/
void sub_141e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141e920ULL || rel >= 0x141ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea10 size=16 callers=0 calls=0
*/
void sub_141ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea10ULL || rel >= 0x141ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea20 size=16 callers=0 calls=0
*/
void sub_141ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea20ULL || rel >= 0x141ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea30 size=16 callers=0 calls=0
*/
void sub_141ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea30ULL || rel >= 0x141ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea40 size=16 callers=0 calls=0
*/
void sub_141ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea40ULL || rel >= 0x141ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea50 size=16 callers=0 calls=0
*/
void sub_141ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea50ULL || rel >= 0x141ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea60 size=16 callers=0 calls=0
*/
void sub_141ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea60ULL || rel >= 0x141ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea70 size=16 callers=0 calls=0
*/
void sub_141ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea70ULL || rel >= 0x141ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea80 size=16 callers=0 calls=0
*/
void sub_141ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea80ULL || rel >= 0x141ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ea90 size=304 callers=0 calls=0
*/
void sub_141ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ea90ULL || rel >= 0x141ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ebc0 size=48 callers=0 calls=0
*/
void sub_141ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ebc0ULL || rel >= 0x141ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ebf0 size=16 callers=0 calls=0
*/
void sub_141ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ebf0ULL || rel >= 0x141ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ec00 size=16 callers=0 calls=0
*/
void sub_141ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ec00ULL || rel >= 0x141ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ec10 size=16 callers=0 calls=0
*/
void sub_141ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ec10ULL || rel >= 0x141ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ec20 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_141ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ec20ULL || rel >= 0x141edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141edf0 size=48 callers=0 calls=0
*/
void sub_141edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141edf0ULL || rel >= 0x141ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ee20 size=16 callers=0 calls=0
*/
void sub_141ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ee20ULL || rel >= 0x141ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ee30 size=32 callers=0 calls=0
*/
void sub_141ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ee30ULL || rel >= 0x141ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ee50 size=32 callers=0 calls=0
*/
void sub_141ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ee50ULL || rel >= 0x141ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141ee70 size=1776 callers=0 calls=11
   calls: sub_1418820, sub_1420f70, sub_14210c0, sub_1421210, sub_1441fb0, sub_5cfad0, sub_5cfaf0, sub_67b990, sub_795bc0, sub_c39c40, sub_d0c0
   ref: View_Shop
   ref: View_ItemNumSelect
*/
void View_Shop_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141ee70ULL || rel >= 0x141f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141f560 size=2432 callers=0 calls=49
   calls: Play_UI_common_menu_close, pane_T_num_01, sub_12fad80, sub_1367100, sub_1367890, sub_1367a30, sub_136b790, sub_136b7a0, sub_136b820, sub_137b8b0, sub_137b940, sub_137baa0
   ... +37 more
*/
void sub_141f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141f560ULL || rel >= 0x141fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0141fee0 size=432 callers=2 calls=5
   calls: sub_1311c60, sub_67d450, sub_e807f0, sub_eb8930, sub_ec0370
*/
void sub_141fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141fee0ULL || rel >= 0x1420090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420090 size=816 callers=1 calls=8
   calls: sub_1311c60, sub_1315270, sub_67d450, sub_786c10, sub_786cf0, sub_eb8930, sub_ec0370, wazaname
*/
void sub_1420090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420090ULL || rel >= 0x14203c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014203c0 size=1552 callers=1 calls=9
   calls: sub_1311c60, sub_1315270, sub_1315b90, sub_67d450, sub_786c10, sub_786cf0, sub_e807f0, sub_ec0370, wazaname
*/
void sub_14203c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14203c0ULL || rel >= 0x14209d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014209d0 size=608 callers=1 calls=5
   calls: sub_1311c60, sub_1315b90, sub_67d450, sub_eb8930, sub_ec0370
*/
void sub_14209d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14209d0ULL || rel >= 0x1420c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420c30 size=16 callers=0 calls=0
*/
void sub_1420c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420c30ULL || rel >= 0x1420c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420c40 size=384 callers=0 calls=0
*/
void sub_1420c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420c40ULL || rel >= 0x1420dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420dc0 size=16 callers=0 calls=0
*/
void sub_1420dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420dc0ULL || rel >= 0x1420dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420dd0 size=16 callers=0 calls=0
*/
void sub_1420dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420dd0ULL || rel >= 0x1420de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420de0 size=16 callers=0 calls=0
*/
void sub_1420de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420de0ULL || rel >= 0x1420df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420df0 size=16 callers=0 calls=0
*/
void sub_1420df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420df0ULL || rel >= 0x1420e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420e00 size=16 callers=0 calls=0
*/
void sub_1420e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420e00ULL || rel >= 0x1420e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420e10 size=16 callers=0 calls=0
*/
void sub_1420e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420e10ULL || rel >= 0x1420e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420e20 size=16 callers=0 calls=0
*/
void sub_1420e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420e20ULL || rel >= 0x1420e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420e30 size=16 callers=0 calls=0
*/
void sub_1420e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420e30ULL || rel >= 0x1420e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420e40 size=304 callers=0 calls=0
*/
void sub_1420e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420e40ULL || rel >= 0x1420f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01420f70 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1420f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420f70ULL || rel >= 0x14210c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014210c0 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_14210c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14210c0ULL || rel >= 0x1421210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421210 size=400 callers=1 calls=0
*/
void sub_1421210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421210ULL || rel >= 0x14213a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014213a0 size=80 callers=0 calls=0
*/
void sub_14213a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14213a0ULL || rel >= 0x14213f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014213f0 size=80 callers=0 calls=0
*/
void sub_14213f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14213f0ULL || rel >= 0x1421440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421440 size=80 callers=0 calls=0
*/
void sub_1421440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421440ULL || rel >= 0x1421490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421490 size=80 callers=0 calls=0
*/
void sub_1421490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421490ULL || rel >= 0x14214e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014214e0 size=144 callers=3 calls=1
   calls: sub_1421570
*/
void sub_14214e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14214e0ULL || rel >= 0x1421570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421570 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_1421570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421570ULL || rel >= 0x1421730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421730 size=96 callers=0 calls=0
*/
void sub_1421730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421730ULL || rel >= 0x1421790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421790 size=96 callers=0 calls=0
*/
void sub_1421790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421790ULL || rel >= 0x14217f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014217f0 size=96 callers=0 calls=0
*/
void sub_14217f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14217f0ULL || rel >= 0x1421850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421850 size=96 callers=0 calls=0
*/
void sub_1421850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421850ULL || rel >= 0x14218b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014218b0 size=96 callers=0 calls=0
*/
void sub_14218b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14218b0ULL || rel >= 0x1421910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421910 size=96 callers=0 calls=0
*/
void sub_1421910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421910ULL || rel >= 0x1421970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421970 size=16 callers=0 calls=0
*/
void sub_1421970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421970ULL || rel >= 0x1421980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421980 size=16 callers=0 calls=0
*/
void sub_1421980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421980ULL || rel >= 0x1421990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421990 size=16 callers=0 calls=0
*/
void sub_1421990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421990ULL || rel >= 0x14219a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014219a0 size=240 callers=0 calls=1
   calls: sub_1421a90
*/
void sub_14219a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14219a0ULL || rel >= 0x1421a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421a90 size=416 callers=1 calls=3
   calls: sub_1421d90, sub_672c10, sub_c386f0
*/
void sub_1421a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421a90ULL || rel >= 0x1421c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421c30 size=16 callers=0 calls=0
*/
void sub_1421c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421c30ULL || rel >= 0x1421c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421c40 size=16 callers=0 calls=0
*/
void sub_1421c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421c40ULL || rel >= 0x1421c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421c50 size=16 callers=0 calls=0
*/
void sub_1421c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421c50ULL || rel >= 0x1421c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421c60 size=304 callers=0 calls=0
*/
void sub_1421c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421c60ULL || rel >= 0x1421d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421d90 size=96 callers=1 calls=2
   calls: sub_1421df0, sub_e7b660
*/
void sub_1421d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421d90ULL || rel >= 0x1421df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421df0 size=224 callers=1 calls=3
   calls: sub_1422ae0, sub_7c2da0, sub_e7b5e0
*/
void sub_1421df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421df0ULL || rel >= 0x1421ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421ed0 size=208 callers=0 calls=5
   calls: sub_1421fa0, sub_78f150, sub_a7b850, sub_e7c0f0, sub_ebb020
   ref: TipsView
*/
void TipsView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421ed0ULL || rel >= 0x1421fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01421fa0 size=304 callers=1 calls=3
   calls: sub_1422bd0, sub_e7c160, sub_e7c210
*/
void sub_1421fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1421fa0ULL || rel >= 0x14220d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014220d0 size=16 callers=0 calls=0
*/
void sub_14220d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14220d0ULL || rel >= 0x14220e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014220e0 size=16 callers=0 calls=0
*/
void sub_14220e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14220e0ULL || rel >= 0x14220f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014220f0 size=16 callers=0 calls=0
*/
void sub_14220f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14220f0ULL || rel >= 0x1422100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422100 size=224 callers=0 calls=2
   calls: sub_1422d30, sub_e7c160
*/
void sub_1422100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422100ULL || rel >= 0x14221e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014221e0 size=16 callers=0 calls=0
*/
void sub_14221e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14221e0ULL || rel >= 0x14221f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014221f0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14221f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14221f0ULL || rel >= 0x1422390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422390 size=16 callers=0 calls=0
*/
void sub_1422390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422390ULL || rel >= 0x14223a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014223a0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14223a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14223a0ULL || rel >= 0x1422450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422450 size=16 callers=0 calls=0
*/
void sub_1422450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422450ULL || rel >= 0x1422460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422460 size=16 callers=0 calls=0
*/
void sub_1422460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422460ULL || rel >= 0x1422470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422470 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1422470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422470ULL || rel >= 0x1422520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422520 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1422520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422520ULL || rel >= 0x14225d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014225d0 size=16 callers=0 calls=0
*/
void sub_14225d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14225d0ULL || rel >= 0x14225e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014225e0 size=16 callers=0 calls=0
*/
void sub_14225e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14225e0ULL || rel >= 0x14225f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014225f0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_14225f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14225f0ULL || rel >= 0x1422670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422670 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1422670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422670ULL || rel >= 0x14227e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014227e0 size=96 callers=0 calls=1
   calls: sub_1422a00
*/
void sub_14227e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14227e0ULL || rel >= 0x1422840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422840 size=16 callers=0 calls=0
*/
void sub_1422840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422840ULL || rel >= 0x1422850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422850 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1422850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422850ULL || rel >= 0x14228f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014228f0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14228f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14228f0ULL || rel >= 0x14229b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014229b0 size=16 callers=0 calls=0
*/
void sub_14229b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14229b0ULL || rel >= 0x14229c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014229c0 size=16 callers=0 calls=0
*/
void sub_14229c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14229c0ULL || rel >= 0x14229d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014229d0 size=16 callers=0 calls=0
*/
void sub_14229d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14229d0ULL || rel >= 0x14229e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014229e0 size=32 callers=0 calls=0
*/
void sub_14229e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14229e0ULL || rel >= 0x1422a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422a00 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1422a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422a00ULL || rel >= 0x1422ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422ae0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1422ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422ae0ULL || rel >= 0x1422bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422bd0 size=352 callers=1 calls=0
*/
void sub_1422bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422bd0ULL || rel >= 0x1422d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422d30 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1422d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422d30ULL || rel >= 0x1422e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01422e70 size=448 callers=0 calls=6
   calls: sub_14233f0, sub_c39c40, sub_d0c0, sub_e807f0, sub_eb6230, sub_ebc960
   ref: execute
   ref: TipsView
*/
void TipsView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1422e70ULL || rel >= 0x1423030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423030 size=16 callers=0 calls=0
*/
void sub_1423030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423030ULL || rel >= 0x1423040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423040 size=16 callers=0 calls=0
*/
void sub_1423040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423040ULL || rel >= 0x1423050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423050 size=96 callers=0 calls=0
*/
void sub_1423050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423050ULL || rel >= 0x14230b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014230b0 size=96 callers=0 calls=0
*/
void sub_14230b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14230b0ULL || rel >= 0x1423110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423110 size=16 callers=0 calls=0
*/
void sub_1423110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423110ULL || rel >= 0x1423120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423120 size=96 callers=0 calls=0
*/
void sub_1423120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423120ULL || rel >= 0x1423180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423180 size=96 callers=0 calls=0
*/
void sub_1423180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423180ULL || rel >= 0x14231e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014231e0 size=16 callers=0 calls=0
*/
void sub_14231e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14231e0ULL || rel >= 0x14231f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014231f0 size=16 callers=0 calls=0
*/
void sub_14231f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14231f0ULL || rel >= 0x1423200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423200 size=96 callers=0 calls=0
*/
void sub_1423200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423200ULL || rel >= 0x1423260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423260 size=96 callers=0 calls=0
*/
void sub_1423260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423260ULL || rel >= 0x14232c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014232c0 size=304 callers=0 calls=0
*/
void sub_14232c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14232c0ULL || rel >= 0x14233f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014233f0 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_ebb700
*/
void sub_14233f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14233f0ULL || rel >= 0x1423540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423540 size=160 callers=2 calls=1
   calls: sub_14235e0
*/
void sub_1423540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423540ULL || rel >= 0x14235e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014235e0 size=464 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_14235e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14235e0ULL || rel >= 0x14237b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014237b0 size=96 callers=0 calls=0
*/
void sub_14237b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14237b0ULL || rel >= 0x1423810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423810 size=96 callers=0 calls=0
*/
void sub_1423810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423810ULL || rel >= 0x1423870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423870 size=96 callers=0 calls=0
*/
void sub_1423870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423870ULL || rel >= 0x14238d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014238d0 size=96 callers=0 calls=0
*/
void sub_14238d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14238d0ULL || rel >= 0x1423930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423930 size=96 callers=0 calls=0
*/
void sub_1423930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423930ULL || rel >= 0x1423990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423990 size=96 callers=0 calls=0
*/
void sub_1423990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423990ULL || rel >= 0x14239f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014239f0 size=16 callers=0 calls=0
*/
void sub_14239f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14239f0ULL || rel >= 0x1423a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423a00 size=16 callers=0 calls=0
*/
void sub_1423a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423a00ULL || rel >= 0x1423a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423a10 size=16 callers=0 calls=0
*/
void sub_1423a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423a10ULL || rel >= 0x1423a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423a20 size=240 callers=0 calls=1
   calls: sub_1423b10
*/
void sub_1423a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423a20ULL || rel >= 0x1423b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423b10 size=272 callers=1 calls=3
   calls: sub_1423d80, sub_672c10, sub_c386f0
*/
void sub_1423b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423b10ULL || rel >= 0x1423c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423c20 size=16 callers=0 calls=0
*/
void sub_1423c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423c20ULL || rel >= 0x1423c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423c30 size=16 callers=0 calls=0
*/
void sub_1423c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423c30ULL || rel >= 0x1423c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423c40 size=16 callers=0 calls=0
*/
void sub_1423c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423c40ULL || rel >= 0x1423c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423c50 size=304 callers=0 calls=0
*/
void sub_1423c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423c50ULL || rel >= 0x1423d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423d80 size=256 callers=1 calls=2
   calls: sub_1423e80, sub_e7b660
*/
void sub_1423d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423d80ULL || rel >= 0x1423e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423e80 size=224 callers=1 calls=3
   calls: sub_1423f60, sub_7c2da0, sub_e7b5e0
*/
void sub_1423e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423e80ULL || rel >= 0x1423f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01423f60 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1423f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1423f60ULL || rel >= 0x1424050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424050 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1424050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424050ULL || rel >= 0x14240d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014240d0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14240d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14240d0ULL || rel >= 0x1424240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424240 size=96 callers=0 calls=1
   calls: sub_1424460
*/
void sub_1424240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424240ULL || rel >= 0x14242a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014242a0 size=16 callers=0 calls=0
*/
void sub_14242a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14242a0ULL || rel >= 0x14242b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014242b0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14242b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14242b0ULL || rel >= 0x1424350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424350 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1424350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424350ULL || rel >= 0x1424410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424410 size=16 callers=0 calls=0
*/
void sub_1424410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424410ULL || rel >= 0x1424420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424420 size=16 callers=0 calls=0
*/
void sub_1424420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424420ULL || rel >= 0x1424430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424430 size=16 callers=0 calls=0
*/
void sub_1424430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424430ULL || rel >= 0x1424440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424440 size=32 callers=0 calls=0
*/
void sub_1424440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424440ULL || rel >= 0x1424460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424460 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1424460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424460ULL || rel >= 0x1424540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424540 size=368 callers=1 calls=5
   calls: sub_11061d0, sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_e7c210
*/
void sub_1424540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424540ULL || rel >= 0x14246b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014246b0 size=480 callers=2 calls=5
   calls: sub_1306f20, sub_66a180, sub_66a400, sub_ee49b0, sub_f598f0
*/
void sub_14246b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14246b0ULL || rel >= 0x1424890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424890 size=272 callers=1 calls=2
   calls: sub_1426e50, sub_f598f0
*/
void sub_1424890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424890ULL || rel >= 0x14249a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014249a0 size=16 callers=1 calls=0
*/
void sub_14249a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14249a0ULL || rel >= 0x14249b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014249b0 size=16 callers=3 calls=0
*/
void sub_14249b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14249b0ULL || rel >= 0x14249c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014249c0 size=16 callers=1 calls=0
*/
void sub_14249c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14249c0ULL || rel >= 0x14249d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014249d0 size=784 callers=0 calls=14
   calls: sub_130b1d0, sub_1424ce0, sub_1425b80, sub_1425ed0, sub_1426230, sub_1426aa0, sub_5cfad0, sub_65f1c0, sub_78f150, sub_78f240, sub_794e80, sub_e7c0f0
   ... +2 more
   ref: ViewCredits
   ref: ViewTheEnd
   ref: ViewBackground
*/
void ViewBackground(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14249d0ULL || rel >= 0x1424ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424ce0 size=400 callers=1 calls=3
   calls: sub_1424540, sub_1425a50, sub_e7c160
*/
void sub_1424ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424ce0ULL || rel >= 0x1424e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424e70 size=224 callers=0 calls=3
   calls: scrollSpeed, sub_1425a50, sub_e7ea20
*/
void sub_1424e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424e70ULL || rel >= 0x1424f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424f50 size=16 callers=0 calls=0
*/
void sub_1424f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424f50ULL || rel >= 0x1424f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424f60 size=16 callers=0 calls=0
*/
void sub_1424f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424f60ULL || rel >= 0x1424f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01424f70 size=736 callers=0 calls=6
   calls: sub_1357610, sub_1426580, sub_14266d0, sub_1426820, sub_1426960, sub_e7c160
*/
void sub_1424f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1424f70ULL || rel >= 0x1425250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425250 size=192 callers=0 calls=2
   calls: sub_1424890, sub_1425a50
*/
void sub_1425250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425250ULL || rel >= 0x1425310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425310 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1425310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425310ULL || rel >= 0x14254d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014254d0 size=16 callers=0 calls=0
*/
void sub_14254d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14254d0ULL || rel >= 0x14254e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014254e0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14254e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14254e0ULL || rel >= 0x1425590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425590 size=16 callers=0 calls=0
*/
void sub_1425590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425590ULL || rel >= 0x14255a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014255a0 size=16 callers=0 calls=0
*/
void sub_14255a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14255a0ULL || rel >= 0x14255b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014255b0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14255b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14255b0ULL || rel >= 0x1425660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425660 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1425660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425660ULL || rel >= 0x1425710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425710 size=16 callers=0 calls=0
*/
void sub_1425710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425710ULL || rel >= 0x1425720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425720 size=16 callers=0 calls=0
*/
void sub_1425720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425720ULL || rel >= 0x1425730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425730 size=592 callers=0 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_65f110, sub_f598f0
*/
void sub_1425730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425730ULL || rel >= 0x1425980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425980 size=16 callers=0 calls=0
*/
void sub_1425980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425980ULL || rel >= 0x1425990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425990 size=16 callers=0 calls=0
*/
void sub_1425990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425990ULL || rel >= 0x14259a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014259a0 size=16 callers=0 calls=0
*/
void sub_14259a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14259a0ULL || rel >= 0x14259b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014259b0 size=16 callers=0 calls=0
*/
void sub_14259b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14259b0ULL || rel >= 0x14259c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014259c0 size=16 callers=0 calls=0
*/
void sub_14259c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14259c0ULL || rel >= 0x14259d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014259d0 size=16 callers=0 calls=0
*/
void sub_14259d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14259d0ULL || rel >= 0x14259e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014259e0 size=16 callers=0 calls=0
*/
void sub_14259e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14259e0ULL || rel >= 0x14259f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014259f0 size=16 callers=0 calls=0
*/
void sub_14259f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14259f0ULL || rel >= 0x1425a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425a00 size=16 callers=0 calls=0
*/
void sub_1425a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425a00ULL || rel >= 0x1425a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425a10 size=16 callers=0 calls=0
*/
void sub_1425a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425a10ULL || rel >= 0x1425a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425a20 size=16 callers=0 calls=0
*/
void sub_1425a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425a20ULL || rel >= 0x1425a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425a30 size=32 callers=0 calls=0
*/
void sub_1425a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425a30ULL || rel >= 0x1425a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425a50 size=304 callers=9 calls=0
*/
void sub_1425a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425a50ULL || rel >= 0x1425b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425b80 size=288 callers=1 calls=2
   calls: sub_1425ca0, sub_e809c0
*/
void sub_1425b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425b80ULL || rel >= 0x1425ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425ca0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1425ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425ca0ULL || rel >= 0x1425ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425ed0 size=288 callers=1 calls=2
   calls: sub_1425ff0, sub_e809c0
*/
void sub_1425ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425ed0ULL || rel >= 0x1425ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01425ff0 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1425ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425ff0ULL || rel >= 0x1426230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426230 size=288 callers=1 calls=2
   calls: sub_1426350, sub_e809c0
*/
void sub_1426230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426230ULL || rel >= 0x1426350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426350 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1426350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426350ULL || rel >= 0x1426580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426580 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1426580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426580ULL || rel >= 0x14266d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014266d0 size=336 callers=1 calls=2
   calls: anonymous, sub_13a4980
*/
void sub_14266d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14266d0ULL || rel >= 0x1426820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426820 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1426820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426820ULL || rel >= 0x1426960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426960 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1426960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426960ULL || rel >= 0x1426aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426aa0 size=304 callers=1 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_c46830
*/
void sub_1426aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426aa0ULL || rel >= 0x1426bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426bd0 size=640 callers=1 calls=5
   calls: sub_1106200, sub_11063e0, sub_11065b0, sub_11067c0, sub_1106f30
   ref: startDelay
   ref: rowCount
   ref: staffList
   ref: textHeight
   ref: scrollSpeed
*/
void scrollSpeed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426bd0ULL || rel >= 0x1426e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426e50 size=80 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_1426e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426e50ULL || rel >= 0x1426ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01426ea0 size=608 callers=1 calls=4
   calls: sub_1106320, sub_11063e0, sub_11067c0, sub_1106cd0
   ref: y_offset
   ref: center_staff
   ref: left_staff
   ref: right_staff
*/
void center_staff(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1426ea0ULL || rel >= 0x1427100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427100 size=272 callers=3 calls=2
   calls: sub_11063e0, sub_11067c0
   ref: anime_company
   ref: anime_dsd
   ref: anime_logo
*/
void anime_company(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427100ULL || rel >= 0x1427210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427210 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/credit/bin/credit_01_lyt.bin
*/
void credit_01_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427210ULL || rel >= 0x1427320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427320 size=16 callers=0 calls=0
*/
void sub_1427320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427320ULL || rel >= 0x1427330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427330 size=16 callers=0 calls=0
*/
void sub_1427330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427330ULL || rel >= 0x1427340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427340 size=16 callers=0 calls=0
*/
void sub_1427340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427340ULL || rel >= 0x1427350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427350 size=16 callers=0 calls=0
*/
void sub_1427350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427350ULL || rel >= 0x1427360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427360 size=16 callers=0 calls=0
*/
void sub_1427360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427360ULL || rel >= 0x1427370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427370 size=16 callers=0 calls=0
*/
void sub_1427370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427370ULL || rel >= 0x1427380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427380 size=16 callers=0 calls=0
*/
void sub_1427380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427380ULL || rel >= 0x1427390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427390 size=16 callers=0 calls=0
*/
void sub_1427390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427390ULL || rel >= 0x14273a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014273a0 size=304 callers=0 calls=0
*/
void sub_14273a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14273a0ULL || rel >= 0x14274d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014274d0 size=176 callers=1 calls=1
   calls: sub_e83430
   ref: anime_%s
*/
void anime__s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14274d0ULL || rel >= 0x1427580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427580 size=176 callers=1 calls=1
   calls: sub_e83430
   ref: anime_%s
*/
void anime__s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427580ULL || rel >= 0x1427630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427630 size=416 callers=2 calls=1
   calls: sub_14ab2b0
   ref: anime_%s
   ref: anime_%s_%s
*/
void anime__s_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427630ULL || rel >= 0x14277d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014277d0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/end/bin/end_00_lyt.bin
*/
void end_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14277d0ULL || rel >= 0x14278e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014278e0 size=16 callers=0 calls=0
*/
void sub_14278e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14278e0ULL || rel >= 0x14278f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014278f0 size=16 callers=0 calls=0
*/
void sub_14278f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14278f0ULL || rel >= 0x1427900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427900 size=16 callers=0 calls=0
*/
void sub_1427900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427900ULL || rel >= 0x1427910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427910 size=16 callers=0 calls=0
*/
void sub_1427910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427910ULL || rel >= 0x1427920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427920 size=16 callers=0 calls=0
*/
void sub_1427920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427920ULL || rel >= 0x1427930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427930 size=16 callers=0 calls=0
*/
void sub_1427930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427930ULL || rel >= 0x1427940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427940 size=16 callers=0 calls=0
*/
void sub_1427940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427940ULL || rel >= 0x1427950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427950 size=16 callers=0 calls=0
*/
void sub_1427950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427950ULL || rel >= 0x1427960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427960 size=304 callers=1 calls=0
*/
void sub_1427960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427960ULL || rel >= 0x1427a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01427a90 size=1504 callers=0 calls=5
   calls: sub_130b1d0, sub_14ab040, sub_67b990, sub_7a3a10, sub_e83930
   ref: T_%02d
   ref: pane_%s
   ref: anime_%s
   ref: switch_logo
   ref: anime_%s_%s
*/
void switch_logo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1427a90ULL || rel >= 0x1428070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428070 size=64 callers=2 calls=0
*/
void sub_1428070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428070ULL || rel >= 0x14280b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014280b0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/credit/bin/credit_00_lyt.bin
*/
void credit_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14280b0ULL || rel >= 0x14281c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014281c0 size=368 callers=1 calls=1
   calls: sub_1428330
*/
void sub_14281c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14281c0ULL || rel >= 0x1428330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428330 size=352 callers=3 calls=5
   calls: sub_1311c60, sub_14ac280, sub_67d450, sub_e7eb10, sub_e7f7c0
*/
void sub_1428330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428330ULL || rel >= 0x1428490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428490 size=384 callers=2 calls=0
   ref: part_dsd
   ref: anime_%s
   ref: part_brandlogo
   ref: part_titlelogo
*/
void part_titlelogo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428490ULL || rel >= 0x1428610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428610 size=112 callers=2 calls=3
   calls: part_titlelogo, sub_e83930, sub_e83a20
*/
void sub_1428610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428610ULL || rel >= 0x1428680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428680 size=112 callers=0 calls=0
*/
void sub_1428680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428680ULL || rel >= 0x14286f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014286f0 size=112 callers=0 calls=0
*/
void sub_14286f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14286f0ULL || rel >= 0x1428760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428760 size=16 callers=0 calls=0
*/
void sub_1428760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428760ULL || rel >= 0x1428770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428770 size=112 callers=0 calls=0
*/
void sub_1428770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428770ULL || rel >= 0x14287e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014287e0 size=112 callers=0 calls=0
*/
void sub_14287e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14287e0ULL || rel >= 0x1428850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428850 size=16 callers=0 calls=0
*/
void sub_1428850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428850ULL || rel >= 0x1428860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428860 size=16 callers=0 calls=0
*/
void sub_1428860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428860ULL || rel >= 0x1428870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428870 size=112 callers=0 calls=0
*/
void sub_1428870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428870ULL || rel >= 0x14288e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014288e0 size=112 callers=0 calls=0
*/
void sub_14288e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14288e0ULL || rel >= 0x1428950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428950 size=304 callers=1 calls=0
*/
void sub_1428950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428950ULL || rel >= 0x1428a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428a80 size=352 callers=0 calls=5
   calls: anime__s_3, sub_1428e60, sub_c39c40, sub_d0c0, sub_e806b0
   ref: TheEnd
   ref: ViewTheEnd
*/
void ViewTheEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428a80ULL || rel >= 0x1428be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428be0 size=192 callers=0 calls=3
   calls: anime__s_4, anime__s_5, sub_c44410
*/
void sub_1428be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428be0ULL || rel >= 0x1428ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428ca0 size=16 callers=0 calls=0
*/
void sub_1428ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428ca0ULL || rel >= 0x1428cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428cb0 size=16 callers=0 calls=0
*/
void sub_1428cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428cb0ULL || rel >= 0x1428cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428cc0 size=16 callers=0 calls=0
*/
void sub_1428cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428cc0ULL || rel >= 0x1428cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428cd0 size=16 callers=0 calls=0
*/
void sub_1428cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428cd0ULL || rel >= 0x1428ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428ce0 size=16 callers=0 calls=0
*/
void sub_1428ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428ce0ULL || rel >= 0x1428cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428cf0 size=16 callers=0 calls=0
*/
void sub_1428cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428cf0ULL || rel >= 0x1428d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01428d00 size=16 callers=0 calls=0
*/
void sub_1428d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1428d00ULL || rel >= 0x1428d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

