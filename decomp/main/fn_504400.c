/* main functions 00504400..005389a0 (31 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00504400 size=576 callers=6 calls=1
   calls: sub_503610
*/
void sub_504400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x504400ULL || rel >= 0x504640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00504640 size=384 callers=1 calls=0
*/
void sub_504640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x504640ULL || rel >= 0x5047c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005047c0 size=48 callers=1 calls=0
*/
void sub_5047c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5047c0ULL || rel >= 0x5047f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005047f0 size=384 callers=0 calls=0
*/
void sub_5047f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5047f0ULL || rel >= 0x504970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00504970 size=336 callers=3 calls=0
*/
void sub_504970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x504970ULL || rel >= 0x504ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00504ac0 size=832 callers=2 calls=0
*/
void sub_504ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x504ac0ULL || rel >= 0x504e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00504e00 size=544 callers=1 calls=2
   calls: sub_504970, sub_504ac0
*/
void sub_504e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x504e00ULL || rel >= 0x505020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505020 size=128 callers=1 calls=1
   calls: sub_504e00
*/
void sub_505020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505020ULL || rel >= 0x5050a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005050a0 size=496 callers=2 calls=0
*/
void sub_5050a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5050a0ULL || rel >= 0x505290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505290 size=256 callers=1 calls=0
   ref: glyph-dict
*/
void glyph_dict(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505290ULL || rel >= 0x505390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505390 size=784 callers=7 calls=1
   calls: sub_5056a0
*/
void sub_505390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505390ULL || rel >= 0x5056a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005056a0 size=624 callers=2 calls=1
   calls: sub_504400
*/
void sub_5056a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5056a0ULL || rel >= 0x505910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505910 size=112 callers=3 calls=0
*/
void sub_505910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505910ULL || rel >= 0x505980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505980 size=144 callers=2 calls=0
*/
void sub_505980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505980ULL || rel >= 0x505a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505a10 size=176 callers=3 calls=0
*/
void sub_505a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505a10ULL || rel >= 0x505ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505ac0 size=240 callers=1 calls=0
   ref: properties
*/
void properties(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505ac0ULL || rel >= 0x505bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505bb0 size=144 callers=1 calls=0
*/
void sub_505bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505bb0ULL || rel >= 0x505c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505c40 size=640 callers=1 calls=2
   calls: sub_504400, sub_5056a0
   ref: type42
*/
void type42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505c40ULL || rel >= 0x505ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00505ec0 size=1104 callers=1 calls=0
*/
void sub_505ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x505ec0ULL || rel >= 0x506310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00506310 size=144 callers=3 calls=0
*/
void sub_506310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x506310ULL || rel >= 0x5063a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005063a0 size=1424 callers=1 calls=0
*/
void sub_5063a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5063a0ULL || rel >= 0x506930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00506930 size=128 callers=39 calls=0
*/
void sub_506930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x506930ULL || rel >= 0x5069b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005069b0 size=160 callers=4 calls=0
*/
void sub_5069b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5069b0ULL || rel >= 0x506a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00506a50 size=144 callers=5 calls=0
*/
void sub_506a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x506a50ULL || rel >= 0x506ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00506ae0 size=176 callers=31 calls=0
*/
void sub_506ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x506ae0ULL || rel >= 0x506b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00506b90 size=1552 callers=2 calls=0
*/
void sub_506b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x506b90ULL || rel >= 0x5071a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005071a0 size=192 callers=9 calls=0
*/
void sub_5071a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5071a0ULL || rel >= 0x507260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00507260 size=32 callers=0 calls=0
*/
void sub_507260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x507260ULL || rel >= 0x507280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00507280 size=3248 callers=1 calls=3
   calls: sub_50a7e0, sub_50ab10, sub_50ac10
   ref: .resource/
   ref: .AppleDouble/
   ref: /..namedfork/rsrc
   ref: resource.frk/
*/
void unnamed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x507280ULL || rel >= 0x507f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00507f30 size=16 callers=23 calls=0
*/
void sub_507f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x507f30ULL || rel >= 0x507f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00507f40 size=160 callers=2 calls=0
*/
void sub_507f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x507f40ULL || rel >= 0x507fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00507fe0 size=352 callers=10 calls=0
*/
void sub_507fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x507fe0ULL || rel >= 0x508140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508140 size=336 callers=29 calls=0
*/
void sub_508140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508140ULL || rel >= 0x508290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508290 size=80 callers=12 calls=0
*/
void sub_508290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508290ULL || rel >= 0x5082e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005082e0 size=64 callers=28 calls=0
*/
void sub_5082e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5082e0ULL || rel >= 0x508320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508320 size=48 callers=8 calls=0
*/
void sub_508320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508320ULL || rel >= 0x508350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508350 size=64 callers=43 calls=0
*/
void sub_508350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508350ULL || rel >= 0x508390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508390 size=80 callers=22 calls=0
*/
void sub_508390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508390ULL || rel >= 0x5083e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005083e0 size=160 callers=4 calls=0
*/
void sub_5083e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5083e0ULL || rel >= 0x508480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508480 size=816 callers=16 calls=0
*/
void sub_508480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508480ULL || rel >= 0x5087b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005087b0 size=208 callers=1 calls=0
*/
void sub_5087b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5087b0ULL || rel >= 0x508880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508880 size=64 callers=1 calls=0
*/
void sub_508880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508880ULL || rel >= 0x5088c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005088c0 size=128 callers=0 calls=0
*/
void sub_5088c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5088c0ULL || rel >= 0x508940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508940 size=160 callers=2 calls=0
*/
void sub_508940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508940ULL || rel >= 0x5089e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005089e0 size=864 callers=3 calls=0
*/
void sub_5089e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5089e0ULL || rel >= 0x508d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00508d40 size=1504 callers=2 calls=1
   calls: sub_509320
*/
void sub_508d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x508d40ULL || rel >= 0x509320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00509320 size=368 callers=3 calls=1
   calls: truetype
*/
void sub_509320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x509320ULL || rel >= 0x509490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00509490 size=64 callers=0 calls=0
*/
void sub_509490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x509490ULL || rel >= 0x5094d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005094d0 size=352 callers=1 calls=1
   calls: truetype_2
*/
void sub_5094d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5094d0ULL || rel >= 0x509630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00509630 size=2256 callers=3 calls=4
   calls: sub_5063a0, sub_506b90, sub_508d40, sub_509320
   ref: truetype
*/
void truetype_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x509630ULL || rel >= 0x509f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00509f00 size=672 callers=1 calls=3
   calls: sub_50ac10, truetype_2, unnamed
*/
void sub_509f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x509f00ULL || rel >= 0x50a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a1a0 size=48 callers=0 calls=0
*/
void sub_50a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a1a0ULL || rel >= 0x50a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a1d0 size=48 callers=0 calls=0
*/
void sub_50a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a1d0ULL || rel >= 0x50a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a200 size=288 callers=0 calls=3
   calls: sub_50a7e0, sub_50ab10, sub_50ac10
*/
void sub_50a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a200ULL || rel >= 0x50a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a320 size=224 callers=0 calls=0
   ref: /..namedfork/rsrc
*/
void rsrc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a320ULL || rel >= 0x50a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a400 size=224 callers=0 calls=0
*/
void sub_50a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a400ULL || rel >= 0x50a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a4e0 size=96 callers=0 calls=1
   calls: sub_50ab10
   ref: resource.frk/
*/
void unnamed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a4e0ULL || rel >= 0x50a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a540 size=96 callers=0 calls=1
   calls: sub_50ab10
   ref: .resource/
*/
void unnamed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a540ULL || rel >= 0x50a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a5a0 size=288 callers=0 calls=3
   calls: sub_50a7e0, sub_50ab10, sub_50ac10
*/
void sub_50a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a5a0ULL || rel >= 0x50a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a6c0 size=288 callers=0 calls=3
   calls: sub_50a7e0, sub_50ab10, sub_50ac10
   ref: .AppleDouble/
*/
void unnamed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a6c0ULL || rel >= 0x50a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050a7e0 size=816 callers=11 calls=0
*/
void sub_50a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50a7e0ULL || rel >= 0x50ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ab10 size=256 callers=15 calls=0
*/
void sub_50ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ab10ULL || rel >= 0x50ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ac10 size=208 callers=11 calls=0
*/
void sub_50ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ac10ULL || rel >= 0x50ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ace0 size=128 callers=0 calls=0
*/
void sub_50ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ace0ULL || rel >= 0x50ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ad60 size=48 callers=0 calls=0
*/
void sub_50ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ad60ULL || rel >= 0x50ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ad90 size=64 callers=1 calls=1
   calls: sub_860
*/
void sub_50ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ad90ULL || rel >= 0x50add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050add0 size=16 callers=0 calls=0
*/
void sub_50add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50add0ULL || rel >= 0x50ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ade0 size=16 callers=0 calls=0
*/
void sub_50ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ade0ULL || rel >= 0x50adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050adf0 size=16 callers=0 calls=0
*/
void sub_50adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50adf0ULL || rel >= 0x50ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ae00 size=16 callers=2 calls=0
*/
void sub_50ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ae00ULL || rel >= 0x50ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ae10 size=64 callers=1 calls=0
*/
void sub_50ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ae10ULL || rel >= 0x50ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ae50 size=16 callers=6 calls=0
*/
void sub_50ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ae50ULL || rel >= 0x50ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ae60 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_50ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ae60ULL || rel >= 0x50aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050aee0 size=160 callers=1 calls=3
   calls: sub_4bc640, sub_4bf660, sub_4cbf40
*/
void sub_50aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50aee0ULL || rel >= 0x50af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050af80 size=112 callers=1 calls=1
   calls: SiCore_Map_12
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50af80ULL || rel >= 0x50aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050aff0 size=96 callers=0 calls=1
   calls: SiCore_Map_12
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50aff0ULL || rel >= 0x50b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050b050 size=112 callers=0 calls=2
   calls: SiCore_Map_12, sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50b050ULL || rel >= 0x50b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050b0c0 size=16 callers=0 calls=0
*/
void sub_50b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50b0c0ULL || rel >= 0x50b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050b0d0 size=16 callers=2 calls=0
*/
void sub_50b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50b0d0ULL || rel >= 0x50b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050b0e0 size=80 callers=0 calls=1
   calls: sub_50c880
*/
void sub_50b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50b0e0ULL || rel >= 0x50b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050b130 size=224 callers=0 calls=2
   calls: SiCore_Map_12, sub_50c960
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiGfx_FreeType_Manager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50b130ULL || rel >= 0x50b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050b210 size=896 callers=1 calls=9
   calls: SiCore_Map_10, SiCore_Map_9, sub_4bc640, sub_4bc690, sub_4e4400, sub_504250, sub_5042c0, sub_57d030, sub_582d80
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp
*/
void SiGfx_FreeType_Manager_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50b210ULL || rel >= 0x50b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050b590 size=208 callers=1 calls=2
   calls: SiCore_Map_10, sub_5042c0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp
*/
void SiGfx_FreeType_Manager_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50b590ULL || rel >= 0x50b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050b660 size=944 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50b660ULL || rel >= 0x50ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ba10 size=528 callers=1 calls=4
   calls: SiCore_Map_10, SiCore_Map_9, sub_504250, sub_5042c0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp
*/
void SiGfx_FreeType_Manager_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ba10ULL || rel >= 0x50bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050bc20 size=1680 callers=3 calls=1
   calls: SiCore_Map_12
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50bc20ULL || rel >= 0x50c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c2b0 size=16 callers=1 calls=0
*/
void sub_50c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c2b0ULL || rel >= 0x50c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c2c0 size=16 callers=0 calls=0
*/
void sub_50c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c2c0ULL || rel >= 0x50c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c2d0 size=16 callers=0 calls=0
*/
void sub_50c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c2d0ULL || rel >= 0x50c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c2e0 size=16 callers=0 calls=0
*/
void sub_50c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c2e0ULL || rel >= 0x50c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c2f0 size=16 callers=0 calls=0
*/
void sub_50c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c2f0ULL || rel >= 0x50c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c300 size=16 callers=0 calls=0
*/
void sub_50c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c300ULL || rel >= 0x50c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c310 size=32 callers=0 calls=0
*/
void sub_50c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c310ULL || rel >= 0x50c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c330 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.h
*/
void SiGfx_FreeType_Manager_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c330ULL || rel >= 0x50c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c3b0 size=16 callers=0 calls=0
*/
void sub_50c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c3b0ULL || rel >= 0x50c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c3c0 size=80 callers=0 calls=1
   calls: SiCore_Map_12
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c3c0ULL || rel >= 0x50c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c410 size=176 callers=8 calls=1
   calls: SiCore_Map_12
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c410ULL || rel >= 0x50c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c4c0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_50c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c4c0ULL || rel >= 0x50c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c540 size=832 callers=1 calls=1
   calls: properties
   ref: FREETYPE_PROPERTIES
*/
void FREETYPE_PROPERTIES(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c540ULL || rel >= 0x50c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c880 size=224 callers=1 calls=5
   calls: FREETYPE_PROPERTIES, sub_505390, sub_505bb0, sub_50ad90, sub_50ae00
*/
void sub_50c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c880ULL || rel >= 0x50c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c960 size=64 callers=1 calls=2
   calls: sub_50ae00, type42
*/
void sub_50c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c960ULL || rel >= 0x50c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c9a0 size=48 callers=0 calls=0
*/
void sub_50c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c9a0ULL || rel >= 0x50c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c9d0 size=16 callers=0 calls=0
*/
void sub_50c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c9d0ULL || rel >= 0x50c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050c9e0 size=112 callers=0 calls=2
   calls: sub_5037a0, sub_503820
*/
void sub_50c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50c9e0ULL || rel >= 0x50ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ca50 size=48 callers=0 calls=0
*/
void sub_50ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ca50ULL || rel >= 0x50ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050ca80 size=32 callers=0 calls=0
*/
void sub_50ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50ca80ULL || rel >= 0x50caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050caa0 size=64 callers=0 calls=1
   calls: sub_50cb20
*/
void sub_50caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50caa0ULL || rel >= 0x50cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050cae0 size=64 callers=0 calls=1
   calls: sub_50cb20
*/
void sub_50cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50cae0ULL || rel >= 0x50cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050cb20 size=1568 callers=2 calls=4
   calls: sub_502750, sub_502810, sub_503820, sub_506310
*/
void sub_50cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50cb20ULL || rel >= 0x50d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d140 size=96 callers=0 calls=1
   calls: sub_502750
*/
void sub_50d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d140ULL || rel >= 0x50d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d1a0 size=16 callers=0 calls=0
*/
void sub_50d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d1a0ULL || rel >= 0x50d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d1b0 size=16 callers=0 calls=0
*/
void sub_50d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d1b0ULL || rel >= 0x50d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d1c0 size=1744 callers=0 calls=2
   calls: sub_506310, sub_50d8a0
*/
void sub_50d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d1c0ULL || rel >= 0x50d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d890 size=16 callers=0 calls=0
*/
void sub_50d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d890ULL || rel >= 0x50d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d8a0 size=320 callers=1 calls=1
   calls: sub_505ec0
*/
void sub_50d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d8a0ULL || rel >= 0x50d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050d9e0 size=80 callers=0 calls=1
   calls: sub_50df00
*/
void sub_50d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50d9e0ULL || rel >= 0x50da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050da30 size=48 callers=0 calls=1
   calls: sub_50e030
*/
void sub_50da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50da30ULL || rel >= 0x50da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050da60 size=464 callers=0 calls=1
   calls: sub_50e030
*/
void sub_50da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50da60ULL || rel >= 0x50dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050dc30 size=720 callers=0 calls=1
   calls: sub_50e030
*/
void sub_50dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50dc30ULL || rel >= 0x50df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050df00 size=304 callers=7 calls=0
*/
void sub_50df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50df00ULL || rel >= 0x50e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050e030 size=976 callers=3 calls=1
   calls: sub_50df00
*/
void sub_50e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50e030ULL || rel >= 0x50e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050e400 size=5104 callers=0 calls=14
   calls: sub_502410, sub_5024d0, sub_5024f0, sub_5026b0, sub_5026d0, sub_502810, sub_502910, sub_50f7f0, sub_50fcb0, sub_50fd80, sub_510020, sub_510360
   ... +2 more
*/
void sub_50e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50e400ULL || rel >= 0x50f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050f7f0 size=1216 callers=2 calls=1
   calls: sub_5024d0
*/
void sub_50f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50f7f0ULL || rel >= 0x50fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050fcb0 size=208 callers=2 calls=2
   calls: sub_502410, sub_5024d0
*/
void sub_50fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50fcb0ULL || rel >= 0x50fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0050fd80 size=672 callers=2 calls=4
   calls: sub_502410, sub_5024d0, sub_502810, sub_502910
*/
void sub_50fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x50fd80ULL || rel >= 0x510020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510020 size=560 callers=2 calls=2
   calls: sub_5024d0, sub_5024f0
*/
void sub_510020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510020ULL || rel >= 0x510250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510250 size=192 callers=0 calls=0
*/
void sub_510250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510250ULL || rel >= 0x510310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510310 size=80 callers=0 calls=1
   calls: sub_512750
*/
void sub_510310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510310ULL || rel >= 0x510360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510360 size=880 callers=2 calls=1
   calls: sub_502910
*/
void sub_510360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510360ULL || rel >= 0x5106d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005106d0 size=1024 callers=2 calls=2
   calls: sub_5024d0, sub_5106d0
*/
void sub_5106d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5106d0ULL || rel >= 0x510ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510ad0 size=512 callers=2 calls=0
*/
void sub_510ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510ad0ULL || rel >= 0x510cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510cd0 size=16 callers=0 calls=0
*/
void sub_510cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510cd0ULL || rel >= 0x510ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510ce0 size=16 callers=0 calls=0
*/
void sub_510ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510ce0ULL || rel >= 0x510cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510cf0 size=16 callers=0 calls=0
*/
void sub_510cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510cf0ULL || rel >= 0x510d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510d00 size=704 callers=0 calls=3
   calls: sub_5024f0, sub_502750, sub_510ff0
*/
void sub_510d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510d00ULL || rel >= 0x510fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510fc0 size=48 callers=0 calls=0
*/
void sub_510fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510fc0ULL || rel >= 0x510ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00510ff0 size=1424 callers=2 calls=0
*/
void sub_510ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x510ff0ULL || rel >= 0x511580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00511580 size=48 callers=0 calls=0
*/
void sub_511580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x511580ULL || rel >= 0x5115b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005115b0 size=96 callers=0 calls=1
   calls: sub_511bc0
*/
void sub_5115b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5115b0ULL || rel >= 0x511610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00511610 size=128 callers=0 calls=2
   calls: sub_5022b0, sub_511fc0
*/
void sub_511610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x511610ULL || rel >= 0x511690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00511690 size=992 callers=0 calls=3
   calls: sub_5022b0, sub_502910, sub_511fc0
*/
void sub_511690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x511690ULL || rel >= 0x511a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00511a70 size=336 callers=0 calls=1
   calls: sub_502910
*/
void sub_511a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x511a70ULL || rel >= 0x511bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00511bc0 size=1024 callers=1 calls=1
   calls: sub_502910
*/
void sub_511bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x511bc0ULL || rel >= 0x511fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00511fc0 size=576 callers=5 calls=1
   calls: sub_502910
*/
void sub_511fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x511fc0ULL || rel >= 0x512200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00512200 size=48 callers=0 calls=0
*/
void sub_512200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x512200ULL || rel >= 0x512230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00512230 size=448 callers=0 calls=2
   calls: sub_5022b0, sub_511fc0
*/
void sub_512230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x512230ULL || rel >= 0x5123f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005123f0 size=160 callers=0 calls=1
   calls: sub_512530
*/
void sub_5123f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5123f0ULL || rel >= 0x512490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00512490 size=160 callers=0 calls=1
   calls: sub_512530
*/
void sub_512490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x512490ULL || rel >= 0x512530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00512530 size=544 callers=4 calls=1
   calls: sub_502910
*/
void sub_512530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x512530ULL || rel >= 0x512750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00512750 size=208 callers=2 calls=1
   calls: sub_502810
*/
void sub_512750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x512750ULL || rel >= 0x512820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00512820 size=16 callers=0 calls=0
*/
void sub_512820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x512820ULL || rel >= 0x512830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00512830 size=816 callers=2 calls=1
   calls: sub_513510
*/
void sub_512830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x512830ULL || rel >= 0x512b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00512b60 size=2048 callers=0 calls=3
   calls: sub_502810, sub_502910, sub_512830
   ref: fraction
   ref: hyphen
   ref: macron
   ref: periodcentered
   ref: Tcommaaccent
   ref: tcommaaccent
*/
void periodcentered(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x512b60ULL || rel >= 0x513360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513360 size=144 callers=0 calls=0
*/
void sub_513360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513360ULL || rel >= 0x5133f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005133f0 size=192 callers=0 calls=0
*/
void sub_5133f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5133f0ULL || rel >= 0x5134b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005134b0 size=48 callers=0 calls=0
*/
void sub_5134b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5134b0ULL || rel >= 0x5134e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005134e0 size=48 callers=0 calls=0
*/
void sub_5134e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5134e0ULL || rel >= 0x513510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513510 size=288 callers=2 calls=0
*/
void sub_513510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513510ULL || rel >= 0x513630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513630 size=64 callers=0 calls=0
*/
void sub_513630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513630ULL || rel >= 0x513670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513670 size=16 callers=0 calls=0
*/
void sub_513670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513670ULL || rel >= 0x513680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513680 size=16 callers=0 calls=0
*/
void sub_513680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513680ULL || rel >= 0x513690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513690 size=32 callers=0 calls=0
*/
void sub_513690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513690ULL || rel >= 0x5136b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005136b0 size=64 callers=0 calls=0
*/
void sub_5136b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5136b0ULL || rel >= 0x5136f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005136f0 size=176 callers=0 calls=1
   calls: sub_503250
*/
void sub_5136f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5136f0ULL || rel >= 0x5137a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005137a0 size=32 callers=0 calls=0
*/
void sub_5137a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5137a0ULL || rel >= 0x5137c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005137c0 size=240 callers=0 calls=0
*/
void sub_5137c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5137c0ULL || rel >= 0x5138b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005138b0 size=288 callers=0 calls=0
*/
void sub_5138b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5138b0ULL || rel >= 0x5139d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005139d0 size=544 callers=0 calls=1
   calls: sub_503250
*/
void sub_5139d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5139d0ULL || rel >= 0x513bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513bf0 size=48 callers=0 calls=0
*/
void sub_513bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513bf0ULL || rel >= 0x513c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513c20 size=48 callers=0 calls=0
*/
void sub_513c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513c20ULL || rel >= 0x513c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513c50 size=96 callers=0 calls=2
   calls: sub_51f6f0, sub_51fa60
*/
void sub_513c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513c50ULL || rel >= 0x513cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513cb0 size=160 callers=0 calls=1
   calls: sub_5200b0
*/
void sub_513cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513cb0ULL || rel >= 0x513d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00513d50 size=1104 callers=0 calls=1
   calls: sub_503250
*/
void sub_513d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x513d50ULL || rel >= 0x5141a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005141a0 size=48 callers=0 calls=0
*/
void sub_5141a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5141a0ULL || rel >= 0x5141d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005141d0 size=80 callers=0 calls=0
*/
void sub_5141d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5141d0ULL || rel >= 0x514220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514220 size=160 callers=0 calls=0
*/
void sub_514220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514220ULL || rel >= 0x5142c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005142c0 size=208 callers=0 calls=1
   calls: sub_503250
*/
void sub_5142c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5142c0ULL || rel >= 0x514390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514390 size=48 callers=0 calls=0
*/
void sub_514390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514390ULL || rel >= 0x5143c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005143c0 size=112 callers=0 calls=0
*/
void sub_5143c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5143c0ULL || rel >= 0x514430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514430 size=192 callers=0 calls=0
*/
void sub_514430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514430ULL || rel >= 0x5144f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005144f0 size=624 callers=0 calls=1
   calls: sub_503250
*/
void sub_5144f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5144f0ULL || rel >= 0x514760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514760 size=64 callers=0 calls=0
*/
void sub_514760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514760ULL || rel >= 0x5147a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005147a0 size=96 callers=0 calls=0
*/
void sub_5147a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5147a0ULL || rel >= 0x514800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514800 size=144 callers=0 calls=0
*/
void sub_514800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514800ULL || rel >= 0x514890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514890 size=240 callers=0 calls=1
   calls: sub_503250
*/
void sub_514890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514890ULL || rel >= 0x514980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514980 size=64 callers=0 calls=0
*/
void sub_514980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514980ULL || rel >= 0x5149c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005149c0 size=64 callers=0 calls=0
*/
void sub_5149c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5149c0ULL || rel >= 0x514a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514a00 size=144 callers=0 calls=0
*/
void sub_514a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514a00ULL || rel >= 0x514a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514a90 size=384 callers=0 calls=1
   calls: sub_520340
*/
void sub_514a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514a90ULL || rel >= 0x514c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514c10 size=464 callers=0 calls=1
   calls: sub_503250
*/
void sub_514c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514c10ULL || rel >= 0x514de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514de0 size=64 callers=0 calls=0
*/
void sub_514de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514de0ULL || rel >= 0x514e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514e20 size=64 callers=0 calls=0
*/
void sub_514e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514e20ULL || rel >= 0x514e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514e60 size=128 callers=0 calls=0
*/
void sub_514e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514e60ULL || rel >= 0x514ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00514ee0 size=368 callers=0 calls=1
   calls: sub_520470
*/
void sub_514ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x514ee0ULL || rel >= 0x515050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00515050 size=448 callers=0 calls=1
   calls: sub_503250
*/
void sub_515050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x515050ULL || rel >= 0x515210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00515210 size=64 callers=0 calls=0
*/
void sub_515210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x515210ULL || rel >= 0x515250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00515250 size=64 callers=0 calls=0
*/
void sub_515250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x515250ULL || rel >= 0x515290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00515290 size=64 callers=0 calls=1
   calls: sub_502810
*/
void sub_515290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x515290ULL || rel >= 0x5152d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005152d0 size=16 callers=0 calls=0
*/
void sub_5152d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5152d0ULL || rel >= 0x5152e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005152e0 size=16 callers=0 calls=0
*/
void sub_5152e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5152e0ULL || rel >= 0x5152f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005152f0 size=416 callers=0 calls=0
*/
void sub_5152f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5152f0ULL || rel >= 0x515490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00515490 size=416 callers=0 calls=0
*/
void sub_515490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x515490ULL || rel >= 0x515630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00515630 size=208 callers=0 calls=1
   calls: sub_502910
*/
void sub_515630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x515630ULL || rel >= 0x515700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00515700 size=528 callers=0 calls=1
   calls: sub_502910
*/
void sub_515700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x515700ULL || rel >= 0x515910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00515910 size=2208 callers=0 calls=1
   calls: sub_502910
*/
void sub_515910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x515910ULL || rel >= 0x5161b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005161b0 size=976 callers=0 calls=1
   calls: sub_503250
*/
void sub_5161b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5161b0ULL || rel >= 0x516580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00516580 size=32 callers=0 calls=0
*/
void sub_516580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x516580ULL || rel >= 0x5165a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005165a0 size=48 callers=0 calls=0
*/
void sub_5165a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5165a0ULL || rel >= 0x5165d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005165d0 size=64 callers=0 calls=1
   calls: sub_502810
*/
void sub_5165d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5165d0ULL || rel >= 0x516610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00516610 size=16 callers=0 calls=0
*/
void sub_516610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x516610ULL || rel >= 0x516620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00516620 size=16 callers=0 calls=0
*/
void sub_516620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x516620ULL || rel >= 0x516630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00516630 size=640 callers=1 calls=2
   calls: length_tree, sub_5168f0
*/
void sub_516630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x516630ULL || rel >= 0x5168b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005168b0 size=48 callers=0 calls=1
   calls: sub_502750
*/
void sub_5168b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5168b0ULL || rel >= 0x5168e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005168e0 size=16 callers=0 calls=0
*/
void sub_5168e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5168e0ULL || rel >= 0x5168f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005168f0 size=608 callers=1 calls=1
   calls: sub_5185a0
*/
void sub_5168f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5168f0ULL || rel >= 0x516b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00516b50 size=6736 callers=1 calls=2
   calls: sub_520800, sub_520950
   ref: invalid block type
   ref: oversubscribed literal/length tree
   ref: incorrect header check
   ref: oversubscribed distance tree
   ref: incomplete literal/length tree
   ref: too many length or distance symbols
   ref: incomplete dynamic bit lengths tree
   ref: empty distance tree with lengths
*/
void length_tree(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x516b50ULL || rel >= 0x5185a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005185a0 size=272 callers=2 calls=0
*/
void sub_5185a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5185a0ULL || rel >= 0x5186b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005186b0 size=80 callers=0 calls=0
*/
void sub_5186b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5186b0ULL || rel >= 0x518700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00518700 size=3664 callers=0 calls=20
   calls: sub_502750, sub_502810, sub_502910, sub_503270, sub_503290, sub_5032f0, sub_505910, sub_505980, sub_505a10, sub_506930, sub_506a50, sub_506ae0
   ... +8 more
   ref: truetype
   ref: multi-masters
   ref: postscript-cmaps
   ref: metrics-variations
*/
void truetype_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x518700ULL || rel >= 0x519550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00519550 size=2784 callers=0 calls=4
   calls: sub_502910, sub_5050a0, sub_51c2f0, sub_51c660
*/
void sub_519550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x519550ULL || rel >= 0x51a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a030 size=400 callers=0 calls=2
   calls: sub_502810, sub_508290
*/
void sub_51a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a030ULL || rel >= 0x51a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a1c0 size=144 callers=0 calls=0
*/
void sub_51a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a1c0ULL || rel >= 0x51a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a250 size=96 callers=0 calls=0
*/
void sub_51a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a250ULL || rel >= 0x51a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a2b0 size=160 callers=0 calls=1
   calls: sub_508480
*/
void sub_51a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a2b0ULL || rel >= 0x51a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a350 size=96 callers=0 calls=1
   calls: sub_507fe0
*/
void sub_51a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a350ULL || rel >= 0x51a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a3b0 size=240 callers=0 calls=1
   calls: sub_508480
*/
void sub_51a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a3b0ULL || rel >= 0x51a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a4a0 size=240 callers=0 calls=1
   calls: sub_508480
*/
void sub_51a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a4a0ULL || rel >= 0x51a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a590 size=96 callers=0 calls=0
*/
void sub_51a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a590ULL || rel >= 0x51a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a5f0 size=816 callers=0 calls=7
   calls: sub_502910, sub_506930, sub_506ae0, sub_507f30, sub_508140, sub_5082e0, sub_508480
*/
void sub_51a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a5f0ULL || rel >= 0x51a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a920 size=208 callers=0 calls=1
   calls: sub_502810
*/
void sub_51a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a920ULL || rel >= 0x51a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051a9f0 size=496 callers=0 calls=1
   calls: sub_507fe0
*/
void sub_51a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51a9f0ULL || rel >= 0x51abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051abe0 size=288 callers=0 calls=4
   calls: sub_502910, sub_508140, sub_5082e0, sub_508350
*/
void sub_51abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51abe0ULL || rel >= 0x51ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051ad00 size=96 callers=0 calls=0
*/
void sub_51ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51ad00ULL || rel >= 0x51ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051ad60 size=96 callers=0 calls=0
*/
void sub_51ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51ad60ULL || rel >= 0x51adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051adc0 size=992 callers=0 calls=10
   calls: sub_503310, sub_506930, sub_508140, sub_5082e0, sub_508350, sub_508390, sub_51c8c0, sub_5210c0, sub_5210e0, sub_521770
*/
void sub_51adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51adc0ULL || rel >= 0x51b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051b1a0 size=448 callers=3 calls=1
   calls: sub_51da60
*/
void sub_51b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51b1a0ULL || rel >= 0x51b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051b360 size=192 callers=0 calls=1
   calls: sub_502810
*/
void sub_51b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51b360ULL || rel >= 0x51b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051b420 size=416 callers=0 calls=0
*/
void sub_51b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51b420ULL || rel >= 0x51b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051b5c0 size=928 callers=0 calls=8
   calls: sub_502910, sub_506930, sub_5071a0, sub_507f30, sub_508140, sub_5082e0, sub_508390, sub_508480
*/
void sub_51b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51b5c0ULL || rel >= 0x51b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051b960 size=160 callers=0 calls=1
   calls: sub_507f30
*/
void sub_51b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51b960ULL || rel >= 0x51ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051ba00 size=960 callers=0 calls=8
   calls: sub_506930, sub_507f30, sub_507fe0, sub_508140, sub_508290, sub_5082e0, sub_508350, sub_508390
*/
void sub_51ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51ba00ULL || rel >= 0x51bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051bdc0 size=48 callers=0 calls=1
   calls: sub_508290
*/
void sub_51bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51bdc0ULL || rel >= 0x51bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051bdf0 size=16 callers=0 calls=0
*/
void sub_51bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51bdf0ULL || rel >= 0x51be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051be00 size=736 callers=0 calls=5
   calls: sub_502410, sub_506930, sub_508140, sub_5082e0, sub_508350
*/
void sub_51be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51be00ULL || rel >= 0x51c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051c0e0 size=528 callers=0 calls=2
   calls: sub_506930, sub_506ae0
*/
void sub_51c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51c0e0ULL || rel >= 0x51c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051c2f0 size=608 callers=9 calls=4
   calls: sub_502810, sub_502910, sub_506930, sub_5069b0
*/
void sub_51c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51c2f0ULL || rel >= 0x51c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051c550 size=192 callers=0 calls=0
*/
void sub_51c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51c550ULL || rel >= 0x51c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051c610 size=32 callers=0 calls=0
*/
void sub_51c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51c610ULL || rel >= 0x51c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051c630 size=48 callers=0 calls=1
   calls: sub_502810
*/
void sub_51c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51c630ULL || rel >= 0x51c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051c660 size=608 callers=1 calls=2
   calls: sub_503230, sub_5050a0
*/
void sub_51c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51c660ULL || rel >= 0x51c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051c8c0 size=1936 callers=2 calls=4
   calls: sub_503390, sub_506930, sub_507fe0, sub_508290
*/
void sub_51c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51c8c0ULL || rel >= 0x51d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051d050 size=1040 callers=0 calls=0
*/
void sub_51d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51d050ULL || rel >= 0x51d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051d460 size=1184 callers=0 calls=0
*/
void sub_51d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51d460ULL || rel >= 0x51d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051d900 size=352 callers=0 calls=1
   calls: sub_51c8c0
*/
void sub_51d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51d900ULL || rel >= 0x51da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051da60 size=1024 callers=2 calls=10
   calls: sub_502810, sub_502910, sub_5069b0, sub_506a50, sub_506ae0, sub_507f30, sub_508140, sub_5082e0, sub_508350, sub_5083e0
*/
void sub_51da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51da60ULL || rel >= 0x51de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051de60 size=192 callers=0 calls=1
   calls: sub_502910
*/
void sub_51de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51de60ULL || rel >= 0x51df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051df20 size=176 callers=0 calls=1
   calls: sub_502910
*/
void sub_51df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51df20ULL || rel >= 0x51dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051dfd0 size=144 callers=0 calls=0
*/
void sub_51dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51dfd0ULL || rel >= 0x51e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051e060 size=112 callers=0 calls=0
*/
void sub_51e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51e060ULL || rel >= 0x51e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051e0d0 size=4304 callers=0 calls=5
   calls: sub_502750, sub_502810, sub_506930, sub_508140, sub_5082e0
   ref: 0123456789ABCDEFo
*/
void f_0123456789ABCDEFo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51e0d0ULL || rel >= 0x51f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051f1a0 size=80 callers=0 calls=2
   calls: sub_508880, sub_51b1a0
*/
void sub_51f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51f1a0ULL || rel >= 0x51f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051f1f0 size=144 callers=0 calls=1
   calls: sub_51b1a0
*/
void sub_51f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51f1f0ULL || rel >= 0x51f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051f280 size=160 callers=0 calls=1
   calls: sub_51f320
   ref: CHARSET_ENCODING
   ref: CHARSET_REGISTRY
*/
void CHARSET_REGISTRY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51f280ULL || rel >= 0x51f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051f320 size=944 callers=2 calls=3
   calls: sub_506930, sub_507fe0, sub_508290
*/
void sub_51f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51f320ULL || rel >= 0x51f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051f6d0 size=32 callers=0 calls=0
*/
void sub_51f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51f6d0ULL || rel >= 0x51f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051f6f0 size=880 callers=1 calls=0
*/
void sub_51f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51f6f0ULL || rel >= 0x51fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0051fa60 size=1616 callers=1 calls=1
   calls: sub_5200b0
*/
void sub_51fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x51fa60ULL || rel >= 0x5200b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005200b0 size=656 callers=2 calls=0
*/
void sub_5200b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5200b0ULL || rel >= 0x520340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00520340 size=304 callers=2 calls=0
*/
void sub_520340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x520340ULL || rel >= 0x520470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00520470 size=208 callers=2 calls=0
*/
void sub_520470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x520470ULL || rel >= 0x520540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00520540 size=48 callers=0 calls=1
   calls: sub_51b1a0
*/
void sub_520540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x520540ULL || rel >= 0x520570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00520570 size=48 callers=0 calls=1
   calls: sub_502750
*/
void sub_520570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x520570ULL || rel >= 0x5205a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005205a0 size=16 callers=0 calls=0
*/
void sub_5205a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5205a0ULL || rel >= 0x5205b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005205b0 size=592 callers=0 calls=0
*/
void sub_5205b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5205b0ULL || rel >= 0x520800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00520800 size=336 callers=10 calls=0
*/
void sub_520800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x520800ULL || rel >= 0x520950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00520950 size=1904 callers=3 calls=0
*/
void sub_520950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x520950ULL || rel >= 0x5210c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005210c0 size=32 callers=1 calls=0
*/
void sub_5210c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5210c0ULL || rel >= 0x5210e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005210e0 size=1680 callers=1 calls=1
   calls: sub_5087b0
*/
void sub_5210e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5210e0ULL || rel >= 0x521770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00521770 size=96 callers=1 calls=1
   calls: sub_502810
*/
void sub_521770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x521770ULL || rel >= 0x5217d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005217d0 size=16 callers=0 calls=0
*/
void sub_5217d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5217d0ULL || rel >= 0x5217e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005217e0 size=16 callers=0 calls=0
*/
void sub_5217e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5217e0ULL || rel >= 0x5217f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005217f0 size=128 callers=0 calls=2
   calls: sub_5031d0, sub_505910
*/
void sub_5217f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5217f0ULL || rel >= 0x521870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00521870 size=3600 callers=0 calls=16
   calls: OpticalSize, glyph_dict, sub_502810, sub_502910, sub_505980, sub_506930, sub_507f30, sub_507fe0, sub_508140, sub_508290, sub_5082e0, sub_508320
   ... +4 more
   ref: .notdef
   ref: DFGirl-W6-WIN-BF
   ref: DFKaiSho-SB
   ref: DFKaiShu
   ref: DFKai-SB
   ref: DLCHayMedium
   ref: DLCHayBold
   ref: DLCKaiMedium
*/
void DLCRoundBold(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x521870ULL || rel >= 0x522680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00522680 size=192 callers=0 calls=3
   calls: sub_502810, sub_508290, sub_52a290
*/
void sub_522680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x522680ULL || rel >= 0x522740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00522740 size=32 callers=0 calls=0
*/
void sub_522740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x522740ULL || rel >= 0x522760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00522760 size=48 callers=0 calls=1
   calls: sub_52e860
*/
void sub_522760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x522760ULL || rel >= 0x522790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00522790 size=16 callers=0 calls=0
*/
void sub_522790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x522790ULL || rel >= 0x5227a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005227a0 size=4032 callers=0 calls=13
   calls: sub_5024d0, sub_5024f0, sub_5027d0, sub_502810, sub_502910, sub_503820, sub_506310, sub_508940, sub_523a60, sub_52d1d0, sub_52e440, sub_52e700
   ... +1 more
*/
void sub_5227a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5227a0ULL || rel >= 0x523760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00523760 size=64 callers=0 calls=0
*/
void sub_523760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x523760ULL || rel >= 0x5237a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005237a0 size=288 callers=0 calls=0
*/
void sub_5237a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5237a0ULL || rel >= 0x5238c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005238c0 size=304 callers=0 calls=4
   calls: sub_502410, sub_504970, sub_504ac0, sub_52cdd0
*/
void sub_5238c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5238c0ULL || rel >= 0x5239f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005239f0 size=112 callers=0 calls=2
   calls: sub_504970, sub_52cdd0
*/
void sub_5239f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5239f0ULL || rel >= 0x523a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00523a60 size=256 callers=1 calls=3
   calls: sub_502750, sub_502810, sub_502910
*/
void sub_523a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x523a60ULL || rel >= 0x523b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00523b60 size=21136 callers=0 calls=7
   calls: sub_502410, sub_502470, sub_5024d0, sub_502540, sub_529280, sub_530290, sub_530430
*/
void sub_523b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x523b60ULL || rel >= 0x528df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00528df0 size=256 callers=0 calls=1
   calls: sub_5022c0
*/
void sub_528df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x528df0ULL || rel >= 0x528ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00528ef0 size=272 callers=0 calls=1
   calls: sub_5022c0
*/
void sub_528ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x528ef0ULL || rel >= 0x529000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529000 size=272 callers=0 calls=2
   calls: sub_5022c0, sub_5024f0
*/
void sub_529000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529000ULL || rel >= 0x529110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529110 size=288 callers=0 calls=2
   calls: sub_5022c0, sub_5024f0
*/
void sub_529110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529110ULL || rel >= 0x529230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529230 size=16 callers=0 calls=0
*/
void sub_529230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529230ULL || rel >= 0x529240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529240 size=16 callers=0 calls=0
*/
void sub_529240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529240ULL || rel >= 0x529250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529250 size=16 callers=0 calls=0
*/
void sub_529250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529250ULL || rel >= 0x529260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529260 size=32 callers=0 calls=0
*/
void sub_529260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529260ULL || rel >= 0x529280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529280 size=400 callers=1 calls=0
*/
void sub_529280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529280ULL || rel >= 0x529410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529410 size=16 callers=0 calls=0
*/
void sub_529410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529410ULL || rel >= 0x529420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529420 size=368 callers=0 calls=2
   calls: OpticalSize, sub_52a480
*/
void sub_529420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529420ULL || rel >= 0x529590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529590 size=2480 callers=5 calls=15
   calls: sub_502750, sub_502910, sub_506930, sub_506a50, sub_506ae0, sub_507f30, sub_508140, sub_5082e0, sub_508350, sub_508390, sub_508480, sub_52b620
   ... +3 more
   ref: OpticalSize
   ref: Weight
*/
void OpticalSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529590ULL || rel >= 0x529f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00529f40 size=368 callers=1 calls=6
   calls: OpticalSize, sub_502810, sub_502910, sub_52a480, sub_52b620, sub_52b810
*/
void sub_529f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x529f40ULL || rel >= 0x52a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052a0b0 size=368 callers=0 calls=2
   calls: OpticalSize, sub_52a480
*/
void sub_52a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52a0b0ULL || rel >= 0x52a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052a220 size=112 callers=0 calls=0
*/
void sub_52a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52a220ULL || rel >= 0x52a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052a290 size=496 callers=1 calls=2
   calls: sub_502810, sub_52c400
*/
void sub_52a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52a290ULL || rel >= 0x52a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052a480 size=2000 callers=3 calls=14
   calls: OpticalSize, sub_502410, sub_5024d0, sub_502810, sub_502910, sub_506930, sub_507f30, sub_508140, sub_5082e0, sub_508350, sub_508390, sub_508480
   ... +2 more
*/
void sub_52a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52a480ULL || rel >= 0x52ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052ac50 size=256 callers=2 calls=5
   calls: sub_502910, sub_508140, sub_5082e0, sub_508350, sub_52ad50
*/
void sub_52ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ac50ULL || rel >= 0x52ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052ad50 size=1152 callers=2 calls=10
   calls: sub_5024d0, sub_502810, sub_502910, sub_508140, sub_5082e0, sub_508350, sub_508390, sub_52b1d0, sub_52b2e0, sub_52b480
*/
void sub_52ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ad50ULL || rel >= 0x52b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052b1d0 size=272 callers=2 calls=1
   calls: sub_502410
*/
void sub_52b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52b1d0ULL || rel >= 0x52b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052b2e0 size=416 callers=3 calls=3
   calls: sub_502910, sub_508320, sub_508350
*/
void sub_52b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52b2e0ULL || rel >= 0x52b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052b480 size=416 callers=3 calls=4
   calls: sub_502810, sub_502910, sub_508320, sub_508350
*/
void sub_52b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52b480ULL || rel >= 0x52b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052b620 size=496 callers=2 calls=6
   calls: sub_502810, sub_502910, sub_508140, sub_5082e0, sub_508350, sub_508390
*/
void sub_52b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52b620ULL || rel >= 0x52b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052b810 size=448 callers=3 calls=2
   calls: sub_502410, sub_5024f0
*/
void sub_52b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52b810ULL || rel >= 0x52b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052b9d0 size=1376 callers=2 calls=6
   calls: sub_502810, sub_502910, sub_506930, sub_506ae0, sub_5071a0, sub_5083e0
*/
void sub_52b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52b9d0ULL || rel >= 0x52bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052bf30 size=1232 callers=2 calls=0
*/
void sub_52bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52bf30ULL || rel >= 0x52c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052c400 size=240 callers=3 calls=1
   calls: sub_502810
*/
void sub_52c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52c400ULL || rel >= 0x52c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052c4f0 size=288 callers=0 calls=2
   calls: sub_52c850, sub_52cb80
*/
void sub_52c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52c4f0ULL || rel >= 0x52c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052c610 size=288 callers=0 calls=2
   calls: sub_52c850, sub_52cb80
*/
void sub_52c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52c610ULL || rel >= 0x52c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052c730 size=288 callers=1 calls=2
   calls: sub_52bf30, sub_52cb80
*/
void sub_52c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52c730ULL || rel >= 0x52c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052c850 size=816 callers=2 calls=9
   calls: sub_502750, sub_502910, sub_506930, sub_506a50, sub_506ae0, sub_5071a0, sub_507f30, sub_5083e0, sub_52b9d0
*/
void sub_52c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52c850ULL || rel >= 0x52cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052cb80 size=384 callers=3 calls=2
   calls: sub_5024d0, sub_5024f0
*/
void sub_52cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52cb80ULL || rel >= 0x52cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052cd00 size=208 callers=0 calls=1
   calls: sub_5024d0
*/
void sub_52cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52cd00ULL || rel >= 0x52cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052cdd0 size=464 callers=3 calls=2
   calls: sub_5024d0, sub_5024f0
*/
void sub_52cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52cdd0ULL || rel >= 0x52cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052cfa0 size=320 callers=1 calls=0
*/
void sub_52cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52cfa0ULL || rel >= 0x52d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052d0e0 size=160 callers=0 calls=0
   ref: interpreter-version
*/
void interpreter_version(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52d0e0ULL || rel >= 0x52d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052d180 size=80 callers=0 calls=0
   ref: interpreter-version
*/
void interpreter_version_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52d180ULL || rel >= 0x52d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052d1d0 size=4720 callers=3 calls=20
   calls: sub_5022c0, sub_5024d0, sub_502750, sub_502810, sub_502910, sub_502a30, sub_5030c0, sub_503270, sub_5037a0, sub_503820, sub_5043d0, sub_5047c0
   ... +8 more
*/
void sub_52d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52d1d0ULL || rel >= 0x52e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052e440 size=704 callers=3 calls=1
   calls: sub_502910
*/
void sub_52e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52e440ULL || rel >= 0x52e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052e700 size=352 callers=2 calls=1
   calls: sub_52e440
*/
void sub_52e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52e700ULL || rel >= 0x52e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052e860 size=320 callers=2 calls=1
   calls: sub_502810
*/
void sub_52e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52e860ULL || rel >= 0x52e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052e9a0 size=320 callers=2 calls=2
   calls: sub_506930, sub_507f30
*/
void sub_52e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52e9a0ULL || rel >= 0x52eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052eae0 size=3248 callers=3 calls=11
   calls: sub_5024d0, sub_502810, sub_502910, sub_506930, sub_508140, sub_5082e0, sub_508350, sub_52b1d0, sub_52b2e0, sub_52b480, sub_52f790
*/
void sub_52eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52eae0ULL || rel >= 0x52f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052f790 size=512 callers=3 calls=2
   calls: sub_5024d0, sub_5024f0
*/
void sub_52f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52f790ULL || rel >= 0x52f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052f990 size=784 callers=2 calls=0
*/
void sub_52f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52f990ULL || rel >= 0x52fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052fca0 size=16 callers=0 calls=0
*/
void sub_52fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52fca0ULL || rel >= 0x52fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052fcb0 size=16 callers=0 calls=0
*/
void sub_52fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52fcb0ULL || rel >= 0x52fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052fcc0 size=128 callers=0 calls=0
*/
void sub_52fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52fcc0ULL || rel >= 0x52fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052fd40 size=128 callers=0 calls=0
*/
void sub_52fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52fd40ULL || rel >= 0x52fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052fdc0 size=288 callers=0 calls=1
   calls: sub_502410
*/
void sub_52fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52fdc0ULL || rel >= 0x52fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052fee0 size=160 callers=0 calls=1
   calls: sub_502410
*/
void sub_52fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52fee0ULL || rel >= 0x52ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052ff80 size=96 callers=0 calls=0
*/
void sub_52ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ff80ULL || rel >= 0x52ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0052ffe0 size=32 callers=0 calls=0
*/
void sub_52ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x52ffe0ULL || rel >= 0x530000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530000 size=96 callers=0 calls=0
*/
void sub_530000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530000ULL || rel >= 0x530060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530060 size=32 callers=0 calls=0
*/
void sub_530060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530060ULL || rel >= 0x530080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530080 size=32 callers=0 calls=0
*/
void sub_530080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530080ULL || rel >= 0x5300a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005300a0 size=64 callers=0 calls=0
*/
void sub_5300a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5300a0ULL || rel >= 0x5300e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005300e0 size=64 callers=0 calls=0
*/
void sub_5300e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5300e0ULL || rel >= 0x530120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530120 size=48 callers=0 calls=0
*/
void sub_530120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530120ULL || rel >= 0x530150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530150 size=64 callers=0 calls=0
*/
void sub_530150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530150ULL || rel >= 0x530190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530190 size=64 callers=0 calls=0
*/
void sub_530190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530190ULL || rel >= 0x5301d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005301d0 size=96 callers=0 calls=0
*/
void sub_5301d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5301d0ULL || rel >= 0x530230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530230 size=96 callers=0 calls=0
*/
void sub_530230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530230ULL || rel >= 0x530290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530290 size=416 callers=3 calls=2
   calls: sub_5024d0, sub_5024f0
*/
void sub_530290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530290ULL || rel >= 0x530430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530430 size=352 callers=3 calls=1
   calls: sub_502410
*/
void sub_530430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530430ULL || rel >= 0x530590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530590 size=112 callers=0 calls=2
   calls: sub_506930, sub_508140
*/
void sub_530590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530590ULL || rel >= 0x530600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530600 size=160 callers=0 calls=0
*/
void sub_530600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530600ULL || rel >= 0x5306a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005306a0 size=1056 callers=0 calls=2
   calls: sub_502910, sub_502a30
*/
void sub_5306a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5306a0ULL || rel >= 0x530ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530ac0 size=688 callers=0 calls=2
   calls: sub_502f40, sub_507f30
*/
void sub_530ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530ac0ULL || rel >= 0x530d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530d70 size=16 callers=0 calls=0
*/
void sub_530d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530d70ULL || rel >= 0x530d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530d80 size=160 callers=1 calls=3
   calls: sub_4bf660, sub_4f1290, sub_531a90
*/
void sub_530d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530d80ULL || rel >= 0x530e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530e20 size=176 callers=1 calls=4
   calls: SiCore_Array_189, SiCore_String_69, SiGfx_Image_7, sub_532220
*/
void sub_530e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530e20ULL || rel >= 0x530ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530ed0 size=64 callers=0 calls=1
   calls: sub_532220
*/
void sub_530ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530ed0ULL || rel >= 0x530f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530f10 size=16 callers=0 calls=0
*/
void sub_530f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530f10ULL || rel >= 0x530f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530f20 size=48 callers=0 calls=1
   calls: sub_500540
*/
void sub_530f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530f20ULL || rel >= 0x530f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00530f50 size=752 callers=0 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4f18b0, sub_4f3520, sub_531240
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_77(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x530f50ULL || rel >= 0x531240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531240 size=336 callers=2 calls=1
   calls: SiCore_Array_190
*/
void sub_531240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531240ULL || rel >= 0x531390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531390 size=96 callers=0 calls=2
   calls: SiGfx_Image_7, sub_532220
*/
void sub_531390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531390ULL || rel >= 0x5313f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005313f0 size=48 callers=0 calls=1
   calls: sub_532220
*/
void sub_5313f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5313f0ULL || rel >= 0x531420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531420 size=720 callers=1 calls=1
   calls: sub_532ca0
*/
void sub_531420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531420ULL || rel >= 0x5316f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005316f0 size=32 callers=2 calls=0
*/
void sub_5316f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5316f0ULL || rel >= 0x531710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531710 size=64 callers=1 calls=1
   calls: sub_531750
*/
void sub_531710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531710ULL || rel >= 0x531750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531750 size=304 callers=1 calls=1
   calls: sub_532220
*/
void sub_531750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531750ULL || rel >= 0x531880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531880 size=352 callers=0 calls=0
*/
void sub_531880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531880ULL || rel >= 0x5319e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005319e0 size=32 callers=0 calls=0
*/
void sub_5319e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5319e0ULL || rel >= 0x531a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531a00 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_FreeType_FaceCache.h
*/
void SiGfx_FreeType_FaceCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531a00ULL || rel >= 0x531a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531a80 size=16 callers=0 calls=0
*/
void sub_531a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531a80ULL || rel >= 0x531a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531a90 size=320 callers=1 calls=1
   calls: sub_4bc640
*/
void sub_531a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531a90ULL || rel >= 0x531bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531bd0 size=80 callers=0 calls=2
   calls: SiCore_Array_189, sub_532220
*/
void sub_531bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531bd0ULL || rel >= 0x531c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531c20 size=416 callers=3 calls=1
   calls: SiCore_Pool_5
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_189(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531c20ULL || rel >= 0x531dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531dc0 size=48 callers=0 calls=1
   calls: SiCore_Array_189
*/
void sub_531dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531dc0ULL || rel >= 0x531df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00531df0 size=560 callers=1 calls=1
   calls: SiCore_Array_196
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x531df0ULL || rel >= 0x532020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532020 size=512 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Include\SiCore/SiCore_Pool.h
*/
void SiCore_Pool_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532020ULL || rel >= 0x532220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532220 size=224 callers=10 calls=0
*/
void sub_532220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532220ULL || rel >= 0x532300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532300 size=624 callers=0 calls=3
   calls: SiCore_Array_195, SiCore_Array_196, sub_4bc640
   ref: ../../../../Include\SiCore/SiCore_Pool.h
*/
void SiCore_Pool_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532300ULL || rel >= 0x532570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532570 size=96 callers=0 calls=0
*/
void sub_532570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532570ULL || rel >= 0x5325d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005325d0 size=96 callers=0 calls=0
*/
void sub_5325d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5325d0ULL || rel >= 0x532630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532630 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_191(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532630ULL || rel >= 0x5326b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005326b0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_192(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5326b0ULL || rel >= 0x532710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532710 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_193(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532710ULL || rel >= 0x5327b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005327b0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_194(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5327b0ULL || rel >= 0x532840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532840 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_195(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532840ULL || rel >= 0x5329e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005329e0 size=704 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_196(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5329e0ULL || rel >= 0x532ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532ca0 size=496 callers=8 calls=4
   calls: sub_532ca0, sub_532e90, sub_533120, sub_5333b0
*/
void sub_532ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532ca0ULL || rel >= 0x532e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00532e90 size=656 callers=1 calls=1
   calls: sub_533880
*/
void sub_532e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x532e90ULL || rel >= 0x533120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533120 size=656 callers=1 calls=1
   calls: sub_533880
*/
void sub_533120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533120ULL || rel >= 0x5333b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005333b0 size=1232 callers=1 calls=1
   calls: sub_533880
*/
void sub_5333b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5333b0ULL || rel >= 0x533880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533880 size=208 callers=8 calls=0
*/
void sub_533880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533880ULL || rel >= 0x533950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533950 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_533950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533950ULL || rel >= 0x5339d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005339d0 size=64 callers=1 calls=1
   calls: sub_530d80
*/
void sub_5339d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5339d0ULL || rel >= 0x533a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533a10 size=128 callers=0 calls=2
   calls: SiGfx_Image_7, sub_532220
*/
void sub_533a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533a10ULL || rel >= 0x533a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533a90 size=128 callers=0 calls=3
   calls: SiGfx_Image_7, sub_530e20, sub_532220
*/
void sub_533a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533a90ULL || rel >= 0x533b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533b10 size=656 callers=0 calls=3
   calls: sub_4bc640, sub_4bc690, sub_531240
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533b10ULL || rel >= 0x533da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533da0 size=96 callers=0 calls=2
   calls: SiGfx_Image_7, sub_532220
*/
void sub_533da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533da0ULL || rel >= 0x533e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533e00 size=16 callers=0 calls=0
*/
void sub_533e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533e00ULL || rel >= 0x533e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533e10 size=368 callers=0 calls=2
   calls: sub_561e10, sub_561e50
*/
void sub_533e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533e10ULL || rel >= 0x533f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00533f80 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_533f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x533f80ULL || rel >= 0x534000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534000 size=112 callers=11 calls=3
   calls: sub_4bf660, sub_534070, sub_596410
*/
void sub_534000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534000ULL || rel >= 0x534070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534070 size=320 callers=2 calls=1
   calls: sub_4bc640
*/
void sub_534070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534070ULL || rel >= 0x5341b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005341b0 size=96 callers=11 calls=4
   calls: SiCore_Array_197, SiCore_Pool_7, sub_534460, sub_596460
*/
void sub_5341b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5341b0ULL || rel >= 0x534210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534210 size=416 callers=4 calls=1
   calls: SiCore_Pool_7
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_197(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534210ULL || rel >= 0x5343b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005343b0 size=112 callers=0 calls=5
   calls: SiCore_Array_197, SiCore_Pool_7, sub_4bf6a0, sub_534460, sub_596460
*/
void sub_5343b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5343b0ULL || rel >= 0x534420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534420 size=16 callers=11 calls=0
*/
void sub_534420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534420ULL || rel >= 0x534430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534430 size=48 callers=22 calls=1
   calls: sub_534460
*/
void sub_534430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534430ULL || rel >= 0x534460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534460 size=288 callers=6 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534460ULL || rel >= 0x534580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534580 size=512 callers=5 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Include\SiCore/SiCore_Pool.h
*/
void SiCore_Pool_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534580ULL || rel >= 0x534780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534780 size=144 callers=11 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534780ULL || rel >= 0x534810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534810 size=96 callers=1 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534810ULL || rel >= 0x534870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534870 size=144 callers=1 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534870ULL || rel >= 0x534900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534900 size=144 callers=11 calls=3
   calls: sub_4c34a0, sub_596640, sub_596680
*/
void sub_534900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534900ULL || rel >= 0x534990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534990 size=272 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534990ULL || rel >= 0x534aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534aa0 size=272 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534aa0ULL || rel >= 0x534bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534bb0 size=272 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534bb0ULL || rel >= 0x534cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534cc0 size=272 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534cc0ULL || rel >= 0x534dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534dd0 size=272 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534dd0ULL || rel >= 0x534ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534ee0 size=272 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_534ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534ee0ULL || rel >= 0x534ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00534ff0 size=144 callers=0 calls=3
   calls: sub_4ff090, sub_596640, sub_596680
*/
void sub_534ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x534ff0ULL || rel >= 0x535080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00535080 size=320 callers=1 calls=6
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_4cbf40, sub_534070, sub_596410
*/
void sub_535080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535080ULL || rel >= 0x5351c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005351c0 size=320 callers=1 calls=5
   calls: SiCore_Array_197, SiCore_Pool_7, sub_534460, sub_535380, sub_596460
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_79(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5351c0ULL || rel >= 0x535300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00535300 size=16 callers=0 calls=0
*/
void sub_535300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535300ULL || rel >= 0x535310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00535310 size=32 callers=1 calls=1
   calls: SiCore_Array_179
*/
void sub_535310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535310ULL || rel >= 0x535330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00535330 size=80 callers=2 calls=2
   calls: sub_534460, sub_535380
*/
void sub_535330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535330ULL || rel >= 0x535380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00535380 size=304 callers=5 calls=0
*/
void sub_535380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535380ULL || rel >= 0x5354b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005354b0 size=144 callers=0 calls=1
   calls: sub_4cbf40
*/
void sub_5354b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5354b0ULL || rel >= 0x535540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00535540 size=16 callers=0 calls=0
*/
void sub_535540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535540ULL || rel >= 0x535550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00535550 size=2720 callers=0 calls=3
   calls: SiGfx_ShaderEffect_Impl_3, sub_4c9c20, sub_4cbf40
   ref: SolidColorByLargePoint
   ref: ShowTextureCube_Array
   ref: SiGfx::CommonShaderEffect::Composite
   ref: YUVBlt
   ref: SiGfx::CommonShaderEffect::BltTexture
   ref: SiGfx::CommonShaderEffect::ShowTexture
   ref: ShowTexture2D_Array
   ref: SiGfx::CommonShaderEffect::Blur
*/
void SolidColorByLargePoint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535550ULL || rel >= 0x535ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00535ff0 size=16 callers=0 calls=0
*/
void sub_535ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x535ff0ULL || rel >= 0x536000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536000 size=688 callers=0 calls=2
   calls: SiGfx_ShaderEffect_Impl_3, sub_4cbf40
   ref: SiGfx::DebugShaderEffect
   ref: ShowNormal
   ref: ShowVertexColorTex
   ref: ShowTexCoord
   ref: ShowVertexColorWithWireframe
   ref: ShowVertexColor
*/
void ShowVertexColorWithWireframe(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536000ULL || rel >= 0x5362b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005362b0 size=112 callers=0 calls=1
   calls: sub_535380
*/
void sub_5362b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5362b0ULL || rel >= 0x536320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536320 size=112 callers=0 calls=1
   calls: sub_535380
*/
void sub_536320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536320ULL || rel >= 0x536390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536390 size=16 callers=0 calls=0
*/
void sub_536390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536390ULL || rel >= 0x5363a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005363a0 size=16 callers=0 calls=0
*/
void sub_5363a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5363a0ULL || rel >= 0x5363b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005363b0 size=16 callers=0 calls=0
*/
void sub_5363b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5363b0ULL || rel >= 0x5363c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005363c0 size=48 callers=0 calls=1
   calls: SiCore_Array_197
*/
void sub_5363c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5363c0ULL || rel >= 0x5363f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005363f0 size=224 callers=0 calls=0
*/
void sub_5363f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5363f0ULL || rel >= 0x5364d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005364d0 size=624 callers=0 calls=3
   calls: SiCore_Array_180, SiCore_Array_202, sub_4bc640
   ref: ../../../../Include\SiCore/SiCore_Pool.h
*/
void SiCore_Pool_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5364d0ULL || rel >= 0x536740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536740 size=96 callers=0 calls=0
*/
void sub_536740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536740ULL || rel >= 0x5367a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005367a0 size=96 callers=0 calls=0
*/
void sub_5367a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5367a0ULL || rel >= 0x536800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536800 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_198(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536800ULL || rel >= 0x536880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536880 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_199(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536880ULL || rel >= 0x5368e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005368e0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5368e0ULL || rel >= 0x536980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536980 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_201(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536980ULL || rel >= 0x536a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536a10 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_202(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536a10ULL || rel >= 0x536bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536bb0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_536bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536bb0ULL || rel >= 0x536c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536c30 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_536c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536c30ULL || rel >= 0x536cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536cb0 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_536cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536cb0ULL || rel >= 0x536cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536cf0 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_536cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536cf0ULL || rel >= 0x536d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536d30 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_536d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536d30ULL || rel >= 0x536d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536d70 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_536d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536d70ULL || rel >= 0x536db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536db0 size=16 callers=0 calls=0
*/
void sub_536db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536db0ULL || rel >= 0x536dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536dc0 size=512 callers=4 calls=7
   calls: SiCore_Array_203, sub_4c5a90, sub_4fef10, sub_4ff090, sub_537550, sub_596640, sub_596680
   ref: Buffer_%d
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_BufferPool.cpp
*/
void SiGfx_NX_BufferPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536dc0ULL || rel >= 0x536fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00536fc0 size=64 callers=0 calls=1
   calls: sub_537000
*/
void sub_536fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x536fc0ULL || rel >= 0x537000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537000 size=384 callers=1 calls=1
   calls: SiGfx_NX_BufferPool
*/
void sub_537000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537000ULL || rel >= 0x537180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537180 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_537180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537180ULL || rel >= 0x537200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537200 size=368 callers=2 calls=3
   calls: sub_4bc640, sub_4bc690, sub_538d70
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_203(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537200ULL || rel >= 0x537370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537370 size=240 callers=2 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537370ULL || rel >= 0x537460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537460 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_204(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537460ULL || rel >= 0x5374e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005374e0 size=16 callers=0 calls=0
*/
void sub_5374e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5374e0ULL || rel >= 0x5374f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005374f0 size=48 callers=0 calls=1
   calls: SiCore_String_80
*/
void sub_5374f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5374f0ULL || rel >= 0x537520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537520 size=48 callers=0 calls=1
   calls: SiCore_String_80
*/
void sub_537520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537520ULL || rel >= 0x537550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537550 size=16 callers=1 calls=0
*/
void sub_537550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537550ULL || rel >= 0x537560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537560 size=112 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_537560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537560ULL || rel >= 0x5375d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005375d0 size=112 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_5375d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5375d0ULL || rel >= 0x537640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537640 size=16 callers=0 calls=0
*/
void sub_537640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537640ULL || rel >= 0x537650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537650 size=16 callers=0 calls=0
*/
void sub_537650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537650ULL || rel >= 0x537660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537660 size=16 callers=0 calls=0
*/
void sub_537660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537660ULL || rel >= 0x537670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537670 size=16 callers=0 calls=0
*/
void sub_537670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537670ULL || rel >= 0x537680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537680 size=16 callers=0 calls=0
*/
void sub_537680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537680ULL || rel >= 0x537690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537690 size=16 callers=0 calls=0
*/
void sub_537690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537690ULL || rel >= 0x5376a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005376a0 size=16 callers=0 calls=0
*/
void sub_5376a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5376a0ULL || rel >= 0x5376b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005376b0 size=16 callers=0 calls=0
*/
void sub_5376b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5376b0ULL || rel >= 0x5376c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005376c0 size=16 callers=0 calls=0
*/
void sub_5376c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5376c0ULL || rel >= 0x5376d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005376d0 size=16 callers=0 calls=0
*/
void sub_5376d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5376d0ULL || rel >= 0x5376e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005376e0 size=16 callers=0 calls=0
*/
void sub_5376e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5376e0ULL || rel >= 0x5376f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005376f0 size=16 callers=0 calls=0
*/
void sub_5376f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5376f0ULL || rel >= 0x537700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537700 size=16 callers=0 calls=0
*/
void sub_537700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537700ULL || rel >= 0x537710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537710 size=16 callers=0 calls=0
*/
void sub_537710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537710ULL || rel >= 0x537720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537720 size=16 callers=0 calls=0
*/
void sub_537720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537720ULL || rel >= 0x537730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537730 size=16 callers=0 calls=0
*/
void sub_537730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537730ULL || rel >= 0x537740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537740 size=16 callers=0 calls=0
*/
void sub_537740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537740ULL || rel >= 0x537750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537750 size=16 callers=0 calls=0
*/
void sub_537750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537750ULL || rel >= 0x537760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537760 size=464 callers=0 calls=6
   calls: SiCore_Array_206, SiGfx_NX_Buffer_Impl, sub_537930, sub_537b60, sub_537df0, sub_538090
*/
void sub_537760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537760ULL || rel >= 0x537930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537930 size=560 callers=1 calls=1
   calls: sub_5386d0
*/
void sub_537930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537930ULL || rel >= 0x537b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537b60 size=656 callers=1 calls=1
   calls: sub_5386d0
*/
void sub_537b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537b60ULL || rel >= 0x537df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00537df0 size=672 callers=1 calls=1
   calls: sub_5386d0
*/
void sub_537df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x537df0ULL || rel >= 0x538090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538090 size=688 callers=1 calls=1
   calls: sub_5386d0
*/
void sub_538090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538090ULL || rel >= 0x538340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538340 size=736 callers=1 calls=1
   calls: sub_4fb200
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Buffer_Impl.cpp
*/
void SiGfx_NX_Buffer_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538340ULL || rel >= 0x538620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538620 size=176 callers=0 calls=2
   calls: SiGfx_NX_MemoryHeap_Impl_6, sub_4fb290
*/
void sub_538620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538620ULL || rel >= 0x5386d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005386d0 size=576 callers=4 calls=4
   calls: SiGfx_NX_Device_Impl_18, SiGfx_NX_Device_Impl_19, SiGfx_NX_Device_Impl_20, SiGfx_NX_MemoryHeap_Impl_5
*/
void sub_5386d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5386d0ULL || rel >= 0x538910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538910 size=32 callers=1 calls=0
*/
void sub_538910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538910ULL || rel >= 0x538930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538930 size=16 callers=0 calls=0
*/
void sub_538930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538930ULL || rel >= 0x538940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538940 size=16 callers=0 calls=0
*/
void sub_538940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538940ULL || rel >= 0x538950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538950 size=16 callers=0 calls=0
*/
void sub_538950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538950ULL || rel >= 0x538960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538960 size=16 callers=0 calls=0
*/
void sub_538960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538960ULL || rel >= 0x538970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538970 size=16 callers=0 calls=0
*/
void sub_538970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538970ULL || rel >= 0x538980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538980 size=16 callers=0 calls=0
*/
void sub_538980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538980ULL || rel >= 0x538990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00538990 size=16 callers=0 calls=0
*/
void sub_538990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x538990ULL || rel >= 0x5389a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005389a0 size=16 callers=0 calls=0
*/
void sub_5389a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5389a0ULL || rel >= 0x5389b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

