/* main functions 00f65060..00f803d0 (122 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00f65060 size=1888 callers=1 calls=11
   calls: sub_5cfaf0, sub_f64be0, sub_f668c0, sub_f669b0, sub_f66aa0, sub_f66b90, sub_f66c80, sub_f66e70, sub_f66f60, sub_f67050, sub_f67140
   ref: menu_method
   ref: menu_gateway
*/
void menu_gateway_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf65060ULL || rel >= 0xf657c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f657c0 size=2928 callers=32 calls=6
   calls: sub_e806b0, sub_eb6230, sub_f67340, sub_f67380, sub_f67a20, sub_f67a60
*/
void sub_f657c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf657c0ULL || rel >= 0xf66330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66330 size=160 callers=48 calls=1
   calls: sub_eb6530
*/
void sub_f66330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66330ULL || rel >= 0xf663d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f663d0 size=592 callers=6 calls=1
   calls: sub_eb6230
*/
void sub_f663d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf663d0ULL || rel >= 0xf66620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66620 size=80 callers=0 calls=0
*/
void sub_f66620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66620ULL || rel >= 0xf66670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66670 size=240 callers=0 calls=0
*/
void sub_f66670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66670ULL || rel >= 0xf66760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66760 size=80 callers=0 calls=0
*/
void sub_f66760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66760ULL || rel >= 0xf667b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f667b0 size=80 callers=0 calls=0
*/
void sub_f667b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf667b0ULL || rel >= 0xf66800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66800 size=16 callers=0 calls=0
*/
void sub_f66800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66800ULL || rel >= 0xf66810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66810 size=16 callers=0 calls=0
*/
void sub_f66810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66810ULL || rel >= 0xf66820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66820 size=80 callers=0 calls=0
*/
void sub_f66820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66820ULL || rel >= 0xf66870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66870 size=80 callers=0 calls=0
*/
void sub_f66870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66870ULL || rel >= 0xf668c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f668c0 size=240 callers=7 calls=1
   calls: sub_e7f6c0
*/
void sub_f668c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf668c0ULL || rel >= 0xf669b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f669b0 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_f669b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf669b0ULL || rel >= 0xf66aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66aa0 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_f66aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66aa0ULL || rel >= 0xf66b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66b90 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_f66b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66b90ULL || rel >= 0xf66c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66c80 size=496 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f66c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66c80ULL || rel >= 0xf66e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66e70 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_f66e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66e70ULL || rel >= 0xf66f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f66f60 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_f66f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf66f60ULL || rel >= 0xf67050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67050 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_f67050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67050ULL || rel >= 0xf67140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67140 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_f67140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67140ULL || rel >= 0xf67230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67230 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/mystery/bin/mystery_bg_00_lyt.bin
*/
void mystery_bg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67230ULL || rel >= 0xf67340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67340 size=64 callers=1 calls=1
   calls: sub_e83430
*/
void sub_f67340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67340ULL || rel >= 0xf67380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67380 size=64 callers=1 calls=1
   calls: sub_e83430
*/
void sub_f67380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67380ULL || rel >= 0xf673c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f673c0 size=16 callers=0 calls=0
*/
void sub_f673c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf673c0ULL || rel >= 0xf673d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f673d0 size=16 callers=0 calls=0
*/
void sub_f673d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf673d0ULL || rel >= 0xf673e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f673e0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f673e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf673e0ULL || rel >= 0xf67450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67450 size=32 callers=0 calls=0
*/
void sub_f67450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67450ULL || rel >= 0xf67470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67470 size=32 callers=0 calls=0
*/
void sub_f67470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67470ULL || rel >= 0xf67490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67490 size=32 callers=0 calls=0
*/
void sub_f67490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67490ULL || rel >= 0xf674b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f674b0 size=32 callers=0 calls=0
*/
void sub_f674b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf674b0ULL || rel >= 0xf674d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f674d0 size=16 callers=0 calls=0
*/
void sub_f674d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf674d0ULL || rel >= 0xf674e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f674e0 size=16 callers=0 calls=0
*/
void sub_f674e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf674e0ULL || rel >= 0xf674f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f674f0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f674f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf674f0ULL || rel >= 0xf67560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67560 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f67560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67560ULL || rel >= 0xf675d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f675d0 size=16 callers=0 calls=0
*/
void sub_f675d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf675d0ULL || rel >= 0xf675e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f675e0 size=16 callers=0 calls=0
*/
void sub_f675e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf675e0ULL || rel >= 0xf675f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f675f0 size=32 callers=0 calls=0
*/
void sub_f675f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf675f0ULL || rel >= 0xf67610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67610 size=32 callers=0 calls=0
*/
void sub_f67610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67610ULL || rel >= 0xf67630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67630 size=32 callers=0 calls=0
*/
void sub_f67630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67630ULL || rel >= 0xf67650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67650 size=32 callers=0 calls=0
*/
void sub_f67650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67650ULL || rel >= 0xf67670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67670 size=16 callers=0 calls=0
*/
void sub_f67670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67670ULL || rel >= 0xf67680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67680 size=16 callers=0 calls=0
*/
void sub_f67680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67680ULL || rel >= 0xf67690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67690 size=304 callers=27 calls=0
*/
void sub_f67690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67690ULL || rel >= 0xf677c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f677c0 size=48 callers=5 calls=0
*/
void sub_f677c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf677c0ULL || rel >= 0xf677f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f677f0 size=64 callers=4 calls=0
*/
void sub_f677f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf677f0ULL || rel >= 0xf67830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67830 size=16 callers=3 calls=0
*/
void sub_f67830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67830ULL || rel >= 0xf67840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67840 size=208 callers=0 calls=3
   calls: sub_8f19b0, sub_e7ea90, sub_e7f7e0
*/
void sub_f67840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67840ULL || rel >= 0xf67910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67910 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/mystery/bin/mystery_title_00_lyt.bin
*/
void mystery_title_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67910ULL || rel >= 0xf67a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67a20 size=64 callers=1 calls=1
   calls: sub_e83430
*/
void sub_f67a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67a20ULL || rel >= 0xf67a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67a60 size=64 callers=1 calls=1
   calls: sub_e83430
*/
void sub_f67a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67a60ULL || rel >= 0xf67aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67aa0 size=16 callers=0 calls=0
*/
void sub_f67aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67aa0ULL || rel >= 0xf67ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67ab0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f67ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67ab0ULL || rel >= 0xf67b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67b20 size=16 callers=0 calls=0
*/
void sub_f67b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67b20ULL || rel >= 0xf67b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67b30 size=16 callers=0 calls=0
*/
void sub_f67b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67b30ULL || rel >= 0xf67b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67b40 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f67b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67b40ULL || rel >= 0xf67bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67bb0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f67bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67bb0ULL || rel >= 0xf67c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67c20 size=16 callers=0 calls=0
*/
void sub_f67c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67c20ULL || rel >= 0xf67c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67c30 size=16 callers=0 calls=0
*/
void sub_f67c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67c30ULL || rel >= 0xf67c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67c40 size=16 callers=0 calls=0
*/
void sub_f67c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67c40ULL || rel >= 0xf67c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67c50 size=16 callers=0 calls=0
*/
void sub_f67c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67c50ULL || rel >= 0xf67c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67c60 size=224 callers=2 calls=2
   calls: sub_5e2350, sub_f68260
*/
void sub_f67c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67c60ULL || rel >= 0xf67d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67d40 size=112 callers=2 calls=1
   calls: sub_f68260
*/
void sub_f67d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67d40ULL || rel >= 0xf67db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67db0 size=32 callers=63 calls=0
*/
void sub_f67db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67db0ULL || rel >= 0xf67dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67dd0 size=16 callers=9 calls=0
*/
void sub_f67dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67dd0ULL || rel >= 0xf67de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67de0 size=16 callers=10 calls=0
*/
void sub_f67de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67de0ULL || rel >= 0xf67df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67df0 size=144 callers=0 calls=0
*/
void sub_f67df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67df0ULL || rel >= 0xf67e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67e80 size=144 callers=0 calls=0
*/
void sub_f67e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67e80ULL || rel >= 0xf67f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f67f10 size=240 callers=0 calls=0
*/
void sub_f67f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf67f10ULL || rel >= 0xf68000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68000 size=144 callers=0 calls=0
*/
void sub_f68000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68000ULL || rel >= 0xf68090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68090 size=144 callers=0 calls=0
*/
void sub_f68090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68090ULL || rel >= 0xf68120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68120 size=16 callers=0 calls=0
*/
void sub_f68120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68120ULL || rel >= 0xf68130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68130 size=16 callers=0 calls=0
*/
void sub_f68130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68130ULL || rel >= 0xf68140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68140 size=144 callers=0 calls=0
*/
void sub_f68140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68140ULL || rel >= 0xf681d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f681d0 size=144 callers=0 calls=0
*/
void sub_f681d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf681d0ULL || rel >= 0xf68260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68260 size=224 callers=2 calls=1
   calls: sub_f68be0
*/
void sub_f68260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68260ULL || rel >= 0xf68340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68340 size=208 callers=1 calls=3
   calls: sub_138a350, sub_138bf00, sub_f68410
*/
void sub_f68340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68340ULL || rel >= 0xf68410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68410 size=656 callers=1 calls=7
   calls: sub_1386fc0, sub_1387040, sub_13871e0, sub_1387260, sub_138b6d0, sub_138b700, sub_138b7c0
*/
void sub_f68410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68410ULL || rel >= 0xf686a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f686a0 size=48 callers=1 calls=0
*/
void sub_f686a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf686a0ULL || rel >= 0xf686d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f686d0 size=688 callers=1 calls=2
   calls: sub_1386fc0, sub_13871e0
*/
void sub_f686d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf686d0ULL || rel >= 0xf68980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68980 size=608 callers=0 calls=10
   calls: sub_138a340, sub_15b7a80, sub_15b7a90, sub_15b7b20, sub_15b7d50, sub_15b7d70, sub_15b80a0, sub_15b80b0, sub_15b80c0, sub_15b8100
*/
void sub_f68980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68980ULL || rel >= 0xf68be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68be0 size=416 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_f68be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68be0ULL || rel >= 0xf68d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68d80 size=32 callers=10 calls=0
*/
void sub_f68d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68d80ULL || rel >= 0xf68da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68da0 size=96 callers=8 calls=0
*/
void sub_f68da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68da0ULL || rel >= 0xf68e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68e00 size=256 callers=0 calls=0
*/
void sub_f68e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68e00ULL || rel >= 0xf68f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f68f00 size=448 callers=0 calls=2
   calls: sub_f690c0, sub_f696a0
*/
void sub_f68f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf68f00ULL || rel >= 0xf690c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f690c0 size=1504 callers=1 calls=9
   calls: sub_1019580, sub_1386fc0, sub_1387040, sub_13871e0, sub_1387260, sub_138ba80, sub_7c2d80, sub_f6ae00, sub_f6af10
*/
void sub_f690c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf690c0ULL || rel >= 0xf696a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f696a0 size=2032 callers=1 calls=7
   calls: sub_1118010, sub_1386fc0, sub_13871e0, sub_f686d0, sub_f69e90, sub_f6a0c0, sub_f6af10
*/
void sub_f696a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf696a0ULL || rel >= 0xf69e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f69e90 size=560 callers=1 calls=1
   calls: sub_f6af10
*/
void sub_f69e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf69e90ULL || rel >= 0xf6a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a0c0 size=1392 callers=1 calls=0
*/
void sub_f6a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a0c0ULL || rel >= 0xf6a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a630 size=128 callers=0 calls=0
*/
void sub_f6a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a630ULL || rel >= 0xf6a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a6b0 size=128 callers=0 calls=0
*/
void sub_f6a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a6b0ULL || rel >= 0xf6a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a730 size=240 callers=0 calls=0
*/
void sub_f6a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a730ULL || rel >= 0xf6a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a820 size=128 callers=0 calls=0
*/
void sub_f6a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a820ULL || rel >= 0xf6a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a8a0 size=128 callers=0 calls=0
*/
void sub_f6a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a8a0ULL || rel >= 0xf6a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a920 size=16 callers=0 calls=0
*/
void sub_f6a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a920ULL || rel >= 0xf6a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a930 size=16 callers=0 calls=0
*/
void sub_f6a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a930ULL || rel >= 0xf6a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a940 size=128 callers=0 calls=0
*/
void sub_f6a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a940ULL || rel >= 0xf6a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6a9c0 size=128 callers=0 calls=0
*/
void sub_f6a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6a9c0ULL || rel >= 0xf6aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6aa40 size=608 callers=0 calls=0
*/
void sub_f6aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6aa40ULL || rel >= 0xf6aca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6aca0 size=16 callers=0 calls=0
*/
void sub_f6aca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6aca0ULL || rel >= 0xf6acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6acb0 size=240 callers=0 calls=0
*/
void sub_f6acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6acb0ULL || rel >= 0xf6ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ada0 size=16 callers=0 calls=0
*/
void sub_f6ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ada0ULL || rel >= 0xf6adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6adb0 size=16 callers=0 calls=0
*/
void sub_f6adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6adb0ULL || rel >= 0xf6adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6adc0 size=16 callers=0 calls=0
*/
void sub_f6adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6adc0ULL || rel >= 0xf6add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6add0 size=16 callers=0 calls=0
*/
void sub_f6add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6add0ULL || rel >= 0xf6ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ade0 size=16 callers=0 calls=0
*/
void sub_f6ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ade0ULL || rel >= 0xf6adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6adf0 size=16 callers=0 calls=0
*/
void sub_f6adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6adf0ULL || rel >= 0xf6ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ae00 size=272 callers=1 calls=2
   calls: sub_138bf00, sub_5e2350
*/
void sub_f6ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ae00ULL || rel >= 0xf6af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6af10 size=544 callers=5 calls=0
*/
void sub_f6af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6af10ULL || rel >= 0xf6b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b130 size=1120 callers=0 calls=8
   calls: T_mystery_btn_heading_00, sub_5cfad0, sub_67b990, sub_67d450, sub_e7ea90, sub_e7f7e0, sub_f6c840, sub_f6c870
*/
void sub_f6b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b130ULL || rel >= 0xf6b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b590 size=112 callers=0 calls=2
   calls: sub_14e6550, sub_f6c620
*/
void sub_f6b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b590ULL || rel >= 0xf6b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b600 size=224 callers=0 calls=3
   calls: sub_e80580, sub_e807f0, sub_f6c6f0
*/
void sub_f6b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b600ULL || rel >= 0xf6b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b6e0 size=48 callers=1 calls=0
*/
void sub_f6b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b6e0ULL || rel >= 0xf6b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b710 size=128 callers=0 calls=0
*/
void sub_f6b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b710ULL || rel >= 0xf6b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b790 size=128 callers=0 calls=0
*/
void sub_f6b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b790ULL || rel >= 0xf6b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b810 size=176 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f6b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b810ULL || rel >= 0xf6b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b8c0 size=128 callers=0 calls=0
*/
void sub_f6b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b8c0ULL || rel >= 0xf6b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b940 size=128 callers=0 calls=0
*/
void sub_f6b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b940ULL || rel >= 0xf6b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6b9c0 size=176 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f6b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6b9c0ULL || rel >= 0xf6ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ba70 size=176 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f6ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ba70ULL || rel >= 0xf6bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6bb20 size=128 callers=0 calls=0
*/
void sub_f6bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6bb20ULL || rel >= 0xf6bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6bba0 size=128 callers=0 calls=0
*/
void sub_f6bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6bba0ULL || rel >= 0xf6bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6bc20 size=128 callers=0 calls=0
*/
void sub_f6bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6bc20ULL || rel >= 0xf6bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6bca0 size=128 callers=0 calls=0
*/
void sub_f6bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6bca0ULL || rel >= 0xf6bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6bd20 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/mystery/bin/uikit_mystery_top_00.bin
   ref: bin/appli/mystery/bin/mystery_top_00_lyt.bin
*/
void uikit_mystery_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6bd20ULL || rel >= 0xf6bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6bf00 size=1712 callers=2 calls=5
   calls: sub_5cfad0, sub_7a3c20, sub_e83e60, sub_e84190, sub_e84310
   ref: pane_%s
   ref: L_mystery_top_btn_02
   ref: pane_%s_%s
   ref: L_mystery_top_btn_04
   ref: L_mystery_top_btn_00
   ref: L_mystery_top_btn_03
   ref: T_mystery_btn_heading_00
   ref: L_mystery_top_btn_01
*/
void T_mystery_btn_heading_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6bf00ULL || rel >= 0xf6c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c5b0 size=112 callers=0 calls=2
   calls: sub_e80580, sub_f67830
*/
void sub_f6c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c5b0ULL || rel >= 0xf6c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c620 size=208 callers=2 calls=4
   calls: sub_14e6550, sub_14e6d50, sub_e80580, sub_f677c0
*/
void sub_f6c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c620ULL || rel >= 0xf6c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c6f0 size=192 callers=2 calls=5
   calls: sub_14e6550, sub_14e6d50, sub_e80580, sub_e807f0, sub_f677f0
*/
void sub_f6c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c6f0ULL || rel >= 0xf6c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c7b0 size=144 callers=0 calls=0
*/
void sub_f6c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c7b0ULL || rel >= 0xf6c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c840 size=16 callers=8 calls=0
*/
void sub_f6c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c840ULL || rel >= 0xf6c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c850 size=32 callers=0 calls=0
*/
void sub_f6c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c850ULL || rel >= 0xf6c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c870 size=240 callers=2 calls=4
   calls: sub_14e1a00, sub_14e1a30, sub_14e62c0, sub_14e6d90
*/
void sub_f6c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c870ULL || rel >= 0xf6c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c960 size=16 callers=0 calls=0
*/
void sub_f6c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c960ULL || rel >= 0xf6c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c970 size=16 callers=0 calls=0
*/
void sub_f6c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c970ULL || rel >= 0xf6c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c980 size=16 callers=0 calls=0
*/
void sub_f6c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c980ULL || rel >= 0xf6c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c990 size=16 callers=0 calls=0
*/
void sub_f6c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c990ULL || rel >= 0xf6c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c9a0 size=16 callers=0 calls=0
*/
void sub_f6c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c9a0ULL || rel >= 0xf6c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c9b0 size=16 callers=0 calls=0
*/
void sub_f6c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c9b0ULL || rel >= 0xf6c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c9c0 size=48 callers=8 calls=0
*/
void sub_f6c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c9c0ULL || rel >= 0xf6c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6c9f0 size=336 callers=6 calls=3
   calls: sub_5cfaf0, sub_e7eb10, sub_f6cdd0
*/
void sub_f6c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c9f0ULL || rel >= 0xf6cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cb40 size=112 callers=4 calls=3
   calls: sub_eb8c60, sub_eb8e80, sub_eb8ea0
*/
void sub_f6cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cb40ULL || rel >= 0xf6cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cbb0 size=192 callers=16 calls=3
   calls: sub_e807f0, sub_f6cfd0, sub_f6d770
*/
void sub_f6cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cbb0ULL || rel >= 0xf6cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cc70 size=16 callers=4 calls=0
*/
void sub_f6cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cc70ULL || rel >= 0xf6cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cc80 size=256 callers=19 calls=3
   calls: sub_e807f0, sub_f6cfd0, sub_f6d770
*/
void sub_f6cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cc80ULL || rel >= 0xf6cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cd80 size=64 callers=22 calls=1
   calls: sub_eb8a30
*/
void sub_f6cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cd80ULL || rel >= 0xf6cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cdc0 size=16 callers=4 calls=0
*/
void sub_f6cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cdc0ULL || rel >= 0xf6cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cdd0 size=240 callers=6 calls=1
   calls: sub_eb84a0
*/
void sub_f6cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cdd0ULL || rel >= 0xf6cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cec0 size=272 callers=0 calls=2
   calls: sub_67b990, sub_eb7e10
*/
void sub_f6cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cec0ULL || rel >= 0xf6cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6cfd0 size=768 callers=2 calls=3
   calls: sub_67d450, sub_eb7ef0, sub_eb8930
*/
void sub_f6cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6cfd0ULL || rel >= 0xf6d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d2d0 size=576 callers=0 calls=0
*/
void sub_f6d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d2d0ULL || rel >= 0xf6d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d510 size=16 callers=0 calls=0
*/
void sub_f6d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d510ULL || rel >= 0xf6d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d520 size=176 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_f6d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d520ULL || rel >= 0xf6d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d5d0 size=16 callers=0 calls=0
*/
void sub_f6d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d5d0ULL || rel >= 0xf6d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d5e0 size=16 callers=0 calls=0
*/
void sub_f6d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d5e0ULL || rel >= 0xf6d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d5f0 size=176 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_f6d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d5f0ULL || rel >= 0xf6d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d6a0 size=176 callers=0 calls=1
   calls: sub_eb84a0
*/
void sub_f6d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d6a0ULL || rel >= 0xf6d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d750 size=16 callers=0 calls=0
*/
void sub_f6d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d750ULL || rel >= 0xf6d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d760 size=16 callers=0 calls=0
*/
void sub_f6d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d760ULL || rel >= 0xf6d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d770 size=32 callers=2 calls=0
*/
void sub_f6d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d770ULL || rel >= 0xf6d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d790 size=256 callers=1 calls=2
   calls: anonymous, sub_d0c0
   ref: StateConfirmGift
*/
void StateConfirmGift(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d790ULL || rel >= 0xf6d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6d890 size=1536 callers=0 calls=15
   calls: sub_138bad0, sub_5cfaf0, sub_67d450, sub_795bc0, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_eb7730, sub_f60140, sub_f64dd0, sub_f657c0
   ... +3 more
   ref: optionbar
*/
void optionbar(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d890ULL || rel >= 0xf6de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6de90 size=16 callers=0 calls=0
*/
void sub_f6de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6de90ULL || rel >= 0xf6dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6dea0 size=400 callers=0 calls=7
   calls: sub_e807f0, sub_eb7790, sub_eb7830, sub_f5a690, sub_f64dd0, sub_f66330, sub_f67db0
*/
void sub_f6dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6dea0ULL || rel >= 0xf6e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e030 size=48 callers=0 calls=0
*/
void sub_f6e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e030ULL || rel >= 0xf6e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e060 size=48 callers=0 calls=0
*/
void sub_f6e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e060ULL || rel >= 0xf6e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e090 size=1696 callers=0 calls=7
   calls: sub_136b580, sub_5cfad0, sub_c39c40, sub_e7ea90, sub_f71c60, sub_f71f60, sub_f72560
*/
void sub_f6e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e090ULL || rel >= 0xf6e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e730 size=16 callers=0 calls=0
*/
void sub_f6e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e730ULL || rel >= 0xf6e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e740 size=192 callers=0 calls=0
*/
void sub_f6e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e740ULL || rel >= 0xf6e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e800 size=192 callers=0 calls=0
*/
void sub_f6e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e800ULL || rel >= 0xf6e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e8c0 size=16 callers=0 calls=0
*/
void sub_f6e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e8c0ULL || rel >= 0xf6e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e8d0 size=192 callers=0 calls=0
*/
void sub_f6e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e8d0ULL || rel >= 0xf6e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6e990 size=192 callers=0 calls=0
*/
void sub_f6e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e990ULL || rel >= 0xf6ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ea50 size=16 callers=0 calls=0
*/
void sub_f6ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ea50ULL || rel >= 0xf6ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ea60 size=16 callers=0 calls=0
*/
void sub_f6ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ea60ULL || rel >= 0xf6ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ea70 size=192 callers=0 calls=0
*/
void sub_f6ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ea70ULL || rel >= 0xf6eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6eb30 size=192 callers=0 calls=0
*/
void sub_f6eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6eb30ULL || rel >= 0xf6ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ebf0 size=192 callers=0 calls=0
*/
void sub_f6ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ebf0ULL || rel >= 0xf6ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ecb0 size=192 callers=0 calls=0
*/
void sub_f6ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ecb0ULL || rel >= 0xf6ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6ed70 size=304 callers=0 calls=0
*/
void sub_f6ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ed70ULL || rel >= 0xf6eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6eea0 size=592 callers=1 calls=0
*/
void sub_f6eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6eea0ULL || rel >= 0xf6f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6f0f0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/mystery/bin/uikit_mystery_history_00.bin
   ref: bin/appli/mystery/bin/mystery_history_00_lyt.bin
*/
void uikit_mystery_history_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6f0f0ULL || rel >= 0xf6f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f6f2d0 size=7104 callers=0 calls=13
   calls: sub_14f1840, sub_14f1850, sub_14f1870, sub_5cfad0, sub_67b990, sub_67d450, sub_7a3c20, sub_e7ea90, sub_e7f7e0, sub_e84250, sub_e84310, sub_f718a0
   ... +1 more
   ref: L_btn_history_01
   ref: L_btn_history_08
   ref: pane_%s
   ref: L_btn_history_00
   ref: L_btn_history_04
   ref: L_btn_history_05
   ref: pane_%s_%s
   ref: L_btn_history_06
*/
void T_received_heading_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6f2d0ULL || rel >= 0xf70e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f70e90 size=320 callers=1 calls=2
   calls: sub_14edac0, sub_a91e20
*/
void sub_f70e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf70e90ULL || rel >= 0xf70fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f70fd0 size=208 callers=0 calls=5
   calls: sub_14e1a30, sub_14eead0, sub_e80580, sub_e80810, sub_f677c0
*/
void sub_f70fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf70fd0ULL || rel >= 0xf710a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f710a0 size=240 callers=0 calls=4
   calls: sub_14eead0, sub_e80580, sub_e807f0, sub_f677f0
*/
void sub_f710a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf710a0ULL || rel >= 0xf71190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71190 size=112 callers=0 calls=3
   calls: sub_14e1a30, sub_e80580, sub_f67830
*/
void sub_f71190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71190ULL || rel >= 0xf71200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71200 size=320 callers=0 calls=2
   calls: sub_67bdb0, sub_e83b20
*/
void sub_f71200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71200ULL || rel >= 0xf71340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71340 size=592 callers=0 calls=2
   calls: sub_67bdb0, sub_e83b20
*/
void sub_f71340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71340ULL || rel >= 0xf71590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71590 size=320 callers=0 calls=0
*/
void sub_f71590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71590ULL || rel >= 0xf716d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f716d0 size=16 callers=0 calls=0
*/
void sub_f716d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf716d0ULL || rel >= 0xf716e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f716e0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f716e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf716e0ULL || rel >= 0xf71750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71750 size=16 callers=0 calls=0
*/
void sub_f71750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71750ULL || rel >= 0xf71760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71760 size=16 callers=0 calls=0
*/
void sub_f71760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71760ULL || rel >= 0xf71770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71770 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f71770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71770ULL || rel >= 0xf717e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f717e0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f717e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf717e0ULL || rel >= 0xf71850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71850 size=16 callers=0 calls=0
*/
void sub_f71850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71850ULL || rel >= 0xf71860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71860 size=16 callers=0 calls=0
*/
void sub_f71860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71860ULL || rel >= 0xf71870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71870 size=16 callers=0 calls=0
*/
void sub_f71870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71870ULL || rel >= 0xf71880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71880 size=16 callers=0 calls=0
*/
void sub_f71880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71880ULL || rel >= 0xf71890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71890 size=16 callers=0 calls=0
*/
void sub_f71890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71890ULL || rel >= 0xf718a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f718a0 size=464 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_f718a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf718a0ULL || rel >= 0xf71a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71a70 size=16 callers=0 calls=0
*/
void sub_f71a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71a70ULL || rel >= 0xf71a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71a80 size=16 callers=0 calls=0
*/
void sub_f71a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71a80ULL || rel >= 0xf71a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71a90 size=16 callers=0 calls=0
*/
void sub_f71a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71a90ULL || rel >= 0xf71aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71aa0 size=16 callers=0 calls=0
*/
void sub_f71aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71aa0ULL || rel >= 0xf71ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71ab0 size=16 callers=0 calls=0
*/
void sub_f71ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71ab0ULL || rel >= 0xf71ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71ac0 size=16 callers=0 calls=0
*/
void sub_f71ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71ac0ULL || rel >= 0xf71ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71ad0 size=16 callers=0 calls=0
*/
void sub_f71ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71ad0ULL || rel >= 0xf71ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71ae0 size=16 callers=0 calls=0
*/
void sub_f71ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71ae0ULL || rel >= 0xf71af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71af0 size=304 callers=4 calls=2
   calls: sub_143d390, sub_f71af0
*/
void sub_f71af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71af0ULL || rel >= 0xf71c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71c20 size=16 callers=0 calls=0
*/
void sub_f71c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71c20ULL || rel >= 0xf71c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71c30 size=16 callers=0 calls=0
*/
void sub_f71c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71c30ULL || rel >= 0xf71c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71c40 size=16 callers=0 calls=0
*/
void sub_f71c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71c40ULL || rel >= 0xf71c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71c50 size=16 callers=0 calls=0
*/
void sub_f71c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71c50ULL || rel >= 0xf71c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71c60 size=768 callers=3 calls=18
   calls: ZKN_FORM__03d_999, ZKN_TYPE__03d, another_name_2, sub_1311c60, sub_13133a0, sub_1313c10, sub_1314a80, sub_1315270, sub_1315b90, sub_1389e90, sub_1389ea0, sub_1389eb0
   ... +6 more
*/
void sub_f71c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71c60ULL || rel >= 0xf71f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f71f60 size=1536 callers=2 calls=14
   calls: sub_1311c60, sub_13133a0, sub_1313c10, sub_1315270, sub_1315b90, sub_1389e90, sub_1389ea0, sub_1389eb0, sub_1389ec0, sub_1389ed0, sub_67bfa0, sub_67d450
   ... +2 more
*/
void sub_f71f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf71f60ULL || rel >= 0xf72560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f72560 size=592 callers=2 calls=4
   calls: sub_1311c60, sub_1315b90, sub_15b8140, sub_67d450
*/
void sub_f72560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf72560ULL || rel >= 0xf727b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f727b0 size=256 callers=1 calls=2
   calls: anonymous, sub_d0c0
   ref: StateReceiveMenu
*/
void StateReceiveMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf727b0ULL || rel >= 0xf728b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f728b0 size=1376 callers=0 calls=17
   calls: sub_1386fc0, sub_13871e0, sub_138bb00, sub_67d450, sub_795bc0, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_eb7730, sub_f60140, sub_f64dd0
   ... +5 more
   ref: menu_method
   ref: optionbar
*/
void menu_method(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf728b0ULL || rel >= 0xf72e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f72e10 size=1728 callers=6 calls=0
*/
void sub_f72e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf72e10ULL || rel >= 0xf734d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f734d0 size=336 callers=0 calls=6
   calls: sub_eb7790, sub_eb7830, sub_f64dd0, sub_f66330, sub_f73620, sub_f74260
*/
void sub_f734d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf734d0ULL || rel >= 0xf73620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73620 size=480 callers=1 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f73620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73620ULL || rel >= 0xf73800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73800 size=16 callers=0 calls=0
*/
void sub_f73800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73800ULL || rel >= 0xf73810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73810 size=112 callers=0 calls=0
*/
void sub_f73810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73810ULL || rel >= 0xf73880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73880 size=112 callers=0 calls=0
*/
void sub_f73880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73880ULL || rel >= 0xf738f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f738f0 size=16 callers=0 calls=0
*/
void sub_f738f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf738f0ULL || rel >= 0xf73900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73900 size=112 callers=0 calls=0
*/
void sub_f73900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73900ULL || rel >= 0xf73970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73970 size=112 callers=0 calls=0
*/
void sub_f73970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73970ULL || rel >= 0xf739e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f739e0 size=16 callers=0 calls=0
*/
void sub_f739e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf739e0ULL || rel >= 0xf739f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f739f0 size=16 callers=0 calls=0
*/
void sub_f739f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf739f0ULL || rel >= 0xf73a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73a00 size=112 callers=0 calls=0
*/
void sub_f73a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73a00ULL || rel >= 0xf73a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73a70 size=112 callers=0 calls=0
*/
void sub_f73a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73a70ULL || rel >= 0xf73ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73ae0 size=304 callers=0 calls=0
*/
void sub_f73ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73ae0ULL || rel >= 0xf73c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f73c10 size=1248 callers=0 calls=7
   calls: T_mystery_btn_heading_00, sub_5cfad0, sub_67b990, sub_67d450, sub_e7ea90, sub_e7f7e0, sub_f6c840
*/
void sub_f73c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf73c10ULL || rel >= 0xf740f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f740f0 size=112 callers=0 calls=2
   calls: sub_14e6550, sub_f6c620
*/
void sub_f740f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf740f0ULL || rel >= 0xf74160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74160 size=224 callers=0 calls=3
   calls: sub_e80580, sub_e807f0, sub_f6c6f0
*/
void sub_f74160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74160ULL || rel >= 0xf74240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74240 size=16 callers=1 calls=0
*/
void sub_f74240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74240ULL || rel >= 0xf74250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74250 size=16 callers=1 calls=0
*/
void sub_f74250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74250ULL || rel >= 0xf74260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74260 size=48 callers=1 calls=0
*/
void sub_f74260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74260ULL || rel >= 0xf74290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74290 size=128 callers=0 calls=0
*/
void sub_f74290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74290ULL || rel >= 0xf74310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74310 size=128 callers=0 calls=0
*/
void sub_f74310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74310ULL || rel >= 0xf74390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74390 size=176 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f74390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74390ULL || rel >= 0xf74440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74440 size=128 callers=0 calls=0
*/
void sub_f74440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74440ULL || rel >= 0xf744c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f744c0 size=128 callers=0 calls=0
*/
void sub_f744c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf744c0ULL || rel >= 0xf74540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74540 size=176 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f74540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74540ULL || rel >= 0xf745f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f745f0 size=176 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f745f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf745f0ULL || rel >= 0xf746a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f746a0 size=128 callers=0 calls=0
*/
void sub_f746a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf746a0ULL || rel >= 0xf74720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74720 size=128 callers=0 calls=0
*/
void sub_f74720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74720ULL || rel >= 0xf747a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f747a0 size=128 callers=0 calls=0
*/
void sub_f747a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf747a0ULL || rel >= 0xf74820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74820 size=128 callers=0 calls=0
*/
void sub_f74820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74820ULL || rel >= 0xf748a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f748a0 size=256 callers=1 calls=3
   calls: anonymous, sub_d0c0, sub_f6c9c0
   ref: StateReceiveNews
*/
void StateReceiveNews(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf748a0ULL || rel >= 0xf749a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f749a0 size=816 callers=0 calls=11
   calls: sub_5cfaf0, sub_795bc0, sub_c39c40, sub_eb75e0, sub_eb7730, sub_f60140, sub_f64dd0, sub_f657c0, sub_f668c0, sub_f6c9f0, sub_f75bf0
   ref: optionbar
*/
void optionbar_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf749a0ULL || rel >= 0xf74cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74cd0 size=640 callers=0 calls=13
   calls: Play_UI_common_report_2, message_2, sub_eb7790, sub_eb7830, sub_f64dd0, sub_f657c0, sub_f66330, sub_f6cb40, sub_f6cc80, sub_f751f0, sub_f75480, sub_f76850
   ... +1 more
*/
void sub_f74cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74cd0ULL || rel >= 0xf74f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f74f50 size=672 callers=1 calls=7
   calls: sub_136b6f0, sub_136b700, sub_c39c40, sub_e7eb10, sub_f75cd0, sub_f75ec0, sub_ff45c0
   ref: message
*/
void message_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf74f50ULL || rel >= 0xf751f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f751f0 size=656 callers=1 calls=4
   calls: RequestSyncDelivery, sub_f5a690, sub_f67db0, sub_f6cc80
*/
void sub_f751f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf751f0ULL || rel >= 0xf75480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75480 size=320 callers=1 calls=7
   calls: sub_138bf00, sub_e80580, sub_e807f0, sub_eb76b0, sub_f64dd0, sub_f66330, sub_f795e0
*/
void sub_f75480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75480ULL || rel >= 0xf755c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f755c0 size=16 callers=0 calls=0
*/
void sub_f755c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf755c0ULL || rel >= 0xf755d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f755d0 size=16 callers=0 calls=0
*/
void sub_f755d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf755d0ULL || rel >= 0xf755e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f755e0 size=16 callers=0 calls=0
*/
void sub_f755e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf755e0ULL || rel >= 0xf755f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f755f0 size=192 callers=0 calls=0
*/
void sub_f755f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf755f0ULL || rel >= 0xf756b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f756b0 size=192 callers=0 calls=0
*/
void sub_f756b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf756b0ULL || rel >= 0xf75770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75770 size=16 callers=0 calls=0
*/
void sub_f75770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75770ULL || rel >= 0xf75780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75780 size=192 callers=0 calls=0
*/
void sub_f75780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75780ULL || rel >= 0xf75840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75840 size=192 callers=0 calls=0
*/
void sub_f75840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75840ULL || rel >= 0xf75900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75900 size=16 callers=0 calls=0
*/
void sub_f75900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75900ULL || rel >= 0xf75910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75910 size=16 callers=0 calls=0
*/
void sub_f75910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75910ULL || rel >= 0xf75920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75920 size=208 callers=0 calls=0
*/
void sub_f75920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75920ULL || rel >= 0xf759f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f759f0 size=208 callers=0 calls=0
*/
void sub_f759f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf759f0ULL || rel >= 0xf75ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75ac0 size=304 callers=0 calls=0
*/
void sub_f75ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75ac0ULL || rel >= 0xf75bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75bf0 size=224 callers=3 calls=1
   calls: sub_f767e0
*/
void sub_f75bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75bf0ULL || rel >= 0xf75cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75cd0 size=496 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_f75cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75cd0ULL || rel >= 0xf75ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75ec0 size=304 callers=5 calls=1
   calls: sub_ff4430
*/
void sub_f75ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75ec0ULL || rel >= 0xf75ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f75ff0 size=704 callers=0 calls=7
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_f5a690, sub_f67db0
*/
void sub_f75ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75ff0ULL || rel >= 0xf762b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f762b0 size=16 callers=0 calls=0
*/
void sub_f762b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf762b0ULL || rel >= 0xf762c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f762c0 size=16 callers=0 calls=0
*/
void sub_f762c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf762c0ULL || rel >= 0xf762d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f762d0 size=16 callers=0 calls=0
*/
void sub_f762d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf762d0ULL || rel >= 0xf762e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f762e0 size=384 callers=0 calls=3
   calls: sub_e3a910, sub_e3ac90, sub_f6cd80
*/
void sub_f762e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf762e0ULL || rel >= 0xf76460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76460 size=64 callers=0 calls=0
*/
void sub_f76460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76460ULL || rel >= 0xf764a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f764a0 size=48 callers=0 calls=0
*/
void sub_f764a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf764a0ULL || rel >= 0xf764d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f764d0 size=48 callers=0 calls=0
*/
void sub_f764d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf764d0ULL || rel >= 0xf76500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76500 size=48 callers=0 calls=0
*/
void sub_f76500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76500ULL || rel >= 0xf76530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76530 size=64 callers=0 calls=0
*/
void sub_f76530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76530ULL || rel >= 0xf76570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76570 size=48 callers=0 calls=0
*/
void sub_f76570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76570ULL || rel >= 0xf765a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f765a0 size=48 callers=0 calls=0
*/
void sub_f765a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf765a0ULL || rel >= 0xf765d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f765d0 size=32 callers=0 calls=0
*/
void sub_f765d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf765d0ULL || rel >= 0xf765f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f765f0 size=16 callers=0 calls=0
*/
void sub_f765f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf765f0ULL || rel >= 0xf76600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76600 size=16 callers=0 calls=0
*/
void sub_f76600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76600ULL || rel >= 0xf76610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76610 size=16 callers=0 calls=0
*/
void sub_f76610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76610ULL || rel >= 0xf76620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76620 size=16 callers=0 calls=0
*/
void sub_f76620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76620ULL || rel >= 0xf76630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76630 size=16 callers=0 calls=0
*/
void sub_f76630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76630ULL || rel >= 0xf76640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76640 size=16 callers=0 calls=0
*/
void sub_f76640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76640ULL || rel >= 0xf76650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76650 size=16 callers=0 calls=0
*/
void sub_f76650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76650ULL || rel >= 0xf76660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76660 size=16 callers=0 calls=0
*/
void sub_f76660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76660ULL || rel >= 0xf76670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76670 size=16 callers=0 calls=0
*/
void sub_f76670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76670ULL || rel >= 0xf76680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76680 size=16 callers=0 calls=0
*/
void sub_f76680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76680ULL || rel >= 0xf76690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76690 size=16 callers=0 calls=0
*/
void sub_f76690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76690ULL || rel >= 0xf766a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f766a0 size=144 callers=0 calls=3
   calls: sub_eb6070, sub_f5a690, sub_f67db0
*/
void sub_f766a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf766a0ULL || rel >= 0xf76730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76730 size=16 callers=0 calls=0
*/
void sub_f76730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76730ULL || rel >= 0xf76740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76740 size=16 callers=0 calls=0
*/
void sub_f76740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76740ULL || rel >= 0xf76750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76750 size=16 callers=0 calls=0
*/
void sub_f76750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76750ULL || rel >= 0xf76760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76760 size=128 callers=0 calls=0
*/
void sub_f76760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76760ULL || rel >= 0xf767e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f767e0 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_f767e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf767e0ULL || rel >= 0xf76850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76850 size=288 callers=10 calls=2
   calls: sub_13a10f0, sub_13a1100
*/
void sub_f76850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76850ULL || rel >= 0xf76970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76970 size=128 callers=3 calls=3
   calls: sub_13a1100, sub_13a1150, sub_13a11f0
*/
void sub_f76970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76970ULL || rel >= 0xf769f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f769f0 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f769f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf769f0ULL || rel >= 0xf76aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76aa0 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f76aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76aa0ULL || rel >= 0xf76b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76b50 size=240 callers=0 calls=0
*/
void sub_f76b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76b50ULL || rel >= 0xf76c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76c40 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f76c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76c40ULL || rel >= 0xf76cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76cf0 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f76cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76cf0ULL || rel >= 0xf76da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76da0 size=16 callers=0 calls=0
*/
void sub_f76da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76da0ULL || rel >= 0xf76db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76db0 size=16 callers=0 calls=0
*/
void sub_f76db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76db0ULL || rel >= 0xf76dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76dc0 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f76dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76dc0ULL || rel >= 0xf76e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76e70 size=176 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_f76e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76e70ULL || rel >= 0xf76f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f76f20 size=9632 callers=0 calls=6
   calls: sub_5cfad0, sub_67b990, sub_67d450, sub_e7ea90, sub_e7f7e0, sub_eb5ee0
*/
void sub_f76f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf76f20ULL || rel >= 0xf794c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f794c0 size=80 callers=0 calls=1
   calls: sub_eb5f70
*/
void sub_f794c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf794c0ULL || rel >= 0xf79510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79510 size=32 callers=0 calls=0
*/
void sub_f79510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79510ULL || rel >= 0xf79530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79530 size=144 callers=0 calls=1
   calls: sub_eb5f90
*/
void sub_f79530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79530ULL || rel >= 0xf795c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f795c0 size=32 callers=0 calls=0
*/
void sub_f795c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf795c0ULL || rel >= 0xf795e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f795e0 size=496 callers=6 calls=8
   calls: sub_1311c60, sub_1315b90, sub_15b80a0, sub_15b80b0, sub_15b80c0, sub_15b80d0, sub_15b80e0, sub_eb5fb0
*/
void sub_f795e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf795e0ULL || rel >= 0xf797d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f797d0 size=128 callers=0 calls=0
*/
void sub_f797d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf797d0ULL || rel >= 0xf79850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79850 size=128 callers=0 calls=0
*/
void sub_f79850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79850ULL || rel >= 0xf798d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f798d0 size=112 callers=0 calls=1
   calls: sub_eb6100
*/
void sub_f798d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf798d0ULL || rel >= 0xf79940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79940 size=32 callers=0 calls=0
*/
void sub_f79940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79940ULL || rel >= 0xf79960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79960 size=32 callers=0 calls=0
*/
void sub_f79960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79960ULL || rel >= 0xf79980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79980 size=128 callers=0 calls=0
*/
void sub_f79980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79980ULL || rel >= 0xf79a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79a00 size=128 callers=0 calls=0
*/
void sub_f79a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79a00ULL || rel >= 0xf79a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79a80 size=112 callers=0 calls=1
   calls: sub_eb6100
*/
void sub_f79a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79a80ULL || rel >= 0xf79af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79af0 size=112 callers=0 calls=1
   calls: sub_eb6100
*/
void sub_f79af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79af0ULL || rel >= 0xf79b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79b60 size=128 callers=0 calls=0
*/
void sub_f79b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79b60ULL || rel >= 0xf79be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79be0 size=128 callers=0 calls=0
*/
void sub_f79be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79be0ULL || rel >= 0xf79c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79c60 size=32 callers=0 calls=0
*/
void sub_f79c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79c60ULL || rel >= 0xf79c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79c80 size=32 callers=0 calls=0
*/
void sub_f79c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79c80ULL || rel >= 0xf79ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79ca0 size=32 callers=0 calls=0
*/
void sub_f79ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79ca0ULL || rel >= 0xf79cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79cc0 size=32 callers=0 calls=0
*/
void sub_f79cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79cc0ULL || rel >= 0xf79ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79ce0 size=144 callers=0 calls=0
*/
void sub_f79ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79ce0ULL || rel >= 0xf79d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79d70 size=144 callers=0 calls=0
*/
void sub_f79d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79d70ULL || rel >= 0xf79e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79e00 size=256 callers=1 calls=2
   calls: anonymous, sub_d0c0
   ref: StateConnectPalma
*/
void StateConnectPalma(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79e00ULL || rel >= 0xf79f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f79f00 size=960 callers=0 calls=12
   calls: sub_137bc60, sub_137bc70, sub_5cfaf0, sub_795bc0, sub_c39c40, sub_eb75e0, sub_f60140, sub_f64dd0, sub_f657c0, sub_f668c0, sub_f795e0, sub_f7a2c0
   ref: optionbar
*/
void optionbar_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf79f00ULL || rel >= 0xf7a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7a2c0 size=512 callers=3 calls=4
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570
*/
void sub_f7a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7a2c0ULL || rel >= 0xf7a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7a4c0 size=992 callers=0 calls=19
   calls: sub_1502120, sub_5cfad0, sub_ea3970, sub_ea3d10, sub_ea4760, sub_eb6070, sub_eb6530, sub_eb75e0, sub_ece090, sub_ece0a0, sub_ece0b0, sub_ece0c0
   ... +7 more
*/
void sub_f7a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7a4c0ULL || rel >= 0xf7a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7a8a0 size=176 callers=0 calls=4
   calls: sub_ea37b0, sub_ece0a0, sub_ece0c0, sub_f5a690
*/
void sub_f7a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7a8a0ULL || rel >= 0xf7a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7a950 size=112 callers=0 calls=0
*/
void sub_f7a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7a950ULL || rel >= 0xf7a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7a9c0 size=112 callers=0 calls=0
*/
void sub_f7a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7a9c0ULL || rel >= 0xf7aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7aa30 size=16 callers=0 calls=0
*/
void sub_f7aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7aa30ULL || rel >= 0xf7aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7aa40 size=112 callers=0 calls=0
*/
void sub_f7aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7aa40ULL || rel >= 0xf7aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7aab0 size=112 callers=0 calls=0
*/
void sub_f7aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7aab0ULL || rel >= 0xf7ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ab20 size=16 callers=0 calls=0
*/
void sub_f7ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ab20ULL || rel >= 0xf7ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ab30 size=16 callers=0 calls=0
*/
void sub_f7ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ab30ULL || rel >= 0xf7ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ab40 size=112 callers=0 calls=0
*/
void sub_f7ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ab40ULL || rel >= 0xf7abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7abb0 size=112 callers=0 calls=0
*/
void sub_f7abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7abb0ULL || rel >= 0xf7ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ac20 size=304 callers=0 calls=0
*/
void sub_f7ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ac20ULL || rel >= 0xf7ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ad50 size=288 callers=0 calls=2
   calls: sub_ece0c0, sub_f5a690
*/
void sub_f7ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ad50ULL || rel >= 0xf7ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ae70 size=16 callers=0 calls=0
*/
void sub_f7ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ae70ULL || rel >= 0xf7ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ae80 size=16 callers=0 calls=0
*/
void sub_f7ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ae80ULL || rel >= 0xf7ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ae90 size=16 callers=0 calls=0
*/
void sub_f7ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ae90ULL || rel >= 0xf7aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7aea0 size=256 callers=0 calls=2
   calls: sub_ece0c0, sub_f5a690
*/
void sub_f7aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7aea0ULL || rel >= 0xf7afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7afa0 size=16 callers=0 calls=0
*/
void sub_f7afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7afa0ULL || rel >= 0xf7afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7afb0 size=16 callers=0 calls=0
*/
void sub_f7afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7afb0ULL || rel >= 0xf7afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7afc0 size=16 callers=0 calls=0
*/
void sub_f7afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7afc0ULL || rel >= 0xf7afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7afd0 size=256 callers=1 calls=2
   calls: StateReceiveBase, sub_d0c0
   ref: StateReceiveLocal
*/
void StateReceiveLocal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7afd0ULL || rel >= 0xf7b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b0d0 size=16 callers=0 calls=0
*/
void sub_f7b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b0d0ULL || rel >= 0xf7b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b0e0 size=48 callers=0 calls=0
*/
void sub_f7b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b0e0ULL || rel >= 0xf7b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b110 size=688 callers=0 calls=7
   calls: Play_UI_common_report_3, sub_5cfaf0, sub_c39c40, sub_e7eb10, sub_f6cdd0, sub_f7bde0, sub_ff7520
*/
void sub_f7b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b110ULL || rel >= 0xf7b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b3c0 size=1088 callers=0 calls=15
   calls: sub_101a8b0, sub_1100970, sub_11009d0, sub_e80580, sub_e807f0, sub_eb76b0, sub_f64dd0, sub_f657c0, sub_f66330, sub_f6cc80, sub_f6cd80, sub_f7c1a0
   ... +3 more
*/
void sub_f7b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b3c0ULL || rel >= 0xf7b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b800 size=144 callers=0 calls=0
*/
void sub_f7b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b800ULL || rel >= 0xf7b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b890 size=144 callers=0 calls=0
*/
void sub_f7b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b890ULL || rel >= 0xf7b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b920 size=16 callers=0 calls=0
*/
void sub_f7b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b920ULL || rel >= 0xf7b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b930 size=16 callers=0 calls=0
*/
void sub_f7b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b930ULL || rel >= 0xf7b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b940 size=144 callers=0 calls=0
*/
void sub_f7b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b940ULL || rel >= 0xf7b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7b9d0 size=144 callers=0 calls=0
*/
void sub_f7b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7b9d0ULL || rel >= 0xf7ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ba60 size=16 callers=0 calls=0
*/
void sub_f7ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ba60ULL || rel >= 0xf7ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ba70 size=16 callers=0 calls=0
*/
void sub_f7ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ba70ULL || rel >= 0xf7ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ba80 size=144 callers=0 calls=0
*/
void sub_f7ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ba80ULL || rel >= 0xf7bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7bb10 size=144 callers=0 calls=0
*/
void sub_f7bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7bb10ULL || rel >= 0xf7bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7bba0 size=272 callers=0 calls=0
*/
void sub_f7bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7bba0ULL || rel >= 0xf7bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7bcb0 size=304 callers=3 calls=0
*/
void sub_f7bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7bcb0ULL || rel >= 0xf7bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7bde0 size=272 callers=1 calls=1
   calls: sub_ff73e0
*/
void sub_f7bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7bde0ULL || rel >= 0xf7bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7bef0 size=528 callers=0 calls=7
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_f7d670, sub_f7dbe0
*/
void sub_f7bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7bef0ULL || rel >= 0xf7c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c100 size=16 callers=0 calls=0
*/
void sub_f7c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c100ULL || rel >= 0xf7c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c110 size=16 callers=0 calls=0
*/
void sub_f7c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c110ULL || rel >= 0xf7c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c120 size=16 callers=0 calls=0
*/
void sub_f7c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c120ULL || rel >= 0xf7c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c130 size=64 callers=0 calls=1
   calls: sub_f7de70
*/
void sub_f7c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c130ULL || rel >= 0xf7c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c170 size=16 callers=0 calls=0
*/
void sub_f7c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c170ULL || rel >= 0xf7c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c180 size=16 callers=0 calls=0
*/
void sub_f7c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c180ULL || rel >= 0xf7c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c190 size=16 callers=0 calls=0
*/
void sub_f7c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c190ULL || rel >= 0xf7c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c1a0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_f7c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c1a0ULL || rel >= 0xf7c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c300 size=128 callers=0 calls=3
   calls: sub_f5a690, sub_f67dd0, sub_f6cd80
*/
void sub_f7c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c300ULL || rel >= 0xf7c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c380 size=16 callers=0 calls=0
*/
void sub_f7c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c380ULL || rel >= 0xf7c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c390 size=16 callers=0 calls=0
*/
void sub_f7c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c390ULL || rel >= 0xf7c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c3a0 size=16 callers=0 calls=0
*/
void sub_f7c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c3a0ULL || rel >= 0xf7c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c3b0 size=32 callers=0 calls=0
*/
void sub_f7c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c3b0ULL || rel >= 0xf7c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c3d0 size=16 callers=0 calls=0
*/
void sub_f7c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c3d0ULL || rel >= 0xf7c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c3e0 size=16 callers=0 calls=0
*/
void sub_f7c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c3e0ULL || rel >= 0xf7c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c3f0 size=16 callers=0 calls=0
*/
void sub_f7c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c3f0ULL || rel >= 0xf7c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c400 size=256 callers=0 calls=3
   calls: sub_f5a690, sub_f68d80, sub_f7c510
*/
void sub_f7c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c400ULL || rel >= 0xf7c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c500 size=16 callers=0 calls=0
*/
void sub_f7c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c500ULL || rel >= 0xf7c510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c510 size=464 callers=13 calls=0
*/
void sub_f7c510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c510ULL || rel >= 0xf7c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c6e0 size=16 callers=0 calls=0
*/
void sub_f7c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c6e0ULL || rel >= 0xf7c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c6f0 size=16 callers=0 calls=0
*/
void sub_f7c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c6f0ULL || rel >= 0xf7c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c700 size=384 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_f7c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c700ULL || rel >= 0xf7c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c880 size=80 callers=0 calls=0
*/
void sub_f7c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c880ULL || rel >= 0xf7c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c8d0 size=240 callers=0 calls=0
*/
void sub_f7c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c8d0ULL || rel >= 0xf7c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7c9c0 size=80 callers=0 calls=0
*/
void sub_f7c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7c9c0ULL || rel >= 0xf7ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ca10 size=80 callers=0 calls=0
*/
void sub_f7ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ca10ULL || rel >= 0xf7ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ca60 size=16 callers=0 calls=0
*/
void sub_f7ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ca60ULL || rel >= 0xf7ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ca70 size=16 callers=0 calls=0
*/
void sub_f7ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ca70ULL || rel >= 0xf7ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ca80 size=80 callers=0 calls=0
*/
void sub_f7ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ca80ULL || rel >= 0xf7cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cad0 size=80 callers=0 calls=0
*/
void sub_f7cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cad0ULL || rel >= 0xf7cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cb20 size=16 callers=0 calls=0
*/
void sub_f7cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cb20ULL || rel >= 0xf7cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cb30 size=16 callers=0 calls=0
*/
void sub_f7cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cb30ULL || rel >= 0xf7cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cb40 size=16 callers=0 calls=0
*/
void sub_f7cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cb40ULL || rel >= 0xf7cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cb50 size=16 callers=0 calls=0
*/
void sub_f7cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cb50ULL || rel >= 0xf7cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cb60 size=128 callers=0 calls=0
*/
void sub_f7cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cb60ULL || rel >= 0xf7cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cbe0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/mystery/bin/mystery_progress_00_lyt.bin
*/
void mystery_progress_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cbe0ULL || rel >= 0xf7ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ccf0 size=240 callers=0 calls=0
   ref: gauge_scale
   ref: anime_%s_%s
   ref: L_progressbar_00
*/
void L_progressbar_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ccf0ULL || rel >= 0xf7cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cde0 size=48 callers=7 calls=0
*/
void sub_f7cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cde0ULL || rel >= 0xf7ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ce10 size=16 callers=0 calls=0
*/
void sub_f7ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ce10ULL || rel >= 0xf7ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ce20 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f7ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ce20ULL || rel >= 0xf7ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ce90 size=16 callers=0 calls=0
*/
void sub_f7ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ce90ULL || rel >= 0xf7cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cea0 size=16 callers=0 calls=0
*/
void sub_f7cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cea0ULL || rel >= 0xf7ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ceb0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f7ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ceb0ULL || rel >= 0xf7cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cf20 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f7cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cf20ULL || rel >= 0xf7cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cf90 size=16 callers=0 calls=0
*/
void sub_f7cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cf90ULL || rel >= 0xf7cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cfa0 size=16 callers=0 calls=0
*/
void sub_f7cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cfa0ULL || rel >= 0xf7cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cfb0 size=16 callers=0 calls=0
*/
void sub_f7cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cfb0ULL || rel >= 0xf7cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cfc0 size=16 callers=0 calls=0
*/
void sub_f7cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cfc0ULL || rel >= 0xf7cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7cfd0 size=288 callers=5 calls=5
   calls: anonymous, sub_d0c0, sub_f6c9c0, sub_f7e2c0, sub_f7e5c0
   ref: StateReceiveBase
*/
void StateReceiveBase(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7cfd0ULL || rel >= 0xf7d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7d0f0 size=1408 callers=2 calls=16
   calls: sub_5cfaf0, sub_795bc0, sub_c39c40, sub_eb7730, sub_f5a690, sub_f60140, sub_f64dd0, sub_f657c0, sub_f668c0, sub_f66e70, sub_f67050, sub_f67d40
   ... +4 more
   ref: optionbar
*/
void optionbar_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7d0f0ULL || rel >= 0xf7d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7d670 size=16 callers=7 calls=0
*/
void sub_f7d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7d670ULL || rel >= 0xf7d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7d680 size=592 callers=1 calls=5
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0
*/
void sub_f7d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7d680ULL || rel >= 0xf7d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7d8d0 size=752 callers=0 calls=9
   calls: sub_eb7790, sub_f64dd0, sub_f66330, sub_f6cb40, sub_f76970, sub_f7cde0, sub_f7e360, sub_f7e480, sub_f7e650
*/
void sub_f7d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7d8d0ULL || rel >= 0xf7dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dbc0 size=16 callers=1 calls=0
*/
void sub_f7dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dbc0ULL || rel >= 0xf7dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dbd0 size=16 callers=0 calls=0
*/
void sub_f7dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dbd0ULL || rel >= 0xf7dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dbe0 size=144 callers=11 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f7dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dbe0ULL || rel >= 0xf7dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dc70 size=208 callers=0 calls=2
   calls: sub_f59e10, sub_f6cbb0
*/
void sub_f7dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dc70ULL || rel >= 0xf7dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dd40 size=32 callers=0 calls=0
*/
void sub_f7dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dd40ULL || rel >= 0xf7dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dd60 size=32 callers=0 calls=0
*/
void sub_f7dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dd60ULL || rel >= 0xf7dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dd80 size=32 callers=0 calls=0
*/
void sub_f7dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dd80ULL || rel >= 0xf7dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dda0 size=160 callers=0 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f7dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dda0ULL || rel >= 0xf7de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7de40 size=48 callers=4 calls=0
*/
void sub_f7de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7de40ULL || rel >= 0xf7de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7de70 size=80 callers=5 calls=0
*/
void sub_f7de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7de70ULL || rel >= 0xf7dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7dec0 size=48 callers=5 calls=0
*/
void sub_f7dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7dec0ULL || rel >= 0xf7def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7def0 size=16 callers=0 calls=0
*/
void sub_f7def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7def0ULL || rel >= 0xf7df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7df00 size=16 callers=0 calls=0
*/
void sub_f7df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7df00ULL || rel >= 0xf7df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7df10 size=16 callers=0 calls=0
*/
void sub_f7df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7df10ULL || rel >= 0xf7df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7df20 size=16 callers=0 calls=0
*/
void sub_f7df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7df20ULL || rel >= 0xf7df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7df30 size=16 callers=0 calls=0
*/
void sub_f7df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7df30ULL || rel >= 0xf7df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7df40 size=224 callers=0 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f7df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7df40ULL || rel >= 0xf7e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e020 size=16 callers=0 calls=0
*/
void sub_f7e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e020ULL || rel >= 0xf7e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e030 size=16 callers=0 calls=0
*/
void sub_f7e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e030ULL || rel >= 0xf7e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e040 size=16 callers=0 calls=0
*/
void sub_f7e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e040ULL || rel >= 0xf7e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e050 size=160 callers=0 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f7e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e050ULL || rel >= 0xf7e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e0f0 size=16 callers=0 calls=0
*/
void sub_f7e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e0f0ULL || rel >= 0xf7e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e100 size=16 callers=0 calls=0
*/
void sub_f7e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e100ULL || rel >= 0xf7e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e110 size=16 callers=0 calls=0
*/
void sub_f7e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e110ULL || rel >= 0xf7e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e120 size=160 callers=0 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f7e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e120ULL || rel >= 0xf7e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e1c0 size=16 callers=0 calls=0
*/
void sub_f7e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e1c0ULL || rel >= 0xf7e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e1d0 size=16 callers=0 calls=0
*/
void sub_f7e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e1d0ULL || rel >= 0xf7e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e1e0 size=16 callers=0 calls=0
*/
void sub_f7e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e1e0ULL || rel >= 0xf7e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e1f0 size=160 callers=0 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f7e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e1f0ULL || rel >= 0xf7e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e290 size=16 callers=0 calls=0
*/
void sub_f7e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e290ULL || rel >= 0xf7e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e2a0 size=16 callers=0 calls=0
*/
void sub_f7e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e2a0ULL || rel >= 0xf7e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e2b0 size=16 callers=0 calls=0
*/
void sub_f7e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e2b0ULL || rel >= 0xf7e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e2c0 size=64 callers=2 calls=0
*/
void sub_f7e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e2c0ULL || rel >= 0xf7e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e300 size=96 callers=2 calls=0
*/
void sub_f7e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e300ULL || rel >= 0xf7e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e360 size=288 callers=2 calls=6
   calls: sub_e80580, sub_e807f0, sub_eb76b0, sub_f64dd0, sub_f66330, sub_f795e0
*/
void sub_f7e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e360ULL || rel >= 0xf7e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e480 size=208 callers=17 calls=2
   calls: sub_f64dd0, sub_f657c0
*/
void sub_f7e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e480ULL || rel >= 0xf7e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e550 size=64 callers=0 calls=1
   calls: sub_eb6070
*/
void sub_f7e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e550ULL || rel >= 0xf7e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e590 size=16 callers=0 calls=0
*/
void sub_f7e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e590ULL || rel >= 0xf7e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e5a0 size=16 callers=0 calls=0
*/
void sub_f7e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e5a0ULL || rel >= 0xf7e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e5b0 size=16 callers=0 calls=0
*/
void sub_f7e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e5b0ULL || rel >= 0xf7e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e5c0 size=48 callers=1 calls=0
*/
void sub_f7e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e5c0ULL || rel >= 0xf7e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e5f0 size=96 callers=1 calls=0
*/
void sub_f7e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e5f0ULL || rel >= 0xf7e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e650 size=160 callers=1 calls=2
   calls: sub_f64dd0, sub_f66330
*/
void sub_f7e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e650ULL || rel >= 0xf7e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e6f0 size=192 callers=3 calls=2
   calls: sub_f64dd0, sub_f657c0
*/
void sub_f7e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e6f0ULL || rel >= 0xf7e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e7b0 size=256 callers=1 calls=2
   calls: StateReceiveBase, sub_d0c0
   ref: StateReceiveSerial
*/
void StateReceiveSerial(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e7b0ULL || rel >= 0xf7e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e8b0 size=208 callers=0 calls=4
   calls: optionbar_4, sub_f5cd10, sub_f60140, sub_f7fff0
*/
void sub_f7e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e8b0ULL || rel >= 0xf7e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7e980 size=224 callers=0 calls=1
   calls: sub_138be60
*/
void sub_f7e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e980ULL || rel >= 0xf7ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ea60 size=816 callers=0 calls=8
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_f5a690, sub_f7e480, sub_f7e6f0
*/
void sub_f7ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ea60ULL || rel >= 0xf7ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ed90 size=816 callers=0 calls=10
   calls: Play_UI_common_report_2, sub_136b6f0, sub_136b700, sub_5cfaf0, sub_c39c40, sub_e7eb10, sub_eb75e0, sub_f6cdd0, sub_f75ec0, sub_ff45c0
*/
void sub_f7ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ed90ULL || rel >= 0xf7f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7f0c0 size=896 callers=0 calls=12
   calls: sub_f5cd20, sub_f5cd50, sub_f60140, sub_f64dd0, sub_f657c0, sub_f66330, sub_f7d670, sub_f7dbe0, sub_f7e480, sub_f7fff0, sub_f80cc0, sub_f80f20
*/
void sub_f7f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7f0c0ULL || rel >= 0xf7f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7f440 size=2352 callers=0 calls=19
   calls: RequestSerialAuth, RequestSyncDelivery, sub_138be50, sub_138bf60, sub_f60140, sub_f64dd0, sub_f657c0, sub_f66330, sub_f6cbb0, sub_f6cc80, sub_f6cd80, sub_f76850
   ... +7 more
*/
void sub_f7f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7f440ULL || rel >= 0xf7fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7fd70 size=16 callers=0 calls=0
*/
void sub_f7fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7fd70ULL || rel >= 0xf7fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7fd80 size=16 callers=0 calls=0
*/
void sub_f7fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7fd80ULL || rel >= 0xf7fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7fd90 size=96 callers=0 calls=0
*/
void sub_f7fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7fd90ULL || rel >= 0xf7fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7fdf0 size=96 callers=0 calls=0
*/
void sub_f7fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7fdf0ULL || rel >= 0xf7fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7fe50 size=96 callers=0 calls=0
*/
void sub_f7fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7fe50ULL || rel >= 0xf7feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7feb0 size=96 callers=0 calls=0
*/
void sub_f7feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7feb0ULL || rel >= 0xf7ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ff10 size=112 callers=0 calls=0
*/
void sub_f7ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ff10ULL || rel >= 0xf7ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7ff80 size=112 callers=0 calls=0
*/
void sub_f7ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ff80ULL || rel >= 0xf7fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f7fff0 size=464 callers=7 calls=0
*/
void sub_f7fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7fff0ULL || rel >= 0xf801c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f801c0 size=32 callers=0 calls=0
*/
void sub_f801c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf801c0ULL || rel >= 0xf801e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f801e0 size=16 callers=0 calls=0
*/
void sub_f801e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf801e0ULL || rel >= 0xf801f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f801f0 size=16 callers=0 calls=0
*/
void sub_f801f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf801f0ULL || rel >= 0xf80200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80200 size=16 callers=0 calls=0
*/
void sub_f80200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80200ULL || rel >= 0xf80210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80210 size=16 callers=0 calls=0
*/
void sub_f80210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80210ULL || rel >= 0xf80220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80220 size=16 callers=0 calls=0
*/
void sub_f80220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80220ULL || rel >= 0xf80230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80230 size=16 callers=0 calls=0
*/
void sub_f80230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80230ULL || rel >= 0xf80240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80240 size=16 callers=0 calls=0
*/
void sub_f80240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80240ULL || rel >= 0xf80250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80250 size=96 callers=0 calls=2
   calls: sub_f7d670, sub_f7dbe0
*/
void sub_f80250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80250ULL || rel >= 0xf802b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f802b0 size=16 callers=0 calls=0
*/
void sub_f802b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf802b0ULL || rel >= 0xf802c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f802c0 size=16 callers=0 calls=0
*/
void sub_f802c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf802c0ULL || rel >= 0xf802d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f802d0 size=16 callers=0 calls=0
*/
void sub_f802d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf802d0ULL || rel >= 0xf802e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f802e0 size=16 callers=0 calls=0
*/
void sub_f802e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf802e0ULL || rel >= 0xf802f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f802f0 size=16 callers=0 calls=0
*/
void sub_f802f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf802f0ULL || rel >= 0xf80300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80300 size=16 callers=0 calls=0
*/
void sub_f80300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80300ULL || rel >= 0xf80310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80310 size=16 callers=0 calls=0
*/
void sub_f80310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80310ULL || rel >= 0xf80320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80320 size=112 callers=0 calls=0
*/
void sub_f80320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80320ULL || rel >= 0xf80390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80390 size=64 callers=0 calls=0
*/
void sub_f80390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80390ULL || rel >= 0xf803d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f803d0 size=48 callers=0 calls=0
*/
void sub_f803d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf803d0ULL || rel >= 0xf80400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

