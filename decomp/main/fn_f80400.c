/* main functions 00f80400..00f96160 (123 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00f80400 size=48 callers=0 calls=0
*/
void sub_f80400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80400ULL || rel >= 0xf80430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80430 size=64 callers=0 calls=0
*/
void sub_f80430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80430ULL || rel >= 0xf80470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80470 size=64 callers=0 calls=0
*/
void sub_f80470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80470ULL || rel >= 0xf804b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f804b0 size=48 callers=0 calls=0
*/
void sub_f804b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf804b0ULL || rel >= 0xf804e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f804e0 size=48 callers=0 calls=0
*/
void sub_f804e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf804e0ULL || rel >= 0xf80510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80510 size=16 callers=0 calls=0
*/
void sub_f80510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80510ULL || rel >= 0xf80520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80520 size=16 callers=0 calls=0
*/
void sub_f80520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80520ULL || rel >= 0xf80530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80530 size=16 callers=0 calls=0
*/
void sub_f80530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80530ULL || rel >= 0xf80540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80540 size=16 callers=0 calls=0
*/
void sub_f80540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80540ULL || rel >= 0xf80550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80550 size=64 callers=0 calls=1
   calls: sub_f6cd80
*/
void sub_f80550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80550ULL || rel >= 0xf80590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80590 size=16 callers=0 calls=0
*/
void sub_f80590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80590ULL || rel >= 0xf805a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f805a0 size=16 callers=0 calls=0
*/
void sub_f805a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf805a0ULL || rel >= 0xf805b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f805b0 size=16 callers=0 calls=0
*/
void sub_f805b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf805b0ULL || rel >= 0xf805c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f805c0 size=80 callers=0 calls=1
   calls: sub_f6cd80
*/
void sub_f805c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf805c0ULL || rel >= 0xf80610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80610 size=16 callers=0 calls=0
*/
void sub_f80610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80610ULL || rel >= 0xf80620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80620 size=16 callers=0 calls=0
*/
void sub_f80620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80620ULL || rel >= 0xf80630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80630 size=16 callers=0 calls=0
*/
void sub_f80630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80630ULL || rel >= 0xf80640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80640 size=288 callers=0 calls=3
   calls: sub_f5a690, sub_f67dd0, sub_f6cd80
*/
void sub_f80640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80640ULL || rel >= 0xf80760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80760 size=64 callers=0 calls=0
*/
void sub_f80760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80760ULL || rel >= 0xf807a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f807a0 size=48 callers=0 calls=0
*/
void sub_f807a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf807a0ULL || rel >= 0xf807d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f807d0 size=48 callers=0 calls=0
*/
void sub_f807d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf807d0ULL || rel >= 0xf80800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80800 size=48 callers=0 calls=0
*/
void sub_f80800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80800ULL || rel >= 0xf80830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80830 size=64 callers=0 calls=0
*/
void sub_f80830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80830ULL || rel >= 0xf80870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80870 size=48 callers=0 calls=0
*/
void sub_f80870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80870ULL || rel >= 0xf808a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f808a0 size=48 callers=0 calls=0
*/
void sub_f808a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf808a0ULL || rel >= 0xf808d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f808d0 size=64 callers=0 calls=1
   calls: sub_f7de70
*/
void sub_f808d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf808d0ULL || rel >= 0xf80910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80910 size=16 callers=0 calls=0
*/
void sub_f80910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80910ULL || rel >= 0xf80920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80920 size=16 callers=0 calls=0
*/
void sub_f80920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80920ULL || rel >= 0xf80930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80930 size=16 callers=0 calls=0
*/
void sub_f80930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80930ULL || rel >= 0xf80940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80940 size=16 callers=0 calls=0
*/
void sub_f80940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80940ULL || rel >= 0xf80950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80950 size=16 callers=0 calls=0
*/
void sub_f80950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80950ULL || rel >= 0xf80960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80960 size=16 callers=0 calls=0
*/
void sub_f80960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80960ULL || rel >= 0xf80970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80970 size=16 callers=0 calls=0
*/
void sub_f80970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80970ULL || rel >= 0xf80980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80980 size=32 callers=0 calls=0
*/
void sub_f80980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80980ULL || rel >= 0xf809a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f809a0 size=16 callers=0 calls=0
*/
void sub_f809a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf809a0ULL || rel >= 0xf809b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f809b0 size=16 callers=0 calls=0
*/
void sub_f809b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf809b0ULL || rel >= 0xf809c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f809c0 size=16 callers=0 calls=0
*/
void sub_f809c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf809c0ULL || rel >= 0xf809d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f809d0 size=32 callers=0 calls=0
*/
void sub_f809d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf809d0ULL || rel >= 0xf809f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f809f0 size=16 callers=0 calls=0
*/
void sub_f809f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf809f0ULL || rel >= 0xf80a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80a00 size=16 callers=0 calls=0
*/
void sub_f80a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80a00ULL || rel >= 0xf80a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80a10 size=16 callers=0 calls=0
*/
void sub_f80a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80a10ULL || rel >= 0xf80a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80a20 size=48 callers=0 calls=0
*/
void sub_f80a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80a20ULL || rel >= 0xf80a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80a50 size=16 callers=0 calls=0
*/
void sub_f80a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80a50ULL || rel >= 0xf80a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80a60 size=16 callers=0 calls=0
*/
void sub_f80a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80a60ULL || rel >= 0xf80a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80a70 size=16 callers=0 calls=0
*/
void sub_f80a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80a70ULL || rel >= 0xf80a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80a80 size=16 callers=0 calls=0
*/
void sub_f80a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80a80ULL || rel >= 0xf80a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80a90 size=16 callers=0 calls=0
*/
void sub_f80a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80a90ULL || rel >= 0xf80aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80aa0 size=16 callers=0 calls=0
*/
void sub_f80aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80aa0ULL || rel >= 0xf80ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80ab0 size=16 callers=0 calls=0
*/
void sub_f80ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80ab0ULL || rel >= 0xf80ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80ac0 size=128 callers=0 calls=0
*/
void sub_f80ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80ac0ULL || rel >= 0xf80b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80b40 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/mystery/bin/mystery_serialcode_00_lyt.bin
*/
void mystery_serialcode_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80b40ULL || rel >= 0xf80c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80c50 size=16 callers=0 calls=0
*/
void sub_f80c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80c50ULL || rel >= 0xf80c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80c60 size=80 callers=0 calls=1
   calls: sub_f677c0
*/
void sub_f80c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80c60ULL || rel >= 0xf80cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80cb0 size=16 callers=0 calls=0
*/
void sub_f80cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80cb0ULL || rel >= 0xf80cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80cc0 size=608 callers=1 calls=1
   calls: sub_e83b20
*/
void sub_f80cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80cc0ULL || rel >= 0xf80f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f80f20 size=592 callers=1 calls=3
   calls: sub_67bdb0, sub_67bfa0, sub_e83b20
*/
void sub_f80f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf80f20ULL || rel >= 0xf81170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81170 size=16 callers=0 calls=0
*/
void sub_f81170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81170ULL || rel >= 0xf81180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81180 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f81180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81180ULL || rel >= 0xf811f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f811f0 size=16 callers=0 calls=0
*/
void sub_f811f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf811f0ULL || rel >= 0xf81200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81200 size=16 callers=0 calls=0
*/
void sub_f81200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81200ULL || rel >= 0xf81210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81210 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f81210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81210ULL || rel >= 0xf81280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81280 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f81280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81280ULL || rel >= 0xf812f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f812f0 size=16 callers=0 calls=0
*/
void sub_f812f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf812f0ULL || rel >= 0xf81300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81300 size=16 callers=0 calls=0
*/
void sub_f81300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81300ULL || rel >= 0xf81310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81310 size=16 callers=0 calls=0
*/
void sub_f81310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81310ULL || rel >= 0xf81320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81320 size=16 callers=0 calls=0
*/
void sub_f81320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81320ULL || rel >= 0xf81330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81330 size=256 callers=1 calls=3
   calls: anonymous, sub_d0c0, sub_f6c9c0
   ref: StateReceiveComplete
*/
void StateReceiveComplete(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81330ULL || rel >= 0xf81430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81430 size=1152 callers=0 calls=14
   calls: sub_5cfaf0, sub_67d450, sub_795bc0, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_eb7730, sub_f60140, sub_f64dd0, sub_f657c0, sub_f66aa0
   ... +2 more
   ref: optionbar
*/
void optionbar_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81430ULL || rel >= 0xf818b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f818b0 size=16 callers=0 calls=0
*/
void sub_f818b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf818b0ULL || rel >= 0xf818c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f818c0 size=1696 callers=0 calls=8
   calls: sub_136b580, sub_5cfad0, sub_c39c40, sub_e7ea90, sub_f5a690, sub_f71c60, sub_f71f60, sub_f72560
*/
void sub_f818c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf818c0ULL || rel >= 0xf81f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81f60 size=16 callers=0 calls=0
*/
void sub_f81f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81f60ULL || rel >= 0xf81f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f81f70 size=464 callers=0 calls=11
   calls: sub_e80580, sub_e807f0, sub_eb76b0, sub_eb7790, sub_eb7830, sub_f64dd0, sub_f66330, sub_f6cb40, sub_f6cc70, sub_f82140, sub_f82270
*/
void sub_f81f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf81f70ULL || rel >= 0xf82140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82140 size=304 callers=1 calls=2
   calls: sub_f5a690, sub_f6cbb0
*/
void sub_f82140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82140ULL || rel >= 0xf82270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82270 size=272 callers=1 calls=3
   calls: sub_f5a690, sub_f67db0, sub_f6cc70
*/
void sub_f82270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82270ULL || rel >= 0xf82380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82380 size=144 callers=0 calls=0
*/
void sub_f82380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82380ULL || rel >= 0xf82410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82410 size=144 callers=0 calls=0
*/
void sub_f82410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82410ULL || rel >= 0xf824a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f824a0 size=16 callers=0 calls=0
*/
void sub_f824a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf824a0ULL || rel >= 0xf824b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f824b0 size=144 callers=0 calls=0
*/
void sub_f824b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf824b0ULL || rel >= 0xf82540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82540 size=144 callers=0 calls=0
*/
void sub_f82540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82540ULL || rel >= 0xf825d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f825d0 size=16 callers=0 calls=0
*/
void sub_f825d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf825d0ULL || rel >= 0xf825e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f825e0 size=16 callers=0 calls=0
*/
void sub_f825e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf825e0ULL || rel >= 0xf825f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f825f0 size=160 callers=0 calls=0
*/
void sub_f825f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf825f0ULL || rel >= 0xf82690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82690 size=160 callers=0 calls=0
*/
void sub_f82690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82690ULL || rel >= 0xf82730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82730 size=144 callers=0 calls=0
*/
void sub_f82730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82730ULL || rel >= 0xf827c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f827c0 size=144 callers=0 calls=0
*/
void sub_f827c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf827c0ULL || rel >= 0xf82850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82850 size=304 callers=0 calls=0
*/
void sub_f82850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82850ULL || rel >= 0xf82980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82980 size=16 callers=0 calls=0
*/
void sub_f82980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82980ULL || rel >= 0xf82990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82990 size=16 callers=0 calls=0
*/
void sub_f82990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82990ULL || rel >= 0xf829a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f829a0 size=16 callers=0 calls=0
*/
void sub_f829a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf829a0ULL || rel >= 0xf829b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f829b0 size=16 callers=0 calls=0
*/
void sub_f829b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf829b0ULL || rel >= 0xf829c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f829c0 size=288 callers=0 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f829c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf829c0ULL || rel >= 0xf82ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82ae0 size=16 callers=0 calls=0
*/
void sub_f82ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82ae0ULL || rel >= 0xf82af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82af0 size=16 callers=0 calls=0
*/
void sub_f82af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82af0ULL || rel >= 0xf82b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82b00 size=16 callers=0 calls=0
*/
void sub_f82b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82b00ULL || rel >= 0xf82b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82b10 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/mystery/bin/mystery_complete_00_lyt.bin
*/
void mystery_complete_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82b10ULL || rel >= 0xf82c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f82c20 size=1408 callers=0 calls=5
   calls: sub_5cfad0, sub_67b990, sub_67d450, sub_e7ea90, sub_e7f7e0
*/
void sub_f82c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf82c20ULL || rel >= 0xf831a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f831a0 size=80 callers=0 calls=1
   calls: sub_f677c0
*/
void sub_f831a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf831a0ULL || rel >= 0xf831f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f831f0 size=144 callers=0 calls=1
   calls: sub_f677f0
*/
void sub_f831f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf831f0ULL || rel >= 0xf83280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83280 size=576 callers=1 calls=2
   calls: sub_67bdb0, sub_e83b20
*/
void sub_f83280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83280ULL || rel >= 0xf834c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f834c0 size=192 callers=0 calls=0
*/
void sub_f834c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf834c0ULL || rel >= 0xf83580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83580 size=192 callers=0 calls=0
*/
void sub_f83580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83580ULL || rel >= 0xf83640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83640 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f83640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83640ULL || rel >= 0xf836b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f836b0 size=192 callers=0 calls=0
*/
void sub_f836b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf836b0ULL || rel >= 0xf83770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83770 size=192 callers=0 calls=0
*/
void sub_f83770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83770ULL || rel >= 0xf83830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83830 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f83830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83830ULL || rel >= 0xf838a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f838a0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f838a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf838a0ULL || rel >= 0xf83910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83910 size=192 callers=0 calls=0
*/
void sub_f83910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83910ULL || rel >= 0xf839d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f839d0 size=192 callers=0 calls=0
*/
void sub_f839d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf839d0ULL || rel >= 0xf83a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83a90 size=208 callers=0 calls=0
*/
void sub_f83a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83a90ULL || rel >= 0xf83b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83b60 size=208 callers=0 calls=0
*/
void sub_f83b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83b60ULL || rel >= 0xf83c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83c30 size=304 callers=1 calls=3
   calls: StateReceiveBase, sub_d0c0, sub_f6c9c0
   ref: StateReceiveFromBall
*/
void StateReceiveFromBall(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83c30ULL || rel >= 0xf83d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83d60 size=128 callers=0 calls=2
   calls: sub_ece0b0, sub_f868b0
*/
void sub_f83d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83d60ULL || rel >= 0xf83de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f83de0 size=576 callers=0 calls=9
   calls: sub_ea3d10, sub_ea4760, sub_eb6070, sub_eb6530, sub_f5a690, sub_f60140, sub_f67db0, sub_f86560, sub_f869a0
*/
void sub_f83de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf83de0ULL || rel >= 0xf84020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f84020 size=208 callers=0 calls=2
   calls: optionbar_4, sub_c39c40
*/
void sub_f84020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf84020ULL || rel >= 0xf840f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f840f0 size=176 callers=0 calls=5
   calls: sub_ea37b0, sub_ece0a0, sub_ece0c0, sub_f5a690, sub_f7dbc0
*/
void sub_f840f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf840f0ULL || rel >= 0xf841a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f841a0 size=224 callers=0 calls=1
   calls: sub_138be60
*/
void sub_f841a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf841a0ULL || rel >= 0xf84280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f84280 size=176 callers=0 calls=3
   calls: sub_f59e10, sub_f7d670, sub_f7e480
*/
void sub_f84280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf84280ULL || rel >= 0xf84330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f84330 size=944 callers=0 calls=11
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_ece1e0, sub_f5a690, sub_f6cbb0, sub_f7d680, sub_f7e480, sub_f7e6f0
*/
void sub_f84330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf84330ULL || rel >= 0xf846e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f846e0 size=816 callers=0 calls=10
   calls: Play_UI_common_report_2, sub_136b6f0, sub_136b700, sub_5cfaf0, sub_c39c40, sub_e7eb10, sub_eb75e0, sub_f6cdd0, sub_f75ec0, sub_ff45c0
*/
void sub_f846e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf846e0ULL || rel >= 0xf84a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f84a10 size=208 callers=0 calls=1
   calls: sub_f7e480
*/
void sub_f84a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf84a10ULL || rel >= 0xf84ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f84ae0 size=2352 callers=0 calls=19
   calls: RequestSerialAuth, RequestSyncDelivery, sub_138be50, sub_138bf60, sub_ece0c0, sub_ece190, sub_f5a690, sub_f60140, sub_f64dd0, sub_f657c0, sub_f66330, sub_f6cc80
   ... +7 more
*/
void sub_f84ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf84ae0ULL || rel >= 0xf85410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85410 size=16 callers=0 calls=0
*/
void sub_f85410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85410ULL || rel >= 0xf85420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85420 size=16 callers=0 calls=0
*/
void sub_f85420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85420ULL || rel >= 0xf85430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85430 size=128 callers=0 calls=0
*/
void sub_f85430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85430ULL || rel >= 0xf854b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f854b0 size=128 callers=0 calls=0
*/
void sub_f854b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf854b0ULL || rel >= 0xf85530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85530 size=112 callers=0 calls=1
   calls: sub_f7bcb0
*/
void sub_f85530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85530ULL || rel >= 0xf855a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f855a0 size=16 callers=0 calls=0
*/
void sub_f855a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf855a0ULL || rel >= 0xf855b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f855b0 size=128 callers=0 calls=0
*/
void sub_f855b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf855b0ULL || rel >= 0xf85630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85630 size=128 callers=0 calls=0
*/
void sub_f85630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85630ULL || rel >= 0xf856b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f856b0 size=112 callers=0 calls=1
   calls: sub_f7bcb0
*/
void sub_f856b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf856b0ULL || rel >= 0xf85720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85720 size=112 callers=0 calls=1
   calls: sub_f7bcb0
*/
void sub_f85720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85720ULL || rel >= 0xf85790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85790 size=144 callers=0 calls=0
*/
void sub_f85790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85790ULL || rel >= 0xf85820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85820 size=144 callers=0 calls=0
*/
void sub_f85820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85820ULL || rel >= 0xf858b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f858b0 size=16 callers=0 calls=0
*/
void sub_f858b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf858b0ULL || rel >= 0xf858c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f858c0 size=16 callers=0 calls=0
*/
void sub_f858c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf858c0ULL || rel >= 0xf858d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f858d0 size=16 callers=0 calls=0
*/
void sub_f858d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf858d0ULL || rel >= 0xf858e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f858e0 size=16 callers=0 calls=0
*/
void sub_f858e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf858e0ULL || rel >= 0xf858f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f858f0 size=48 callers=0 calls=0
*/
void sub_f858f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf858f0ULL || rel >= 0xf85920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85920 size=16 callers=0 calls=0
*/
void sub_f85920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85920ULL || rel >= 0xf85930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85930 size=16 callers=0 calls=0
*/
void sub_f85930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85930ULL || rel >= 0xf85940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85940 size=16 callers=0 calls=0
*/
void sub_f85940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85940ULL || rel >= 0xf85950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85950 size=32 callers=0 calls=0
*/
void sub_f85950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85950ULL || rel >= 0xf85970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85970 size=16 callers=0 calls=0
*/
void sub_f85970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85970ULL || rel >= 0xf85980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85980 size=16 callers=0 calls=0
*/
void sub_f85980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85980ULL || rel >= 0xf85990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85990 size=16 callers=0 calls=0
*/
void sub_f85990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85990ULL || rel >= 0xf859a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f859a0 size=16 callers=0 calls=0
*/
void sub_f859a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf859a0ULL || rel >= 0xf859b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f859b0 size=16 callers=0 calls=0
*/
void sub_f859b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf859b0ULL || rel >= 0xf859c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f859c0 size=16 callers=0 calls=0
*/
void sub_f859c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf859c0ULL || rel >= 0xf859d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f859d0 size=16 callers=0 calls=0
*/
void sub_f859d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf859d0ULL || rel >= 0xf859e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f859e0 size=96 callers=0 calls=2
   calls: sub_f7d670, sub_f7dbe0
*/
void sub_f859e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf859e0ULL || rel >= 0xf85a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85a40 size=16 callers=0 calls=0
*/
void sub_f85a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85a40ULL || rel >= 0xf85a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85a50 size=16 callers=0 calls=0
*/
void sub_f85a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85a50ULL || rel >= 0xf85a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85a60 size=16 callers=0 calls=0
*/
void sub_f85a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85a60ULL || rel >= 0xf85a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85a70 size=16 callers=0 calls=0
*/
void sub_f85a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85a70ULL || rel >= 0xf85a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85a80 size=16 callers=0 calls=0
*/
void sub_f85a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85a80ULL || rel >= 0xf85a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85a90 size=16 callers=0 calls=0
*/
void sub_f85a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85a90ULL || rel >= 0xf85aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85aa0 size=16 callers=0 calls=0
*/
void sub_f85aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85aa0ULL || rel >= 0xf85ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85ab0 size=112 callers=0 calls=0
*/
void sub_f85ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85ab0ULL || rel >= 0xf85b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85b20 size=64 callers=0 calls=0
*/
void sub_f85b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85b20ULL || rel >= 0xf85b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85b60 size=48 callers=0 calls=0
*/
void sub_f85b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85b60ULL || rel >= 0xf85b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85b90 size=48 callers=0 calls=0
*/
void sub_f85b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85b90ULL || rel >= 0xf85bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85bc0 size=64 callers=0 calls=0
*/
void sub_f85bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85bc0ULL || rel >= 0xf85c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85c00 size=64 callers=0 calls=0
*/
void sub_f85c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85c00ULL || rel >= 0xf85c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85c40 size=48 callers=0 calls=0
*/
void sub_f85c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85c40ULL || rel >= 0xf85c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85c70 size=48 callers=0 calls=0
*/
void sub_f85c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85c70ULL || rel >= 0xf85ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85ca0 size=16 callers=0 calls=0
*/
void sub_f85ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85ca0ULL || rel >= 0xf85cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85cb0 size=16 callers=0 calls=0
*/
void sub_f85cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85cb0ULL || rel >= 0xf85cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85cc0 size=16 callers=0 calls=0
*/
void sub_f85cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85cc0ULL || rel >= 0xf85cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85cd0 size=16 callers=0 calls=0
*/
void sub_f85cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85cd0ULL || rel >= 0xf85ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85ce0 size=64 callers=0 calls=1
   calls: sub_f6cd80
*/
void sub_f85ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85ce0ULL || rel >= 0xf85d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85d20 size=16 callers=0 calls=0
*/
void sub_f85d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85d20ULL || rel >= 0xf85d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85d30 size=16 callers=0 calls=0
*/
void sub_f85d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85d30ULL || rel >= 0xf85d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85d40 size=16 callers=0 calls=0
*/
void sub_f85d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85d40ULL || rel >= 0xf85d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85d50 size=80 callers=0 calls=1
   calls: sub_f6cd80
*/
void sub_f85d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85d50ULL || rel >= 0xf85da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85da0 size=16 callers=0 calls=0
*/
void sub_f85da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85da0ULL || rel >= 0xf85db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85db0 size=16 callers=0 calls=0
*/
void sub_f85db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85db0ULL || rel >= 0xf85dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85dc0 size=16 callers=0 calls=0
*/
void sub_f85dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85dc0ULL || rel >= 0xf85dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85dd0 size=288 callers=0 calls=3
   calls: sub_f5a690, sub_f67dd0, sub_f6cd80
*/
void sub_f85dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85dd0ULL || rel >= 0xf85ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85ef0 size=64 callers=0 calls=0
*/
void sub_f85ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85ef0ULL || rel >= 0xf85f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85f30 size=48 callers=0 calls=0
*/
void sub_f85f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85f30ULL || rel >= 0xf85f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85f60 size=48 callers=0 calls=0
*/
void sub_f85f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85f60ULL || rel >= 0xf85f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85f90 size=48 callers=0 calls=0
*/
void sub_f85f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85f90ULL || rel >= 0xf85fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f85fc0 size=64 callers=0 calls=0
*/
void sub_f85fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf85fc0ULL || rel >= 0xf86000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86000 size=48 callers=0 calls=0
*/
void sub_f86000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86000ULL || rel >= 0xf86030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86030 size=48 callers=0 calls=0
*/
void sub_f86030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86030ULL || rel >= 0xf86060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86060 size=64 callers=0 calls=1
   calls: sub_f7de70
*/
void sub_f86060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86060ULL || rel >= 0xf860a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f860a0 size=16 callers=0 calls=0
*/
void sub_f860a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf860a0ULL || rel >= 0xf860b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f860b0 size=16 callers=0 calls=0
*/
void sub_f860b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf860b0ULL || rel >= 0xf860c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f860c0 size=16 callers=0 calls=0
*/
void sub_f860c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf860c0ULL || rel >= 0xf860d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f860d0 size=16 callers=0 calls=0
*/
void sub_f860d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf860d0ULL || rel >= 0xf860e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f860e0 size=16 callers=0 calls=0
*/
void sub_f860e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf860e0ULL || rel >= 0xf860f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f860f0 size=16 callers=0 calls=0
*/
void sub_f860f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf860f0ULL || rel >= 0xf86100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86100 size=16 callers=0 calls=0
*/
void sub_f86100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86100ULL || rel >= 0xf86110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86110 size=16 callers=0 calls=0
*/
void sub_f86110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86110ULL || rel >= 0xf86120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86120 size=16 callers=0 calls=0
*/
void sub_f86120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86120ULL || rel >= 0xf86130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86130 size=16 callers=0 calls=0
*/
void sub_f86130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86130ULL || rel >= 0xf86140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86140 size=16 callers=0 calls=0
*/
void sub_f86140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86140ULL || rel >= 0xf86150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86150 size=48 callers=0 calls=0
*/
void sub_f86150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86150ULL || rel >= 0xf86180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86180 size=16 callers=0 calls=0
*/
void sub_f86180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86180ULL || rel >= 0xf86190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86190 size=16 callers=0 calls=0
*/
void sub_f86190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86190ULL || rel >= 0xf861a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f861a0 size=16 callers=0 calls=0
*/
void sub_f861a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf861a0ULL || rel >= 0xf861b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f861b0 size=304 callers=0 calls=3
   calls: sub_ece0c0, sub_f6cd80, sub_f868b0
*/
void sub_f861b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf861b0ULL || rel >= 0xf862e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f862e0 size=16 callers=0 calls=0
*/
void sub_f862e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf862e0ULL || rel >= 0xf862f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f862f0 size=16 callers=0 calls=0
*/
void sub_f862f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf862f0ULL || rel >= 0xf86300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86300 size=16 callers=0 calls=0
*/
void sub_f86300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86300ULL || rel >= 0xf86310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86310 size=16 callers=0 calls=0
*/
void sub_f86310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86310ULL || rel >= 0xf86320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86320 size=16 callers=0 calls=0
*/
void sub_f86320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86320ULL || rel >= 0xf86330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86330 size=16 callers=0 calls=0
*/
void sub_f86330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86330ULL || rel >= 0xf86340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86340 size=16 callers=0 calls=0
*/
void sub_f86340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86340ULL || rel >= 0xf86350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86350 size=128 callers=0 calls=0
*/
void sub_f86350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86350ULL || rel >= 0xf863d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f863d0 size=400 callers=1 calls=5
   calls: sub_5cfaf0, sub_795bc0, sub_f668c0, sub_f6c9f0, sub_f75cd0
   ref: message
   ref: optionbar
*/
void optionbar_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf863d0ULL || rel >= 0xf86560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86560 size=848 callers=3 calls=7
   calls: sub_14ac370, sub_67d450, sub_e7eb10, sub_e83930, sub_eb6230, sub_eb7570, sub_eb75e0
*/
void sub_f86560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86560ULL || rel >= 0xf868b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f868b0 size=240 callers=5 calls=4
   calls: sub_14e4110, sub_14e4180, sub_93c570, sub_f6cd80
*/
void sub_f868b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf868b0ULL || rel >= 0xf869a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f869a0 size=272 callers=3 calls=4
   calls: sub_14e4180, sub_93c570, sub_eb6530, sub_eb8e80
*/
void sub_f869a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf869a0ULL || rel >= 0xf86ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86ab0 size=256 callers=1 calls=2
   calls: StateReceiveBase, sub_d0c0
   ref: StateReceiveInternet
*/
void StateReceiveInternet(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86ab0ULL || rel >= 0xf86bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86bb0 size=16 callers=0 calls=0
*/
void sub_f86bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86bb0ULL || rel >= 0xf86bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86bc0 size=48 callers=0 calls=0
*/
void sub_f86bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86bc0ULL || rel >= 0xf86bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86bf0 size=800 callers=0 calls=9
   calls: Play_UI_common_report_2, sub_136b6f0, sub_136b700, sub_5cfaf0, sub_c39c40, sub_e7eb10, sub_f6cdd0, sub_f75ec0, sub_ff45c0
*/
void sub_f86bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86bf0ULL || rel >= 0xf86f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f86f10 size=992 callers=0 calls=9
   calls: RequestSyncDelivery, sub_f64dd0, sub_f657c0, sub_f66330, sub_f6cc80, sub_f7cde0, sub_f7dbe0, sub_f7de40, sub_f7dec0
   ref: normal
*/
void normal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf86f10ULL || rel >= 0xf872f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f872f0 size=16 callers=0 calls=0
*/
void sub_f872f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf872f0ULL || rel >= 0xf87300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87300 size=16 callers=0 calls=0
*/
void sub_f87300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87300ULL || rel >= 0xf87310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87310 size=96 callers=0 calls=0
*/
void sub_f87310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87310ULL || rel >= 0xf87370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87370 size=96 callers=0 calls=0
*/
void sub_f87370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87370ULL || rel >= 0xf873d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f873d0 size=96 callers=0 calls=0
*/
void sub_f873d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf873d0ULL || rel >= 0xf87430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87430 size=96 callers=0 calls=0
*/
void sub_f87430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87430ULL || rel >= 0xf87490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87490 size=112 callers=0 calls=0
*/
void sub_f87490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87490ULL || rel >= 0xf87500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87500 size=112 callers=0 calls=0
*/
void sub_f87500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87500ULL || rel >= 0xf87570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87570 size=96 callers=0 calls=2
   calls: sub_f7d670, sub_f7dbe0
*/
void sub_f87570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87570ULL || rel >= 0xf875d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f875d0 size=16 callers=0 calls=0
*/
void sub_f875d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf875d0ULL || rel >= 0xf875e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f875e0 size=16 callers=0 calls=0
*/
void sub_f875e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf875e0ULL || rel >= 0xf875f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f875f0 size=16 callers=0 calls=0
*/
void sub_f875f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf875f0ULL || rel >= 0xf87600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87600 size=288 callers=0 calls=3
   calls: sub_f5a690, sub_f67dd0, sub_f6cd80
*/
void sub_f87600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87600ULL || rel >= 0xf87720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87720 size=64 callers=0 calls=0
*/
void sub_f87720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87720ULL || rel >= 0xf87760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87760 size=48 callers=0 calls=0
*/
void sub_f87760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87760ULL || rel >= 0xf87790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87790 size=48 callers=0 calls=0
*/
void sub_f87790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87790ULL || rel >= 0xf877c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f877c0 size=48 callers=0 calls=0
*/
void sub_f877c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf877c0ULL || rel >= 0xf877f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f877f0 size=64 callers=0 calls=0
*/
void sub_f877f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf877f0ULL || rel >= 0xf87830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87830 size=48 callers=0 calls=0
*/
void sub_f87830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87830ULL || rel >= 0xf87860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87860 size=48 callers=0 calls=0
*/
void sub_f87860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87860ULL || rel >= 0xf87890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87890 size=64 callers=0 calls=1
   calls: sub_f7de70
*/
void sub_f87890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87890ULL || rel >= 0xf878d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f878d0 size=16 callers=0 calls=0
*/
void sub_f878d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf878d0ULL || rel >= 0xf878e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f878e0 size=16 callers=0 calls=0
*/
void sub_f878e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf878e0ULL || rel >= 0xf878f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f878f0 size=16 callers=0 calls=0
*/
void sub_f878f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf878f0ULL || rel >= 0xf87900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87900 size=128 callers=0 calls=0
*/
void sub_f87900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87900ULL || rel >= 0xf87980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87980 size=256 callers=1 calls=2
   calls: StateReceiveBase, sub_d0c0
   ref: StateReceiveRankMatch
*/
void StateReceiveRankMatch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87980ULL || rel >= 0xf87a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87a80 size=16 callers=0 calls=0
*/
void sub_f87a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87a80ULL || rel >= 0xf87a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87a90 size=48 callers=0 calls=0
*/
void sub_f87a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87a90ULL || rel >= 0xf87ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87ac0 size=800 callers=0 calls=9
   calls: Play_UI_common_report_2, sub_136b6f0, sub_136b700, sub_5cfaf0, sub_c39c40, sub_e7eb10, sub_f6cdd0, sub_f75ec0, sub_ff45c0
*/
void sub_f87ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87ac0ULL || rel >= 0xf87de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f87de0 size=992 callers=0 calls=9
   calls: RequestSyncDelivery, sub_f64dd0, sub_f657c0, sub_f66330, sub_f6cc80, sub_f7cde0, sub_f7dbe0, sub_f7de40, sub_f7dec0
   ref: tournament
*/
void tournament(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87de0ULL || rel >= 0xf881c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f881c0 size=16 callers=0 calls=0
*/
void sub_f881c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf881c0ULL || rel >= 0xf881d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f881d0 size=16 callers=0 calls=0
*/
void sub_f881d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf881d0ULL || rel >= 0xf881e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f881e0 size=96 callers=0 calls=0
*/
void sub_f881e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf881e0ULL || rel >= 0xf88240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88240 size=96 callers=0 calls=0
*/
void sub_f88240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88240ULL || rel >= 0xf882a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f882a0 size=96 callers=0 calls=0
*/
void sub_f882a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf882a0ULL || rel >= 0xf88300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88300 size=96 callers=0 calls=0
*/
void sub_f88300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88300ULL || rel >= 0xf88360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88360 size=112 callers=0 calls=0
*/
void sub_f88360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88360ULL || rel >= 0xf883d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f883d0 size=112 callers=0 calls=0
*/
void sub_f883d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf883d0ULL || rel >= 0xf88440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88440 size=96 callers=0 calls=2
   calls: sub_f7d670, sub_f7dbe0
*/
void sub_f88440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88440ULL || rel >= 0xf884a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f884a0 size=16 callers=0 calls=0
*/
void sub_f884a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf884a0ULL || rel >= 0xf884b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f884b0 size=16 callers=0 calls=0
*/
void sub_f884b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf884b0ULL || rel >= 0xf884c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f884c0 size=16 callers=0 calls=0
*/
void sub_f884c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf884c0ULL || rel >= 0xf884d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f884d0 size=288 callers=0 calls=3
   calls: sub_f5a690, sub_f67dd0, sub_f6cd80
*/
void sub_f884d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf884d0ULL || rel >= 0xf885f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f885f0 size=64 callers=0 calls=0
*/
void sub_f885f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf885f0ULL || rel >= 0xf88630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88630 size=48 callers=0 calls=0
*/
void sub_f88630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88630ULL || rel >= 0xf88660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88660 size=48 callers=0 calls=0
*/
void sub_f88660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88660ULL || rel >= 0xf88690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88690 size=48 callers=0 calls=0
*/
void sub_f88690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88690ULL || rel >= 0xf886c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f886c0 size=64 callers=0 calls=0
*/
void sub_f886c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf886c0ULL || rel >= 0xf88700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88700 size=48 callers=0 calls=0
*/
void sub_f88700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88700ULL || rel >= 0xf88730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88730 size=48 callers=0 calls=0
*/
void sub_f88730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88730ULL || rel >= 0xf88760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88760 size=64 callers=0 calls=1
   calls: sub_f7de70
*/
void sub_f88760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88760ULL || rel >= 0xf887a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f887a0 size=16 callers=0 calls=0
*/
void sub_f887a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf887a0ULL || rel >= 0xf887b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f887b0 size=16 callers=0 calls=0
*/
void sub_f887b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf887b0ULL || rel >= 0xf887c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f887c0 size=16 callers=0 calls=0
*/
void sub_f887c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf887c0ULL || rel >= 0xf887d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f887d0 size=128 callers=0 calls=0
*/
void sub_f887d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf887d0ULL || rel >= 0xf88850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88850 size=240 callers=1 calls=2
   calls: StateSelectReceiveDataBase, sub_d0c0
   ref: StateSelectReceiveDataLocal
*/
void StateSelectReceiveDataLocal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88850ULL || rel >= 0xf88940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88940 size=32 callers=0 calls=0
*/
void sub_f88940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88940ULL || rel >= 0xf88960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88960 size=832 callers=0 calls=14
   calls: sub_ebccd0, sub_ebcfb0, sub_ebd130, sub_ece430, sub_f5a690, sub_f67de0, sub_f68da0, sub_f6cc80, sub_f76850, sub_f7c510, sub_f895a0, sub_f89e70
   ... +2 more
*/
void sub_f88960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88960ULL || rel >= 0xf88ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88ca0 size=224 callers=0 calls=0
*/
void sub_f88ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88ca0ULL || rel >= 0xf88d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88d80 size=224 callers=0 calls=0
*/
void sub_f88d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88d80ULL || rel >= 0xf88e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88e60 size=16 callers=0 calls=0
*/
void sub_f88e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88e60ULL || rel >= 0xf88e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88e70 size=16 callers=0 calls=0
*/
void sub_f88e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88e70ULL || rel >= 0xf88e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88e80 size=224 callers=0 calls=0
*/
void sub_f88e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88e80ULL || rel >= 0xf88f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f88f60 size=224 callers=0 calls=0
*/
void sub_f88f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88f60ULL || rel >= 0xf89040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89040 size=16 callers=0 calls=0
*/
void sub_f89040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89040ULL || rel >= 0xf89050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89050 size=16 callers=0 calls=0
*/
void sub_f89050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89050ULL || rel >= 0xf89060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89060 size=224 callers=0 calls=0
*/
void sub_f89060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89060ULL || rel >= 0xf89140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89140 size=224 callers=0 calls=0
*/
void sub_f89140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89140ULL || rel >= 0xf89220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89220 size=224 callers=0 calls=0
*/
void sub_f89220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89220ULL || rel >= 0xf89300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89300 size=224 callers=0 calls=0
*/
void sub_f89300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89300ULL || rel >= 0xf893e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f893e0 size=304 callers=0 calls=0
*/
void sub_f893e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf893e0ULL || rel >= 0xf89510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89510 size=16 callers=0 calls=0
*/
void sub_f89510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89510ULL || rel >= 0xf89520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89520 size=16 callers=0 calls=0
*/
void sub_f89520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89520ULL || rel >= 0xf89530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89530 size=16 callers=0 calls=0
*/
void sub_f89530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89530ULL || rel >= 0xf89540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89540 size=16 callers=0 calls=0
*/
void sub_f89540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89540ULL || rel >= 0xf89550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89550 size=32 callers=0 calls=0
*/
void sub_f89550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89550ULL || rel >= 0xf89570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89570 size=16 callers=0 calls=0
*/
void sub_f89570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89570ULL || rel >= 0xf89580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89580 size=16 callers=0 calls=0
*/
void sub_f89580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89580ULL || rel >= 0xf89590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89590 size=16 callers=0 calls=0
*/
void sub_f89590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89590ULL || rel >= 0xf895a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f895a0 size=464 callers=8 calls=0
*/
void sub_f895a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf895a0ULL || rel >= 0xf89770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89770 size=272 callers=5 calls=4
   calls: anonymous, sub_d0c0, sub_f6c9c0, sub_f7e2c0
   ref: StateSelectReceiveDataBase
*/
void StateSelectReceiveDataBase(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89770ULL || rel >= 0xf89880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89880 size=1024 callers=1 calls=9
   calls: sub_5cfaf0, sub_795bc0, sub_c39c40, sub_f60140, sub_f668c0, sub_f66f60, sub_f6c9f0, sub_f75bf0, sub_f7e300
   ref: optionbar
*/
void optionbar_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89880ULL || rel >= 0xf89c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89c80 size=16 callers=1 calls=0
*/
void sub_f89c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89c80ULL || rel >= 0xf89c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89c90 size=16 callers=1 calls=0
*/
void sub_f89c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89c90ULL || rel >= 0xf89ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89ca0 size=304 callers=0 calls=6
   calls: sub_eb7830, sub_f64dd0, sub_f66330, sub_f6cb40, sub_f76970, sub_f7e360
*/
void sub_f89ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89ca0ULL || rel >= 0xf89dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89dd0 size=16 callers=0 calls=0
*/
void sub_f89dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89dd0ULL || rel >= 0xf89de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89de0 size=144 callers=3 calls=2
   calls: sub_f5a690, sub_f67db0
*/
void sub_f89de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89de0ULL || rel >= 0xf89e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89e70 size=240 callers=5 calls=4
   calls: sub_eb77f0, sub_f5a690, sub_f64dd0, sub_f663d0
*/
void sub_f89e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89e70ULL || rel >= 0xf89f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f89f60 size=224 callers=0 calls=3
   calls: sub_f5a690, sub_f68d80, sub_f7c510
*/
void sub_f89f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf89f60ULL || rel >= 0xf8a040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8a040 size=16 callers=0 calls=0
*/
void sub_f8a040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8a040ULL || rel >= 0xf8a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8a050 size=1328 callers=0 calls=9
   calls: sub_5cfad0, sub_c39c40, sub_e7ea90, sub_f5a690, sub_f68d80, sub_f68da0, sub_f71c60, sub_f7c510, sub_f895a0
*/
void sub_f8a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8a050ULL || rel >= 0xf8a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8a580 size=16 callers=0 calls=0
*/
void sub_f8a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8a580ULL || rel >= 0xf8a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8a590 size=1008 callers=0 calls=13
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_eb7730, sub_f5a690, sub_f64dd0, sub_f657c0, sub_f67db0, sub_f68d80, sub_f7c510
   ... +1 more
*/
void sub_f8a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8a590ULL || rel >= 0xf8a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8a980 size=320 callers=0 calls=6
   calls: sub_e80580, sub_e807f0, sub_eb7790, sub_f64dd0, sub_f66330, sub_f6cbb0
*/
void sub_f8a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8a980ULL || rel >= 0xf8aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8aac0 size=832 callers=0 calls=11
   calls: sub_f59e10, sub_f5a690, sub_f686a0, sub_f68da0, sub_f6cbb0, sub_f6cc70, sub_f7c510, sub_f7e480, sub_f895a0, sub_f8d800, sub_f8d810
*/
void sub_f8aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8aac0ULL || rel >= 0xf8ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ae00 size=16 callers=0 calls=0
*/
void sub_f8ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ae00ULL || rel >= 0xf8ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ae10 size=480 callers=5 calls=10
   calls: MEET_BY_EVENT_2, sub_f5a240, sub_f5a340, sub_f5a3f0, sub_f5a5f0, sub_f5a690, sub_f68340, sub_f68da0, sub_f7c510, sub_f895a0
*/
void sub_f8ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ae10ULL || rel >= 0xf8aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8aff0 size=224 callers=0 calls=0
*/
void sub_f8aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8aff0ULL || rel >= 0xf8b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b0d0 size=224 callers=0 calls=0
*/
void sub_f8b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b0d0ULL || rel >= 0xf8b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b1b0 size=224 callers=0 calls=0
*/
void sub_f8b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b1b0ULL || rel >= 0xf8b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b290 size=224 callers=0 calls=0
*/
void sub_f8b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b290ULL || rel >= 0xf8b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b370 size=224 callers=0 calls=0
*/
void sub_f8b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b370ULL || rel >= 0xf8b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b450 size=224 callers=0 calls=0
*/
void sub_f8b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b450ULL || rel >= 0xf8b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b530 size=224 callers=0 calls=0
*/
void sub_f8b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b530ULL || rel >= 0xf8b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b610 size=16 callers=0 calls=0
*/
void sub_f8b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b610ULL || rel >= 0xf8b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b620 size=16 callers=0 calls=0
*/
void sub_f8b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b620ULL || rel >= 0xf8b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b630 size=16 callers=0 calls=0
*/
void sub_f8b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b630ULL || rel >= 0xf8b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b640 size=16 callers=0 calls=0
*/
void sub_f8b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b640ULL || rel >= 0xf8b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b650 size=32 callers=0 calls=0
*/
void sub_f8b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b650ULL || rel >= 0xf8b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b670 size=16 callers=0 calls=0
*/
void sub_f8b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b670ULL || rel >= 0xf8b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b680 size=16 callers=0 calls=0
*/
void sub_f8b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b680ULL || rel >= 0xf8b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b690 size=16 callers=0 calls=0
*/
void sub_f8b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b690ULL || rel >= 0xf8b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b6a0 size=32 callers=0 calls=0
*/
void sub_f8b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b6a0ULL || rel >= 0xf8b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b6c0 size=16 callers=0 calls=0
*/
void sub_f8b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b6c0ULL || rel >= 0xf8b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b6d0 size=16 callers=0 calls=0
*/
void sub_f8b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b6d0ULL || rel >= 0xf8b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b6e0 size=16 callers=0 calls=0
*/
void sub_f8b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b6e0ULL || rel >= 0xf8b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b6f0 size=336 callers=0 calls=6
   calls: sub_e80580, sub_e807f0, sub_f5a690, sub_f67db0, sub_f6cbb0, sub_f8d7f0
*/
void sub_f8b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b6f0ULL || rel >= 0xf8b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b840 size=16 callers=0 calls=0
*/
void sub_f8b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b840ULL || rel >= 0xf8b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b850 size=16 callers=0 calls=0
*/
void sub_f8b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b850ULL || rel >= 0xf8b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b860 size=16 callers=0 calls=0
*/
void sub_f8b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b860ULL || rel >= 0xf8b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b870 size=16 callers=0 calls=0
*/
void sub_f8b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b870ULL || rel >= 0xf8b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b880 size=16 callers=0 calls=0
*/
void sub_f8b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b880ULL || rel >= 0xf8b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b890 size=16 callers=0 calls=0
*/
void sub_f8b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b890ULL || rel >= 0xf8b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b8a0 size=16 callers=0 calls=0
*/
void sub_f8b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b8a0ULL || rel >= 0xf8b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8b8b0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/mystery/bin/mystery_receive_00_lyt.bin
   ref: bin/appli/mystery/bin/uikit_mystery_receive_00.bin
*/
void uikit_mystery_receive_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b8b0ULL || rel >= 0xf8ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ba90 size=6304 callers=0 calls=12
   calls: sub_14f1840, sub_14f1850, sub_14f1870, sub_5cfad0, sub_67b990, sub_67d450, sub_7a3c20, sub_e7ea90, sub_e7f7e0, sub_e84250, sub_e84310, sub_f718a0
   ref: pane_%s
   ref: L_btn_received_00
   ref: L_btn_received_01
   ref: pane_%s_%s
   ref: L_btn_received_02
   ref: L_btn_received_04
   ref: L_btn_received_03
   ref: L_btn_received_07
*/
void T_received_heading_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ba90ULL || rel >= 0xf8d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d330 size=320 callers=1 calls=2
   calls: sub_14edac0, sub_a91e20
*/
void sub_f8d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d330ULL || rel >= 0xf8d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d470 size=208 callers=0 calls=5
   calls: sub_14e1a30, sub_14eead0, sub_e80580, sub_e80810, sub_f677c0
*/
void sub_f8d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d470ULL || rel >= 0xf8d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d540 size=240 callers=0 calls=4
   calls: sub_14eead0, sub_e80580, sub_e807f0, sub_f677f0
*/
void sub_f8d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d540ULL || rel >= 0xf8d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d630 size=336 callers=0 calls=2
   calls: sub_67bdb0, sub_e83b20
*/
void sub_f8d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d630ULL || rel >= 0xf8d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d780 size=112 callers=0 calls=3
   calls: sub_14e1a30, sub_e80580, sub_f67830
*/
void sub_f8d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d780ULL || rel >= 0xf8d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d7f0 size=16 callers=1 calls=0
*/
void sub_f8d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d7f0ULL || rel >= 0xf8d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d800 size=16 callers=1 calls=0
*/
void sub_f8d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d800ULL || rel >= 0xf8d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d810 size=16 callers=1 calls=0
*/
void sub_f8d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d810ULL || rel >= 0xf8d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d820 size=288 callers=0 calls=0
*/
void sub_f8d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d820ULL || rel >= 0xf8d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d940 size=16 callers=0 calls=0
*/
void sub_f8d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d940ULL || rel >= 0xf8d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d950 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f8d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d950ULL || rel >= 0xf8d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d9c0 size=16 callers=0 calls=0
*/
void sub_f8d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d9c0ULL || rel >= 0xf8d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d9d0 size=16 callers=0 calls=0
*/
void sub_f8d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d9d0ULL || rel >= 0xf8d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8d9e0 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f8d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8d9e0ULL || rel >= 0xf8da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8da50 size=112 callers=0 calls=1
   calls: sub_f67690
*/
void sub_f8da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8da50ULL || rel >= 0xf8dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dac0 size=16 callers=0 calls=0
*/
void sub_f8dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dac0ULL || rel >= 0xf8dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dad0 size=16 callers=0 calls=0
*/
void sub_f8dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dad0ULL || rel >= 0xf8dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dae0 size=16 callers=0 calls=0
*/
void sub_f8dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dae0ULL || rel >= 0xf8daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8daf0 size=16 callers=0 calls=0
*/
void sub_f8daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8daf0ULL || rel >= 0xf8db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db00 size=16 callers=0 calls=0
*/
void sub_f8db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db00ULL || rel >= 0xf8db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db10 size=16 callers=0 calls=0
*/
void sub_f8db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db10ULL || rel >= 0xf8db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db20 size=16 callers=0 calls=0
*/
void sub_f8db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db20ULL || rel >= 0xf8db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db30 size=16 callers=0 calls=0
*/
void sub_f8db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db30ULL || rel >= 0xf8db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db40 size=16 callers=0 calls=0
*/
void sub_f8db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db40ULL || rel >= 0xf8db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db50 size=16 callers=0 calls=0
*/
void sub_f8db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db50ULL || rel >= 0xf8db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db60 size=16 callers=0 calls=0
*/
void sub_f8db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db60ULL || rel >= 0xf8db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db70 size=16 callers=0 calls=0
*/
void sub_f8db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db70ULL || rel >= 0xf8db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db80 size=16 callers=0 calls=0
*/
void sub_f8db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db80ULL || rel >= 0xf8db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8db90 size=16 callers=0 calls=0
*/
void sub_f8db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8db90ULL || rel >= 0xf8dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dba0 size=16 callers=0 calls=0
*/
void sub_f8dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dba0ULL || rel >= 0xf8dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dbb0 size=16 callers=0 calls=0
*/
void sub_f8dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dbb0ULL || rel >= 0xf8dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dbc0 size=16 callers=0 calls=0
*/
void sub_f8dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dbc0ULL || rel >= 0xf8dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dbd0 size=256 callers=1 calls=2
   calls: StateSelectReceiveDataBase, sub_d0c0
   ref: StateSelectReceiveDataSerial
*/
void StateSelectReceiveDataSerial(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dbd0ULL || rel >= 0xf8dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dcd0 size=32 callers=0 calls=0
*/
void sub_f8dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dcd0ULL || rel >= 0xf8dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8dcf0 size=1632 callers=0 calls=21
   calls: RequestSerialAuth, sub_138be50, sub_ebccd0, sub_ebcfb0, sub_ebd130, sub_ece430, sub_f5a690, sub_f60140, sub_f67de0, sub_f68da0, sub_f6cc80, sub_f6cdc0
   ... +9 more
*/
void sub_f8dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8dcf0ULL || rel >= 0xf8e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e350 size=224 callers=0 calls=0
*/
void sub_f8e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e350ULL || rel >= 0xf8e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e430 size=224 callers=0 calls=0
*/
void sub_f8e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e430ULL || rel >= 0xf8e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e510 size=224 callers=0 calls=0
*/
void sub_f8e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e510ULL || rel >= 0xf8e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e5f0 size=224 callers=0 calls=0
*/
void sub_f8e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e5f0ULL || rel >= 0xf8e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e6d0 size=224 callers=0 calls=0
*/
void sub_f8e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e6d0ULL || rel >= 0xf8e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e7b0 size=224 callers=0 calls=0
*/
void sub_f8e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e7b0ULL || rel >= 0xf8e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e890 size=224 callers=0 calls=0
*/
void sub_f8e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e890ULL || rel >= 0xf8e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e970 size=48 callers=0 calls=0
*/
void sub_f8e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e970ULL || rel >= 0xf8e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e9a0 size=64 callers=0 calls=0
*/
void sub_f8e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e9a0ULL || rel >= 0xf8e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8e9e0 size=48 callers=0 calls=0
*/
void sub_f8e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8e9e0ULL || rel >= 0xf8ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ea10 size=48 callers=0 calls=0
*/
void sub_f8ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ea10ULL || rel >= 0xf8ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ea40 size=80 callers=0 calls=1
   calls: sub_f6cd80
*/
void sub_f8ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ea40ULL || rel >= 0xf8ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ea90 size=64 callers=0 calls=0
*/
void sub_f8ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ea90ULL || rel >= 0xf8ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ead0 size=48 callers=0 calls=0
*/
void sub_f8ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ead0ULL || rel >= 0xf8eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8eb00 size=48 callers=0 calls=0
*/
void sub_f8eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8eb00ULL || rel >= 0xf8eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8eb30 size=16 callers=0 calls=0
*/
void sub_f8eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8eb30ULL || rel >= 0xf8eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8eb40 size=16 callers=0 calls=0
*/
void sub_f8eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8eb40ULL || rel >= 0xf8eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8eb50 size=16 callers=0 calls=0
*/
void sub_f8eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8eb50ULL || rel >= 0xf8eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8eb60 size=16 callers=0 calls=0
*/
void sub_f8eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8eb60ULL || rel >= 0xf8eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8eb70 size=64 callers=0 calls=1
   calls: sub_f6cd80
*/
void sub_f8eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8eb70ULL || rel >= 0xf8ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ebb0 size=16 callers=0 calls=0
*/
void sub_f8ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ebb0ULL || rel >= 0xf8ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ebc0 size=16 callers=0 calls=0
*/
void sub_f8ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ebc0ULL || rel >= 0xf8ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ebd0 size=16 callers=0 calls=0
*/
void sub_f8ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ebd0ULL || rel >= 0xf8ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ebe0 size=16 callers=0 calls=0
*/
void sub_f8ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ebe0ULL || rel >= 0xf8ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ebf0 size=16 callers=0 calls=0
*/
void sub_f8ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ebf0ULL || rel >= 0xf8ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ec00 size=16 callers=0 calls=0
*/
void sub_f8ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ec00ULL || rel >= 0xf8ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ec10 size=16 callers=0 calls=0
*/
void sub_f8ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ec10ULL || rel >= 0xf8ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ec20 size=128 callers=0 calls=0
*/
void sub_f8ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ec20ULL || rel >= 0xf8eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8eca0 size=288 callers=1 calls=3
   calls: StateSelectReceiveDataBase, sub_d0c0, sub_f6c9c0
   ref: StateSelectReceiveDataFromBall
*/
void StateSelectReceiveDataFromBall(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8eca0ULL || rel >= 0xf8edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8edc0 size=208 callers=0 calls=2
   calls: optionbar_7, sub_c39c40
*/
void sub_f8edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8edc0ULL || rel >= 0xf8ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ee90 size=112 callers=0 calls=4
   calls: sub_ea37b0, sub_ece0a0, sub_ece0c0, sub_f89c90
*/
void sub_f8ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ee90ULL || rel >= 0xf8ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ef00 size=32 callers=0 calls=0
*/
void sub_f8ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ef00ULL || rel >= 0xf8ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ef20 size=256 callers=0 calls=5
   calls: sub_f5a690, sub_f68d80, sub_f7c510, sub_f89c80, sub_f89de0
*/
void sub_f8ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ef20ULL || rel >= 0xf8f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8f020 size=16 callers=0 calls=0
*/
void sub_f8f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8f020ULL || rel >= 0xf8f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8f030 size=16 callers=0 calls=0
*/
void sub_f8f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8f030ULL || rel >= 0xf8f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8f040 size=1904 callers=0 calls=27
   calls: RequestSerialAuth, sub_138be50, sub_ea3d10, sub_ea4760, sub_eb6070, sub_eb6530, sub_ebccd0, sub_ebcfb0, sub_ebd130, sub_ece0c0, sub_ece190, sub_ece430
   ... +15 more
*/
void sub_f8f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8f040ULL || rel >= 0xf8f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8f7b0 size=112 callers=0 calls=0
*/
void sub_f8f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8f7b0ULL || rel >= 0xf8f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8f820 size=288 callers=0 calls=0
*/
void sub_f8f820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8f820ULL || rel >= 0xf8f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8f940 size=16 callers=0 calls=0
*/
void sub_f8f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8f940ULL || rel >= 0xf8f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8f950 size=288 callers=0 calls=0
*/
void sub_f8f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8f950ULL || rel >= 0xf8fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fa70 size=16 callers=0 calls=0
*/
void sub_f8fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fa70ULL || rel >= 0xf8fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fa80 size=288 callers=0 calls=0
*/
void sub_f8fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fa80ULL || rel >= 0xf8fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fba0 size=16 callers=0 calls=0
*/
void sub_f8fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fba0ULL || rel >= 0xf8fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fbb0 size=288 callers=0 calls=0
*/
void sub_f8fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fbb0ULL || rel >= 0xf8fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fcd0 size=16 callers=0 calls=0
*/
void sub_f8fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fcd0ULL || rel >= 0xf8fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fce0 size=48 callers=0 calls=0
*/
void sub_f8fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fce0ULL || rel >= 0xf8fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fd10 size=64 callers=0 calls=0
*/
void sub_f8fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fd10ULL || rel >= 0xf8fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fd50 size=48 callers=0 calls=0
*/
void sub_f8fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fd50ULL || rel >= 0xf8fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fd80 size=48 callers=0 calls=0
*/
void sub_f8fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fd80ULL || rel >= 0xf8fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fdb0 size=80 callers=0 calls=1
   calls: sub_f6cd80
*/
void sub_f8fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fdb0ULL || rel >= 0xf8fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fe00 size=64 callers=0 calls=0
*/
void sub_f8fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fe00ULL || rel >= 0xf8fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fe40 size=48 callers=0 calls=0
*/
void sub_f8fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fe40ULL || rel >= 0xf8fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fe70 size=48 callers=0 calls=0
*/
void sub_f8fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fe70ULL || rel >= 0xf8fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fea0 size=16 callers=0 calls=0
*/
void sub_f8fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fea0ULL || rel >= 0xf8feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8feb0 size=16 callers=0 calls=0
*/
void sub_f8feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8feb0ULL || rel >= 0xf8fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fec0 size=16 callers=0 calls=0
*/
void sub_f8fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fec0ULL || rel >= 0xf8fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fed0 size=16 callers=0 calls=0
*/
void sub_f8fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fed0ULL || rel >= 0xf8fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8fee0 size=64 callers=0 calls=1
   calls: sub_f6cd80
*/
void sub_f8fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8fee0ULL || rel >= 0xf8ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ff20 size=16 callers=0 calls=0
*/
void sub_f8ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ff20ULL || rel >= 0xf8ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ff30 size=16 callers=0 calls=0
*/
void sub_f8ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ff30ULL || rel >= 0xf8ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ff40 size=16 callers=0 calls=0
*/
void sub_f8ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ff40ULL || rel >= 0xf8ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f8ff50 size=304 callers=0 calls=3
   calls: sub_ece0c0, sub_f6cd80, sub_f868b0
*/
void sub_f8ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8ff50ULL || rel >= 0xf90080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90080 size=16 callers=0 calls=0
*/
void sub_f90080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90080ULL || rel >= 0xf90090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90090 size=16 callers=0 calls=0
*/
void sub_f90090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90090ULL || rel >= 0xf900a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f900a0 size=16 callers=0 calls=0
*/
void sub_f900a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf900a0ULL || rel >= 0xf900b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f900b0 size=32 callers=0 calls=0
*/
void sub_f900b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf900b0ULL || rel >= 0xf900d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f900d0 size=16 callers=0 calls=0
*/
void sub_f900d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf900d0ULL || rel >= 0xf900e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f900e0 size=16 callers=0 calls=0
*/
void sub_f900e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf900e0ULL || rel >= 0xf900f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f900f0 size=16 callers=0 calls=0
*/
void sub_f900f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf900f0ULL || rel >= 0xf90100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90100 size=16 callers=0 calls=0
*/
void sub_f90100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90100ULL || rel >= 0xf90110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90110 size=16 callers=0 calls=0
*/
void sub_f90110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90110ULL || rel >= 0xf90120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90120 size=16 callers=0 calls=0
*/
void sub_f90120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90120ULL || rel >= 0xf90130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90130 size=16 callers=0 calls=0
*/
void sub_f90130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90130ULL || rel >= 0xf90140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90140 size=128 callers=0 calls=0
*/
void sub_f90140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90140ULL || rel >= 0xf901c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f901c0 size=240 callers=1 calls=2
   calls: StateSelectReceiveDataBase, sub_d0c0
   ref: StateSelectReceiveDataInternet
*/
void StateSelectReceiveDataInternet(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf901c0ULL || rel >= 0xf902b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f902b0 size=32 callers=0 calls=0
*/
void sub_f902b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf902b0ULL || rel >= 0xf902d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f902d0 size=832 callers=0 calls=14
   calls: sub_ebccd0, sub_ebcfb0, sub_ebd130, sub_ece430, sub_f5a690, sub_f67de0, sub_f68da0, sub_f6cc80, sub_f76850, sub_f7c510, sub_f895a0, sub_f89e70
   ... +2 more
*/
void sub_f902d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf902d0ULL || rel >= 0xf90610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90610 size=224 callers=0 calls=0
*/
void sub_f90610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90610ULL || rel >= 0xf906f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f906f0 size=224 callers=0 calls=0
*/
void sub_f906f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf906f0ULL || rel >= 0xf907d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f907d0 size=224 callers=0 calls=0
*/
void sub_f907d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf907d0ULL || rel >= 0xf908b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f908b0 size=224 callers=0 calls=0
*/
void sub_f908b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf908b0ULL || rel >= 0xf90990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90990 size=224 callers=0 calls=0
*/
void sub_f90990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90990ULL || rel >= 0xf90a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90a70 size=224 callers=0 calls=0
*/
void sub_f90a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90a70ULL || rel >= 0xf90b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90b50 size=224 callers=0 calls=0
*/
void sub_f90b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90b50ULL || rel >= 0xf90c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90c30 size=16 callers=0 calls=0
*/
void sub_f90c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90c30ULL || rel >= 0xf90c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90c40 size=16 callers=0 calls=0
*/
void sub_f90c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90c40ULL || rel >= 0xf90c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90c50 size=16 callers=0 calls=0
*/
void sub_f90c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90c50ULL || rel >= 0xf90c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90c60 size=16 callers=0 calls=0
*/
void sub_f90c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90c60ULL || rel >= 0xf90c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90c70 size=32 callers=0 calls=0
*/
void sub_f90c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90c70ULL || rel >= 0xf90c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90c90 size=16 callers=0 calls=0
*/
void sub_f90c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90c90ULL || rel >= 0xf90ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90ca0 size=16 callers=0 calls=0
*/
void sub_f90ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90ca0ULL || rel >= 0xf90cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90cb0 size=16 callers=0 calls=0
*/
void sub_f90cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90cb0ULL || rel >= 0xf90cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90cc0 size=240 callers=1 calls=2
   calls: StateSelectReceiveDataBase, sub_d0c0
   ref: StateSelectReceiveDataRankMatch
*/
void StateSelectReceiveDataRankMatch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90cc0ULL || rel >= 0xf90db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90db0 size=32 callers=0 calls=0
*/
void sub_f90db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90db0ULL || rel >= 0xf90dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90dd0 size=256 callers=0 calls=3
   calls: sub_f6cc80, sub_f76850, sub_f8ae10
*/
void sub_f90dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90dd0ULL || rel >= 0xf90ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90ed0 size=224 callers=0 calls=0
*/
void sub_f90ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90ed0ULL || rel >= 0xf90fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f90fb0 size=224 callers=0 calls=0
*/
void sub_f90fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf90fb0ULL || rel >= 0xf91090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91090 size=224 callers=0 calls=0
*/
void sub_f91090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91090ULL || rel >= 0xf91170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91170 size=224 callers=0 calls=0
*/
void sub_f91170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91170ULL || rel >= 0xf91250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91250 size=224 callers=0 calls=0
*/
void sub_f91250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91250ULL || rel >= 0xf91330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91330 size=224 callers=0 calls=0
*/
void sub_f91330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91330ULL || rel >= 0xf91410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91410 size=224 callers=0 calls=0
*/
void sub_f91410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91410ULL || rel >= 0xf914f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f914f0 size=16 callers=0 calls=0
*/
void sub_f914f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf914f0ULL || rel >= 0xf91500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91500 size=16 callers=0 calls=0
*/
void sub_f91500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91500ULL || rel >= 0xf91510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91510 size=16 callers=0 calls=0
*/
void sub_f91510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91510ULL || rel >= 0xf91520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91520 size=16 callers=0 calls=0
*/
void sub_f91520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91520ULL || rel >= 0xf91530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91530 size=496 callers=0 calls=6
   calls: sub_f5a690, sub_f67de0, sub_f68da0, sub_f7c510, sub_f895a0, sub_f89e70
*/
void sub_f91530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91530ULL || rel >= 0xf91720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91720 size=16 callers=0 calls=0
*/
void sub_f91720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91720ULL || rel >= 0xf91730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91730 size=16 callers=0 calls=0
*/
void sub_f91730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91730ULL || rel >= 0xf91740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91740 size=16 callers=0 calls=0
*/
void sub_f91740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91740ULL || rel >= 0xf91750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91750 size=1744 callers=0 calls=19
   calls: optionbar_6, sub_136b530, sub_136b580, sub_136b690, sub_5cfaf0, sub_67c120, sub_67c270, sub_76f440, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb75e0
   ... +7 more
   ref: message
   ref: StatePalmaGoOut
   ref: optionbar
*/
void StatePalmaGoOut(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91750ULL || rel >= 0xf91e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f91e20 size=2032 callers=2 calls=12
   calls: sub_134a6d0, sub_134a700, sub_134f3a0, sub_13533f0, sub_1354430, sub_13736f0, sub_1373860, sub_762d50, sub_767930, sub_76f440, sub_76f6c0, sub_7847d0
*/
void sub_f91e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91e20ULL || rel >= 0xf92610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f92610 size=8288 callers=0 calls=66
   calls: Play_PV_EV__03d__02d__02d, sub_1313580, sub_134f3a0, sub_134f3e0, sub_1367100, sub_137bc90, sub_137bca0, sub_137f6b0, sub_137f800, sub_137f870, sub_137f950, sub_137f9c0
   ... +54 more
   ref: Play_me_or_st_item_get
*/
void Play_me_or_st_item_get_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf92610ULL || rel >= 0xf94670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f94670 size=480 callers=4 calls=5
   calls: sub_67d450, sub_c39c40, sub_e7eb10, sub_eb7570, sub_eb75e0
*/
void sub_f94670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf94670ULL || rel >= 0xf94850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f94850 size=800 callers=1 calls=9
   calls: Common, poke_f__04d__03d__s_s, sub_5dd790, sub_5e2930, sub_762930, sub_762940, sub_7670a0, sub_768dd0, sub_f96360
*/
void sub_f94850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf94850ULL || rel >= 0xf94b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f94b70 size=544 callers=1 calls=6
   calls: sub_1313580, sub_14ac370, sub_67d450, sub_e7eb10, sub_e83930, sub_eb6230
*/
void sub_f94b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf94b70ULL || rel >= 0xf94d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f94d90 size=288 callers=1 calls=1
   calls: sub_f6cbb0
*/
void sub_f94d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf94d90ULL || rel >= 0xf94eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f94eb0 size=1488 callers=1 calls=9
   calls: sub_1311c60, sub_13133a0, sub_13149a0, sub_1315b90, sub_14ac370, sub_67d450, sub_e7eb10, sub_e83930, sub_eb6230
*/
void sub_f94eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf94eb0ULL || rel >= 0xf95480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95480 size=1600 callers=1 calls=12
   calls: sub_13149a0, sub_1315270, sub_1315b90, sub_14ac370, sub_67d450, sub_e7eb10, sub_e83930, sub_eb6230, sub_f6cbb0, sub_f96e40, sub_f96e50, sub_f96e90
*/
void sub_f95480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95480ULL || rel >= 0xf95ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95ac0 size=288 callers=0 calls=5
   calls: sub_ea37b0, sub_ece0a0, sub_ece0c0, sub_f5a690, sub_f60140
*/
void sub_f95ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95ac0ULL || rel >= 0xf95be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95be0 size=336 callers=0 calls=1
   calls: sub_ece0c0
*/
void sub_f95be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95be0ULL || rel >= 0xf95d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95d30 size=640 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_f95d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95d30ULL || rel >= 0xf95fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95fb0 size=16 callers=0 calls=0
*/
void sub_f95fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95fb0ULL || rel >= 0xf95fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95fc0 size=16 callers=0 calls=0
*/
void sub_f95fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95fc0ULL || rel >= 0xf95fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95fd0 size=16 callers=0 calls=0
*/
void sub_f95fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95fd0ULL || rel >= 0xf95fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95fe0 size=16 callers=0 calls=0
*/
void sub_f95fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95fe0ULL || rel >= 0xf95ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f95ff0 size=16 callers=0 calls=0
*/
void sub_f95ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95ff0ULL || rel >= 0xf96000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96000 size=16 callers=0 calls=0
*/
void sub_f96000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96000ULL || rel >= 0xf96010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96010 size=16 callers=0 calls=0
*/
void sub_f96010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96010ULL || rel >= 0xf96020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96020 size=16 callers=0 calls=0
*/
void sub_f96020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96020ULL || rel >= 0xf96030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96030 size=304 callers=0 calls=0
*/
void sub_f96030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96030ULL || rel >= 0xf96160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00f96160 size=16 callers=0 calls=0
*/
void sub_f96160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96160ULL || rel >= 0xf96170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

