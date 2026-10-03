/* main functions 014770a0..01489e30 (174 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 014770a0 size=16 callers=0 calls=0
*/
void sub_14770a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14770a0ULL || rel >= 0x14770b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014770b0 size=16 callers=0 calls=0
*/
void sub_14770b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14770b0ULL || rel >= 0x14770c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014770c0 size=16 callers=0 calls=0
*/
void sub_14770c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14770c0ULL || rel >= 0x14770d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014770d0 size=16 callers=0 calls=0
*/
void sub_14770d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14770d0ULL || rel >= 0x14770e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014770e0 size=304 callers=0 calls=0
*/
void sub_14770e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14770e0ULL || rel >= 0x1477210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477210 size=688 callers=0 calls=9
   calls: sub_145fa60, sub_1468690, sub_1472790, sub_795bc0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230, sub_eb7730
   ref: CommonOptionBar
   ref: StateAlbumStart
   ref: ViewTop
   ref: ViewBg
   ref: ViewTopMenu
*/
void ViewTopMenu_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477210ULL || rel >= 0x14774c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014774c0 size=80 callers=0 calls=2
   calls: sub_eb6530, sub_eb7790
*/
void sub_14774c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14774c0ULL || rel >= 0x1477510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477510 size=16 callers=0 calls=0
*/
void sub_1477510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477510ULL || rel >= 0x1477520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477520 size=16 callers=0 calls=0
*/
void sub_1477520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477520ULL || rel >= 0x1477530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477530 size=16 callers=0 calls=0
*/
void sub_1477530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477530ULL || rel >= 0x1477540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477540 size=16 callers=0 calls=0
*/
void sub_1477540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477540ULL || rel >= 0x1477550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477550 size=16 callers=0 calls=0
*/
void sub_1477550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477550ULL || rel >= 0x1477560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477560 size=16 callers=0 calls=0
*/
void sub_1477560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477560ULL || rel >= 0x1477570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477570 size=16 callers=0 calls=0
*/
void sub_1477570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477570ULL || rel >= 0x1477580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477580 size=16 callers=0 calls=0
*/
void sub_1477580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477580ULL || rel >= 0x1477590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477590 size=16 callers=0 calls=0
*/
void sub_1477590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477590ULL || rel >= 0x14775a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014775a0 size=304 callers=0 calls=0
*/
void sub_14775a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14775a0ULL || rel >= 0x14776d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014776d0 size=528 callers=0 calls=8
   calls: sub_1458310, sub_1467080, sub_146a770, sub_146c040, sub_c39c40, sub_d0c0, sub_e80580, sub_e807f0
   ref: StateNotSharing
   ref: ViewCardCode
*/
void StateNotSharing(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14776d0ULL || rel >= 0x14778e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014778e0 size=32 callers=0 calls=0
*/
void sub_14778e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14778e0ULL || rel >= 0x1477900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477900 size=16 callers=0 calls=0
*/
void sub_1477900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477900ULL || rel >= 0x1477910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477910 size=16 callers=0 calls=0
*/
void sub_1477910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477910ULL || rel >= 0x1477920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477920 size=16 callers=0 calls=0
*/
void sub_1477920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477920ULL || rel >= 0x1477930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477930 size=16 callers=0 calls=0
*/
void sub_1477930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477930ULL || rel >= 0x1477940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477940 size=16 callers=0 calls=0
*/
void sub_1477940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477940ULL || rel >= 0x1477950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477950 size=16 callers=0 calls=0
*/
void sub_1477950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477950ULL || rel >= 0x1477960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477960 size=16 callers=0 calls=0
*/
void sub_1477960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477960ULL || rel >= 0x1477970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477970 size=16 callers=0 calls=0
*/
void sub_1477970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477970ULL || rel >= 0x1477980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477980 size=16 callers=0 calls=0
*/
void sub_1477980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477980ULL || rel >= 0x1477990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477990 size=304 callers=0 calls=0
*/
void sub_1477990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477990ULL || rel >= 0x1477ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477ac0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/trlicense_album/bin/trlicense_command_00_lyt.bin
   ref: bin/appli/trlicense_album/bin/uikit_trlicense_command_00.bin
*/
void uikit_trlicense_command_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477ac0ULL || rel >= 0x1477ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01477ca0 size=1440 callers=0 calls=8
   calls: sub_14e1a30, sub_5cfad0, sub_7a3c20, sub_8f19b0, sub_e7eb10, sub_e83e60, sub_e84190, sub_e84310
*/
void sub_1477ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1477ca0ULL || rel >= 0x1478240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478240 size=80 callers=1 calls=1
   calls: sub_14e1a30
*/
void sub_1478240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478240ULL || rel >= 0x1478290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478290 size=64 callers=1 calls=2
   calls: sub_14e1b40, sub_14e6550
*/
void sub_1478290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478290ULL || rel >= 0x14782d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014782d0 size=144 callers=0 calls=0
*/
void sub_14782d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14782d0ULL || rel >= 0x1478360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478360 size=144 callers=0 calls=0
*/
void sub_1478360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478360ULL || rel >= 0x14783f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014783f0 size=16 callers=0 calls=0
*/
void sub_14783f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14783f0ULL || rel >= 0x1478400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478400 size=144 callers=0 calls=0
*/
void sub_1478400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478400ULL || rel >= 0x1478490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478490 size=144 callers=0 calls=0
*/
void sub_1478490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478490ULL || rel >= 0x1478520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478520 size=16 callers=0 calls=0
*/
void sub_1478520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478520ULL || rel >= 0x1478530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478530 size=16 callers=0 calls=0
*/
void sub_1478530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478530ULL || rel >= 0x1478540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478540 size=144 callers=0 calls=0
*/
void sub_1478540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478540ULL || rel >= 0x14785d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014785d0 size=144 callers=0 calls=0
*/
void sub_14785d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14785d0ULL || rel >= 0x1478660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478660 size=304 callers=1 calls=0
*/
void sub_1478660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478660ULL || rel >= 0x1478790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478790 size=32 callers=0 calls=0
*/
void sub_1478790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478790ULL || rel >= 0x14787b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014787b0 size=16 callers=0 calls=0
*/
void sub_14787b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14787b0ULL || rel >= 0x14787c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014787c0 size=16 callers=0 calls=0
*/
void sub_14787c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14787c0ULL || rel >= 0x14787d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014787d0 size=16 callers=0 calls=0
*/
void sub_14787d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14787d0ULL || rel >= 0x14787e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014787e0 size=32 callers=0 calls=0
*/
void sub_14787e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14787e0ULL || rel >= 0x1478800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478800 size=16 callers=0 calls=0
*/
void sub_1478800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478800ULL || rel >= 0x1478810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478810 size=16 callers=0 calls=0
*/
void sub_1478810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478810ULL || rel >= 0x1478820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478820 size=16 callers=0 calls=0
*/
void sub_1478820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478820ULL || rel >= 0x1478830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478830 size=32 callers=0 calls=0
*/
void sub_1478830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478830ULL || rel >= 0x1478850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478850 size=16 callers=0 calls=0
*/
void sub_1478850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478850ULL || rel >= 0x1478860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478860 size=16 callers=0 calls=0
*/
void sub_1478860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478860ULL || rel >= 0x1478870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478870 size=16 callers=0 calls=0
*/
void sub_1478870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478870ULL || rel >= 0x1478880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478880 size=528 callers=0 calls=7
   calls: sub_1458310, sub_1467080, sub_1478240, sub_1478c70, sub_c39c40, sub_d0c0, sub_e807f0
   ref: StateCardPassMenu
   ref: ViewCardPassMenu
*/
void StateCardPassMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478880ULL || rel >= 0x1478a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478a90 size=32 callers=0 calls=0
*/
void sub_1478a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478a90ULL || rel >= 0x1478ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478ab0 size=16 callers=0 calls=0
*/
void sub_1478ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478ab0ULL || rel >= 0x1478ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478ac0 size=16 callers=0 calls=0
*/
void sub_1478ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478ac0ULL || rel >= 0x1478ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478ad0 size=16 callers=0 calls=0
*/
void sub_1478ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478ad0ULL || rel >= 0x1478ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478ae0 size=16 callers=0 calls=0
*/
void sub_1478ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478ae0ULL || rel >= 0x1478af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478af0 size=16 callers=0 calls=0
*/
void sub_1478af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478af0ULL || rel >= 0x1478b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478b00 size=16 callers=0 calls=0
*/
void sub_1478b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478b00ULL || rel >= 0x1478b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478b10 size=16 callers=0 calls=0
*/
void sub_1478b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478b10ULL || rel >= 0x1478b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478b20 size=16 callers=0 calls=0
*/
void sub_1478b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478b20ULL || rel >= 0x1478b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478b30 size=16 callers=0 calls=0
*/
void sub_1478b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478b30ULL || rel >= 0x1478b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478b40 size=304 callers=0 calls=0
*/
void sub_1478b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478b40ULL || rel >= 0x1478c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478c70 size=272 callers=7 calls=2
   calls: sub_1478660, sub_5cfaf0
*/
void sub_1478c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478c70ULL || rel >= 0x1478d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01478d80 size=704 callers=0 calls=10
   calls: sub_1458310, sub_1467080, sub_146a770, sub_146c040, sub_5cfaf0, sub_79b990, sub_c39c40, sub_d0c0, sub_e80580, sub_e807f0
   ref: StateDisplayMyCode
   ref: ViewCardCode
*/
void StateDisplayMyCode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1478d80ULL || rel >= 0x1479040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479040 size=1088 callers=0 calls=9
   calls: sub_146c040, sub_67b990, sub_67d450, sub_c39c40, sub_e7eb10, sub_e80580, sub_e807f0, sub_eb8e80, sub_eb8ea0
*/
void sub_1479040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479040ULL || rel >= 0x1479480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479480 size=16 callers=0 calls=0
*/
void sub_1479480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479480ULL || rel >= 0x1479490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479490 size=16 callers=0 calls=0
*/
void sub_1479490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479490ULL || rel >= 0x14794a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014794a0 size=16 callers=0 calls=0
*/
void sub_14794a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14794a0ULL || rel >= 0x14794b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014794b0 size=16 callers=0 calls=0
*/
void sub_14794b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14794b0ULL || rel >= 0x14794c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014794c0 size=16 callers=0 calls=0
*/
void sub_14794c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14794c0ULL || rel >= 0x14794d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014794d0 size=16 callers=0 calls=0
*/
void sub_14794d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14794d0ULL || rel >= 0x14794e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014794e0 size=16 callers=0 calls=0
*/
void sub_14794e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14794e0ULL || rel >= 0x14794f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014794f0 size=16 callers=0 calls=0
*/
void sub_14794f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14794f0ULL || rel >= 0x1479500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479500 size=16 callers=0 calls=0
*/
void sub_1479500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479500ULL || rel >= 0x1479510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479510 size=304 callers=0 calls=0
*/
void sub_1479510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479510ULL || rel >= 0x1479640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479640 size=736 callers=0 calls=6
   calls: sub_1479d70, sub_b31900, sub_c39c40, sub_d0c0, sub_e7eb10, sub_ff45c0
   ref: StateNetConnection
   ref: ViewMsg
*/
void StateNetConnection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479640ULL || rel >= 0x1479920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479920 size=64 callers=0 calls=1
   calls: Play_UI_common_report_2
*/
void sub_1479920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479920ULL || rel >= 0x1479960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479960 size=112 callers=0 calls=1
   calls: sub_1467080
*/
void sub_1479960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479960ULL || rel >= 0x14799d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014799d0 size=96 callers=0 calls=0
*/
void sub_14799d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14799d0ULL || rel >= 0x1479a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479a30 size=96 callers=0 calls=0
*/
void sub_1479a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479a30ULL || rel >= 0x1479a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479a90 size=16 callers=0 calls=0
*/
void sub_1479a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479a90ULL || rel >= 0x1479aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479aa0 size=96 callers=0 calls=0
*/
void sub_1479aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479aa0ULL || rel >= 0x1479b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479b00 size=96 callers=0 calls=0
*/
void sub_1479b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479b00ULL || rel >= 0x1479b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479b60 size=16 callers=0 calls=0
*/
void sub_1479b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479b60ULL || rel >= 0x1479b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479b70 size=16 callers=0 calls=0
*/
void sub_1479b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479b70ULL || rel >= 0x1479b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479b80 size=96 callers=0 calls=0
*/
void sub_1479b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479b80ULL || rel >= 0x1479be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479be0 size=96 callers=0 calls=0
*/
void sub_1479be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479be0ULL || rel >= 0x1479c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479c40 size=304 callers=0 calls=0
*/
void sub_1479c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479c40ULL || rel >= 0x1479d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479d70 size=288 callers=1 calls=1
   calls: sub_ff42a0
*/
void sub_1479d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479d70ULL || rel >= 0x1479e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479e90 size=48 callers=0 calls=0
*/
void sub_1479e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479e90ULL || rel >= 0x1479ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479ec0 size=16 callers=0 calls=0
*/
void sub_1479ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479ec0ULL || rel >= 0x1479ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479ed0 size=16 callers=0 calls=0
*/
void sub_1479ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479ed0ULL || rel >= 0x1479ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479ee0 size=16 callers=0 calls=0
*/
void sub_1479ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479ee0ULL || rel >= 0x1479ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01479ef0 size=464 callers=0 calls=6
   calls: sub_1458310, sub_1467080, sub_1474b60, sub_1475a30, sub_c39c40, sub_d0c0
   ref: ViewList
   ref: StateAlbumListErase
*/
void StateAlbumListErase(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1479ef0ULL || rel >= 0x147a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a0c0 size=368 callers=0 calls=12
   calls: sub_1459e00, sub_1459e50, sub_1459e80, sub_1459f50, sub_145a0c0, sub_145a220, sub_1467080, sub_1475b00, sub_1475b70, sub_1475be0, sub_147a230, sub_e80580
*/
void sub_147a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a0c0ULL || rel >= 0x147a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a230 size=256 callers=1 calls=2
   calls: sub_1467080, sub_1474880
*/
void sub_147a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a230ULL || rel >= 0x147a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a330 size=16 callers=0 calls=0
*/
void sub_147a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a330ULL || rel >= 0x147a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a340 size=16 callers=0 calls=0
*/
void sub_147a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a340ULL || rel >= 0x147a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a350 size=16 callers=0 calls=0
*/
void sub_147a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a350ULL || rel >= 0x147a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a360 size=16 callers=0 calls=0
*/
void sub_147a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a360ULL || rel >= 0x147a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a370 size=16 callers=0 calls=0
*/
void sub_147a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a370ULL || rel >= 0x147a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a380 size=16 callers=0 calls=0
*/
void sub_147a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a380ULL || rel >= 0x147a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a390 size=16 callers=0 calls=0
*/
void sub_147a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a390ULL || rel >= 0x147a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a3a0 size=16 callers=0 calls=0
*/
void sub_147a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a3a0ULL || rel >= 0x147a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a3b0 size=16 callers=0 calls=0
*/
void sub_147a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a3b0ULL || rel >= 0x147a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a3c0 size=304 callers=0 calls=0
*/
void sub_147a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a3c0ULL || rel >= 0x147a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a4f0 size=848 callers=0 calls=12
   calls: sub_1457720, sub_145fa60, sub_145fcc0, sub_1463730, sub_1467080, sub_1468690, sub_1472790, sub_1474b60, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewTop
   ref: StateAlbumListToTop
   ref: ViewBg
   ref: ViewTopMenu
   ref: ViewList
   ref: ViewCard
*/
void ViewTopMenu_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a4f0ULL || rel >= 0x147a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a840 size=112 callers=0 calls=2
   calls: sub_145fd00, sub_eb6530
*/
void sub_147a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a840ULL || rel >= 0x147a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a8b0 size=64 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_147a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a8b0ULL || rel >= 0x147a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a8f0 size=16 callers=0 calls=0
*/
void sub_147a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a8f0ULL || rel >= 0x147a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a900 size=16 callers=0 calls=0
*/
void sub_147a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a900ULL || rel >= 0x147a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a910 size=16 callers=0 calls=0
*/
void sub_147a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a910ULL || rel >= 0x147a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a920 size=16 callers=0 calls=0
*/
void sub_147a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a920ULL || rel >= 0x147a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a930 size=16 callers=0 calls=0
*/
void sub_147a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a930ULL || rel >= 0x147a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a940 size=16 callers=0 calls=0
*/
void sub_147a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a940ULL || rel >= 0x147a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a950 size=16 callers=0 calls=0
*/
void sub_147a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a950ULL || rel >= 0x147a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a960 size=16 callers=0 calls=0
*/
void sub_147a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a960ULL || rel >= 0x147a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147a970 size=304 callers=0 calls=0
*/
void sub_147a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147a970ULL || rel >= 0x147aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147aaa0 size=1184 callers=0 calls=16
   calls: sub_1457720, sub_1458470, sub_1459e00, sub_145fa60, sub_145fcc0, sub_1467080, sub_1468690, sub_1472790, sub_1474b60, sub_1475b00, sub_1476880, sub_147af40
   ... +4 more
   ref: ViewTop
   ref: ViewBg
   ref: ViewTopMenu
   ref: ViewList
   ref: StateAlbumTopToList
   ref: ViewCard
*/
void ViewTopMenu_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147aaa0ULL || rel >= 0x147af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147af40 size=272 callers=3 calls=7
   calls: sub_1459ac0, sub_1459e00, sub_1459e50, sub_14bf750, sub_14bfbb0, sub_14cc490, sub_14cc8d0
*/
void sub_147af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147af40ULL || rel >= 0x147b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b050 size=112 callers=0 calls=2
   calls: sub_145fd00, sub_eb6530
*/
void sub_147b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b050ULL || rel >= 0x147b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b0c0 size=64 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_147b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b0c0ULL || rel >= 0x147b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b100 size=16 callers=0 calls=0
*/
void sub_147b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b100ULL || rel >= 0x147b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b110 size=16 callers=0 calls=0
*/
void sub_147b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b110ULL || rel >= 0x147b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b120 size=16 callers=0 calls=0
*/
void sub_147b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b120ULL || rel >= 0x147b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b130 size=16 callers=0 calls=0
*/
void sub_147b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b130ULL || rel >= 0x147b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b140 size=16 callers=0 calls=0
*/
void sub_147b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b140ULL || rel >= 0x147b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b150 size=16 callers=0 calls=0
*/
void sub_147b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b150ULL || rel >= 0x147b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b160 size=16 callers=0 calls=0
*/
void sub_147b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b160ULL || rel >= 0x147b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b170 size=16 callers=0 calls=0
*/
void sub_147b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b170ULL || rel >= 0x147b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b180 size=304 callers=0 calls=0
*/
void sub_147b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b180ULL || rel >= 0x147b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b2b0 size=1296 callers=0 calls=10
   calls: sub_1474b60, sub_5cfaf0, sub_67b990, sub_67d450, sub_79b990, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e80580, sub_e807f0
   ref: StateAlbumSortSelect
   ref: ViewList
*/
void StateAlbumSortSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b2b0ULL || rel >= 0x147b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b7c0 size=336 callers=0 calls=7
   calls: sub_1475840, sub_1475b00, sub_1476880, sub_1502120, sub_5cfad0, sub_e80580, sub_eb8ea0
*/
void sub_147b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b7c0ULL || rel >= 0x147b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b910 size=16 callers=0 calls=0
*/
void sub_147b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b910ULL || rel >= 0x147b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147b920 size=240 callers=0 calls=0
*/
void sub_147b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147b920ULL || rel >= 0x147ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba10 size=16 callers=0 calls=0
*/
void sub_147ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba10ULL || rel >= 0x147ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba20 size=16 callers=0 calls=0
*/
void sub_147ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba20ULL || rel >= 0x147ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba30 size=16 callers=0 calls=0
*/
void sub_147ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba30ULL || rel >= 0x147ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba40 size=16 callers=0 calls=0
*/
void sub_147ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba40ULL || rel >= 0x147ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba50 size=16 callers=0 calls=0
*/
void sub_147ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba50ULL || rel >= 0x147ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba60 size=16 callers=0 calls=0
*/
void sub_147ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba60ULL || rel >= 0x147ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba70 size=16 callers=0 calls=0
*/
void sub_147ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba70ULL || rel >= 0x147ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba80 size=16 callers=0 calls=0
*/
void sub_147ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba80ULL || rel >= 0x147ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ba90 size=304 callers=0 calls=0
*/
void sub_147ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ba90ULL || rel >= 0x147bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147bbc0 size=608 callers=0 calls=9
   calls: sub_1458310, sub_1459ac0, sub_1459d20, sub_1459e50, sub_1467080, sub_1471d50, sub_147c240, sub_c39c40, sub_d0c0
   ref: ViewCardInfo
   ref: StateAlbumCardDetails
*/
void StateAlbumCardDetails(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147bbc0ULL || rel >= 0x147be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147be20 size=384 callers=0 calls=5
   calls: sub_1467080, sub_1471dd0, sub_1471e00, sub_147bfa0, sub_14cc6e0
*/
void sub_147be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147be20ULL || rel >= 0x147bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147bfa0 size=224 callers=2 calls=5
   calls: sub_1345c70, sub_1345e00, sub_1459ac0, sub_1459d20, sub_1459e50
*/
void sub_147bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147bfa0ULL || rel >= 0x147c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c080 size=16 callers=0 calls=0
*/
void sub_147c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c080ULL || rel >= 0x147c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c090 size=16 callers=0 calls=0
*/
void sub_147c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c090ULL || rel >= 0x147c0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c0a0 size=16 callers=0 calls=0
*/
void sub_147c0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c0a0ULL || rel >= 0x147c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c0b0 size=16 callers=0 calls=0
*/
void sub_147c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c0b0ULL || rel >= 0x147c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c0c0 size=16 callers=0 calls=0
*/
void sub_147c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c0c0ULL || rel >= 0x147c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c0d0 size=16 callers=0 calls=0
*/
void sub_147c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c0d0ULL || rel >= 0x147c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c0e0 size=16 callers=0 calls=0
*/
void sub_147c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c0e0ULL || rel >= 0x147c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c0f0 size=16 callers=0 calls=0
*/
void sub_147c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c0f0ULL || rel >= 0x147c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c100 size=16 callers=0 calls=0
*/
void sub_147c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c100ULL || rel >= 0x147c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c110 size=304 callers=0 calls=0
*/
void sub_147c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c110ULL || rel >= 0x147c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c240 size=272 callers=10 calls=2
   calls: sub_1472050, sub_5cfaf0
*/
void sub_147c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c240ULL || rel >= 0x147c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147c350 size=2128 callers=0 calls=17
   calls: sub_1345d10, sub_1457720, sub_1459d60, sub_1467080, sub_146a770, sub_1470d30, sub_1474b60, sub_1475b00, sub_147c240, sub_14bf750, sub_14bfbb0, sub_14cc8d0
   ... +5 more
   ref: StateDownloadToDetail
   ref: ViewList
   ref: ViewCardCode
   ref: ViewCardInfo
   ref: ViewCard
*/
void StateDownloadToDetail(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c350ULL || rel >= 0x147cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cba0 size=80 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_147cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cba0ULL || rel >= 0x147cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cbf0 size=16 callers=0 calls=0
*/
void sub_147cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cbf0ULL || rel >= 0x147cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc00 size=16 callers=0 calls=0
*/
void sub_147cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc00ULL || rel >= 0x147cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc10 size=16 callers=0 calls=0
*/
void sub_147cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc10ULL || rel >= 0x147cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc20 size=16 callers=0 calls=0
*/
void sub_147cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc20ULL || rel >= 0x147cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc30 size=16 callers=0 calls=0
*/
void sub_147cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc30ULL || rel >= 0x147cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc40 size=16 callers=0 calls=0
*/
void sub_147cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc40ULL || rel >= 0x147cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc50 size=16 callers=0 calls=0
*/
void sub_147cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc50ULL || rel >= 0x147cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc60 size=16 callers=0 calls=0
*/
void sub_147cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc60ULL || rel >= 0x147cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc70 size=16 callers=0 calls=0
*/
void sub_147cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc70ULL || rel >= 0x147cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cc80 size=304 callers=0 calls=0
*/
void sub_147cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cc80ULL || rel >= 0x147cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cdb0 size=560 callers=0 calls=7
   calls: sub_1457720, sub_146a770, sub_146b8b0, sub_147c240, sub_c39c40, sub_d0c0, sub_eb6230
   ref: StateDetailToInputCode
   ref: ViewCardCode
   ref: ViewCardInfo
   ref: ViewCard
*/
void StateDetailToInputCode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cdb0ULL || rel >= 0x147cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147cfe0 size=80 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_147cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147cfe0ULL || rel >= 0x147d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d030 size=16 callers=0 calls=0
*/
void sub_147d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d030ULL || rel >= 0x147d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d040 size=16 callers=0 calls=0
*/
void sub_147d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d040ULL || rel >= 0x147d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d050 size=16 callers=0 calls=0
*/
void sub_147d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d050ULL || rel >= 0x147d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d060 size=16 callers=0 calls=0
*/
void sub_147d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d060ULL || rel >= 0x147d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d070 size=16 callers=0 calls=0
*/
void sub_147d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d070ULL || rel >= 0x147d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d080 size=16 callers=0 calls=0
*/
void sub_147d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d080ULL || rel >= 0x147d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d090 size=16 callers=0 calls=0
*/
void sub_147d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d090ULL || rel >= 0x147d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d0a0 size=16 callers=0 calls=0
*/
void sub_147d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d0a0ULL || rel >= 0x147d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d0b0 size=16 callers=0 calls=0
*/
void sub_147d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d0b0ULL || rel >= 0x147d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d0c0 size=304 callers=0 calls=0
*/
void sub_147d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d0c0ULL || rel >= 0x147d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d1f0 size=592 callers=0 calls=9
   calls: sub_1467080, sub_1474b60, sub_1475b00, sub_147c240, sub_14cc8c0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: StateAlbumDetailsToList
   ref: ViewList
   ref: ViewCardInfo
*/
void StateAlbumDetailsToList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d1f0ULL || rel >= 0x147d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d440 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_147d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d440ULL || rel >= 0x147d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d480 size=16 callers=0 calls=0
*/
void sub_147d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d480ULL || rel >= 0x147d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d490 size=16 callers=0 calls=0
*/
void sub_147d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d490ULL || rel >= 0x147d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d4a0 size=16 callers=0 calls=0
*/
void sub_147d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d4a0ULL || rel >= 0x147d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d4b0 size=16 callers=0 calls=0
*/
void sub_147d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d4b0ULL || rel >= 0x147d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d4c0 size=16 callers=0 calls=0
*/
void sub_147d4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d4c0ULL || rel >= 0x147d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d4d0 size=16 callers=0 calls=0
*/
void sub_147d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d4d0ULL || rel >= 0x147d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d4e0 size=16 callers=0 calls=0
*/
void sub_147d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d4e0ULL || rel >= 0x147d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d4f0 size=16 callers=0 calls=0
*/
void sub_147d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d4f0ULL || rel >= 0x147d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d500 size=16 callers=0 calls=0
*/
void sub_147d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d500ULL || rel >= 0x147d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d510 size=304 callers=0 calls=0
*/
void sub_147d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d510ULL || rel >= 0x147d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147d640 size=1296 callers=0 calls=10
   calls: sub_1474b60, sub_5cfaf0, sub_67b990, sub_67d450, sub_79b990, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e80580, sub_e807f0
   ref: ViewList
   ref: StateAlbumKikkakeSelect
*/
void StateAlbumKikkakeSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147d640ULL || rel >= 0x147db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147db50 size=224 callers=0 calls=5
   calls: sub_1475840, sub_1502120, sub_5cfad0, sub_e80580, sub_eb8ea0
*/
void sub_147db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147db50ULL || rel >= 0x147dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dc30 size=16 callers=0 calls=0
*/
void sub_147dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dc30ULL || rel >= 0x147dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dc40 size=240 callers=0 calls=0
*/
void sub_147dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dc40ULL || rel >= 0x147dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dd30 size=16 callers=0 calls=0
*/
void sub_147dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dd30ULL || rel >= 0x147dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dd40 size=16 callers=0 calls=0
*/
void sub_147dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dd40ULL || rel >= 0x147dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dd50 size=16 callers=0 calls=0
*/
void sub_147dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dd50ULL || rel >= 0x147dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dd60 size=16 callers=0 calls=0
*/
void sub_147dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dd60ULL || rel >= 0x147dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dd70 size=16 callers=0 calls=0
*/
void sub_147dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dd70ULL || rel >= 0x147dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dd80 size=16 callers=0 calls=0
*/
void sub_147dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dd80ULL || rel >= 0x147dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dd90 size=16 callers=0 calls=0
*/
void sub_147dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dd90ULL || rel >= 0x147dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dda0 size=16 callers=0 calls=0
*/
void sub_147dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dda0ULL || rel >= 0x147ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ddb0 size=304 callers=0 calls=0
*/
void sub_147ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ddb0ULL || rel >= 0x147dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147dee0 size=560 callers=0 calls=9
   calls: sub_1459e50, sub_1467080, sub_1470d30, sub_1474b60, sub_147c240, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewList
   ref: StateAlbumListToDetails
   ref: ViewCardInfo
*/
void StateAlbumListToDetails(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147dee0ULL || rel >= 0x147e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e110 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_147e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e110ULL || rel >= 0x147e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e150 size=16 callers=0 calls=0
*/
void sub_147e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e150ULL || rel >= 0x147e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e160 size=16 callers=0 calls=0
*/
void sub_147e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e160ULL || rel >= 0x147e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e170 size=16 callers=0 calls=0
*/
void sub_147e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e170ULL || rel >= 0x147e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e180 size=16 callers=0 calls=0
*/
void sub_147e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e180ULL || rel >= 0x147e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e190 size=16 callers=0 calls=0
*/
void sub_147e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e190ULL || rel >= 0x147e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e1a0 size=16 callers=0 calls=0
*/
void sub_147e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e1a0ULL || rel >= 0x147e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e1b0 size=16 callers=0 calls=0
*/
void sub_147e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e1b0ULL || rel >= 0x147e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e1c0 size=16 callers=0 calls=0
*/
void sub_147e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e1c0ULL || rel >= 0x147e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e1d0 size=16 callers=0 calls=0
*/
void sub_147e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e1d0ULL || rel >= 0x147e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e1e0 size=304 callers=0 calls=0
*/
void sub_147e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e1e0ULL || rel >= 0x147e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e310 size=496 callers=0 calls=7
   calls: sub_1458310, sub_1467080, sub_1471d50, sub_1471dd0, sub_147c240, sub_c39c40, sub_d0c0
   ref: ViewCardInfo
   ref: StateDownloadCardDetail
*/
void StateDownloadCardDetail(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e310ULL || rel >= 0x147e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e500 size=464 callers=0 calls=5
   calls: sub_1345d10, sub_1345e00, sub_1467080, sub_1471e00, sub_14cc6e0
*/
void sub_147e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e500ULL || rel >= 0x147e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e6d0 size=16 callers=0 calls=0
*/
void sub_147e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e6d0ULL || rel >= 0x147e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e6e0 size=16 callers=0 calls=0
*/
void sub_147e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e6e0ULL || rel >= 0x147e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e6f0 size=16 callers=0 calls=0
*/
void sub_147e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e6f0ULL || rel >= 0x147e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e700 size=16 callers=0 calls=0
*/
void sub_147e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e700ULL || rel >= 0x147e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e710 size=16 callers=0 calls=0
*/
void sub_147e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e710ULL || rel >= 0x147e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e720 size=16 callers=0 calls=0
*/
void sub_147e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e720ULL || rel >= 0x147e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e730 size=16 callers=0 calls=0
*/
void sub_147e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e730ULL || rel >= 0x147e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e740 size=16 callers=0 calls=0
*/
void sub_147e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e740ULL || rel >= 0x147e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e750 size=16 callers=0 calls=0
*/
void sub_147e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e750ULL || rel >= 0x147e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e760 size=304 callers=0 calls=0
*/
void sub_147e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e760ULL || rel >= 0x147e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147e890 size=1584 callers=0 calls=12
   calls: sub_1458310, sub_1467080, sub_1474b60, sub_5cfaf0, sub_67b990, sub_67d450, sub_79b990, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e80580, sub_e807f0
   ref: StateAlbumCardEraseCheck
   ref: ViewList
*/
void StateAlbumCardEraseCheck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147e890ULL || rel >= 0x147eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147eec0 size=336 callers=0 calls=11
   calls: sub_1458470, sub_1459e50, sub_1459e80, sub_1459f50, sub_145a0f0, sub_145a220, sub_1467080, sub_1475b00, sub_147af40, sub_e80580, sub_eb8ea0
*/
void sub_147eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147eec0ULL || rel >= 0x147f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f010 size=16 callers=0 calls=0
*/
void sub_147f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f010ULL || rel >= 0x147f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f020 size=144 callers=0 calls=0
*/
void sub_147f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f020ULL || rel >= 0x147f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f0b0 size=144 callers=0 calls=0
*/
void sub_147f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f0b0ULL || rel >= 0x147f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f140 size=16 callers=0 calls=0
*/
void sub_147f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f140ULL || rel >= 0x147f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f150 size=144 callers=0 calls=0
*/
void sub_147f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f150ULL || rel >= 0x147f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f1e0 size=144 callers=0 calls=0
*/
void sub_147f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f1e0ULL || rel >= 0x147f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f270 size=16 callers=0 calls=0
*/
void sub_147f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f270ULL || rel >= 0x147f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f280 size=16 callers=0 calls=0
*/
void sub_147f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f280ULL || rel >= 0x147f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f290 size=144 callers=0 calls=0
*/
void sub_147f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f290ULL || rel >= 0x147f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f320 size=144 callers=0 calls=0
*/
void sub_147f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f320ULL || rel >= 0x147f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f3b0 size=304 callers=0 calls=0
*/
void sub_147f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f3b0ULL || rel >= 0x147f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147f4e0 size=1456 callers=0 calls=10
   calls: sub_1474b60, sub_5cfaf0, sub_67b990, sub_67d450, sub_79b990, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e80580, sub_e807f0
   ref: ViewList
   ref: StateAlbumListEraseCheck
*/
void StateAlbumListEraseCheck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f4e0ULL || rel >= 0x147fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fa90 size=400 callers=0 calls=7
   calls: sub_1458470, sub_145a0f0, sub_1467080, sub_1475b00, sub_147af40, sub_e80580, sub_eb8ea0
*/
void sub_147fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fa90ULL || rel >= 0x147fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fc20 size=16 callers=0 calls=0
*/
void sub_147fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fc20ULL || rel >= 0x147fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fc30 size=144 callers=0 calls=0
*/
void sub_147fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fc30ULL || rel >= 0x147fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fcc0 size=144 callers=0 calls=0
*/
void sub_147fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fcc0ULL || rel >= 0x147fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fd50 size=16 callers=0 calls=0
*/
void sub_147fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fd50ULL || rel >= 0x147fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fd60 size=144 callers=0 calls=0
*/
void sub_147fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fd60ULL || rel >= 0x147fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fdf0 size=144 callers=0 calls=0
*/
void sub_147fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fdf0ULL || rel >= 0x147fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fe80 size=16 callers=0 calls=0
*/
void sub_147fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fe80ULL || rel >= 0x147fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fe90 size=16 callers=0 calls=0
*/
void sub_147fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fe90ULL || rel >= 0x147fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147fea0 size=144 callers=0 calls=0
*/
void sub_147fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147fea0ULL || rel >= 0x147ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ff30 size=144 callers=0 calls=0
*/
void sub_147ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ff30ULL || rel >= 0x147ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0147ffc0 size=304 callers=0 calls=0
*/
void sub_147ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ffc0ULL || rel >= 0x14800f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014800f0 size=752 callers=0 calls=12
   calls: sub_145fa60, sub_145fcc0, sub_1468690, sub_146a770, sub_1472790, sub_1478290, sub_1478c70, sub_67bfa0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewTop
   ref: StateAlbumTopToCardPassMenu
   ref: ViewBg
   ref: ViewTopMenu
   ref: ViewCardCode
   ref: ViewCardPassMenu
*/
void StateAlbumTopToCardPassMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14800f0ULL || rel >= 0x14803e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014803e0 size=96 callers=0 calls=2
   calls: sub_145fd00, sub_eb6530
*/
void sub_14803e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14803e0ULL || rel >= 0x1480440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480440 size=16 callers=0 calls=0
*/
void sub_1480440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480440ULL || rel >= 0x1480450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480450 size=16 callers=0 calls=0
*/
void sub_1480450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480450ULL || rel >= 0x1480460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480460 size=16 callers=0 calls=0
*/
void sub_1480460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480460ULL || rel >= 0x1480470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480470 size=16 callers=0 calls=0
*/
void sub_1480470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480470ULL || rel >= 0x1480480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480480 size=16 callers=0 calls=0
*/
void sub_1480480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480480ULL || rel >= 0x1480490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480490 size=16 callers=0 calls=0
*/
void sub_1480490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480490ULL || rel >= 0x14804a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014804a0 size=16 callers=0 calls=0
*/
void sub_14804a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14804a0ULL || rel >= 0x14804b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014804b0 size=16 callers=0 calls=0
*/
void sub_14804b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14804b0ULL || rel >= 0x14804c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014804c0 size=16 callers=0 calls=0
*/
void sub_14804c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14804c0ULL || rel >= 0x14804d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014804d0 size=304 callers=0 calls=0
*/
void sub_14804d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14804d0ULL || rel >= 0x1480600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480600 size=464 callers=0 calls=6
   calls: sub_146a770, sub_1478c70, sub_67bfa0, sub_c39c40, sub_d0c0, sub_eb6230
   ref: ViewCardCode
   ref: ViewCardPassMenu
   ref: StateCardCodeToCardPassMenu
*/
void StateCardCodeToCardPassMenu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480600ULL || rel >= 0x14807d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014807d0 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_14807d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14807d0ULL || rel >= 0x1480810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480810 size=16 callers=0 calls=0
*/
void sub_1480810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480810ULL || rel >= 0x1480820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480820 size=16 callers=0 calls=0
*/
void sub_1480820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480820ULL || rel >= 0x1480830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480830 size=16 callers=0 calls=0
*/
void sub_1480830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480830ULL || rel >= 0x1480840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480840 size=16 callers=0 calls=0
*/
void sub_1480840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480840ULL || rel >= 0x1480850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480850 size=16 callers=0 calls=0
*/
void sub_1480850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480850ULL || rel >= 0x1480860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480860 size=16 callers=0 calls=0
*/
void sub_1480860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480860ULL || rel >= 0x1480870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480870 size=16 callers=0 calls=0
*/
void sub_1480870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480870ULL || rel >= 0x1480880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480880 size=16 callers=0 calls=0
*/
void sub_1480880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480880ULL || rel >= 0x1480890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480890 size=16 callers=0 calls=0
*/
void sub_1480890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480890ULL || rel >= 0x14808a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014808a0 size=304 callers=0 calls=0
*/
void sub_14808a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14808a0ULL || rel >= 0x14809d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014809d0 size=640 callers=0 calls=8
   calls: sub_145fa60, sub_145fcc0, sub_1468690, sub_1472790, sub_1478c70, sub_c39c40, sub_d0c0, sub_eb6230
   ref: ViewTop
   ref: ViewBg
   ref: ViewTopMenu
   ref: StateCardPassMenuToAlbumTop
   ref: ViewCardPassMenu
*/
void StateCardPassMenuToAlbumTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14809d0ULL || rel >= 0x1480c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480c50 size=96 callers=0 calls=2
   calls: sub_145fd00, sub_eb6530
*/
void sub_1480c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480c50ULL || rel >= 0x1480cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480cb0 size=16 callers=0 calls=0
*/
void sub_1480cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480cb0ULL || rel >= 0x1480cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480cc0 size=16 callers=0 calls=0
*/
void sub_1480cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480cc0ULL || rel >= 0x1480cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480cd0 size=16 callers=0 calls=0
*/
void sub_1480cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480cd0ULL || rel >= 0x1480ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480ce0 size=16 callers=0 calls=0
*/
void sub_1480ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480ce0ULL || rel >= 0x1480cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480cf0 size=16 callers=0 calls=0
*/
void sub_1480cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480cf0ULL || rel >= 0x1480d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480d00 size=16 callers=0 calls=0
*/
void sub_1480d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480d00ULL || rel >= 0x1480d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480d10 size=16 callers=0 calls=0
*/
void sub_1480d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480d10ULL || rel >= 0x1480d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480d20 size=16 callers=0 calls=0
*/
void sub_1480d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480d20ULL || rel >= 0x1480d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480d30 size=16 callers=0 calls=0
*/
void sub_1480d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480d30ULL || rel >= 0x1480d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480d40 size=304 callers=0 calls=0
*/
void sub_1480d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480d40ULL || rel >= 0x1480e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01480e70 size=480 callers=0 calls=7
   calls: sub_146a770, sub_146b8b0, sub_1478c70, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: StateCardPassMenuToInputCode
   ref: ViewCardCode
   ref: ViewCardPassMenu
*/
void StateCardPassMenuToInputCode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480e70ULL || rel >= 0x1481050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481050 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_1481050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481050ULL || rel >= 0x1481090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481090 size=16 callers=0 calls=0
*/
void sub_1481090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481090ULL || rel >= 0x14810a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014810a0 size=16 callers=0 calls=0
*/
void sub_14810a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14810a0ULL || rel >= 0x14810b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014810b0 size=16 callers=0 calls=0
*/
void sub_14810b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14810b0ULL || rel >= 0x14810c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014810c0 size=16 callers=0 calls=0
*/
void sub_14810c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14810c0ULL || rel >= 0x14810d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014810d0 size=16 callers=0 calls=0
*/
void sub_14810d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14810d0ULL || rel >= 0x14810e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014810e0 size=16 callers=0 calls=0
*/
void sub_14810e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14810e0ULL || rel >= 0x14810f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014810f0 size=16 callers=0 calls=0
*/
void sub_14810f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14810f0ULL || rel >= 0x1481100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481100 size=16 callers=0 calls=0
*/
void sub_1481100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481100ULL || rel >= 0x1481110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481110 size=16 callers=0 calls=0
*/
void sub_1481110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481110ULL || rel >= 0x1481120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481120 size=304 callers=0 calls=0
*/
void sub_1481120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481120ULL || rel >= 0x1481250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481250 size=480 callers=0 calls=7
   calls: sub_146a770, sub_146b8b0, sub_1478c70, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: StateCardPassMenuToNotSharing
   ref: ViewCardCode
   ref: ViewCardPassMenu
*/
void StateCardPassMenuToNotSharing(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481250ULL || rel >= 0x1481430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481430 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_1481430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481430ULL || rel >= 0x1481470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481470 size=16 callers=0 calls=0
*/
void sub_1481470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481470ULL || rel >= 0x1481480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481480 size=16 callers=0 calls=0
*/
void sub_1481480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481480ULL || rel >= 0x1481490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481490 size=16 callers=0 calls=0
*/
void sub_1481490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481490ULL || rel >= 0x14814a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014814a0 size=16 callers=0 calls=0
*/
void sub_14814a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14814a0ULL || rel >= 0x14814b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014814b0 size=16 callers=0 calls=0
*/
void sub_14814b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14814b0ULL || rel >= 0x14814c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014814c0 size=16 callers=0 calls=0
*/
void sub_14814c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14814c0ULL || rel >= 0x14814d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014814d0 size=16 callers=0 calls=0
*/
void sub_14814d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14814d0ULL || rel >= 0x14814e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014814e0 size=16 callers=0 calls=0
*/
void sub_14814e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14814e0ULL || rel >= 0x14814f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014814f0 size=16 callers=0 calls=0
*/
void sub_14814f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14814f0ULL || rel >= 0x1481500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481500 size=304 callers=0 calls=0
*/
void sub_1481500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481500ULL || rel >= 0x1481630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481630 size=480 callers=0 calls=7
   calls: sub_146a770, sub_146b8b0, sub_1478c70, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: ViewCardCode
   ref: StateCardPassMenuToDisplayMyCode
   ref: ViewCardPassMenu
*/
void StateCardPassMenuToDisplayMyCode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481630ULL || rel >= 0x1481810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481810 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_1481810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481810ULL || rel >= 0x1481850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481850 size=16 callers=0 calls=0
*/
void sub_1481850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481850ULL || rel >= 0x1481860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481860 size=16 callers=0 calls=0
*/
void sub_1481860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481860ULL || rel >= 0x1481870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481870 size=16 callers=0 calls=0
*/
void sub_1481870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481870ULL || rel >= 0x1481880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481880 size=16 callers=0 calls=0
*/
void sub_1481880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481880ULL || rel >= 0x1481890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481890 size=16 callers=0 calls=0
*/
void sub_1481890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481890ULL || rel >= 0x14818a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014818a0 size=16 callers=0 calls=0
*/
void sub_14818a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14818a0ULL || rel >= 0x14818b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014818b0 size=16 callers=0 calls=0
*/
void sub_14818b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14818b0ULL || rel >= 0x14818c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014818c0 size=16 callers=0 calls=0
*/
void sub_14818c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14818c0ULL || rel >= 0x14818d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014818d0 size=16 callers=0 calls=0
*/
void sub_14818d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14818d0ULL || rel >= 0x14818e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014818e0 size=304 callers=0 calls=0
*/
void sub_14818e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14818e0ULL || rel >= 0x1481a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481a10 size=112 callers=1 calls=1
   calls: sub_1481a80
*/
void sub_1481a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481a10ULL || rel >= 0x1481a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481a80 size=288 callers=1 calls=3
   calls: sub_1482160, sub_c38350, sub_e9db40
*/
void sub_1481a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481a80ULL || rel >= 0x1481ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481ba0 size=16 callers=0 calls=0
*/
void sub_1481ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481ba0ULL || rel >= 0x1481bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481bb0 size=16 callers=0 calls=0
*/
void sub_1481bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481bb0ULL || rel >= 0x1481bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481bc0 size=224 callers=0 calls=1
   calls: sub_1481cb0
*/
void sub_1481bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481bc0ULL || rel >= 0x1481ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481ca0 size=16 callers=0 calls=0
*/
void sub_1481ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481ca0ULL || rel >= 0x1481cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481cb0 size=272 callers=1 calls=3
   calls: sub_14822f0, sub_672c10, sub_c386f0
*/
void sub_1481cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481cb0ULL || rel >= 0x1481dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481dc0 size=96 callers=0 calls=0
*/
void sub_1481dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481dc0ULL || rel >= 0x1481e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481e20 size=96 callers=0 calls=0
*/
void sub_1481e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481e20ULL || rel >= 0x1481e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481e80 size=16 callers=0 calls=0
*/
void sub_1481e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481e80ULL || rel >= 0x1481e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481e90 size=96 callers=0 calls=0
*/
void sub_1481e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481e90ULL || rel >= 0x1481ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481ef0 size=96 callers=0 calls=0
*/
void sub_1481ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481ef0ULL || rel >= 0x1481f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481f50 size=16 callers=0 calls=0
*/
void sub_1481f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481f50ULL || rel >= 0x1481f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481f60 size=16 callers=0 calls=0
*/
void sub_1481f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481f60ULL || rel >= 0x1481f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481f70 size=96 callers=0 calls=0
*/
void sub_1481f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481f70ULL || rel >= 0x1481fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01481fd0 size=96 callers=0 calls=0
*/
void sub_1481fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1481fd0ULL || rel >= 0x1482030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482030 size=304 callers=0 calls=0
*/
void sub_1482030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482030ULL || rel >= 0x1482160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482160 size=400 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_1482160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482160ULL || rel >= 0x14822f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014822f0 size=256 callers=1 calls=2
   calls: sub_14823f0, sub_e7b660
*/
void sub_14822f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14822f0ULL || rel >= 0x14823f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014823f0 size=224 callers=1 calls=3
   calls: sub_14824d0, sub_7c2da0, sub_e7b5e0
*/
void sub_14823f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14823f0ULL || rel >= 0x14824d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014824d0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14824d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14824d0ULL || rel >= 0x14825c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014825c0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_14825c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14825c0ULL || rel >= 0x1482640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482640 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1482640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482640ULL || rel >= 0x14827b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014827b0 size=96 callers=0 calls=1
   calls: sub_14829d0
*/
void sub_14827b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14827b0ULL || rel >= 0x1482810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482810 size=16 callers=0 calls=0
*/
void sub_1482810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482810ULL || rel >= 0x1482820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482820 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1482820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482820ULL || rel >= 0x14828c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014828c0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14828c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14828c0ULL || rel >= 0x1482980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482980 size=16 callers=0 calls=0
*/
void sub_1482980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482980ULL || rel >= 0x1482990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482990 size=16 callers=0 calls=0
*/
void sub_1482990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482990ULL || rel >= 0x14829a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014829a0 size=16 callers=0 calls=0
*/
void sub_14829a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14829a0ULL || rel >= 0x14829b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014829b0 size=32 callers=0 calls=0
*/
void sub_14829b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14829b0ULL || rel >= 0x14829d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014829d0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_14829d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14829d0ULL || rel >= 0x1482ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482ab0 size=128 callers=0 calls=0
*/
void sub_1482ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482ab0ULL || rel >= 0x1482b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01482b30 size=1952 callers=0 calls=19
   calls: font_fs_150_bold_00, sub_1345d10, sub_1345f10, sub_1456d00, sub_1457050, sub_1457f30, sub_1459830, sub_1467c00, sub_14832d0, sub_14beec0, sub_14bfa90, sub_14cace0
   ... +7 more
   ref: CommonOptionBar
   ref: ViewBg
   ref: common/trainer_license.dat
   ref: ViewCardInfo
   ref: ViewCard
*/
void CommonOptionBar_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482b30ULL || rel >= 0x14832d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014832d0 size=432 callers=1 calls=3
   calls: sub_1484170, sub_e7c160, sub_e7c210
*/
void sub_14832d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14832d0ULL || rel >= 0x1483480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483480 size=64 callers=0 calls=2
   calls: sub_14bf040, sub_14cae50
*/
void sub_1483480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483480ULL || rel >= 0x14834c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014834c0 size=528 callers=0 calls=9
   calls: L_card_00, sub_1457720, sub_1458300, sub_1458350, sub_1470d30, sub_147c240, sub_14bf750, sub_795bc0, sub_e7eb10
   ref: CommonOptionBar
   ref: ViewCardInfo
   ref: ViewCard
*/
void CommonOptionBar_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14834c0ULL || rel >= 0x14836d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014836d0 size=144 callers=0 calls=6
   calls: sub_14bf2f0, sub_14bfb60, sub_14bfba0, sub_14cae60, sub_14cc350, sub_682dd0
*/
void sub_14836d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14836d0ULL || rel >= 0x1483760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483760 size=224 callers=0 calls=3
   calls: sub_1458260, sub_14bf490, sub_14caf00
*/
void sub_1483760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483760ULL || rel >= 0x1483840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483840 size=512 callers=0 calls=4
   calls: sub_14842e0, sub_1484420, sub_1484560, sub_e7c160
*/
void sub_1483840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483840ULL || rel >= 0x1483a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483a40 size=512 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1483a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483a40ULL || rel >= 0x1483c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483c40 size=16 callers=0 calls=0
*/
void sub_1483c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483c40ULL || rel >= 0x1483c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483c50 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1483c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483c50ULL || rel >= 0x1483d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483d00 size=16 callers=0 calls=0
*/
void sub_1483d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483d00ULL || rel >= 0x1483d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483d10 size=16 callers=0 calls=0
*/
void sub_1483d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483d10ULL || rel >= 0x1483d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483d20 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1483d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483d20ULL || rel >= 0x1483dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483dd0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1483dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483dd0ULL || rel >= 0x1483e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483e80 size=16 callers=0 calls=0
*/
void sub_1483e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483e80ULL || rel >= 0x1483e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483e90 size=16 callers=0 calls=0
*/
void sub_1483e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483e90ULL || rel >= 0x1483ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483ea0 size=112 callers=0 calls=0
*/
void sub_1483ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483ea0ULL || rel >= 0x1483f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483f10 size=112 callers=0 calls=0
*/
void sub_1483f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483f10ULL || rel >= 0x1483f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483f80 size=16 callers=0 calls=0
*/
void sub_1483f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483f80ULL || rel >= 0x1483f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01483f90 size=112 callers=0 calls=0
*/
void sub_1483f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1483f90ULL || rel >= 0x1484000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484000 size=112 callers=0 calls=0
*/
void sub_1484000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484000ULL || rel >= 0x1484070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484070 size=16 callers=0 calls=0
*/
void sub_1484070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484070ULL || rel >= 0x1484080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484080 size=16 callers=0 calls=0
*/
void sub_1484080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484080ULL || rel >= 0x1484090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484090 size=112 callers=0 calls=0
*/
void sub_1484090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484090ULL || rel >= 0x1484100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484100 size=112 callers=0 calls=0
*/
void sub_1484100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484100ULL || rel >= 0x1484170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484170 size=304 callers=4 calls=0
*/
void sub_1484170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484170ULL || rel >= 0x14842a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014842a0 size=16 callers=0 calls=0
*/
void sub_14842a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14842a0ULL || rel >= 0x14842b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014842b0 size=16 callers=0 calls=0
*/
void sub_14842b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14842b0ULL || rel >= 0x14842c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014842c0 size=16 callers=0 calls=0
*/
void sub_14842c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14842c0ULL || rel >= 0x14842d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014842d0 size=16 callers=0 calls=0
*/
void sub_14842d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14842d0ULL || rel >= 0x14842e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014842e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_14842e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14842e0ULL || rel >= 0x1484420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484420 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1484420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484420ULL || rel >= 0x1484560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484560 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1484560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484560ULL || rel >= 0x14846a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014846a0 size=128 callers=0 calls=0
*/
void sub_14846a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14846a0ULL || rel >= 0x1484720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484720 size=640 callers=0 calls=8
   calls: sub_1457720, sub_145fa60, sub_147c240, sub_795bc0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: CommonOptionBar
   ref: StateLiveEnd
   ref: ViewBg
   ref: ViewCardInfo
   ref: ViewCard
*/
void CommonOptionBar_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484720ULL || rel >= 0x14849a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014849a0 size=80 callers=0 calls=2
   calls: sub_eb6530, sub_eb7830
*/
void sub_14849a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14849a0ULL || rel >= 0x14849f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014849f0 size=96 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_14849f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14849f0ULL || rel >= 0x1484a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484a50 size=16 callers=0 calls=0
*/
void sub_1484a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484a50ULL || rel >= 0x1484a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484a60 size=16 callers=0 calls=0
*/
void sub_1484a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484a60ULL || rel >= 0x1484a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484a70 size=16 callers=0 calls=0
*/
void sub_1484a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484a70ULL || rel >= 0x1484a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484a80 size=16 callers=0 calls=0
*/
void sub_1484a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484a80ULL || rel >= 0x1484a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484a90 size=16 callers=0 calls=0
*/
void sub_1484a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484a90ULL || rel >= 0x1484aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484aa0 size=16 callers=0 calls=0
*/
void sub_1484aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484aa0ULL || rel >= 0x1484ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484ab0 size=16 callers=0 calls=0
*/
void sub_1484ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484ab0ULL || rel >= 0x1484ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484ac0 size=16 callers=0 calls=0
*/
void sub_1484ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484ac0ULL || rel >= 0x1484ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484ad0 size=304 callers=0 calls=0
*/
void sub_1484ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484ad0ULL || rel >= 0x1484c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484c00 size=496 callers=0 calls=6
   calls: sub_1458310, sub_1471e60, sub_147c240, sub_1484170, sub_c39c40, sub_d0c0
   ref: ViewCardInfo
   ref: StateLiveMain
*/
void StateLiveMain(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484c00ULL || rel >= 0x1484df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484df0 size=464 callers=0 calls=6
   calls: sub_1345d10, sub_1345e00, sub_1345f10, sub_1471e00, sub_1484170, sub_14cc6e0
*/
void sub_1484df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484df0ULL || rel >= 0x1484fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484fc0 size=16 callers=0 calls=0
*/
void sub_1484fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484fc0ULL || rel >= 0x1484fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484fd0 size=16 callers=0 calls=0
*/
void sub_1484fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484fd0ULL || rel >= 0x1484fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484fe0 size=16 callers=0 calls=0
*/
void sub_1484fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484fe0ULL || rel >= 0x1484ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01484ff0 size=16 callers=0 calls=0
*/
void sub_1484ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1484ff0ULL || rel >= 0x1485000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485000 size=16 callers=0 calls=0
*/
void sub_1485000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485000ULL || rel >= 0x1485010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485010 size=16 callers=0 calls=0
*/
void sub_1485010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485010ULL || rel >= 0x1485020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485020 size=16 callers=0 calls=0
*/
void sub_1485020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485020ULL || rel >= 0x1485030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485030 size=16 callers=0 calls=0
*/
void sub_1485030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485030ULL || rel >= 0x1485040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485040 size=16 callers=0 calls=0
*/
void sub_1485040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485040ULL || rel >= 0x1485050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485050 size=304 callers=0 calls=0
*/
void sub_1485050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485050ULL || rel >= 0x1485180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485180 size=128 callers=0 calls=0
*/
void sub_1485180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485180ULL || rel >= 0x1485200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485200 size=688 callers=0 calls=9
   calls: sub_1457720, sub_145fa60, sub_147c240, sub_795bc0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230, sub_eb7730
   ref: CommonOptionBar
   ref: ViewBg
   ref: ViewCardInfo
   ref: ViewCard
   ref: StateLiveStart
*/
void CommonOptionBar_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485200ULL || rel >= 0x14854b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014854b0 size=80 callers=0 calls=2
   calls: sub_eb6530, sub_eb7790
*/
void sub_14854b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14854b0ULL || rel >= 0x1485500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485500 size=16 callers=0 calls=0
*/
void sub_1485500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485500ULL || rel >= 0x1485510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485510 size=16 callers=0 calls=0
*/
void sub_1485510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485510ULL || rel >= 0x1485520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485520 size=16 callers=0 calls=0
*/
void sub_1485520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485520ULL || rel >= 0x1485530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485530 size=16 callers=0 calls=0
*/
void sub_1485530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485530ULL || rel >= 0x1485540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485540 size=16 callers=0 calls=0
*/
void sub_1485540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485540ULL || rel >= 0x1485550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485550 size=16 callers=0 calls=0
*/
void sub_1485550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485550ULL || rel >= 0x1485560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485560 size=16 callers=0 calls=0
*/
void sub_1485560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485560ULL || rel >= 0x1485570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485570 size=16 callers=0 calls=0
*/
void sub_1485570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485570ULL || rel >= 0x1485580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485580 size=16 callers=0 calls=0
*/
void sub_1485580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485580ULL || rel >= 0x1485590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485590 size=304 callers=0 calls=0
*/
void sub_1485590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485590ULL || rel >= 0x14856c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014856c0 size=112 callers=1 calls=1
   calls: sub_1485730
*/
void sub_14856c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14856c0ULL || rel >= 0x1485730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485730 size=288 callers=1 calls=3
   calls: sub_1485ec0, sub_c38350, sub_e9db40
*/
void sub_1485730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485730ULL || rel >= 0x1485850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485850 size=96 callers=0 calls=0
*/
void sub_1485850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485850ULL || rel >= 0x14858b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014858b0 size=96 callers=0 calls=0
*/
void sub_14858b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14858b0ULL || rel >= 0x1485910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485910 size=96 callers=0 calls=0
*/
void sub_1485910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485910ULL || rel >= 0x1485970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485970 size=96 callers=0 calls=0
*/
void sub_1485970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485970ULL || rel >= 0x14859d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014859d0 size=96 callers=0 calls=0
*/
void sub_14859d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14859d0ULL || rel >= 0x1485a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485a30 size=96 callers=0 calls=0
*/
void sub_1485a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485a30ULL || rel >= 0x1485a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485a90 size=16 callers=0 calls=0
*/
void sub_1485a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485a90ULL || rel >= 0x1485aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485aa0 size=16 callers=0 calls=0
*/
void sub_1485aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485aa0ULL || rel >= 0x1485ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485ab0 size=400 callers=0 calls=3
   calls: sub_1485c50, sub_14e0350, sub_14e0450
*/
void sub_1485ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485ab0ULL || rel >= 0x1485c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485c40 size=16 callers=0 calls=0
*/
void sub_1485c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485c40ULL || rel >= 0x1485c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485c50 size=272 callers=1 calls=3
   calls: sub_1486050, sub_672c10, sub_c386f0
*/
void sub_1485c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485c50ULL || rel >= 0x1485d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485d60 size=16 callers=0 calls=0
*/
void sub_1485d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485d60ULL || rel >= 0x1485d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485d70 size=16 callers=0 calls=0
*/
void sub_1485d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485d70ULL || rel >= 0x1485d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485d80 size=16 callers=0 calls=0
*/
void sub_1485d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485d80ULL || rel >= 0x1485d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485d90 size=304 callers=0 calls=0
*/
void sub_1485d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485d90ULL || rel >= 0x1485ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01485ec0 size=400 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_1485ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1485ec0ULL || rel >= 0x1486050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486050 size=256 callers=1 calls=2
   calls: sub_1486150, sub_e7b660
*/
void sub_1486050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486050ULL || rel >= 0x1486150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486150 size=224 callers=1 calls=3
   calls: sub_1486230, sub_7c2da0, sub_e7b5e0
*/
void sub_1486150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486150ULL || rel >= 0x1486230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486230 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1486230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486230ULL || rel >= 0x1486320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486320 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1486320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486320ULL || rel >= 0x14863a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014863a0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14863a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14863a0ULL || rel >= 0x1486510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486510 size=96 callers=0 calls=1
   calls: sub_1486730
*/
void sub_1486510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486510ULL || rel >= 0x1486570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486570 size=16 callers=0 calls=0
*/
void sub_1486570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486570ULL || rel >= 0x1486580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486580 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1486580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486580ULL || rel >= 0x1486620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486620 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1486620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486620ULL || rel >= 0x14866e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014866e0 size=16 callers=0 calls=0
*/
void sub_14866e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14866e0ULL || rel >= 0x14866f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014866f0 size=16 callers=0 calls=0
*/
void sub_14866f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14866f0ULL || rel >= 0x1486700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486700 size=16 callers=0 calls=0
*/
void sub_1486700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486700ULL || rel >= 0x1486710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486710 size=32 callers=0 calls=0
*/
void sub_1486710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486710ULL || rel >= 0x1486730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486730 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1486730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486730ULL || rel >= 0x1486810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486810 size=128 callers=0 calls=0
*/
void sub_1486810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486810ULL || rel >= 0x1486890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01486890 size=3936 callers=0 calls=26
   calls: sub_1345ca0, sub_14877f0, sub_1489610, sub_1489780, sub_1489ae0, sub_1489e30, sub_148a270, sub_148a6c0, sub_148aac0, sub_148ae30, sub_148b180, sub_148b4d0
   ... +14 more
   ref: OptionBar
   ref: common/trainer_license_maker.dat
   ref: ViewCustomize
   ref: ViewTop
   ref: ViewNavigator
   ref: ViewBackGround
   ref: ViewOption
   ref: ViewPhotography
*/
void ViewPhotography(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1486890ULL || rel >= 0x14877f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014877f0 size=432 callers=1 calls=3
   calls: sub_1489610, sub_e7c160, sub_e7c210
*/
void sub_14877f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14877f0ULL || rel >= 0x14879a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014879a0 size=96 callers=0 calls=3
   calls: sub_1498d80, sub_14bf040, sub_14cae50
*/
void sub_14879a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14879a0ULL || rel >= 0x1487a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01487a00 size=128 callers=0 calls=3
   calls: L_license_00, sub_14a42a0, sub_14cc630
*/
void sub_1487a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1487a00ULL || rel >= 0x1487a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01487a80 size=144 callers=0 calls=6
   calls: anime__s_6, sub_14bf2f0, sub_14bfb60, sub_14bfba0, sub_14cae60, sub_682dd0
*/
void sub_1487a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1487a80ULL || rel >= 0x1487b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01487b10 size=208 callers=0 calls=3
   calls: sub_1498eb0, sub_14bf490, sub_14caf00
*/
void sub_1487b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1487b10ULL || rel >= 0x1487be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01487be0 size=1984 callers=0 calls=11
   calls: sub_148bab0, sub_148bbf0, sub_148c0f0, sub_148c230, sub_148c5f0, sub_148caf0, sub_148ceb0, sub_148d270, sub_148d630, sub_148d770, sub_e7c160
*/
void sub_1487be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1487be0ULL || rel >= 0x14883a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014883a0 size=560 callers=0 calls=5
   calls: sub_148bd30, sub_148be70, sub_148bfb0, sub_79c240, sub_e7c160
*/
void sub_14883a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14883a0ULL || rel >= 0x14885d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014885d0 size=448 callers=0 calls=4
   calls: sub_148c370, sub_148c4b0, sub_79c240, sub_e7c160
*/
void sub_14885d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14885d0ULL || rel >= 0x1488790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01488790 size=576 callers=0 calls=5
   calls: sub_148c730, sub_148c870, sub_148c9b0, sub_79c240, sub_e7c160
*/
void sub_1488790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1488790ULL || rel >= 0x14889d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014889d0 size=448 callers=0 calls=4
   calls: sub_148cc30, sub_148cd70, sub_79c240, sub_e7c160
*/
void sub_14889d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14889d0ULL || rel >= 0x1488b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01488b90 size=480 callers=0 calls=4
   calls: sub_148cff0, sub_148d130, sub_79c240, sub_e7c160
*/
void sub_1488b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1488b90ULL || rel >= 0x1488d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01488d70 size=480 callers=0 calls=4
   calls: sub_148d3b0, sub_148d4f0, sub_79c240, sub_e7c160
*/
void sub_1488d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1488d70ULL || rel >= 0x1488f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01488f50 size=496 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1488f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1488f50ULL || rel >= 0x1489140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489140 size=16 callers=0 calls=0
*/
void sub_1489140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489140ULL || rel >= 0x1489150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489150 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1489150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489150ULL || rel >= 0x1489200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489200 size=16 callers=0 calls=0
*/
void sub_1489200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489200ULL || rel >= 0x1489210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489210 size=16 callers=0 calls=0
*/
void sub_1489210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489210ULL || rel >= 0x1489220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489220 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1489220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489220ULL || rel >= 0x14892d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014892d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14892d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14892d0ULL || rel >= 0x1489380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489380 size=16 callers=0 calls=0
*/
void sub_1489380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489380ULL || rel >= 0x1489390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489390 size=16 callers=0 calls=0
*/
void sub_1489390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489390ULL || rel >= 0x14893a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014893a0 size=96 callers=0 calls=0
*/
void sub_14893a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14893a0ULL || rel >= 0x1489400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489400 size=96 callers=0 calls=0
*/
void sub_1489400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489400ULL || rel >= 0x1489460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489460 size=16 callers=0 calls=0
*/
void sub_1489460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489460ULL || rel >= 0x1489470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489470 size=96 callers=0 calls=0
*/
void sub_1489470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489470ULL || rel >= 0x14894d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014894d0 size=96 callers=0 calls=0
*/
void sub_14894d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14894d0ULL || rel >= 0x1489530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489530 size=16 callers=0 calls=0
*/
void sub_1489530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489530ULL || rel >= 0x1489540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489540 size=16 callers=0 calls=0
*/
void sub_1489540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489540ULL || rel >= 0x1489550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489550 size=96 callers=0 calls=0
*/
void sub_1489550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489550ULL || rel >= 0x14895b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014895b0 size=96 callers=0 calls=0
*/
void sub_14895b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14895b0ULL || rel >= 0x1489610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489610 size=304 callers=12 calls=0
*/
void sub_1489610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489610ULL || rel >= 0x1489740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489740 size=16 callers=0 calls=0
*/
void sub_1489740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489740ULL || rel >= 0x1489750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489750 size=16 callers=0 calls=0
*/
void sub_1489750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489750ULL || rel >= 0x1489760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489760 size=16 callers=0 calls=0
*/
void sub_1489760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489760ULL || rel >= 0x1489770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489770 size=16 callers=0 calls=0
*/
void sub_1489770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489770ULL || rel >= 0x1489780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489780 size=288 callers=1 calls=2
   calls: sub_14898a0, sub_e809c0
*/
void sub_1489780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489780ULL || rel >= 0x14898a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014898a0 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_14898a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14898a0ULL || rel >= 0x1489ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489ae0 size=288 callers=1 calls=2
   calls: sub_1489c00, sub_e809c0
*/
void sub_1489ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489ae0ULL || rel >= 0x1489c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489c00 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1489c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489c00ULL || rel >= 0x1489e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01489e30 size=288 callers=1 calls=2
   calls: sub_1489f50, sub_e809c0
*/
void sub_1489e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1489e30ULL || rel >= 0x1489f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

