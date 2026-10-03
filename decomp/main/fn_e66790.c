/* main functions 00e66790..00e7cc60 (113 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00e66790 size=16 callers=0 calls=0
*/
void sub_e66790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66790ULL || rel >= 0xe667a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e667a0 size=16 callers=0 calls=0
*/
void sub_e667a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe667a0ULL || rel >= 0xe667b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e667b0 size=16 callers=0 calls=0
*/
void sub_e667b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe667b0ULL || rel >= 0xe667c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e667c0 size=304 callers=0 calls=0
*/
void sub_e667c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe667c0ULL || rel >= 0xe668f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e668f0 size=160 callers=0 calls=0
*/
void sub_e668f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe668f0ULL || rel >= 0xe66990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66990 size=128 callers=2 calls=1
   calls: sub_14ab0c0
*/
void sub_e66990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66990ULL || rel >= 0xe66a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66a10 size=304 callers=3 calls=3
   calls: sub_14ab0c0, sub_14ab440, sub_14ab5c0
*/
void sub_e66a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66a10ULL || rel >= 0xe66b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66b40 size=320 callers=0 calls=2
   calls: sub_14ab0c0, sub_14ab200
*/
void sub_e66b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66b40ULL || rel >= 0xe66c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66c80 size=336 callers=3 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_e66c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66c80ULL || rel >= 0xe66dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66dd0 size=16 callers=1 calls=0
*/
void sub_e66dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66dd0ULL || rel >= 0xe66de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66de0 size=128 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_e66de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66de0ULL || rel >= 0xe66e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66e60 size=96 callers=0 calls=2
   calls: sub_14ab0c0, sub_14ab440
*/
void sub_e66e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66e60ULL || rel >= 0xe66ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66ec0 size=64 callers=1 calls=1
   calls: sub_14ab510
*/
void sub_e66ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66ec0ULL || rel >= 0xe66f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e66f00 size=832 callers=0 calls=11
   calls: sub_14abc90, sub_14ad840, sub_5e2930, sub_683640, sub_683670, sub_685230, sub_c48c70, sub_c4a100, sub_e66c80, sub_eb52f0, sub_ee7890
*/
void sub_e66f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe66f00ULL || rel >= 0xe67240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67240 size=224 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_e67240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67240ULL || rel >= 0xe67320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67320 size=16 callers=0 calls=0
*/
void sub_e67320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67320ULL || rel >= 0xe67330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67330 size=336 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e67330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67330ULL || rel >= 0xe67480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67480 size=16 callers=0 calls=0
*/
void sub_e67480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67480ULL || rel >= 0xe67490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67490 size=16 callers=0 calls=0
*/
void sub_e67490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67490ULL || rel >= 0xe674a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e674a0 size=16 callers=0 calls=0
*/
void sub_e674a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe674a0ULL || rel >= 0xe674b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e674b0 size=16 callers=0 calls=0
*/
void sub_e674b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe674b0ULL || rel >= 0xe674c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e674c0 size=16 callers=0 calls=0
*/
void sub_e674c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe674c0ULL || rel >= 0xe674d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e674d0 size=16 callers=0 calls=0
*/
void sub_e674d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe674d0ULL || rel >= 0xe674e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e674e0 size=16 callers=0 calls=0
*/
void sub_e674e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe674e0ULL || rel >= 0xe674f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e674f0 size=16 callers=0 calls=0
*/
void sub_e674f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe674f0ULL || rel >= 0xe67500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67500 size=16 callers=0 calls=0
*/
void sub_e67500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67500ULL || rel >= 0xe67510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67510 size=16 callers=0 calls=0
*/
void sub_e67510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67510ULL || rel >= 0xe67520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67520 size=16 callers=0 calls=0
*/
void sub_e67520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67520ULL || rel >= 0xe67530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67530 size=16 callers=0 calls=0
*/
void sub_e67530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67530ULL || rel >= 0xe67540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67540 size=304 callers=9 calls=0
*/
void sub_e67540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67540ULL || rel >= 0xe67670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67670 size=128 callers=0 calls=0
*/
void sub_e67670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67670ULL || rel >= 0xe676f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e676f0 size=112 callers=1 calls=0
*/
void sub_e676f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe676f0ULL || rel >= 0xe67760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67760 size=272 callers=1 calls=1
   calls: sub_e67ad0
   ref: View_PlaceName
*/
void View_PlaceName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67760ULL || rel >= 0xe67870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67870 size=16 callers=1 calls=0
*/
void sub_e67870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67870ULL || rel >= 0xe67880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67880 size=16 callers=1 calls=0
*/
void sub_e67880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67880ULL || rel >= 0xe67890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67890 size=64 callers=1 calls=1
   calls: sub_e80580
*/
void sub_e67890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67890ULL || rel >= 0xe678d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e678d0 size=304 callers=1 calls=1
   calls: sub_e68000
*/
void sub_e678d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe678d0ULL || rel >= 0xe67a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67a00 size=16 callers=1 calls=0
*/
void sub_e67a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67a00ULL || rel >= 0xe67a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67a10 size=96 callers=0 calls=0
*/
void sub_e67a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67a10ULL || rel >= 0xe67a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67a70 size=96 callers=0 calls=0
*/
void sub_e67a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67a70ULL || rel >= 0xe67ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67ad0 size=288 callers=1 calls=2
   calls: sub_e67bf0, sub_e809c0
*/
void sub_e67ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67ad0ULL || rel >= 0xe67bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67bf0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_e67bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67bf0ULL || rel >= 0xe67e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67e20 size=96 callers=0 calls=4
   calls: sub_e83430, sub_e83850, sub_e83930, sub_e83a20
*/
void sub_e67e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67e20ULL || rel >= 0xe67e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67e80 size=96 callers=0 calls=4
   calls: sub_e83430, sub_e83850, sub_e83930, sub_e83a20
*/
void sub_e67e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67e80ULL || rel >= 0xe67ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67ee0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/place/bin/place_00_lyt.bin
*/
void place_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67ee0ULL || rel >= 0xe67ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e67ff0 size=16 callers=0 calls=0
*/
void sub_e67ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67ff0ULL || rel >= 0xe68000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68000 size=384 callers=1 calls=7
   calls: sub_67bdb0, sub_67bfc0, sub_e83540, sub_e83850, sub_e83930, sub_e83a40, sub_e83b20
*/
void sub_e68000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68000ULL || rel >= 0xe68180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68180 size=16 callers=0 calls=0
*/
void sub_e68180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68180ULL || rel >= 0xe68190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68190 size=16 callers=0 calls=0
*/
void sub_e68190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68190ULL || rel >= 0xe681a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e681a0 size=16 callers=0 calls=0
*/
void sub_e681a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe681a0ULL || rel >= 0xe681b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e681b0 size=16 callers=0 calls=0
*/
void sub_e681b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe681b0ULL || rel >= 0xe681c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e681c0 size=16 callers=0 calls=0
*/
void sub_e681c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe681c0ULL || rel >= 0xe681d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e681d0 size=16 callers=0 calls=0
*/
void sub_e681d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe681d0ULL || rel >= 0xe681e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e681e0 size=16 callers=0 calls=0
*/
void sub_e681e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe681e0ULL || rel >= 0xe681f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e681f0 size=16 callers=0 calls=0
*/
void sub_e681f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe681f0ULL || rel >= 0xe68200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68200 size=304 callers=0 calls=0
*/
void sub_e68200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68200ULL || rel >= 0xe68330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68330 size=48 callers=0 calls=1
   calls: sub_e83430
*/
void sub_e68330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68330ULL || rel >= 0xe68360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68360 size=16 callers=0 calls=0
*/
void sub_e68360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68360ULL || rel >= 0xe68370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68370 size=16 callers=0 calls=0
*/
void sub_e68370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68370ULL || rel >= 0xe68380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68380 size=16 callers=0 calls=0
*/
void sub_e68380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68380ULL || rel >= 0xe68390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68390 size=112 callers=1 calls=0
*/
void sub_e68390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68390ULL || rel >= 0xe68400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68400 size=128 callers=1 calls=2
   calls: PopupView_03, sub_e68750
*/
void sub_e68400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68400ULL || rel >= 0xe68480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68480 size=720 callers=1 calls=2
   calls: sub_67b990, sub_e695c0
   ref: PopupView_03
   ref: PopupView_02
   ref: PopupView_01
   ref: PopupView_00
*/
void PopupView_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68480ULL || rel >= 0xe68750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68750 size=768 callers=1 calls=1
   calls: sub_13149a0
*/
void sub_e68750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68750ULL || rel >= 0xe68a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68a50 size=1248 callers=1 calls=3
   calls: sub_e69490, sub_e69de0, sub_e69e50
*/
void sub_e68a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68a50ULL || rel >= 0xe68f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68f30 size=32 callers=1 calls=0
*/
void sub_e68f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68f30ULL || rel >= 0xe68f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68f50 size=96 callers=2 calls=1
   calls: sub_e806b0
*/
void sub_e68f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68f50ULL || rel >= 0xe68fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e68fb0 size=96 callers=1 calls=1
   calls: sub_e806b0
*/
void sub_e68fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe68fb0ULL || rel >= 0xe69010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69010 size=432 callers=1 calls=1
   calls: sub_e69e00
*/
void sub_e69010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69010ULL || rel >= 0xe691c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e691c0 size=352 callers=0 calls=5
   calls: sub_67d450, sub_c71600, sub_d05060, sub_e69490, sub_e69bb0
*/
void sub_e691c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe691c0ULL || rel >= 0xe69320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69320 size=320 callers=3 calls=0
*/
void sub_e69320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69320ULL || rel >= 0xe69460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69460 size=48 callers=0 calls=1
   calls: sub_e69320
*/
void sub_e69460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69460ULL || rel >= 0xe69490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69490 size=304 callers=9 calls=1
   calls: sub_967240
*/
void sub_e69490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69490ULL || rel >= 0xe695c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e695c0 size=288 callers=4 calls=2
   calls: sub_e696e0, sub_e809c0
*/
void sub_e695c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe695c0ULL || rel >= 0xe696e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e696e0 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_e696e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe696e0ULL || rel >= 0xe69920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69920 size=304 callers=0 calls=7
   calls: sub_14aad40, sub_14abd80, sub_7a3a10, sub_e6a220, sub_e83430, sub_e83930, sub_e83a20
*/
void sub_e69920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69920ULL || rel >= 0xe69a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69a50 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/msg_pop/bin/msg_pop_00_lyt.bin
*/
void msg_pop_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69a50ULL || rel >= 0xe69b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69b60 size=80 callers=0 calls=1
   calls: sub_e83430
*/
void sub_e69b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69b60ULL || rel >= 0xe69bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69bb0 size=560 callers=1 calls=8
   calls: sub_1311c60, sub_17b5e50, sub_67bdb0, sub_685dd0, sub_e83430, sub_e83850, sub_e83930, sub_e83b20
*/
void sub_e69bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69bb0ULL || rel >= 0xe69de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69de0 size=32 callers=4 calls=0
*/
void sub_e69de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69de0ULL || rel >= 0xe69e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69e00 size=80 callers=4 calls=1
   calls: sub_14ab2b0
*/
void sub_e69e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69e00ULL || rel >= 0xe69e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69e50 size=48 callers=4 calls=0
*/
void sub_e69e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69e50ULL || rel >= 0xe69e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69e80 size=96 callers=0 calls=0
*/
void sub_e69e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69e80ULL || rel >= 0xe69ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69ee0 size=96 callers=0 calls=0
*/
void sub_e69ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69ee0ULL || rel >= 0xe69f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69f40 size=16 callers=0 calls=0
*/
void sub_e69f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69f40ULL || rel >= 0xe69f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69f50 size=96 callers=0 calls=0
*/
void sub_e69f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69f50ULL || rel >= 0xe69fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e69fb0 size=96 callers=0 calls=0
*/
void sub_e69fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe69fb0ULL || rel >= 0xe6a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6a010 size=16 callers=0 calls=0
*/
void sub_e6a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a010ULL || rel >= 0xe6a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6a020 size=16 callers=0 calls=0
*/
void sub_e6a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a020ULL || rel >= 0xe6a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6a030 size=96 callers=0 calls=0
*/
void sub_e6a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a030ULL || rel >= 0xe6a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6a090 size=96 callers=0 calls=0
*/
void sub_e6a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a090ULL || rel >= 0xe6a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6a0f0 size=304 callers=0 calls=0
*/
void sub_e6a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a0f0ULL || rel >= 0xe6a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6a220 size=224 callers=7 calls=1
   calls: sub_14aad40
*/
void sub_e6a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a220ULL || rel >= 0xe6a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6a300 size=2096 callers=1 calls=9
   calls: sub_e676f0, sub_e68390, sub_e69320, sub_e6d280, sub_e6d870, sub_e6e690, sub_e6ec70, sub_e70d00, sub_e7c210
*/
void sub_e6a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a300ULL || rel >= 0xe6ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ab30 size=272 callers=0 calls=4
   calls: sub_c39c40, sub_d0c0, sub_e6ac40, sub_e6ce90
   ref: enable
*/
void enable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ab30ULL || rel >= 0xe6ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ac40 size=448 callers=1 calls=4
   calls: sub_135a1a0, sub_14e0b90, sub_e68f50, sub_e719a0
*/
void sub_e6ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ac40ULL || rel >= 0xe6ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ae00 size=416 callers=0 calls=3
   calls: sub_c39c40, sub_e6afa0, sub_e6ce90
*/
void sub_e6ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ae00ULL || rel >= 0xe6afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6afa0 size=288 callers=2 calls=8
   calls: sub_14e0b90, sub_e67870, sub_e68a50, sub_e6d3d0, sub_e6da00, sub_e6e820, sub_e70f10, sub_ea3d10
*/
void sub_e6afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6afa0ULL || rel >= 0xe6b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b0c0 size=16 callers=0 calls=0
*/
void sub_e6b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b0c0ULL || rel >= 0xe6b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b0d0 size=272 callers=0 calls=4
   calls: sub_c39c40, sub_d0c0, sub_e6b1e0, sub_e6ce90
*/
void sub_e6b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b0d0ULL || rel >= 0xe6b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b1e0 size=352 callers=1 calls=5
   calls: sub_135a1a0, sub_14e0b90, sub_e67a00, sub_e68fb0, sub_e719c0
*/
void sub_e6b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b1e0ULL || rel >= 0xe6b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b340 size=416 callers=0 calls=3
   calls: sub_c39c40, sub_e6afa0, sub_e6ce90
*/
void sub_e6b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b340ULL || rel >= 0xe6b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b4e0 size=16 callers=0 calls=0
*/
void sub_e6b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b4e0ULL || rel >= 0xe6b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b4f0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_e6b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b4f0ULL || rel >= 0xe6b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b690 size=16 callers=0 calls=0
*/
void sub_e6b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b690ULL || rel >= 0xe6b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b6a0 size=16 callers=0 calls=0
*/
void sub_e6b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b6a0ULL || rel >= 0xe6b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b6b0 size=16 callers=0 calls=0
*/
void sub_e6b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b6b0ULL || rel >= 0xe6b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b6c0 size=16 callers=0 calls=0
*/
void sub_e6b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b6c0ULL || rel >= 0xe6b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b6d0 size=16 callers=0 calls=0
*/
void sub_e6b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b6d0ULL || rel >= 0xe6b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b6e0 size=224 callers=0 calls=5
   calls: sub_78f150, sub_78f240, sub_e6b7c0, sub_e7c0f0, sub_e7e890
   ref: common/live_comm.dat
*/
void live_comm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b6e0ULL || rel >= 0xe6b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b7c0 size=400 callers=1 calls=3
   calls: sub_14e0b90, sub_e6a300, sub_e7c160
*/
void sub_e6b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b7c0ULL || rel >= 0xe6b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6b950 size=304 callers=0 calls=10
   calls: ItemDescView, LiveCommViewField, View_PlaceName, View_Wallet, sub_14e0b90, sub_e68400, sub_e6d8e0, sub_e6ec90, sub_e7ea20, sub_e7f200
*/
void sub_e6b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b950ULL || rel >= 0xe6ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ba80 size=400 callers=0 calls=8
   calls: sub_135a1a0, sub_14e0b90, sub_e67890, sub_e68f50, sub_e6d400, sub_e6da20, sub_e6e870, sub_e719a0
*/
void sub_e6ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ba80ULL || rel >= 0xe6bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6bc10 size=16 callers=0 calls=0
*/
void sub_e6bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6bc10ULL || rel >= 0xe6bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6bc20 size=432 callers=0 calls=3
   calls: sub_e6cf80, sub_e6d0c0, sub_e7c160
*/
void sub_e6bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6bc20ULL || rel >= 0xe6bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6bdd0 size=256 callers=0 calls=8
   calls: sub_14e0b90, sub_e67880, sub_e68f30, sub_e6d3e0, sub_e6da10, sub_e6e830, sub_e6f180, sub_e71990
*/
void sub_e6bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6bdd0ULL || rel >= 0xe6bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6bed0 size=320 callers=1 calls=4
   calls: sub_14e0b90, sub_e719a0, sub_e719c0, sub_e9ddb0
*/
void sub_e6bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6bed0ULL || rel >= 0xe6c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c010 size=176 callers=1 calls=1
   calls: sub_14e0b90
*/
void sub_e6c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c010ULL || rel >= 0xe6c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c0c0 size=240 callers=1 calls=2
   calls: sub_14e0b90, sub_e6fcc0
*/
void sub_e6c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c0c0ULL || rel >= 0xe6c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c1b0 size=176 callers=1 calls=2
   calls: sub_14e0b90, sub_e6e8e0
*/
void sub_e6c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c1b0ULL || rel >= 0xe6c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c260 size=192 callers=1 calls=2
   calls: sub_14e0b90, sub_e6e910
*/
void sub_e6c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c260ULL || rel >= 0xe6c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c320 size=16 callers=0 calls=0
*/
void sub_e6c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c320ULL || rel >= 0xe6c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c330 size=112 callers=0 calls=1
   calls: sub_79c240
*/
void sub_e6c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c330ULL || rel >= 0xe6c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c3a0 size=16 callers=0 calls=0
*/
void sub_e6c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c3a0ULL || rel >= 0xe6c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c3b0 size=16 callers=0 calls=0
*/
void sub_e6c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c3b0ULL || rel >= 0xe6c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c3c0 size=112 callers=0 calls=1
   calls: sub_79c240
*/
void sub_e6c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c3c0ULL || rel >= 0xe6c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c430 size=112 callers=0 calls=1
   calls: sub_79c240
*/
void sub_e6c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c430ULL || rel >= 0xe6c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c4a0 size=16 callers=0 calls=0
*/
void sub_e6c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c4a0ULL || rel >= 0xe6c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c4b0 size=16 callers=0 calls=0
*/
void sub_e6c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c4b0ULL || rel >= 0xe6c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c4c0 size=16 callers=0 calls=0
*/
void sub_e6c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c4c0ULL || rel >= 0xe6c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c4d0 size=112 callers=0 calls=1
   calls: sub_79c240
*/
void sub_e6c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c4d0ULL || rel >= 0xe6c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c540 size=16 callers=0 calls=0
*/
void sub_e6c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c540ULL || rel >= 0xe6c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c550 size=16 callers=0 calls=0
*/
void sub_e6c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c550ULL || rel >= 0xe6c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c560 size=112 callers=0 calls=1
   calls: sub_79c240
*/
void sub_e6c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c560ULL || rel >= 0xe6c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c5d0 size=112 callers=0 calls=1
   calls: sub_79c240
*/
void sub_e6c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c5d0ULL || rel >= 0xe6c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c640 size=16 callers=0 calls=0
*/
void sub_e6c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c640ULL || rel >= 0xe6c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c650 size=16 callers=0 calls=0
*/
void sub_e6c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c650ULL || rel >= 0xe6c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c660 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e6c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c660ULL || rel >= 0xe6c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c710 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e6c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c710ULL || rel >= 0xe6c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c7c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e6c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c7c0ULL || rel >= 0xe6c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6c870 size=640 callers=0 calls=1
   calls: sub_e69320
*/
void sub_e6c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c870ULL || rel >= 0xe6caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6caf0 size=16 callers=0 calls=0
*/
void sub_e6caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6caf0ULL || rel >= 0xe6cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb00 size=16 callers=0 calls=0
*/
void sub_e6cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb00ULL || rel >= 0xe6cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb10 size=16 callers=0 calls=0
*/
void sub_e6cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb10ULL || rel >= 0xe6cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb20 size=16 callers=0 calls=0
*/
void sub_e6cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb20ULL || rel >= 0xe6cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb30 size=16 callers=0 calls=0
*/
void sub_e6cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb30ULL || rel >= 0xe6cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb40 size=16 callers=0 calls=0
*/
void sub_e6cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb40ULL || rel >= 0xe6cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb50 size=16 callers=0 calls=0
*/
void sub_e6cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb50ULL || rel >= 0xe6cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb60 size=16 callers=0 calls=0
*/
void sub_e6cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb60ULL || rel >= 0xe6cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb70 size=16 callers=0 calls=0
*/
void sub_e6cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb70ULL || rel >= 0xe6cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb80 size=16 callers=0 calls=0
*/
void sub_e6cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb80ULL || rel >= 0xe6cb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cb90 size=96 callers=0 calls=0
*/
void sub_e6cb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cb90ULL || rel >= 0xe6cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cbf0 size=96 callers=0 calls=0
*/
void sub_e6cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cbf0ULL || rel >= 0xe6cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cc50 size=96 callers=0 calls=0
*/
void sub_e6cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cc50ULL || rel >= 0xe6ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ccb0 size=96 callers=0 calls=0
*/
void sub_e6ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ccb0ULL || rel >= 0xe6cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cd10 size=96 callers=0 calls=0
*/
void sub_e6cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cd10ULL || rel >= 0xe6cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cd70 size=96 callers=0 calls=0
*/
void sub_e6cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cd70ULL || rel >= 0xe6cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cdd0 size=96 callers=0 calls=0
*/
void sub_e6cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cdd0ULL || rel >= 0xe6ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ce30 size=96 callers=0 calls=0
*/
void sub_e6ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ce30ULL || rel >= 0xe6ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ce90 size=240 callers=6 calls=1
   calls: sub_c39c40
*/
void sub_e6ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ce90ULL || rel >= 0xe6cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6cf80 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_e6cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6cf80ULL || rel >= 0xe6d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d0c0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_e6d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d0c0ULL || rel >= 0xe6d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d200 size=128 callers=0 calls=0
*/
void sub_e6d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d200ULL || rel >= 0xe6d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d280 size=80 callers=1 calls=0
*/
void sub_e6d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d280ULL || rel >= 0xe6d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d2d0 size=256 callers=1 calls=1
   calls: sub_e6d510
   ref: View_Wallet
*/
void View_Wallet(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d2d0ULL || rel >= 0xe6d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d3d0 size=16 callers=1 calls=0
*/
void sub_e6d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d3d0ULL || rel >= 0xe6d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d3e0 size=32 callers=1 calls=0
*/
void sub_e6d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d3e0ULL || rel >= 0xe6d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d400 size=64 callers=1 calls=1
   calls: sub_e80580
*/
void sub_e6d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d400ULL || rel >= 0xe6d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d440 size=64 callers=1 calls=2
   calls: sub_ec5ec0, sub_ec6070
*/
void sub_e6d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d440ULL || rel >= 0xe6d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d480 size=16 callers=1 calls=0
*/
void sub_e6d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d480ULL || rel >= 0xe6d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d490 size=16 callers=1 calls=0
*/
void sub_e6d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d490ULL || rel >= 0xe6d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d4a0 size=112 callers=1 calls=0
*/
void sub_e6d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d4a0ULL || rel >= 0xe6d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d510 size=288 callers=1 calls=2
   calls: sub_e6d630, sub_e809c0
*/
void sub_e6d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d510ULL || rel >= 0xe6d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d630 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_e6d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d630ULL || rel >= 0xe6d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d870 size=112 callers=1 calls=0
*/
void sub_e6d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d870ULL || rel >= 0xe6d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d8e0 size=96 callers=1 calls=1
   calls: View_EyeSight
*/
void sub_e6d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d8e0ULL || rel >= 0xe6d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6d940 size=192 callers=1 calls=1
   calls: sub_e6db90
   ref: View_EyeSight
*/
void View_EyeSight(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d940ULL || rel >= 0xe6da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6da00 size=16 callers=1 calls=0
*/
void sub_e6da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6da00ULL || rel >= 0xe6da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6da10 size=16 callers=1 calls=0
*/
void sub_e6da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6da10ULL || rel >= 0xe6da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6da20 size=64 callers=1 calls=1
   calls: sub_e80580
*/
void sub_e6da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6da20ULL || rel >= 0xe6da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6da60 size=80 callers=1 calls=1
   calls: Play_Prop_Gimmick_trainer_eye_slide_in
*/
void sub_e6da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6da60ULL || rel >= 0xe6dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6dab0 size=80 callers=1 calls=1
   calls: Play_Prop_Gimmick_trainer_eye_slide_out
*/
void sub_e6dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6dab0ULL || rel >= 0xe6db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6db00 size=96 callers=1 calls=1
   calls: sub_e6e1b0
*/
void sub_e6db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6db00ULL || rel >= 0xe6db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6db60 size=48 callers=1 calls=0
*/
void sub_e6db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6db60ULL || rel >= 0xe6db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6db90 size=288 callers=1 calls=2
   calls: sub_e6dcb0, sub_e809c0
*/
void sub_e6db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6db90ULL || rel >= 0xe6dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6dcb0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_e6dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6dcb0ULL || rel >= 0xe6dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6dee0 size=112 callers=0 calls=3
   calls: sub_e83430, sub_e83930, sub_e83a20
*/
void sub_e6dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6dee0ULL || rel >= 0xe6df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6df50 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trmsg/bin/trmsg_00_lyt.bin
*/
void trmsg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6df50ULL || rel >= 0xe6e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e060 size=176 callers=1 calls=1
   calls: sub_1502120
   ref: Play_Prop_Gimmick_trainer_eye_slide_in
*/
void Play_Prop_Gimmick_trainer_eye_slide_in(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e060ULL || rel >= 0xe6e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e110 size=160 callers=1 calls=1
   calls: sub_1502120
   ref: Play_Prop_Gimmick_trainer_eye_slide_out
*/
void Play_Prop_Gimmick_trainer_eye_slide_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e110ULL || rel >= 0xe6e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e1b0 size=384 callers=1 calls=4
   calls: sub_14aad40, sub_962230, sub_e83540, sub_e83930
*/
void sub_e6e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e1b0ULL || rel >= 0xe6e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e330 size=160 callers=0 calls=0
*/
void sub_e6e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e330ULL || rel >= 0xe6e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e3d0 size=16 callers=0 calls=0
*/
void sub_e6e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e3d0ULL || rel >= 0xe6e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e3e0 size=16 callers=0 calls=0
*/
void sub_e6e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e3e0ULL || rel >= 0xe6e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e3f0 size=16 callers=0 calls=0
*/
void sub_e6e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e3f0ULL || rel >= 0xe6e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e400 size=16 callers=0 calls=0
*/
void sub_e6e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e400ULL || rel >= 0xe6e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e410 size=16 callers=0 calls=0
*/
void sub_e6e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e410ULL || rel >= 0xe6e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e420 size=16 callers=0 calls=0
*/
void sub_e6e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e420ULL || rel >= 0xe6e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e430 size=16 callers=0 calls=0
*/
void sub_e6e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e430ULL || rel >= 0xe6e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e440 size=16 callers=0 calls=0
*/
void sub_e6e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e440ULL || rel >= 0xe6e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e450 size=16 callers=0 calls=0
*/
void sub_e6e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e450ULL || rel >= 0xe6e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e460 size=304 callers=0 calls=0
*/
void sub_e6e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e460ULL || rel >= 0xe6e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e590 size=208 callers=0 calls=2
   calls: sub_14aad40, sub_e83930
*/
void sub_e6e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e590ULL || rel >= 0xe6e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e660 size=16 callers=0 calls=0
*/
void sub_e6e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e660ULL || rel >= 0xe6e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e670 size=16 callers=0 calls=0
*/
void sub_e6e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e670ULL || rel >= 0xe6e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e680 size=16 callers=0 calls=0
*/
void sub_e6e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e680ULL || rel >= 0xe6e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e690 size=128 callers=1 calls=0
*/
void sub_e6e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e690ULL || rel >= 0xe6e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e710 size=272 callers=1 calls=1
   calls: sub_e6e940
   ref: ItemDescView
*/
void ItemDescView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e710ULL || rel >= 0xe6e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e820 size=16 callers=1 calls=0
*/
void sub_e6e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e820ULL || rel >= 0xe6e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e830 size=64 callers=1 calls=0
*/
void sub_e6e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e830ULL || rel >= 0xe6e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e870 size=64 callers=1 calls=1
   calls: sub_e80580
*/
void sub_e6e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e870ULL || rel >= 0xe6e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e8b0 size=16 callers=1 calls=0
*/
void sub_e6e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e8b0ULL || rel >= 0xe6e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e8c0 size=16 callers=1 calls=0
*/
void sub_e6e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e8c0ULL || rel >= 0xe6e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e8d0 size=16 callers=1 calls=0
*/
void sub_e6e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e8d0ULL || rel >= 0xe6e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e8e0 size=48 callers=1 calls=0
*/
void sub_e6e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e8e0ULL || rel >= 0xe6e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e910 size=48 callers=1 calls=0
*/
void sub_e6e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e910ULL || rel >= 0xe6e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6e940 size=288 callers=1 calls=2
   calls: sub_e6ea60, sub_e809c0
*/
void sub_e6e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e940ULL || rel >= 0xe6ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ea60 size=528 callers=1 calls=3
   calls: sub_790490, sub_e7fe20, sub_ec66f0
*/
void sub_e6ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ea60ULL || rel >= 0xe6ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ec70 size=32 callers=1 calls=0
*/
void sub_e6ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ec70ULL || rel >= 0xe6ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ec90 size=80 callers=1 calls=1
   calls: sub_e6ece0
*/
void sub_e6ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ec90ULL || rel >= 0xe6ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ece0 size=1184 callers=1 calls=5
   calls: sub_12a25b0, sub_12a26a0, sub_e6f430, sub_e6f610, sub_eb19e0
*/
void sub_e6ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ece0ULL || rel >= 0xe6f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f180 size=16 callers=1 calls=0
*/
void sub_e6f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f180ULL || rel >= 0xe6f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f190 size=176 callers=1 calls=2
   calls: sub_e66990, sub_e66a10
*/
void sub_e6f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f190ULL || rel >= 0xe6f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f240 size=32 callers=1 calls=0
*/
void sub_e6f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f240ULL || rel >= 0xe6f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f260 size=160 callers=1 calls=2
   calls: sub_e66dd0, sub_e66ec0
*/
void sub_e6f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f260ULL || rel >= 0xe6f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f300 size=32 callers=1 calls=0
*/
void sub_e6f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f300ULL || rel >= 0xe6f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f320 size=16 callers=0 calls=0
*/
void sub_e6f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f320ULL || rel >= 0xe6f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f330 size=16 callers=0 calls=0
*/
void sub_e6f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f330ULL || rel >= 0xe6f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f340 size=192 callers=0 calls=2
   calls: sub_12a25b0, sub_12a26a0
*/
void sub_e6f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f340ULL || rel >= 0xe6f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f400 size=16 callers=0 calls=0
*/
void sub_e6f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f400ULL || rel >= 0xe6f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f410 size=16 callers=0 calls=0
*/
void sub_e6f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f410ULL || rel >= 0xe6f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f420 size=16 callers=0 calls=0
*/
void sub_e6f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f420ULL || rel >= 0xe6f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f430 size=240 callers=2 calls=1
   calls: sub_12a25b0
*/
void sub_e6f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f430ULL || rel >= 0xe6f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f520 size=192 callers=0 calls=2
   calls: sub_12a25b0, sub_e6f430
*/
void sub_e6f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f520ULL || rel >= 0xe6f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f5e0 size=16 callers=0 calls=0
*/
void sub_e6f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f5e0ULL || rel >= 0xe6f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f5f0 size=16 callers=0 calls=0
*/
void sub_e6f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f5f0ULL || rel >= 0xe6f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f600 size=16 callers=0 calls=0
*/
void sub_e6f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f600ULL || rel >= 0xe6f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f610 size=240 callers=2 calls=1
   calls: sub_12a25b0
*/
void sub_e6f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f610ULL || rel >= 0xe6f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f700 size=192 callers=0 calls=2
   calls: sub_12a25b0, sub_e6f610
*/
void sub_e6f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f700ULL || rel >= 0xe6f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f7c0 size=16 callers=0 calls=0
*/
void sub_e6f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f7c0ULL || rel >= 0xe6f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f7d0 size=16 callers=0 calls=0
*/
void sub_e6f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f7d0ULL || rel >= 0xe6f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f7e0 size=16 callers=0 calls=0
*/
void sub_e6f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f7e0ULL || rel >= 0xe6f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6f7f0 size=1232 callers=1 calls=4
   calls: sub_e6ffe0, sub_e701e0, sub_e70bf0, sub_e7f7f0
*/
void sub_e6f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f7f0ULL || rel >= 0xe6fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6fcc0 size=64 callers=1 calls=1
   calls: sub_e70bf0
*/
void sub_e6fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6fcc0ULL || rel >= 0xe6fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6fd00 size=384 callers=1 calls=2
   calls: sub_e703a0, sub_e70bf0
*/
void sub_e6fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6fd00ULL || rel >= 0xe6fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6fe80 size=16 callers=1 calls=0
*/
void sub_e6fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6fe80ULL || rel >= 0xe6fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6fe90 size=16 callers=1 calls=0
*/
void sub_e6fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6fe90ULL || rel >= 0xe6fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6fea0 size=272 callers=1 calls=0
*/
void sub_e6fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6fea0ULL || rel >= 0xe6ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ffb0 size=48 callers=0 calls=1
   calls: sub_e6fea0
*/
void sub_e6ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ffb0ULL || rel >= 0xe6ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e6ffe0 size=336 callers=4 calls=2
   calls: sub_11061d0, sub_14ba3b0
*/
void sub_e6ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ffe0ULL || rel >= 0xe70130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70130 size=80 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_e70130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70130ULL || rel >= 0xe70180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70180 size=96 callers=0 calls=2
   calls: sub_14ba4c0, sub_f1d800
*/
void sub_e70180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70180ULL || rel >= 0xe701e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e701e0 size=448 callers=4 calls=5
   calls: sub_14aad40, sub_14ba7b0, sub_67b990, sub_8f3180, sub_e7f7f0
*/
void sub_e701e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe701e0ULL || rel >= 0xe703a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e703a0 size=336 callers=4 calls=6
   calls: pokeIconPosFieldY, sub_14aad40, sub_e704f0, sub_e83430, sub_e83930, sub_e83c60
*/
void sub_e703a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe703a0ULL || rel >= 0xe704f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e704f0 size=544 callers=1 calls=6
   calls: sub_1314a80, sub_14ac370, sub_67be60, sub_67d450, sub_e7eb10, sub_e7f7b0
*/
void sub_e704f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe704f0ULL || rel >= 0xe70710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70710 size=1248 callers=1 calls=12
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_11069b0, sub_1106f30, sub_14aad40, sub_14bc060, sub_e83430, sub_e83930, sub_f1d9b0
   ref: pokeIconPosFieldY
   ref: stamp_table
   ref: pokeIconPosFieldX
   ref: fieldImageName
   ref: pokeIconFlag
   ref: stampId
*/
void pokeIconPosFieldY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70710ULL || rel >= 0xe70bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70bf0 size=32 callers=14 calls=0
*/
void sub_e70bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70bf0ULL || rel >= 0xe70c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70c10 size=112 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_e70c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70c10ULL || rel >= 0xe70c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70c80 size=128 callers=0 calls=0
*/
void sub_e70c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70c80ULL || rel >= 0xe70d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70d00 size=304 callers=1 calls=0
*/
void sub_e70d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70d00ULL || rel >= 0xe70e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70e30 size=224 callers=1 calls=1
   calls: sub_e719d0
   ref: LiveCommViewField
*/
void LiveCommViewField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70e30ULL || rel >= 0xe70f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e70f10 size=1376 callers=1 calls=7
   calls: sub_105c390, sub_14bacd0, sub_e6fd00, sub_e6fe80, sub_e6fe90, sub_e71470, sub_e72560
*/
void sub_e70f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70f10ULL || rel >= 0xe71470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71470 size=960 callers=1 calls=7
   calls: sub_1377d50, sub_1377d60, sub_c3b970, sub_e71830, sub_e72370, sub_e724c0, sub_ffa660
*/
void sub_e71470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71470ULL || rel >= 0xe71830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71830 size=352 callers=40 calls=0
*/
void sub_e71830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71830ULL || rel >= 0xe71990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71990 size=16 callers=1 calls=0
*/
void sub_e71990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71990ULL || rel >= 0xe719a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e719a0 size=32 callers=3 calls=0
*/
void sub_e719a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe719a0ULL || rel >= 0xe719c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e719c0 size=16 callers=2 calls=0
*/
void sub_e719c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe719c0ULL || rel >= 0xe719d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e719d0 size=288 callers=1 calls=2
   calls: sub_e71af0, sub_e809c0
*/
void sub_e719d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe719d0ULL || rel >= 0xe71af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71af0 size=528 callers=1 calls=3
   calls: sub_790490, sub_e71d80, sub_e7fe20
*/
void sub_e71af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71af0ULL || rel >= 0xe71d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71d00 size=128 callers=0 calls=0
*/
void sub_e71d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71d00ULL || rel >= 0xe71d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71d80 size=80 callers=1 calls=1
   calls: anonymous_2
*/
void sub_e71d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71d80ULL || rel >= 0xe71dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71dd0 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_e71dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71dd0ULL || rel >= 0xe71e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71e20 size=128 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_e71e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71e20ULL || rel >= 0xe71ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e71ea0 size=928 callers=0 calls=7
   calls: sub_105c390, sub_14aad40, sub_14ac370, sub_67d450, sub_e6f7f0, sub_e7eb10, sub_e83930
*/
void sub_e71ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71ea0ULL || rel >= 0xe72240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72240 size=32 callers=0 calls=0
*/
void sub_e72240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72240ULL || rel >= 0xe72260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72260 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/live_comm/bin/live_comm_top_00_lyt.bin
*/
void live_comm_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72260ULL || rel >= 0xe72370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72370 size=336 callers=5 calls=3
   calls: sub_e83430, sub_e83540, sub_e83930
*/
void sub_e72370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72370ULL || rel >= 0xe724c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e724c0 size=160 callers=7 calls=1
   calls: sub_14ab2b0
*/
void sub_e724c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe724c0ULL || rel >= 0xe72560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72560 size=64 callers=2 calls=0
*/
void sub_e72560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72560ULL || rel >= 0xe725a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e725a0 size=96 callers=0 calls=2
   calls: sub_e837c0, sub_e83a40
   ref: anime_f_out
   ref: anime_f_in
*/
void anime_f_out_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe725a0ULL || rel >= 0xe72600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72600 size=128 callers=0 calls=0
*/
void sub_e72600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72600ULL || rel >= 0xe72680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72680 size=128 callers=0 calls=0
*/
void sub_e72680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72680ULL || rel >= 0xe72700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72700 size=16 callers=0 calls=0
*/
void sub_e72700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72700ULL || rel >= 0xe72710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72710 size=128 callers=0 calls=0
*/
void sub_e72710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72710ULL || rel >= 0xe72790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72790 size=128 callers=0 calls=0
*/
void sub_e72790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72790ULL || rel >= 0xe72810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72810 size=16 callers=0 calls=0
*/
void sub_e72810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72810ULL || rel >= 0xe72820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72820 size=16 callers=0 calls=0
*/
void sub_e72820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72820ULL || rel >= 0xe72830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72830 size=128 callers=0 calls=0
*/
void sub_e72830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72830ULL || rel >= 0xe728b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e728b0 size=128 callers=0 calls=0
*/
void sub_e728b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe728b0ULL || rel >= 0xe72930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72930 size=304 callers=0 calls=0
*/
void sub_e72930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72930ULL || rel >= 0xe72a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72a60 size=48 callers=0 calls=1
   calls: sub_e83430
*/
void sub_e72a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72a60ULL || rel >= 0xe72a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72a90 size=16 callers=0 calls=0
*/
void sub_e72a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72a90ULL || rel >= 0xe72aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72aa0 size=16 callers=0 calls=0
*/
void sub_e72aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72aa0ULL || rel >= 0xe72ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72ab0 size=16 callers=0 calls=0
*/
void sub_e72ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72ab0ULL || rel >= 0xe72ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72ac0 size=128 callers=0 calls=0
*/
void sub_e72ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72ac0ULL || rel >= 0xe72b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72b40 size=272 callers=0 calls=1
   calls: sub_c46830
*/
void sub_e72b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72b40ULL || rel >= 0xe72c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72c50 size=144 callers=0 calls=2
   calls: sub_5cfad0, sub_794330
   ref: Set_State_UI_Open
*/
void Set_State_UI_Open(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72c50ULL || rel >= 0xe72ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72ce0 size=144 callers=0 calls=2
   calls: sub_5cfad0, sub_794330
   ref: Set_State_UI_Close
*/
void Set_State_UI_Close(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72ce0ULL || rel >= 0xe72d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72d70 size=272 callers=0 calls=1
   calls: sub_c46830
*/
void sub_e72d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72d70ULL || rel >= 0xe72e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72e80 size=272 callers=0 calls=1
   calls: sub_c46830
*/
void sub_e72e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72e80ULL || rel >= 0xe72f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72f90 size=16 callers=0 calls=0
*/
void sub_e72f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72f90ULL || rel >= 0xe72fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e72fa0 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e72fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72fa0ULL || rel >= 0xe73010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73010 size=16 callers=0 calls=0
*/
void sub_e73010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73010ULL || rel >= 0xe73020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73020 size=16 callers=0 calls=0
*/
void sub_e73020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73020ULL || rel >= 0xe73030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73030 size=16 callers=0 calls=0
*/
void sub_e73030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73030ULL || rel >= 0xe73040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73040 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e73040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73040ULL || rel >= 0xe730b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e730b0 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e730b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe730b0ULL || rel >= 0xe73120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73120 size=16 callers=0 calls=0
*/
void sub_e73120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73120ULL || rel >= 0xe73130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73130 size=16 callers=0 calls=0
*/
void sub_e73130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73130ULL || rel >= 0xe73140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73140 size=16 callers=0 calls=0
*/
void sub_e73140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73140ULL || rel >= 0xe73150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73150 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e73150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73150ULL || rel >= 0xe731c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e731c0 size=16 callers=0 calls=0
*/
void sub_e731c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe731c0ULL || rel >= 0xe731d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e731d0 size=16 callers=0 calls=0
*/
void sub_e731d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe731d0ULL || rel >= 0xe731e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e731e0 size=16 callers=0 calls=0
*/
void sub_e731e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe731e0ULL || rel >= 0xe731f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e731f0 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e731f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe731f0ULL || rel >= 0xe73260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73260 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e73260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73260ULL || rel >= 0xe732d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e732d0 size=16 callers=0 calls=0
*/
void sub_e732d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe732d0ULL || rel >= 0xe732e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e732e0 size=16 callers=0 calls=0
*/
void sub_e732e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe732e0ULL || rel >= 0xe732f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e732f0 size=16 callers=0 calls=0
*/
void sub_e732f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe732f0ULL || rel >= 0xe73300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73300 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e73300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73300ULL || rel >= 0xe73370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73370 size=16 callers=0 calls=0
*/
void sub_e73370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73370ULL || rel >= 0xe73380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73380 size=16 callers=0 calls=0
*/
void sub_e73380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73380ULL || rel >= 0xe73390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73390 size=16 callers=0 calls=0
*/
void sub_e73390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73390ULL || rel >= 0xe733a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e733a0 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e733a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe733a0ULL || rel >= 0xe73410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73410 size=112 callers=0 calls=1
   calls: sub_e67540
*/
void sub_e73410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73410ULL || rel >= 0xe73480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73480 size=16 callers=0 calls=0
*/
void sub_e73480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73480ULL || rel >= 0xe73490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73490 size=16 callers=0 calls=0
*/
void sub_e73490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73490ULL || rel >= 0xe734a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e734a0 size=544 callers=0 calls=1
   calls: sub_be32b0
*/
void sub_e734a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe734a0ULL || rel >= 0xe736c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e736c0 size=432 callers=2 calls=0
*/
void sub_e736c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe736c0ULL || rel >= 0xe73870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73870 size=16 callers=2 calls=0
*/
void sub_e73870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73870ULL || rel >= 0xe73880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73880 size=320 callers=1 calls=2
   calls: sub_e739c0, sub_e74200
*/
void sub_e73880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73880ULL || rel >= 0xe739c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e739c0 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_e739c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe739c0ULL || rel >= 0xe73b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73b80 size=96 callers=0 calls=0
*/
void sub_e73b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73b80ULL || rel >= 0xe73be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73be0 size=96 callers=0 calls=0
*/
void sub_e73be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73be0ULL || rel >= 0xe73c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73c40 size=96 callers=0 calls=0
*/
void sub_e73c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73c40ULL || rel >= 0xe73ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73ca0 size=96 callers=0 calls=0
*/
void sub_e73ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73ca0ULL || rel >= 0xe73d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73d00 size=96 callers=0 calls=0
*/
void sub_e73d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73d00ULL || rel >= 0xe73d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73d60 size=96 callers=0 calls=0
*/
void sub_e73d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73d60ULL || rel >= 0xe73dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73dc0 size=16 callers=0 calls=0
*/
void sub_e73dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73dc0ULL || rel >= 0xe73dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73dd0 size=16 callers=0 calls=0
*/
void sub_e73dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73dd0ULL || rel >= 0xe73de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73de0 size=16 callers=0 calls=0
*/
void sub_e73de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73de0ULL || rel >= 0xe73df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e73df0 size=592 callers=0 calls=3
   calls: sub_c39c40, sub_e74040, sub_e748c0
*/
void sub_e73df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe73df0ULL || rel >= 0xe74040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74040 size=400 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_e74330
*/
void sub_e74040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74040ULL || rel >= 0xe741d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e741d0 size=16 callers=0 calls=0
*/
void sub_e741d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe741d0ULL || rel >= 0xe741e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e741e0 size=16 callers=0 calls=0
*/
void sub_e741e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe741e0ULL || rel >= 0xe741f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e741f0 size=16 callers=0 calls=0
*/
void sub_e741f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe741f0ULL || rel >= 0xe74200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74200 size=304 callers=1 calls=0
*/
void sub_e74200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74200ULL || rel >= 0xe74330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74330 size=80 callers=1 calls=2
   calls: sub_e74380, sub_e7b660
*/
void sub_e74330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74330ULL || rel >= 0xe74380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74380 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e75240, sub_e7b5e0
*/
void sub_e74380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74380ULL || rel >= 0xe74460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74460 size=400 callers=0 calls=8
   calls: sub_78f150, sub_78f240, sub_794e80, sub_e745f0, sub_e75460, sub_e755a0, sub_e7c0f0, sub_e7c160
   ref: ViewTop
*/
void ViewTop_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74460ULL || rel >= 0xe745f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e745f0 size=432 callers=1 calls=3
   calls: sub_e75330, sub_e7c160, sub_e7c210
*/
void sub_e745f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe745f0ULL || rel >= 0xe747a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e747a0 size=16 callers=0 calls=0
*/
void sub_e747a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe747a0ULL || rel >= 0xe747b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e747b0 size=16 callers=0 calls=0
*/
void sub_e747b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe747b0ULL || rel >= 0xe747c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e747c0 size=16 callers=0 calls=0
*/
void sub_e747c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe747c0ULL || rel >= 0xe747d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e747d0 size=16 callers=0 calls=0
*/
void sub_e747d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe747d0ULL || rel >= 0xe747e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e747e0 size=224 callers=0 calls=2
   calls: sub_e75460, sub_e7c160
*/
void sub_e747e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe747e0ULL || rel >= 0xe748c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e748c0 size=16 callers=2 calls=0
*/
void sub_e748c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe748c0ULL || rel >= 0xe748d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e748d0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_e748d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe748d0ULL || rel >= 0xe74a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74a70 size=16 callers=0 calls=0
*/
void sub_e74a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74a70ULL || rel >= 0xe74a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74a80 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e74a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74a80ULL || rel >= 0xe74b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74b30 size=16 callers=0 calls=0
*/
void sub_e74b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74b30ULL || rel >= 0xe74b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74b40 size=16 callers=0 calls=0
*/
void sub_e74b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74b40ULL || rel >= 0xe74b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74b50 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e74b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74b50ULL || rel >= 0xe74c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74c00 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e74c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74c00ULL || rel >= 0xe74cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74cb0 size=16 callers=0 calls=0
*/
void sub_e74cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74cb0ULL || rel >= 0xe74cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74cc0 size=16 callers=0 calls=0
*/
void sub_e74cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74cc0ULL || rel >= 0xe74cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74cd0 size=16 callers=0 calls=0
*/
void sub_e74cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74cd0ULL || rel >= 0xe74ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74ce0 size=16 callers=0 calls=0
*/
void sub_e74ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74ce0ULL || rel >= 0xe74cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74cf0 size=16 callers=0 calls=0
*/
void sub_e74cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74cf0ULL || rel >= 0xe74d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74d00 size=16 callers=0 calls=0
*/
void sub_e74d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74d00ULL || rel >= 0xe74d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74d10 size=16 callers=0 calls=0
*/
void sub_e74d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74d10ULL || rel >= 0xe74d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74d20 size=16 callers=0 calls=0
*/
void sub_e74d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74d20ULL || rel >= 0xe74d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74d30 size=16 callers=0 calls=0
*/
void sub_e74d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74d30ULL || rel >= 0xe74d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74d40 size=16 callers=0 calls=0
*/
void sub_e74d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74d40ULL || rel >= 0xe74d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74d50 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_e74d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74d50ULL || rel >= 0xe74dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74dd0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_e74dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74dd0ULL || rel >= 0xe74f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74f40 size=96 callers=0 calls=1
   calls: sub_e75160
*/
void sub_e74f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74f40ULL || rel >= 0xe74fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74fa0 size=16 callers=0 calls=0
*/
void sub_e74fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74fa0ULL || rel >= 0xe74fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e74fb0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_e74fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe74fb0ULL || rel >= 0xe75050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75050 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_e75050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75050ULL || rel >= 0xe75110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75110 size=16 callers=0 calls=0
*/
void sub_e75110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75110ULL || rel >= 0xe75120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75120 size=16 callers=0 calls=0
*/
void sub_e75120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75120ULL || rel >= 0xe75130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75130 size=16 callers=0 calls=0
*/
void sub_e75130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75130ULL || rel >= 0xe75140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75140 size=32 callers=0 calls=0
*/
void sub_e75140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75140ULL || rel >= 0xe75160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75160 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_e75160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75160ULL || rel >= 0xe75240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75240 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_e75240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75240ULL || rel >= 0xe75330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75330 size=304 callers=2 calls=0
*/
void sub_e75330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75330ULL || rel >= 0xe75460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75460 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_e75460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75460ULL || rel >= 0xe755a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e755a0 size=288 callers=1 calls=2
   calls: sub_e756c0, sub_e809c0
*/
void sub_e755a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe755a0ULL || rel >= 0xe756c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e756c0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_e756c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe756c0ULL || rel >= 0xe758f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e758f0 size=544 callers=0 calls=6
   calls: sub_c39c40, sub_d0c0, sub_e75330, sub_e75e30, sub_e76460, sub_e806b0
   ref: msg_all_dead_01
   ref: ViewTop
   ref: StateFirst
   ref: msg_all_dead_02
*/
void msg_all_dead_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe758f0ULL || rel >= 0xe75b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75b10 size=352 callers=0 calls=7
   calls: sub_14ab2b0, sub_c43ed0, sub_c44310, sub_c44410, sub_e76290, sub_ea3d10, sub_ea4760
*/
void sub_e75b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75b10ULL || rel >= 0xe75c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75c70 size=16 callers=0 calls=0
*/
void sub_e75c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75c70ULL || rel >= 0xe75c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75c80 size=16 callers=0 calls=0
*/
void sub_e75c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75c80ULL || rel >= 0xe75c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75c90 size=16 callers=0 calls=0
*/
void sub_e75c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75c90ULL || rel >= 0xe75ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75ca0 size=16 callers=0 calls=0
*/
void sub_e75ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75ca0ULL || rel >= 0xe75cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75cb0 size=16 callers=0 calls=0
*/
void sub_e75cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75cb0ULL || rel >= 0xe75cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75cc0 size=16 callers=0 calls=0
*/
void sub_e75cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75cc0ULL || rel >= 0xe75cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75cd0 size=16 callers=0 calls=0
*/
void sub_e75cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75cd0ULL || rel >= 0xe75ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75ce0 size=16 callers=0 calls=0
*/
void sub_e75ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75ce0ULL || rel >= 0xe75cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75cf0 size=16 callers=0 calls=0
*/
void sub_e75cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75cf0ULL || rel >= 0xe75d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75d00 size=304 callers=0 calls=0
*/
void sub_e75d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75d00ULL || rel >= 0xe75e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75e30 size=272 callers=1 calls=2
   calls: sub_5cfaf0, sub_e75f40
*/
void sub_e75e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75e30ULL || rel >= 0xe75f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e75f40 size=304 callers=1 calls=0
*/
void sub_e75f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75f40ULL || rel >= 0xe76070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76070 size=240 callers=0 calls=4
   calls: sub_5cfad0, sub_e7e890, sub_e7ea20, sub_e7eb40
*/
void sub_e76070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76070ULL || rel >= 0xe76160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76160 size=304 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/gameover/bin/gameover_black_00_lyt.bin
*/
void gameover_black_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76160ULL || rel >= 0xe76290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76290 size=464 callers=1 calls=5
   calls: sub_13149a0, sub_14ac370, sub_67d450, sub_e7eb10, sub_eb6230
*/
void sub_e76290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76290ULL || rel >= 0xe76460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76460 size=16 callers=1 calls=0
*/
void sub_e76460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76460ULL || rel >= 0xe76470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76470 size=16 callers=0 calls=0
*/
void sub_e76470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76470ULL || rel >= 0xe76480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76480 size=16 callers=0 calls=0
*/
void sub_e76480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76480ULL || rel >= 0xe76490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76490 size=16 callers=0 calls=0
*/
void sub_e76490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76490ULL || rel >= 0xe764a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e764a0 size=16 callers=0 calls=0
*/
void sub_e764a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe764a0ULL || rel >= 0xe764b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e764b0 size=16 callers=0 calls=0
*/
void sub_e764b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe764b0ULL || rel >= 0xe764c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e764c0 size=16 callers=0 calls=0
*/
void sub_e764c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe764c0ULL || rel >= 0xe764d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e764d0 size=16 callers=0 calls=0
*/
void sub_e764d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe764d0ULL || rel >= 0xe764e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e764e0 size=16 callers=0 calls=0
*/
void sub_e764e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe764e0ULL || rel >= 0xe764f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e764f0 size=176 callers=1 calls=3
   calls: Background_Update, sub_5d0e50, sub_6ced00
*/
void sub_e764f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe764f0ULL || rel >= 0xe765a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e765a0 size=288 callers=19 calls=2
   calls: sub_5d0b10, sub_5d0f90
   ref: Background Update.
*/
void Background_Update(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe765a0ULL || rel >= 0xe766c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e766c0 size=160 callers=1 calls=3
   calls: Background_Update, sub_5d0e50, sub_6ced90
*/
void sub_e766c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe766c0ULL || rel >= 0xe76760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76760 size=160 callers=0 calls=3
   calls: Background_Update, sub_5d0e50, sub_6ceda0
*/
void sub_e76760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76760ULL || rel >= 0xe76800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76800 size=160 callers=0 calls=3
   calls: Background_Update, sub_5d0e50, sub_6cedb0
*/
void sub_e76800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76800ULL || rel >= 0xe768a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e768a0 size=224 callers=14 calls=2
   calls: sub_1307dd0, sub_c4ac70
   ref: common/strinput.dat
*/
void strinput(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe768a0ULL || rel >= 0xe76980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76980 size=48 callers=15 calls=0
*/
void sub_e76980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76980ULL || rel >= 0xe769b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e769b0 size=112 callers=16 calls=0
*/
void sub_e769b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe769b0ULL || rel >= 0xe76a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76a20 size=16 callers=39 calls=0
*/
void sub_e76a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76a20ULL || rel >= 0xe76a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76a30 size=736 callers=2 calls=8
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_7c2280, sub_e7b260, sub_e7b290
*/
void sub_e76a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76a30ULL || rel >= 0xe76d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e76d10 size=1952 callers=0 calls=18
   calls: monsname, sub_130e1d0, sub_130eab0, sub_1310f00, sub_1311c60, sub_1312f50, sub_13133a0, sub_67b7e0, sub_67b990, sub_67bdb0, sub_67bdc0, sub_67bde0
   ... +6 more
*/
void sub_e76d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe76d10ULL || rel >= 0xe774b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e774b0 size=1200 callers=2 calls=11
   calls: Background_Update, sub_1310f00, sub_1311c60, sub_1313c10, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_7c2280, sub_e7b260, sub_e7b290
*/
void sub_e774b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe774b0ULL || rel >= 0xe77960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e77960 size=928 callers=1 calls=8
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_7c2280, sub_e7b260, sub_e7b290
*/
void sub_e77960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe77960ULL || rel >= 0xe77d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e77d00 size=928 callers=1 calls=8
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_7c2280, sub_e7b260, sub_e7b290
*/
void sub_e77d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe77d00ULL || rel >= 0xe780a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e780a0 size=688 callers=1 calls=7
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e780a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe780a0ULL || rel >= 0xe78350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e78350 size=464 callers=0 calls=4
   calls: sub_67b990, sub_67bde0, sub_67bfc0, sub_67d450
*/
void sub_e78350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe78350ULL || rel >= 0xe78520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e78520 size=656 callers=1 calls=7
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e78520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe78520ULL || rel >= 0xe787b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e787b0 size=976 callers=1 calls=8
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67bdc0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e787b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe787b0ULL || rel >= 0xe78b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e78b80 size=544 callers=0 calls=6
   calls: sub_67b990, sub_67bde0, sub_67c7e0, sub_67d450, sub_c70, sub_ce0
*/
void sub_e78b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe78b80ULL || rel >= 0xe78da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e78da0 size=976 callers=1 calls=8
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67bdc0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e78da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe78da0ULL || rel >= 0xe79170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e79170 size=1008 callers=0 calls=6
   calls: sub_67b990, sub_67bde0, sub_67c7e0, sub_67d450, sub_c70, sub_ce0
*/
void sub_e79170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe79170ULL || rel >= 0xe79560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e79560 size=688 callers=2 calls=7
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e79560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe79560ULL || rel >= 0xe79810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e79810 size=688 callers=1 calls=7
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e79810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe79810ULL || rel >= 0xe79ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e79ac0 size=528 callers=3 calls=7
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e79ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe79ac0ULL || rel >= 0xe79cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e79cd0 size=864 callers=1 calls=8
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67bdc0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e79cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe79cd0ULL || rel >= 0xe7a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7a030 size=688 callers=1 calls=7
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e7a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7a030ULL || rel >= 0xe7a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7a2e0 size=1024 callers=4 calls=8
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67d450, sub_7c2280, sub_e7b260, sub_e7b290
*/
void sub_e7a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7a2e0ULL || rel >= 0xe7a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7a6e0 size=864 callers=2 calls=8
   calls: Background_Update, sub_5d0e50, sub_67b990, sub_67bdb0, sub_67bdc0, sub_67d450, sub_e7b260, sub_e7b290
*/
void sub_e7a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7a6e0ULL || rel >= 0xe7aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7aa40 size=64 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_e7aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7aa40ULL || rel >= 0xe7aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7aa80 size=64 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_e7aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7aa80ULL || rel >= 0xe7aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7aac0 size=96 callers=0 calls=1
   calls: sub_e7ad50
*/
void sub_e7aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7aac0ULL || rel >= 0xe7ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ab20 size=144 callers=0 calls=1
   calls: sub_6a0ab0
*/
void sub_e7ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ab20ULL || rel >= 0xe7abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7abb0 size=80 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_e7abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7abb0ULL || rel >= 0xe7ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ac00 size=80 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_e7ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ac00ULL || rel >= 0xe7ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ac50 size=96 callers=0 calls=1
   calls: sub_e7ad50
*/
void sub_e7ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ac50ULL || rel >= 0xe7acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7acb0 size=80 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_e7acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7acb0ULL || rel >= 0xe7ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ad00 size=80 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_e7ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ad00ULL || rel >= 0xe7ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ad50 size=240 callers=4 calls=0
*/
void sub_e7ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ad50ULL || rel >= 0xe7ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ae40 size=96 callers=0 calls=0
*/
void sub_e7ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ae40ULL || rel >= 0xe7aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7aea0 size=96 callers=0 calls=0
*/
void sub_e7aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7aea0ULL || rel >= 0xe7af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7af00 size=112 callers=0 calls=1
   calls: sub_e7ad50
*/
void sub_e7af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7af00ULL || rel >= 0xe7af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7af70 size=64 callers=0 calls=0
*/
void sub_e7af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7af70ULL || rel >= 0xe7afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7afb0 size=112 callers=0 calls=0
*/
void sub_e7afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7afb0ULL || rel >= 0xe7b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b020 size=112 callers=0 calls=0
*/
void sub_e7b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b020ULL || rel >= 0xe7b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b090 size=112 callers=0 calls=1
   calls: sub_e7ad50
*/
void sub_e7b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b090ULL || rel >= 0xe7b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b100 size=112 callers=0 calls=0
*/
void sub_e7b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b100ULL || rel >= 0xe7b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b170 size=112 callers=0 calls=0
*/
void sub_e7b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b170ULL || rel >= 0xe7b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b1e0 size=128 callers=0 calls=0
*/
void sub_e7b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b1e0ULL || rel >= 0xe7b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b260 size=48 callers=15 calls=0
*/
void sub_e7b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b260ULL || rel >= 0xe7b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b290 size=816 callers=15 calls=3
   calls: sub_67b7e0, sub_67bd70, sub_67be60
*/
void sub_e7b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b290ULL || rel >= 0xe7b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b5c0 size=32 callers=0 calls=0
*/
void sub_e7b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b5c0ULL || rel >= 0xe7b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b5e0 size=48 callers=59 calls=0
*/
void sub_e7b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b5e0ULL || rel >= 0xe7b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b610 size=80 callers=1 calls=0
*/
void sub_e7b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b610ULL || rel >= 0xe7b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b660 size=464 callers=59 calls=4
   calls: sub_65d700, sub_ea03d0, sub_ea46c0, sub_ee7890
*/
void sub_e7b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b660ULL || rel >= 0xe7b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b830 size=304 callers=0 calls=4
   calls: sub_e7e550, sub_e7ea20, sub_e7f200, sub_e7f250
*/
void sub_e7b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b830ULL || rel >= 0xe7b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7b960 size=1280 callers=0 calls=7
   calls: sub_104dbb0, sub_e7be60, sub_e7e320, sub_e7e380, sub_e7e3e0, sub_e7f2e0, sub_e7f400
*/
void sub_e7b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b960ULL || rel >= 0xe7be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7be60 size=240 callers=2 calls=1
   calls: sub_e7d6e0
*/
void sub_e7be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7be60ULL || rel >= 0xe7bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7bf50 size=64 callers=0 calls=0
*/
void sub_e7bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7bf50ULL || rel >= 0xe7bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7bf90 size=352 callers=0 calls=3
   calls: sub_e7b610, sub_e7d190, sub_e7f290
*/
void sub_e7bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7bf90ULL || rel >= 0xe7c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c0f0 size=112 callers=56 calls=1
   calls: sub_e7b5e0
*/
void sub_e7c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c0f0ULL || rel >= 0xe7c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c160 size=64 callers=579 calls=0
*/
void sub_e7c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c160ULL || rel >= 0xe7c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c1a0 size=32 callers=1 calls=0
*/
void sub_e7c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c1a0ULL || rel >= 0xe7c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c1c0 size=16 callers=7 calls=0
*/
void sub_e7c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c1c0ULL || rel >= 0xe7c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c1d0 size=32 callers=5 calls=0
*/
void sub_e7c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c1d0ULL || rel >= 0xe7c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c1f0 size=32 callers=11 calls=0
*/
void sub_e7c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c1f0ULL || rel >= 0xe7c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c210 size=64 callers=55 calls=1
   calls: sub_5e2350
*/
void sub_e7c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c210ULL || rel >= 0xe7c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c250 size=80 callers=0 calls=0
*/
void sub_e7c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c250ULL || rel >= 0xe7c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c2a0 size=80 callers=0 calls=0
*/
void sub_e7c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c2a0ULL || rel >= 0xe7c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c2f0 size=80 callers=0 calls=0
*/
void sub_e7c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c2f0ULL || rel >= 0xe7c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c340 size=80 callers=0 calls=0
*/
void sub_e7c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c340ULL || rel >= 0xe7c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c390 size=80 callers=0 calls=0
*/
void sub_e7c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c390ULL || rel >= 0xe7c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c3e0 size=80 callers=0 calls=0
*/
void sub_e7c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c3e0ULL || rel >= 0xe7c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c430 size=144 callers=375 calls=1
   calls: sub_5e2350
   ref: anonymous
*/
void anonymous(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c430ULL || rel >= 0xe7c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c4c0 size=192 callers=0 calls=0
*/
void sub_e7c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c4c0ULL || rel >= 0xe7c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c580 size=192 callers=0 calls=0
*/
void sub_e7c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c580ULL || rel >= 0xe7c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c640 size=192 callers=0 calls=0
*/
void sub_e7c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c640ULL || rel >= 0xe7c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c700 size=192 callers=0 calls=0
*/
void sub_e7c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c700ULL || rel >= 0xe7c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c7c0 size=192 callers=0 calls=0
*/
void sub_e7c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c7c0ULL || rel >= 0xe7c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c880 size=192 callers=0 calls=0
*/
void sub_e7c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c880ULL || rel >= 0xe7c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7c940 size=240 callers=0 calls=0
*/
void sub_e7c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c940ULL || rel >= 0xe7ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ca30 size=16 callers=0 calls=0
*/
void sub_e7ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ca30ULL || rel >= 0xe7ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ca40 size=16 callers=0 calls=0
*/
void sub_e7ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ca40ULL || rel >= 0xe7ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ca50 size=240 callers=0 calls=3
   calls: sub_e7cf00, sub_e7d190, sub_e7d4a0
*/
void sub_e7ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ca50ULL || rel >= 0xe7cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cb40 size=16 callers=0 calls=0
*/
void sub_e7cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cb40ULL || rel >= 0xe7cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cb50 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e7cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cb50ULL || rel >= 0xe7cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cbc0 size=16 callers=0 calls=0
*/
void sub_e7cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cbc0ULL || rel >= 0xe7cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cbd0 size=16 callers=0 calls=0
*/
void sub_e7cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cbd0ULL || rel >= 0xe7cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cbe0 size=16 callers=0 calls=0
*/
void sub_e7cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cbe0ULL || rel >= 0xe7cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cbf0 size=16 callers=0 calls=0
*/
void sub_e7cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cbf0ULL || rel >= 0xe7cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc00 size=16 callers=0 calls=0
*/
void sub_e7cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc00ULL || rel >= 0xe7cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc10 size=16 callers=0 calls=0
*/
void sub_e7cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc10ULL || rel >= 0xe7cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc20 size=16 callers=0 calls=0
*/
void sub_e7cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc20ULL || rel >= 0xe7cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc30 size=16 callers=0 calls=0
*/
void sub_e7cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc30ULL || rel >= 0xe7cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc40 size=16 callers=0 calls=0
*/
void sub_e7cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc40ULL || rel >= 0xe7cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc50 size=16 callers=0 calls=0
*/
void sub_e7cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc50ULL || rel >= 0xe7cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc60 size=16 callers=0 calls=0
*/
void sub_e7cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc60ULL || rel >= 0xe7cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

