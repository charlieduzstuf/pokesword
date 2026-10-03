/* main functions 009232d0..0093c1c0 (72 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 009232d0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_9232d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9232d0ULL || rel >= 0x923340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923340 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_923340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923340ULL || rel >= 0x9233b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009233b0 size=240 callers=0 calls=0
*/
void sub_9233b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9233b0ULL || rel >= 0x9234a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009234a0 size=240 callers=0 calls=0
*/
void sub_9234a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9234a0ULL || rel >= 0x923590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923590 size=144 callers=0 calls=1
   calls: sub_923dc0
*/
void sub_923590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923590ULL || rel >= 0x923620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923620 size=16 callers=0 calls=0
*/
void sub_923620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923620ULL || rel >= 0x923630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923630 size=16 callers=0 calls=0
*/
void sub_923630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923630ULL || rel >= 0x923640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923640 size=16 callers=0 calls=0
*/
void sub_923640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923640ULL || rel >= 0x923650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923650 size=544 callers=1 calls=0
*/
void sub_923650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923650ULL || rel >= 0x923870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923870 size=240 callers=0 calls=0
*/
void sub_923870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923870ULL || rel >= 0x923960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923960 size=192 callers=8 calls=3
   calls: sub_5cfad0, sub_e7ea90, sub_e7f7d0
*/
void sub_923960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923960ULL || rel >= 0x923a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923a20 size=928 callers=1 calls=5
   calls: sub_14ba7b0, sub_8f19b0, sub_8f3180, sub_e7f7f0, sub_e83e60
   ref: T_itemlist_number_01
   ref: pane_%s
   ref: T_itemlist_name
   ref: pane_%s_%s
   ref: P_itemlist_itemIcon
   ref: T_itemlist_number_00
*/
void T_itemlist_number_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923a20ULL || rel >= 0x923dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923dc0 size=496 callers=1 calls=5
   calls: sub_14bb830, sub_785ee0, sub_8d8330, sub_923fb0, sub_9240c0
*/
void sub_923dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923dc0ULL || rel >= 0x923fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00923fb0 size=272 callers=3 calls=2
   calls: sub_67d450, wazaname
*/
void sub_923fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923fb0ULL || rel >= 0x9240c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009240c0 size=288 callers=1 calls=2
   calls: sub_1315b90, sub_67d450
*/
void sub_9240c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9240c0ULL || rel >= 0x9241e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009241e0 size=80 callers=0 calls=0
*/
void sub_9241e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9241e0ULL || rel >= 0x924230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924230 size=80 callers=0 calls=0
*/
void sub_924230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924230ULL || rel >= 0x924280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924280 size=240 callers=0 calls=0
*/
void sub_924280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924280ULL || rel >= 0x924370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924370 size=336 callers=0 calls=4
   calls: sub_8eb640, sub_c39c40, sub_d0c0, sub_e806b0
   ref: SpectatorViewName
   ref: spectator
*/
void SpectatorViewName_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924370ULL || rel >= 0x9244c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009244c0 size=16 callers=0 calls=0
*/
void sub_9244c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9244c0ULL || rel >= 0x9244d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009244d0 size=16 callers=0 calls=0
*/
void sub_9244d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9244d0ULL || rel >= 0x9244e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009244e0 size=16 callers=0 calls=0
*/
void sub_9244e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9244e0ULL || rel >= 0x9244f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009244f0 size=16 callers=0 calls=0
*/
void sub_9244f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9244f0ULL || rel >= 0x924500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924500 size=16 callers=0 calls=0
*/
void sub_924500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924500ULL || rel >= 0x924510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924510 size=16 callers=0 calls=0
*/
void sub_924510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924510ULL || rel >= 0x924520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924520 size=16 callers=0 calls=0
*/
void sub_924520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924520ULL || rel >= 0x924530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924530 size=16 callers=0 calls=0
*/
void sub_924530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924530ULL || rel >= 0x924540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924540 size=16 callers=0 calls=0
*/
void sub_924540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924540ULL || rel >= 0x924550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924550 size=16 callers=0 calls=0
*/
void sub_924550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924550ULL || rel >= 0x924560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924560 size=304 callers=0 calls=0
*/
void sub_924560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924560ULL || rel >= 0x924690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924690 size=240 callers=0 calls=0
*/
void sub_924690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924690ULL || rel >= 0x924780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924780 size=16 callers=0 calls=0
*/
void sub_924780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924780ULL || rel >= 0x924790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924790 size=336 callers=0 calls=3
   calls: sub_91d7b0, sub_c39c40, sub_d0c0
   ref: pokelist
   ref: View_SelectAction
*/
void View_SelectAction_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924790ULL || rel >= 0x9248e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009248e0 size=368 callers=0 calls=5
   calls: sub_8a8080, sub_8a8100, sub_908350, sub_967370, sub_eb6530
*/
void sub_9248e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9248e0ULL || rel >= 0x924a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924a50 size=96 callers=0 calls=1
   calls: sub_967370
*/
void sub_924a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924a50ULL || rel >= 0x924ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924ab0 size=16 callers=0 calls=0
*/
void sub_924ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924ab0ULL || rel >= 0x924ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924ac0 size=16 callers=0 calls=0
*/
void sub_924ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924ac0ULL || rel >= 0x924ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924ad0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_924ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924ad0ULL || rel >= 0x924b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924b40 size=16 callers=0 calls=0
*/
void sub_924b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924b40ULL || rel >= 0x924b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924b50 size=16 callers=0 calls=0
*/
void sub_924b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924b50ULL || rel >= 0x924b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924b60 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_924b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924b60ULL || rel >= 0x924bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924bd0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_924bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924bd0ULL || rel >= 0x924c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924c40 size=16 callers=0 calls=0
*/
void sub_924c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924c40ULL || rel >= 0x924c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924c50 size=16 callers=0 calls=0
*/
void sub_924c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924c50ULL || rel >= 0x924c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924c60 size=240 callers=0 calls=0
*/
void sub_924c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924c60ULL || rel >= 0x924d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924d50 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_commandSelect_01_lyt.bin
   ref: bin/appli/battle/bin/uikit_battle_commandSelect_01.bin
*/
void uikit_battle_commandSelect_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924d50ULL || rel >= 0x924f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924f30 size=192 callers=0 calls=3
   calls: sub_14ba7b0, sub_8f3180, sub_e83fe0
*/
void sub_924f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924f30ULL || rel >= 0x924ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00924ff0 size=112 callers=0 calls=0
*/
void sub_924ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924ff0ULL || rel >= 0x925060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925060 size=96 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_925060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925060ULL || rel >= 0x9250c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009250c0 size=128 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_9250c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9250c0ULL || rel >= 0x925140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925140 size=384 callers=3 calls=4
   calls: sub_14bb830, sub_14e1a00, sub_14e1a30, sub_9252c0
*/
void sub_925140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925140ULL || rel >= 0x9252c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009252c0 size=432 callers=2 calls=5
   calls: sub_14e1a00, sub_14e1a30, sub_e83430, sub_e83850, sub_e83930
*/
void sub_9252c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9252c0ULL || rel >= 0x925470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925470 size=16 callers=2 calls=0
*/
void sub_925470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925470ULL || rel >= 0x925480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925480 size=16 callers=2 calls=0
*/
void sub_925480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925480ULL || rel >= 0x925490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925490 size=16 callers=4 calls=0
*/
void sub_925490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925490ULL || rel >= 0x9254a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009254a0 size=128 callers=2 calls=0
*/
void sub_9254a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9254a0ULL || rel >= 0x925520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925520 size=16 callers=0 calls=0
*/
void sub_925520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925520ULL || rel >= 0x925530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925530 size=16 callers=0 calls=0
*/
void sub_925530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925530ULL || rel >= 0x925540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925540 size=16 callers=0 calls=0
*/
void sub_925540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925540ULL || rel >= 0x925550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925550 size=16 callers=0 calls=0
*/
void sub_925550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925550ULL || rel >= 0x925560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925560 size=16 callers=0 calls=0
*/
void sub_925560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925560ULL || rel >= 0x925570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925570 size=16 callers=0 calls=0
*/
void sub_925570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925570ULL || rel >= 0x925580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925580 size=16 callers=0 calls=0
*/
void sub_925580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925580ULL || rel >= 0x925590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925590 size=16 callers=0 calls=0
*/
void sub_925590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925590ULL || rel >= 0x9255a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009255a0 size=304 callers=0 calls=0
*/
void sub_9255a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9255a0ULL || rel >= 0x9256d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009256d0 size=240 callers=0 calls=0
*/
void sub_9256d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9256d0ULL || rel >= 0x9257c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009257c0 size=560 callers=0 calls=9
   calls: sub_908160, sub_91f4a0, sub_91f4e0, sub_91f910, sub_925e80, sub_967370, sub_c39c40, sub_d0c0, sub_e807f0
   ref: ball_select
   ref: BallSelectView
*/
void BallSelectView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9257c0ULL || rel >= 0x9259f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009259f0 size=224 callers=0 calls=3
   calls: sub_91f4b0, sub_91f4c0, sub_91f910
*/
void sub_9259f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9259f0ULL || rel >= 0x925ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925ad0 size=16 callers=0 calls=0
*/
void sub_925ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925ad0ULL || rel >= 0x925ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925ae0 size=96 callers=0 calls=0
*/
void sub_925ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925ae0ULL || rel >= 0x925b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925b40 size=96 callers=0 calls=0
*/
void sub_925b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925b40ULL || rel >= 0x925ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925ba0 size=16 callers=0 calls=0
*/
void sub_925ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925ba0ULL || rel >= 0x925bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925bb0 size=96 callers=0 calls=0
*/
void sub_925bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925bb0ULL || rel >= 0x925c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925c10 size=96 callers=0 calls=0
*/
void sub_925c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925c10ULL || rel >= 0x925c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925c70 size=16 callers=0 calls=0
*/
void sub_925c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925c70ULL || rel >= 0x925c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925c80 size=16 callers=0 calls=0
*/
void sub_925c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925c80ULL || rel >= 0x925c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925c90 size=96 callers=0 calls=0
*/
void sub_925c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925c90ULL || rel >= 0x925cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925cf0 size=96 callers=0 calls=0
*/
void sub_925cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925cf0ULL || rel >= 0x925d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925d50 size=304 callers=0 calls=0
*/
void sub_925d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925d50ULL || rel >= 0x925e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925e80 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_9196c0
*/
void sub_925e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925e80ULL || rel >= 0x925fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00925fd0 size=240 callers=0 calls=0
*/
void sub_925fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x925fd0ULL || rel >= 0x9260c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009260c0 size=16 callers=0 calls=0
*/
void sub_9260c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9260c0ULL || rel >= 0x9260d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009260d0 size=80 callers=0 calls=1
   calls: sub_d0c0
   ref: pokestatus
*/
void pokestatus(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9260d0ULL || rel >= 0x926120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926120 size=496 callers=0 calls=1
   calls: sub_967370
*/
void sub_926120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926120ULL || rel >= 0x926310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926310 size=112 callers=0 calls=1
   calls: sub_967370
*/
void sub_926310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926310ULL || rel >= 0x926380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926380 size=16 callers=0 calls=0
*/
void sub_926380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926380ULL || rel >= 0x926390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926390 size=16 callers=0 calls=0
*/
void sub_926390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926390ULL || rel >= 0x9263a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009263a0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_9263a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9263a0ULL || rel >= 0x926410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926410 size=16 callers=0 calls=0
*/
void sub_926410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926410ULL || rel >= 0x926420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926420 size=16 callers=0 calls=0
*/
void sub_926420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926420ULL || rel >= 0x926430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926430 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_926430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926430ULL || rel >= 0x9264a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009264a0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_9264a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9264a0ULL || rel >= 0x926510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926510 size=16 callers=0 calls=0
*/
void sub_926510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926510ULL || rel >= 0x926520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926520 size=16 callers=0 calls=0
*/
void sub_926520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926520ULL || rel >= 0x926530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926530 size=240 callers=0 calls=0
*/
void sub_926530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926530ULL || rel >= 0x926620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926620 size=784 callers=0 calls=15
   calls: fel_999_2, sub_12f9ef0, sub_15030e0, sub_1503210, sub_1503280, sub_7ef330, sub_909420, sub_920c60, sub_920d70, sub_921040, sub_926da0, sub_967370
   ... +3 more
   ref: RaidResultView
   ref: raid_reward
*/
void RaidResultView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926620ULL || rel >= 0x926930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926930 size=192 callers=0 calls=4
   calls: sub_15032c0, sub_1505a30, sub_1505cf0, sub_920c70
*/
void sub_926930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926930ULL || rel >= 0x9269f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009269f0 size=16 callers=0 calls=0
*/
void sub_9269f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9269f0ULL || rel >= 0x926a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926a00 size=96 callers=0 calls=0
*/
void sub_926a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926a00ULL || rel >= 0x926a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926a60 size=96 callers=0 calls=0
*/
void sub_926a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926a60ULL || rel >= 0x926ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926ac0 size=16 callers=0 calls=0
*/
void sub_926ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926ac0ULL || rel >= 0x926ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926ad0 size=96 callers=0 calls=0
*/
void sub_926ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926ad0ULL || rel >= 0x926b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926b30 size=96 callers=0 calls=0
*/
void sub_926b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926b30ULL || rel >= 0x926b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926b90 size=16 callers=0 calls=0
*/
void sub_926b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926b90ULL || rel >= 0x926ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926ba0 size=16 callers=0 calls=0
*/
void sub_926ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926ba0ULL || rel >= 0x926bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926bb0 size=96 callers=0 calls=0
*/
void sub_926bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926bb0ULL || rel >= 0x926c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926c10 size=96 callers=0 calls=0
*/
void sub_926c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926c10ULL || rel >= 0x926c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926c70 size=304 callers=0 calls=0
*/
void sub_926c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926c70ULL || rel >= 0x926da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926da0 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_9196c0
*/
void sub_926da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926da0ULL || rel >= 0x926ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926ef0 size=240 callers=0 calls=0
*/
void sub_926ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926ef0ULL || rel >= 0x926fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00926fe0 size=1104 callers=0 calls=12
   calls: sub_7efe00, sub_7efef0, sub_7f0130, sub_7f01d0, sub_918980, sub_918c10, sub_9276f0, sub_967370, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e807f0
   ref: View_SelectWaza
   ref: wazawasure
*/
void View_SelectWaza(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x926fe0ULL || rel >= 0x927430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927430 size=256 callers=0 calls=2
   calls: sub_919180, sub_967370
*/
void sub_927430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927430ULL || rel >= 0x927530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927530 size=16 callers=0 calls=0
*/
void sub_927530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927530ULL || rel >= 0x927540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927540 size=16 callers=0 calls=0
*/
void sub_927540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927540ULL || rel >= 0x927550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927550 size=16 callers=0 calls=0
*/
void sub_927550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927550ULL || rel >= 0x927560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927560 size=16 callers=0 calls=0
*/
void sub_927560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927560ULL || rel >= 0x927570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927570 size=16 callers=0 calls=0
*/
void sub_927570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927570ULL || rel >= 0x927580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927580 size=16 callers=0 calls=0
*/
void sub_927580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927580ULL || rel >= 0x927590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927590 size=16 callers=0 calls=0
*/
void sub_927590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927590ULL || rel >= 0x9275a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009275a0 size=16 callers=0 calls=0
*/
void sub_9275a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9275a0ULL || rel >= 0x9275b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009275b0 size=16 callers=0 calls=0
*/
void sub_9275b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9275b0ULL || rel >= 0x9275c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009275c0 size=304 callers=0 calls=0
*/
void sub_9275c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9275c0ULL || rel >= 0x9276f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009276f0 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_9196c0
*/
void sub_9276f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9276f0ULL || rel >= 0x927840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927840 size=240 callers=0 calls=0
*/
void sub_927840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927840ULL || rel >= 0x927930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927930 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/uikit_battle_opponent_info.bin
   ref: bin/appli/battle/bin/battle_opponent_info_00_lyt.bin
*/
void uikit_battle_opponent_info(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927930ULL || rel >= 0x927b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00927b20 size=5040 callers=0 calls=10
   calls: L_btlteam_pokelist_05_P_team_pokelist_icon_03, color_inactive, sub_14aad40, sub_7a3c20, sub_7ed820, sub_7ff8c0, sub_7ffa70, sub_8f3180, sub_928ed0, sub_9292f0
   ref: L_netbtl_standby_team_01
   ref: L_netbtl_standby_team_04
   ref: pane_%s
   ref: L_netbtl_standby_team_05
   ref: pane_%s_%s
   ref: L_netbtl_standby_team_03
   ref: L_team_pokelist_icon_01
   ref: P_sick_00
*/
void L_netbtl_standby_team_05(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x927b20ULL || rel >= 0x928ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00928ed0 size=1056 callers=1 calls=0
*/
void sub_928ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x928ed0ULL || rel >= 0x9292f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009292f0 size=576 callers=1 calls=2
   calls: sub_8f3740, sub_92a5b0
*/
void sub_9292f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9292f0ULL || rel >= 0x929530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00929530 size=320 callers=1 calls=2
   calls: sub_929670, sub_e83870
   ref: anime_switch
*/
void anime_switch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x929530ULL || rel >= 0x929670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00929670 size=848 callers=5 calls=11
   calls: L_btlteam_pokelist_05_switch, L_netbtl_standby_team_05_2, sub_14d5ca0, sub_5cfad0, sub_8ebfe0, sub_8f3e10, sub_8f4080, sub_8f40a0, sub_9299d0, sub_e7ea90, sub_e7f7e0
*/
void sub_929670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x929670ULL || rel >= 0x9299c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009299c0 size=16 callers=1 calls=0
*/
void sub_9299c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9299c0ULL || rel >= 0x9299d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009299d0 size=736 callers=1 calls=14
   calls: sub_762d90, sub_7847d0, sub_7edcf0, sub_7ee6b0, sub_7ee6c0, sub_7eebd0, sub_7ef2b0, sub_7ef320, sub_7f09c0, sub_7f33a0, sub_7fc2e0, sub_7fc450
   ... +2 more
*/
void sub_9299d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9299d0ULL || rel >= 0x929cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00929cb0 size=1264 callers=1 calls=0
   ref: L_netbtl_standby_team_01
   ref: L_netbtl_standby_team_04
   ref: L_netbtl_standby_team_05
   ref: pane_%s_%s
   ref: L_netbtl_standby_team_03
   ref: T_btlteam_00
   ref: L_netbtl_standby_team_02
   ref: L_netbtl_standby_team_00
*/
void L_netbtl_standby_team_05_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x929cb0ULL || rel >= 0x92a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a1a0 size=432 callers=0 calls=0
*/
void sub_92a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a1a0ULL || rel >= 0x92a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a350 size=16 callers=0 calls=0
*/
void sub_92a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a350ULL || rel >= 0x92a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a360 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_92a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a360ULL || rel >= 0x92a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a3d0 size=16 callers=0 calls=0
*/
void sub_92a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a3d0ULL || rel >= 0x92a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a3e0 size=16 callers=0 calls=0
*/
void sub_92a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a3e0ULL || rel >= 0x92a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a3f0 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_92a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a3f0ULL || rel >= 0x92a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a460 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_92a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a460ULL || rel >= 0x92a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a4d0 size=16 callers=0 calls=0
*/
void sub_92a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a4d0ULL || rel >= 0x92a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a4e0 size=16 callers=0 calls=0
*/
void sub_92a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a4e0ULL || rel >= 0x92a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a4f0 size=96 callers=0 calls=0
*/
void sub_92a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a4f0ULL || rel >= 0x92a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a550 size=96 callers=0 calls=0
*/
void sub_92a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a550ULL || rel >= 0x92a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a5b0 size=272 callers=1 calls=0
*/
void sub_92a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a5b0ULL || rel >= 0x92a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a6c0 size=256 callers=0 calls=4
   calls: sub_5cfad0, sub_67d450, sub_e7ea90, sub_e7f7e0
*/
void sub_92a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a6c0ULL || rel >= 0x92a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a7c0 size=16 callers=0 calls=0
*/
void sub_92a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a7c0ULL || rel >= 0x92a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a7d0 size=16 callers=0 calls=0
*/
void sub_92a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a7d0ULL || rel >= 0x92a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a7e0 size=16 callers=0 calls=0
*/
void sub_92a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a7e0ULL || rel >= 0x92a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a7f0 size=16 callers=0 calls=0
*/
void sub_92a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a7f0ULL || rel >= 0x92a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a800 size=16 callers=0 calls=0
*/
void sub_92a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a800ULL || rel >= 0x92a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a810 size=16 callers=0 calls=0
*/
void sub_92a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a810ULL || rel >= 0x92a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a820 size=16 callers=0 calls=0
*/
void sub_92a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a820ULL || rel >= 0x92a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a830 size=240 callers=0 calls=0
*/
void sub_92a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a830ULL || rel >= 0x92a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a920 size=16 callers=0 calls=0
*/
void sub_92a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a920ULL || rel >= 0x92a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a930 size=176 callers=0 calls=3
   calls: sub_908350, sub_967370, sub_d0c0
   ref: pokeselect
*/
void pokeselect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a930ULL || rel >= 0x92a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092a9e0 size=208 callers=0 calls=1
   calls: sub_967370
*/
void sub_92a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92a9e0ULL || rel >= 0x92aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092aab0 size=16 callers=0 calls=0
*/
void sub_92aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92aab0ULL || rel >= 0x92aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092aac0 size=16 callers=0 calls=0
*/
void sub_92aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92aac0ULL || rel >= 0x92aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092aad0 size=16 callers=0 calls=0
*/
void sub_92aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92aad0ULL || rel >= 0x92aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092aae0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_92aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92aae0ULL || rel >= 0x92ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ab50 size=16 callers=0 calls=0
*/
void sub_92ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ab50ULL || rel >= 0x92ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ab60 size=16 callers=0 calls=0
*/
void sub_92ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ab60ULL || rel >= 0x92ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ab70 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_92ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ab70ULL || rel >= 0x92abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092abe0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_92abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92abe0ULL || rel >= 0x92ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ac50 size=16 callers=0 calls=0
*/
void sub_92ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ac50ULL || rel >= 0x92ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ac60 size=16 callers=0 calls=0
*/
void sub_92ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ac60ULL || rel >= 0x92ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ac70 size=240 callers=0 calls=0
*/
void sub_92ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ac70ULL || rel >= 0x92ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ad60 size=16 callers=0 calls=0
*/
void sub_92ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ad60ULL || rel >= 0x92ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ad70 size=2576 callers=0 calls=20
   calls: sub_5cfaf0, sub_7ee6b0, sub_7ee6c0, sub_7efe00, sub_7efef0, sub_7f0130, sub_7f01d0, sub_9139a0, sub_918980, sub_918c10, sub_925140, sub_925470
   ... +8 more
   ref: WazaInfoView
   ref: select_waza
   ref: WazaSelectSubView
*/
void WazaSelectSubView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ad70ULL || rel >= 0x92b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092b780 size=272 callers=1 calls=4
   calls: sub_7ee6b0, sub_917ad0, sub_9191b0, sub_967370
*/
void sub_92b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92b780ULL || rel >= 0x92b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092b890 size=224 callers=1 calls=4
   calls: sub_7ee6c0, sub_901450, sub_919140, sub_967370
*/
void sub_92b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92b890ULL || rel >= 0x92b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092b970 size=144 callers=0 calls=2
   calls: sub_92ba00, sub_92bae0
*/
void sub_92b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92b970ULL || rel >= 0x92ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092ba00 size=224 callers=2 calls=3
   calls: sub_7ee6b0, sub_9191f0, sub_967370
*/
void sub_92ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ba00ULL || rel >= 0x92bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bae0 size=304 callers=3 calls=3
   calls: sub_7ee6b0, sub_7efef0, sub_967370
*/
void sub_92bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bae0ULL || rel >= 0x92bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bc10 size=160 callers=0 calls=3
   calls: sub_7ee6b0, sub_92ba00, sub_967370
*/
void sub_92bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bc10ULL || rel >= 0x92bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bcb0 size=16 callers=0 calls=0
*/
void sub_92bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bcb0ULL || rel >= 0x92bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bcc0 size=416 callers=0 calls=0
*/
void sub_92bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bcc0ULL || rel >= 0x92be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092be60 size=16 callers=0 calls=0
*/
void sub_92be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92be60ULL || rel >= 0x92be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092be70 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_92be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92be70ULL || rel >= 0x92bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bee0 size=16 callers=0 calls=0
*/
void sub_92bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bee0ULL || rel >= 0x92bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bef0 size=16 callers=0 calls=0
*/
void sub_92bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bef0ULL || rel >= 0x92bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bf00 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_92bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bf00ULL || rel >= 0x92bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bf70 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_92bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bf70ULL || rel >= 0x92bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bfe0 size=16 callers=0 calls=0
*/
void sub_92bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bfe0ULL || rel >= 0x92bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092bff0 size=16 callers=0 calls=0
*/
void sub_92bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92bff0ULL || rel >= 0x92c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c000 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_92c000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c000ULL || rel >= 0x92c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c150 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_92c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c150ULL || rel >= 0x92c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c2a0 size=32 callers=0 calls=0
*/
void sub_92c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c2a0ULL || rel >= 0x92c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c2c0 size=16 callers=0 calls=0
*/
void sub_92c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c2c0ULL || rel >= 0x92c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c2d0 size=16 callers=0 calls=0
*/
void sub_92c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c2d0ULL || rel >= 0x92c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c2e0 size=16 callers=0 calls=0
*/
void sub_92c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c2e0ULL || rel >= 0x92c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c2f0 size=16 callers=0 calls=0
*/
void sub_92c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c2f0ULL || rel >= 0x92c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c300 size=16 callers=0 calls=0
*/
void sub_92c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c300ULL || rel >= 0x92c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c310 size=16 callers=0 calls=0
*/
void sub_92c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c310ULL || rel >= 0x92c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c320 size=16 callers=0 calls=0
*/
void sub_92c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c320ULL || rel >= 0x92c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c330 size=64 callers=0 calls=2
   calls: sub_919180, sub_92bae0
*/
void sub_92c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c330ULL || rel >= 0x92c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c370 size=16 callers=0 calls=0
*/
void sub_92c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c370ULL || rel >= 0x92c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c380 size=16 callers=0 calls=0
*/
void sub_92c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c380ULL || rel >= 0x92c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c390 size=16 callers=0 calls=0
*/
void sub_92c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c390ULL || rel >= 0x92c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c3a0 size=496 callers=0 calls=5
   calls: sub_925490, sub_9254a0, sub_967370, sub_e80580, sub_ec28f0
*/
void sub_92c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c3a0ULL || rel >= 0x92c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c590 size=16 callers=0 calls=0
*/
void sub_92c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c590ULL || rel >= 0x92c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c5a0 size=16 callers=0 calls=0
*/
void sub_92c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c5a0ULL || rel >= 0x92c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c5b0 size=32 callers=0 calls=1
   calls: sub_7eef40
*/
void sub_92c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c5b0ULL || rel >= 0x92c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c5d0 size=16 callers=0 calls=0
*/
void sub_92c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c5d0ULL || rel >= 0x92c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c5e0 size=32 callers=0 calls=1
   calls: sub_7f0130
*/
void sub_92c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c5e0ULL || rel >= 0x92c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c600 size=32 callers=0 calls=1
   calls: sub_7f01d0
*/
void sub_92c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c600ULL || rel >= 0x92c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c620 size=16 callers=0 calls=0
*/
void sub_92c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c620ULL || rel >= 0x92c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c630 size=16 callers=0 calls=0
*/
void sub_92c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c630ULL || rel >= 0x92c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c640 size=16 callers=0 calls=0
*/
void sub_92c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c640ULL || rel >= 0x92c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c650 size=16 callers=0 calls=0
*/
void sub_92c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c650ULL || rel >= 0x92c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c660 size=16 callers=0 calls=0
*/
void sub_92c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c660ULL || rel >= 0x92c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c670 size=32 callers=0 calls=0
*/
void sub_92c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c670ULL || rel >= 0x92c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c690 size=16 callers=0 calls=0
*/
void sub_92c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c690ULL || rel >= 0x92c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c6a0 size=16 callers=0 calls=0
*/
void sub_92c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c6a0ULL || rel >= 0x92c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c6b0 size=16 callers=0 calls=0
*/
void sub_92c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c6b0ULL || rel >= 0x92c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c6c0 size=160 callers=0 calls=3
   calls: sub_92b890, sub_967370, sub_ec2920
*/
void sub_92c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c6c0ULL || rel >= 0x92c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c760 size=16 callers=0 calls=0
*/
void sub_92c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c760ULL || rel >= 0x92c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c770 size=16 callers=0 calls=0
*/
void sub_92c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c770ULL || rel >= 0x92c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c780 size=16 callers=0 calls=0
*/
void sub_92c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c780ULL || rel >= 0x92c790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c790 size=80 callers=0 calls=3
   calls: sub_919180, sub_925480, sub_92bae0
*/
void sub_92c790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c790ULL || rel >= 0x92c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c7e0 size=16 callers=0 calls=0
*/
void sub_92c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c7e0ULL || rel >= 0x92c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c7f0 size=16 callers=0 calls=0
*/
void sub_92c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c7f0ULL || rel >= 0x92c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c800 size=16 callers=0 calls=0
*/
void sub_92c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c800ULL || rel >= 0x92c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c810 size=368 callers=0 calls=4
   calls: sub_925490, sub_9254a0, sub_e80580, sub_ec2fb0
*/
void sub_92c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c810ULL || rel >= 0x92c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c980 size=16 callers=0 calls=0
*/
void sub_92c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c980ULL || rel >= 0x92c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c990 size=16 callers=0 calls=0
*/
void sub_92c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c990ULL || rel >= 0x92c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c9a0 size=16 callers=0 calls=0
*/
void sub_92c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c9a0ULL || rel >= 0x92c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092c9b0 size=240 callers=0 calls=0
*/
void sub_92c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c9b0ULL || rel >= 0x92caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092caa0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_target_select_00_lyt.bin
   ref: bin/appli/battle/bin/uikit_battle_target_select.bin
*/
void uikit_battle_target_select(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92caa0ULL || rel >= 0x92cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092cc80 size=1456 callers=0 calls=8
   calls: btl_app_2, pattern_effect_2, sub_14aad40, sub_8efdd0, sub_901440, sub_92e6a0, sub_e83fe0, sub_e84190
   ref: pane_%s
*/
void pane__s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92cc80ULL || rel >= 0x92d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092d230 size=1232 callers=1 calls=1
   calls: sub_e7ea90
   ref: common/btl_app.dat
*/
void btl_app_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92d230ULL || rel >= 0x92d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092d700 size=432 callers=0 calls=0
*/
void sub_92d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92d700ULL || rel >= 0x92d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092d8b0 size=32 callers=0 calls=0
*/
void sub_92d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92d8b0ULL || rel >= 0x92d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092d8d0 size=32 callers=0 calls=0
*/
void sub_92d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92d8d0ULL || rel >= 0x92d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092d8f0 size=2128 callers=2 calls=13
   calls: sub_14e1a00, sub_14e61e0, sub_14e62b0, sub_14e62c0, sub_14e6510, sub_14e6540, sub_14e6d50, sub_14e6d90, sub_14e6dd0, sub_17919c0, sub_8ebc70, sub_91ab90
   ... +1 more
*/
void sub_92d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92d8f0ULL || rel >= 0x92e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e140 size=48 callers=2 calls=1
   calls: sub_eb6230
   ref: anime_out
*/
void anime_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e140ULL || rel >= 0x92e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e170 size=48 callers=0 calls=1
   calls: sub_eb6230
   ref: anime_in
*/
void anime_in(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e170ULL || rel >= 0x92e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e1a0 size=64 callers=2 calls=1
   calls: sub_14e6550
*/
void sub_92e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e1a0ULL || rel >= 0x92e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e1e0 size=96 callers=0 calls=2
   calls: sub_91b530, sub_92fb90
*/
void sub_92e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e1e0ULL || rel >= 0x92e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e240 size=144 callers=0 calls=3
   calls: sub_14e62c0, sub_14e6dd0, sub_91b5c0
*/
void sub_92e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e240ULL || rel >= 0x92e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e2d0 size=64 callers=1 calls=2
   calls: sub_14e6510, sub_14e6d50
*/
void sub_92e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e2d0ULL || rel >= 0x92e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e310 size=256 callers=0 calls=0
*/
void sub_92e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e310ULL || rel >= 0x92e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e410 size=16 callers=0 calls=0
*/
void sub_92e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e410ULL || rel >= 0x92e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e420 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_92e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e420ULL || rel >= 0x92e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e490 size=16 callers=0 calls=0
*/
void sub_92e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e490ULL || rel >= 0x92e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e4a0 size=16 callers=0 calls=0
*/
void sub_92e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e4a0ULL || rel >= 0x92e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e4b0 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_92e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e4b0ULL || rel >= 0x92e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e520 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_92e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e520ULL || rel >= 0x92e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e590 size=16 callers=0 calls=0
*/
void sub_92e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e590ULL || rel >= 0x92e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e5a0 size=16 callers=0 calls=0
*/
void sub_92e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e5a0ULL || rel >= 0x92e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e5b0 size=240 callers=0 calls=0
*/
void sub_92e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e5b0ULL || rel >= 0x92e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e6a0 size=416 callers=1 calls=2
   calls: sub_67b990, sub_e7f7f0
*/
void sub_92e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e6a0ULL || rel >= 0x92e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092e840 size=3776 callers=1 calls=6
   calls: color_inactive, sub_14aad40, sub_67d450, sub_8f3740, sub_e7f7f0, sub_fb7470
   ref: pane_%s
   ref: anime_%s
   ref: T_poke_00
   ref: unselect
   ref: pane_%s_%s
   ref: T_player_00
   ref: player
   ref: hinshi
*/
void pattern_effect_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92e840ULL || rel >= 0x92f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092f700 size=1168 callers=2 calls=15
   calls: sub_14e1a00, sub_14e1a30, sub_7811e0, sub_7ee6c0, sub_7ef2b0, sub_7ef320, sub_7ef330, sub_8ebc70, sub_8ebfe0, sub_8f2470, sub_8f3e10, sub_e83430
   ... +3 more
*/
void sub_92f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92f700ULL || rel >= 0x92fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092fb90 size=16 callers=6 calls=0
*/
void sub_92fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92fb90ULL || rel >= 0x92fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092fba0 size=160 callers=0 calls=0
*/
void sub_92fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92fba0ULL || rel >= 0x92fc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092fc40 size=160 callers=0 calls=0
*/
void sub_92fc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92fc40ULL || rel >= 0x92fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092fce0 size=240 callers=0 calls=0
*/
void sub_92fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92fce0ULL || rel >= 0x92fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092fdd0 size=16 callers=0 calls=0
*/
void sub_92fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92fdd0ULL || rel >= 0x92fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0092fde0 size=640 callers=0 calls=9
   calls: anime_switch, sub_5cfaf0, sub_91ced0, sub_930270, sub_930360, sub_967370, sub_c39c40, sub_d0c0, sub_e807f0
   ref: BlackView
   ref: opponent_info
*/
void opponent_info(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92fde0ULL || rel >= 0x930060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930060 size=16 callers=0 calls=0
*/
void sub_930060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930060ULL || rel >= 0x930070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930070 size=48 callers=0 calls=1
   calls: sub_e80810
*/
void sub_930070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930070ULL || rel >= 0x9300a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009300a0 size=48 callers=0 calls=1
   calls: sub_9299c0
*/
void sub_9300a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9300a0ULL || rel >= 0x9300d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009300d0 size=16 callers=0 calls=0
*/
void sub_9300d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9300d0ULL || rel >= 0x9300e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009300e0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_9300e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9300e0ULL || rel >= 0x930150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930150 size=16 callers=0 calls=0
*/
void sub_930150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930150ULL || rel >= 0x930160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930160 size=16 callers=0 calls=0
*/
void sub_930160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930160ULL || rel >= 0x930170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930170 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_930170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930170ULL || rel >= 0x9301e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009301e0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_9301e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9301e0ULL || rel >= 0x930250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930250 size=16 callers=0 calls=0
*/
void sub_930250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930250ULL || rel >= 0x930260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930260 size=16 callers=0 calls=0
*/
void sub_930260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930260ULL || rel >= 0x930270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930270 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_930270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930270ULL || rel >= 0x930360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930360 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_930360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930360ULL || rel >= 0x9304b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009304b0 size=240 callers=0 calls=0
*/
void sub_9304b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9304b0ULL || rel >= 0x9305a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009305a0 size=16 callers=0 calls=0
*/
void sub_9305a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9305a0ULL || rel >= 0x9305b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009305b0 size=640 callers=0 calls=11
   calls: anime_out, sub_7ee6b0, sub_82d9a0, sub_92d8f0, sub_92e1a0, sub_930830, sub_930d50, sub_967370, sub_c39c40, sub_d0c0, sub_e807f0
   ref: TargetSelectView
   ref: select_target
*/
void TargetSelectView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9305b0ULL || rel >= 0x930830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930830 size=256 callers=1 calls=2
   calls: sub_7ee6b0, sub_967370
*/
void sub_930830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930830ULL || rel >= 0x930930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930930 size=256 callers=0 calls=2
   calls: sub_930a30, sub_967370
*/
void sub_930930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930930ULL || rel >= 0x930a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930a30 size=240 callers=1 calls=3
   calls: sub_7ee6b0, sub_92e2d0, sub_967370
*/
void sub_930a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930a30ULL || rel >= 0x930b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930b20 size=128 callers=0 calls=1
   calls: sub_967370
*/
void sub_930b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930b20ULL || rel >= 0x930ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930ba0 size=16 callers=0 calls=0
*/
void sub_930ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930ba0ULL || rel >= 0x930bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930bb0 size=16 callers=0 calls=0
*/
void sub_930bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930bb0ULL || rel >= 0x930bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930bc0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_930bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930bc0ULL || rel >= 0x930c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930c30 size=16 callers=0 calls=0
*/
void sub_930c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930c30ULL || rel >= 0x930c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930c40 size=16 callers=0 calls=0
*/
void sub_930c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930c40ULL || rel >= 0x930c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930c50 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_930c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930c50ULL || rel >= 0x930cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930cc0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_930cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930cc0ULL || rel >= 0x930d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930d30 size=16 callers=0 calls=0
*/
void sub_930d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930d30ULL || rel >= 0x930d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930d40 size=16 callers=0 calls=0
*/
void sub_930d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930d40ULL || rel >= 0x930d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930d50 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_9196c0
*/
void sub_930d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930d50ULL || rel >= 0x930ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930ea0 size=240 callers=0 calls=0
*/
void sub_930ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930ea0ULL || rel >= 0x930f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930f90 size=16 callers=0 calls=0
*/
void sub_930f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930f90ULL || rel >= 0x930fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00930fa0 size=1408 callers=0 calls=21
   calls: sub_5cfaf0, sub_8eb250, sub_8ebd00, sub_8ed2e0, sub_906480, sub_908160, sub_9082d0, sub_908300, sub_9138b0, sub_91c540, sub_91c7c0, sub_91c900
   ... +9 more
   ref: ActionSelectSubView
   ref: select_action
   ref: TopView
*/
void ActionSelectSubView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x930fa0ULL || rel >= 0x931520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931520 size=224 callers=1 calls=2
   calls: sub_7ee6b0, sub_967370
*/
void sub_931520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931520ULL || rel >= 0x931600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931600 size=368 callers=0 calls=1
   calls: sub_967370
*/
void sub_931600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931600ULL || rel >= 0x931770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931770 size=16 callers=0 calls=0
*/
void sub_931770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931770ULL || rel >= 0x931780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931780 size=48 callers=0 calls=2
   calls: sub_925480, sub_9317b0
*/
void sub_931780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931780ULL || rel >= 0x9317b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009317b0 size=384 callers=1 calls=3
   calls: sub_7ee6b0, sub_91ca90, sub_967370
*/
void sub_9317b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9317b0ULL || rel >= 0x931930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931930 size=16 callers=0 calls=0
*/
void sub_931930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931930ULL || rel >= 0x931940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931940 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_931940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931940ULL || rel >= 0x9319b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009319b0 size=16 callers=0 calls=0
*/
void sub_9319b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9319b0ULL || rel >= 0x9319c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009319c0 size=16 callers=0 calls=0
*/
void sub_9319c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9319c0ULL || rel >= 0x9319d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009319d0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_9319d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9319d0ULL || rel >= 0x931a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931a40 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_931a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931a40ULL || rel >= 0x931ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931ab0 size=16 callers=0 calls=0
*/
void sub_931ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931ab0ULL || rel >= 0x931ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931ac0 size=16 callers=0 calls=0
*/
void sub_931ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931ac0ULL || rel >= 0x931ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931ad0 size=240 callers=0 calls=0
*/
void sub_931ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931ad0ULL || rel >= 0x931bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931bc0 size=704 callers=0 calls=14
   calls: sub_5cfaf0, sub_8ebe10, sub_908160, sub_9138b0, sub_91c480, sub_91c540, sub_91c900, sub_925140, sub_925490, sub_92c000, sub_967370, sub_c39c40
   ... +2 more
   ref: raid_capture_top
   ref: ActionSelectSubView
*/
void ActionSelectSubView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931bc0ULL || rel >= 0x931e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931e80 size=240 callers=0 calls=2
   calls: sub_91c910, sub_967370
*/
void sub_931e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931e80ULL || rel >= 0x931f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931f70 size=16 callers=0 calls=0
*/
void sub_931f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931f70ULL || rel >= 0x931f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931f80 size=16 callers=0 calls=0
*/
void sub_931f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931f80ULL || rel >= 0x931f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931f90 size=16 callers=0 calls=0
*/
void sub_931f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931f90ULL || rel >= 0x931fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931fa0 size=16 callers=0 calls=0
*/
void sub_931fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931fa0ULL || rel >= 0x931fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931fb0 size=16 callers=0 calls=0
*/
void sub_931fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931fb0ULL || rel >= 0x931fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931fc0 size=16 callers=0 calls=0
*/
void sub_931fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931fc0ULL || rel >= 0x931fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931fd0 size=16 callers=0 calls=0
*/
void sub_931fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931fd0ULL || rel >= 0x931fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931fe0 size=16 callers=0 calls=0
*/
void sub_931fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931fe0ULL || rel >= 0x931ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00931ff0 size=16 callers=0 calls=0
*/
void sub_931ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931ff0ULL || rel >= 0x932000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932000 size=304 callers=0 calls=0
*/
void sub_932000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932000ULL || rel >= 0x932130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932130 size=240 callers=0 calls=0
*/
void sub_932130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932130ULL || rel >= 0x932220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932220 size=16 callers=0 calls=0
*/
void sub_932220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932220ULL || rel >= 0x932230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932230 size=576 callers=0 calls=10
   calls: anime_out, sub_7ee6b0, sub_8ed2e0, sub_92d8f0, sub_92e1a0, sub_930d50, sub_967370, sub_c39c40, sub_d0c0, sub_e807f0
   ref: TargetSelectView
   ref: select_info_target
*/
void select_info_target(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932230ULL || rel >= 0x932470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932470 size=208 callers=0 calls=1
   calls: sub_967370
*/
void sub_932470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932470ULL || rel >= 0x932540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932540 size=112 callers=0 calls=1
   calls: sub_967370
*/
void sub_932540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932540ULL || rel >= 0x9325b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009325b0 size=16 callers=0 calls=0
*/
void sub_9325b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9325b0ULL || rel >= 0x9325c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009325c0 size=16 callers=0 calls=0
*/
void sub_9325c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9325c0ULL || rel >= 0x9325d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009325d0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_9325d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9325d0ULL || rel >= 0x932640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932640 size=16 callers=0 calls=0
*/
void sub_932640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932640ULL || rel >= 0x932650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932650 size=16 callers=0 calls=0
*/
void sub_932650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932650ULL || rel >= 0x932660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932660 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_932660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932660ULL || rel >= 0x9326d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009326d0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_9326d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9326d0ULL || rel >= 0x932740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932740 size=16 callers=0 calls=0
*/
void sub_932740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932740ULL || rel >= 0x932750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932750 size=16 callers=0 calls=0
*/
void sub_932750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932750ULL || rel >= 0x932760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932760 size=240 callers=0 calls=0
*/
void sub_932760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932760ULL || rel >= 0x932850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932850 size=512 callers=0 calls=8
   calls: sub_91f4a0, sub_91f4e0, sub_91f910, sub_925e80, sub_967370, sub_c39c40, sub_d0c0, sub_e807f0
   ref: raid_capture_ball_select
   ref: BallSelectView
*/
void raid_capture_ball_select(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932850ULL || rel >= 0x932a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932a50 size=224 callers=0 calls=3
   calls: sub_91f4b0, sub_91f4c0, sub_91f910
*/
void sub_932a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932a50ULL || rel >= 0x932b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932b30 size=16 callers=0 calls=0
*/
void sub_932b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932b30ULL || rel >= 0x932b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932b40 size=96 callers=0 calls=0
*/
void sub_932b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932b40ULL || rel >= 0x932ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932ba0 size=96 callers=0 calls=0
*/
void sub_932ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932ba0ULL || rel >= 0x932c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932c00 size=16 callers=0 calls=0
*/
void sub_932c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932c00ULL || rel >= 0x932c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932c10 size=96 callers=0 calls=0
*/
void sub_932c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932c10ULL || rel >= 0x932c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932c70 size=96 callers=0 calls=0
*/
void sub_932c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932c70ULL || rel >= 0x932cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932cd0 size=16 callers=0 calls=0
*/
void sub_932cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932cd0ULL || rel >= 0x932ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932ce0 size=16 callers=0 calls=0
*/
void sub_932ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932ce0ULL || rel >= 0x932cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932cf0 size=96 callers=0 calls=0
*/
void sub_932cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932cf0ULL || rel >= 0x932d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932d50 size=96 callers=0 calls=0
*/
void sub_932d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932d50ULL || rel >= 0x932db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932db0 size=304 callers=0 calls=0
*/
void sub_932db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932db0ULL || rel >= 0x932ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932ee0 size=240 callers=0 calls=0
*/
void sub_932ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932ee0ULL || rel >= 0x932fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00932fd0 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_info_00_lyt.bin
   ref: bin/appli/battle/bin/uikit_battle_info.bin
*/
void uikit_battle_info(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x932fd0ULL || rel >= 0x9331c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009331c0 size=6256 callers=0 calls=20
   calls: P_sick_00, sub_142a1c0, sub_14aad40, sub_14f5350, sub_5cfad0, sub_7a3a10, sub_8efdd0, sub_8f19b0, sub_901440, sub_934a30, sub_936190, sub_936350
   ... +8 more
   ref: common/tokuseiinfo.dat
   ref: common/iteminfo.dat
   ref: common/btl_app.dat
   ref: L_iconsick_00
   ref: common/btl_state.dat
   ref: L_pokeIcon_00
*/
void L_pokeIcon_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9331c0ULL || rel >= 0x934a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00934a30 size=880 callers=1 calls=0
*/
void sub_934a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x934a30ULL || rel >= 0x934da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00934da0 size=48 callers=0 calls=1
   calls: sub_142aa00
*/
void sub_934da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x934da0ULL || rel >= 0x934dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00934dd0 size=112 callers=0 calls=2
   calls: sub_901450, sub_91b3e0
*/
void sub_934dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x934dd0ULL || rel >= 0x934e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00934e40 size=16 callers=0 calls=0
*/
void sub_934e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x934e40ULL || rel >= 0x934e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00934e50 size=16 callers=1 calls=0
*/
void sub_934e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x934e50ULL || rel >= 0x934e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00934e60 size=16 callers=0 calls=0
*/
void sub_934e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x934e60ULL || rel >= 0x934e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00934e70 size=32 callers=1 calls=0
*/
void sub_934e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x934e70ULL || rel >= 0x934e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00934e90 size=1424 callers=6 calls=16
   calls: sub_17919c0, sub_7eef50, sub_7ef2b0, sub_7f09c0, sub_8ebfe0, sub_8ed370, sub_8f1de0, sub_8f2890, sub_9355a0, sub_935ee0, sub_9369d0, sub_936c10
   ... +4 more
*/
void sub_934e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x934e90ULL || rel >= 0x935420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935420 size=64 callers=0 calls=2
   calls: sub_142a480, sub_91b530
*/
void sub_935420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935420ULL || rel >= 0x935460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935460 size=320 callers=0 calls=3
   calls: sub_e80580, sub_e83430, sub_e83540
*/
void sub_935460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935460ULL || rel >= 0x9355a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009355a0 size=288 callers=1 calls=3
   calls: sub_8ed370, sub_9379e0, sub_937cc0
*/
void sub_9355a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9355a0ULL || rel >= 0x9356c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009356c0 size=672 callers=0 calls=3
   calls: sub_8ed370, sub_8f19b0, sub_923fb0
   ref: TOKUSEIINFO_%03u
   ref: ITEMINFO_%4u
   ref: ITEMINFO_%03u
*/
void ITEMINFO__4u(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9356c0ULL || rel >= 0x935960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935960 size=16 callers=0 calls=0
*/
void sub_935960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935960ULL || rel >= 0x935970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935970 size=16 callers=0 calls=0
*/
void sub_935970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935970ULL || rel >= 0x935980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935980 size=448 callers=1 calls=6
   calls: sub_5cfad0, sub_67d450, sub_e7ea90, sub_e7f7e0, sub_eb7570, sub_eb75e0
*/
void sub_935980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935980ULL || rel >= 0x935b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935b40 size=512 callers=0 calls=1
   calls: sub_936350
*/
void sub_935b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935b40ULL || rel >= 0x935d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935d40 size=16 callers=0 calls=0
*/
void sub_935d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935d40ULL || rel >= 0x935d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935d50 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_935d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935d50ULL || rel >= 0x935dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935dc0 size=16 callers=0 calls=0
*/
void sub_935dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935dc0ULL || rel >= 0x935dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935dd0 size=16 callers=0 calls=0
*/
void sub_935dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935dd0ULL || rel >= 0x935de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935de0 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_935de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935de0ULL || rel >= 0x935e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935e50 size=112 callers=0 calls=1
   calls: sub_9196c0
*/
void sub_935e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935e50ULL || rel >= 0x935ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935ec0 size=16 callers=0 calls=0
*/
void sub_935ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935ec0ULL || rel >= 0x935ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935ed0 size=16 callers=0 calls=0
*/
void sub_935ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935ed0ULL || rel >= 0x935ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00935ee0 size=480 callers=3 calls=0
*/
void sub_935ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x935ee0ULL || rel >= 0x9360c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009360c0 size=16 callers=0 calls=0
*/
void sub_9360c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9360c0ULL || rel >= 0x9360d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009360d0 size=96 callers=0 calls=0
*/
void sub_9360d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9360d0ULL || rel >= 0x936130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936130 size=96 callers=0 calls=0
*/
void sub_936130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936130ULL || rel >= 0x936190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936190 size=448 callers=1 calls=1
   calls: sub_e7f7f0
*/
void sub_936190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936190ULL || rel >= 0x936350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936350 size=240 callers=3 calls=0
*/
void sub_936350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936350ULL || rel >= 0x936440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936440 size=16 callers=0 calls=0
*/
void sub_936440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936440ULL || rel >= 0x936450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936450 size=16 callers=0 calls=0
*/
void sub_936450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936450ULL || rel >= 0x936460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936460 size=16 callers=0 calls=0
*/
void sub_936460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936460ULL || rel >= 0x936470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936470 size=16 callers=0 calls=0
*/
void sub_936470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936470ULL || rel >= 0x936480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936480 size=16 callers=0 calls=0
*/
void sub_936480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936480ULL || rel >= 0x936490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936490 size=16 callers=0 calls=0
*/
void sub_936490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936490ULL || rel >= 0x9364a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009364a0 size=16 callers=0 calls=0
*/
void sub_9364a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9364a0ULL || rel >= 0x9364b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009364b0 size=16 callers=0 calls=0
*/
void sub_9364b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9364b0ULL || rel >= 0x9364c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009364c0 size=384 callers=0 calls=2
   calls: sub_901450, sub_934e90
*/
void sub_9364c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9364c0ULL || rel >= 0x936640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936640 size=16 callers=0 calls=0
*/
void sub_936640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936640ULL || rel >= 0x936650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936650 size=16 callers=0 calls=0
*/
void sub_936650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936650ULL || rel >= 0x936660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936660 size=16 callers=0 calls=0
*/
void sub_936660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936660ULL || rel >= 0x936670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936670 size=240 callers=0 calls=0
*/
void sub_936670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936670ULL || rel >= 0x936760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936760 size=624 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_936760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936760ULL || rel >= 0x9369d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009369d0 size=576 callers=7 calls=3
   calls: sub_14aad40, sub_e83430, sub_e83850
*/
void sub_9369d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9369d0ULL || rel >= 0x936c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936c10 size=16 callers=7 calls=0
*/
void sub_936c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936c10ULL || rel >= 0x936c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936c20 size=240 callers=0 calls=0
*/
void sub_936c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936c20ULL || rel >= 0x936d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936d10 size=208 callers=1 calls=3
   calls: sub_9372f0, sub_e84190, sub_e84310
*/
void sub_936d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936d10ULL || rel >= 0x936de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936de0 size=528 callers=0 calls=6
   calls: sub_14e6550, sub_14e6d50, sub_e83430, sub_e83850, sub_e83930, sub_e83a20
*/
void sub_936de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936de0ULL || rel >= 0x936ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00936ff0 size=160 callers=1 calls=4
   calls: sub_14e1a00, sub_14e1a30, sub_14e6550, sub_14e6d90
*/
void sub_936ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x936ff0ULL || rel >= 0x937090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00937090 size=64 callers=0 calls=1
   calls: sub_14e6550
*/
void sub_937090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x937090ULL || rel >= 0x9370d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009370d0 size=32 callers=0 calls=0
*/
void sub_9370d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9370d0ULL || rel >= 0x9370f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009370f0 size=224 callers=0 calls=0
*/
void sub_9370f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9370f0ULL || rel >= 0x9371d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009371d0 size=224 callers=0 calls=0
*/
void sub_9371d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9371d0ULL || rel >= 0x9372b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009372b0 size=16 callers=0 calls=0
*/
void sub_9372b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9372b0ULL || rel >= 0x9372c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009372c0 size=16 callers=0 calls=0
*/
void sub_9372c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9372c0ULL || rel >= 0x9372d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009372d0 size=16 callers=0 calls=0
*/
void sub_9372d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9372d0ULL || rel >= 0x9372e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009372e0 size=16 callers=0 calls=0
*/
void sub_9372e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9372e0ULL || rel >= 0x9372f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009372f0 size=304 callers=4 calls=2
   calls: sub_143d390, sub_9372f0
*/
void sub_9372f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9372f0ULL || rel >= 0x937420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00937420 size=304 callers=3 calls=2
   calls: sub_143d390, sub_937420
*/
void sub_937420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x937420ULL || rel >= 0x937550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00937550 size=240 callers=0 calls=0
*/
void sub_937550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x937550ULL || rel >= 0x937640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00937640 size=928 callers=4 calls=1
   calls: sub_14aad40
*/
void sub_937640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x937640ULL || rel >= 0x9379e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009379e0 size=736 callers=4 calls=6
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_8f19b0, sub_e83430, sub_e83850
*/
void sub_9379e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9379e0ULL || rel >= 0x937cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00937cc0 size=80 callers=4 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_937cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x937cc0ULL || rel >= 0x937d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00937d10 size=240 callers=0 calls=0
*/
void sub_937d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x937d10ULL || rel >= 0x937e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00937e00 size=16 callers=0 calls=0
*/
void sub_937e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x937e00ULL || rel >= 0x937e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00937e10 size=672 callers=0 calls=12
   calls: sub_5cfaf0, sub_795bc0, sub_8ed2e0, sub_934e50, sub_934e70, sub_935980, sub_9382a0, sub_967370, sub_c39c40, sub_d0c0, sub_e807f0, sub_eb7730
   ref: OptionBarView
*/
void OptionBarView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x937e10ULL || rel >= 0x9380b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009380b0 size=16 callers=0 calls=0
*/
void sub_9380b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9380b0ULL || rel >= 0x9380c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009380c0 size=16 callers=0 calls=0
*/
void sub_9380c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9380c0ULL || rel >= 0x9380d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009380d0 size=48 callers=0 calls=2
   calls: sub_eb75e0, sub_eb77f0
*/
void sub_9380d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9380d0ULL || rel >= 0x938100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938100 size=16 callers=0 calls=0
*/
void sub_938100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938100ULL || rel >= 0x938110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938110 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_938110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938110ULL || rel >= 0x938180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938180 size=16 callers=0 calls=0
*/
void sub_938180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938180ULL || rel >= 0x938190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938190 size=16 callers=0 calls=0
*/
void sub_938190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938190ULL || rel >= 0x9381a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009381a0 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_9381a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9381a0ULL || rel >= 0x938210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938210 size=112 callers=0 calls=1
   calls: sub_91d680
*/
void sub_938210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938210ULL || rel >= 0x938280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938280 size=16 callers=0 calls=0
*/
void sub_938280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938280ULL || rel >= 0x938290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938290 size=16 callers=0 calls=0
*/
void sub_938290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938290ULL || rel >= 0x9382a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009382a0 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_9382a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9382a0ULL || rel >= 0x938390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938390 size=240 callers=0 calls=0
*/
void sub_938390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938390ULL || rel >= 0x938480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938480 size=416 callers=0 calls=7
   calls: sub_14233f0, sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb6230, sub_eba100
   ref: TipsView
*/
void TipsView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938480ULL || rel >= 0x938620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938620 size=16 callers=0 calls=0
*/
void sub_938620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938620ULL || rel >= 0x938630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938630 size=48 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_938630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938630ULL || rel >= 0x938660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938660 size=16 callers=0 calls=0
*/
void sub_938660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938660ULL || rel >= 0x938670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938670 size=16 callers=0 calls=0
*/
void sub_938670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938670ULL || rel >= 0x938680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938680 size=16 callers=0 calls=0
*/
void sub_938680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938680ULL || rel >= 0x938690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938690 size=16 callers=0 calls=0
*/
void sub_938690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938690ULL || rel >= 0x9386a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009386a0 size=16 callers=0 calls=0
*/
void sub_9386a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9386a0ULL || rel >= 0x9386b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009386b0 size=16 callers=0 calls=0
*/
void sub_9386b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9386b0ULL || rel >= 0x9386c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009386c0 size=16 callers=0 calls=0
*/
void sub_9386c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9386c0ULL || rel >= 0x9386d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009386d0 size=16 callers=0 calls=0
*/
void sub_9386d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9386d0ULL || rel >= 0x9386e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009386e0 size=304 callers=0 calls=0
*/
void sub_9386e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9386e0ULL || rel >= 0x938810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938810 size=240 callers=0 calls=0
*/
void sub_938810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938810ULL || rel >= 0x938900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938900 size=416 callers=0 calls=3
   calls: sub_67b990, sub_939b10, sub_939d50
   ref: TalkView
   ref: MessageView
*/
void MessageView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938900ULL || rel >= 0x938aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938aa0 size=16 callers=0 calls=0
*/
void sub_938aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938aa0ULL || rel >= 0x938ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938ab0 size=480 callers=0 calls=6
   calls: sub_8cb270, sub_8cbd80, sub_8cc930, sub_93b600, sub_93c170, sub_e807f0
*/
void sub_938ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938ab0ULL || rel >= 0x938c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938c90 size=112 callers=0 calls=3
   calls: sub_8cc930, sub_93b600, sub_e807f0
*/
void sub_938c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938c90ULL || rel >= 0x938d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938d00 size=16 callers=0 calls=0
*/
void sub_938d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938d00ULL || rel >= 0x938d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938d10 size=112 callers=0 calls=3
   calls: sub_8cb270, sub_93b600, sub_e807f0
*/
void sub_938d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938d10ULL || rel >= 0x938d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938d80 size=112 callers=0 calls=3
   calls: sub_8cbd80, sub_93b600, sub_e807f0
*/
void sub_938d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938d80ULL || rel >= 0x938df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938df0 size=224 callers=0 calls=4
   calls: sub_8cd030, sub_93b600, sub_93c170, sub_e807f0
*/
void sub_938df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938df0ULL || rel >= 0x938ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938ed0 size=208 callers=0 calls=1
   calls: sub_93b980
*/
void sub_938ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938ed0ULL || rel >= 0x938fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00938fa0 size=96 callers=0 calls=0
*/
void sub_938fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938fa0ULL || rel >= 0x939000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939000 size=96 callers=0 calls=0
*/
void sub_939000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939000ULL || rel >= 0x939060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939060 size=96 callers=0 calls=0
*/
void sub_939060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939060ULL || rel >= 0x9390c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009390c0 size=368 callers=0 calls=4
   calls: sub_67d450, sub_93b600, sub_e7ea90, sub_e807f0
   ref: common/btl_app.dat
*/
void btl_app_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9390c0ULL || rel >= 0x939230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939230 size=160 callers=0 calls=1
   calls: sub_eb6630
*/
void sub_939230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939230ULL || rel >= 0x9392d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009392d0 size=96 callers=0 calls=0
*/
void sub_9392d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9392d0ULL || rel >= 0x939330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939330 size=128 callers=0 calls=1
   calls: sub_e807f0
*/
void sub_939330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939330ULL || rel >= 0x9393b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009393b0 size=192 callers=0 calls=0
*/
void sub_9393b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9393b0ULL || rel >= 0x939470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939470 size=96 callers=0 calls=0
*/
void sub_939470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939470ULL || rel >= 0x9394d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009394d0 size=304 callers=0 calls=4
   calls: sub_67be10, sub_93b600, sub_93c170, sub_e807f0
*/
void sub_9394d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9394d0ULL || rel >= 0x939600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939600 size=16 callers=0 calls=0
*/
void sub_939600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939600ULL || rel >= 0x939610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939610 size=16 callers=0 calls=0
*/
void sub_939610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939610ULL || rel >= 0x939620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939620 size=16 callers=0 calls=0
*/
void sub_939620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939620ULL || rel >= 0x939630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939630 size=32 callers=0 calls=0
*/
void sub_939630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939630ULL || rel >= 0x939650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939650 size=16 callers=0 calls=0
*/
void sub_939650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939650ULL || rel >= 0x939660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939660 size=176 callers=0 calls=1
   calls: sub_7dfda0
*/
void sub_939660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939660ULL || rel >= 0x939710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939710 size=128 callers=0 calls=0
*/
void sub_939710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939710ULL || rel >= 0x939790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939790 size=496 callers=0 calls=2
   calls: sub_93bce0, sub_e807f0
*/
void sub_939790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939790ULL || rel >= 0x939980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939980 size=240 callers=0 calls=2
   calls: sub_93bc60, sub_e807f0
*/
void sub_939980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939980ULL || rel >= 0x939a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939a70 size=80 callers=0 calls=0
*/
void sub_939a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939a70ULL || rel >= 0x939ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939ac0 size=80 callers=0 calls=0
*/
void sub_939ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939ac0ULL || rel >= 0x939b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939b10 size=272 callers=2 calls=2
   calls: sub_5cfaf0, sub_939c20
*/
void sub_939b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939b10ULL || rel >= 0x939c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939c20 size=304 callers=5 calls=0
*/
void sub_939c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939c20ULL || rel >= 0x939d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939d50 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_939c20
*/
void sub_939d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939d50ULL || rel >= 0x939ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939ea0 size=128 callers=0 calls=1
   calls: sub_939f80
   ref: RemainTimeView
*/
void RemainTimeView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939ea0ULL || rel >= 0x939f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939f20 size=64 callers=0 calls=0
*/
void sub_939f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939f20ULL || rel >= 0x939f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939f60 size=16 callers=0 calls=0
*/
void sub_939f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939f60ULL || rel >= 0x939f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939f70 size=16 callers=0 calls=0
*/
void sub_939f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939f70ULL || rel >= 0x939f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00939f80 size=272 callers=2 calls=2
   calls: sub_5cfaf0, sub_93a090
*/
void sub_939f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939f80ULL || rel >= 0x93a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a090 size=304 callers=1 calls=0
*/
void sub_93a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a090ULL || rel >= 0x93a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a1c0 size=128 callers=0 calls=1
   calls: sub_93a2c0
   ref: StartingDemoView
*/
void StartingDemoView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a1c0ULL || rel >= 0x93a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a240 size=80 callers=0 calls=1
   calls: sub_93d3a0
*/
void sub_93a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a240ULL || rel >= 0x93a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a290 size=16 callers=0 calls=0
*/
void sub_93a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a290ULL || rel >= 0x93a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a2a0 size=16 callers=0 calls=0
*/
void sub_93a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a2a0ULL || rel >= 0x93a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a2b0 size=16 callers=0 calls=0
*/
void sub_93a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a2b0ULL || rel >= 0x93a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a2c0 size=272 callers=1 calls=2
   calls: sub_5cfaf0, sub_93a3d0
*/
void sub_93a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a2c0ULL || rel >= 0x93a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a3d0 size=304 callers=1 calls=0
*/
void sub_93a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a3d0ULL || rel >= 0x93a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a500 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_msg_00_lyt.bin
   ref: bin/appli/battle/bin/uikit_battle_msg.bin
*/
void uikit_battle_msg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a500ULL || rel >= 0x93a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a6e0 size=32 callers=0 calls=0
*/
void sub_93a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a6e0ULL || rel >= 0x93a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093a700 size=3488 callers=0 calls=13
   calls: L_cursor_00, sub_1310f00, sub_14e1a00, sub_14e1a30, sub_5cfad0, sub_67b990, sub_67d450, sub_93c570, sub_93c8e0, sub_93cc10, sub_e7ea90, sub_e7f7e0
   ... +1 more
*/
void sub_93a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a700ULL || rel >= 0x93b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093b4a0 size=64 callers=0 calls=1
   calls: sub_93cae0
*/
void sub_93b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b4a0ULL || rel >= 0x93b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093b4e0 size=112 callers=0 calls=3
   calls: sub_14e1a30, sub_93cc10, sub_e806b0
*/
void sub_93b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b4e0ULL || rel >= 0x93b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093b550 size=176 callers=0 calls=3
   calls: sub_93cc10, sub_e806b0, sub_e83430
*/
void sub_93b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b550ULL || rel >= 0x93b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093b600 size=480 callers=7 calls=11
   calls: sub_67bdb0, sub_67bdc0, sub_93b7e0, sub_93b8e0, sub_93cbb0, sub_93cbc0, sub_93cbe0, sub_93cbf0, sub_93cc30, sub_e83430, sub_eb6230
*/
void sub_93b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b600ULL || rel >= 0x93b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093b7e0 size=256 callers=1 calls=6
   calls: sub_130b1d0, sub_67bdb0, sub_67bdc0, sub_67be10, sub_67be60, sub_67c470
*/
void sub_93b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b7e0ULL || rel >= 0x93b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093b8e0 size=160 callers=1 calls=2
   calls: sub_93cc50, sub_93cc80
*/
void sub_93b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b8e0ULL || rel >= 0x93b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093b980 size=80 callers=1 calls=3
   calls: sub_14e1a00, sub_eb6230, sub_eb7070
*/
void sub_93b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b980ULL || rel >= 0x93b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093b9d0 size=96 callers=0 calls=1
   calls: sub_eb6630
*/
void sub_93b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b9d0ULL || rel >= 0x93ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093ba30 size=560 callers=0 calls=1
   calls: sub_93bc60
*/
void sub_93ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ba30ULL || rel >= 0x93bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093bc60 size=128 callers=3 calls=3
   calls: sub_14e1a00, sub_e806b0, sub_eb6b70
*/
void sub_93bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93bc60ULL || rel >= 0x93bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093bce0 size=144 callers=1 calls=1
   calls: sub_93bc60
*/
void sub_93bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93bce0ULL || rel >= 0x93bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093bd70 size=448 callers=0 calls=8
   calls: sub_14e1a00, sub_1502120, sub_93cb20, sub_93cc70, sub_93cc90, sub_93ccb0, sub_eb6230, sub_eb7070
   ref: Play_UI_Message
*/
void Play_UI_Message(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93bd70ULL || rel >= 0x93bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093bf30 size=64 callers=0 calls=0
*/
void sub_93bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93bf30ULL || rel >= 0x93bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093bf70 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/msg/bin/msg_00_lyt.bin
   ref: bin/appli/battle/bin/uikit_battle_msg.bin
*/
void msg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93bf70ULL || rel >= 0x93c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c150 size=32 callers=0 calls=0
*/
void sub_93c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c150ULL || rel >= 0x93c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c170 size=48 callers=7 calls=0
*/
void sub_93c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c170ULL || rel >= 0x93c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c1a0 size=16 callers=0 calls=0
*/
void sub_93c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c1a0ULL || rel >= 0x93c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c1b0 size=16 callers=0 calls=0
*/
void sub_93c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c1b0ULL || rel >= 0x93c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0093c1c0 size=16 callers=0 calls=0
*/
void sub_93c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c1c0ULL || rel >= 0x93c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

