/* main functions 0127bed0..01291ae0 (156 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0127bed0 size=16 callers=0 calls=0
*/
void sub_127bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127bed0ULL || rel >= 0x127bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127bee0 size=16 callers=0 calls=0
*/
void sub_127bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127bee0ULL || rel >= 0x127bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127bef0 size=16 callers=0 calls=0
*/
void sub_127bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127bef0ULL || rel >= 0x127bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127bf00 size=304 callers=0 calls=0
*/
void sub_127bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127bf00ULL || rel >= 0x127c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127c030 size=304 callers=0 calls=4
   calls: sub_1127d00, sub_12635f0, sub_5cf8e0, sub_5cf8f0
*/
void sub_127c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c030ULL || rel >= 0x127c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127c160 size=16 callers=0 calls=0
*/
void sub_127c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c160ULL || rel >= 0x127c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127c170 size=16 callers=0 calls=0
*/
void sub_127c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c170ULL || rel >= 0x127c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127c180 size=16 callers=0 calls=0
*/
void sub_127c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c180ULL || rel >= 0x127c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127c190 size=160 callers=0 calls=0
*/
void sub_127c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c190ULL || rel >= 0x127c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127c230 size=192 callers=0 calls=3
   calls: msg_pokecamp_optionbar_decide, sub_125de00, sub_127d050
*/
void sub_127c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c230ULL || rel >= 0x127c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127c2f0 size=1664 callers=0 calls=18
   calls: sub_1127d00, sub_1127fc0, sub_125a0f0, sub_125de00, sub_1263070, sub_12630d0, sub_1263340, sub_12633f0, sub_12635b0, sub_1263640, sub_1263a40, sub_127c970
   ... +6 more
*/
void sub_127c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c2f0ULL || rel >= 0x127c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127c970 size=752 callers=1 calls=0
*/
void sub_127c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c970ULL || rel >= 0x127cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cc60 size=352 callers=1 calls=5
   calls: sub_125a0f0, sub_125de00, sub_1263300, sub_1313580, sub_13149a0
*/
void sub_127cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cc60ULL || rel >= 0x127cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cdc0 size=16 callers=0 calls=0
*/
void sub_127cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cdc0ULL || rel >= 0x127cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cdd0 size=208 callers=0 calls=0
*/
void sub_127cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cdd0ULL || rel >= 0x127cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cea0 size=16 callers=0 calls=0
*/
void sub_127cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cea0ULL || rel >= 0x127ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127ceb0 size=16 callers=0 calls=0
*/
void sub_127ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ceb0ULL || rel >= 0x127cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cec0 size=16 callers=0 calls=0
*/
void sub_127cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cec0ULL || rel >= 0x127ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127ced0 size=16 callers=0 calls=0
*/
void sub_127ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ced0ULL || rel >= 0x127cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cee0 size=16 callers=0 calls=0
*/
void sub_127cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cee0ULL || rel >= 0x127cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cef0 size=16 callers=0 calls=0
*/
void sub_127cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cef0ULL || rel >= 0x127cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cf00 size=16 callers=0 calls=0
*/
void sub_127cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cf00ULL || rel >= 0x127cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cf10 size=16 callers=0 calls=0
*/
void sub_127cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cf10ULL || rel >= 0x127cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127cf20 size=304 callers=0 calls=0
*/
void sub_127cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127cf20ULL || rel >= 0x127d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d050 size=352 callers=2 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_127d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d050ULL || rel >= 0x127d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d1b0 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_127d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d1b0ULL || rel >= 0x127d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d310 size=336 callers=0 calls=4
   calls: sub_1127d00, sub_12635f0, sub_5cf8e0, sub_5cf8f0
*/
void sub_127d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d310ULL || rel >= 0x127d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d460 size=16 callers=0 calls=0
*/
void sub_127d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d460ULL || rel >= 0x127d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d470 size=16 callers=0 calls=0
*/
void sub_127d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d470ULL || rel >= 0x127d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d480 size=16 callers=0 calls=0
*/
void sub_127d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d480ULL || rel >= 0x127d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d490 size=16 callers=0 calls=0
*/
void sub_127d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d490ULL || rel >= 0x127d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d4a0 size=16 callers=0 calls=0
*/
void sub_127d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d4a0ULL || rel >= 0x127d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d4b0 size=32 callers=0 calls=0
*/
void sub_127d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d4b0ULL || rel >= 0x127d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d4d0 size=32 callers=0 calls=0
*/
void sub_127d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d4d0ULL || rel >= 0x127d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d4f0 size=32 callers=0 calls=0
*/
void sub_127d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d4f0ULL || rel >= 0x127d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d510 size=16 callers=0 calls=0
*/
void sub_127d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d510ULL || rel >= 0x127d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d520 size=16 callers=0 calls=0
*/
void sub_127d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d520ULL || rel >= 0x127d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d530 size=16 callers=0 calls=0
*/
void sub_127d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d530ULL || rel >= 0x127d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d540 size=208 callers=0 calls=0
*/
void sub_127d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d540ULL || rel >= 0x127d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d610 size=16 callers=0 calls=0
*/
void sub_127d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d610ULL || rel >= 0x127d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d620 size=592 callers=0 calls=7
   calls: sub_1179ec0, sub_12446d0, sub_125b840, sub_125de00, sub_1278500, sub_127da30, sub_127db90
*/
void sub_127d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d620ULL || rel >= 0x127d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d870 size=16 callers=0 calls=0
*/
void sub_127d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d870ULL || rel >= 0x127d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d880 size=16 callers=0 calls=0
*/
void sub_127d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d880ULL || rel >= 0x127d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d890 size=16 callers=0 calls=0
*/
void sub_127d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d890ULL || rel >= 0x127d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d8a0 size=16 callers=0 calls=0
*/
void sub_127d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d8a0ULL || rel >= 0x127d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d8b0 size=16 callers=0 calls=0
*/
void sub_127d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d8b0ULL || rel >= 0x127d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d8c0 size=16 callers=0 calls=0
*/
void sub_127d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d8c0ULL || rel >= 0x127d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d8d0 size=16 callers=0 calls=0
*/
void sub_127d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d8d0ULL || rel >= 0x127d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d8e0 size=16 callers=0 calls=0
*/
void sub_127d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d8e0ULL || rel >= 0x127d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d8f0 size=16 callers=0 calls=0
*/
void sub_127d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d8f0ULL || rel >= 0x127d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127d900 size=304 callers=0 calls=0
*/
void sub_127d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d900ULL || rel >= 0x127da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127da30 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_127da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127da30ULL || rel >= 0x127db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127db90 size=352 callers=5 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_127db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127db90ULL || rel >= 0x127dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127dcf0 size=160 callers=0 calls=0
*/
void sub_127dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127dcf0ULL || rel >= 0x127dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127dd90 size=128 callers=0 calls=4
   calls: matching_status_2, sub_1269810, sub_127de10, sub_127df30
*/
void sub_127dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127dd90ULL || rel >= 0x127de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127de10 size=288 callers=4 calls=1
   calls: sub_126ab20
*/
void sub_127de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127de10ULL || rel >= 0x127df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127df30 size=272 callers=2 calls=1
   calls: sub_126ab20
*/
void sub_127df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127df30ULL || rel >= 0x127e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e040 size=16 callers=0 calls=0
*/
void sub_127e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e040ULL || rel >= 0x127e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e050 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_127e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e050ULL || rel >= 0x127e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e0c0 size=16 callers=0 calls=0
*/
void sub_127e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e0c0ULL || rel >= 0x127e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e0d0 size=16 callers=0 calls=0
*/
void sub_127e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e0d0ULL || rel >= 0x127e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e0e0 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_127e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e0e0ULL || rel >= 0x127e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e150 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_127e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e150ULL || rel >= 0x127e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e1c0 size=16 callers=0 calls=0
*/
void sub_127e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e1c0ULL || rel >= 0x127e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e1d0 size=16 callers=0 calls=0
*/
void sub_127e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e1d0ULL || rel >= 0x127e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e1e0 size=336 callers=0 calls=0
*/
void sub_127e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e1e0ULL || rel >= 0x127e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e330 size=352 callers=2 calls=0
*/
void sub_127e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e330ULL || rel >= 0x127e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e490 size=800 callers=0 calls=3
   calls: sub_1269900, sub_126abd0, sub_126adb0
*/
void sub_127e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e490ULL || rel >= 0x127e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e7b0 size=96 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_127e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e7b0ULL || rel >= 0x127e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e810 size=48 callers=0 calls=1
   calls: sub_126ac90
*/
void sub_127e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e810ULL || rel >= 0x127e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e840 size=320 callers=0 calls=0
*/
void sub_127e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e840ULL || rel >= 0x127e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127e980 size=320 callers=0 calls=0
*/
void sub_127e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127e980ULL || rel >= 0x127eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127eac0 size=32 callers=0 calls=1
   calls: sub_127e330
*/
void sub_127eac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127eac0ULL || rel >= 0x127eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127eae0 size=32 callers=0 calls=1
   calls: sub_127e330
*/
void sub_127eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127eae0ULL || rel >= 0x127eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127eb00 size=320 callers=0 calls=0
*/
void sub_127eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127eb00ULL || rel >= 0x127ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127ec40 size=320 callers=0 calls=0
*/
void sub_127ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ec40ULL || rel >= 0x127ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127ed80 size=464 callers=0 calls=9
   calls: sub_1127d00, sub_1269880, sub_126aca0, sub_126ad50, sub_127de10, sub_127ef60, sub_127f080, sub_5cf8e0, sub_5cf8f0
*/
void sub_127ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ed80ULL || rel >= 0x127ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127ef50 size=16 callers=0 calls=0
*/
void sub_127ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ef50ULL || rel >= 0x127ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127ef60 size=288 callers=3 calls=1
   calls: sub_126ab20
*/
void sub_127ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ef60ULL || rel >= 0x127f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f080 size=240 callers=2 calls=1
   calls: sub_126ab20
*/
void sub_127f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f080ULL || rel >= 0x127f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f170 size=336 callers=0 calls=0
*/
void sub_127f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f170ULL || rel >= 0x127f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f2c0 size=352 callers=2 calls=0
*/
void sub_127f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f2c0ULL || rel >= 0x127f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f420 size=400 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_127f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f420ULL || rel >= 0x127f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f5b0 size=96 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_127f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f5b0ULL || rel >= 0x127f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f610 size=320 callers=0 calls=0
*/
void sub_127f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f610ULL || rel >= 0x127f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f750 size=320 callers=0 calls=0
*/
void sub_127f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f750ULL || rel >= 0x127f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f890 size=32 callers=0 calls=1
   calls: sub_127f2c0
*/
void sub_127f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f890ULL || rel >= 0x127f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f8b0 size=32 callers=0 calls=1
   calls: sub_127f2c0
*/
void sub_127f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f8b0ULL || rel >= 0x127f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127f8d0 size=320 callers=0 calls=0
*/
void sub_127f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127f8d0ULL || rel >= 0x127fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127fa10 size=320 callers=0 calls=0
*/
void sub_127fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127fa10ULL || rel >= 0x127fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127fb50 size=112 callers=0 calls=0
*/
void sub_127fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127fb50ULL || rel >= 0x127fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127fbc0 size=16 callers=0 calls=0
*/
void sub_127fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127fbc0ULL || rel >= 0x127fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127fbd0 size=16 callers=0 calls=0
*/
void sub_127fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127fbd0ULL || rel >= 0x127fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127fbe0 size=16 callers=0 calls=0
*/
void sub_127fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127fbe0ULL || rel >= 0x127fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127fbf0 size=336 callers=0 calls=0
*/
void sub_127fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127fbf0ULL || rel >= 0x127fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127fd40 size=352 callers=2 calls=0
*/
void sub_127fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127fd40ULL || rel >= 0x127fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0127fea0 size=848 callers=0 calls=5
   calls: anime_in_6, sub_1269900, sub_126abd0, sub_126adb0, sub_126b5b0
*/
void sub_127fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127fea0ULL || rel >= 0x12801f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012801f0 size=96 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_12801f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12801f0ULL || rel >= 0x1280250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280250 size=320 callers=0 calls=0
*/
void sub_1280250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280250ULL || rel >= 0x1280390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280390 size=320 callers=0 calls=0
*/
void sub_1280390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280390ULL || rel >= 0x12804d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012804d0 size=32 callers=0 calls=1
   calls: sub_127fd40
*/
void sub_12804d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12804d0ULL || rel >= 0x12804f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012804f0 size=32 callers=0 calls=1
   calls: sub_127fd40
*/
void sub_12804f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12804f0ULL || rel >= 0x1280510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280510 size=320 callers=0 calls=0
*/
void sub_1280510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280510ULL || rel >= 0x1280650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280650 size=320 callers=0 calls=0
*/
void sub_1280650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280650ULL || rel >= 0x1280790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280790 size=528 callers=0 calls=5
   calls: sub_1127d00, sub_126ab20, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1280790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280790ULL || rel >= 0x12809a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012809a0 size=16 callers=0 calls=0
*/
void sub_12809a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12809a0ULL || rel >= 0x12809b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012809b0 size=336 callers=0 calls=0
*/
void sub_12809b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12809b0ULL || rel >= 0x1280b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280b00 size=352 callers=2 calls=0
*/
void sub_1280b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280b00ULL || rel >= 0x1280c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280c60 size=480 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_1280c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280c60ULL || rel >= 0x1280e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280e40 size=96 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_1280e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280e40ULL || rel >= 0x1280ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280ea0 size=320 callers=0 calls=0
*/
void sub_1280ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280ea0ULL || rel >= 0x1280fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01280fe0 size=320 callers=0 calls=0
*/
void sub_1280fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1280fe0ULL || rel >= 0x1281120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281120 size=32 callers=0 calls=1
   calls: sub_1280b00
*/
void sub_1281120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281120ULL || rel >= 0x1281140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281140 size=32 callers=0 calls=1
   calls: sub_1280b00
*/
void sub_1281140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281140ULL || rel >= 0x1281160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281160 size=320 callers=0 calls=0
*/
void sub_1281160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281160ULL || rel >= 0x12812a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012812a0 size=320 callers=0 calls=0
*/
void sub_12812a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12812a0ULL || rel >= 0x12813e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012813e0 size=304 callers=0 calls=5
   calls: sub_1127d00, sub_126aca0, sub_1281520, sub_5cf8e0, sub_5cf8f0
*/
void sub_12813e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12813e0ULL || rel >= 0x1281510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281510 size=16 callers=0 calls=0
*/
void sub_1281510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281510ULL || rel >= 0x1281520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281520 size=288 callers=2 calls=1
   calls: sub_126ab20
*/
void sub_1281520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281520ULL || rel >= 0x1281640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281640 size=336 callers=0 calls=0
*/
void sub_1281640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281640ULL || rel >= 0x1281790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281790 size=352 callers=2 calls=0
*/
void sub_1281790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281790ULL || rel >= 0x12818f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012818f0 size=48 callers=0 calls=2
   calls: sub_126abd0, sub_126aca0
*/
void sub_12818f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12818f0ULL || rel >= 0x1281920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281920 size=512 callers=0 calls=4
   calls: sub_126aca0, sub_126adb0, sub_126b1f0, sub_1278500
*/
void sub_1281920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281920ULL || rel >= 0x1281b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281b20 size=80 callers=0 calls=3
   calls: anime_out_9, sub_126ac30, sub_126b5b0
*/
void sub_1281b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281b20ULL || rel >= 0x1281b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281b70 size=320 callers=0 calls=0
*/
void sub_1281b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281b70ULL || rel >= 0x1281cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281cb0 size=320 callers=0 calls=0
*/
void sub_1281cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281cb0ULL || rel >= 0x1281df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281df0 size=32 callers=0 calls=1
   calls: sub_1281790
*/
void sub_1281df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281df0ULL || rel >= 0x1281e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281e10 size=32 callers=0 calls=1
   calls: sub_1281790
*/
void sub_1281e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281e10ULL || rel >= 0x1281e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281e30 size=320 callers=0 calls=0
*/
void sub_1281e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281e30ULL || rel >= 0x1281f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01281f70 size=320 callers=0 calls=0
*/
void sub_1281f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1281f70ULL || rel >= 0x12820b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012820b0 size=256 callers=0 calls=4
   calls: sub_1127d00, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12820b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12820b0ULL || rel >= 0x12821b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012821b0 size=16 callers=0 calls=0
*/
void sub_12821b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12821b0ULL || rel >= 0x12821c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012821c0 size=16 callers=0 calls=0
*/
void sub_12821c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12821c0ULL || rel >= 0x12821d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012821d0 size=16 callers=0 calls=0
*/
void sub_12821d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12821d0ULL || rel >= 0x12821e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012821e0 size=16 callers=0 calls=0
*/
void sub_12821e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12821e0ULL || rel >= 0x12821f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012821f0 size=16 callers=0 calls=0
*/
void sub_12821f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12821f0ULL || rel >= 0x1282200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282200 size=304 callers=0 calls=5
   calls: sub_1127d00, sub_126aca0, sub_127ef60, sub_5cf8e0, sub_5cf8f0
*/
void sub_1282200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282200ULL || rel >= 0x1282330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282330 size=16 callers=0 calls=0
*/
void sub_1282330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282330ULL || rel >= 0x1282340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282340 size=16 callers=0 calls=0
*/
void sub_1282340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282340ULL || rel >= 0x1282350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282350 size=16 callers=0 calls=0
*/
void sub_1282350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282350ULL || rel >= 0x1282360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282360 size=16 callers=0 calls=0
*/
void sub_1282360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282360ULL || rel >= 0x1282370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282370 size=16 callers=0 calls=0
*/
void sub_1282370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282370ULL || rel >= 0x1282380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282380 size=16 callers=0 calls=0
*/
void sub_1282380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282380ULL || rel >= 0x1282390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282390 size=16 callers=0 calls=0
*/
void sub_1282390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282390ULL || rel >= 0x12823a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012823a0 size=16 callers=0 calls=0
*/
void sub_12823a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12823a0ULL || rel >= 0x12823b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012823b0 size=16 callers=0 calls=0
*/
void sub_12823b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12823b0ULL || rel >= 0x12823c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012823c0 size=16 callers=0 calls=0
*/
void sub_12823c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12823c0ULL || rel >= 0x12823d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012823d0 size=16 callers=0 calls=0
*/
void sub_12823d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12823d0ULL || rel >= 0x12823e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012823e0 size=16 callers=0 calls=0
*/
void sub_12823e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12823e0ULL || rel >= 0x12823f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012823f0 size=16 callers=0 calls=0
*/
void sub_12823f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12823f0ULL || rel >= 0x1282400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282400 size=528 callers=0 calls=5
   calls: sub_1127d00, sub_126ab20, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1282400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282400ULL || rel >= 0x1282610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282610 size=16 callers=0 calls=0
*/
void sub_1282610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282610ULL || rel >= 0x1282620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282620 size=336 callers=0 calls=0
*/
void sub_1282620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282620ULL || rel >= 0x1282770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282770 size=352 callers=2 calls=0
*/
void sub_1282770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282770ULL || rel >= 0x12828d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012828d0 size=480 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_12828d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12828d0ULL || rel >= 0x1282ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282ab0 size=96 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_1282ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282ab0ULL || rel >= 0x1282b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282b10 size=320 callers=0 calls=0
*/
void sub_1282b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282b10ULL || rel >= 0x1282c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282c50 size=320 callers=0 calls=0
*/
void sub_1282c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282c50ULL || rel >= 0x1282d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282d90 size=32 callers=0 calls=1
   calls: sub_1282770
*/
void sub_1282d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282d90ULL || rel >= 0x1282db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282db0 size=32 callers=0 calls=1
   calls: sub_1282770
*/
void sub_1282db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282db0ULL || rel >= 0x1282dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282dd0 size=320 callers=0 calls=0
*/
void sub_1282dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282dd0ULL || rel >= 0x1282f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01282f10 size=320 callers=0 calls=0
*/
void sub_1282f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1282f10ULL || rel >= 0x1283050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283050 size=304 callers=0 calls=5
   calls: sub_1127d00, sub_126aca0, sub_1283190, sub_5cf8e0, sub_5cf8f0
*/
void sub_1283050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283050ULL || rel >= 0x1283180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283180 size=16 callers=0 calls=0
*/
void sub_1283180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283180ULL || rel >= 0x1283190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283190 size=288 callers=3 calls=1
   calls: sub_126ab20
*/
void sub_1283190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283190ULL || rel >= 0x12832b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012832b0 size=336 callers=0 calls=0
*/
void sub_12832b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12832b0ULL || rel >= 0x1283400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283400 size=352 callers=2 calls=0
*/
void sub_1283400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283400ULL || rel >= 0x1283560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283560 size=48 callers=0 calls=2
   calls: sub_126abd0, sub_126aca0
*/
void sub_1283560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283560ULL || rel >= 0x1283590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283590 size=16 callers=0 calls=0
*/
void sub_1283590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283590ULL || rel >= 0x12835a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012835a0 size=80 callers=0 calls=3
   calls: anime_out_9, sub_126ac30, sub_126b5b0
*/
void sub_12835a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12835a0ULL || rel >= 0x12835f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012835f0 size=320 callers=0 calls=0
*/
void sub_12835f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12835f0ULL || rel >= 0x1283730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283730 size=320 callers=0 calls=0
*/
void sub_1283730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283730ULL || rel >= 0x1283870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283870 size=32 callers=0 calls=1
   calls: sub_1283400
*/
void sub_1283870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283870ULL || rel >= 0x1283890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283890 size=32 callers=0 calls=1
   calls: sub_1283400
*/
void sub_1283890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283890ULL || rel >= 0x12838b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012838b0 size=320 callers=0 calls=0
*/
void sub_12838b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12838b0ULL || rel >= 0x12839f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012839f0 size=320 callers=0 calls=0
*/
void sub_12839f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12839f0ULL || rel >= 0x1283b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283b30 size=16 callers=0 calls=0
*/
void sub_1283b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283b30ULL || rel >= 0x1283b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283b40 size=16 callers=0 calls=0
*/
void sub_1283b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283b40ULL || rel >= 0x1283b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283b50 size=304 callers=0 calls=5
   calls: sub_1127d00, sub_126aca0, sub_127ef60, sub_5cf8e0, sub_5cf8f0
*/
void sub_1283b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283b50ULL || rel >= 0x1283c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283c80 size=16 callers=0 calls=0
*/
void sub_1283c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283c80ULL || rel >= 0x1283c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283c90 size=16 callers=0 calls=0
*/
void sub_1283c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283c90ULL || rel >= 0x1283ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283ca0 size=16 callers=0 calls=0
*/
void sub_1283ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283ca0ULL || rel >= 0x1283cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283cb0 size=16 callers=0 calls=0
*/
void sub_1283cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283cb0ULL || rel >= 0x1283cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283cc0 size=16 callers=0 calls=0
*/
void sub_1283cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283cc0ULL || rel >= 0x1283cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283cd0 size=16 callers=0 calls=0
*/
void sub_1283cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283cd0ULL || rel >= 0x1283ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283ce0 size=16 callers=0 calls=0
*/
void sub_1283ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283ce0ULL || rel >= 0x1283cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283cf0 size=16 callers=0 calls=0
*/
void sub_1283cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283cf0ULL || rel >= 0x1283d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283d00 size=16 callers=0 calls=0
*/
void sub_1283d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283d00ULL || rel >= 0x1283d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283d10 size=16 callers=0 calls=0
*/
void sub_1283d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283d10ULL || rel >= 0x1283d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283d20 size=16 callers=0 calls=0
*/
void sub_1283d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283d20ULL || rel >= 0x1283d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283d30 size=16 callers=0 calls=0
*/
void sub_1283d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283d30ULL || rel >= 0x1283d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283d40 size=16 callers=0 calls=0
*/
void sub_1283d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283d40ULL || rel >= 0x1283d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283d50 size=16 callers=0 calls=0
*/
void sub_1283d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283d50ULL || rel >= 0x1283d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283d60 size=16 callers=0 calls=0
*/
void sub_1283d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283d60ULL || rel >= 0x1283d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283d70 size=304 callers=0 calls=5
   calls: sub_1127d00, sub_126aca0, sub_1283190, sub_5cf8e0, sub_5cf8f0
*/
void sub_1283d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283d70ULL || rel >= 0x1283ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283ea0 size=16 callers=0 calls=0
*/
void sub_1283ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283ea0ULL || rel >= 0x1283eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283eb0 size=16 callers=0 calls=0
*/
void sub_1283eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283eb0ULL || rel >= 0x1283ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283ec0 size=16 callers=0 calls=0
*/
void sub_1283ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283ec0ULL || rel >= 0x1283ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01283ed0 size=336 callers=0 calls=0
*/
void sub_1283ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1283ed0ULL || rel >= 0x1284020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284020 size=352 callers=2 calls=0
*/
void sub_1284020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284020ULL || rel >= 0x1284180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284180 size=800 callers=0 calls=3
   calls: sub_1269900, sub_126abd0, sub_126adb0
*/
void sub_1284180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284180ULL || rel >= 0x12844a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012844a0 size=544 callers=0 calls=11
   calls: sub_1127d00, sub_125a0f0, sub_12639a0, sub_1266170, sub_1269810, sub_126ac90, sub_126aca0, sub_126b1f0, sub_127de10, sub_5cf8e0, sub_5cf8f0
*/
void sub_12844a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12844a0ULL || rel >= 0x12846c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012846c0 size=368 callers=0 calls=5
   calls: sub_1127d00, sub_126ac90, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12846c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12846c0ULL || rel >= 0x1284830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284830 size=320 callers=0 calls=0
*/
void sub_1284830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284830ULL || rel >= 0x1284970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284970 size=320 callers=0 calls=0
*/
void sub_1284970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284970ULL || rel >= 0x1284ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284ab0 size=32 callers=0 calls=1
   calls: sub_1284020
*/
void sub_1284ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284ab0ULL || rel >= 0x1284ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284ad0 size=32 callers=0 calls=1
   calls: sub_1284020
*/
void sub_1284ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284ad0ULL || rel >= 0x1284af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284af0 size=320 callers=0 calls=0
*/
void sub_1284af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284af0ULL || rel >= 0x1284c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284c30 size=320 callers=0 calls=0
*/
void sub_1284c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284c30ULL || rel >= 0x1284d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284d70 size=464 callers=0 calls=9
   calls: sub_1127d00, sub_1269880, sub_126aca0, sub_126ad50, sub_127df30, sub_127f080, sub_1281520, sub_5cf8e0, sub_5cf8f0
*/
void sub_1284d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284d70ULL || rel >= 0x1284f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284f40 size=16 callers=0 calls=0
*/
void sub_1284f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284f40ULL || rel >= 0x1284f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284f50 size=16 callers=0 calls=0
*/
void sub_1284f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284f50ULL || rel >= 0x1284f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284f60 size=16 callers=0 calls=0
*/
void sub_1284f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284f60ULL || rel >= 0x1284f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284f70 size=16 callers=0 calls=0
*/
void sub_1284f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284f70ULL || rel >= 0x1284f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284f80 size=16 callers=0 calls=0
*/
void sub_1284f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284f80ULL || rel >= 0x1284f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284f90 size=16 callers=0 calls=0
*/
void sub_1284f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284f90ULL || rel >= 0x1284fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284fa0 size=16 callers=0 calls=0
*/
void sub_1284fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284fa0ULL || rel >= 0x1284fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284fb0 size=16 callers=0 calls=0
*/
void sub_1284fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284fb0ULL || rel >= 0x1284fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284fc0 size=16 callers=0 calls=0
*/
void sub_1284fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284fc0ULL || rel >= 0x1284fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284fd0 size=16 callers=0 calls=0
*/
void sub_1284fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284fd0ULL || rel >= 0x1284fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284fe0 size=16 callers=0 calls=0
*/
void sub_1284fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284fe0ULL || rel >= 0x1284ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01284ff0 size=304 callers=0 calls=5
   calls: sub_1127d00, sub_126aca0, sub_1283190, sub_5cf8e0, sub_5cf8f0
*/
void sub_1284ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284ff0ULL || rel >= 0x1285120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285120 size=16 callers=0 calls=0
*/
void sub_1285120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285120ULL || rel >= 0x1285130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285130 size=16 callers=0 calls=0
*/
void sub_1285130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285130ULL || rel >= 0x1285140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285140 size=16 callers=0 calls=0
*/
void sub_1285140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285140ULL || rel >= 0x1285150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285150 size=160 callers=0 calls=0
*/
void sub_1285150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285150ULL || rel >= 0x12851f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012851f0 size=944 callers=0 calls=12
   calls: sub_1127fc0, sub_125de00, sub_126ad50, sub_126c8d0, sub_1278500, sub_12855a0, sub_12856c0, sub_12857e0, sub_128c0e0, sub_5cf8e0, sub_5cf8f0, sub_c39c40
   ref: matching_status
*/
void matching_status_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12851f0ULL || rel >= 0x12855a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012855a0 size=288 callers=9 calls=1
   calls: sub_126ab20
*/
void sub_12855a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12855a0ULL || rel >= 0x12856c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012856c0 size=288 callers=11 calls=1
   calls: sub_126ab20
*/
void sub_12856c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12856c0ULL || rel >= 0x12857e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012857e0 size=288 callers=5 calls=1
   calls: sub_126ab20
*/
void sub_12857e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12857e0ULL || rel >= 0x1285900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285900 size=96 callers=0 calls=0
*/
void sub_1285900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285900ULL || rel >= 0x1285960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285960 size=96 callers=0 calls=0
*/
void sub_1285960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285960ULL || rel >= 0x12859c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012859c0 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_12859c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12859c0ULL || rel >= 0x1285a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285a30 size=96 callers=0 calls=0
*/
void sub_1285a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285a30ULL || rel >= 0x1285a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285a90 size=96 callers=0 calls=0
*/
void sub_1285a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285a90ULL || rel >= 0x1285af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285af0 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_1285af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285af0ULL || rel >= 0x1285b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285b60 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_1285b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285b60ULL || rel >= 0x1285bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285bd0 size=96 callers=0 calls=0
*/
void sub_1285bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285bd0ULL || rel >= 0x1285c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285c30 size=96 callers=0 calls=0
*/
void sub_1285c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285c30ULL || rel >= 0x1285c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285c90 size=336 callers=0 calls=0
*/
void sub_1285c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285c90ULL || rel >= 0x1285de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285de0 size=352 callers=2 calls=0
*/
void sub_1285de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285de0ULL || rel >= 0x1285f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01285f40 size=896 callers=0 calls=3
   calls: sub_1269900, sub_126abd0, sub_126adb0
*/
void sub_1285f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285f40ULL || rel >= 0x12862c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012862c0 size=432 callers=0 calls=8
   calls: sub_1127fc0, sub_126aca0, sub_126b1f0, sub_1278500, sub_1288770, sub_12889b0, sub_5cf8e0, sub_5cf8f0
   ref: OnCookingRequestCanceled
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12862c0ULL || rel >= 0x1286470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286470 size=144 callers=0 calls=1
   calls: sub_126ac90
*/
void sub_1286470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286470ULL || rel >= 0x1286500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286500 size=32 callers=0 calls=0
*/
void sub_1286500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286500ULL || rel >= 0x1286520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286520 size=112 callers=0 calls=2
   calls: sub_1266170, sub_1288ad0
*/
void sub_1286520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286520ULL || rel >= 0x1286590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286590 size=112 callers=0 calls=2
   calls: sub_1266170, sub_1288890
*/
void sub_1286590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286590ULL || rel >= 0x1286600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286600 size=432 callers=0 calls=3
   calls: sub_126ab20, sub_12857e0, sub_1287db0
*/
void sub_1286600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286600ULL || rel >= 0x12867b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012867b0 size=320 callers=0 calls=0
*/
void sub_12867b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12867b0ULL || rel >= 0x12868f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012868f0 size=320 callers=0 calls=0
*/
void sub_12868f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12868f0ULL || rel >= 0x1286a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286a30 size=32 callers=0 calls=1
   calls: sub_1285de0
*/
void sub_1286a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286a30ULL || rel >= 0x1286a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286a50 size=32 callers=0 calls=1
   calls: sub_1285de0
*/
void sub_1286a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286a50ULL || rel >= 0x1286a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286a70 size=320 callers=0 calls=0
*/
void sub_1286a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286a70ULL || rel >= 0x1286bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286bb0 size=320 callers=0 calls=0
*/
void sub_1286bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286bb0ULL || rel >= 0x1286cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286cf0 size=16 callers=0 calls=0
*/
void sub_1286cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286cf0ULL || rel >= 0x1286d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286d00 size=16 callers=0 calls=0
*/
void sub_1286d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286d00ULL || rel >= 0x1286d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286d10 size=16 callers=0 calls=0
*/
void sub_1286d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286d10ULL || rel >= 0x1286d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286d20 size=416 callers=0 calls=9
   calls: sub_1127d00, sub_1269880, sub_126aca0, sub_126ad50, sub_12857e0, sub_1286ed0, sub_1287000, sub_5cf8e0, sub_5cf8f0
   ref: NoBerryMessage
*/
void NoBerryMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286d20ULL || rel >= 0x1286ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286ec0 size=16 callers=0 calls=0
*/
void sub_1286ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286ec0ULL || rel >= 0x1286ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01286ed0 size=304 callers=9 calls=4
   calls: sub_1127d00, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1286ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1286ed0ULL || rel >= 0x1287000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287000 size=288 callers=3 calls=1
   calls: sub_126ab20
*/
void sub_1287000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287000ULL || rel >= 0x1287120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287120 size=336 callers=0 calls=0
*/
void sub_1287120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287120ULL || rel >= 0x1287270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287270 size=352 callers=2 calls=0
*/
void sub_1287270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287270ULL || rel >= 0x12873d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012873d0 size=400 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_12873d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12873d0ULL || rel >= 0x1287560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287560 size=304 callers=0 calls=8
   calls: sub_126aca0, sub_126b1f0, sub_1278500, sub_12857e0, sub_1288770, sub_1288890, sub_12889b0, sub_1288ad0
   ref: OnCookingRequestCanceled
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287560ULL || rel >= 0x1287690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287690 size=320 callers=0 calls=0
*/
void sub_1287690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287690ULL || rel >= 0x12877d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012877d0 size=320 callers=0 calls=0
*/
void sub_12877d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12877d0ULL || rel >= 0x1287910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287910 size=32 callers=0 calls=1
   calls: sub_1287270
*/
void sub_1287910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287910ULL || rel >= 0x1287930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287930 size=32 callers=0 calls=1
   calls: sub_1287270
*/
void sub_1287930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287930ULL || rel >= 0x1287950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287950 size=320 callers=0 calls=0
*/
void sub_1287950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287950ULL || rel >= 0x1287a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287a90 size=320 callers=0 calls=0
*/
void sub_1287a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287a90ULL || rel >= 0x1287bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287bd0 size=160 callers=0 calls=2
   calls: sub_1287c80, sub_1287db0
   ref: OnMessageClosed
*/
void OnMessageClosed_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287bd0ULL || rel >= 0x1287c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287c70 size=16 callers=0 calls=0
*/
void sub_1287c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287c70ULL || rel >= 0x1287c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287c80 size=304 callers=4 calls=4
   calls: sub_1127d00, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1287c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287c80ULL || rel >= 0x1287db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287db0 size=288 callers=7 calls=1
   calls: sub_126ab20
*/
void sub_1287db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287db0ULL || rel >= 0x1287ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01287ed0 size=336 callers=0 calls=0
*/
void sub_1287ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1287ed0ULL || rel >= 0x1288020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288020 size=352 callers=2 calls=0
*/
void sub_1288020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288020ULL || rel >= 0x1288180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288180 size=48 callers=0 calls=2
   calls: sub_126abd0, sub_126aca0
*/
void sub_1288180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288180ULL || rel >= 0x12881b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012881b0 size=16 callers=0 calls=0
*/
void sub_12881b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12881b0ULL || rel >= 0x12881c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012881c0 size=80 callers=0 calls=3
   calls: anime_out_9, sub_126ac30, sub_126b5b0
*/
void sub_12881c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12881c0ULL || rel >= 0x1288210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288210 size=320 callers=0 calls=0
*/
void sub_1288210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288210ULL || rel >= 0x1288350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288350 size=320 callers=0 calls=0
*/
void sub_1288350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288350ULL || rel >= 0x1288490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288490 size=32 callers=0 calls=1
   calls: sub_1288020
*/
void sub_1288490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288490ULL || rel >= 0x12884b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012884b0 size=32 callers=0 calls=1
   calls: sub_1288020
*/
void sub_12884b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12884b0ULL || rel >= 0x12884d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012884d0 size=320 callers=0 calls=0
*/
void sub_12884d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12884d0ULL || rel >= 0x1288610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288610 size=320 callers=0 calls=0
*/
void sub_1288610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288610ULL || rel >= 0x1288750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288750 size=16 callers=0 calls=0
*/
void sub_1288750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288750ULL || rel >= 0x1288760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288760 size=16 callers=0 calls=0
*/
void sub_1288760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288760ULL || rel >= 0x1288770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288770 size=288 callers=6 calls=4
   calls: sub_1127fc0, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1288770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288770ULL || rel >= 0x1288890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288890 size=288 callers=4 calls=1
   calls: sub_126ab20
*/
void sub_1288890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288890ULL || rel >= 0x12889b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012889b0 size=288 callers=6 calls=4
   calls: sub_1127fc0, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12889b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12889b0ULL || rel >= 0x1288ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288ad0 size=288 callers=3 calls=1
   calls: sub_126ab20
*/
void sub_1288ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288ad0ULL || rel >= 0x1288bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288bf0 size=336 callers=0 calls=0
*/
void sub_1288bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288bf0ULL || rel >= 0x1288d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288d40 size=352 callers=2 calls=0
*/
void sub_1288d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288d40ULL || rel >= 0x1288ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01288ea0 size=480 callers=0 calls=7
   calls: anime_out_9, sub_125a0f0, sub_12639a0, sub_126abd0, sub_126aca0, sub_126adb0, sub_126b5b0
*/
void sub_1288ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1288ea0ULL || rel >= 0x1289080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289080 size=208 callers=0 calls=6
   calls: sub_125a0f0, sub_12639a0, sub_126aca0, sub_126b1f0, sub_1278500, sub_12855a0
*/
void sub_1289080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289080ULL || rel >= 0x1289150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289150 size=320 callers=0 calls=0
*/
void sub_1289150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289150ULL || rel >= 0x1289290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289290 size=320 callers=0 calls=0
*/
void sub_1289290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289290ULL || rel >= 0x12893d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012893d0 size=32 callers=0 calls=1
   calls: sub_1288d40
*/
void sub_12893d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12893d0ULL || rel >= 0x12893f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012893f0 size=32 callers=0 calls=1
   calls: sub_1288d40
*/
void sub_12893f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12893f0ULL || rel >= 0x1289410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289410 size=320 callers=0 calls=0
*/
void sub_1289410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289410ULL || rel >= 0x1289550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289550 size=320 callers=0 calls=0
*/
void sub_1289550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289550ULL || rel >= 0x1289690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289690 size=144 callers=0 calls=5
   calls: sub_126a9b0, sub_126ac90, sub_12856c0, sub_1287c80, sub_1287db0
   ref: OnMessageClosed
*/
void OnMessageClosed_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289690ULL || rel >= 0x1289720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289720 size=16 callers=0 calls=0
*/
void sub_1289720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289720ULL || rel >= 0x1289730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289730 size=16 callers=0 calls=0
*/
void sub_1289730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289730ULL || rel >= 0x1289740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289740 size=16 callers=0 calls=0
*/
void sub_1289740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289740ULL || rel >= 0x1289750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289750 size=336 callers=0 calls=0
*/
void sub_1289750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289750ULL || rel >= 0x12898a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012898a0 size=352 callers=2 calls=0
*/
void sub_12898a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12898a0ULL || rel >= 0x1289a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289a00 size=480 callers=0 calls=7
   calls: anime_out_9, sub_125a0f0, sub_12639a0, sub_126abd0, sub_126aca0, sub_126adb0, sub_126b5b0
*/
void sub_1289a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289a00ULL || rel >= 0x1289be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289be0 size=208 callers=0 calls=6
   calls: sub_125a0f0, sub_12639a0, sub_126aca0, sub_126b1f0, sub_1278500, sub_12855a0
*/
void sub_1289be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289be0ULL || rel >= 0x1289cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289cb0 size=320 callers=0 calls=0
*/
void sub_1289cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289cb0ULL || rel >= 0x1289df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289df0 size=320 callers=0 calls=0
*/
void sub_1289df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289df0ULL || rel >= 0x1289f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289f30 size=32 callers=0 calls=1
   calls: sub_12898a0
*/
void sub_1289f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289f30ULL || rel >= 0x1289f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289f50 size=32 callers=0 calls=1
   calls: sub_12898a0
*/
void sub_1289f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289f50ULL || rel >= 0x1289f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01289f70 size=320 callers=0 calls=0
*/
void sub_1289f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1289f70ULL || rel >= 0x128a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a0b0 size=320 callers=0 calls=0
*/
void sub_128a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a0b0ULL || rel >= 0x128a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a1f0 size=144 callers=0 calls=5
   calls: sub_126a9b0, sub_126ac90, sub_12856c0, sub_1287c80, sub_1287db0
   ref: OnMessageClosed
*/
void OnMessageClosed_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a1f0ULL || rel >= 0x128a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a280 size=16 callers=0 calls=0
*/
void sub_128a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a280ULL || rel >= 0x128a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a290 size=16 callers=0 calls=0
*/
void sub_128a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a290ULL || rel >= 0x128a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a2a0 size=16 callers=0 calls=0
*/
void sub_128a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a2a0ULL || rel >= 0x128a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a2b0 size=16 callers=0 calls=0
*/
void sub_128a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a2b0ULL || rel >= 0x128a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a2c0 size=16 callers=0 calls=0
*/
void sub_128a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a2c0ULL || rel >= 0x128a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a2d0 size=16 callers=0 calls=0
*/
void sub_128a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a2d0ULL || rel >= 0x128a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a2e0 size=16 callers=0 calls=0
*/
void sub_128a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a2e0ULL || rel >= 0x128a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a2f0 size=16 callers=0 calls=0
*/
void sub_128a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a2f0ULL || rel >= 0x128a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a300 size=16 callers=0 calls=0
*/
void sub_128a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a300ULL || rel >= 0x128a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a310 size=16 callers=0 calls=0
*/
void sub_128a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a310ULL || rel >= 0x128a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a320 size=16 callers=0 calls=0
*/
void sub_128a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a320ULL || rel >= 0x128a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a330 size=16 callers=0 calls=0
*/
void sub_128a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a330ULL || rel >= 0x128a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a340 size=16 callers=0 calls=0
*/
void sub_128a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a340ULL || rel >= 0x128a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a350 size=96 callers=0 calls=2
   calls: sub_1286ed0, sub_1287db0
   ref: OnQuitSelected
*/
void OnQuitSelected_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a350ULL || rel >= 0x128a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a3b0 size=16 callers=0 calls=0
*/
void sub_128a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a3b0ULL || rel >= 0x128a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a3c0 size=16 callers=0 calls=0
*/
void sub_128a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a3c0ULL || rel >= 0x128a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a3d0 size=16 callers=0 calls=0
*/
void sub_128a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a3d0ULL || rel >= 0x128a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a3e0 size=304 callers=0 calls=4
   calls: sub_1263300, sub_126ac90, sub_126c7a0, sub_13149a0
*/
void sub_128a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a3e0ULL || rel >= 0x128a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a510 size=16 callers=0 calls=0
*/
void sub_128a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a510ULL || rel >= 0x128a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a520 size=16 callers=0 calls=0
*/
void sub_128a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a520ULL || rel >= 0x128a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a530 size=16 callers=0 calls=0
*/
void sub_128a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a530ULL || rel >= 0x128a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a540 size=336 callers=0 calls=0
*/
void sub_128a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a540ULL || rel >= 0x128a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a690 size=352 callers=2 calls=0
*/
void sub_128a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a690ULL || rel >= 0x128a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128a7f0 size=784 callers=0 calls=5
   calls: anime_in_6, sub_1269900, sub_126abd0, sub_126adb0, sub_126b5b0
*/
void sub_128a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128a7f0ULL || rel >= 0x128ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ab00 size=432 callers=0 calls=8
   calls: sub_1127fc0, sub_126aca0, sub_126b1f0, sub_1278500, sub_1288770, sub_12889b0, sub_5cf8e0, sub_5cf8f0
   ref: OnCookingRequestCanceled
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ab00ULL || rel >= 0x128acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128acb0 size=192 callers=0 calls=6
   calls: sub_125a0f0, sub_1266170, sub_126a350, sub_126ac90, sub_126aca0, sub_128b440
*/
void sub_128acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128acb0ULL || rel >= 0x128ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ad70 size=160 callers=0 calls=4
   calls: sub_1266170, sub_126a350, sub_126ac90, sub_1288890
*/
void sub_128ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ad70ULL || rel >= 0x128ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ae10 size=320 callers=0 calls=0
*/
void sub_128ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ae10ULL || rel >= 0x128af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128af50 size=320 callers=0 calls=0
*/
void sub_128af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128af50ULL || rel >= 0x128b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b090 size=32 callers=0 calls=1
   calls: sub_128a690
*/
void sub_128b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b090ULL || rel >= 0x128b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b0b0 size=32 callers=0 calls=1
   calls: sub_128a690
*/
void sub_128b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b0b0ULL || rel >= 0x128b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b0d0 size=320 callers=0 calls=0
*/
void sub_128b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b0d0ULL || rel >= 0x128b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b210 size=320 callers=0 calls=0
*/
void sub_128b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b210ULL || rel >= 0x128b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b350 size=16 callers=0 calls=0
*/
void sub_128b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b350ULL || rel >= 0x128b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b360 size=16 callers=0 calls=0
*/
void sub_128b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b360ULL || rel >= 0x128b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b370 size=16 callers=0 calls=0
*/
void sub_128b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b370ULL || rel >= 0x128b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b380 size=16 callers=0 calls=0
*/
void sub_128b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b380ULL || rel >= 0x128b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b390 size=16 callers=0 calls=0
*/
void sub_128b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b390ULL || rel >= 0x128b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b3a0 size=16 callers=0 calls=0
*/
void sub_128b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b3a0ULL || rel >= 0x128b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b3b0 size=16 callers=0 calls=0
*/
void sub_128b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b3b0ULL || rel >= 0x128b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b3c0 size=16 callers=0 calls=0
*/
void sub_128b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b3c0ULL || rel >= 0x128b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b3d0 size=64 callers=0 calls=1
   calls: sub_1286ed0
   ref: OnQuitSelected
*/
void OnQuitSelected_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b3d0ULL || rel >= 0x128b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b410 size=16 callers=0 calls=0
*/
void sub_128b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b410ULL || rel >= 0x128b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b420 size=16 callers=0 calls=0
*/
void sub_128b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b420ULL || rel >= 0x128b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b430 size=16 callers=0 calls=0
*/
void sub_128b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b430ULL || rel >= 0x128b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b440 size=304 callers=2 calls=1
   calls: sub_126ab20
*/
void sub_128b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b440ULL || rel >= 0x128b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b570 size=336 callers=0 calls=0
*/
void sub_128b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b570ULL || rel >= 0x128b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b6c0 size=352 callers=2 calls=0
*/
void sub_128b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b6c0ULL || rel >= 0x128b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b820 size=432 callers=0 calls=3
   calls: sub_126abd0, sub_126aca0, sub_126adb0
*/
void sub_128b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b820ULL || rel >= 0x128b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128b9d0 size=80 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_128b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128b9d0ULL || rel >= 0x128ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ba20 size=80 callers=0 calls=3
   calls: anime_out_9, sub_126ac30, sub_126b5b0
*/
void sub_128ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ba20ULL || rel >= 0x128ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ba70 size=320 callers=0 calls=0
*/
void sub_128ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ba70ULL || rel >= 0x128bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128bbb0 size=320 callers=0 calls=0
*/
void sub_128bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128bbb0ULL || rel >= 0x128bcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128bcf0 size=32 callers=0 calls=1
   calls: sub_128b6c0
*/
void sub_128bcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128bcf0ULL || rel >= 0x128bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128bd10 size=32 callers=0 calls=1
   calls: sub_128b6c0
*/
void sub_128bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128bd10ULL || rel >= 0x128bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128bd30 size=320 callers=0 calls=0
*/
void sub_128bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128bd30ULL || rel >= 0x128be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128be70 size=320 callers=0 calls=0
*/
void sub_128be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128be70ULL || rel >= 0x128bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128bfb0 size=256 callers=0 calls=4
   calls: sub_1127d00, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_128bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128bfb0ULL || rel >= 0x128c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c0b0 size=16 callers=0 calls=0
*/
void sub_128c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c0b0ULL || rel >= 0x128c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c0c0 size=16 callers=0 calls=0
*/
void sub_128c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c0c0ULL || rel >= 0x128c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c0d0 size=16 callers=0 calls=0
*/
void sub_128c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c0d0ULL || rel >= 0x128c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c0e0 size=352 callers=2 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_128c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c0e0ULL || rel >= 0x128c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c240 size=336 callers=0 calls=0
*/
void sub_128c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c240ULL || rel >= 0x128c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c390 size=352 callers=2 calls=0
*/
void sub_128c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c390ULL || rel >= 0x128c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c4f0 size=528 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_128c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c4f0ULL || rel >= 0x128c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c700 size=432 callers=0 calls=8
   calls: sub_1127fc0, sub_126aca0, sub_126b1f0, sub_1278500, sub_1288770, sub_12889b0, sub_5cf8e0, sub_5cf8f0
   ref: OnCookingRequestCanceled
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c700ULL || rel >= 0x128c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c8b0 size=80 callers=0 calls=1
   calls: sub_1288ad0
*/
void sub_128c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c8b0ULL || rel >= 0x128c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c900 size=80 callers=0 calls=1
   calls: sub_1288890
*/
void sub_128c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c900ULL || rel >= 0x128c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128c950 size=320 callers=0 calls=0
*/
void sub_128c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128c950ULL || rel >= 0x128ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ca90 size=320 callers=0 calls=0
*/
void sub_128ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ca90ULL || rel >= 0x128cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cbd0 size=32 callers=0 calls=1
   calls: sub_128c390
*/
void sub_128cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cbd0ULL || rel >= 0x128cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cbf0 size=32 callers=0 calls=1
   calls: sub_128c390
*/
void sub_128cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cbf0ULL || rel >= 0x128cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cc10 size=320 callers=0 calls=0
*/
void sub_128cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cc10ULL || rel >= 0x128cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cd50 size=320 callers=0 calls=0
*/
void sub_128cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cd50ULL || rel >= 0x128ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ce90 size=224 callers=0 calls=4
   calls: sub_1269880, sub_126ad50, sub_1286ed0, sub_1287000
   ref: OnJoinSelected
   ref: NoBerryMessage
*/
void OnJoinSelected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ce90ULL || rel >= 0x128cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cf70 size=16 callers=0 calls=0
*/
void sub_128cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cf70ULL || rel >= 0x128cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cf80 size=16 callers=0 calls=0
*/
void sub_128cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cf80ULL || rel >= 0x128cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cf90 size=16 callers=0 calls=0
*/
void sub_128cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cf90ULL || rel >= 0x128cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cfa0 size=80 callers=0 calls=3
   calls: sub_126a9b0, sub_126ac90, sub_1286ed0
   ref: OnQuitSelected
*/
void OnQuitSelected_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cfa0ULL || rel >= 0x128cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128cff0 size=16 callers=0 calls=0
*/
void sub_128cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128cff0ULL || rel >= 0x128d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d000 size=16 callers=0 calls=0
*/
void sub_128d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d000ULL || rel >= 0x128d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d010 size=16 callers=0 calls=0
*/
void sub_128d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d010ULL || rel >= 0x128d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d020 size=304 callers=0 calls=4
   calls: sub_1263300, sub_126ac90, sub_126c7a0, sub_13149a0
*/
void sub_128d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d020ULL || rel >= 0x128d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d150 size=16 callers=0 calls=0
*/
void sub_128d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d150ULL || rel >= 0x128d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d160 size=16 callers=0 calls=0
*/
void sub_128d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d160ULL || rel >= 0x128d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d170 size=16 callers=0 calls=0
*/
void sub_128d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d170ULL || rel >= 0x128d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d180 size=336 callers=0 calls=0
*/
void sub_128d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d180ULL || rel >= 0x128d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d2d0 size=352 callers=2 calls=0
*/
void sub_128d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d2d0ULL || rel >= 0x128d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d430 size=800 callers=0 calls=3
   calls: sub_1269900, sub_126abd0, sub_126adb0
*/
void sub_128d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d430ULL || rel >= 0x128d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d750 size=432 callers=0 calls=8
   calls: sub_1127fc0, sub_126aca0, sub_126b1f0, sub_1278500, sub_1288770, sub_12889b0, sub_5cf8e0, sub_5cf8f0
   ref: OnCookingRequestCanceled
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d750ULL || rel >= 0x128d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128d900 size=288 callers=0 calls=7
   calls: sub_125a0f0, sub_12639a0, sub_1266170, sub_126aca0, sub_126ad50, sub_12855a0, sub_12856c0
*/
void sub_128d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128d900ULL || rel >= 0x128da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128da20 size=32 callers=0 calls=0
*/
void sub_128da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128da20ULL || rel >= 0x128da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128da40 size=32 callers=0 calls=0
*/
void sub_128da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128da40ULL || rel >= 0x128da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128da60 size=320 callers=0 calls=0
*/
void sub_128da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128da60ULL || rel >= 0x128dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128dba0 size=320 callers=0 calls=0
*/
void sub_128dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128dba0ULL || rel >= 0x128dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128dce0 size=32 callers=0 calls=1
   calls: sub_128d2d0
*/
void sub_128dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128dce0ULL || rel >= 0x128dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128dd00 size=32 callers=0 calls=1
   calls: sub_128d2d0
*/
void sub_128dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128dd00ULL || rel >= 0x128dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128dd20 size=320 callers=0 calls=0
*/
void sub_128dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128dd20ULL || rel >= 0x128de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128de60 size=320 callers=0 calls=0
*/
void sub_128de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128de60ULL || rel >= 0x128dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128dfa0 size=672 callers=0 calls=10
   calls: sub_1127d00, sub_1269880, sub_126ab20, sub_126aca0, sub_126ad50, sub_12856c0, sub_1286ed0, sub_1287000, sub_5cf8e0, sub_5cf8f0
   ref: NoBerryMessage
*/
void NoBerryMessage_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128dfa0ULL || rel >= 0x128e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128e240 size=16 callers=0 calls=0
*/
void sub_128e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128e240ULL || rel >= 0x128e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128e250 size=336 callers=0 calls=0
*/
void sub_128e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128e250ULL || rel >= 0x128e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128e3a0 size=352 callers=2 calls=0
*/
void sub_128e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128e3a0ULL || rel >= 0x128e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128e500 size=480 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_128e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128e500ULL || rel >= 0x128e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128e6e0 size=288 callers=0 calls=8
   calls: sub_125a0f0, sub_12639a0, sub_126aca0, sub_126ad50, sub_126b1f0, sub_1278500, sub_12855a0, sub_12856c0
*/
void sub_128e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128e6e0ULL || rel >= 0x128e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128e800 size=320 callers=0 calls=0
*/
void sub_128e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128e800ULL || rel >= 0x128e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128e940 size=320 callers=0 calls=0
*/
void sub_128e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128e940ULL || rel >= 0x128ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ea80 size=32 callers=0 calls=1
   calls: sub_128e3a0
*/
void sub_128ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ea80ULL || rel >= 0x128eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128eaa0 size=32 callers=0 calls=1
   calls: sub_128e3a0
*/
void sub_128eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128eaa0ULL || rel >= 0x128eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128eac0 size=320 callers=0 calls=0
*/
void sub_128eac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128eac0ULL || rel >= 0x128ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ec00 size=320 callers=0 calls=0
*/
void sub_128ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ec00ULL || rel >= 0x128ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ed40 size=544 callers=0 calls=5
   calls: sub_1127d00, sub_126ab20, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_128ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ed40ULL || rel >= 0x128ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ef60 size=16 callers=0 calls=0
*/
void sub_128ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ef60ULL || rel >= 0x128ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128ef70 size=336 callers=0 calls=0
*/
void sub_128ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128ef70ULL || rel >= 0x128f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f0c0 size=352 callers=2 calls=0
*/
void sub_128f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f0c0ULL || rel >= 0x128f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f220 size=400 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_128f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f220ULL || rel >= 0x128f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f3b0 size=288 callers=0 calls=8
   calls: sub_125a0f0, sub_12639a0, sub_126aca0, sub_126ad50, sub_126b1f0, sub_1278500, sub_12855a0, sub_12857e0
*/
void sub_128f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f3b0ULL || rel >= 0x128f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f4d0 size=320 callers=0 calls=0
*/
void sub_128f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f4d0ULL || rel >= 0x128f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f610 size=320 callers=0 calls=0
*/
void sub_128f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f610ULL || rel >= 0x128f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f750 size=32 callers=0 calls=1
   calls: sub_128f0c0
*/
void sub_128f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f750ULL || rel >= 0x128f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f770 size=32 callers=0 calls=1
   calls: sub_128f0c0
*/
void sub_128f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f770ULL || rel >= 0x128f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f790 size=320 callers=0 calls=0
*/
void sub_128f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f790ULL || rel >= 0x128f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128f8d0 size=320 callers=0 calls=0
*/
void sub_128f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128f8d0ULL || rel >= 0x128fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128fa10 size=336 callers=0 calls=2
   calls: sub_126ab20, sub_1287c80
   ref: OnMessageClosed
*/
void OnMessageClosed_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128fa10ULL || rel >= 0x128fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128fb60 size=16 callers=0 calls=0
*/
void sub_128fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128fb60ULL || rel >= 0x128fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128fb70 size=336 callers=0 calls=0
*/
void sub_128fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128fb70ULL || rel >= 0x128fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128fcc0 size=352 callers=2 calls=0
*/
void sub_128fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128fcc0ULL || rel >= 0x128fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0128fe20 size=736 callers=0 calls=3
   calls: sub_1269900, sub_126abd0, sub_126adb0
*/
void sub_128fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128fe20ULL || rel >= 0x1290100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290100 size=432 callers=0 calls=8
   calls: sub_1127fc0, sub_126aca0, sub_126b1f0, sub_1278500, sub_1288770, sub_12889b0, sub_5cf8e0, sub_5cf8f0
   ref: OnCookingRequestCanceled
   ref: OnCookingRequestClosed
*/
void OnCookingRequestClosed_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290100ULL || rel >= 0x12902b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012902b0 size=320 callers=0 calls=10
   calls: sub_125a0f0, sub_12639a0, sub_1266170, sub_126a350, sub_126a3e0, sub_126ac90, sub_126aca0, sub_126ad50, sub_12855a0, sub_12856c0
*/
void sub_12902b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12902b0ULL || rel >= 0x12903f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012903f0 size=32 callers=0 calls=0
*/
void sub_12903f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12903f0ULL || rel >= 0x1290410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290410 size=32 callers=0 calls=0
*/
void sub_1290410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290410ULL || rel >= 0x1290430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290430 size=320 callers=0 calls=0
*/
void sub_1290430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290430ULL || rel >= 0x1290570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290570 size=320 callers=0 calls=0
*/
void sub_1290570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290570ULL || rel >= 0x12906b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012906b0 size=32 callers=0 calls=1
   calls: sub_128fcc0
*/
void sub_12906b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12906b0ULL || rel >= 0x12906d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012906d0 size=32 callers=0 calls=1
   calls: sub_128fcc0
*/
void sub_12906d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12906d0ULL || rel >= 0x12906f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012906f0 size=320 callers=0 calls=0
*/
void sub_12906f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12906f0ULL || rel >= 0x1290830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290830 size=320 callers=0 calls=0
*/
void sub_1290830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290830ULL || rel >= 0x1290970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290970 size=16 callers=0 calls=0
*/
void sub_1290970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290970ULL || rel >= 0x1290980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290980 size=16 callers=0 calls=0
*/
void sub_1290980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290980ULL || rel >= 0x1290990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290990 size=16 callers=0 calls=0
*/
void sub_1290990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290990ULL || rel >= 0x12909a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012909a0 size=16 callers=0 calls=0
*/
void sub_12909a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12909a0ULL || rel >= 0x12909b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012909b0 size=16 callers=0 calls=0
*/
void sub_12909b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12909b0ULL || rel >= 0x12909c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012909c0 size=16 callers=0 calls=0
*/
void sub_12909c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12909c0ULL || rel >= 0x12909d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012909d0 size=16 callers=0 calls=0
*/
void sub_12909d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12909d0ULL || rel >= 0x12909e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012909e0 size=16 callers=0 calls=0
*/
void sub_12909e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12909e0ULL || rel >= 0x12909f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012909f0 size=96 callers=0 calls=2
   calls: sub_1286ed0, sub_1287db0
   ref: OnQuitSelected
*/
void OnQuitSelected_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12909f0ULL || rel >= 0x1290a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290a50 size=16 callers=0 calls=0
*/
void sub_1290a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290a50ULL || rel >= 0x1290a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290a60 size=16 callers=0 calls=0
*/
void sub_1290a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290a60ULL || rel >= 0x1290a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290a70 size=16 callers=0 calls=0
*/
void sub_1290a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290a70ULL || rel >= 0x1290a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290a80 size=16 callers=0 calls=0
*/
void sub_1290a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290a80ULL || rel >= 0x1290a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290a90 size=16 callers=0 calls=0
*/
void sub_1290a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290a90ULL || rel >= 0x1290aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290aa0 size=16 callers=0 calls=0
*/
void sub_1290aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290aa0ULL || rel >= 0x1290ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290ab0 size=16 callers=0 calls=0
*/
void sub_1290ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290ab0ULL || rel >= 0x1290ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290ac0 size=304 callers=0 calls=5
   calls: sub_1127d00, sub_126aca0, sub_12856c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1290ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290ac0ULL || rel >= 0x1290bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290bf0 size=16 callers=0 calls=0
*/
void sub_1290bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290bf0ULL || rel >= 0x1290c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c00 size=16 callers=0 calls=0
*/
void sub_1290c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c00ULL || rel >= 0x1290c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c10 size=16 callers=0 calls=0
*/
void sub_1290c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c10ULL || rel >= 0x1290c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c20 size=16 callers=0 calls=0
*/
void sub_1290c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c20ULL || rel >= 0x1290c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c30 size=16 callers=0 calls=0
*/
void sub_1290c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c30ULL || rel >= 0x1290c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c40 size=16 callers=0 calls=0
*/
void sub_1290c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c40ULL || rel >= 0x1290c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c50 size=16 callers=0 calls=0
*/
void sub_1290c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c50ULL || rel >= 0x1290c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c60 size=16 callers=0 calls=0
*/
void sub_1290c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c60ULL || rel >= 0x1290c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c70 size=16 callers=0 calls=0
*/
void sub_1290c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c70ULL || rel >= 0x1290c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c80 size=16 callers=0 calls=0
*/
void sub_1290c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c80ULL || rel >= 0x1290c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290c90 size=16 callers=0 calls=0
*/
void sub_1290c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290c90ULL || rel >= 0x1290ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290ca0 size=16 callers=0 calls=0
*/
void sub_1290ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290ca0ULL || rel >= 0x1290cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290cb0 size=16 callers=0 calls=0
*/
void sub_1290cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290cb0ULL || rel >= 0x1290cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290cc0 size=96 callers=0 calls=2
   calls: sub_1286ed0, sub_1287db0
   ref: OnQuitSelected
*/
void OnQuitSelected_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290cc0ULL || rel >= 0x1290d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290d20 size=16 callers=0 calls=0
*/
void sub_1290d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290d20ULL || rel >= 0x1290d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290d30 size=16 callers=0 calls=0
*/
void sub_1290d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290d30ULL || rel >= 0x1290d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290d40 size=16 callers=0 calls=0
*/
void sub_1290d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290d40ULL || rel >= 0x1290d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290d50 size=240 callers=0 calls=0
*/
void sub_1290d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290d50ULL || rel >= 0x1290e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290e40 size=96 callers=0 calls=2
   calls: matching_status_2, sub_1290ea0
*/
void sub_1290e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290e40ULL || rel >= 0x1290ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290ea0 size=288 callers=3 calls=1
   calls: sub_126ab20
*/
void sub_1290ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290ea0ULL || rel >= 0x1290fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01290fc0 size=96 callers=0 calls=0
*/
void sub_1290fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1290fc0ULL || rel >= 0x1291020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291020 size=96 callers=0 calls=0
*/
void sub_1291020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291020ULL || rel >= 0x1291080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291080 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_1291080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291080ULL || rel >= 0x12910f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012910f0 size=96 callers=0 calls=0
*/
void sub_12910f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12910f0ULL || rel >= 0x1291150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291150 size=96 callers=0 calls=0
*/
void sub_1291150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291150ULL || rel >= 0x12911b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012911b0 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_12911b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12911b0ULL || rel >= 0x1291220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291220 size=112 callers=0 calls=1
   calls: sub_126c7a0
*/
void sub_1291220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291220ULL || rel >= 0x1291290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291290 size=96 callers=0 calls=0
*/
void sub_1291290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291290ULL || rel >= 0x12912f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012912f0 size=96 callers=0 calls=0
*/
void sub_12912f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12912f0ULL || rel >= 0x1291350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291350 size=16 callers=0 calls=0
*/
void sub_1291350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291350ULL || rel >= 0x1291360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291360 size=352 callers=2 calls=0
*/
void sub_1291360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291360ULL || rel >= 0x12914c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012914c0 size=800 callers=0 calls=3
   calls: sub_1269900, sub_126abd0, sub_126adb0
*/
void sub_12914c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12914c0ULL || rel >= 0x12917e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012917e0 size=608 callers=0 calls=6
   calls: sub_126ab20, sub_126aca0, sub_126ad50, sub_126b1f0, sub_128c0e0, sub_1290ea0
*/
void sub_12917e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12917e0ULL || rel >= 0x1291a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291a40 size=48 callers=0 calls=1
   calls: sub_126ac90
*/
void sub_1291a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291a40ULL || rel >= 0x1291a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291a70 size=16 callers=0 calls=0
*/
void sub_1291a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291a70ULL || rel >= 0x1291a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291a80 size=16 callers=0 calls=0
*/
void sub_1291a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291a80ULL || rel >= 0x1291a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291a90 size=32 callers=0 calls=1
   calls: sub_1291360
*/
void sub_1291a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291a90ULL || rel >= 0x1291ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291ab0 size=32 callers=0 calls=1
   calls: sub_1291360
*/
void sub_1291ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291ab0ULL || rel >= 0x1291ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291ad0 size=16 callers=0 calls=0
*/
void sub_1291ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291ad0ULL || rel >= 0x1291ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291ae0 size=16 callers=0 calls=0
*/
void sub_1291ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291ae0ULL || rel >= 0x1291af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

