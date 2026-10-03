/* main functions 013f7d50..014123c0 (169 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 013f7d50 size=16 callers=0 calls=0
*/
void sub_13f7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7d50ULL || rel >= 0x13f7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7d60 size=16 callers=0 calls=0
*/
void sub_13f7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7d60ULL || rel >= 0x13f7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7d70 size=16 callers=0 calls=0
*/
void sub_13f7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7d70ULL || rel >= 0x13f7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7d80 size=16 callers=0 calls=0
*/
void sub_13f7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7d80ULL || rel >= 0x13f7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7d90 size=384 callers=1 calls=2
   calls: sub_13e3740, sub_13f7f10
*/
void sub_13f7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7d90ULL || rel >= 0x13f7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7f10 size=400 callers=4 calls=1
   calls: sub_793d10
*/
void sub_13f7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7f10ULL || rel >= 0x13f80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f80a0 size=160 callers=1 calls=1
   calls: sub_13f7f10
*/
void sub_13f80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f80a0ULL || rel >= 0x13f8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f8140 size=624 callers=1 calls=8
   calls: sub_13a31e0, sub_13e3740, sub_13f7f10, sub_13fb8e0, sub_5cfaf0, sub_66b730, sub_66b790, sub_66c4e0
   ref: GetSceneChangeData
*/
void GetSceneChangeData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f8140ULL || rel >= 0x13f83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f83b0 size=832 callers=0 calls=4
   calls: sub_13f7f10, sub_13f8700, sub_66b8c0, sub_e3e110
*/
void sub_13f83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f83b0ULL || rel >= 0x13f86f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f86f0 size=16 callers=1 calls=0
*/
void sub_13f86f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f86f0ULL || rel >= 0x13f8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f8700 size=1008 callers=1 calls=1
   calls: sub_13fb250
*/
void sub_13f8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f8700ULL || rel >= 0x13f8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f8af0 size=32 callers=0 calls=0
*/
void sub_13f8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f8af0ULL || rel >= 0x13f8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f8b10 size=496 callers=0 calls=12
   calls: g_mode_3, sub_13bcfa0, sub_13c7460, sub_13f8d00, sub_c64770, sub_d1ef70, sub_d25bd0, sub_d29c40, sub_d29d40, sub_d29e50, sub_d29f50, sub_d2af10
*/
void sub_13f8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f8b10ULL || rel >= 0x13f8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f8d00 size=288 callers=5 calls=2
   calls: sub_e3e380, sub_e40260
*/
void sub_13f8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f8d00ULL || rel >= 0x13f8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f8e20 size=256 callers=0 calls=0
*/
void sub_13f8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f8e20ULL || rel >= 0x13f8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f8f20 size=256 callers=0 calls=0
*/
void sub_13f8f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f8f20ULL || rel >= 0x13f9020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f9020 size=256 callers=0 calls=0
*/
void sub_13f9020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9020ULL || rel >= 0x13f9120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f9120 size=32 callers=14 calls=0
*/
void sub_13f9120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9120ULL || rel >= 0x13f9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f9140 size=16 callers=2 calls=0
*/
void sub_13f9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9140ULL || rel >= 0x13f9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f9150 size=528 callers=1 calls=6
   calls: msg_wide_road_username, sub_14a91a0, sub_14a9460, sub_14a9580, sub_e3efd0, sub_e3fe50
*/
void sub_13f9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9150ULL || rel >= 0x13f9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f9360 size=2544 callers=2 calls=25
   calls: sub_1308200, sub_13083a0, sub_1310f00, sub_1311c60, sub_1314a80, sub_13a6b50, sub_13e4fc0, sub_13ef6a0, sub_13fb3f0, sub_13fd8c0, sub_14a91a0, sub_14a92b0
   ... +13 more
   ref: msg_wide_road_username
*/
void msg_wide_road_username(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9360ULL || rel >= 0x13f9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f9d50 size=336 callers=2 calls=1
   calls: sub_e3fe50
*/
void sub_13f9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9d50ULL || rel >= 0x13f9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f9ea0 size=208 callers=4 calls=1
   calls: sub_13e4fc0
*/
void sub_13f9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9ea0ULL || rel >= 0x13f9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f9f70 size=304 callers=1 calls=2
   calls: sub_e41bb0, sub_e42010
*/
void sub_13f9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f9f70ULL || rel >= 0x13fa0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa0a0 size=32 callers=1 calls=0
*/
void sub_13fa0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa0a0ULL || rel >= 0x13fa0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa0c0 size=96 callers=1 calls=1
   calls: sub_13fa120
*/
void sub_13fa0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa0c0ULL || rel >= 0x13fa120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa120 size=672 callers=1 calls=1
   calls: sub_13fae80
*/
void sub_13fa120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa120ULL || rel >= 0x13fa3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa3c0 size=272 callers=1 calls=1
   calls: sub_c61580
*/
void sub_13fa3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa3c0ULL || rel >= 0x13fa4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa4d0 size=240 callers=7 calls=0
*/
void sub_13fa4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa4d0ULL || rel >= 0x13fa5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa5c0 size=176 callers=1 calls=0
*/
void sub_13fa5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa5c0ULL || rel >= 0x13fa670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa670 size=192 callers=0 calls=4
   calls: sub_13a31e0, sub_5cfaf0, sub_c64770, sub_c647b0
*/
void sub_13fa670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa670ULL || rel >= 0x13fa730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa730 size=16 callers=0 calls=0
*/
void sub_13fa730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa730ULL || rel >= 0x13fa740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa740 size=16 callers=1 calls=0
*/
void sub_13fa740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa740ULL || rel >= 0x13fa750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fa750 size=832 callers=1 calls=6
   calls: sub_13a2880, sub_13f75a0, sub_13f7d90, sub_13fc2d0, sub_13fd9c0, sub_1400330
*/
void sub_13fa750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fa750ULL || rel >= 0x13faa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013faa90 size=32 callers=1 calls=0
*/
void sub_13faa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13faa90ULL || rel >= 0x13faab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013faab0 size=32 callers=0 calls=0
*/
void sub_13faab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13faab0ULL || rel >= 0x13faad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013faad0 size=16 callers=4 calls=0
*/
void sub_13faad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13faad0ULL || rel >= 0x13faae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013faae0 size=64 callers=1 calls=0
*/
void sub_13faae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13faae0ULL || rel >= 0x13fab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fab20 size=32 callers=2 calls=0
*/
void sub_13fab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fab20ULL || rel >= 0x13fab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fab40 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13fab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fab40ULL || rel >= 0x13fabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fabb0 size=48 callers=0 calls=0
*/
void sub_13fabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fabb0ULL || rel >= 0x13fabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fabe0 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13fabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fabe0ULL || rel >= 0x13fac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fac50 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13fac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fac50ULL || rel >= 0x13facc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013facc0 size=448 callers=6 calls=0
*/
void sub_13facc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13facc0ULL || rel >= 0x13fae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fae80 size=272 callers=2 calls=0
*/
void sub_13fae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fae80ULL || rel >= 0x13faf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013faf90 size=704 callers=0 calls=0
*/
void sub_13faf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13faf90ULL || rel >= 0x13fb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fb250 size=416 callers=1 calls=0
*/
void sub_13fb250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fb250ULL || rel >= 0x13fb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fb3f0 size=304 callers=24 calls=0
*/
void sub_13fb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fb3f0ULL || rel >= 0x13fb520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fb520 size=656 callers=0 calls=0
*/
void sub_13fb520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fb520ULL || rel >= 0x13fb7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fb7b0 size=128 callers=0 calls=0
*/
void sub_13fb7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fb7b0ULL || rel >= 0x13fb830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fb830 size=16 callers=1 calls=0
*/
void sub_13fb830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fb830ULL || rel >= 0x13fb840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fb840 size=160 callers=2 calls=0
*/
void sub_13fb840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fb840ULL || rel >= 0x13fb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fb8e0 size=192 callers=1 calls=1
   calls: sub_13fbae0
*/
void sub_13fb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fb8e0ULL || rel >= 0x13fb9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fb9a0 size=160 callers=3 calls=1
   calls: sub_135a760
*/
void sub_13fb9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fb9a0ULL || rel >= 0x13fba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fba40 size=160 callers=1 calls=1
   calls: sub_135a760
*/
void sub_13fba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fba40ULL || rel >= 0x13fbae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbae0 size=512 callers=1 calls=0
*/
void sub_13fbae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbae0ULL || rel >= 0x13fbce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbce0 size=224 callers=1 calls=2
   calls: sub_13fc550, sub_5e2350
*/
void sub_13fbce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbce0ULL || rel >= 0x13fbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbdc0 size=384 callers=0 calls=0
*/
void sub_13fbdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbdc0ULL || rel >= 0x13fbf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbf40 size=16 callers=0 calls=0
*/
void sub_13fbf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbf40ULL || rel >= 0x13fbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbf50 size=16 callers=0 calls=0
*/
void sub_13fbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbf50ULL || rel >= 0x13fbf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbf60 size=16 callers=0 calls=0
*/
void sub_13fbf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbf60ULL || rel >= 0x13fbf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbf70 size=16 callers=0 calls=0
*/
void sub_13fbf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbf70ULL || rel >= 0x13fbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbf80 size=16 callers=0 calls=0
*/
void sub_13fbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbf80ULL || rel >= 0x13fbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fbf90 size=208 callers=1 calls=1
   calls: sub_13fc090
*/
void sub_13fbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fbf90ULL || rel >= 0x13fc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc060 size=48 callers=8 calls=0
*/
void sub_13fc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc060ULL || rel >= 0x13fc090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc090 size=448 callers=2 calls=0
*/
void sub_13fc090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc090ULL || rel >= 0x13fc250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc250 size=128 callers=1 calls=1
   calls: sub_13f80a0
*/
void sub_13fc250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc250ULL || rel >= 0x13fc2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc2d0 size=368 callers=1 calls=2
   calls: sub_13fc750, sub_66efd0
*/
void sub_13fc2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc2d0ULL || rel >= 0x13fc440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc440 size=240 callers=0 calls=0
*/
void sub_13fc440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc440ULL || rel >= 0x13fc530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc530 size=16 callers=0 calls=0
*/
void sub_13fc530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc530ULL || rel >= 0x13fc540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc540 size=16 callers=0 calls=0
*/
void sub_13fc540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc540ULL || rel >= 0x13fc550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc550 size=512 callers=2 calls=0
*/
void sub_13fc550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc550ULL || rel >= 0x13fc750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc750 size=320 callers=1 calls=0
*/
void sub_13fc750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc750ULL || rel >= 0x13fc890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fc890 size=464 callers=0 calls=0
*/
void sub_13fc890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fc890ULL || rel >= 0x13fca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fca60 size=288 callers=1 calls=3
   calls: sub_13fc550, sub_5e2350, sub_65d700
*/
void sub_13fca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fca60ULL || rel >= 0x13fcb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fcb80 size=432 callers=0 calls=0
*/
void sub_13fcb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcb80ULL || rel >= 0x13fcd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fcd30 size=496 callers=0 calls=0
*/
void sub_13fcd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcd30ULL || rel >= 0x13fcf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fcf20 size=16 callers=0 calls=0
*/
void sub_13fcf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcf20ULL || rel >= 0x13fcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fcf30 size=16 callers=0 calls=0
*/
void sub_13fcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcf30ULL || rel >= 0x13fcf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fcf40 size=16 callers=0 calls=0
*/
void sub_13fcf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcf40ULL || rel >= 0x13fcf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fcf50 size=16 callers=0 calls=0
*/
void sub_13fcf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcf50ULL || rel >= 0x13fcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fcf60 size=16 callers=0 calls=0
*/
void sub_13fcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcf60ULL || rel >= 0x13fcf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fcf70 size=1024 callers=2 calls=5
   calls: sub_13fdd10, sub_13fdfa0, sub_13fe720, sub_1400310, unnamed_51
*/
void sub_13fcf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fcf70ULL || rel >= 0x13fd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fd370 size=832 callers=2 calls=8
   calls: sub_1c0, sub_5cfaf0, sub_5e6180, sub_5e6280, sub_5e6770, sub_5e7a30, sub_76d200, sub_c49fc0
   ref: bin/script/amx/%s%s.amx
*/
void unnamed_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fd370ULL || rel >= 0x13fd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fd6b0 size=112 callers=2 calls=1
   calls: sub_13fe8a0
*/
void sub_13fd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fd6b0ULL || rel >= 0x13fd720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fd720 size=112 callers=2 calls=0
*/
void sub_13fd720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fd720ULL || rel >= 0x13fd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fd790 size=208 callers=2 calls=2
   calls: sub_13fe980, sub_14002d0
*/
void sub_13fd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fd790ULL || rel >= 0x13fd860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fd860 size=96 callers=2 calls=1
   calls: sub_13feb10
*/
void sub_13fd860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fd860ULL || rel >= 0x13fd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fd8c0 size=256 callers=1 calls=1
   calls: sub_13feb60
*/
void sub_13fd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fd8c0ULL || rel >= 0x13fd9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fd9c0 size=288 callers=1 calls=0
*/
void sub_13fd9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fd9c0ULL || rel >= 0x13fdae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fdae0 size=160 callers=2 calls=1
   calls: sub_13ff280
*/
void sub_13fdae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fdae0ULL || rel >= 0x13fdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fdb80 size=128 callers=2 calls=1
   calls: sub_13ff280
*/
void sub_13fdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fdb80ULL || rel >= 0x13fdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fdc00 size=240 callers=0 calls=0
*/
void sub_13fdc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fdc00ULL || rel >= 0x13fdcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fdcf0 size=16 callers=0 calls=0
*/
void sub_13fdcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fdcf0ULL || rel >= 0x13fdd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fdd00 size=16 callers=0 calls=0
*/
void sub_13fdd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fdd00ULL || rel >= 0x13fdd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fdd10 size=528 callers=1 calls=0
*/
void sub_13fdd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fdd10ULL || rel >= 0x13fdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fdf20 size=128 callers=0 calls=0
*/
void sub_13fdf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fdf20ULL || rel >= 0x13fdfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fdfa0 size=224 callers=1 calls=2
   calls: sub_5e2350, z_script_dummy
*/
void sub_13fdfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fdfa0ULL || rel >= 0x13fe080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe080 size=1200 callers=2 calls=9
   calls: sub_1c0, sub_5cfaf0, sub_5cff50, sub_5e6180, sub_5e6280, sub_5e6770, sub_5e7a30, sub_76d200, sub_c49fc0
   ref: z_script_dummy
   ref: bin/script/amx/%s%s.amx
*/
void z_script_dummy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe080ULL || rel >= 0x13fe530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe530 size=416 callers=0 calls=1
   calls: sub_13e3b40
*/
void sub_13fe530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe530ULL || rel >= 0x13fe6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe6d0 size=16 callers=0 calls=0
*/
void sub_13fe6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe6d0ULL || rel >= 0x13fe6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe6e0 size=16 callers=0 calls=0
*/
void sub_13fe6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe6e0ULL || rel >= 0x13fe6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe6f0 size=16 callers=0 calls=0
*/
void sub_13fe6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe6f0ULL || rel >= 0x13fe700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe700 size=16 callers=0 calls=0
*/
void sub_13fe700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe700ULL || rel >= 0x13fe710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe710 size=16 callers=0 calls=0
*/
void sub_13fe710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe710ULL || rel >= 0x13fe720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe720 size=384 callers=1 calls=3
   calls: sub_13e35c0, sub_13e35d0, sub_5cfaf0
*/
void sub_13fe720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe720ULL || rel >= 0x13fe8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe8a0 size=224 callers=1 calls=1
   calls: sub_13e3cc0
*/
void sub_13fe8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe8a0ULL || rel >= 0x13fe980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fe980 size=400 callers=1 calls=4
   calls: GetSceneChangeData, sub_13f75a0, sub_13fed70, sub_5cfaf0
*/
void sub_13fe980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe980ULL || rel >= 0x13feb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013feb10 size=80 callers=1 calls=0
*/
void sub_13feb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13feb10ULL || rel >= 0x13feb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013feb60 size=256 callers=1 calls=2
   calls: sub_13e35e0, sub_5cfaf0
*/
void sub_13feb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13feb60ULL || rel >= 0x13fec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fec60 size=240 callers=0 calls=0
*/
void sub_13fec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fec60ULL || rel >= 0x13fed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fed50 size=16 callers=0 calls=0
*/
void sub_13fed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fed50ULL || rel >= 0x13fed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fed60 size=16 callers=0 calls=0
*/
void sub_13fed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fed60ULL || rel >= 0x13fed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fed70 size=256 callers=1 calls=2
   calls: sub_13fee70, sub_5cfaf0
*/
void sub_13fed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fed70ULL || rel >= 0x13fee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013fee70 size=96 callers=1 calls=1
   calls: sub_13a2e70
*/
void sub_13fee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fee70ULL || rel >= 0x13feed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013feed0 size=352 callers=0 calls=4
   calls: g_command_regist_id, sub_13a31e0, sub_13e3740, sub_5cfaf0
*/
void sub_13feed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13feed0ULL || rel >= 0x13ff030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff030 size=96 callers=0 calls=0
*/
void sub_13ff030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff030ULL || rel >= 0x13ff090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff090 size=96 callers=0 calls=0
*/
void sub_13ff090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff090ULL || rel >= 0x13ff0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff0f0 size=96 callers=0 calls=0
*/
void sub_13ff0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff0f0ULL || rel >= 0x13ff150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff150 size=96 callers=0 calls=0
*/
void sub_13ff150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff150ULL || rel >= 0x13ff1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff1b0 size=96 callers=0 calls=0
*/
void sub_13ff1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff1b0ULL || rel >= 0x13ff210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff210 size=96 callers=0 calls=0
*/
void sub_13ff210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff210ULL || rel >= 0x13ff270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff270 size=16 callers=0 calls=0
*/
void sub_13ff270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff270ULL || rel >= 0x13ff280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff280 size=80 callers=2 calls=2
   calls: g_mode_2, sub_66b8c0
*/
void sub_13ff280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff280ULL || rel >= 0x13ff2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff2d0 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13ff2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff2d0ULL || rel >= 0x13ff340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff340 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13ff340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff340ULL || rel >= 0x13ff3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff3b0 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13ff3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff3b0ULL || rel >= 0x13ff420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff420 size=432 callers=1 calls=5
   calls: sub_11061d0, sub_5cf8e0, sub_5cf8f0, sub_5e2350, sub_65f110
*/
void sub_13ff420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff420ULL || rel >= 0x13ff5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff5d0 size=480 callers=0 calls=2
   calls: sub_13ff7b0, sub_5e2bc0
*/
void sub_13ff5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff5d0ULL || rel >= 0x13ff7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff7b0 size=304 callers=1 calls=0
*/
void sub_13ff7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff7b0ULL || rel >= 0x13ff8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff8e0 size=16 callers=0 calls=0
*/
void sub_13ff8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff8e0ULL || rel >= 0x13ff8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff8f0 size=16 callers=0 calls=0
*/
void sub_13ff8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff8f0ULL || rel >= 0x13ff900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff900 size=16 callers=0 calls=0
*/
void sub_13ff900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff900ULL || rel >= 0x13ff910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff910 size=16 callers=0 calls=0
*/
void sub_13ff910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff910ULL || rel >= 0x13ff920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff920 size=16 callers=0 calls=0
*/
void sub_13ff920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff920ULL || rel >= 0x13ff930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ff930 size=2272 callers=1 calls=16
   calls: field_trade_2, sub_13a2060, sub_13e3050, sub_13e4a60, sub_13e5390, sub_13fca60, sub_1400750, sub_1400830, sub_1400db0, sub_14012d0, sub_14013b0, sub_1402b60
   ... +4 more
   ref: bin/script/param/script_id/script_id_record.bin
   ref: bin/script_event_data/poke_memory.prmb
*/
void poke_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff930ULL || rel >= 0x1400210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400210 size=192 callers=1 calls=5
   calls: sub_1106200, sub_1106f30, sub_1308340, sub_13a2320, sub_dea490
*/
void sub_1400210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400210ULL || rel >= 0x14002d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014002d0 size=64 callers=1 calls=0
*/
void sub_14002d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14002d0ULL || rel >= 0x1400310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400310 size=32 callers=1 calls=0
*/
void sub_1400310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400310ULL || rel >= 0x1400330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400330 size=32 callers=1 calls=0
*/
void sub_1400330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400330ULL || rel >= 0x1400350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400350 size=320 callers=2 calls=3
   calls: sub_13fb9a0, sub_1401b50, sub_d25c50
*/
void sub_1400350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400350ULL || rel >= 0x1400490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400490 size=32 callers=8 calls=0
*/
void sub_1400490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400490ULL || rel >= 0x14004b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014004b0 size=144 callers=2 calls=1
   calls: sub_1401b20
*/
void sub_14004b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14004b0ULL || rel >= 0x1400540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400540 size=32 callers=3 calls=0
*/
void sub_1400540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400540ULL || rel >= 0x1400560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400560 size=144 callers=1 calls=1
   calls: sub_1401b20
*/
void sub_1400560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400560ULL || rel >= 0x14005f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014005f0 size=240 callers=0 calls=0
*/
void sub_14005f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14005f0ULL || rel >= 0x14006e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014006e0 size=16 callers=0 calls=0
*/
void sub_14006e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14006e0ULL || rel >= 0x14006f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014006f0 size=16 callers=0 calls=0
*/
void sub_14006f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14006f0ULL || rel >= 0x1400700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400700 size=16 callers=0 calls=0
*/
void sub_1400700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400700ULL || rel >= 0x1400710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400710 size=16 callers=0 calls=0
*/
void sub_1400710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400710ULL || rel >= 0x1400720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400720 size=16 callers=0 calls=0
*/
void sub_1400720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400720ULL || rel >= 0x1400730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400730 size=32 callers=0 calls=0
*/
void sub_1400730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400730ULL || rel >= 0x1400750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400750 size=224 callers=1 calls=1
   calls: common_scr_3
*/
void sub_1400750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400750ULL || rel >= 0x1400830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400830 size=272 callers=1 calls=3
   calls: sub_13fb830, sub_5e2350, sub_65d700
*/
void sub_1400830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400830ULL || rel >= 0x1400940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400940 size=144 callers=0 calls=0
*/
void sub_1400940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400940ULL || rel >= 0x14009d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014009d0 size=144 callers=0 calls=0
*/
void sub_14009d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14009d0ULL || rel >= 0x1400a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400a60 size=240 callers=0 calls=0
*/
void sub_1400a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400a60ULL || rel >= 0x1400b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400b50 size=144 callers=0 calls=0
*/
void sub_1400b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400b50ULL || rel >= 0x1400be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400be0 size=144 callers=0 calls=0
*/
void sub_1400be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400be0ULL || rel >= 0x1400c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400c70 size=16 callers=0 calls=0
*/
void sub_1400c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400c70ULL || rel >= 0x1400c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400c80 size=16 callers=0 calls=0
*/
void sub_1400c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400c80ULL || rel >= 0x1400c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400c90 size=144 callers=0 calls=0
*/
void sub_1400c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400c90ULL || rel >= 0x1400d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400d20 size=144 callers=0 calls=0
*/
void sub_1400d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400d20ULL || rel >= 0x1400db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400db0 size=480 callers=1 calls=1
   calls: sub_1400f90
*/
void sub_1400db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400db0ULL || rel >= 0x1400f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01400f90 size=192 callers=2 calls=2
   calls: sub_5e2350, sub_65d700
*/
void sub_1400f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400f90ULL || rel >= 0x1401050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401050 size=288 callers=0 calls=0
*/
void sub_1401050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401050ULL || rel >= 0x1401170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401170 size=16 callers=0 calls=0
*/
void sub_1401170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401170ULL || rel >= 0x1401180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401180 size=240 callers=0 calls=0
*/
void sub_1401180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401180ULL || rel >= 0x1401270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401270 size=16 callers=0 calls=0
*/
void sub_1401270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401270ULL || rel >= 0x1401280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401280 size=16 callers=0 calls=0
*/
void sub_1401280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401280ULL || rel >= 0x1401290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401290 size=16 callers=0 calls=0
*/
void sub_1401290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401290ULL || rel >= 0x14012a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014012a0 size=16 callers=0 calls=0
*/
void sub_14012a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14012a0ULL || rel >= 0x14012b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014012b0 size=16 callers=0 calls=0
*/
void sub_14012b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14012b0ULL || rel >= 0x14012c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014012c0 size=16 callers=0 calls=0
*/
void sub_14012c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14012c0ULL || rel >= 0x14012d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014012d0 size=224 callers=1 calls=1
   calls: sub_13d35d0
*/
void sub_14012d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14012d0ULL || rel >= 0x14013b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014013b0 size=224 callers=1 calls=1
   calls: sub_dea090
*/
void sub_14013b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14013b0ULL || rel >= 0x1401490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401490 size=864 callers=16 calls=3
   calls: sub_14017f0, sub_1401990, sub_14028b0
*/
void sub_1401490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401490ULL || rel >= 0x14017f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014017f0 size=416 callers=4 calls=3
   calls: sub_1401cd0, sub_c38350, sub_e9db40
*/
void sub_14017f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14017f0ULL || rel >= 0x1401990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401990 size=400 callers=4 calls=2
   calls: sub_13a1bc0, sub_13fa750
*/
void sub_1401990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401990ULL || rel >= 0x1401b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401b20 size=48 callers=13 calls=0
*/
void sub_1401b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401b20ULL || rel >= 0x1401b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401b50 size=384 callers=1 calls=3
   calls: sub_14017f0, sub_1401990, sub_14028b0
*/
void sub_1401b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401b50ULL || rel >= 0x1401cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401cd0 size=240 callers=1 calls=2
   calls: sub_14029e0, sub_e9d130
*/
void sub_1401cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401cd0ULL || rel >= 0x1401dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401dc0 size=16 callers=0 calls=0
*/
void sub_1401dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401dc0ULL || rel >= 0x1401dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01401dd0 size=688 callers=0 calls=5
   calls: sub_1312f50, sub_13149a0, sub_13ef320, sub_5cfad0, sub_794330
   ref: Set_State_Event_Script_Demo
*/
void Set_State_Event_Script_Demo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1401dd0ULL || rel >= 0x1402080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402080 size=560 callers=0 calls=6
   calls: sub_13fbf90, sub_13fc060, sub_13fc250, sub_1402d50, sub_1402e00, sub_1402fa0
*/
void sub_1402080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402080ULL || rel >= 0x14022b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014022b0 size=144 callers=0 calls=2
   calls: sub_5cfad0, sub_794330
   ref: Set_State_Event_Off
*/
void Set_State_Event_Off_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14022b0ULL || rel >= 0x1402340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402340 size=112 callers=1 calls=1
   calls: sub_13fc060
*/
void sub_1402340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402340ULL || rel >= 0x14023b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014023b0 size=112 callers=1 calls=1
   calls: sub_13fc060
*/
void sub_14023b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14023b0ULL || rel >= 0x1402420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402420 size=112 callers=1 calls=1
   calls: sub_13fc060
*/
void sub_1402420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402420ULL || rel >= 0x1402490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402490 size=192 callers=1 calls=0
*/
void sub_1402490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402490ULL || rel >= 0x1402550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402550 size=240 callers=6 calls=1
   calls: sub_13fc060
*/
void sub_1402550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402550ULL || rel >= 0x1402640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402640 size=96 callers=0 calls=0
*/
void sub_1402640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402640ULL || rel >= 0x14026a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014026a0 size=96 callers=0 calls=0
*/
void sub_14026a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14026a0ULL || rel >= 0x1402700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402700 size=16 callers=0 calls=0
*/
void sub_1402700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402700ULL || rel >= 0x1402710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402710 size=96 callers=0 calls=0
*/
void sub_1402710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402710ULL || rel >= 0x1402770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402770 size=96 callers=0 calls=0
*/
void sub_1402770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402770ULL || rel >= 0x14027d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014027d0 size=16 callers=0 calls=0
*/
void sub_14027d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14027d0ULL || rel >= 0x14027e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014027e0 size=16 callers=0 calls=0
*/
void sub_14027e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14027e0ULL || rel >= 0x14027f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014027f0 size=96 callers=0 calls=0
*/
void sub_14027f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14027f0ULL || rel >= 0x1402850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402850 size=96 callers=0 calls=0
*/
void sub_1402850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402850ULL || rel >= 0x14028b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014028b0 size=304 callers=4 calls=0
*/
void sub_14028b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14028b0ULL || rel >= 0x14029e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014029e0 size=256 callers=1 calls=1
   calls: sub_13fbce0
*/
void sub_14029e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14029e0ULL || rel >= 0x1402ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402ae0 size=128 callers=0 calls=0
*/
void sub_1402ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402ae0ULL || rel >= 0x1402b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402b60 size=192 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1402b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402b60ULL || rel >= 0x1402c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402c20 size=304 callers=0 calls=0
*/
void sub_1402c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402c20ULL || rel >= 0x1402d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402d50 size=96 callers=2 calls=0
*/
void sub_1402d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402d50ULL || rel >= 0x1402db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402db0 size=16 callers=0 calls=0
*/
void sub_1402db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402db0ULL || rel >= 0x1402dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402dc0 size=16 callers=0 calls=0
*/
void sub_1402dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402dc0ULL || rel >= 0x1402dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402dd0 size=16 callers=0 calls=0
*/
void sub_1402dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402dd0ULL || rel >= 0x1402de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402de0 size=16 callers=0 calls=0
*/
void sub_1402de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402de0ULL || rel >= 0x1402df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402df0 size=16 callers=0 calls=0
*/
void sub_1402df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402df0ULL || rel >= 0x1402e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402e00 size=416 callers=2 calls=0
*/
void sub_1402e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402e00ULL || rel >= 0x1402fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402fa0 size=80 callers=2 calls=0
*/
void sub_1402fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402fa0ULL || rel >= 0x1402ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01402ff0 size=240 callers=0 calls=0
*/
void sub_1402ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1402ff0ULL || rel >= 0x14030e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014030e0 size=16 callers=0 calls=0
*/
void sub_14030e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14030e0ULL || rel >= 0x14030f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014030f0 size=16 callers=0 calls=0
*/
void sub_14030f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14030f0ULL || rel >= 0x1403100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403100 size=512 callers=0 calls=0
*/
void sub_1403100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403100ULL || rel >= 0x1403300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403300 size=128 callers=0 calls=0
*/
void sub_1403300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403300ULL || rel >= 0x1403380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403380 size=80 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1403380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403380ULL || rel >= 0x14033d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014033d0 size=368 callers=0 calls=3
   calls: sub_ea3d10, sub_ea4760, sub_ea47d0
*/
void sub_14033d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14033d0ULL || rel >= 0x1403540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403540 size=80 callers=0 calls=0
*/
void sub_1403540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403540ULL || rel >= 0x1403590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403590 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1403590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403590ULL || rel >= 0x1403600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403600 size=80 callers=0 calls=0
*/
void sub_1403600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403600ULL || rel >= 0x1403650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403650 size=80 callers=0 calls=0
*/
void sub_1403650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403650ULL || rel >= 0x14036a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014036a0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14036a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14036a0ULL || rel >= 0x1403710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403710 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1403710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403710ULL || rel >= 0x1403780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403780 size=80 callers=0 calls=0
*/
void sub_1403780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403780ULL || rel >= 0x14037d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014037d0 size=80 callers=0 calls=0
*/
void sub_14037d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14037d0ULL || rel >= 0x1403820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403820 size=240 callers=42 calls=0
*/
void sub_1403820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403820ULL || rel >= 0x1403910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403910 size=672 callers=1 calls=5
   calls: sub_134f490, sub_5e2350, sub_67b990, sub_762930, sub_7670a0
*/
void sub_1403910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403910ULL || rel >= 0x1403bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403bb0 size=416 callers=0 calls=4
   calls: sub_134f3e0, sub_1403d50, sub_767570, sub_d7e1e0
*/
void sub_1403bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403bb0ULL || rel >= 0x1403d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403d50 size=336 callers=1 calls=4
   calls: sub_67b990, sub_67bd90, sub_67bdc0, sub_767550
*/
void sub_1403d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403d50ULL || rel >= 0x1403ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403ea0 size=192 callers=0 calls=0
*/
void sub_1403ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403ea0ULL || rel >= 0x1403f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01403f60 size=192 callers=0 calls=0
*/
void sub_1403f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1403f60ULL || rel >= 0x1404020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404020 size=240 callers=0 calls=0
*/
void sub_1404020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404020ULL || rel >= 0x1404110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404110 size=192 callers=0 calls=0
*/
void sub_1404110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404110ULL || rel >= 0x14041d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014041d0 size=192 callers=0 calls=0
*/
void sub_14041d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14041d0ULL || rel >= 0x1404290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404290 size=16 callers=0 calls=0
*/
void sub_1404290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404290ULL || rel >= 0x14042a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014042a0 size=16 callers=0 calls=0
*/
void sub_14042a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14042a0ULL || rel >= 0x14042b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014042b0 size=192 callers=0 calls=0
*/
void sub_14042b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14042b0ULL || rel >= 0x1404370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404370 size=192 callers=0 calls=0
*/
void sub_1404370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404370ULL || rel >= 0x1404430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404430 size=192 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1404430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404430ULL || rel >= 0x14044f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014044f0 size=1168 callers=0 calls=8
   calls: sub_1404980, sub_14059f0, sub_5cfad0, sub_794330, sub_967240, sub_d21b60, sub_d236b0, sub_d245e0
   ref: Play_Prop_Gimmick_elevator_move
*/
void Play_Prop_Gimmick_elevator_move(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14044f0ULL || rel >= 0x1404980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404980 size=272 callers=1 calls=2
   calls: sub_1404fa0, sub_5d99d0
*/
void sub_1404980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404980ULL || rel >= 0x1404a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404a90 size=160 callers=0 calls=0
*/
void sub_1404a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404a90ULL || rel >= 0x1404b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404b30 size=160 callers=0 calls=0
*/
void sub_1404b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404b30ULL || rel >= 0x1404bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404bd0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1404bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404bd0ULL || rel >= 0x1404c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404c40 size=160 callers=0 calls=0
*/
void sub_1404c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404c40ULL || rel >= 0x1404ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404ce0 size=160 callers=0 calls=0
*/
void sub_1404ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404ce0ULL || rel >= 0x1404d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404d80 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1404d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404d80ULL || rel >= 0x1404df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404df0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1404df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404df0ULL || rel >= 0x1404e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404e60 size=160 callers=0 calls=0
*/
void sub_1404e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404e60ULL || rel >= 0x1404f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404f00 size=160 callers=0 calls=0
*/
void sub_1404f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404f00ULL || rel >= 0x1404fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01404fa0 size=272 callers=1 calls=2
   calls: sub_13cec50, sub_5db3d0
*/
void sub_1404fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1404fa0ULL || rel >= 0x14050b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014050b0 size=208 callers=0 calls=0
*/
void sub_14050b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14050b0ULL || rel >= 0x1405180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405180 size=208 callers=0 calls=0
*/
void sub_1405180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405180ULL || rel >= 0x1405250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405250 size=16 callers=0 calls=0
*/
void sub_1405250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405250ULL || rel >= 0x1405260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405260 size=752 callers=0 calls=3
   calls: sub_13f6190, sub_967240, sub_d1f3d0
*/
void sub_1405260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405260ULL || rel >= 0x1405550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405550 size=208 callers=0 calls=0
*/
void sub_1405550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405550ULL || rel >= 0x1405620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405620 size=208 callers=0 calls=0
*/
void sub_1405620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405620ULL || rel >= 0x14056f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014056f0 size=16 callers=0 calls=0
*/
void sub_14056f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14056f0ULL || rel >= 0x1405700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405700 size=16 callers=0 calls=0
*/
void sub_1405700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405700ULL || rel >= 0x1405710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405710 size=16 callers=0 calls=0
*/
void sub_1405710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405710ULL || rel >= 0x1405720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405720 size=208 callers=0 calls=0
*/
void sub_1405720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405720ULL || rel >= 0x14057f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014057f0 size=208 callers=0 calls=0
*/
void sub_14057f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14057f0ULL || rel >= 0x14058c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014058c0 size=304 callers=2 calls=0
*/
void sub_14058c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14058c0ULL || rel >= 0x14059f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014059f0 size=640 callers=3 calls=3
   calls: sub_14058c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_14059f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14059f0ULL || rel >= 0x1405c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405c70 size=272 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1405c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405c70ULL || rel >= 0x1405d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405d80 size=224 callers=0 calls=1
   calls: sub_efb510
*/
void sub_1405d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405d80ULL || rel >= 0x1405e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405e60 size=160 callers=0 calls=0
*/
void sub_1405e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405e60ULL || rel >= 0x1405f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405f00 size=160 callers=0 calls=0
*/
void sub_1405f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405f00ULL || rel >= 0x1405fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01405fa0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1405fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1405fa0ULL || rel >= 0x1406010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406010 size=160 callers=0 calls=0
*/
void sub_1406010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406010ULL || rel >= 0x14060b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014060b0 size=160 callers=0 calls=0
*/
void sub_14060b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14060b0ULL || rel >= 0x1406150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406150 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1406150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406150ULL || rel >= 0x14061c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014061c0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14061c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14061c0ULL || rel >= 0x1406230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406230 size=160 callers=0 calls=0
*/
void sub_1406230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406230ULL || rel >= 0x14062d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014062d0 size=160 callers=0 calls=0
*/
void sub_14062d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14062d0ULL || rel >= 0x1406370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406370 size=80 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1406370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406370ULL || rel >= 0x14063c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014063c0 size=48 callers=0 calls=1
   calls: sub_ea3d10
*/
void sub_14063c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14063c0ULL || rel >= 0x14063f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014063f0 size=80 callers=0 calls=0
*/
void sub_14063f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14063f0ULL || rel >= 0x1406440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406440 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1406440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406440ULL || rel >= 0x14064b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014064b0 size=80 callers=0 calls=0
*/
void sub_14064b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14064b0ULL || rel >= 0x1406500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406500 size=80 callers=0 calls=0
*/
void sub_1406500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406500ULL || rel >= 0x1406550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406550 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1406550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406550ULL || rel >= 0x14065c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014065c0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14065c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14065c0ULL || rel >= 0x1406630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406630 size=80 callers=0 calls=0
*/
void sub_1406630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406630ULL || rel >= 0x1406680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406680 size=80 callers=0 calls=0
*/
void sub_1406680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406680ULL || rel >= 0x14066d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014066d0 size=144 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_14066d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14066d0ULL || rel >= 0x1406760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406760 size=256 callers=0 calls=9
   calls: sub_13f8d00, sub_13f9120, sub_e3e110, sub_e3e3b0, sub_e3ece0, sub_e3ed90, sub_e3ee80, sub_e3eea0, sub_e3ef30
*/
void sub_1406760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406760ULL || rel >= 0x1406860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406860 size=80 callers=0 calls=0
*/
void sub_1406860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406860ULL || rel >= 0x14068b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014068b0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14068b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14068b0ULL || rel >= 0x1406920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406920 size=80 callers=0 calls=0
*/
void sub_1406920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406920ULL || rel >= 0x1406970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406970 size=80 callers=0 calls=0
*/
void sub_1406970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406970ULL || rel >= 0x14069c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014069c0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14069c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14069c0ULL || rel >= 0x1406a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406a30 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1406a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406a30ULL || rel >= 0x1406aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406aa0 size=80 callers=0 calls=0
*/
void sub_1406aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406aa0ULL || rel >= 0x1406af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406af0 size=80 callers=0 calls=0
*/
void sub_1406af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406af0ULL || rel >= 0x1406b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406b40 size=368 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1406b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406b40ULL || rel >= 0x1406cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01406cb0 size=896 callers=0 calls=8
   calls: sub_13a6cd0, sub_14072d0, sub_619060, sub_619640, sub_c61360, sub_c61640, sub_c61b00, sub_c61bc0
*/
void sub_1406cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1406cb0ULL || rel >= 0x1407030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407030 size=256 callers=0 calls=0
*/
void sub_1407030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407030ULL || rel >= 0x1407130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407130 size=16 callers=0 calls=0
*/
void sub_1407130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407130ULL || rel >= 0x1407140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407140 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1407140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407140ULL || rel >= 0x14071b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014071b0 size=16 callers=0 calls=0
*/
void sub_14071b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14071b0ULL || rel >= 0x14071c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014071c0 size=16 callers=0 calls=0
*/
void sub_14071c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14071c0ULL || rel >= 0x14071d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014071d0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14071d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14071d0ULL || rel >= 0x1407240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407240 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1407240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407240ULL || rel >= 0x14072b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014072b0 size=16 callers=0 calls=0
*/
void sub_14072b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14072b0ULL || rel >= 0x14072c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014072c0 size=16 callers=0 calls=0
*/
void sub_14072c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14072c0ULL || rel >= 0x14072d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014072d0 size=224 callers=4 calls=1
   calls: sub_c60fb0
*/
void sub_14072d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14072d0ULL || rel >= 0x14073b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014073b0 size=128 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_14073b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14073b0ULL || rel >= 0x1407430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407430 size=528 callers=0 calls=4
   calls: sub_13ea710, sub_13ea750, sub_7847d0, sub_c3d6e0
*/
void sub_1407430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407430ULL || rel >= 0x1407640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407640 size=144 callers=0 calls=0
*/
void sub_1407640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407640ULL || rel >= 0x14076d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014076d0 size=144 callers=0 calls=0
*/
void sub_14076d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14076d0ULL || rel >= 0x1407760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407760 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1407760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407760ULL || rel >= 0x14077d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014077d0 size=144 callers=0 calls=0
*/
void sub_14077d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14077d0ULL || rel >= 0x1407860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407860 size=144 callers=0 calls=0
*/
void sub_1407860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407860ULL || rel >= 0x14078f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014078f0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14078f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14078f0ULL || rel >= 0x1407960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407960 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1407960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407960ULL || rel >= 0x14079d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014079d0 size=144 callers=0 calls=0
*/
void sub_14079d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14079d0ULL || rel >= 0x1407a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407a60 size=144 callers=0 calls=0
*/
void sub_1407a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407a60ULL || rel >= 0x1407af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407af0 size=144 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1407af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407af0ULL || rel >= 0x1407b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407b80 size=416 callers=0 calls=4
   calls: poke_memory_place_2, sub_1307dd0, sub_1308340, sub_c4ac70
   ref: script/poke_memory_feeling.dat
   ref: script/poke_memory_rank.dat
*/
void poke_memory_rank(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407b80ULL || rel >= 0x1407d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01407d20 size=1200 callers=1 calls=16
   calls: is_force_overwrite_2, sub_13131d0, sub_1313580, sub_1313c10, sub_1314a80, sub_1315270, sub_1318b50, sub_67b990, sub_762fd0, sub_767670, sub_7676d0, sub_7676f0
   ... +4 more
   ref: script/poke_memory_place.dat
*/
void poke_memory_place_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1407d20ULL || rel >= 0x14081d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014081d0 size=192 callers=0 calls=0
*/
void sub_14081d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14081d0ULL || rel >= 0x1408290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408290 size=192 callers=0 calls=0
*/
void sub_1408290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408290ULL || rel >= 0x1408350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408350 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1408350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408350ULL || rel >= 0x14083c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014083c0 size=192 callers=0 calls=0
*/
void sub_14083c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14083c0ULL || rel >= 0x1408480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408480 size=192 callers=0 calls=0
*/
void sub_1408480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408480ULL || rel >= 0x1408540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408540 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1408540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408540ULL || rel >= 0x14085b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014085b0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14085b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14085b0ULL || rel >= 0x1408620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408620 size=192 callers=0 calls=0
*/
void sub_1408620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408620ULL || rel >= 0x14086e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014086e0 size=192 callers=0 calls=0
*/
void sub_14086e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14086e0ULL || rel >= 0x14087a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014087a0 size=112 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_14087a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14087a0ULL || rel >= 0x1408810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408810 size=1600 callers=0 calls=17
   calls: sub_1376420, sub_13764c0, sub_1409360, sub_67bde0, sub_67bfa0, sub_67d450, sub_767680, sub_7676d0, sub_783bd0, sub_784e40, sub_7c2280, sub_7c2d80
   ... +5 more
*/
void sub_1408810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408810ULL || rel >= 0x1408e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408e50 size=160 callers=0 calls=0
*/
void sub_1408e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408e50ULL || rel >= 0x1408ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408ef0 size=160 callers=0 calls=0
*/
void sub_1408ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408ef0ULL || rel >= 0x1408f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01408f90 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1408f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1408f90ULL || rel >= 0x1409000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409000 size=160 callers=0 calls=0
*/
void sub_1409000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409000ULL || rel >= 0x14090a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014090a0 size=160 callers=0 calls=0
*/
void sub_14090a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14090a0ULL || rel >= 0x1409140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409140 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1409140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409140ULL || rel >= 0x14091b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014091b0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14091b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14091b0ULL || rel >= 0x1409220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409220 size=160 callers=0 calls=0
*/
void sub_1409220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409220ULL || rel >= 0x14092c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014092c0 size=160 callers=0 calls=0
*/
void sub_14092c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14092c0ULL || rel >= 0x1409360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409360 size=224 callers=1 calls=1
   calls: sub_de3560
*/
void sub_1409360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409360ULL || rel >= 0x1409440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409440 size=128 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1409440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409440ULL || rel >= 0x14094c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014094c0 size=480 callers=0 calls=5
   calls: sub_1308340, sub_13fa0a0, sub_e42060, sub_e420b0, sub_e420c0
*/
void sub_14094c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14094c0ULL || rel >= 0x14096a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014096a0 size=80 callers=0 calls=0
*/
void sub_14096a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14096a0ULL || rel >= 0x14096f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014096f0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_14096f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14096f0ULL || rel >= 0x1409760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409760 size=80 callers=0 calls=0
*/
void sub_1409760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409760ULL || rel >= 0x14097b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014097b0 size=80 callers=0 calls=0
*/
void sub_14097b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14097b0ULL || rel >= 0x1409800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409800 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1409800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409800ULL || rel >= 0x1409870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409870 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1409870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409870ULL || rel >= 0x14098e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014098e0 size=80 callers=0 calls=0
*/
void sub_14098e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14098e0ULL || rel >= 0x1409930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409930 size=80 callers=0 calls=0
*/
void sub_1409930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409930ULL || rel >= 0x1409980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409980 size=80 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1409980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409980ULL || rel >= 0x14099d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014099d0 size=144 callers=0 calls=2
   calls: sub_ea3d10, sub_ea47d0
*/
void sub_14099d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14099d0ULL || rel >= 0x1409a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409a60 size=80 callers=0 calls=0
*/
void sub_1409a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409a60ULL || rel >= 0x1409ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409ab0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1409ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409ab0ULL || rel >= 0x1409b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409b20 size=80 callers=0 calls=0
*/
void sub_1409b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409b20ULL || rel >= 0x1409b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409b70 size=80 callers=0 calls=0
*/
void sub_1409b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409b70ULL || rel >= 0x1409bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409bc0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1409bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409bc0ULL || rel >= 0x1409c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409c30 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_1409c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409c30ULL || rel >= 0x1409ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409ca0 size=80 callers=0 calls=0
*/
void sub_1409ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409ca0ULL || rel >= 0x1409cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409cf0 size=80 callers=0 calls=0
*/
void sub_1409cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409cf0ULL || rel >= 0x1409d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409d40 size=128 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1409d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409d40ULL || rel >= 0x1409dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409dc0 size=384 callers=0 calls=1
   calls: sub_efea30
*/
void sub_1409dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409dc0ULL || rel >= 0x1409f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409f40 size=144 callers=0 calls=0
*/
void sub_1409f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409f40ULL || rel >= 0x1409fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01409fd0 size=144 callers=0 calls=0
*/
void sub_1409fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1409fd0ULL || rel >= 0x140a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a060 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a060ULL || rel >= 0x140a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a0d0 size=144 callers=0 calls=0
*/
void sub_140a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a0d0ULL || rel >= 0x140a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a160 size=144 callers=0 calls=0
*/
void sub_140a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a160ULL || rel >= 0x140a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a1f0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a1f0ULL || rel >= 0x140a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a260 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a260ULL || rel >= 0x140a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a2d0 size=144 callers=0 calls=0
*/
void sub_140a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a2d0ULL || rel >= 0x140a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a360 size=144 callers=0 calls=0
*/
void sub_140a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a360ULL || rel >= 0x140a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a3f0 size=96 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_140a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a3f0ULL || rel >= 0x140a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a450 size=176 callers=0 calls=4
   calls: sub_13f8d00, sub_13f9120, sub_14a91c0, sub_e3e3e0
*/
void sub_140a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a450ULL || rel >= 0x140a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a500 size=80 callers=0 calls=0
*/
void sub_140a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a500ULL || rel >= 0x140a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a550 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a550ULL || rel >= 0x140a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a5c0 size=80 callers=0 calls=0
*/
void sub_140a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a5c0ULL || rel >= 0x140a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a610 size=80 callers=0 calls=0
*/
void sub_140a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a610ULL || rel >= 0x140a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a660 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a660ULL || rel >= 0x140a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a6d0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a6d0ULL || rel >= 0x140a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a740 size=80 callers=0 calls=0
*/
void sub_140a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a740ULL || rel >= 0x140a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a790 size=80 callers=0 calls=0
*/
void sub_140a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a790ULL || rel >= 0x140a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a7e0 size=192 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_140a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a7e0ULL || rel >= 0x140a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a8a0 size=224 callers=0 calls=1
   calls: sub_1539b10
*/
void sub_140a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a8a0ULL || rel >= 0x140a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140a980 size=160 callers=0 calls=0
*/
void sub_140a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140a980ULL || rel >= 0x140aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140aa20 size=160 callers=0 calls=0
*/
void sub_140aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140aa20ULL || rel >= 0x140aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140aac0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140aac0ULL || rel >= 0x140ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ab30 size=160 callers=0 calls=0
*/
void sub_140ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ab30ULL || rel >= 0x140abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140abd0 size=160 callers=0 calls=0
*/
void sub_140abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140abd0ULL || rel >= 0x140ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ac70 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ac70ULL || rel >= 0x140ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ace0 size=112 callers=0 calls=1
   calls: sub_1403820
*/
void sub_140ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ace0ULL || rel >= 0x140ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ad50 size=160 callers=0 calls=0
*/
void sub_140ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ad50ULL || rel >= 0x140adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140adf0 size=160 callers=0 calls=0
*/
void sub_140adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140adf0ULL || rel >= 0x140ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ae90 size=432 callers=1 calls=4
   calls: sub_140b040, sub_5dd790, sub_5e26a0, sub_5e2930
*/
void sub_140ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ae90ULL || rel >= 0x140b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140b040 size=1376 callers=1 calls=1
   calls: sub_140c3c0
*/
void sub_140b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140b040ULL || rel >= 0x140b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140b5a0 size=240 callers=2 calls=0
*/
void sub_140b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140b5a0ULL || rel >= 0x140b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140b690 size=32 callers=503 calls=0
*/
void sub_140b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140b690ULL || rel >= 0x140b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140b6b0 size=32 callers=16 calls=0
*/
void sub_140b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140b6b0ULL || rel >= 0x140b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140b6d0 size=1072 callers=3 calls=1
   calls: sub_140c3c0
*/
void sub_140b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140b6d0ULL || rel >= 0x140bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140bb00 size=384 callers=2 calls=1
   calls: sub_140b6d0
*/
void sub_140bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140bb00ULL || rel >= 0x140bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140bc80 size=32 callers=171 calls=0
*/
void sub_140bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140bc80ULL || rel >= 0x140bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140bca0 size=80 callers=127 calls=0
*/
void sub_140bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140bca0ULL || rel >= 0x140bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140bcf0 size=80 callers=105 calls=0
*/
void sub_140bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140bcf0ULL || rel >= 0x140bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140bd40 size=48 callers=493 calls=0
*/
void sub_140bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140bd40ULL || rel >= 0x140bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140bd70 size=320 callers=37 calls=1
   calls: sub_76d0d0
*/
void sub_140bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140bd70ULL || rel >= 0x140beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140beb0 size=320 callers=3 calls=1
   calls: sub_140b6d0
*/
void sub_140beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140beb0ULL || rel >= 0x140bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140bff0 size=48 callers=0 calls=0
*/
void sub_140bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140bff0ULL || rel >= 0x140c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c020 size=432 callers=0 calls=1
   calls: sub_140b6d0
*/
void sub_140c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c020ULL || rel >= 0x140c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c1d0 size=448 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_140c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c1d0ULL || rel >= 0x140c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c390 size=16 callers=0 calls=0
*/
void sub_140c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c390ULL || rel >= 0x140c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c3a0 size=16 callers=0 calls=0
*/
void sub_140c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c3a0ULL || rel >= 0x140c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c3b0 size=16 callers=0 calls=0
*/
void sub_140c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c3b0ULL || rel >= 0x140c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c3c0 size=272 callers=4 calls=0
*/
void sub_140c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c3c0ULL || rel >= 0x140c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c4d0 size=704 callers=0 calls=0
*/
void sub_140c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c4d0ULL || rel >= 0x140c790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c790 size=144 callers=1 calls=1
   calls: sub_140c820
*/
void sub_140c790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c790ULL || rel >= 0x140c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c820 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_140c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c820ULL || rel >= 0x140c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140c9e0 size=96 callers=0 calls=0
*/
void sub_140c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140c9e0ULL || rel >= 0x140ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ca40 size=96 callers=0 calls=0
*/
void sub_140ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ca40ULL || rel >= 0x140caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140caa0 size=96 callers=0 calls=0
*/
void sub_140caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140caa0ULL || rel >= 0x140cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cb00 size=96 callers=0 calls=0
*/
void sub_140cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cb00ULL || rel >= 0x140cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cb60 size=96 callers=0 calls=0
*/
void sub_140cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cb60ULL || rel >= 0x140cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cbc0 size=96 callers=0 calls=0
*/
void sub_140cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cbc0ULL || rel >= 0x140cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cc20 size=16 callers=0 calls=0
*/
void sub_140cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cc20ULL || rel >= 0x140cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cc30 size=16 callers=0 calls=0
*/
void sub_140cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cc30ULL || rel >= 0x140cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cc40 size=16 callers=0 calls=0
*/
void sub_140cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cc40ULL || rel >= 0x140cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cc50 size=240 callers=0 calls=1
   calls: sub_140cd40
*/
void sub_140cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cc50ULL || rel >= 0x140cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cd40 size=272 callers=1 calls=3
   calls: sub_140cfb0, sub_672c10, sub_c386f0
*/
void sub_140cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cd40ULL || rel >= 0x140ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ce50 size=16 callers=0 calls=0
*/
void sub_140ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ce50ULL || rel >= 0x140ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ce60 size=16 callers=0 calls=0
*/
void sub_140ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ce60ULL || rel >= 0x140ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ce70 size=16 callers=0 calls=0
*/
void sub_140ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ce70ULL || rel >= 0x140ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ce80 size=304 callers=0 calls=0
*/
void sub_140ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ce80ULL || rel >= 0x140cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140cfb0 size=224 callers=1 calls=2
   calls: sub_140d090, sub_e7b660
*/
void sub_140cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140cfb0ULL || rel >= 0x140d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d090 size=224 callers=1 calls=3
   calls: sub_140d170, sub_7c2da0, sub_e7b5e0
*/
void sub_140d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d090ULL || rel >= 0x140d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d170 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_140d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d170ULL || rel >= 0x140d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d260 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_140d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d260ULL || rel >= 0x140d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d2e0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_140d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d2e0ULL || rel >= 0x140d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d450 size=96 callers=0 calls=1
   calls: sub_140d670
*/
void sub_140d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d450ULL || rel >= 0x140d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d4b0 size=16 callers=0 calls=0
*/
void sub_140d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d4b0ULL || rel >= 0x140d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d4c0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_140d4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d4c0ULL || rel >= 0x140d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d560 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_140d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d560ULL || rel >= 0x140d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d620 size=16 callers=0 calls=0
*/
void sub_140d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d620ULL || rel >= 0x140d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d630 size=16 callers=0 calls=0
*/
void sub_140d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d630ULL || rel >= 0x140d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d640 size=16 callers=0 calls=0
*/
void sub_140d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d640ULL || rel >= 0x140d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d650 size=32 callers=0 calls=0
*/
void sub_140d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d650ULL || rel >= 0x140d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d670 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_140d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d670ULL || rel >= 0x140d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140d750 size=784 callers=1 calls=1
   calls: sub_67b990
*/
void sub_140d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140d750ULL || rel >= 0x140da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140da60 size=96 callers=1 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_140da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140da60ULL || rel >= 0x140dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140dac0 size=112 callers=8 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_140dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140dac0ULL || rel >= 0x140db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140db30 size=224 callers=3 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_140db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140db30ULL || rel >= 0x140dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140dc10 size=672 callers=1 calls=19
   calls: T_save_00, sub_130b1d0, sub_13573f0, sub_1357410, sub_1357430, sub_1357450, sub_1357500, sub_1357520, sub_1357540, sub_1357560, sub_1357590, sub_13575c0
   ... +7 more
*/
void sub_140dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140dc10ULL || rel >= 0x140deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140deb0 size=432 callers=3 calls=16
   calls: sub_13573c0, sub_13573d0, sub_13573e0, sub_1357400, sub_1357420, sub_1357440, sub_13574b0, sub_1357580, sub_13575b0, sub_13575e0, sub_1357610, sub_1357640
   ... +4 more
*/
void sub_140deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140deb0ULL || rel >= 0x140e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140e060 size=752 callers=0 calls=13
   calls: sub_130b1d0, sub_140d750, sub_140e350, sub_140f090, sub_140f1c0, sub_5cfad0, sub_78f150, sub_78f240, sub_790140, sub_794e80, sub_79ab20, sub_e7c0f0
   ... +1 more
   ref: SystemMessageView
   ref: View_Top
   ref: AttentionView
*/
void SystemMessageView_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140e060ULL || rel >= 0x140e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140e350 size=272 callers=1 calls=3
   calls: sub_140efa0, sub_140f090, sub_e7c160
*/
void sub_140e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140e350ULL || rel >= 0x140e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140e460 size=32 callers=0 calls=0
*/
void sub_140e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140e460ULL || rel >= 0x140e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140e480 size=16 callers=0 calls=0
*/
void sub_140e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140e480ULL || rel >= 0x140e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140e490 size=16 callers=0 calls=0
*/
void sub_140e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140e490ULL || rel >= 0x140e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140e4a0 size=1440 callers=0 calls=8
   calls: sub_140f4f0, sub_140f630, sub_140f780, sub_140f8c0, sub_140fa00, sub_140fb40, sub_79c240, sub_e7c160
*/
void sub_140e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140e4a0ULL || rel >= 0x140ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ea40 size=16 callers=0 calls=0
*/
void sub_140ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ea40ULL || rel >= 0x140ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ea50 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_140ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ea50ULL || rel >= 0x140ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ebf0 size=16 callers=0 calls=0
*/
void sub_140ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ebf0ULL || rel >= 0x140ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ec00 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_140ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ec00ULL || rel >= 0x140ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ecb0 size=16 callers=0 calls=0
*/
void sub_140ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ecb0ULL || rel >= 0x140ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ecc0 size=16 callers=0 calls=0
*/
void sub_140ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ecc0ULL || rel >= 0x140ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ecd0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_140ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ecd0ULL || rel >= 0x140ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ed80 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_140ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ed80ULL || rel >= 0x140ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ee30 size=16 callers=0 calls=0
*/
void sub_140ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ee30ULL || rel >= 0x140ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ee40 size=16 callers=0 calls=0
*/
void sub_140ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ee40ULL || rel >= 0x140ee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ee50 size=208 callers=0 calls=0
*/
void sub_140ee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ee50ULL || rel >= 0x140ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ef20 size=16 callers=0 calls=0
*/
void sub_140ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ef20ULL || rel >= 0x140ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ef30 size=16 callers=0 calls=0
*/
void sub_140ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ef30ULL || rel >= 0x140ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ef40 size=16 callers=0 calls=0
*/
void sub_140ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ef40ULL || rel >= 0x140ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ef50 size=16 callers=0 calls=0
*/
void sub_140ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ef50ULL || rel >= 0x140ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ef60 size=16 callers=0 calls=0
*/
void sub_140ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ef60ULL || rel >= 0x140ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ef70 size=16 callers=0 calls=0
*/
void sub_140ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ef70ULL || rel >= 0x140ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ef80 size=16 callers=0 calls=0
*/
void sub_140ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ef80ULL || rel >= 0x140ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140ef90 size=16 callers=0 calls=0
*/
void sub_140ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140ef90ULL || rel >= 0x140efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140efa0 size=240 callers=1 calls=2
   calls: sub_130b1d0, sub_e7c210
*/
void sub_140efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140efa0ULL || rel >= 0x140f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140f090 size=304 callers=23 calls=0
*/
void sub_140f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140f090ULL || rel >= 0x140f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140f1c0 size=288 callers=1 calls=2
   calls: sub_140f2e0, sub_e809c0
*/
void sub_140f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140f1c0ULL || rel >= 0x140f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140f2e0 size=528 callers=1 calls=3
   calls: sub_140fc80, sub_790490, sub_e7fe20
*/
void sub_140f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140f2e0ULL || rel >= 0x140f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140f4f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_140f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140f4f0ULL || rel >= 0x140f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140f630 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_140f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140f630ULL || rel >= 0x140f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140f780 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_140f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140f780ULL || rel >= 0x140f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140f8c0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_140f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140f8c0ULL || rel >= 0x140fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140fa00 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_140fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140fa00ULL || rel >= 0x140fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140fb40 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_140fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140fb40ULL || rel >= 0x140fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0140fc80 size=2096 callers=1 calls=3
   calls: anonymous_2, sub_130b1d0, sub_1367890
*/
void sub_140fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140fc80ULL || rel >= 0x14104b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014104b0 size=224 callers=0 calls=6
   calls: sub_130b1d0, sub_1410590, sub_1410a30, sub_1410d50, sub_5cfad0, sub_e7ea90
*/
void sub_14104b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14104b0ULL || rel >= 0x1410590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01410590 size=1184 callers=1 calls=3
   calls: sub_14ea4f0, sub_67d450, sub_eb7b00
*/
void sub_1410590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1410590ULL || rel >= 0x1410a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01410a30 size=800 callers=1 calls=8
   calls: sub_12b7860, sub_14e1a00, sub_14edac0, sub_14f1860, sub_14f1870, sub_14f1ef0, sub_7a4ba0, sub_e84250
*/
void sub_1410a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1410a30ULL || rel >= 0x1410d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01410d50 size=736 callers=1 calls=2
   calls: sub_14e1a00, sub_7a3c20
*/
void sub_1410d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1410d50ULL || rel >= 0x1411030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01411030 size=16 callers=1 calls=0
*/
void sub_1411030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1411030ULL || rel >= 0x1411040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01411040 size=16 callers=3 calls=0
*/
void sub_1411040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1411040ULL || rel >= 0x1411050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01411050 size=256 callers=0 calls=1
   calls: sub_5cfad0
*/
void sub_1411050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1411050ULL || rel >= 0x1411150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01411150 size=80 callers=1 calls=2
   calls: sub_14eea30, sub_e84250
*/
void sub_1411150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1411150ULL || rel >= 0x14111a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014111a0 size=512 callers=0 calls=2
   calls: sub_e83430, sub_e83850
   ref: anime_L_option_button_%02d_L_option_slider_00_setting_off_to_on
   ref: anime_L_option_button_%02d_L_option_slider_00_setting_on_to_off
*/
void anime_L_option_button__02d_L_option_slider_00_setting_on(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14111a0ULL || rel >= 0x14113a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014113a0 size=64 callers=3 calls=2
   calls: sub_14eea30, sub_e84250
*/
void sub_14113a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14113a0ULL || rel >= 0x14113e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014113e0 size=2736 callers=0 calls=7
   calls: sub_130ac30, sub_14ac040, sub_14ac370, sub_67d450, sub_e83430, sub_e83870, sub_e83930
   ref: anime_L_option_button_%02d_contents_pattern
   ref: pane_L_option_button_%02d_T_option_heading_00
   ref: anime_L_option_button_%02d_L_option_slider_00_control_slider
   ref: anime_L_option_button_%02d_text_color_00
   ref: anime_L_option_button_%02d_text_color_01
   ref: pane_L_option_button_%02d_T_option_button_00
   ref: pane_L_option_button_%02d_T_option_heading_01
   ref: pane_L_option_button_%02d_T_option_heading_02
*/
void anime_L_option_button__02d_text_color_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14113e0ULL || rel >= 0x1411e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01411e90 size=16 callers=0 calls=0
*/
void sub_1411e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1411e90ULL || rel >= 0x1411ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01411ea0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/option/bin/option_top_00_lyt.bin
   ref: bin/appli/option/bin/uikit_option_top_00.bin
*/
void uikit_option_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1411ea0ULL || rel >= 0x1412080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412080 size=176 callers=1 calls=5
   calls: sub_14aad40, sub_1500c40, sub_e80580, sub_e807f0, sub_e84250
*/
void sub_1412080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412080ULL || rel >= 0x1412130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412130 size=80 callers=3 calls=1
   calls: sub_14aad40
*/
void sub_1412130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412130ULL || rel >= 0x1412180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412180 size=64 callers=0 calls=1
   calls: sub_1500c90
*/
void sub_1412180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412180ULL || rel >= 0x14121c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014121c0 size=48 callers=0 calls=1
   calls: sub_e82ef0
*/
void sub_14121c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14121c0ULL || rel >= 0x14121f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014121f0 size=128 callers=1 calls=3
   calls: sub_1502120, sub_5cfad0, sub_e833a0
   ref: anime_in
   ref: anime_keep
*/
void anime_keep_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14121f0ULL || rel >= 0x1412270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412270 size=144 callers=1 calls=4
   calls: sub_14aad40, sub_1502120, sub_5cfad0, sub_e833a0
   ref: anime_out
*/
void anime_out_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412270ULL || rel >= 0x1412300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01412300 size=192 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_1412300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1412300ULL || rel >= 0x14123c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014123c0 size=272 callers=0 calls=0
*/
void sub_14123c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14123c0ULL || rel >= 0x14124d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

